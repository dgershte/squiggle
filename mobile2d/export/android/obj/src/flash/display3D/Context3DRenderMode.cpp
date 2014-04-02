#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_Context3DRenderMode
#include <flash/display3D/Context3DRenderMode.h>
#endif
namespace flash{
namespace display3D{

::flash::display3D::Context3DRenderMode Context3DRenderMode_obj::AUTO;

::flash::display3D::Context3DRenderMode Context3DRenderMode_obj::SOFTWARE;

HX_DEFINE_CREATE_ENUM(Context3DRenderMode_obj)

int Context3DRenderMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AUTO")) return 0;
	if (inName==HX_CSTRING("SOFTWARE")) return 1;
	return super::__FindIndex(inName);
}

int Context3DRenderMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AUTO")) return 0;
	if (inName==HX_CSTRING("SOFTWARE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DRenderMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AUTO")) return AUTO;
	if (inName==HX_CSTRING("SOFTWARE")) return SOFTWARE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("AUTO"),
	HX_CSTRING("SOFTWARE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DRenderMode_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(Context3DRenderMode_obj::SOFTWARE,"SOFTWARE");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_obj::SOFTWARE,"SOFTWARE");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DRenderMode_obj::__mClass;

Dynamic __Create_Context3DRenderMode_obj() { return new Context3DRenderMode_obj; }

void Context3DRenderMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.Context3DRenderMode"), hx::TCanCast< Context3DRenderMode_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DRenderMode_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DRenderMode_obj, sMarkStatics, sVisitStatic);
}

void Context3DRenderMode_obj::__boot()
{
hx::Static(AUTO) = hx::CreateEnum< Context3DRenderMode_obj >(HX_CSTRING("AUTO"),0);
hx::Static(SOFTWARE) = hx::CreateEnum< Context3DRenderMode_obj >(HX_CSTRING("SOFTWARE"),1);
}


} // end namespace flash
} // end namespace display3D
