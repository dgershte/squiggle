/****
* 
****/

package flash.display3D.textures;
#if (flash || display)
extern class TextureBase extends flash.events.EventDispatcher {
	function dispose() : Void;
}
#else
import openfl.gl.GL;
import openfl.gl.GLTexture;
import flash.events.EventDispatcher;

class TextureBase extends EventDispatcher 
{
	public var width : Int;
    public var height : Int;
    public var glTexture:GLTexture;

   public function new(glTexture:GLTexture, width : Int=0, height : Int=0) 
   {
      super();
		this.width = width;
		this.height = height;
        this.glTexture = glTexture;
    }

   public function dispose():Void 
   {
        GL.deleteTexture(glTexture);
   }
}

#end