#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_TouchPoint
#include <away3d/core/managers/TouchPoint.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void TouchPoint_obj::__construct()
{
HX_STACK_PUSH("TouchPoint::new","away3d/core/managers/Touch3DManager.hx",262);
{
}
;
	return null();
}

TouchPoint_obj::~TouchPoint_obj() { }

Dynamic TouchPoint_obj::__CreateEmpty() { return  new TouchPoint_obj; }
hx::ObjectPtr< TouchPoint_obj > TouchPoint_obj::__new()
{  hx::ObjectPtr< TouchPoint_obj > result = new TouchPoint_obj();
	result->__construct();
	return result;}

Dynamic TouchPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchPoint_obj > result = new TouchPoint_obj();
	result->__construct();
	return result;}


TouchPoint_obj::TouchPoint_obj()
{
}

void TouchPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchPoint);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void TouchPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic TouchPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchPoint_obj::__mClass,"__mClass");
};

Class TouchPoint_obj::__mClass;

void TouchPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.TouchPoint"), hx::TCanCast< TouchPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TouchPoint_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
