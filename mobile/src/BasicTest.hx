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

@:bitmap("assets/white.png") class EnvNegX extends BitmapData {}
@:bitmap("assets/white.png") class EnvNegY extends BitmapData {}
@:bitmap("assets/white.png") class EnvNegZ extends BitmapData {}
@:bitmap("assets/white.png") class EnvPosX extends BitmapData {}
@:bitmap("assets/white.png") class EnvPosY extends BitmapData {}
@:bitmap("assets/white.png") class EnvPosZ extends BitmapData {}
@:bitmap("assets/c3.png") class CharImg extends BitmapData {}
@:bitmap("assets/char.png") class Spritesheet extends BitmapData {}

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

class BasicTest extends Sprite
{		
    //engine variables
    private var keys:Map<Int,Bool>;
    private var _view:View3D;
    private var deac:Bool=false;

    //scene objects
    private var _skyBox:SkyBox; 
    private var _world:ObjectContainer3D;
    private var _plane:ObjectContainer3D;
    private var _charmesh:Mesh;

    private var platformSize:Float = 100;

    var animation:Vector<Anim>;
    var objs:Vector<Mesh>;

    var frames:Int;
    var currFrame:Int = 0;
    var pos:Point;
    var mouse:Bool=false;
    var mousex:Float=0;
    var mousey:Float=0;

    var yspd:Float=0;
    var ypos:Float=0;
    var grav:Float=2;
    var starty:Float=-20;
    var jumping:Bool=false;

    var platforms:Vector<Rectangle>;

    public function new ()
    {
        super();

        platforms = new Vector<Rectangle>();
        platforms.push(new Rectangle(platformSize,platformSize,platformSize,platformSize));
        keys = new Map<Int,Bool>();
        Lib.current.stage.addEventListener (Event.ACTIVATE, stage_onActivate);
        Lib.current.stage.addEventListener (Event.DEACTIVATE, stage_onDeactivate);

        pos = new Point(0,0);
        animation = TextureParser.parse("assets/char.xml");
        frames = animation.length;

        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;


        //setup the cube texture
        var cubeTexture:BitmapCubeTexture = new BitmapCubeTexture(Cast.bitmapData(EnvPosX), Cast.bitmapData(EnvNegX), Cast.bitmapData(EnvPosY), Cast.bitmapData(EnvNegY), Cast.bitmapData(EnvPosZ), Cast.bitmapData(EnvNegZ));


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
        }

        var bitmap:BitmapData = Cast.bitmapData(Spritesheet);
        var texture = new BitmapTexture(bitmap);
        var tex:TextureMaterial = new TextureMaterial(texture);
        tex.animateUVs=true;
        tex.addMethod(new FogMethod(600,1200,0xffffff));
        tex.alphaThreshold=.1;
        tex.repeat=true;
        tex.mipmap=false;
        //setup the scene

        _charmesh = new Mesh(new PlaneGeometry(60,100),tex);
        _charmesh.translate(new Vector3D(0,1,0),50);
        objs.push(_charmesh);
        _plane.addChild(_charmesh);

        _skyBox = new SkyBox(cubeTexture);
var material:ColorMaterial = new ColorMaterial(0xFF00FF, 1);
        material.addMethod(new FogMethod(600,1200,0xffffff));
        var cube = new Mesh(new CubeGeometry(100,50,100,1,1,1),material);
        cube.x=150;
        cube.z=150;
        cube.y=25;
        _plane.addChild(cube);

        //setup the render loop
        _view = new View3D();

        //setup the camera
        _view.camera.z = -600;
        _view.camera.y = 0;
        _view.camera.lookAt(new Vector3D());
        _view.camera.lens = new PerspectiveLens(90);
        _view.scene.addChild(_world);
        _view.scene.addChild(_skyBox);
        _view.stage3DProxy.setRenderCallback(_onEnterFrame);
        stage.addEventListener(Event.RESIZE, onResize);
        onResize();

        var fps = new openfl.display.FPS(0, 0, 0);
        fps.scaleX = fps.scaleY = 3;
        this.addChild(fps);

        Lib.current.stage.addEventListener (MouseEvent.MOUSE_DOWN, mouseEventDown);
        Lib.current.stage.addEventListener (MouseEvent.MOUSE_UP, mouseEventUp);
        Lib.current.stage.addEventListener (MouseEvent.MOUSE_MOVE, mouseEventMove);
        Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyDown);
        Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyUp);
    }

    private function keyDown(e:KeyboardEvent):Void{
        keys.set(e.keyCode,true);
    }

    private function keyUp(e:KeyboardEvent):Void{
        keys.set(e.keyCode,false);
    }

    private function mouseEventDown(e:MouseEvent):Void {
        mouse=true;
        mousex=e.stageX;
        mousey=e.stageY;
    }

    private function mouseEventMove(e:MouseEvent):Void {
        mousex=e.stageX;
        mousey=e.stageY;
    }

    private function mouseEventUp(e:MouseEvent):Void {
        mouse=false;
    }

    private function _onEnterFrame(e:Event):Void
    {
        var spd:Float = 10;
        var rad:Float = Math.PI/180;
        if(keys.get(32)){
            keys.set(32,false);
            if(!jumping){
                jumping=true;
                yspd=starty;
            }
        }
        if(jumping){
            yspd+=grav;
            ypos+=yspd;
            _charmesh.translate(new Vector3D(0,-1,0), yspd);
            if(ypos>0){
                _charmesh.translate(new Vector3D(0,-1,0), -ypos);
                ypos=0;
                yspd=0;
                jumping=false;
            } else if(yspd>0 && _charmesh.position.z>platformSize && _charmesh.position.z<platformSize*2){
                if(_charmesh.position.x>platformSize && _charmesh.position.x<platformSize*2){
                    if(ypos>-50){
                        _charmesh.translate(new Vector3D(0,-1,0), -50-ypos);
                        ypos=-50;
                        yspd=0;
                        jumping=false;
                    }
                }
            }
        } else {
            if(ypos<0){
                if(!(_charmesh.position.z>platformSize && _charmesh.position.z<platformSize*2) || !(_charmesh.position.x>platformSize && _charmesh.position.x<platformSize*2)){
                    jumping=true;
                    yspd=0;
                }
            }
        }
        if(keys.get(65)){
            _world.rotationY+=5;
        } else if(keys.get(68)){
            _world.rotationY-=5;
        }
        if(keys.get(87)){
            var xd = Math.sin(_world.rotationY*rad)*spd;
            var yd = -Math.cos(_world.rotationY*rad)*spd;
            _charmesh.translate(new Vector3D(1,0,0), -xd);
            _charmesh.translate(new Vector3D(0,0,1), -yd);
            _plane.translate(new Vector3D(1,0,0), xd);
            _plane.translate(new Vector3D(0,0,1), yd);
        } else if(keys.get(83)){
            var xd = Math.sin(_world.rotationY*rad)*spd;
            var yd = -Math.cos(_world.rotationY*rad)*spd;
            _charmesh.translate(new Vector3D(1,0,0), xd);
            _charmesh.translate(new Vector3D(0,0,1), yd);
            _plane.translate(new Vector3D(1,0,0), -xd);
            _plane.translate(new Vector3D(0,0,1), -yd);
        }
        if(mouse){
            if(mousex<_view.width/3){
                _world.rotationY+=5;
            } else if(mousex>_view.width*2/3){
                _world.rotationY-=5;
            }
            if(mousey<_view.height/3){
                var xd = Math.sin(_world.rotationY*rad)*spd;
                var yd = -Math.cos(_world.rotationY*rad)*spd;
                _charmesh.translate(new Vector3D(1,0,0), -xd);
                _charmesh.translate(new Vector3D(0,0,1), -yd);
                _plane.translate(new Vector3D(1,0,0), xd);
                _plane.translate(new Vector3D(0,0,1), yd);
            } else if(mousey>_view.height*2/3){
                var xd = Math.sin(_world.rotationY*rad)*spd;
                var yd = -Math.cos(_world.rotationY*rad)*spd;
                _charmesh.translate(new Vector3D(1,0,0), xd);
                _charmesh.translate(new Vector3D(0,0,1), yd);
                _plane.translate(new Vector3D(1,0,0), -xd);
                _plane.translate(new Vector3D(0,0,1), -yd);
            }
        }
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

        _view.camera.position = new Vector3D(0,0,300);
        _view.camera.rotationX=25;
        //_view.camera.rotationY += 0.5*(Math.isNaN(stage.mouseX)?0:stage.mouseX-stage.stageWidth/2)/800;
        _view.camera.moveBackward(600);

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
        for(obj in objs){
            obj.material.smooth=!obj.material.smooth;
            obj.material.smooth=!obj.material.smooth;
        }
        _skyBox.material.smooth=!_skyBox.material.smooth;
        _skyBox.material.smooth=!_skyBox.material.smooth;
        _view.stage3DProxy.dispatchEvent(new Event(Event.CONTEXT3D_CREATE));
        /*
           _view = new View3D();
        // _view.getNewStage3D();

        //setup the camera
        _view.camera.z = -600;
        _view.camera.y = 0;
        _view.camera.lookAt(new Vector3D());
        _view.camera.lens = new PerspectiveLens(90);
        _view.scene.addChild(_world);
        _view.scene.addChild(_skyBox);*/
        //_view.stage3DProxy.setRenderCallback(_onEnterFrame);
    }   
    private function stage_onDeactivate (event:Event):Void {
        deac=true;
        // _view.stage3DProxy.setRenderCallback(null);
        // _view.stage3DProxy.context3D.removeOGL();
        //_view.dispose();
        // Lib.current.stage.removeChild(_view);
        // _view=null;
    }   
}
