#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Context3D
#include <aglsl/Context3D.h>
#endif
#ifndef INCLUDED_aglsl_Sampler
#include <aglsl/Sampler.h>
#endif
namespace aglsl{

Void Context3D_obj::__construct()
{
HX_STACK_PUSH("Context3D::new","aglsl/Context3D.hx",15);
{
}
;
	return null();
}

Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

bool Context3D_obj::enableErrorChecking;

Dynamic Context3D_obj::resources;

::String Context3D_obj::driverInfo;

int Context3D_obj::maxvertexconstants;

int Context3D_obj::maxfragconstants;

int Context3D_obj::maxtemp;

int Context3D_obj::maxstreams;

int Context3D_obj::maxtextures;

::aglsl::Sampler Context3D_obj::defaultsampler;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"maxtemp") ) { return maxtemp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"maxstreams") ) { return maxstreams; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxtextures") ) { return maxtextures; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultsampler") ) { return defaultsampler; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxfragconstants") ) { return maxfragconstants; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxvertexconstants") ) { return maxvertexconstants; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"maxtemp") ) { maxtemp=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxstreams") ) { maxstreams=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxtextures") ) { maxtextures=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultsampler") ) { defaultsampler=inValue.Cast< ::aglsl::Sampler >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxfragconstants") ) { maxfragconstants=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxvertexconstants") ) { maxvertexconstants=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("enableErrorChecking"),
	HX_CSTRING("resources"),
	HX_CSTRING("driverInfo"),
	HX_CSTRING("maxvertexconstants"),
	HX_CSTRING("maxfragconstants"),
	HX_CSTRING("maxtemp"),
	HX_CSTRING("maxstreams"),
	HX_CSTRING("maxtextures"),
	HX_CSTRING("defaultsampler"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(Context3D_obj::resources,"resources");
	HX_MARK_MEMBER_NAME(Context3D_obj::driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxvertexconstants,"maxvertexconstants");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxfragconstants,"maxfragconstants");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxtemp,"maxtemp");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxstreams,"maxstreams");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxtextures,"maxtextures");
	HX_MARK_MEMBER_NAME(Context3D_obj::defaultsampler,"defaultsampler");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(Context3D_obj::resources,"resources");
	HX_VISIT_MEMBER_NAME(Context3D_obj::driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxvertexconstants,"maxvertexconstants");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxfragconstants,"maxfragconstants");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxtemp,"maxtemp");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxstreams,"maxstreams");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxtextures,"maxtextures");
	HX_VISIT_MEMBER_NAME(Context3D_obj::defaultsampler,"defaultsampler");
};

Class Context3D_obj::__mClass;

void Context3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Context3D"), hx::TCanCast< Context3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3D_obj::__boot()
{
	enableErrorChecking= false;
	resources= Dynamic( Array_obj<Dynamic>::__new());
	driverInfo= HX_CSTRING("Call getter function instead");
	maxvertexconstants= (int)128;
	maxfragconstants= (int)28;
	maxtemp= (int)8;
	maxstreams= (int)8;
	maxtextures= (int)8;
	defaultsampler= ::aglsl::Sampler_obj::__new();
}

} // end namespace aglsl
