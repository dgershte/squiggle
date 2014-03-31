/*

   SkyBox example in Away3d

Demonstrates:

How to use a CubeTexture to create a SkyBox object.
How to apply a CubeTexture to a material as an environment map.

Code by Rob Bateman
rob@infiniteturtles.co.uk
http://www.infiniteturtles.co.uk

This code is distributed under the MIT License

Copyright (c) The Away Foundation http://www.theawayfoundation.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

 */

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
import flash.Vector;
import haxe.xml.Fast;
import openfl.Assets;

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
    //	[SWF(backgroundColor="#000000", frameRate="60", quality="LOW")]

    class BasicTest extends Sprite
    {		
        //engine variables
        private var _view:View3D;

        //scene objects
        private var _skyBox:SkyBox; 
        private var _plane:Mesh;
        private var _torus:Mesh;

        var animation:Vector<Anim>;
        var frames:Int;
        var currFrame:Int = 0;

        /**
         * Constructor
         */
        public function new ()
        {
            super();

            animation = TextureParser.parse("assets/char.xml");
            frames = animation.length;

            stage.scaleMode = StageScaleMode.NO_SCALE;
            stage.align = StageAlign.TOP_LEFT;

            //setup the view
            _view = new View3D();

            //setup the camera
            _view.camera.z = -600;
            _view.camera.y = 0;
            _view.camera.lookAt(new Vector3D());
            _view.camera.lens = new PerspectiveLens(90);


            //setup the cube texture
            var cubeTexture:BitmapCubeTexture = new BitmapCubeTexture(Cast.bitmapData(EnvPosX), Cast.bitmapData(EnvNegX), Cast.bitmapData(EnvPosY), Cast.bitmapData(EnvNegY), Cast.bitmapData(EnvPosZ), Cast.bitmapData(EnvNegZ));

            //setup the environment map material
            var material:ColorMaterial = new ColorMaterial(0xFF00FF, 1);
            material.specular = 0.5;
            material.ambient = 0.25;
            material.ambientColor = 0x111199;
            material.ambient = 1;
            //material.addMethod(new BasicDiffuseMethod());
            //(cubeTexture, 1));
            material.addMethod(new FogMethod(1,500,0xffffff));
            var bitmap:BitmapData = Cast.bitmapData(Spritesheet);
            var texture = new BitmapTexture(bitmap);
            var tex:TextureMaterial = new TextureMaterial(texture);
            tex.animateUVs=true;
            tex.addMethod(new FogMethod(450,700,0xffffff));
            tex.alphaBlending=true;
            tex.repeat=true;
            tex.mipmap=false;
            //setup the scene
            _plane = new Mesh(new PlaneGeometry(300,300),tex);
            _view.scene.addChild(_plane);
            //_torus = new Mesh(new TorusGeometry(150, 60, 40, 20), material);
            //_view.scene.addChild(_torus);

            _skyBox = new SkyBox(cubeTexture);
            _view.scene.addChild(_skyBox);

            //setup the render loop
            _view.stage3DProxy.setRenderCallback(_onEnterFrame);
            stage.addEventListener(Event.RESIZE, onResize);
            onResize();

            var fps = new openfl.display.FPS(0, 0, 0xffffff);
            fps.scaleX = fps.scaleY = 3;
            this.addChild(fps);
        }

        /**
         * render loop
         */
        private function _onEnterFrame(e:Event):Void
        {
            _plane.rotationX -= .2;
            currFrame=(currFrame+1)%frames;
            var anim:Anim = animation[currFrame];
            _plane.subMeshes[0].offsetU=anim.getOffsetU();
            _plane.subMeshes[0].offsetV=anim.getOffsetV();
            _plane.subMeshes[0].scaleU=anim.getScaleU();
            _plane.subMeshes[0].scaleV=anim.getScaleV();

            _view.camera.position = new Vector3D();
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
        }
    }
