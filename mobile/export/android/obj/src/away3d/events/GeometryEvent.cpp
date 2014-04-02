#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
namespace away3d{
namespace events{

Void GeometryEvent_obj::__construct(::String type,::away3d::core::base::ISubGeometry subGeometry)
{
HX_STACK_PUSH("GeometryEvent::new","away3d/events/GeometryEvent.hx",30);
{
	HX_STACK_LINE(31)
	super::__construct(type,false,false);
	HX_STACK_LINE(32)
	this->_subGeometry = subGeometry;
}
;
	return null();
}

GeometryEvent_obj::~GeometryEvent_obj() { }

Dynamic GeometryEvent_obj::__CreateEmpty() { return  new GeometryEvent_obj; }
hx::ObjectPtr< GeometryEvent_obj > GeometryEvent_obj::__new(::String type,::away3d::core::base::ISubGeometry subGeometry)
{  hx::ObjectPtr< GeometryEvent_obj > result = new GeometryEvent_obj();
	result->__construct(type,subGeometry);
	return result;}

Dynamic GeometryEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryEvent_obj > result = new GeometryEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::events::Event GeometryEvent_obj::clone( ){
	HX_STACK_PUSH("GeometryEvent::clone","away3d/events/GeometryEvent.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return ::away3d::events::GeometryEvent_obj::__new(this->get_type(),this->_subGeometry);
}


::away3d::core::base::ISubGeometry GeometryEvent_obj::get_subGeometry( ){
	HX_STACK_PUSH("GeometryEvent::get_subGeometry","away3d/events/GeometryEvent.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->_subGeometry;
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryEvent_obj,get_subGeometry,return )

::String GeometryEvent_obj::SUB_GEOMETRY_ADDED;

::String GeometryEvent_obj::SUB_GEOMETRY_REMOVED;

::String GeometryEvent_obj::BOUNDS_INVALID;


GeometryEvent_obj::GeometryEvent_obj()
{
}

void GeometryEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryEvent);
	HX_MARK_MEMBER_NAME(_subGeometry,"_subGeometry");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GeometryEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subGeometry,"_subGeometry");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GeometryEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subGeometry") ) { return get_subGeometry(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { return _subGeometry; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BOUNDS_INVALID") ) { return BOUNDS_INVALID; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_subGeometry") ) { return get_subGeometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SUB_GEOMETRY_ADDED") ) { return SUB_GEOMETRY_ADDED; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SUB_GEOMETRY_REMOVED") ) { return SUB_GEOMETRY_REMOVED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { _subGeometry=inValue.Cast< ::away3d::core::base::ISubGeometry >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BOUNDS_INVALID") ) { BOUNDS_INVALID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SUB_GEOMETRY_ADDED") ) { SUB_GEOMETRY_ADDED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SUB_GEOMETRY_REMOVED") ) { SUB_GEOMETRY_REMOVED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_subGeometry"));
	outFields->push(HX_CSTRING("subGeometry"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SUB_GEOMETRY_ADDED"),
	HX_CSTRING("SUB_GEOMETRY_REMOVED"),
	HX_CSTRING("BOUNDS_INVALID"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_subGeometry"),
	HX_CSTRING("_subGeometry"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_ADDED,"SUB_GEOMETRY_ADDED");
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_REMOVED,"SUB_GEOMETRY_REMOVED");
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::BOUNDS_INVALID,"BOUNDS_INVALID");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_ADDED,"SUB_GEOMETRY_ADDED");
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_REMOVED,"SUB_GEOMETRY_REMOVED");
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::BOUNDS_INVALID,"BOUNDS_INVALID");
};

Class GeometryEvent_obj::__mClass;

void GeometryEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.GeometryEvent"), hx::TCanCast< GeometryEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GeometryEvent_obj::__boot()
{
	SUB_GEOMETRY_ADDED= HX_CSTRING("SubGeometryAdded");
	SUB_GEOMETRY_REMOVED= HX_CSTRING("SubGeometryRemoved");
	BOUNDS_INVALID= HX_CSTRING("BoundsInvalid");
}

} // end namespace away3d
} // end namespace events
