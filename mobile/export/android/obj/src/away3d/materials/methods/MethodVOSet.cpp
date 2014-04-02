#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#include <away3d/materials/methods/MethodVOSet.h>
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

Void MethodVOSet_obj::__construct(::away3d::materials::methods::EffectMethodBase method)
{
HX_STACK_PUSH("MethodVOSet::new","away3d/materials/methods/MethodVOSet.hx",23);
{
	HX_STACK_LINE(24)
	this->method = method;
	HX_STACK_LINE(25)
	this->data = method->createMethodVO();
}
;
	return null();
}

MethodVOSet_obj::~MethodVOSet_obj() { }

Dynamic MethodVOSet_obj::__CreateEmpty() { return  new MethodVOSet_obj; }
hx::ObjectPtr< MethodVOSet_obj > MethodVOSet_obj::__new(::away3d::materials::methods::EffectMethodBase method)
{  hx::ObjectPtr< MethodVOSet_obj > result = new MethodVOSet_obj();
	result->__construct(method);
	return result;}

Dynamic MethodVOSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodVOSet_obj > result = new MethodVOSet_obj();
	result->__construct(inArgs[0]);
	return result;}


MethodVOSet_obj::MethodVOSet_obj()
{
}

void MethodVOSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodVOSet);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void MethodVOSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic MethodVOSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodVOSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::away3d::materials::methods::EffectMethodBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodVOSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("method"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("method"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodVOSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodVOSet_obj::__mClass,"__mClass");
};

Class MethodVOSet_obj::__mClass;

void MethodVOSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.MethodVOSet"), hx::TCanCast< MethodVOSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MethodVOSet_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
