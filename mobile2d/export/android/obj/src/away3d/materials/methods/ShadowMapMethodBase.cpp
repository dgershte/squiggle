#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
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
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
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
namespace away3d{
namespace materials{
namespace methods{

Void ShadowMapMethodBase_obj::__construct(::away3d::lights::LightBase castingLight)
{
HX_STACK_PUSH("ShadowMapMethodBase::new","away3d/materials/methods/ShadowMapMethodBase.hx",29);
{
	HX_STACK_LINE(30)
	this->_epsilon = .02;
	HX_STACK_LINE(31)
	this->_alpha = (int)1;
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	this->_castingLight = castingLight;
	HX_STACK_LINE(34)
	castingLight->set_castsShadows(true);
	HX_STACK_LINE(35)
	this->_shadowMapper = castingLight->get_shadowMapper();
}
;
	return null();
}

ShadowMapMethodBase_obj::~ShadowMapMethodBase_obj() { }

Dynamic ShadowMapMethodBase_obj::__CreateEmpty() { return  new ShadowMapMethodBase_obj; }
hx::ObjectPtr< ShadowMapMethodBase_obj > ShadowMapMethodBase_obj::__new(::away3d::lights::LightBase castingLight)
{  hx::ObjectPtr< ShadowMapMethodBase_obj > result = new ShadowMapMethodBase_obj();
	result->__construct(castingLight);
	return result;}

Dynamic ShadowMapMethodBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadowMapMethodBase_obj > result = new ShadowMapMethodBase_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ShadowMapMethodBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

::String ShadowMapMethodBase_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("ShadowMapMethodBase::getFragmentCode","away3d/materials/methods/ShadowMapMethodBase.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(86)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(87)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapMethodBase_obj,getFragmentCode,return )

Float ShadowMapMethodBase_obj::set_epsilon( Float value){
	HX_STACK_PUSH("ShadowMapMethodBase::set_epsilon","away3d/materials/methods/ShadowMapMethodBase.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(77)
	this->_epsilon = value;
	HX_STACK_LINE(78)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapMethodBase_obj,set_epsilon,return )

Float ShadowMapMethodBase_obj::get_epsilon( ){
	HX_STACK_PUSH("ShadowMapMethodBase::get_epsilon","away3d/materials/methods/ShadowMapMethodBase.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->_epsilon;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_epsilon,return )

::away3d::lights::LightBase ShadowMapMethodBase_obj::get_castingLight( ){
	HX_STACK_PUSH("ShadowMapMethodBase::get_castingLight","away3d/materials/methods/ShadowMapMethodBase.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return this->_castingLight;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_castingLight,return )

Float ShadowMapMethodBase_obj::set_alpha( Float value){
	HX_STACK_PUSH("ShadowMapMethodBase::set_alpha","away3d/materials/methods/ShadowMapMethodBase.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(55)
	this->_alpha = value;
	HX_STACK_LINE(56)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapMethodBase_obj,set_alpha,return )

Float ShadowMapMethodBase_obj::get_alpha( ){
	HX_STACK_PUSH("ShadowMapMethodBase::get_alpha","away3d/materials/methods/ShadowMapMethodBase.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_alpha,return )

::String ShadowMapMethodBase_obj::get_assetType( ){
	HX_STACK_PUSH("ShadowMapMethodBase::get_assetType","away3d/materials/methods/ShadowMapMethodBase.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return ::away3d::library::assets::AssetType_obj::SHADOW_MAP_METHOD;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_assetType,return )


ShadowMapMethodBase_obj::ShadowMapMethodBase_obj()
{
}

void ShadowMapMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowMapMethodBase);
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_epsilon,"_epsilon");
	HX_MARK_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_MARK_MEMBER_NAME(_castingLight,"_castingLight");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadowMapMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_epsilon,"_epsilon");
	HX_VISIT_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_VISIT_MEMBER_NAME(_castingLight,"_castingLight");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShadowMapMethodBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { return get_epsilon(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_epsilon") ) { return _epsilon; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_epsilon") ) { return set_epsilon_dyn(); }
		if (HX_FIELD_EQ(inName,"get_epsilon") ) { return get_epsilon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castingLight") ) { return get_castingLight(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { return _shadowMapper; }
		if (HX_FIELD_EQ(inName,"_castingLight") ) { return _castingLight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castingLight") ) { return get_castingLight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadowMapMethodBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { return set_epsilon(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_epsilon") ) { _epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { _shadowMapper=inValue.Cast< ::away3d::lights::shadowmaps::ShadowMapperBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_castingLight") ) { _castingLight=inValue.Cast< ::away3d::lights::LightBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowMapMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_epsilon"));
	outFields->push(HX_CSTRING("_shadowMapper"));
	outFields->push(HX_CSTRING("_castingLight"));
	outFields->push(HX_CSTRING("epsilon"));
	outFields->push(HX_CSTRING("castingLight"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("assetType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("set_epsilon"),
	HX_CSTRING("get_epsilon"),
	HX_CSTRING("get_castingLight"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_epsilon"),
	HX_CSTRING("_shadowMapper"),
	HX_CSTRING("_castingLight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadowMapMethodBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadowMapMethodBase_obj::__mClass,"__mClass");
};

Class ShadowMapMethodBase_obj::__mClass;

void ShadowMapMethodBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.ShadowMapMethodBase"), hx::TCanCast< ShadowMapMethodBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShadowMapMethodBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
