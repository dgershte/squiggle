#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCacheSingletonEnforcer
#include <away3d/core/managers/AGALProgram3DCacheSingletonEnforcer.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void AGALProgram3DCacheSingletonEnforcer_obj::__construct()
{
HX_STACK_PUSH("AGALProgram3DCacheSingletonEnforcer::new","away3d/core/managers/AGALProgram3DCache.hx",126);
{
}
;
	return null();
}

AGALProgram3DCacheSingletonEnforcer_obj::~AGALProgram3DCacheSingletonEnforcer_obj() { }

Dynamic AGALProgram3DCacheSingletonEnforcer_obj::__CreateEmpty() { return  new AGALProgram3DCacheSingletonEnforcer_obj; }
hx::ObjectPtr< AGALProgram3DCacheSingletonEnforcer_obj > AGALProgram3DCacheSingletonEnforcer_obj::__new()
{  hx::ObjectPtr< AGALProgram3DCacheSingletonEnforcer_obj > result = new AGALProgram3DCacheSingletonEnforcer_obj();
	result->__construct();
	return result;}

Dynamic AGALProgram3DCacheSingletonEnforcer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALProgram3DCacheSingletonEnforcer_obj > result = new AGALProgram3DCacheSingletonEnforcer_obj();
	result->__construct();
	return result;}


AGALProgram3DCacheSingletonEnforcer_obj::AGALProgram3DCacheSingletonEnforcer_obj()
{
}

void AGALProgram3DCacheSingletonEnforcer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALProgram3DCacheSingletonEnforcer);
	HX_MARK_END_CLASS();
}

void AGALProgram3DCacheSingletonEnforcer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AGALProgram3DCacheSingletonEnforcer_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AGALProgram3DCacheSingletonEnforcer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AGALProgram3DCacheSingletonEnforcer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALProgram3DCacheSingletonEnforcer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALProgram3DCacheSingletonEnforcer_obj::__mClass,"__mClass");
};

Class AGALProgram3DCacheSingletonEnforcer_obj::__mClass;

void AGALProgram3DCacheSingletonEnforcer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.AGALProgram3DCacheSingletonEnforcer"), hx::TCanCast< AGALProgram3DCacheSingletonEnforcer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGALProgram3DCacheSingletonEnforcer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
