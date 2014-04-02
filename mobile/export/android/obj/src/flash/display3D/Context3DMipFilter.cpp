#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_Context3DMipFilter
#include <flash/display3D/Context3DMipFilter.h>
#endif
namespace flash{
namespace display3D{

::flash::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPLINEAR;

::flash::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNEAREST;

::flash::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNONE;

HX_DEFINE_CREATE_ENUM(Context3DMipFilter_obj)

int Context3DMipFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("MIPLINEAR")) return 0;
	if (inName==HX_CSTRING("MIPNEAREST")) return 1;
	if (inName==HX_CSTRING("MIPNONE")) return 2;
	return super::__FindIndex(inName);
}

int Context3DMipFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("MIPLINEAR")) return 0;
	if (inName==HX_CSTRING("MIPNEAREST")) return 0;
	if (inName==HX_CSTRING("MIPNONE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DMipFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("MIPLINEAR")) return MIPLINEAR;
	if (inName==HX_CSTRING("MIPNEAREST")) return MIPNEAREST;
	if (inName==HX_CSTRING("MIPNONE")) return MIPNONE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("MIPLINEAR"),
	HX_CSTRING("MIPNEAREST"),
	HX_CSTRING("MIPNONE"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DMipFilter_obj::__mClass;

Dynamic __Create_Context3DMipFilter_obj() { return new Context3DMipFilter_obj; }

void Context3DMipFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.Context3DMipFilter"), hx::TCanCast< Context3DMipFilter_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DMipFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DMipFilter_obj, sMarkStatics, sVisitStatic);
}

void Context3DMipFilter_obj::__boot()
{
hx::Static(MIPLINEAR) = hx::CreateEnum< Context3DMipFilter_obj >(HX_CSTRING("MIPLINEAR"),0);
hx::Static(MIPNEAREST) = hx::CreateEnum< Context3DMipFilter_obj >(HX_CSTRING("MIPNEAREST"),1);
hx::Static(MIPNONE) = hx::CreateEnum< Context3DMipFilter_obj >(HX_CSTRING("MIPNONE"),2);
}


} // end namespace flash
} // end namespace display3D
