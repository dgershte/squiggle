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
    public var rot:Float;
    public var radius:Float;
    public function new(x:Float=0,y:Float=0,rot:Float=0,radius:Float=1){
        this.x=x;
        this.y=y;
        this.rot=rot;
        this.radius=radius;
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
    public function render(g:Graphics):Void {
        g.lineStyle(2);
        var lastPoint:Point = points[points.length-1];
        g.moveTo(lastPoint.x+x,lastPoint.y+y);
        for(point in points){
            g.lineTo(point.x+x,point.y+y);
        }
    }
}

class Collision
{
    /**
     * Return a 1D segment with the 2D projection values of 2D Polygon projected on a
     * 2D Vector vec, ordered (min,max)*/
    public static function projectPolyOnVec(poly:Poly,vec:Point):Point{
        return new Point(1,1);
    }

    /**
     * Return a 1D segment with the 2D projection values of 2D Circle projected on a
     * 2D Vector vec, ordered (min,max)*/
    public static function projectCircleOnVec(pos:Point, radius:Float, vec:Point):Point{
        return new Point(0,0);
    }

    /**
     * Given two 1D segments, return overlap distance from v0 to v1 if 
     * exists 1D overlap, or -1 if there is no overlap
     */
    public static function getOverlap(v0:Point, v1:Point):Float{
        //assuming v0(min,max) and v1(min,max)
        var start:Float = Math.min(v0.x,v1.x);
        var end:Float = Math.max(v0.y,v1.y);
        var dist = end-start;
        return (dist<0)?-1:dist;
    }

    public static function getNormals(poly:Poly):Vector<Point>{
        var vec:Vector<Point> = new Vector<Point>();
        vec.push(new Point(1,0));
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
            if(shortestVec==null||overlap<shortestOverlap){
                shortestOverlap=overlap;
                //flip vector if projections are in the other dir
                if(polyProj.x<circleProj.x){
                    overlap*=-1;
                }
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
    private var polygons:Vector<Poly>;

    public function new ()
    {
        super();

        rad = Math.PI/180;
        char = new Char(0,0,0,10);
        keys = new Map<Int,Bool>();

        var points:Vector<Point> = new Vector<Point>();
        points.push(new Point(0,0));
        points.push(new Point(30,0));
        points.push(new Point(30,30));
        points.push(new Point(0,30));

        polygons= new Vector<Poly>();
        polygons.push(new Poly(20,20,points));

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
    }
    private function checkCollisions():Void {
        var overlapVec:Point;
        var charPos:Point = new Point(char.x,char.y);
        for(poly in polygons){
            overlapVec =Collision.getOverlapCirclePoly(charPos,char.radius,poly);
            if(overlapVec!=null){
                charPos = new Point(charPos.x+overlapVec.x,charPos.y+overlapVec.y);
                char.x=charPos.x;
                char.y=charPos.y;
            }
        }
    }

    private function renderChar():Void {
        graphics.clear();
        graphics.lineStyle(2);
        x=stage.stageWidth/2;
        y=stage.stageHeight/2;
        graphics.drawCircle(char.x,char.y,char.radius);
        graphics.moveTo(char.x,char.y);
        var xd = -Math.sin(char.rot*rad)*char.radius;
        var yd = Math.cos(char.rot*rad)*char.radius;
        graphics.lineTo(char.x+xd,char.y+yd);
    }

    private function renderPolys():Void {
        for(poly in polygons){
            poly.render(graphics);
        }
    }


    private function enterframe(e:Event):Void
    {
        moveChar();
        checkCollisions();
        renderChar();
        renderPolys();
    }
}
