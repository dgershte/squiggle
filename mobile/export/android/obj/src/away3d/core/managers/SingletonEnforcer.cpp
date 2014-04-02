#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_SingletonEnforcer
#include <away3d/core/managers/SingletonEnforcer.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void SingletonEnforcer_obj::__construct()
{
HX_STACK_PUSH("SingletonEnforcer::new","away3d/core/managers/RTTBufferManager.hx",196);
{
}
;
	return null();
}

SingletonEnforcer_obj::~SingletonEnforcer_obj() { }

Dynamic SingletonEnforcer_obj::__CreateEmpty() { return  new SingletonEnforcer_obj; }
hx::ObjectPtr< SingletonEnforcer_obj > SingletonEnforcer_obj::__new()
{  hx::ObjectPtr< SingletonEnforcer_obj > result = new SingletonEnforcer_obj();
	result->__construct();
	return result;}

Dynamic SingletonEnforcer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SingletonEnforcer_obj > result = new SingletonEnforcer_obj();
	result->__construct();
	return result;}


SingletonEnforcer_obj::SingletonEnforcer_obj()
{
}

void SingletonEnforcer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SingletonEnforcer);
	HX_MARK_END_CLASS();
}

void SingletonEnforcer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SingletonEnforcer_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SingletonEnforcer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SingletonEnforcer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SingletonEnforcer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SingletonEnforcer_obj::__mClass,"__mClass");
};

Class SingletonEnforcer_obj::__mClass;

void SingletonEnforcer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.SingletonEnforcer"), hx::TCanCast< SingletonEnforcer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SingletonEnforcer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
