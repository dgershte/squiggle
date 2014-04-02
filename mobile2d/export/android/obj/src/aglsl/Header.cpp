#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Header
#include <aglsl/Header.h>
#endif
namespace aglsl{

Void Header_obj::__construct()
{
HX_STACK_PUSH("Header::new","aglsl/Header.hx",9);
{
	HX_STACK_LINE(10)
	this->progid = (int)0;
	HX_STACK_LINE(11)
	this->version = (int)0;
	HX_STACK_LINE(12)
	this->type = HX_CSTRING("");
}
;
	return null();
}

Header_obj::~Header_obj() { }

Dynamic Header_obj::__CreateEmpty() { return  new Header_obj; }
hx::ObjectPtr< Header_obj > Header_obj::__new()
{  hx::ObjectPtr< Header_obj > result = new Header_obj();
	result->__construct();
	return result;}

Dynamic Header_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Header_obj > result = new Header_obj();
	result->__construct();
	return result;}


Header_obj::Header_obj()
{
}

void Header_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Header);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(progid,"progid");
	HX_MARK_END_CLASS();
}

void Header_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(progid,"progid");
}

Dynamic Header_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"progid") ) { return progid; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Header_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"progid") ) { progid=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Header_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("progid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("version"),
	HX_CSTRING("progid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Header_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Header_obj::__mClass,"__mClass");
};

Class Header_obj::__mClass;

void Header_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Header"), hx::TCanCast< Header_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Header_obj::__boot()
{
}

} // end namespace aglsl
