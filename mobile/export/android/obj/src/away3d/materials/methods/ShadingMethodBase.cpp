#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
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
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
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
namespace away3d{
namespace materials{
namespace methods{

Void ShadingMethodBase_obj::__construct()
{
HX_STACK_PUSH("ShadingMethodBase::new","away3d/materials/methods/ShadingMethodBase.hx",33);
{
	HX_STACK_LINE(33)
	super::__construct(null());
}
;
	return null();
}

ShadingMethodBase_obj::~ShadingMethodBase_obj() { }

Dynamic ShadingMethodBase_obj::__CreateEmpty() { return  new ShadingMethodBase_obj; }
hx::ObjectPtr< ShadingMethodBase_obj > ShadingMethodBase_obj::__new()
{  hx::ObjectPtr< ShadingMethodBase_obj > result = new ShadingMethodBase_obj();
	result->__construct();
	return result;}

Dynamic ShadingMethodBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadingMethodBase_obj > result = new ShadingMethodBase_obj();
	result->__construct();
	return result;}

Void ShadingMethodBase_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("ShadingMethodBase::copyFrom","away3d/materials/methods/ShadingMethodBase.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,copyFrom,(void))

Void ShadingMethodBase_obj::invalidateShaderProgram( ){
{
		HX_STACK_PUSH("ShadingMethodBase::invalidateShaderProgram","away3d/materials/methods/ShadingMethodBase.hx",213);
		HX_STACK_THIS(this);
		HX_STACK_LINE(213)
		this->dispatchEvent(::away3d::events::ShadingMethodEvent_obj::__new(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,invalidateShaderProgram,(void))

::String ShadingMethodBase_obj::getFormatStringForTexture( ::away3d::textures::TextureProxyBase texture){
	HX_STACK_PUSH("ShadingMethodBase::getFormatStringForTexture","away3d/materials/methods/ShadingMethodBase.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_LINE(198)
	::flash::display3D::Context3DTextureFormat _sw0_ = texture->get_format();		HX_STACK_VAR(_sw0_,"_sw0_");
	HX_STACK_LINE(199)
	{
		::flash::display3D::Context3DTextureFormat _switch_1 = (_sw0_);
		switch((_switch_1)->GetIndex()){
			case 1: {
				HX_STACK_LINE(200)
				return HX_CSTRING("dxt1,");
			}
			;break;
			case 2: {
				HX_STACK_LINE(202)
				return HX_CSTRING("dxt5,");
			}
			;break;
			default: {
				HX_STACK_LINE(204)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(199)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,getFormatStringForTexture,return )

::String ShadingMethodBase_obj::getTexCubeSampleCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement targetReg,::away3d::materials::compilation::ShaderRegisterElement inputReg,::away3d::textures::TextureProxyBase texture,::away3d::materials::compilation::ShaderRegisterElement uvReg){
	HX_STACK_PUSH("ShadingMethodBase::getTexCubeSampleCode","away3d/materials/methods/ShadingMethodBase.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_ARG(inputReg,"inputReg");
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(uvReg,"uvReg");
	HX_STACK_LINE(183)
	::String filter;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(184)
	::String format = this->getFormatStringForTexture(texture);		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(185)
	bool enableMipMaps = (bool(vo->useMipmapping) && bool(texture->get_hasMipMaps()));		HX_STACK_VAR(enableMipMaps,"enableMipMaps");
	HX_STACK_LINE(186)
	if ((vo->useSmoothTextures)){
		HX_STACK_LINE(186)
		filter = (  ((enableMipMaps)) ? ::String(HX_CSTRING("linear,miplinear")) : ::String(HX_CSTRING("linear")) );
	}
	else{
		HX_STACK_LINE(187)
		filter = (  ((enableMipMaps)) ? ::String(HX_CSTRING("nearest,mipnearest")) : ::String(HX_CSTRING("nearest")) );
	}
	HX_STACK_LINE(188)
	return (((((((((HX_CSTRING("tex ") + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(uvReg)) + HX_CSTRING(", ")) + ::Std_obj::string(inputReg)) + HX_CSTRING(" <cube,")) + format) + filter) + HX_CSTRING(">\n"));
}


HX_DEFINE_DYNAMIC_FUNC5(ShadingMethodBase_obj,getTexCubeSampleCode,return )

::String ShadingMethodBase_obj::getTex2DSampleCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement targetReg,::away3d::materials::compilation::ShaderRegisterElement inputReg,::away3d::textures::TextureProxyBase texture,::away3d::materials::compilation::ShaderRegisterElement uvReg,::String forceWrap){
	HX_STACK_PUSH("ShadingMethodBase::getTex2DSampleCode","away3d/materials/methods/ShadingMethodBase.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_ARG(inputReg,"inputReg");
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(uvReg,"uvReg");
	HX_STACK_ARG(forceWrap,"forceWrap");
	HX_STACK_LINE(160)
	::String wrap = (  ((vo->repeatTextures)) ? ::String(HX_CSTRING("wrap")) : ::String(HX_CSTRING("clamp")) );		HX_STACK_VAR(wrap,"wrap");
	HX_STACK_LINE(161)
	if (((forceWrap != null()))){
		HX_STACK_LINE(161)
		wrap = forceWrap;
	}
	HX_STACK_LINE(162)
	::String filter;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(163)
	::String format = this->getFormatStringForTexture(texture);		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(164)
	bool enableMipMaps = (bool(vo->useMipmapping) && bool(texture->get_hasMipMaps()));		HX_STACK_VAR(enableMipMaps,"enableMipMaps");
	HX_STACK_LINE(165)
	if ((vo->useSmoothTextures)){
		HX_STACK_LINE(165)
		filter = (  ((enableMipMaps)) ? ::String(HX_CSTRING("linear,miplinear")) : ::String(HX_CSTRING("linear")) );
	}
	else{
		HX_STACK_LINE(166)
		filter = (  ((enableMipMaps)) ? ::String(HX_CSTRING("nearest,mipnearest")) : ::String(HX_CSTRING("nearest")) );
	}
	HX_STACK_LINE(168)
	if (((uvReg == null()))){
		HX_STACK_LINE(169)
		uvReg = this->_sharedRegisters->uvVarying;
	}
	HX_STACK_LINE(170)
	return (((((((((((HX_CSTRING("tex ") + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(uvReg)) + HX_CSTRING(", ")) + ::Std_obj::string(inputReg)) + HX_CSTRING(" <2d,")) + filter) + HX_CSTRING(",")) + format) + wrap) + HX_CSTRING(">\n"));
}


HX_DEFINE_DYNAMIC_FUNC6(ShadingMethodBase_obj,getTex2DSampleCode,return )

Void ShadingMethodBase_obj::deactivate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("ShadingMethodBase::deactivate","away3d/materials/methods/ShadingMethodBase.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,deactivate,(void))

Void ShadingMethodBase_obj::setRenderState( ::away3d::materials::methods::MethodVO vo,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShadingMethodBase::setRenderState","away3d/materials/methods/ShadingMethodBase.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ShadingMethodBase_obj,setRenderState,(void))

Void ShadingMethodBase_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("ShadingMethodBase::activate","away3d/materials/methods/ShadingMethodBase.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,activate,(void))

::String ShadingMethodBase_obj::getVertexCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("ShadingMethodBase::getVertexCode","away3d/materials/methods/ShadingMethodBase.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(112)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,getVertexCode,return )

Void ShadingMethodBase_obj::cleanCompilationData( ){
{
		HX_STACK_PUSH("ShadingMethodBase::cleanCompilationData","away3d/materials/methods/ShadingMethodBase.hx",102);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,cleanCompilationData,(void))

Void ShadingMethodBase_obj::reset( ){
{
		HX_STACK_PUSH("ShadingMethodBase::reset","away3d/materials/methods/ShadingMethodBase.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		this->cleanCompilationData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,reset,(void))

::away3d::materials::methods::MethodVO ShadingMethodBase_obj::createMethodVO( ){
	HX_STACK_PUSH("ShadingMethodBase::createMethodVO","away3d/materials/methods/ShadingMethodBase.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return ::away3d::materials::methods::MethodVO_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,createMethodVO,return )

Void ShadingMethodBase_obj::dispose( ){
{
		HX_STACK_PUSH("ShadingMethodBase::dispose","away3d/materials/methods/ShadingMethodBase.hx",78);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,dispose,(void))

Array< ::Dynamic > ShadingMethodBase_obj::get_passes( ){
	HX_STACK_PUSH("ShadingMethodBase::get_passes","away3d/materials/methods/ShadingMethodBase.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->_passes;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,get_passes,return )

::away3d::materials::compilation::ShaderRegisterData ShadingMethodBase_obj::set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value){
	HX_STACK_PUSH("ShadingMethodBase::set_sharedRegisters","away3d/materials/methods/ShadingMethodBase.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(62)
	this->_sharedRegisters = value;
	HX_STACK_LINE(63)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,set_sharedRegisters,return )

::away3d::materials::compilation::ShaderRegisterData ShadingMethodBase_obj::get_sharedRegisters( ){
	HX_STACK_PUSH("ShadingMethodBase::get_sharedRegisters","away3d/materials/methods/ShadingMethodBase.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->_sharedRegisters;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,get_sharedRegisters,return )

Void ShadingMethodBase_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("ShadingMethodBase::initConstants","away3d/materials/methods/ShadingMethodBase.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,initConstants,(void))

Void ShadingMethodBase_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("ShadingMethodBase::initVO","away3d/materials/methods/ShadingMethodBase.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,initVO,(void))


ShadingMethodBase_obj::ShadingMethodBase_obj()
{
}

void ShadingMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadingMethodBase);
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	HX_MARK_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadingMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	HX_VISIT_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShadingMethodBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		if (HX_FIELD_EQ(inName,"passes") ) { return get_passes(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_passes") ) { return _passes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_passes") ) { return get_passes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"initConstants") ) { return initConstants_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRenderState") ) { return setRenderState_dyn(); }
		if (HX_FIELD_EQ(inName,"createMethodVO") ) { return createMethodVO_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sharedRegisters") ) { return get_sharedRegisters(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { return _sharedRegisters; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getTex2DSampleCode") ) { return getTex2DSampleCode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_sharedRegisters") ) { return set_sharedRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sharedRegisters") ) { return get_sharedRegisters_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTexCubeSampleCode") ) { return getTexCubeSampleCode_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return cleanCompilationData_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return invalidateShaderProgram_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getFormatStringForTexture") ) { return getFormatStringForTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadingMethodBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sharedRegisters") ) { return set_sharedRegisters(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { _sharedRegisters=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadingMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_passes"));
	outFields->push(HX_CSTRING("_sharedRegisters"));
	outFields->push(HX_CSTRING("passes"));
	outFields->push(HX_CSTRING("sharedRegisters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copyFrom"),
	HX_CSTRING("invalidateShaderProgram"),
	HX_CSTRING("getFormatStringForTexture"),
	HX_CSTRING("getTexCubeSampleCode"),
	HX_CSTRING("getTex2DSampleCode"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("setRenderState"),
	HX_CSTRING("activate"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("cleanCompilationData"),
	HX_CSTRING("reset"),
	HX_CSTRING("createMethodVO"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_passes"),
	HX_CSTRING("set_sharedRegisters"),
	HX_CSTRING("get_sharedRegisters"),
	HX_CSTRING("initConstants"),
	HX_CSTRING("initVO"),
	HX_CSTRING("_passes"),
	HX_CSTRING("_sharedRegisters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadingMethodBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadingMethodBase_obj::__mClass,"__mClass");
};

Class ShadingMethodBase_obj::__mClass;

void ShadingMethodBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.ShadingMethodBase"), hx::TCanCast< ShadingMethodBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShadingMethodBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
