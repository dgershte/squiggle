#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_Context3DTextureFilter
#include <flash/display3D/Context3DTextureFilter.h>
#endif
namespace flash{
namespace display3D{

::flash::display3D::Context3DTextureFilter Context3DTextureFilter_obj::LINEAR;

::flash::display3D::Context3DTextureFilter Context3DTextureFilter_obj::NEAREST;

HX_DEFINE_CREATE_ENUM(Context3DTextureFilter_obj)

int Context3DTextureFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("NEAREST")) return 1;
	return super::__FindIndex(inName);
}

int Context3DTextureFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("NEAREST")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DTextureFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LINEAR")) return LINEAR;
	if (inName==HX_CSTRING("NEAREST")) return NEAREST;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DTextureFilter_obj::__mClass;

Dynamic __Create_Context3DTextureFilter_obj() { return new Context3DTextureFilter_obj; }

void Context3DTextureFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.Context3DTextureFilter"), hx::TCanCast< Context3DTextureFilter_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DTextureFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DTextureFilter_obj, sMarkStatics, sVisitStatic);
}

void Context3DTextureFilter_obj::__boot()
{
hx::Static(LINEAR) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("LINEAR"),0);
hx::Static(NEAREST) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("NEAREST"),1);
}


} // end namespace flash
} // end namespace display3D
