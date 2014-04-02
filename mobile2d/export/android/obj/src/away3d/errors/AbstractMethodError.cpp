#include <hxcpp.h>

#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
namespace away3d{
namespace errors{

Void AbstractMethodError_obj::__construct(::String message,hx::Null< int >  __o_id)
{
HX_STACK_PUSH("AbstractMethodError::new","away3d/errors/AbstractMethodError.hx",15);
int id = __o_id.Default(0);
{
	HX_STACK_LINE(16)
	if (((message == null()))){
		HX_STACK_LINE(16)
		message = HX_CSTRING("An abstract method was called! Either an instance of an abstract class was created, or an abstract method was not overridden by the subclass.");
	}
	HX_STACK_LINE(17)
	super::__construct(message,id);
}
;
	return null();
}

AbstractMethodError_obj::~AbstractMethodError_obj() { }

Dynamic AbstractMethodError_obj::__CreateEmpty() { return  new AbstractMethodError_obj; }
hx::ObjectPtr< AbstractMethodError_obj > AbstractMethodError_obj::__new(::String message,hx::Null< int >  __o_id)
{  hx::ObjectPtr< AbstractMethodError_obj > result = new AbstractMethodError_obj();
	result->__construct(message,__o_id);
	return result;}

Dynamic AbstractMethodError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractMethodError_obj > result = new AbstractMethodError_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


AbstractMethodError_obj::AbstractMethodError_obj()
{
}

void AbstractMethodError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractMethodError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AbstractMethodError_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AbstractMethodError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractMethodError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractMethodError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractMethodError_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractMethodError_obj::__mClass,"__mClass");
};

Class AbstractMethodError_obj::__mClass;

void AbstractMethodError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.errors.AbstractMethodError"), hx::TCanCast< AbstractMethodError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AbstractMethodError_obj::__boot()
{
}

} // end namespace away3d
} // end namespace errors
