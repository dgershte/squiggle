#include <hxcpp.h>

#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#include <away3d/core/render/BackgroundImageRenderer.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
namespace away3d{
namespace core{
namespace render{

Void BackgroundImageRenderer_obj::__construct(::away3d::core::managers::Stage3DProxy stage3DProxy)
{
HX_STACK_PUSH("BackgroundImageRenderer::new","away3d/core/render/BackgroundImageRenderer.hx",28);
{
	HX_STACK_LINE(28)
	this->set_stage3DProxy(stage3DProxy);
}
;
	return null();
}

BackgroundImageRenderer_obj::~BackgroundImageRenderer_obj() { }

Dynamic BackgroundImageRenderer_obj::__CreateEmpty() { return  new BackgroundImageRenderer_obj; }
hx::ObjectPtr< BackgroundImageRenderer_obj > BackgroundImageRenderer_obj::__new(::away3d::core::managers::Stage3DProxy stage3DProxy)
{  hx::ObjectPtr< BackgroundImageRenderer_obj > result = new BackgroundImageRenderer_obj();
	result->__construct(stage3DProxy);
	return result;}

Dynamic BackgroundImageRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackgroundImageRenderer_obj > result = new BackgroundImageRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BackgroundImageRenderer_obj::onContextUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("BackgroundImageRenderer::onContextUpdate","away3d/core/render/BackgroundImageRenderer.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(128)
		this->_context = this->_stage3DProxy->get_context3D();
		HX_STACK_LINE(130)
		if (((this->_vertexBuffer == null()))){
			HX_STACK_LINE(131)
			this->_vertexBuffer->dispose();
			HX_STACK_LINE(132)
			this->_vertexBuffer = null();
			HX_STACK_LINE(133)
			this->_program3d->dispose();
			HX_STACK_LINE(134)
			this->_program3d = null();
			HX_STACK_LINE(135)
			this->_indexBuffer->dispose();
			HX_STACK_LINE(136)
			this->_indexBuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,onContextUpdate,(void))

::away3d::textures::Texture2DBase BackgroundImageRenderer_obj::set_texture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("BackgroundImageRenderer::set_texture","away3d/core/render/BackgroundImageRenderer.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(122)
	this->_texture = value;
	HX_STACK_LINE(123)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,set_texture,return )

::away3d::textures::Texture2DBase BackgroundImageRenderer_obj::get_texture( ){
	HX_STACK_PUSH("BackgroundImageRenderer::get_texture","away3d/core/render/BackgroundImageRenderer.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,get_texture,return )

Void BackgroundImageRenderer_obj::initBuffers( ::flash::display3D::Context3D context){
{
		HX_STACK_PUSH("BackgroundImageRenderer::initBuffers","away3d/core/render/BackgroundImageRenderer.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(99)
		this->_vertexBuffer = context->createVertexBuffer((int)4,(int)4);
		HX_STACK_LINE(100)
		this->_program3d = context->createProgram();
		HX_STACK_LINE(101)
		this->_indexBuffer = context->createIndexBuffer((int)6);
		HX_STACK_LINE(102)
		this->_indexBuffer->uploadFromVector(::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< int >::__new().Add((int)2).Add((int)1).Add((int)0).Add((int)3).Add((int)2).Add((int)0)),(int)0,(int)6);
		struct _Function_1_1{
			inline static ::openfl::gl::GLShader Block( ::away3d::core::render::BackgroundImageRenderer_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/core/render/BackgroundImageRenderer.hx",103);
				{
					HX_STACK_LINE(103)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(103)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(103)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(103)
					{
						::flash::display3D::Context3DProgramType _switch_1 = (::flash::display3D::Context3DProgramType_obj::VERTEX);
						switch((_switch_1)->GetIndex()){
							case 0: {
								HX_STACK_LINE(103)
								glType = (int)35633;
								HX_STACK_LINE(103)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(103)
								glType = (int)35632;
								HX_STACK_LINE(103)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(103)
					::String shaderSourceString = aglsl1->compile(shaderType,__this->getVertexCode());		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(103)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(103)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(103)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(103)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(103)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(103)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(103)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(103)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(103)
					return shader;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::openfl::gl::GLShader Block( ::away3d::core::render::BackgroundImageRenderer_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/core/render/BackgroundImageRenderer.hx",103);
				{
					HX_STACK_LINE(103)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(103)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(103)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(103)
					{
						::flash::display3D::Context3DProgramType _switch_2 = (::flash::display3D::Context3DProgramType_obj::FRAGMENT);
						switch((_switch_2)->GetIndex()){
							case 0: {
								HX_STACK_LINE(103)
								glType = (int)35633;
								HX_STACK_LINE(103)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(103)
								glType = (int)35632;
								HX_STACK_LINE(103)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(103)
					::String shaderSourceString = aglsl1->compile(shaderType,__this->getFragmentCode());		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(103)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(103)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(103)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(103)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(103)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(103)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(103)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(103)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(103)
					return shader;
				}
				return null();
			}
		};
		HX_STACK_LINE(103)
		this->_program3d->upload(_Function_1_1::Block(this),_Function_1_2::Block(this));
		HX_STACK_LINE(104)
		Float w = (int)2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(105)
		Float h = (int)2;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(106)
		Float x = (int)-1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(107)
		Float y = (int)1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(108)
		if (((this->_stage3DProxy->get_scissorRect() != null()))){
			HX_STACK_LINE(109)
			x = (Float((((this->_stage3DProxy->get_scissorRect()->x * (int)2) - this->_stage3DProxy->get_viewPort()->width))) / Float(this->_stage3DProxy->get_viewPort()->width));
			HX_STACK_LINE(110)
			y = ((Float((((this->_stage3DProxy->get_scissorRect()->y * (int)2) - this->_stage3DProxy->get_viewPort()->height))) / Float(this->_stage3DProxy->get_viewPort()->height)) * (int)-1);
			HX_STACK_LINE(111)
			w = (Float((int)2) / Float(((Float(this->_stage3DProxy->get_viewPort()->width) / Float(this->_stage3DProxy->get_scissorRect()->width)))));
			HX_STACK_LINE(112)
			h = (Float((int)2) / Float(((Float(this->_stage3DProxy->get_viewPort()->height) / Float(this->_stage3DProxy->get_scissorRect()->height)))));
		}
		HX_STACK_LINE(114)
		this->_vertexBuffer->uploadFromVector(::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< Float >::__new().Add(x).Add((y - h)).Add((int)0).Add((int)1).Add((x + w)).Add((y - h)).Add((int)1).Add((int)1).Add((x + w)).Add(y).Add((int)1).Add((int)0).Add(x).Add(y).Add((int)0).Add((int)0)),(int)0,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,initBuffers,(void))

Void BackgroundImageRenderer_obj::render( ){
{
		HX_STACK_PUSH("BackgroundImageRenderer::render","away3d/core/render/BackgroundImageRenderer.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		if (((this->_context == null()))){
			HX_STACK_LINE(85)
			return null();
		}
		HX_STACK_LINE(86)
		if (((this->_vertexBuffer == null()))){
			HX_STACK_LINE(86)
			this->initBuffers(this->_context);
		}
		HX_STACK_LINE(88)
		this->_context->setProgram(this->_program3d);
		HX_STACK_LINE(89)
		this->_context->setTextureAt((int)0,this->_texture->getTextureForStage3D(this->_stage3DProxy));
		HX_STACK_LINE(90)
		this->_context->setVertexBufferAt((int)0,this->_vertexBuffer,(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
		HX_STACK_LINE(91)
		this->_context->setVertexBufferAt((int)1,this->_vertexBuffer,(int)2,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
		HX_STACK_LINE(92)
		this->_context->drawTriangles(this->_indexBuffer,(int)0,(int)2);
		HX_STACK_LINE(93)
		this->_context->setVertexBufferAt((int)0,null(),null(),null());
		HX_STACK_LINE(94)
		this->_context->setVertexBufferAt((int)1,null(),null(),null());
		HX_STACK_LINE(95)
		this->_context->setTextureAt((int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,render,(void))

Void BackgroundImageRenderer_obj::dispose( ){
{
		HX_STACK_PUSH("BackgroundImageRenderer::dispose","away3d/core/render/BackgroundImageRenderer.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(80)
		this->removeBuffers();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,dispose,(void))

::String BackgroundImageRenderer_obj::getFragmentCode( ){
	HX_STACK_PUSH("BackgroundImageRenderer::getFragmentCode","away3d/core/render/BackgroundImageRenderer.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	::String format;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(68)
	::flash::display3D::Context3DTextureFormat _sw0_ = this->_texture->get_format();		HX_STACK_VAR(_sw0_,"_sw0_");
	HX_STACK_LINE(69)
	{
		::flash::display3D::Context3DTextureFormat _switch_3 = (_sw0_);
		switch((_switch_3)->GetIndex()){
			case 1: {
				HX_STACK_LINE(70)
				format = HX_CSTRING("dxt1,");
			}
			;break;
			case 2: {
				HX_STACK_LINE(72)
				format = HX_CSTRING("dxt5,");
			}
			;break;
			default: {
				HX_STACK_LINE(74)
				format = HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(77)
	return (((HX_CSTRING("tex ft0, v0, fs0 <2d, ") + format) + HX_CSTRING("linear>\t\n")) + HX_CSTRING("mov oc, ft0"));
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,getFragmentCode,return )

::String BackgroundImageRenderer_obj::getVertexCode( ){
	HX_STACK_PUSH("BackgroundImageRenderer::getVertexCode","away3d/core/render/BackgroundImageRenderer.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return (HX_CSTRING("mov op, va0\n") + HX_CSTRING("mov v0, va1"));
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,getVertexCode,return )

Void BackgroundImageRenderer_obj::removeBuffers( ){
{
		HX_STACK_PUSH("BackgroundImageRenderer::removeBuffers","away3d/core/render/BackgroundImageRenderer.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		if (((this->_vertexBuffer != null()))){
			HX_STACK_LINE(53)
			this->_vertexBuffer->dispose();
			HX_STACK_LINE(54)
			this->_vertexBuffer = null();
			HX_STACK_LINE(55)
			this->_program3d->dispose();
			HX_STACK_LINE(56)
			this->_program3d = null();
			HX_STACK_LINE(57)
			this->_indexBuffer->dispose();
			HX_STACK_LINE(58)
			this->_indexBuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,removeBuffers,(void))

::away3d::core::managers::Stage3DProxy BackgroundImageRenderer_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
	HX_STACK_PUSH("BackgroundImageRenderer::set_stage3DProxy","away3d/core/render/BackgroundImageRenderer.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(37)
	if (((value == this->_stage3DProxy))){
		HX_STACK_LINE(37)
		return value;
	}
	HX_STACK_LINE(38)
	if (((value == null()))){
		HX_STACK_LINE(39)
		if (((this->_stage3DProxy != null()))){
			HX_STACK_LINE(39)
			this->_stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,this->onContextUpdate_dyn(),null());
		}
		HX_STACK_LINE(40)
		this->_stage3DProxy = null();
		HX_STACK_LINE(41)
		this->_context = null();
		HX_STACK_LINE(42)
		return null();
	}
	HX_STACK_LINE(44)
	this->_stage3DProxy = value;
	HX_STACK_LINE(45)
	this->_context = this->_stage3DProxy->get_context3D();
	HX_STACK_LINE(46)
	this->_stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,this->onContextUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(47)
	this->removeBuffers();
	HX_STACK_LINE(48)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundImageRenderer_obj,set_stage3DProxy,return )

::away3d::core::managers::Stage3DProxy BackgroundImageRenderer_obj::get_stage3DProxy( ){
	HX_STACK_PUSH("BackgroundImageRenderer::get_stage3DProxy","away3d/core/render/BackgroundImageRenderer.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return this->_stage3DProxy;
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundImageRenderer_obj,get_stage3DProxy,return )


BackgroundImageRenderer_obj::BackgroundImageRenderer_obj()
{
}

void BackgroundImageRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundImageRenderer);
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_program3d,"_program3d");
	HX_MARK_END_CLASS();
}

void BackgroundImageRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_context,"_context");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_program3d,"_program3d");
}

Dynamic BackgroundImageRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return get_texture(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return _context; }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3d") ) { return _program3d; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"initBuffers") ) { return initBuffers_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return get_stage3DProxy(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBuffers") ) { return removeBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onContextUpdate") ) { return onContextUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return set_stage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return get_stage3DProxy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackgroundImageRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return set_texture(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3d") ) { _program3d=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::flash::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return set_stage3DProxy(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< ::flash::display3D::VertexBuffer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundImageRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_context"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_texture"));
	outFields->push(HX_CSTRING("_program3d"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("stage3DProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onContextUpdate"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("initBuffers"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("removeBuffers"),
	HX_CSTRING("set_stage3DProxy"),
	HX_CSTRING("get_stage3DProxy"),
	HX_CSTRING("_context"),
	HX_CSTRING("_stage3DProxy"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_texture"),
	HX_CSTRING("_program3d"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackgroundImageRenderer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundImageRenderer_obj::__mClass,"__mClass");
};

Class BackgroundImageRenderer_obj::__mClass;

void BackgroundImageRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.render.BackgroundImageRenderer"), hx::TCanCast< BackgroundImageRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackgroundImageRenderer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace render
