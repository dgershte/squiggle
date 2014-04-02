#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_MathConsts
#include <away3d/core/math/MathConsts.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace math{

Void MathConsts_obj::__construct()
{
	return null();
}

MathConsts_obj::~MathConsts_obj() { }

Dynamic MathConsts_obj::__CreateEmpty() { return  new MathConsts_obj; }
hx::ObjectPtr< MathConsts_obj > MathConsts_obj::__new()
{  hx::ObjectPtr< MathConsts_obj > result = new MathConsts_obj();
	result->__construct();
	return result;}

Dynamic MathConsts_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathConsts_obj > result = new MathConsts_obj();
	result->__construct();
	return result;}

Float MathConsts_obj::RADIANS_TO_DEGREES;

Float MathConsts_obj::DEGREES_TO_RADIANS;


MathConsts_obj::MathConsts_obj()
{
}

void MathConsts_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MathConsts);
	HX_MARK_END_CLASS();
}

void MathConsts_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MathConsts_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RADIANS_TO_DEGREES") ) { return RADIANS_TO_DEGREES; }
		if (HX_FIELD_EQ(inName,"DEGREES_TO_RADIANS") ) { return DEGREES_TO_RADIANS; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MathConsts_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RADIANS_TO_DEGREES") ) { RADIANS_TO_DEGREES=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEGREES_TO_RADIANS") ) { DEGREES_TO_RADIANS=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MathConsts_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RADIANS_TO_DEGREES"),
	HX_CSTRING("DEGREES_TO_RADIANS"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathConsts_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MathConsts_obj::RADIANS_TO_DEGREES,"RADIANS_TO_DEGREES");
	HX_MARK_MEMBER_NAME(MathConsts_obj::DEGREES_TO_RADIANS,"DEGREES_TO_RADIANS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathConsts_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MathConsts_obj::RADIANS_TO_DEGREES,"RADIANS_TO_DEGREES");
	HX_VISIT_MEMBER_NAME(MathConsts_obj::DEGREES_TO_RADIANS,"DEGREES_TO_RADIANS");
};

Class MathConsts_obj::__mClass;

void MathConsts_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.math.MathConsts"), hx::TCanCast< MathConsts_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MathConsts_obj::__boot()
{
	RADIANS_TO_DEGREES= (Float((int)180) / Float(::Math_obj::PI));
	DEGREES_TO_RADIANS= (Float(::Math_obj::PI) / Float((int)180));
}

} // end namespace away3d
} // end namespace core
} // end namespace math
