#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace events{

Void LensEvent_obj::__construct(::String type,::away3d::cameras::lenses::LensBase lens,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("LensEvent::new","away3d/events/LensEvent.hx",15);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(16)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(17)
	this->_lens = lens;
}
;
	return null();
}

LensEvent_obj::~LensEvent_obj() { }

Dynamic LensEvent_obj::__CreateEmpty() { return  new LensEvent_obj; }
hx::ObjectPtr< LensEvent_obj > LensEvent_obj::__new(::String type,::away3d::cameras::lenses::LensBase lens,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< LensEvent_obj > result = new LensEvent_obj();
	result->__construct(type,lens,__o_bubbles,__o_cancelable);
	return result;}

Dynamic LensEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LensEvent_obj > result = new LensEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flash::events::Event LensEvent_obj::clone( ){
	HX_STACK_PUSH("LensEvent::clone","away3d/events/LensEvent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ::away3d::events::LensEvent_obj::__new(this->get_type(),this->_lens,this->get_bubbles(),this->get_cancelable());
}


::away3d::cameras::lenses::LensBase LensEvent_obj::get_lens( ){
	HX_STACK_PUSH("LensEvent::get_lens","away3d/events/LensEvent.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_LINE(20)
	return this->_lens;
}


HX_DEFINE_DYNAMIC_FUNC0(LensEvent_obj,get_lens,return )

::String LensEvent_obj::MATRIX_CHANGED;


LensEvent_obj::LensEvent_obj()
{
}

void LensEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensEvent);
	HX_MARK_MEMBER_NAME(_lens,"_lens");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LensEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lens,"_lens");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LensEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { return get_lens(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_lens") ) { return _lens; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lens") ) { return get_lens_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MATRIX_CHANGED") ) { return MATRIX_CHANGED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LensEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { _lens=inValue.Cast< ::away3d::cameras::lenses::LensBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MATRIX_CHANGED") ) { MATRIX_CHANGED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lens"));
	outFields->push(HX_CSTRING("lens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MATRIX_CHANGED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_lens"),
	HX_CSTRING("_lens"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LensEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LensEvent_obj::MATRIX_CHANGED,"MATRIX_CHANGED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LensEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LensEvent_obj::MATRIX_CHANGED,"MATRIX_CHANGED");
};

Class LensEvent_obj::__mClass;

void LensEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.LensEvent"), hx::TCanCast< LensEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LensEvent_obj::__boot()
{
	MATRIX_CHANGED= HX_CSTRING("matrixChanged");
}

} // end namespace away3d
} // end namespace events
