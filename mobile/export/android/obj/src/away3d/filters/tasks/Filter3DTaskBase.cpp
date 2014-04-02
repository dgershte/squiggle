#include <hxcpp.h>

#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#include <away3d/filters/tasks/Filter3DTaskBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
namespace filters{
namespace tasks{

Void Filter3DTaskBase_obj::__construct(hx::Null< bool >  __o_requireDepthRender)
{
HX_STACK_PUSH("Filter3DTaskBase::new","away3d/filters/tasks/Filter3DTaskBase.hx",33);
bool requireDepthRender = __o_requireDepthRender.Default(false);
{
	HX_STACK_LINE(34)
	this->_scaledTextureWidth = (int)-1;
	HX_STACK_LINE(35)
	this->_scaledTextureHeight = (int)-1;
	HX_STACK_LINE(36)
	this->_textureWidth = (int)-1;
	HX_STACK_LINE(37)
	this->_textureHeight = (int)-1;
	HX_STACK_LINE(38)
	this->_textureDimensionsInvalid = true;
	HX_STACK_LINE(39)
	this->_program3DInvalid = true;
	HX_STACK_LINE(40)
	this->_textureScale = (int)0;
	HX_STACK_LINE(41)
	this->_requireDepthRender = requireDepthRender;
}
;
	return null();
}

Filter3DTaskBase_obj::~Filter3DTaskBase_obj() { }

Dynamic Filter3DTaskBase_obj::__CreateEmpty() { return  new Filter3DTaskBase_obj; }
hx::ObjectPtr< Filter3DTaskBase_obj > Filter3DTaskBase_obj::__new(hx::Null< bool >  __o_requireDepthRender)
{  hx::ObjectPtr< Filter3DTaskBase_obj > result = new Filter3DTaskBase_obj();
	result->__construct(__o_requireDepthRender);
	return result;}

Dynamic Filter3DTaskBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Filter3DTaskBase_obj > result = new Filter3DTaskBase_obj();
	result->__construct(inArgs[0]);
	return result;}

bool Filter3DTaskBase_obj::get_requireDepthRender( ){
	HX_STACK_PUSH("Filter3DTaskBase::get_requireDepthRender","away3d/filters/tasks/Filter3DTaskBase.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_LINE(142)
	return this->_requireDepthRender;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_requireDepthRender,return )

Void Filter3DTaskBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("Filter3DTaskBase::deactivate","away3d/filters/tasks/Filter3DTaskBase.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,deactivate,(void))

Void Filter3DTaskBase_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::display3D::textures::Texture depthTexture){
{
		HX_STACK_PUSH("Filter3DTaskBase::activate","away3d/filters/tasks/Filter3DTaskBase.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(depthTexture,"depthTexture");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Filter3DTaskBase_obj,activate,(void))

::flash::display3D::Program3D Filter3DTaskBase_obj::getProgram3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("Filter3DTaskBase::getProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(132)
	if ((this->_program3DInvalid)){
		HX_STACK_LINE(132)
		this->updateProgram3D(stage3DProxy);
	}
	HX_STACK_LINE(133)
	return this->_program3D;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,getProgram3D,return )

Void Filter3DTaskBase_obj::updateTextures( ::away3d::core::managers::Stage3DProxy stage){
{
		HX_STACK_PUSH("Filter3DTaskBase::updateTextures","away3d/filters/tasks/Filter3DTaskBase.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage,"stage");
		HX_STACK_LINE(126)
		if (((this->_mainInputTexture != null()))){
			HX_STACK_LINE(126)
			this->_mainInputTexture->dispose();
		}
		HX_STACK_LINE(127)
		this->_mainInputTexture = stage->get_context3D()->createTexture(this->_scaledTextureWidth,this->_scaledTextureHeight,::flash::display3D::Context3DTextureFormat_obj::BGRA,true,null());
		HX_STACK_LINE(128)
		this->_textureDimensionsInvalid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,updateTextures,(void))

::String Filter3DTaskBase_obj::getFragmentCode( ){
	HX_STACK_PUSH("Filter3DTaskBase::getFragmentCode","away3d/filters/tasks/Filter3DTaskBase.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(121)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(122)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,getFragmentCode,return )

::String Filter3DTaskBase_obj::getVertexCode( ){
	HX_STACK_PUSH("Filter3DTaskBase::getVertexCode","away3d/filters/tasks/Filter3DTaskBase.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return (HX_CSTRING("mov op, va0\n") + HX_CSTRING("mov v0, va1\n"));
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,getVertexCode,return )

Void Filter3DTaskBase_obj::updateProgram3D( ::away3d::core::managers::Stage3DProxy stage){
{
		HX_STACK_PUSH("Filter3DTaskBase::updateProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage,"stage");
		HX_STACK_LINE(109)
		if (((this->_program3D != null()))){
			HX_STACK_LINE(109)
			this->_program3D->dispose();
		}
		HX_STACK_LINE(110)
		this->_program3D = stage->get_context3D()->createProgram();
		struct _Function_1_1{
			inline static ::openfl::gl::GLShader Block( ::away3d::filters::tasks::Filter3DTaskBase_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/filters/tasks/Filter3DTaskBase.hx",112);
				{
					HX_STACK_LINE(112)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(112)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(112)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(112)
					{
						::flash::display3D::Context3DProgramType _switch_1 = (::flash::display3D::Context3DProgramType_obj::VERTEX);
						switch((_switch_1)->GetIndex()){
							case 0: {
								HX_STACK_LINE(112)
								glType = (int)35633;
								HX_STACK_LINE(112)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(112)
								glType = (int)35632;
								HX_STACK_LINE(112)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(112)
					::String shaderSourceString = aglsl1->compile(shaderType,__this->getVertexCode());		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(112)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(112)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(112)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(112)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(112)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(112)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(112)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(112)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(112)
					return shader;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::openfl::gl::GLShader Block( ::away3d::filters::tasks::Filter3DTaskBase_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/filters/tasks/Filter3DTaskBase.hx",112);
				{
					HX_STACK_LINE(112)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(112)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(112)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(112)
					{
						::flash::display3D::Context3DProgramType _switch_2 = (::flash::display3D::Context3DProgramType_obj::FRAGMENT);
						switch((_switch_2)->GetIndex()){
							case 0: {
								HX_STACK_LINE(112)
								glType = (int)35633;
								HX_STACK_LINE(112)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(112)
								glType = (int)35632;
								HX_STACK_LINE(112)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(112)
					::String shaderSourceString = aglsl1->compile(shaderType,__this->getFragmentCode());		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(112)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(112)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(112)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(112)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(112)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(112)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(112)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(112)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(112)
					return shader;
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		this->_program3D->upload(_Function_1_1::Block(this),_Function_1_2::Block(this));
		HX_STACK_LINE(113)
		this->_program3DInvalid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,updateProgram3D,(void))

Void Filter3DTaskBase_obj::invalidateProgram3D( ){
{
		HX_STACK_PUSH("Filter3DTaskBase::invalidateProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(104)
		this->_program3DInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,invalidateProgram3D,(void))

Void Filter3DTaskBase_obj::dispose( ){
{
		HX_STACK_PUSH("Filter3DTaskBase::dispose","away3d/filters/tasks/Filter3DTaskBase.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		if (((this->_mainInputTexture != null()))){
			HX_STACK_LINE(100)
			this->_mainInputTexture->dispose();
		}
		HX_STACK_LINE(101)
		if (((this->_program3D != null()))){
			HX_STACK_LINE(101)
			this->_program3D->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,dispose,(void))

::flash::display3D::textures::Texture Filter3DTaskBase_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage){
	HX_STACK_PUSH("Filter3DTaskBase::getMainInputTexture","away3d/filters/tasks/Filter3DTaskBase.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage,"stage");
	HX_STACK_LINE(95)
	if ((this->_textureDimensionsInvalid)){
		HX_STACK_LINE(95)
		this->updateTextures(stage);
	}
	HX_STACK_LINE(96)
	return this->_mainInputTexture;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,getMainInputTexture,return )

int Filter3DTaskBase_obj::set_textureHeight( int value){
	HX_STACK_PUSH("Filter3DTaskBase::set_textureHeight","away3d/filters/tasks/Filter3DTaskBase.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(87)
	if (((this->_textureHeight == value))){
		HX_STACK_LINE(87)
		return value;
	}
	HX_STACK_LINE(88)
	this->_textureHeight = value;
	HX_STACK_LINE(89)
	this->_scaledTextureHeight = (int(this->_textureHeight) >> int(this->_textureScale));
	HX_STACK_LINE(90)
	this->_textureDimensionsInvalid = true;
	HX_STACK_LINE(91)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureHeight,return )

int Filter3DTaskBase_obj::get_textureHeight( ){
	HX_STACK_PUSH("Filter3DTaskBase::get_textureHeight","away3d/filters/tasks/Filter3DTaskBase.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->_textureHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureHeight,return )

int Filter3DTaskBase_obj::set_textureWidth( int value){
	HX_STACK_PUSH("Filter3DTaskBase::set_textureWidth","away3d/filters/tasks/Filter3DTaskBase.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(75)
	if (((this->_textureWidth == value))){
		HX_STACK_LINE(75)
		return value;
	}
	HX_STACK_LINE(76)
	this->_textureWidth = value;
	HX_STACK_LINE(77)
	this->_scaledTextureWidth = (int(this->_textureWidth) >> int(this->_textureScale));
	HX_STACK_LINE(78)
	this->_textureDimensionsInvalid = true;
	HX_STACK_LINE(79)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureWidth,return )

int Filter3DTaskBase_obj::get_textureWidth( ){
	HX_STACK_PUSH("Filter3DTaskBase::get_textureWidth","away3d/filters/tasks/Filter3DTaskBase.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->_textureWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureWidth,return )

::flash::display3D::textures::Texture Filter3DTaskBase_obj::set_target( ::flash::display3D::textures::Texture value){
	HX_STACK_PUSH("Filter3DTaskBase::set_target","away3d/filters/tasks/Filter3DTaskBase.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(66)
	this->_target = value;
	HX_STACK_LINE(67)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_target,return )

::flash::display3D::textures::Texture Filter3DTaskBase_obj::get_target( ){
	HX_STACK_PUSH("Filter3DTaskBase::get_target","away3d/filters/tasks/Filter3DTaskBase.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_target;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_target,return )

int Filter3DTaskBase_obj::set_textureScale( int value){
	HX_STACK_PUSH("Filter3DTaskBase::set_textureScale","away3d/filters/tasks/Filter3DTaskBase.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(53)
	if (((this->_textureScale == value))){
		HX_STACK_LINE(53)
		return value;
	}
	HX_STACK_LINE(54)
	this->_textureScale = value;
	HX_STACK_LINE(55)
	this->_scaledTextureWidth = (int(this->_textureWidth) >> int(this->_textureScale));
	HX_STACK_LINE(56)
	this->_scaledTextureHeight = (int(this->_textureHeight) >> int(this->_textureScale));
	HX_STACK_LINE(57)
	this->_textureDimensionsInvalid = true;
	HX_STACK_LINE(58)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureScale,return )

int Filter3DTaskBase_obj::get_textureScale( ){
	HX_STACK_PUSH("Filter3DTaskBase::get_textureScale","away3d/filters/tasks/Filter3DTaskBase.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_textureScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureScale,return )


Filter3DTaskBase_obj::Filter3DTaskBase_obj()
{
}

void Filter3DTaskBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DTaskBase);
	HX_MARK_MEMBER_NAME(_textureScale,"_textureScale");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_program3D,"_program3D");
	HX_MARK_MEMBER_NAME(_program3DInvalid,"_program3DInvalid");
	HX_MARK_MEMBER_NAME(_textureDimensionsInvalid,"_textureDimensionsInvalid");
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_scaledTextureHeight,"_scaledTextureHeight");
	HX_MARK_MEMBER_NAME(_scaledTextureWidth,"_scaledTextureWidth");
	HX_MARK_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_MARK_END_CLASS();
}

void Filter3DTaskBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textureScale,"_textureScale");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_program3D,"_program3D");
	HX_VISIT_MEMBER_NAME(_program3DInvalid,"_program3DInvalid");
	HX_VISIT_MEMBER_NAME(_textureDimensionsInvalid,"_textureDimensionsInvalid");
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_scaledTextureHeight,"_scaledTextureHeight");
	HX_VISIT_MEMBER_NAME(_scaledTextureWidth,"_scaledTextureWidth");
	HX_VISIT_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
}

Dynamic Filter3DTaskBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return get_target(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"_program3D") ) { return _program3D; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getProgram3D") ) { return getProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"textureWidth") ) { return get_textureWidth(); }
		if (HX_FIELD_EQ(inName,"textureScale") ) { return get_textureScale(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_textureScale") ) { return _textureScale; }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return _textureWidth; }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { return get_textureHeight(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextures") ) { return updateTextures_dyn(); }
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return _textureHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return updateProgram3D_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_textureWidth") ) { return set_textureWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return get_textureWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textureScale") ) { return set_textureScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureScale") ) { return get_textureScale_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_textureHeight") ) { return set_textureHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return get_textureHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_program3DInvalid") ) { return _program3DInvalid; }
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { return _mainInputTexture; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { return get_requireDepthRender(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateProgram3D") ) { return invalidateProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return getMainInputTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return _requireDepthRender; }
		if (HX_FIELD_EQ(inName,"_scaledTextureWidth") ) { return _scaledTextureWidth; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_scaledTextureHeight") ) { return _scaledTextureHeight; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return get_requireDepthRender_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_textureDimensionsInvalid") ) { return _textureDimensionsInvalid; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Filter3DTaskBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return set_target(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flash::display3D::textures::Texture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3D") ) { _program3D=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { return set_textureWidth(inValue); }
		if (HX_FIELD_EQ(inName,"textureScale") ) { return set_textureScale(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureScale") ) { _textureScale=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { return set_textureHeight(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_program3DInvalid") ) { _program3DInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { _mainInputTexture=inValue.Cast< ::flash::display3D::textures::Texture >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledTextureWidth") ) { _scaledTextureWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_scaledTextureHeight") ) { _scaledTextureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_textureDimensionsInvalid") ) { _textureDimensionsInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DTaskBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textureScale"));
	outFields->push(HX_CSTRING("_requireDepthRender"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_program3D"));
	outFields->push(HX_CSTRING("_program3DInvalid"));
	outFields->push(HX_CSTRING("_textureDimensionsInvalid"));
	outFields->push(HX_CSTRING("_textureHeight"));
	outFields->push(HX_CSTRING("_textureWidth"));
	outFields->push(HX_CSTRING("_scaledTextureHeight"));
	outFields->push(HX_CSTRING("_scaledTextureWidth"));
	outFields->push(HX_CSTRING("_mainInputTexture"));
	outFields->push(HX_CSTRING("requireDepthRender"));
	outFields->push(HX_CSTRING("textureHeight"));
	outFields->push(HX_CSTRING("textureWidth"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("textureScale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_requireDepthRender"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("activate"),
	HX_CSTRING("getProgram3D"),
	HX_CSTRING("updateTextures"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("updateProgram3D"),
	HX_CSTRING("invalidateProgram3D"),
	HX_CSTRING("dispose"),
	HX_CSTRING("getMainInputTexture"),
	HX_CSTRING("set_textureHeight"),
	HX_CSTRING("get_textureHeight"),
	HX_CSTRING("set_textureWidth"),
	HX_CSTRING("get_textureWidth"),
	HX_CSTRING("set_target"),
	HX_CSTRING("get_target"),
	HX_CSTRING("set_textureScale"),
	HX_CSTRING("get_textureScale"),
	HX_CSTRING("_textureScale"),
	HX_CSTRING("_requireDepthRender"),
	HX_CSTRING("_target"),
	HX_CSTRING("_program3D"),
	HX_CSTRING("_program3DInvalid"),
	HX_CSTRING("_textureDimensionsInvalid"),
	HX_CSTRING("_textureHeight"),
	HX_CSTRING("_textureWidth"),
	HX_CSTRING("_scaledTextureHeight"),
	HX_CSTRING("_scaledTextureWidth"),
	HX_CSTRING("_mainInputTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Filter3DTaskBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Filter3DTaskBase_obj::__mClass,"__mClass");
};

Class Filter3DTaskBase_obj::__mClass;

void Filter3DTaskBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.filters.tasks.Filter3DTaskBase"), hx::TCanCast< Filter3DTaskBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Filter3DTaskBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace filters
} // end namespace tasks
