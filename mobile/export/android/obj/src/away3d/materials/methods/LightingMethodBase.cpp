#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
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

Void LightingMethodBase_obj::__construct()
{
HX_STACK_PUSH("LightingMethodBase::new","away3d/materials/methods/LightingMethodBase.hx",21);
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

LightingMethodBase_obj::~LightingMethodBase_obj() { }

Dynamic LightingMethodBase_obj::__CreateEmpty() { return  new LightingMethodBase_obj; }
hx::ObjectPtr< LightingMethodBase_obj > LightingMethodBase_obj::__new()
{  hx::ObjectPtr< LightingMethodBase_obj > result = new LightingMethodBase_obj();
	result->__construct();
	return result;}

Dynamic LightingMethodBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightingMethodBase_obj > result = new LightingMethodBase_obj();
	result->__construct();
	return result;}

::String LightingMethodBase_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("LightingMethodBase::getFragmentPostLightingCode","away3d/materials/methods/LightingMethodBase.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(71)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC3(LightingMethodBase_obj,getFragmentPostLightingCode,return )

::String LightingMethodBase_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("LightingMethodBase::getFragmentCodePerProbe","away3d/materials/methods/LightingMethodBase.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(cubeMapReg,"cubeMapReg");
	HX_STACK_ARG(weightRegister,"weightRegister");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(58)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC4(LightingMethodBase_obj,getFragmentCodePerProbe,return )

::String LightingMethodBase_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("LightingMethodBase::getFragmentCodePerLight","away3d/materials/methods/LightingMethodBase.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(lightDirReg,"lightDirReg");
	HX_STACK_ARG(lightColReg,"lightColReg");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(45)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC4(LightingMethodBase_obj,getFragmentCodePerLight,return )

::String LightingMethodBase_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("LightingMethodBase::getFragmentPreLightingCode","away3d/materials/methods/LightingMethodBase.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(32)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC2(LightingMethodBase_obj,getFragmentPreLightingCode,return )


LightingMethodBase_obj::LightingMethodBase_obj()
{
}

void LightingMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightingMethodBase);
	HX_MARK_MEMBER_NAME(_modulateMethod,"_modulateMethod");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightingMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_modulateMethod,"_modulateMethod");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightingMethodBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_modulateMethod") ) { return _modulateMethod; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return getFragmentCodePerProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return getFragmentCodePerLight_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return getFragmentPreLightingCode_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return getFragmentPostLightingCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightingMethodBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_modulateMethod") ) { _modulateMethod=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightingMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_modulateMethod"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFragmentPostLightingCode"),
	HX_CSTRING("getFragmentCodePerProbe"),
	HX_CSTRING("getFragmentCodePerLight"),
	HX_CSTRING("getFragmentPreLightingCode"),
	HX_CSTRING("_modulateMethod"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightingMethodBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightingMethodBase_obj::__mClass,"__mClass");
};

Class LightingMethodBase_obj::__mClass;

void LightingMethodBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.LightingMethodBase"), hx::TCanCast< LightingMethodBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightingMethodBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
