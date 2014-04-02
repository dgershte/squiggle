#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DManagerSingletonEnforcer
#include <away3d/core/managers/Stage3DManagerSingletonEnforcer.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void Stage3DManagerSingletonEnforcer_obj::__construct()
{
HX_STACK_PUSH("Stage3DManagerSingletonEnforcer::new","away3d/core/managers/Stage3DManager.hx",157);
{
}
;
	return null();
}

Stage3DManagerSingletonEnforcer_obj::~Stage3DManagerSingletonEnforcer_obj() { }

Dynamic Stage3DManagerSingletonEnforcer_obj::__CreateEmpty() { return  new Stage3DManagerSingletonEnforcer_obj; }
hx::ObjectPtr< Stage3DManagerSingletonEnforcer_obj > Stage3DManagerSingletonEnforcer_obj::__new()
{  hx::ObjectPtr< Stage3DManagerSingletonEnforcer_obj > result = new Stage3DManagerSingletonEnforcer_obj();
	result->__construct();
	return result;}

Dynamic Stage3DManagerSingletonEnforcer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3DManagerSingletonEnforcer_obj > result = new Stage3DManagerSingletonEnforcer_obj();
	result->__construct();
	return result;}


Stage3DManagerSingletonEnforcer_obj::Stage3DManagerSingletonEnforcer_obj()
{
}

void Stage3DManagerSingletonEnforcer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DManagerSingletonEnforcer);
	HX_MARK_END_CLASS();
}

void Stage3DManagerSingletonEnforcer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Stage3DManagerSingletonEnforcer_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3DManagerSingletonEnforcer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3DManagerSingletonEnforcer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DManagerSingletonEnforcer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DManagerSingletonEnforcer_obj::__mClass,"__mClass");
};

Class Stage3DManagerSingletonEnforcer_obj::__mClass;

void Stage3DManagerSingletonEnforcer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.Stage3DManagerSingletonEnforcer"), hx::TCanCast< Stage3DManagerSingletonEnforcer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage3DManagerSingletonEnforcer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
