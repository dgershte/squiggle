#include <hxcpp.h>

#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
namespace away3d{
namespace entities{

Void SegRef_obj::__construct()
{
HX_STACK_PUSH("SegRef::new","away3d/entities/SegmentSet.hx",576);
{
}
;
	return null();
}

SegRef_obj::~SegRef_obj() { }

Dynamic SegRef_obj::__CreateEmpty() { return  new SegRef_obj; }
hx::ObjectPtr< SegRef_obj > SegRef_obj::__new()
{  hx::ObjectPtr< SegRef_obj > result = new SegRef_obj();
	result->__construct();
	return result;}

Dynamic SegRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SegRef_obj > result = new SegRef_obj();
	result->__construct();
	return result;}


SegRef_obj::SegRef_obj()
{
}

void SegRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegRef);
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_MEMBER_NAME(subSetIndex,"subSetIndex");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void SegRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(segment,"segment");
	HX_VISIT_MEMBER_NAME(subSetIndex,"subSetIndex");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic SegRef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { return segment; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { return subSetIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SegRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< ::away3d::primitives::data::Segment >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { subSetIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("segment"));
	outFields->push(HX_CSTRING("subSetIndex"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("segment"),
	HX_CSTRING("subSetIndex"),
	HX_CSTRING("index"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegRef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegRef_obj::__mClass,"__mClass");
};

Class SegRef_obj::__mClass;

void SegRef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.entities.SegRef"), hx::TCanCast< SegRef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SegRef_obj::__boot()
{
}

} // end namespace away3d
} // end namespace entities
