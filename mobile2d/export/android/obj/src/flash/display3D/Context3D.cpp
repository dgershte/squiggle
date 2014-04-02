#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DMipFilter
#include <flash/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFilter
#include <flash/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DWrapMode
#include <flash/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_display3D_SamplerState
#include <flash/display3D/SamplerState.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#include <flash/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl_gl_GLRenderbuffer
#include <openfl/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_PUSH("Context3D::new","flash/display3D/Context3D.hx",98);
{
	HX_STACK_LINE(99)
	this->disposed = false;
	HX_STACK_LINE(100)
	this->vertexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(101)
	this->indexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(102)
	this->programsCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(103)
	this->texturesCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(104)
	this->samplerParameters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::flash::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while(((_g1 < _g))){
			HX_STACK_LINE(105)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(106)
			this->samplerParameters[i] = ::flash::display3D::SamplerState_obj::__new();
			HX_STACK_LINE(107)
			this->samplerParameters->__get(i).StaticCast< ::flash::display3D::SamplerState >()->wrap = ::flash::display3D::Context3DWrapMode_obj::REPEAT;
			HX_STACK_LINE(108)
			this->samplerParameters->__get(i).StaticCast< ::flash::display3D::SamplerState >()->filter = ::flash::display3D::Context3DTextureFilter_obj::LINEAR;
			HX_STACK_LINE(109)
			this->samplerParameters->__get(i).StaticCast< ::flash::display3D::SamplerState >()->mipfilter = ::flash::display3D::Context3DMipFilter_obj::MIPNONE;
		}
	}
	HX_STACK_LINE(111)
	::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(113)
	this->ogl = ::openfl::display::OpenGLView_obj::__new();
	HX_STACK_LINE(114)
	this->ogl->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,stage->get_stageWidth(),stage->get_stageHeight()));
	HX_STACK_LINE(115)
	this->scrollRect = this->ogl->get_scrollRect()->clone();
	HX_STACK_LINE(116)
	this->ogl->set_width(stage->get_stageWidth());
	HX_STACK_LINE(117)
	this->ogl->set_height(stage->get_stageHeight());
	HX_STACK_LINE(122)
	stage->addChildAt(this->ogl,(int)0);
}
;
	return null();
}

Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Void Context3D_obj::updateBlendStatus( ){
{
		HX_STACK_PUSH("Context3D::updateBlendStatus","flash/display3D/Context3D.hx",694);
		HX_STACK_THIS(this);
		HX_STACK_LINE(694)
		if ((this->blendEnabled)){
			HX_STACK_LINE(697)
			::openfl::gl::GL_obj::enable((int)3042);
			HX_STACK_LINE(698)
			::openfl::gl::GL_obj::blendEquation((int)32774);
			HX_STACK_LINE(699)
			::openfl::gl::GL_obj::blendFunc(this->blendSourceFactor,this->blendDestinationFactor);
		}
		else{
			HX_STACK_LINE(702)
			::openfl::gl::GL_obj::disable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,updateBlendStatus,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::flash::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::flash::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_PUSH("Context3D::setGLSLVertexBufferAt","flash/display3D/Context3D.hx",635);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_ARG(bufferOffset,"bufferOffset");
	HX_STACK_ARG(format,"format");
{
		HX_STACK_LINE(636)
		int location = ::openfl::gl::GL_obj::getAttribLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(638)
		if (((buffer == null()))){
			HX_STACK_LINE(640)
			if (((location > (int)-1))){
				HX_STACK_LINE(641)
				::openfl::gl::GL_obj::disableVertexAttribArray(location);
				HX_STACK_LINE(642)
				::openfl::gl::GL_obj::bindBuffer((int)34962,null());
			}
			HX_STACK_LINE(644)
			return null();
		}
		HX_STACK_LINE(647)
		::openfl::gl::GL_obj::bindBuffer((int)34962,buffer->glBuffer);
		HX_STACK_LINE(649)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(650)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(651)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(653)
		if (((format == ::flash::display3D::Context3DVertexBufferFormat_obj::BYTES_4))){
			HX_STACK_LINE(655)
			dimension = (int)4;
			HX_STACK_LINE(656)
			type = (int)5126;
			HX_STACK_LINE(657)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(659)
			if (((format == ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_1))){
				HX_STACK_LINE(661)
				dimension = (int)1;
				HX_STACK_LINE(662)
				type = (int)5126;
				HX_STACK_LINE(663)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(665)
				if (((format == ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2))){
					HX_STACK_LINE(667)
					dimension = (int)2;
					HX_STACK_LINE(668)
					type = (int)5126;
					HX_STACK_LINE(669)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(671)
					if (((format == ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3))){
						HX_STACK_LINE(673)
						dimension = (int)3;
						HX_STACK_LINE(674)
						type = (int)5126;
						HX_STACK_LINE(675)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(677)
						if (((format == ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_4))){
							HX_STACK_LINE(679)
							dimension = (int)4;
							HX_STACK_LINE(680)
							type = (int)5126;
							HX_STACK_LINE(681)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(684)
							hx::Throw (((HX_CSTRING("Buffer format ") + ::Std_obj::string(format)) + HX_CSTRING(" is not supported")));
						}
					}
				}
			}
		}
		HX_STACK_LINE(688)
		::openfl::gl::GL_obj::enableVertexAttribArray(location);
		HX_STACK_LINE(689)
		::openfl::gl::GL_obj::vertexAttribPointer(location,dimension,type,false,(buffer->data32PerVertex * numBytes),(bufferOffset * numBytes));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setVertexBufferAt( int index,::flash::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::flash::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_PUSH("Context3D::setVertexBufferAt","flash/display3D/Context3D.hx",629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(buffer,"buffer");
	HX_STACK_ARG(bufferOffset,"bufferOffset");
	HX_STACK_ARG(format,"format");
{
		HX_STACK_LINE(630)
		::String locationName = (HX_CSTRING("va") + index);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(631)
		this->setGLSLVertexBufferAt(locationName,buffer,bufferOffset,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::flash::display3D::textures::TextureBase texture,int textureIndex){
{
		HX_STACK_PUSH("Context3D::setGLSLTextureAt","flash/display3D/Context3D.hx",579);
		HX_STACK_THIS(this);
		HX_STACK_ARG(locationName,"locationName");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_ARG(textureIndex,"textureIndex");
		HX_STACK_LINE(581)
		Dynamic location = ::openfl::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(582)
		switch( (int)(textureIndex)){
			case (int)0: {
				HX_STACK_LINE(583)
				::openfl::gl::GL_obj::activeTexture((int)33984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(584)
				::openfl::gl::GL_obj::activeTexture((int)33985);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(585)
				::openfl::gl::GL_obj::activeTexture((int)33986);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(586)
				::openfl::gl::GL_obj::activeTexture((int)33987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(587)
				::openfl::gl::GL_obj::activeTexture((int)33988);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(588)
				::openfl::gl::GL_obj::activeTexture((int)33989);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(589)
				::openfl::gl::GL_obj::activeTexture((int)33990);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(590)
				::openfl::gl::GL_obj::activeTexture((int)33991);
			}
			;break;
			default: {
				HX_STACK_LINE(592)
				hx::Throw (HX_CSTRING("Does not support texture8 or more"));
			}
		}
		HX_STACK_LINE(595)
		if (((texture == null()))){
			HX_STACK_LINE(597)
			::openfl::gl::GL_obj::bindTexture((int)3553,null());
			HX_STACK_LINE(598)
			::openfl::gl::GL_obj::bindTexture((int)34067,null());
			HX_STACK_LINE(599)
			return null();
		}
		HX_STACK_LINE(602)
		if ((::Std_obj::is(texture,hx::ClassOf< ::flash::display3D::textures::Texture >()))){
			HX_STACK_LINE(604)
			::openfl::gl::GL_obj::bindTexture((int)3553,(hx::TCast< flash::display3D::textures::Texture >::cast(texture))->glTexture);
			HX_STACK_LINE(605)
			::openfl::gl::GL_obj::uniform1i(location,textureIndex);
		}
		else{
			HX_STACK_LINE(608)
			if ((::Std_obj::is(texture,hx::ClassOf< ::flash::display3D::textures::CubeTexture >()))){
				HX_STACK_LINE(610)
				::openfl::gl::GL_obj::bindTexture((int)34067,(hx::TCast< flash::display3D::textures::CubeTexture >::cast(texture))->glTexture);
				HX_STACK_LINE(611)
				::openfl::gl::GL_obj::uniform1i(location,textureIndex);
			}
			else{
				HX_STACK_LINE(613)
				hx::Throw (((HX_CSTRING("Texture of type ") + ::Type_obj::getClassName(::Type_obj::getClass(texture))) + HX_CSTRING(" not supported yet")));
			}
		}
		HX_STACK_LINE(617)
		::flash::display3D::SamplerState parameters = this->samplerParameters->__get(textureIndex).StaticCast< ::flash::display3D::SamplerState >();		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(618)
		if (((parameters != null()))){
			HX_STACK_LINE(618)
			this->setTextureParameters(texture,parameters->wrap,parameters->filter,parameters->mipfilter);
		}
		else{
			HX_STACK_LINE(620)
			this->setTextureParameters(texture,::flash::display3D::Context3DWrapMode_obj::REPEAT,::flash::display3D::Context3DTextureFilter_obj::NEAREST,::flash::display3D::Context3DMipFilter_obj::MIPNONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setTextureAt( int sampler,::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("Context3D::setTextureAt","flash/display3D/Context3D.hx",573);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sampler,"sampler");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(574)
		::String locationName = (HX_CSTRING("fs") + sampler);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(575)
		this->setGLSLTextureAt(locationName,texture,sampler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_PUSH("Context3D::setStencilReferenceValue","flash/display3D/Context3D.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(referenceValue,"referenceValue");
	HX_STACK_ARG(readMask,"readMask");
	HX_STACK_ARG(writeMask,"writeMask");
{
		HX_STACK_LINE(566)
		this->stencilReadMask = readMask;
		HX_STACK_LINE(567)
		this->stencilRef = referenceValue;
		HX_STACK_LINE(569)
		::openfl::gl::GL_obj::stencilFunc(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
		HX_STACK_LINE(570)
		::openfl::gl::GL_obj::stencilMask(writeMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail){
{
		HX_STACK_PUSH("Context3D::setStencilActions","flash/display3D/Context3D.hx",558);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triangleFace,"triangleFace");
		HX_STACK_ARG(compareMode,"compareMode");
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass");
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail");
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail");
		HX_STACK_LINE(559)
		this->stencilCompareMode = compareMode;
		HX_STACK_LINE(560)
		::openfl::gl::GL_obj::stencilOp(actionOnBothPass,actionOnDepthFail,actionOnDepthPassStencilFail);
		HX_STACK_LINE(561)
		::openfl::gl::GL_obj::stencilFunc(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setScissorRectangle( ::flash::geom::Rectangle rectangle){
{
		HX_STACK_PUSH("Context3D::setScissorRectangle","flash/display3D/Context3D.hx",545);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rectangle,"rectangle");
		HX_STACK_LINE(547)
		if (((rectangle == null()))){
			HX_STACK_LINE(549)
			::openfl::gl::GL_obj::disable((int)3089);
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(553)
		::openfl::gl::GL_obj::enable((int)3089);
		HX_STACK_LINE(554)
		::openfl::gl::GL_obj::scissor(::Std_obj::_int(rectangle->x),::Std_obj::_int(rectangle->y),::Std_obj::_int(rectangle->width),::Std_obj::_int(rectangle->height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setTextureParameters( ::flash::display3D::textures::TextureBase texture,::flash::display3D::Context3DWrapMode wrap,::flash::display3D::Context3DTextureFilter filter,::flash::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_PUSH("Context3D::setTextureParameters","flash/display3D/Context3D.hx",466);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_ARG(wrap,"wrap");
		HX_STACK_ARG(filter,"filter");
		HX_STACK_ARG(mipfilter,"mipfilter");
		HX_STACK_LINE(466)
		if ((::Std_obj::is(texture,hx::ClassOf< ::flash::display3D::textures::Texture >()))){
			HX_STACK_LINE(470)
			::openfl::gl::GL_obj::bindTexture((int)3553,(hx::TCast< flash::display3D::textures::Texture >::cast(texture))->glTexture);
			HX_STACK_LINE(472)
			{
				::flash::display3D::Context3DWrapMode _switch_1 = (wrap);
				switch((_switch_1)->GetIndex()){
					case 0: {
						HX_STACK_LINE(474)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
						HX_STACK_LINE(475)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
					}
					;break;
					case 1: {
						HX_STACK_LINE(477)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)10497);
						HX_STACK_LINE(478)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)10497);
					}
					;break;
				}
			}
			HX_STACK_LINE(483)
			{
				::flash::display3D::Context3DTextureFilter _switch_2 = (filter);
				switch((_switch_2)->GetIndex()){
					case 0: {
						HX_STACK_LINE(484)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
					}
					;break;
					case 1: {
						HX_STACK_LINE(487)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
					}
					;break;
				}
			}
			HX_STACK_LINE(493)
			{
				::flash::display3D::Context3DMipFilter _switch_3 = (mipfilter);
				switch((_switch_3)->GetIndex()){
					case 0: {
						HX_STACK_LINE(494)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9987);
					}
					;break;
					case 1: {
						HX_STACK_LINE(497)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9984);
					}
					;break;
					case 2: {
						HX_STACK_LINE(500)
						::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
					}
					;break;
				}
			}
		}
		else{
			HX_STACK_LINE(505)
			if ((::Std_obj::is(texture,hx::ClassOf< ::flash::display3D::textures::CubeTexture >()))){
				HX_STACK_LINE(506)
				::openfl::gl::GL_obj::bindTexture((int)34067,(hx::TCast< flash::display3D::textures::CubeTexture >::cast(texture))->glTexture);
				HX_STACK_LINE(508)
				{
					::flash::display3D::Context3DWrapMode _switch_4 = (wrap);
					switch((_switch_4)->GetIndex()){
						case 0: {
							HX_STACK_LINE(510)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10242,(int)33071);
							HX_STACK_LINE(511)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10243,(int)33071);
						}
						;break;
						case 1: {
							HX_STACK_LINE(513)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10242,(int)10497);
							HX_STACK_LINE(514)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10243,(int)10497);
						}
						;break;
					}
				}
				HX_STACK_LINE(518)
				{
					::flash::display3D::Context3DTextureFilter _switch_5 = (filter);
					switch((_switch_5)->GetIndex()){
						case 0: {
							HX_STACK_LINE(519)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10240,(int)9729);
						}
						;break;
						case 1: {
							HX_STACK_LINE(522)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10240,(int)9728);
						}
						;break;
					}
				}
				HX_STACK_LINE(527)
				{
					::flash::display3D::Context3DMipFilter _switch_6 = (mipfilter);
					switch((_switch_6)->GetIndex()){
						case 0: {
							HX_STACK_LINE(528)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10241,(int)9987);
						}
						;break;
						case 1: {
							HX_STACK_LINE(531)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10241,(int)9984);
						}
						;break;
						case 2: {
							HX_STACK_LINE(534)
							::openfl::gl::GL_obj::texParameteri((int)34067,(int)10241,(int)9728);
						}
						;break;
					}
				}
			}
			else{
				HX_STACK_LINE(539)
				hx::Throw (((HX_CSTRING("Texture of type ") + ::Type_obj::getClassName(::Type_obj::getClass(texture))) + HX_CSTRING(" not supported yet")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setTextureParameters,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,::flash::display3D::Context3DWrapMode wrap,::flash::display3D::Context3DTextureFilter filter,::flash::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_PUSH("Context3D::setSamplerStateAt","flash/display3D/Context3D.hx",452);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sampler,"sampler");
		HX_STACK_ARG(wrap,"wrap");
		HX_STACK_ARG(filter,"filter");
		HX_STACK_ARG(mipfilter,"mipfilter");
		HX_STACK_LINE(452)
		if (((bool(((int)0 <= sampler)) && bool((sampler < ::flash::display3D::Context3D_obj::MAX_SAMPLERS))))){
			HX_STACK_LINE(456)
			this->samplerParameters->__get(sampler).StaticCast< ::flash::display3D::SamplerState >()->wrap = wrap;
			HX_STACK_LINE(457)
			this->samplerParameters->__get(sampler).StaticCast< ::flash::display3D::SamplerState >()->filter = filter;
			HX_STACK_LINE(458)
			this->samplerParameters->__get(sampler).StaticCast< ::flash::display3D::SamplerState >()->mipfilter = mipfilter;
		}
		else{
			HX_STACK_LINE(459)
			hx::Throw (HX_CSTRING("Sampler is out of bounds."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setRenderToTexture( ::flash::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("Context3D::setRenderToTexture","flash/display3D/Context3D.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(423)
		if (((this->framebuffer == null()))){
			HX_STACK_LINE(423)
			this->framebuffer = ::openfl::gl::GL_obj::createFramebuffer();
		}
		HX_STACK_LINE(424)
		if (((this->renderbuffer == null()))){
			HX_STACK_LINE(424)
			this->renderbuffer = ::openfl::gl::GL_obj::createRenderbuffer();
		}
		HX_STACK_LINE(428)
		if ((enableDepthAndStencil)){
			HX_STACK_LINE(429)
			::openfl::gl::GL_obj::bindFramebuffer((int)36160,this->framebuffer);
			HX_STACK_LINE(430)
			::openfl::gl::GL_obj::bindRenderbuffer((int)36161,this->renderbuffer);
			HX_STACK_LINE(431)
			::openfl::gl::GL_obj::renderbufferStorage((int)36161,(int)33189,texture->width,texture->height);
			HX_STACK_LINE(432)
			::openfl::gl::GL_obj::framebufferTexture2D((int)36160,(int)36064,(int)3553,texture->glTexture,(int)0);
			HX_STACK_LINE(433)
			::openfl::gl::GL_obj::framebufferRenderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer);
		}
		else{
			HX_STACK_LINE(435)
			::openfl::gl::GL_obj::bindFramebuffer((int)36160,this->framebuffer);
			HX_STACK_LINE(436)
			::openfl::gl::GL_obj::framebufferTexture2D((int)36160,(int)36064,(int)3553,texture->glTexture,(int)0);
		}
		HX_STACK_LINE(438)
		::openfl::gl::GL_obj::viewport((int)0,(int)0,texture->width,texture->height);
		HX_STACK_LINE(439)
		int frameBufferStatus = ::openfl::gl::GL_obj::checkFramebufferStatus((int)36160);		HX_STACK_VAR(frameBufferStatus,"frameBufferStatus");
		HX_STACK_LINE(440)
		switch( (int)(frameBufferStatus)){
			case (int)36053: {
				HX_STACK_LINE(441)
				::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_COMPLETE"),hx::SourceInfo(HX_CSTRING("Context3D.hx"),441,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
			;break;
			case (int)36054: {
				HX_STACK_LINE(442)
				::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),hx::SourceInfo(HX_CSTRING("Context3D.hx"),442,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
			;break;
			case (int)36057: {
				HX_STACK_LINE(443)
				::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),hx::SourceInfo(HX_CSTRING("Context3D.hx"),443,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
			;break;
			case (int)36055: {
				HX_STACK_LINE(444)
				::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),hx::SourceInfo(HX_CSTRING("Context3D.hx"),444,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
			;break;
			case (int)36061: {
				HX_STACK_LINE(445)
				::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),hx::SourceInfo(HX_CSTRING("Context3D.hx"),445,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
			;break;
			default: {
				HX_STACK_LINE(446)
				::haxe::Log_obj::trace((HX_CSTRING("frameBufferStatus ") + frameBufferStatus),hx::SourceInfo(HX_CSTRING("Context3D.hx"),446,HX_CSTRING("flash.display3D.Context3D"),HX_CSTRING("setRenderToTexture")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_PUSH("Context3D::setRenderToBackBuffer","flash/display3D/Context3D.hx",411);
		HX_STACK_THIS(this);
		HX_STACK_LINE(413)
		::openfl::gl::GL_obj::bindFramebuffer((int)36160,null());
		HX_STACK_LINE(414)
		::openfl::gl::GL_obj::bindRenderbuffer((int)36161,null());
		HX_STACK_LINE(415)
		if (((this->scrollRect != null()))){
			HX_STACK_LINE(415)
			::openfl::gl::GL_obj::viewport(::Std_obj::_int(this->scrollRect->x),::Std_obj::_int(this->scrollRect->y),::Std_obj::_int(this->scrollRect->width),::Std_obj::_int(this->scrollRect->height));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::removeRenderMethod( Dynamic func){
{
		HX_STACK_PUSH("Context3D::removeRenderMethod","flash/display3D/Context3D.hx",407);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(407)
		this->ogl->render = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,removeRenderMethod,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_PUSH("Context3D::setRenderMethod","flash/display3D/Context3D.hx",402);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(402)
		Dynamic func1 = Dynamic( Array_obj<Dynamic>::__new().Add(func));		HX_STACK_VAR(func1,"func1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func1)
		Void run(::flash::geom::Rectangle rect){
			HX_STACK_PUSH("*::_Function_1_1","flash/display3D/Context3D.hx",404);
			HX_STACK_ARG(rect,"rect");
			{
				HX_STACK_LINE(404)
				func1->__GetItem((int)0)(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(403)
		this->ogl->render =  Dynamic(new _Function_1_1(func1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromVector4","flash/display3D/Context3D.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(startIndex,"startIndex");
{
		HX_STACK_LINE(397)
		Dynamic location = ::openfl::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(398)
		::openfl::gl::GL_obj::uniform4f(location,data->__get(startIndex),data->__get((startIndex + (int)1)),data->__get((startIndex + (int)2)),data->__get((startIndex + (int)3)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::flash::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromMatrix","flash/display3D/Context3D.hx",390);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(transposedMatrix,"transposedMatrix");
{
		HX_STACK_LINE(391)
		Dynamic location = ::openfl::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(392)
		::openfl::gl::GL_obj::uniformMatrix3D(location,!(transposedMatrix),matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::flash::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(-1);
	HX_STACK_PUSH("Context3D::setGLSLProgramConstantsFromByteArray","flash/display3D/Context3D.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_ARG(locationName,"locationName");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
{
		HX_STACK_LINE(381)
		if (((byteArrayOffset != (int)-1))){
			HX_STACK_LINE(382)
			data->position = byteArrayOffset;
		}
		HX_STACK_LINE(385)
		Dynamic location = ::openfl::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(386)
		::openfl::gl::GL_obj::uniform4f(location,data->readFloat(),data->readFloat(),data->readFloat(),data->readFloat());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::flash::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(-1);
	HX_STACK_PUSH("Context3D::setProgramConstantsFromVector","flash/display3D/Context3D.hx",370);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(numRegisters,"numRegisters");
{
		HX_STACK_LINE(371)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		while(((_g < numRegisters))){
			HX_STACK_LINE(371)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(373)
			int currentIndex = (i * (int)4);		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(374)
			::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(375)
			this->setGLSLProgramConstantsFromVector4(locationName,data,currentIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::flash::display3D::Context3DProgramType programType,int firstRegister,::flash::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_PUSH("Context3D::setProgramConstantsFromMatrix","flash/display3D/Context3D.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(transposedMatrix,"transposedMatrix");
{
		HX_STACK_LINE(364)
		::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,firstRegister);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(366)
		this->setProgramConstantsFromVector(programType,firstRegister,matrix->rawData,(int)16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::flash::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::flash::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_PUSH("Context3D::setProgramConstantsFromByteArray","flash/display3D/Context3D.hx",353);
		HX_STACK_THIS(this);
		HX_STACK_ARG(programType,"programType");
		HX_STACK_ARG(firstRegister,"firstRegister");
		HX_STACK_ARG(numRegisters,"numRegisters");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_LINE(354)
		data->position = byteArrayOffset;
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(355)
			while(((_g < numRegisters))){
				HX_STACK_LINE(355)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(357)
				::String locationName = this->getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(358)
				this->setGLSLProgramConstantsFromByteArray(locationName,data,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

::String Context3D_obj::getUniformLocationNameFromAgalRegisterIndex( ::flash::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_PUSH("Context3D::getUniformLocationNameFromAgalRegisterIndex","flash/display3D/Context3D.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_LINE(340)
	if (((programType == ::flash::display3D::Context3DProgramType_obj::VERTEX))){
		HX_STACK_LINE(341)
		return (HX_CSTRING("vc") + firstRegister);
	}
	else{
		HX_STACK_LINE(344)
		if (((programType == ::flash::display3D::Context3DProgramType_obj::FRAGMENT))){
			HX_STACK_LINE(345)
			return (HX_CSTRING("fc") + firstRegister);
		}
	}
	HX_STACK_LINE(349)
	hx::Throw (((HX_CSTRING("Program Type ") + ::Std_obj::string(programType)) + HX_CSTRING(" not supported")));
	HX_STACK_LINE(349)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::setProgram( ::flash::display3D::Program3D program3D){
{
		HX_STACK_PUSH("Context3D::setProgram","flash/display3D/Context3D.hx",324);
		HX_STACK_THIS(this);
		HX_STACK_ARG(program3D,"program3D");
		HX_STACK_LINE(325)
		::openfl::gl::GLProgram glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(327)
		if (((program3D != null()))){
			HX_STACK_LINE(328)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(332)
		::openfl::gl::GL_obj::useProgram(glProgram);
		HX_STACK_LINE(333)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_PUSH("Context3D::setDepthTest","flash/display3D/Context3D.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_ARG(depthMask,"depthMask");
		HX_STACK_ARG(passCompareMode,"passCompareMode");
		HX_STACK_LINE(319)
		::openfl::gl::GL_obj::depthFunc(passCompareMode);
		HX_STACK_LINE(320)
		::openfl::gl::GL_obj::depthMask(depthMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_PUSH("Context3D::setCulling","flash/display3D/Context3D.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull");
		HX_STACK_LINE(305)
		if (((triangleFaceToCull == (int)0))){
			HX_STACK_LINE(307)
			::openfl::gl::GL_obj::disable((int)2884);
		}
		else{
			HX_STACK_LINE(311)
			::openfl::gl::GL_obj::cullFace(triangleFaceToCull);
			HX_STACK_LINE(312)
			::openfl::gl::GL_obj::enable((int)2884);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_PUSH("Context3D::setColorMask","flash/display3D/Context3D.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(299)
		::openfl::gl::GL_obj::colorMask(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_PUSH("Context3D::setBlendFactors","flash/display3D/Context3D.hx",290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceFactor,"sourceFactor");
		HX_STACK_ARG(destinationFactor,"destinationFactor");
		HX_STACK_LINE(291)
		this->blendEnabled = true;
		HX_STACK_LINE(292)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(293)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(295)
		this->updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_PUSH("Context3D::present","flash/display3D/Context3D.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_LINE(282)
		this->drawing = false;
		HX_STACK_LINE(283)
		::openfl::gl::GL_obj::useProgram(null());
		HX_STACK_LINE(285)
		::openfl::gl::GL_obj::bindBuffer((int)34962,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::drawTriangles( ::flash::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_PUSH("Context3D::drawTriangles","flash/display3D/Context3D.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(indexBuffer,"indexBuffer");
	HX_STACK_ARG(firstIndex,"firstIndex");
	HX_STACK_ARG(numTriangles,"numTriangles");
{
		HX_STACK_LINE(258)
		if ((!(this->drawing))){
			HX_STACK_LINE(259)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call."),null()));
		}
		HX_STACK_LINE(263)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(265)
		if (((numTriangles == (int)-1))){
			HX_STACK_LINE(266)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(270)
			numIndices = (numTriangles * (int)3);
		}
		HX_STACK_LINE(274)
		int byteOffset = (firstIndex * (int)2);		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(276)
		::openfl::gl::GL_obj::bindBuffer((int)34963,indexBuffer->glBuffer);
		HX_STACK_LINE(277)
		::openfl::gl::GL_obj::drawElements((int)4,numIndices,(int)5123,byteOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::drawToBitmapData( ::flash::display::BitmapData destination){
{
		HX_STACK_PUSH("Context3D::drawToBitmapData","flash/display3D/Context3D.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_ARG(destination,"destination");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::dispose( ){
{
		HX_STACK_PUSH("Context3D::dispose","flash/display3D/Context3D.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(210)
			while(((_g < _g1->length))){
				HX_STACK_LINE(210)
				::flash::display3D::VertexBuffer3D vertexBuffer = _g1->__get(_g).StaticCast< ::flash::display3D::VertexBuffer3D >();		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(210)
				++(_g);
				HX_STACK_LINE(212)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(214)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(216)
			while(((_g < _g1->length))){
				HX_STACK_LINE(216)
				::flash::display3D::IndexBuffer3D indexBuffer = _g1->__get(_g).StaticCast< ::flash::display3D::IndexBuffer3D >();		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(216)
				++(_g);
				HX_STACK_LINE(218)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(220)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			while(((_g < _g1->length))){
				HX_STACK_LINE(222)
				::flash::display3D::Program3D program = _g1->__get(_g).StaticCast< ::flash::display3D::Program3D >();		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(222)
				++(_g);
				HX_STACK_LINE(224)
				program->dispose();
			}
		}
		HX_STACK_LINE(226)
		this->programsCreated = null();
		HX_STACK_LINE(228)
		this->samplerParameters = null();
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(230)
			while(((_g < _g1->length))){
				HX_STACK_LINE(230)
				::flash::display3D::textures::TextureBase texture = _g1->__get(_g).StaticCast< ::flash::display3D::textures::TextureBase >();		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(230)
				++(_g);
				HX_STACK_LINE(232)
				texture->dispose();
			}
		}
		HX_STACK_LINE(234)
		this->texturesCreated = null();
		HX_STACK_LINE(236)
		if (((this->framebuffer != null()))){
			HX_STACK_LINE(237)
			::openfl::gl::GL_obj::deleteFramebuffer(this->framebuffer);
			HX_STACK_LINE(238)
			this->framebuffer = null();
		}
		HX_STACK_LINE(241)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(242)
			::openfl::gl::GL_obj::deleteRenderbuffer(this->renderbuffer);
			HX_STACK_LINE(243)
			this->renderbuffer = null();
		}
		HX_STACK_LINE(248)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

::flash::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_STACK_PUSH("Context3D::createVertexBuffer","flash/display3D/Context3D.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(numVertices,"numVertices");
	HX_STACK_ARG(data32PerVertex,"data32PerVertex");
	HX_STACK_LINE(201)
	::flash::display3D::VertexBuffer3D vertexBuffer = ::flash::display3D::VertexBuffer3D_obj::__new(::openfl::gl::GL_obj::createBuffer(),numVertices,data32PerVertex);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(202)
	this->vertexBuffersCreated->push(vertexBuffer);
	HX_STACK_LINE(203)
	return vertexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createVertexBuffer,return )

::flash::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::flash::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_PUSH("Context3D::createTexture","flash/display3D/Context3D.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	HX_STACK_ARG(streamingLevels,"streamingLevels");
{
		HX_STACK_LINE(194)
		::flash::display3D::textures::Texture texture = ::flash::display3D::textures::Texture_obj::__new(::openfl::gl::GL_obj::createTexture(),optimizeForRenderToTexture,width,height);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(195)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(196)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::flash::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_PUSH("Context3D::createProgram","flash/display3D/Context3D.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	::flash::display3D::Program3D program = ::flash::display3D::Program3D_obj::__new(::openfl::gl::GL_obj::createProgram());		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(188)
	this->programsCreated->push(program);
	HX_STACK_LINE(189)
	return program;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::flash::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices){
	HX_STACK_PUSH("Context3D::createIndexBuffer","flash/display3D/Context3D.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(numIndices,"numIndices");
	HX_STACK_LINE(180)
	::flash::display3D::IndexBuffer3D indexBuffer = ::flash::display3D::IndexBuffer3D_obj::__new(::openfl::gl::GL_obj::createBuffer(),numIndices);		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(181)
	this->indexBuffersCreated->push(indexBuffer);
	HX_STACK_LINE(182)
	return indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,createIndexBuffer,return )

::flash::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::flash::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_PUSH("Context3D::createCubeTexture","flash/display3D/Context3D.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(size,"size");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	HX_STACK_ARG(streamingLevels,"streamingLevels");
{
		HX_STACK_LINE(173)
		::flash::display3D::textures::CubeTexture texture = ::flash::display3D::textures::CubeTexture_obj::__new(::openfl::gl::GL_obj::createTexture(),size);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(174)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(175)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_PUSH("Context3D::configureBackBuffer","flash/display3D/Context3D.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
{
		HX_STACK_LINE(156)
		if ((enableDepthAndStencil)){
			HX_STACK_LINE(159)
			::openfl::gl::GL_obj::enable((int)2929);
			HX_STACK_LINE(160)
			::openfl::gl::GL_obj::enable((int)2960);
		}
		HX_STACK_LINE(165)
		this->ogl->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,width,height));
		HX_STACK_LINE(166)
		this->scrollRect = this->ogl->get_scrollRect()->clone();
		HX_STACK_LINE(167)
		::openfl::gl::GL_obj::viewport(::Std_obj::_int(this->scrollRect->x),::Std_obj::_int(this->scrollRect->y),::Std_obj::_int(this->scrollRect->width),::Std_obj::_int(this->scrollRect->height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_PUSH("Context3D::clear","flash/display3D/Context3D.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(stencil,"stencil");
	HX_STACK_ARG(mask,"mask");
{
		HX_STACK_LINE(139)
		if ((!(this->drawing))){
			HX_STACK_LINE(141)
			this->updateBlendStatus();
			HX_STACK_LINE(142)
			this->drawing = true;
		}
		HX_STACK_LINE(146)
		::openfl::gl::GL_obj::depthMask(true);
		HX_STACK_LINE(147)
		::openfl::gl::GL_obj::clearColor(red,green,blue,alpha);
		HX_STACK_LINE(148)
		::openfl::gl::GL_obj::clearDepth(depth);
		HX_STACK_LINE(149)
		::openfl::gl::GL_obj::clearStencil(stencil);
		HX_STACK_LINE(151)
		::openfl::gl::GL_obj::clear(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::addOGL( ){
{
		HX_STACK_PUSH("Context3D::addOGL","flash/display3D/Context3D.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_LINE(133)
		::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(134)
		stage->addChildAt(this->ogl,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,addOGL,(void))

Void Context3D_obj::removeOGL( ){
{
		HX_STACK_PUSH("Context3D::removeOGL","flash/display3D/Context3D.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(129)
		stage->removeChild(this->ogl);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,removeOGL,(void))

int Context3D_obj::MAX_SAMPLERS;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(stencilRef,"stencilRef");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(stencilRef,"stencilRef");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
}

Dynamic Context3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addOGL") ) { return addOGL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeOGL") ) { return removeOGL_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { return stencilRef; }
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { return MAX_SAMPLERS; }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateBlendStatus") ) { return updateBlendStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { return samplerParameters; }
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderMethod") ) { return removeRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return stencilCompareMode; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"getUniformLocationNameFromAgalRegisterIndex") ) { return getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::openfl::display::OpenGLView >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { stencilRef=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::gl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { MAX_SAMPLERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::gl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { samplerParameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("samplerParameters"));
	outFields->push(HX_CSTRING("renderbuffer"));
	outFields->push(HX_CSTRING("framebuffer"));
	outFields->push(HX_CSTRING("texturesCreated"));
	outFields->push(HX_CSTRING("programsCreated"));
	outFields->push(HX_CSTRING("indexBuffersCreated"));
	outFields->push(HX_CSTRING("vertexBuffersCreated"));
	outFields->push(HX_CSTRING("disposed"));
	outFields->push(HX_CSTRING("drawing"));
	outFields->push(HX_CSTRING("stencilReadMask"));
	outFields->push(HX_CSTRING("stencilRef"));
	outFields->push(HX_CSTRING("stencilCompareMode"));
	outFields->push(HX_CSTRING("blendSourceFactor"));
	outFields->push(HX_CSTRING("blendEnabled"));
	outFields->push(HX_CSTRING("blendDestinationFactor"));
	outFields->push(HX_CSTRING("ogl"));
	outFields->push(HX_CSTRING("currentProgram"));
	outFields->push(HX_CSTRING("enableErrorChecking"));
	outFields->push(HX_CSTRING("driverInfo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_SAMPLERS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateBlendStatus"),
	HX_CSTRING("setGLSLVertexBufferAt"),
	HX_CSTRING("setVertexBufferAt"),
	HX_CSTRING("setGLSLTextureAt"),
	HX_CSTRING("setTextureAt"),
	HX_CSTRING("setStencilReferenceValue"),
	HX_CSTRING("setStencilActions"),
	HX_CSTRING("setScissorRectangle"),
	HX_CSTRING("setTextureParameters"),
	HX_CSTRING("setSamplerStateAt"),
	HX_CSTRING("setRenderToTexture"),
	HX_CSTRING("setRenderToBackBuffer"),
	HX_CSTRING("removeRenderMethod"),
	HX_CSTRING("setRenderMethod"),
	HX_CSTRING("setGLSLProgramConstantsFromVector4"),
	HX_CSTRING("setGLSLProgramConstantsFromMatrix"),
	HX_CSTRING("setGLSLProgramConstantsFromByteArray"),
	HX_CSTRING("setProgramConstantsFromVector"),
	HX_CSTRING("setProgramConstantsFromMatrix"),
	HX_CSTRING("setProgramConstantsFromByteArray"),
	HX_CSTRING("getUniformLocationNameFromAgalRegisterIndex"),
	HX_CSTRING("setProgram"),
	HX_CSTRING("setDepthTest"),
	HX_CSTRING("setCulling"),
	HX_CSTRING("setColorMask"),
	HX_CSTRING("setBlendFactors"),
	HX_CSTRING("present"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("drawToBitmapData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("createVertexBuffer"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createIndexBuffer"),
	HX_CSTRING("createCubeTexture"),
	HX_CSTRING("configureBackBuffer"),
	HX_CSTRING("clear"),
	HX_CSTRING("addOGL"),
	HX_CSTRING("removeOGL"),
	HX_CSTRING("scrollRect"),
	HX_CSTRING("samplerParameters"),
	HX_CSTRING("renderbuffer"),
	HX_CSTRING("framebuffer"),
	HX_CSTRING("texturesCreated"),
	HX_CSTRING("programsCreated"),
	HX_CSTRING("indexBuffersCreated"),
	HX_CSTRING("vertexBuffersCreated"),
	HX_CSTRING("disposed"),
	HX_CSTRING("drawing"),
	HX_CSTRING("stencilReadMask"),
	HX_CSTRING("stencilRef"),
	HX_CSTRING("stencilCompareMode"),
	HX_CSTRING("blendSourceFactor"),
	HX_CSTRING("blendEnabled"),
	HX_CSTRING("blendDestinationFactor"),
	HX_CSTRING("ogl"),
	HX_CSTRING("currentProgram"),
	HX_CSTRING("enableErrorChecking"),
	HX_CSTRING("driverInfo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
};

Class Context3D_obj::__mClass;

void Context3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.Context3D"), hx::TCanCast< Context3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3D_obj::__boot()
{
	MAX_SAMPLERS= (int)8;
}

} // end namespace flash
} // end namespace display3D
