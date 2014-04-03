package;

import away3d.cameras.lenses.*;
import away3d.containers.*;
import away3d.entities.*;
import away3d.materials.*;
import away3d.materials.methods.*;
import away3d.primitives.*;
import away3d.textures.*;
import away3d.utils.*;

import flash.display.*;
import flash.events.*;
import flash.geom.Vector3D;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.Vector;
import haxe.xml.Fast;
import openfl.Assets;
import flash.Lib;

class Anim
{
    var x:Int;
    var y:Int;
    var w:Int;
    var h:Int;
    var frameX:Int;
    var frameY:Int;
    public function new(x:Int, y:Int, w:Int, h:Int, frameX:Int, frameY:Int){
        this.x=x;
        this.y=y;
        this.w=w;
        this.h=h;
        this.frameX=frameX;
        this.frameY=frameY;
    }
    public function getOffsetU():Float{
        return x/256;
    }
    public function getOffsetV():Float{
        return y/256;
    }

    public function getScaleU():Float {
        return w/256;
    }

    public function getScaleV():Float {
        return h/256;
    }
}

class TextureParser
{
    public static function parse(xmlname:String):Vector<Anim>{
        var xml:Xml = Xml.parse(Assets.getText(xmlname));
        var elem:haxe.xml.Fast = new haxe.xml.Fast(xml.firstElement());
        var e:haxe.xml.Fast;
        var anims:Vector<Anim> = new Vector<Anim>();
        for(e in elem.elements){
            var str = e.att.name;
            var x:Int = Std.parseInt(e.att.x);
            var y:Int = Std.parseInt(e.att.y);
            var w:Int = Std.parseInt(e.att.width)+1;
            var h:Int = Std.parseInt(e.att.height)+1;
            var frameX:Int = Std.parseInt(e.att.frameX);
            var frameY:Int = Std.parseInt(e.att.frameY);
            anims.push(new Anim(x,y,w,h,frameX,frameY));
        }
        return anims;
    }
}

class Char
{
    public var x:Float;
    public var y:Float;
    public var z:Float=0;
    public var lastZ:Float=0;
    public var height:Float=24;
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
    public var char:Char;
    private var keys:Map<Int,Bool>;
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
        char = new Char(0,0,0,11);
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
        //polygons.push(new PolyPrism(new Poly(-40,20,points),0,20));
        //polygons.push(new PolyPrism(new Poly(-50,-40,points),0,20));

        Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyDown);
        Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyUp);
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
                    overlapVec2 =Collision.getOverlapCirclePoly(charPos,char.radius*.75,poly.poly);
                    if(overlapVec2!=null){
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
                        }
                    } else if(poly==char.lastPoly){
                        //fall
                        char.lastPoly=null;
                        char.jump(0);
                    }
                    if(overlapVec!=null){
                        if(char.z>=poly.minZ && char.z<poly.maxZ){
                            //wall
                            charPos = new Point(charPos.x+overlapVec.x,charPos.y+overlapVec.y);
                            char.x=charPos.x;
                            char.y=charPos.y;
                        }
                    }
                }
            }
            i++;
        }
    }

    private function renderChar2D():Void {
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

    private function renderPolys2D():Void {
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


    public function update(e:Event):Void
    {
        moveChar();
        checkCollisions();
        /*shadows.graphics.clear();
        lines.graphics.clear();
        renderChar2D();
        renderPolys2D();*/
    }
}

class BasicTest extends Sprite
{		
    //engine variables

    //scene objects
    private var _view:View3D;
    private var deac:Bool=false;
    private var _world:ObjectContainer3D;
    private var _plane:ObjectContainer3D;
    private var _charmesh:Mesh;

    private var platformSize:Float = 100;

    var animation:Vector<Anim>;
    var objs:Vector<Mesh>;

    var frames:Int;
    var currFrame:Int = 0;

    var test2D:Test2D;

    public function new ()
    {
        super();

        test2D = new Test2D();

        animation = TextureParser.parse("assets/char.xml");
        frames = animation.length;

        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;

        setup3D();
        Lib.current.stage.addEventListener(Event.RESIZE, onResize);
        onResize();
        Lib.current.stage.addEventListener (Event.ACTIVATE, stage_onActivate);
        Lib.current.stage.addEventListener (Event.DEACTIVATE, stage_onDeactivate);
    }

    private function setup3D():Void {
        //setup the environment map material
        var material:ColorMaterial = new ColorMaterial(0xFF00FF, 1);
        material.specular = 0.5;
        material.ambient = 0.25;
        material.ambientColor = 0x111199;
        material.ambient = 1;
        _world = new ObjectContainer3D();
        _plane = new ObjectContainer3D();
        _world.addChild(_plane);
        objs = new Vector<Mesh>();
/*
        var xml:Xml = Xml.parse(Assets.getText("assets/trees.xml"));
        var elem:haxe.xml.Fast = new haxe.xml.Fast(xml.firstElement());
        var e:haxe.xml.Fast;
        for(e in elem.elements){
            var x:Int = Std.parseInt(e.att.x);
            var y:Int = Std.parseInt(e.att.y);
            var name:String = e.att.name;
            var bitmap:BitmapData = Cast.bitmapData(Assets.getBitmapData(name));
            var texture = new BitmapTexture(bitmap);
            var tex:TextureMaterial = new TextureMaterial(texture);
            tex.addMethod(new FogMethod(600,1200,0xffffff));
            tex.alphaThreshold=.1;
            tex.repeat=true;
            tex.mipmap=false;
            var obj = new Mesh(new PlaneGeometry(300,300),tex);
            obj.rotationX=-90;
            obj.translate(new Vector3D(1,0,0),x);
            obj.translate(new Vector3D(0,0,1),y);
            obj.translate(new Vector3D(0,1,0),150);
            //obj.geometry.scaleUV(.99,.99);
            objs.push(obj);
            _plane.addChild(obj);
        }*/

        var bitmap:BitmapData = Assets.getBitmapData("assets/char.png");
        var texture = new BitmapTexture(bitmap);
        var tex:TextureMaterial = new TextureMaterial(texture);
        tex.animateUVs=true;
        tex.addMethod(new FogMethod(600,1200,0xffffff));
        tex.alphaThreshold=.1;
        tex.repeat=true;
        tex.mipmap=false;
        //setup the scene

        _charmesh = new Mesh(new PlaneGeometry(20,24),tex);
        objs.push(_charmesh);
        _plane.addChild(_charmesh);

        var material:ColorMaterial = new ColorMaterial(0xff00ff);
        //material.wireColor=0xff0000;
      //material.color=0xffa500;
       // material.addMethod(new FogMethod(600,1200,0xffffff));
        var cube = new Mesh(new CubeGeometry(30,20,30,1,1,1),material);
        cube.x=20+15;
        cube.z=-(20+15);
        cube.y=10+30;
        _plane.addChild(cube);
        var cube = new Mesh(new CubeGeometry(30,30,30,1,1,1),material);
        cube.x=-50+15;
        cube.z=-(10+15);
        cube.y=15;
        _plane.addChild(cube);
        var cube = new Mesh(new CubeGeometry(30,60,30,1,1,1),material);
        cube.x=-110+15;
        cube.z=-(10+15);
        cube.y=30;
        _plane.addChild(cube);

/*
        polygons.push(new PolyPrism(new Poly(20,20,points),30,50));
        polygons.push(new PolyPrism(new Poly(-50,10,points),0,30));
        polygons.push(new PolyPrism(new Poly(-110,10,points),0,60));*/

        //setup the render loop
        _view = new View3D();
        _view.backgroundColor=0xffffff;

        //setup the camera
        _view.camera.z = -600;
        _view.camera.y = 0;
        _view.camera.lookAt(new Vector3D());
        _view.camera.lens = new PerspectiveLens(90);
        _view.scene.addChild(_world);
        _view.stage3DProxy.setRenderCallback(_onEnterFrame);
    }
/*
    private function keyDown(e:KeyboardEvent):Void{
        keys.set(e.keyCode,true);
    }

    private function keyUp(e:KeyboardEvent):Void{
        keys.set(e.keyCode,false);
    }
*/
    private function _onEnterFrame(e:Event):Void
    {
        test2D.update(null);
        _plane.moveTo(-test2D.char.x,0,test2D.char.y);
        _charmesh.moveTo(test2D.char.x,12+test2D.char.z,-test2D.char.y);
        _world.rotationY = -test2D.char.rot+180;
        for(obj in objs){
            obj.rotationY=-_world.rotationY;
        }
        _charmesh.rotationX = -90;
        currFrame=(currFrame+1)%frames;
        var anim:Anim = animation[currFrame];
        _charmesh.subMeshes[0].offsetU=anim.getOffsetU();
        _charmesh.subMeshes[0].offsetV=anim.getOffsetV();
        _charmesh.subMeshes[0].scaleU=anim.getScaleU();
        _charmesh.subMeshes[0].scaleV=anim.getScaleV();

        _view.camera.position = new Vector3D(0,test2D.char.z,0);
        _view.camera.rotationX=25;
        _view.camera.moveBackward(100);

        _view.render();
    }
    /**
     * stage listener for resize events
     */
    private function onResize(event:Event = null):Void
    {
        _view.width = stage.stageWidth;
        _view.height = stage.stageHeight;
        if (_view.stage3DProxy != null)
            _view.render();
    }
    private function stage_onActivate (event:Event):Void {
        if(!deac){
            return;
        }
        deac=false;
        /*
        for(obj in objs){
            obj.material.smooth=!obj.material.smooth;
            obj.material.smooth=!obj.material.smooth;
        }*/
        _view.stage3DProxy.dispatchEvent(new Event(Event.CONTEXT3D_CREATE));
    }
    private function stage_onDeactivate (event:Event):Void {
        deac=true;
    }
}
