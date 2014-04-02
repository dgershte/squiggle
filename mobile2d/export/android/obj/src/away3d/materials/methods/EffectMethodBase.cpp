#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
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

Void EffectMethodBase_obj::__construct()
{
HX_STACK_PUSH("EffectMethodBase::new","away3d/materials/methods/EffectMethodBase.hx",16);
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

EffectMethodBase_obj::~EffectMethodBase_obj() { }

Dynamic EffectMethodBase_obj::__CreateEmpty() { return  new EffectMethodBase_obj; }
hx::ObjectPtr< EffectMethodBase_obj > EffectMethodBase_obj::__new()
{  hx::ObjectPtr< EffectMethodBase_obj > result = new EffectMethodBase_obj();
	result->__construct();
	return result;}

Dynamic EffectMethodBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EffectMethodBase_obj > result = new EffectMethodBase_obj();
	result->__construct();
	return result;}

hx::Object *EffectMethodBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

::String EffectMethodBase_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("EffectMethodBase::getFragmentCode","away3d/materials/methods/EffectMethodBase.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(37)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(38)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC3(EffectMethodBase_obj,getFragmentCode,return )

::String EffectMethodBase_obj::get_assetType( ){
	HX_STACK_PUSH("EffectMethodBase::get_assetType","away3d/materials/methods/EffectMethodBase.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ::away3d::library::assets::AssetType_obj::EFFECTS_METHOD;
}


HX_DEFINE_DYNAMIC_FUNC0(EffectMethodBase_obj,get_assetType,return )


EffectMethodBase_obj::EffectMethodBase_obj()
{
}

void EffectMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EffectMethodBase);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EffectMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EffectMethodBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EffectMethodBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EffectMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("assetType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("get_assetType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EffectMethodBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EffectMethodBase_obj::__mClass,"__mClass");
};

Class EffectMethodBase_obj::__mClass;

void EffectMethodBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.EffectMethodBase"), hx::TCanCast< EffectMethodBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EffectMethodBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
