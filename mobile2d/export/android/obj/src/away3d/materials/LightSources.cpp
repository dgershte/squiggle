#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_LightSources
#include <away3d/materials/LightSources.h>
#endif
namespace away3d{
namespace materials{

Void LightSources_obj::__construct()
{
	return null();
}

LightSources_obj::~LightSources_obj() { }

Dynamic LightSources_obj::__CreateEmpty() { return  new LightSources_obj; }
hx::ObjectPtr< LightSources_obj > LightSources_obj::__new()
{  hx::ObjectPtr< LightSources_obj > result = new LightSources_obj();
	result->__construct();
	return result;}

Dynamic LightSources_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightSources_obj > result = new LightSources_obj();
	result->__construct();
	return result;}

int LightSources_obj::LIGHTS;

int LightSources_obj::PROBES;

int LightSources_obj::ALL;


LightSources_obj::LightSources_obj()
{
}

void LightSources_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightSources);
	HX_MARK_END_CLASS();
}

void LightSources_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic LightSources_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { return ALL; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LIGHTS") ) { return LIGHTS; }
		if (HX_FIELD_EQ(inName,"PROBES") ) { return PROBES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightSources_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { ALL=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LIGHTS") ) { LIGHTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROBES") ) { PROBES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightSources_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LIGHTS"),
	HX_CSTRING("PROBES"),
	HX_CSTRING("ALL"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightSources_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LightSources_obj::LIGHTS,"LIGHTS");
	HX_MARK_MEMBER_NAME(LightSources_obj::PROBES,"PROBES");
	HX_MARK_MEMBER_NAME(LightSources_obj::ALL,"ALL");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightSources_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LightSources_obj::LIGHTS,"LIGHTS");
	HX_VISIT_MEMBER_NAME(LightSources_obj::PROBES,"PROBES");
	HX_VISIT_MEMBER_NAME(LightSources_obj::ALL,"ALL");
};

Class LightSources_obj::__mClass;

void LightSources_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.LightSources"), hx::TCanCast< LightSources_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightSources_obj::__boot()
{
	LIGHTS= (int)1;
	PROBES= (int)2;
	ALL= (int)3;
}

} // end namespace away3d
} // end namespace materials
