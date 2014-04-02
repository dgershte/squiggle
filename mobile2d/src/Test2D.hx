package;

import flash.display.*;
import flash.events.*;
import flash.geom.Vector3D;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.Vector;
import haxe.xml.Fast;
import openfl.Assets;
import flash.Lib;

class Char
{
    public var x:Float;
    public var y:Float;
    public var z:Float=0;
    public var lastZ:Float=0;
    public var height:Float=10;
    public var rot:Float;
    public var radius:Float;
    private var jumping:Bool=false;
    public var yspd:Float=0;
    private var grav:Float=1;
    public var lastPoly:PolyPrism=null;

    public function new(x:Float=0,y:Float=0,rot:Float=0,radius:Float=1){
        this.x=x;
        this.y=y;
        this.rot=rot;
        this.radius=radius;
    }

    public function jump(startspd:Float){
        if(!jumping){
            yspd=startspd;
            jumping=true;
        }
    }

    public function stopJump(zpos:Float){
        if(jumping){
            jumping=false;
            z=zpos;
        }
    }

    public function isJumping():Bool{
        return jumping;
    }

    public function updateZ(){
        if(!jumping){
            return;
        }
        yspd-=grav;
        lastZ=z;
        z+=yspd;
        if(z<0){
            z=0;
            jumping=false;
        }
    }
}

class PolyPrism
{
    public var poly:Poly;
    public var minZ:Float;
    public var maxZ:Float;
    public function new(poly:Poly,minZ:Float, maxZ:Float){
        this.poly=poly;
        this.minZ=minZ;
        this.maxZ=maxZ;
    }
}

class Poly
{
    public var x:Float;
    public var y:Float;
    public var points:Vector<Point>;
    public function new(x:Float, y:Float, points:Vector<Point>){
        this.x=x;
        this.y=y;
        this.points=points;
    }
    public function render(g:Graphics,offY:Float=0):Void {
        var lastPoint:Point = getTransformedPoint(points.length-1);
        g.moveTo(lastPoint.x,lastPoint.y+offY);
        var i:Int = 0;
        while(i<points.length){
            var p:Point = getTransformedPoint(i);
            g.lineTo(p.x,p.y+offY);
            i++;
        }
    }

    public function getTransformedPoint(i:Int):Point{
        var p:Point = points[i];
        return new Point(p.x+x,p.y+y);
    }
}

class Collision
{
    public static function dot(p0:Point, p1:Point):Float{
        return p0.x*p1.x+p0.y*p1.y;
    }

    /**
     * Return a 1D segment with the 2D projection values of 2D Polygon projected on a
     * 2D Vector vec, ordered (min,max)*/
    public static function projectPolyOnVec(poly:Poly,vec:Point):Point{
        var min:Float;
        var max:Float;
        min = max = dot(poly.getTransformedPoint(0),vec);
        var i:Int = 1;
        var n:Int = poly.points.length;
        while(i<n){
            var dotprod:Float=dot(poly.getTransformedPoint(i),vec);
            min=Math.min(dotprod,min);
            max=Math.max(dotprod,max);
            i++;
        }
        return new Point(min,max);
    }

    /**
     * Return a 1D segment with the 2D projection values of 2D Circle projected on a
     * 2D Vector vec, ordered (min,max)*/
    public static function projectCircleOnVec(pos:Point, radius:Float, vec:Point):Point{
        var dotprod:Float = dot(pos,vec);
        return new Point(dotprod-radius,dotprod+radius);
    }

    /**
     * Given two 1D segments, return overlap distance from v0 to v1 if 
     * exists 1D overlap, or -1 if there is no overlap
     */
    public static function getOverlap(v0:Point, v1:Point):Float{
        //assuming v0(min,max) and v1(min,max)
        var start:Float = Math.max(v0.x,v1.x);
        var end:Float = Math.min(v0.y,v1.y);
        var dist = end-start;
        return (dist<0)?-1:dist;
    }

    public static function getNormals(poly:Poly):Vector<Point>{
        var vec:Vector<Point> = new Vector<Point>();
        var i:Int = 0;
        var n:Int = poly.points.length;
        while(i<n){
            var p0:Point = poly.getTransformedPoint(i);
            var p1:Point = poly.getTransformedPoint((i+1)%n);
            var normal:Point = new Point(-(p1.y-p0.y),p1.x-p0.x);
            var d=Math.sqrt(normal.x*normal.x+normal.y*normal.y);
            normal = new Point(normal.x/d,normal.y/d);
            vec.push(normal);
            i++;
        }
        return vec;
    }

    /**
     * Given a circle and convex polygon, return shortest overlap vector if there is
     * a collision or null if there is no collision
     */
    public static function getOverlapCirclePoly(circlePos:Point, radius:Float, poly:Poly):Point{
        var normals:Vector<Point> = getNormals(poly);
        var i:Int =0;
        var shortestOverlap:Float=0;
        var shortestVec:Point = null;
        for(normal in normals){
            var circleProj:Point = projectCircleOnVec(circlePos,radius,normal);
            var polyProj:Point = projectPolyOnVec(poly,normal);
            var overlap:Float = getOverlap(circleProj,polyProj);
            if(overlap==-1){
                return null;
            }
            if(normal.x!=0 && normal.y!=0){
            }
            if(shortestVec==null||overlap<shortestOverlap){
                shortestOverlap=overlap;
                //flip vector if projections are in the other dir
                if(polyProj.x>circleProj.x){
                    overlap*=-1;
                }
                shortestVec = new Point(overlap*normal.x,overlap*normal.y);
            }
        }
        return shortestVec;
    }
}

class Test2D extends Sprite
{		
    //engine variables
    private var keys:Map<Int,Bool>;
    private var char:Char;
    private var rad:Float;
    private var polygons:Vector<PolyPrism>;
    private var shadows:Sprite;
    private var lines:Sprite;

    public function new ()
    {
        super();

        shadows= new Sprite();
        lines= new Sprite();
        addChild(shadows);
        addChild(lines);
        rad = Math.PI/180;
        char = new Char(0,0,0,10);
        keys = new Map<Int,Bool>();

        var points:Vector<Point> = new Vector<Point>();
        points.push(new Point(0,0));
        points.push(new Point(30,0));
        points.push(new Point(30,30));
        points.push(new Point(0,30));

        polygons= new Vector<PolyPrism>();
        polygons.push(new PolyPrism(new Poly(20,20,points),30,50));
        polygons.push(new PolyPrism(new Poly(-50,10,points),0,30));
        polygons.push(new PolyPrism(new Poly(-110,10,points),0,60));

        points= new Vector<Point>();
        points.push(new Point(0,0));
        points.push(new Point(30,10));
        points.push(new Point(80,60));
        points.push(new Point(5,100));
        points.push(new Point(-30,60));
        polygons.push(new PolyPrism(new Poly(-40,20,points),0,20));
        //polygons.push(new PolyPrism(new Poly(-50,-40,points),0,20));

        Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyDown);
        Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyUp);
        Lib.current.stage.addEventListener (Event.ENTER_FRAME, enterframe);
    }

    private function keyDown(e:KeyboardEvent):Void{
        keys.set(e.keyCode,true);
    }

    private function keyUp(e:KeyboardEvent):Void{
        keys.set(e.keyCode,false);
    }

    private function moveChar():Void {
        var spd:Float = 5;
        if(keys.get(32)){
            char.jump(10);
            keys.set(32,false);
        }
        if(keys.get(65)){
            char.rot-=10;
        } else if(keys.get(68)){
            char.rot+=10;
        }
        if(keys.get(87)){
            var xd = -Math.sin(char.rot*rad)*spd;
            var yd = Math.cos(char.rot*rad)*spd;
            char.x+=xd;
            char.y+=yd;
        } else if(keys.get(83)){
            var xd = Math.sin(char.rot*rad)*spd;
            var yd = -Math.cos(char.rot*rad)*spd;
            char.x+=xd;
            char.y+=yd;
        }
        char.updateZ();
    }
    private function checkCollisions():Void {
        var overlapVec:Point;
        var overlapVec2:Point;
        var charPos:Point = new Point(char.x,char.y);
        var i:Int = 0;
        var loops=50;
        while(i<loops){
            for(poly in polygons){
                if(Collision.getOverlap(new Point(char.z,char.z+char.height), new Point(poly.minZ,poly.maxZ))!=-1){
                    overlapVec =Collision.getOverlapCirclePoly(charPos,char.radius,poly.poly);
                    overlapVec2 =Collision.getOverlapCirclePoly(charPos,char.radius*.95,poly.poly);
                    if(overlapVec!=null){
                        if(overlapVec2!=null && char.lastZ>=poly.maxZ && char.z<=poly.maxZ){
                            //floor
                            if(char.yspd<=0){
                                char.stopJump(poly.maxZ);
                                char.lastPoly=poly;
                            }
                        } else if(overlapVec2!=null && char.lastZ+char.height<poly.minZ && char.z+char.height>=poly.minZ && char.yspd>0){
                            //ceiling
                            char.stopJump(poly.minZ-char.height-1);
                            char.jump(0);
                        } else if(char.z>=poly.minZ && char.z<poly.maxZ){
                            //wall
                            charPos = new Point(charPos.x+overlapVec.x*1.01,charPos.y+overlapVec.y*1.01);
                            char.x=charPos.x;
                            char.y=charPos.y;
                        }
                    } else if(overlapVec==null && poly==char.lastPoly){
                        //fall
                        char.lastPoly=null;
                        char.jump(0);
                    }
                }
            }
            i++;
        }
    }

    private function renderChar():Void {
        x=stage.stageWidth/2;
        y=stage.stageHeight/2;
        shadows.graphics.beginFill(0xcccccc,.5);
        shadows.graphics.drawCircle(char.x,char.y,char.radius);
        shadows.graphics.endFill();
        lines.graphics.lineStyle(2);
        lines.graphics.moveTo(char.x,char.y-char.z-char.height);
        var xd = -Math.sin(char.rot*rad)*char.radius;
        var yd = Math.cos(char.rot*rad)*char.radius;
        lines.graphics.lineTo(char.x+xd,char.y+yd-char.z-char.height);
        lines.graphics.lineStyle(2,0x0000ff,.2);
        lines.graphics.moveTo(char.x,char.y-char.z-char.height);
        lines.graphics.lineTo(char.x,char.y-char.height);
        lines.graphics.lineStyle(2);
        lines.graphics.drawCircle(char.x,char.y-char.z,char.radius);
        lines.graphics.drawCircle(char.x,char.y-char.z-char.height,char.radius);
    }

    private function renderPolys():Void {
        for(poly in polygons){
            shadows.graphics.lineStyle(0,0,0);
            shadows.graphics.beginFill(0xcccccc,.5);
            poly.poly.render(shadows.graphics);
            shadows.graphics.endFill();
            lines.graphics.lineStyle(2);
            poly.poly.render(lines.graphics,-poly.minZ);
            poly.poly.render(lines.graphics,-poly.maxZ);
        }
    }


    private function enterframe(e:Event):Void
    {
        moveChar();
        checkCollisions();
        shadows.graphics.clear();
        lines.graphics.clear();
        renderChar();
        renderPolys();
    }
}
