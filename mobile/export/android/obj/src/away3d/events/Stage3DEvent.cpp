#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
namespace away3d{
namespace events{

Void Stage3DEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("Stage3DEvent::new","away3d/events/Stage3DEvent.hx",15);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(15)
	super::__construct(type,bubbles,cancelable);
}
;
	return null();
}

Stage3DEvent_obj::~Stage3DEvent_obj() { }

Dynamic Stage3DEvent_obj::__CreateEmpty() { return  new Stage3DEvent_obj; }
hx::ObjectPtr< Stage3DEvent_obj > Stage3DEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Stage3DEvent_obj > result = new Stage3DEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic Stage3DEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3DEvent_obj > result = new Stage3DEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Stage3DEvent_obj::CONTEXT3D_CREATED;

::String Stage3DEvent_obj::CONTEXT3D_DISPOSED;

::String Stage3DEvent_obj::CONTEXT3D_RECREATED;

::String Stage3DEvent_obj::VIEWPORT_UPDATED;


Stage3DEvent_obj::Stage3DEvent_obj()
{
}

void Stage3DEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3DEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3DEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VIEWPORT_UPDATED") ) { return VIEWPORT_UPDATED; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATED") ) { return CONTEXT3D_CREATED; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_DISPOSED") ) { return CONTEXT3D_DISPOSED; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_RECREATED") ) { return CONTEXT3D_RECREATED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3DEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VIEWPORT_UPDATED") ) { VIEWPORT_UPDATED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATED") ) { CONTEXT3D_CREATED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_DISPOSED") ) { CONTEXT3D_DISPOSED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_RECREATED") ) { CONTEXT3D_RECREATED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3DEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CONTEXT3D_CREATED"),
	HX_CSTRING("CONTEXT3D_DISPOSED"),
	HX_CSTRING("CONTEXT3D_RECREATED"),
	HX_CSTRING("VIEWPORT_UPDATED"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_CREATED,"CONTEXT3D_CREATED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_DISPOSED,"CONTEXT3D_DISPOSED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_RECREATED,"CONTEXT3D_RECREATED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::VIEWPORT_UPDATED,"VIEWPORT_UPDATED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_CREATED,"CONTEXT3D_CREATED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_DISPOSED,"CONTEXT3D_DISPOSED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_RECREATED,"CONTEXT3D_RECREATED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::VIEWPORT_UPDATED,"VIEWPORT_UPDATED");
};

Class Stage3DEvent_obj::__mClass;

void Stage3DEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.Stage3DEvent"), hx::TCanCast< Stage3DEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage3DEvent_obj::__boot()
{
	CONTEXT3D_CREATED= HX_CSTRING("Context3DCreated");
	CONTEXT3D_DISPOSED= HX_CSTRING("Context3DDisposed");
	CONTEXT3D_RECREATED= HX_CSTRING("Context3DRecreated");
	VIEWPORT_UPDATED= HX_CSTRING("ViewportUpdated");
}

} // end namespace away3d
} // end namespace events
