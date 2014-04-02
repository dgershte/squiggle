#include <hxcpp.h>

#ifndef INCLUDED_away3d_errors_CastError
#include <away3d/errors/CastError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
namespace away3d{
namespace errors{

Void CastError_obj::__construct(::String message)
{
HX_STACK_PUSH("CastError::new","away3d/errors/CastError.hx",5);
{
	HX_STACK_LINE(5)
	super::__construct(message,null());
}
;
	return null();
}

CastError_obj::~CastError_obj() { }

Dynamic CastError_obj::__CreateEmpty() { return  new CastError_obj; }
hx::ObjectPtr< CastError_obj > CastError_obj::__new(::String message)
{  hx::ObjectPtr< CastError_obj > result = new CastError_obj();
	result->__construct(message);
	return result;}

Dynamic CastError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CastError_obj > result = new CastError_obj();
	result->__construct(inArgs[0]);
	return result;}


CastError_obj::CastError_obj()
{
}

void CastError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CastError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CastError_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CastError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CastError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CastError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CastError_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CastError_obj::__mClass,"__mClass");
};

Class CastError_obj::__mClass;

void CastError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.errors.CastError"), hx::TCanCast< CastError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CastError_obj::__boot()
{
}

} // end namespace away3d
} // end namespace errors
