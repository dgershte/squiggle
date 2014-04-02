#include <hxcpp.h>

#ifndef INCLUDED_away3d_primitives_LineSegment
#include <away3d/primitives/LineSegment.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace primitives{

Void LineSegment_obj::__construct(::flash::geom::Vector3D v0,::flash::geom::Vector3D v1,hx::Null< int >  __o_color0,hx::Null< int >  __o_color1,hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("LineSegment::new","away3d/primitives/LineSegment.hx",21);
int color0 = __o_color0.Default(3355443);
int color1 = __o_color1.Default(3355443);
Float thickness = __o_thickness.Default(1);
{
	HX_STACK_LINE(22)
	this->TYPE = HX_CSTRING("line");
	HX_STACK_LINE(23)
	super::__construct(v0,v1,null(),color0,color1,thickness);
}
;
	return null();
}

LineSegment_obj::~LineSegment_obj() { }

Dynamic LineSegment_obj::__CreateEmpty() { return  new LineSegment_obj; }
hx::ObjectPtr< LineSegment_obj > LineSegment_obj::__new(::flash::geom::Vector3D v0,::flash::geom::Vector3D v1,hx::Null< int >  __o_color0,hx::Null< int >  __o_color1,hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< LineSegment_obj > result = new LineSegment_obj();
	result->__construct(v0,v1,__o_color0,__o_color1,__o_thickness);
	return result;}

Dynamic LineSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineSegment_obj > result = new LineSegment_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


LineSegment_obj::LineSegment_obj()
{
}

void LineSegment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineSegment);
	HX_MARK_MEMBER_NAME(TYPE,"TYPE");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineSegment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(TYPE,"TYPE");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LineSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TYPE") ) { return TYPE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TYPE") ) { TYPE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("TYPE"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("TYPE"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineSegment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineSegment_obj::__mClass,"__mClass");
};

Class LineSegment_obj::__mClass;

void LineSegment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.LineSegment"), hx::TCanCast< LineSegment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LineSegment_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
