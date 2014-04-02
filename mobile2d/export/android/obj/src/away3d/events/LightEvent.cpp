#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_LightEvent
#include <away3d/events/LightEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
namespace away3d{
namespace events{

Void LightEvent_obj::__construct(::String type)
{
HX_STACK_PUSH("LightEvent::new","away3d/events/LightEvent.hx",9);
{
	HX_STACK_LINE(9)
	super::__construct(type,null(),null());
}
;
	return null();
}

LightEvent_obj::~LightEvent_obj() { }

Dynamic LightEvent_obj::__CreateEmpty() { return  new LightEvent_obj; }
hx::ObjectPtr< LightEvent_obj > LightEvent_obj::__new(::String type)
{  hx::ObjectPtr< LightEvent_obj > result = new LightEvent_obj();
	result->__construct(type);
	return result;}

Dynamic LightEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightEvent_obj > result = new LightEvent_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::events::Event LightEvent_obj::clone( ){
	HX_STACK_PUSH("LightEvent::clone","away3d/events/LightEvent.hx",13);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13)
	return ::away3d::events::LightEvent_obj::__new(this->get_type());
}


::String LightEvent_obj::CASTS_SHADOW_CHANGE;


LightEvent_obj::LightEvent_obj()
{
}

void LightEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CASTS_SHADOW_CHANGE") ) { return CASTS_SHADOW_CHANGE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"CASTS_SHADOW_CHANGE") ) { CASTS_SHADOW_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CASTS_SHADOW_CHANGE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LightEvent_obj::CASTS_SHADOW_CHANGE,"CASTS_SHADOW_CHANGE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LightEvent_obj::CASTS_SHADOW_CHANGE,"CASTS_SHADOW_CHANGE");
};

Class LightEvent_obj::__mClass;

void LightEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.LightEvent"), hx::TCanCast< LightEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightEvent_obj::__boot()
{
	CASTS_SHADOW_CHANGE= HX_CSTRING("castsShadowChange");
}

} // end namespace away3d
} // end namespace events
