#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Description
#include <aglsl/Description.h>
#endif
#ifndef INCLUDED_aglsl_Header
#include <aglsl/Header.h>
#endif
namespace aglsl{

Void Description_obj::__construct()
{
HX_STACK_PUSH("Description::new","aglsl/Description.hx",15);
{
	HX_STACK_LINE(16)
	this->regread = Dynamic( Array_obj<Dynamic>::__new().Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())));
	HX_STACK_LINE(17)
	this->regwrite = Dynamic( Array_obj<Dynamic>::__new().Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())).Add(Dynamic( Array_obj<Dynamic>::__new())));
	HX_STACK_LINE(18)
	this->hasindirect = false;
	HX_STACK_LINE(19)
	this->writedepth = false;
	HX_STACK_LINE(20)
	this->hasmatrix = false;
	HX_STACK_LINE(21)
	this->samplers = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(24)
	this->tokens = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(25)
	this->header = ::aglsl::Header_obj::__new();
}
;
	return null();
}

Description_obj::~Description_obj() { }

Dynamic Description_obj::__CreateEmpty() { return  new Description_obj; }
hx::ObjectPtr< Description_obj > Description_obj::__new()
{  hx::ObjectPtr< Description_obj > result = new Description_obj();
	result->__construct();
	return result;}

Dynamic Description_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Description_obj > result = new Description_obj();
	result->__construct();
	return result;}


Description_obj::Description_obj()
{
}

void Description_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Description);
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_MEMBER_NAME(samplers,"samplers");
	HX_MARK_MEMBER_NAME(hasmatrix,"hasmatrix");
	HX_MARK_MEMBER_NAME(writedepth,"writedepth");
	HX_MARK_MEMBER_NAME(hasindirect,"hasindirect");
	HX_MARK_MEMBER_NAME(regwrite,"regwrite");
	HX_MARK_MEMBER_NAME(regread,"regread");
	HX_MARK_END_CLASS();
}

void Description_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
	HX_VISIT_MEMBER_NAME(samplers,"samplers");
	HX_VISIT_MEMBER_NAME(hasmatrix,"hasmatrix");
	HX_VISIT_MEMBER_NAME(writedepth,"writedepth");
	HX_VISIT_MEMBER_NAME(hasindirect,"hasindirect");
	HX_VISIT_MEMBER_NAME(regwrite,"regwrite");
	HX_VISIT_MEMBER_NAME(regread,"regread");
}

Dynamic Description_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		if (HX_FIELD_EQ(inName,"tokens") ) { return tokens; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regread") ) { return regread; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"samplers") ) { return samplers; }
		if (HX_FIELD_EQ(inName,"regwrite") ) { return regwrite; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasmatrix") ) { return hasmatrix; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writedepth") ) { return writedepth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasindirect") ) { return hasindirect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Description_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::aglsl::Header >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regread") ) { regread=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"samplers") ) { samplers=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regwrite") ) { regwrite=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasmatrix") ) { hasmatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writedepth") ) { writedepth=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasindirect") ) { hasindirect=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Description_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("tokens"));
	outFields->push(HX_CSTRING("samplers"));
	outFields->push(HX_CSTRING("hasmatrix"));
	outFields->push(HX_CSTRING("writedepth"));
	outFields->push(HX_CSTRING("hasindirect"));
	outFields->push(HX_CSTRING("regwrite"));
	outFields->push(HX_CSTRING("regread"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("header"),
	HX_CSTRING("tokens"),
	HX_CSTRING("samplers"),
	HX_CSTRING("hasmatrix"),
	HX_CSTRING("writedepth"),
	HX_CSTRING("hasindirect"),
	HX_CSTRING("regwrite"),
	HX_CSTRING("regread"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Description_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Description_obj::__mClass,"__mClass");
};

Class Description_obj::__mClass;

void Description_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Description"), hx::TCanCast< Description_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Description_obj::__boot()
{
}

} // end namespace aglsl
