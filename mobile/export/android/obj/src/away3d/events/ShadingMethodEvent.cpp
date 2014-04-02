#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
namespace away3d{
namespace events{

Void ShadingMethodEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("ShadingMethodEvent::new","away3d/events/ShadingMethodEvent.hx",9);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(9)
	super::__construct(type,bubbles,cancelable);
}
;
	return null();
}

ShadingMethodEvent_obj::~ShadingMethodEvent_obj() { }

Dynamic ShadingMethodEvent_obj::__CreateEmpty() { return  new ShadingMethodEvent_obj; }
hx::ObjectPtr< ShadingMethodEvent_obj > ShadingMethodEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< ShadingMethodEvent_obj > result = new ShadingMethodEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic ShadingMethodEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadingMethodEvent_obj > result = new ShadingMethodEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String ShadingMethodEvent_obj::SHADER_INVALIDATED;


ShadingMethodEvent_obj::ShadingMethodEvent_obj()
{
}

void ShadingMethodEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadingMethodEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadingMethodEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShadingMethodEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"SHADER_INVALIDATED") ) { return SHADER_INVALIDATED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadingMethodEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"SHADER_INVALIDATED") ) { SHADER_INVALIDATED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadingMethodEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SHADER_INVALIDATED"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadingMethodEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShadingMethodEvent_obj::SHADER_INVALIDATED,"SHADER_INVALIDATED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadingMethodEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShadingMethodEvent_obj::SHADER_INVALIDATED,"SHADER_INVALIDATED");
};

Class ShadingMethodEvent_obj::__mClass;

void ShadingMethodEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.ShadingMethodEvent"), hx::TCanCast< ShadingMethodEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShadingMethodEvent_obj::__boot()
{
	SHADER_INVALIDATED= HX_CSTRING("ShaderInvalidated");
}

} // end namespace away3d
} // end namespace events
