#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_Context3DMipFilter
#include <flash/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFilter
#include <flash/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DWrapMode
#include <flash/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_flash_display3D_SamplerState
#include <flash/display3D/SamplerState.h>
#endif
namespace flash{
namespace display3D{

Void SamplerState_obj::__construct()
{
HX_STACK_PUSH("SamplerState::new","flash/display3D/SamplerState.hx",8);
{
}
;
	return null();
}

SamplerState_obj::~SamplerState_obj() { }

Dynamic SamplerState_obj::__CreateEmpty() { return  new SamplerState_obj; }
hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new()
{  hx::ObjectPtr< SamplerState_obj > result = new SamplerState_obj();
	result->__construct();
	return result;}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerState_obj > result = new SamplerState_obj();
	result->__construct();
	return result;}


SamplerState_obj::SamplerState_obj()
{
}

void SamplerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerState);
	HX_MARK_MEMBER_NAME(mipfilter,"mipfilter");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_END_CLASS();
}

void SamplerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mipfilter,"mipfilter");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
}

Dynamic SamplerState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { return mipfilter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SamplerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< ::flash::display3D::Context3DWrapMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::flash::display3D::Context3DTextureFilter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { mipfilter=inValue.Cast< ::flash::display3D::Context3DMipFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mipfilter"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("wrap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mipfilter"),
	HX_CSTRING("filter"),
	HX_CSTRING("wrap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.SamplerState"), hx::TCanCast< SamplerState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SamplerState_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
