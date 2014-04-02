#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_PlaneClassification
#include <away3d/core/math/PlaneClassification.h>
#endif
namespace away3d{
namespace core{
namespace math{

Void PlaneClassification_obj::__construct()
{
	return null();
}

PlaneClassification_obj::~PlaneClassification_obj() { }

Dynamic PlaneClassification_obj::__CreateEmpty() { return  new PlaneClassification_obj; }
hx::ObjectPtr< PlaneClassification_obj > PlaneClassification_obj::__new()
{  hx::ObjectPtr< PlaneClassification_obj > result = new PlaneClassification_obj();
	result->__construct();
	return result;}

Dynamic PlaneClassification_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlaneClassification_obj > result = new PlaneClassification_obj();
	result->__construct();
	return result;}

int PlaneClassification_obj::BACK;

int PlaneClassification_obj::FRONT;

int PlaneClassification_obj::IN;

int PlaneClassification_obj::OUT;

int PlaneClassification_obj::INTERSECT;


PlaneClassification_obj::PlaneClassification_obj()
{
}

void PlaneClassification_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlaneClassification);
	HX_MARK_END_CLASS();
}

void PlaneClassification_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic PlaneClassification_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IN") ) { return IN; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"OUT") ) { return OUT; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"INTERSECT") ) { return INTERSECT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlaneClassification_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IN") ) { IN=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"OUT") ) { OUT=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"INTERSECT") ) { INTERSECT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlaneClassification_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("IN"),
	HX_CSTRING("OUT"),
	HX_CSTRING("INTERSECT"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::IN,"IN");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::OUT,"OUT");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::INTERSECT,"INTERSECT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::IN,"IN");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::OUT,"OUT");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::INTERSECT,"INTERSECT");
};

Class PlaneClassification_obj::__mClass;

void PlaneClassification_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.math.PlaneClassification"), hx::TCanCast< PlaneClassification_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlaneClassification_obj::__boot()
{
	BACK= (int)0;
	FRONT= (int)1;
	IN= (int)0;
	OUT= (int)1;
	INTERSECT= (int)2;
}

} // end namespace away3d
} // end namespace core
} // end namespace math
