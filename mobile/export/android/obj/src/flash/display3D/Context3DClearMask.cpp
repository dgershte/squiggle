#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_Context3DClearMask
#include <flash/display3D/Context3DClearMask.h>
#endif
namespace flash{
namespace display3D{

Void Context3DClearMask_obj::__construct()
{
	return null();
}

Context3DClearMask_obj::~Context3DClearMask_obj() { }

Dynamic Context3DClearMask_obj::__CreateEmpty() { return  new Context3DClearMask_obj; }
hx::ObjectPtr< Context3DClearMask_obj > Context3DClearMask_obj::__new()
{  hx::ObjectPtr< Context3DClearMask_obj > result = new Context3DClearMask_obj();
	result->__construct();
	return result;}

Dynamic Context3DClearMask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DClearMask_obj > result = new Context3DClearMask_obj();
	result->__construct();
	return result;}


Context3DClearMask_obj::Context3DClearMask_obj()
{
}

void Context3DClearMask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DClearMask);
	HX_MARK_END_CLASS();
}

void Context3DClearMask_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DClearMask_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DClearMask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DClearMask_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
};

Class Context3DClearMask_obj::__mClass;

void Context3DClearMask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.Context3DClearMask"), hx::TCanCast< Context3DClearMask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DClearMask_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
