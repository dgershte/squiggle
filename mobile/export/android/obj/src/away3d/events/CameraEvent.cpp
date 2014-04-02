#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_CameraEvent
#include <away3d/events/CameraEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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

Void CameraEvent_obj::__construct(::String type,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("CameraEvent::new","away3d/events/CameraEvent.hx",15);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(16)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(17)
	this->_camera = camera;
}
;
	return null();
}

CameraEvent_obj::~CameraEvent_obj() { }

Dynamic CameraEvent_obj::__CreateEmpty() { return  new CameraEvent_obj; }
hx::ObjectPtr< CameraEvent_obj > CameraEvent_obj::__new(::String type,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< CameraEvent_obj > result = new CameraEvent_obj();
	result->__construct(type,camera,__o_bubbles,__o_cancelable);
	return result;}

Dynamic CameraEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraEvent_obj > result = new CameraEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flash::events::Event CameraEvent_obj::clone( ){
	HX_STACK_PUSH("CameraEvent::clone","away3d/events/CameraEvent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ::away3d::events::CameraEvent_obj::__new(this->get_type(),this->_camera,this->get_bubbles(),this->get_cancelable());
}


::away3d::cameras::Camera3D CameraEvent_obj::get_camera( ){
	HX_STACK_PUSH("CameraEvent::get_camera","away3d/events/CameraEvent.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_LINE(20)
	return this->_camera;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraEvent_obj,get_camera,return )

::String CameraEvent_obj::LENS_CHANGED;


CameraEvent_obj::CameraEvent_obj()
{
}

void CameraEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraEvent);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CameraEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return get_camera(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LENS_CHANGED") ) { return LENS_CHANGED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::away3d::cameras::Camera3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LENS_CHANGED") ) { LENS_CHANGED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("camera"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LENS_CHANGED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_camera"),
	HX_CSTRING("_camera"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CameraEvent_obj::LENS_CHANGED,"LENS_CHANGED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CameraEvent_obj::LENS_CHANGED,"LENS_CHANGED");
};

Class CameraEvent_obj::__mClass;

void CameraEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.CameraEvent"), hx::TCanCast< CameraEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CameraEvent_obj::__boot()
{
	LENS_CHANGED= HX_CSTRING("lensChanged");
}

} // end namespace away3d
} // end namespace events
