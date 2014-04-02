#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
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

Void Object3DEvent_obj::__construct(::String type,::away3d::core::base::Object3D object)
{
HX_STACK_PUSH("Object3DEvent::new","away3d/events/Object3DEvent.hx",46);
{
	HX_STACK_LINE(47)
	super::__construct(type,null(),null());
	HX_STACK_LINE(48)
	this->object = object;
}
;
	return null();
}

Object3DEvent_obj::~Object3DEvent_obj() { }

Dynamic Object3DEvent_obj::__CreateEmpty() { return  new Object3DEvent_obj; }
hx::ObjectPtr< Object3DEvent_obj > Object3DEvent_obj::__new(::String type,::away3d::core::base::Object3D object)
{  hx::ObjectPtr< Object3DEvent_obj > result = new Object3DEvent_obj();
	result->__construct(type,object);
	return result;}

Dynamic Object3DEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object3DEvent_obj > result = new Object3DEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::events::Event Object3DEvent_obj::clone( ){
	HX_STACK_PUSH("Object3DEvent::clone","away3d/events/Object3DEvent.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return ::away3d::events::Object3DEvent_obj::__new(this->get_type(),this->object);
}


::String Object3DEvent_obj::VISIBLITY_UPDATED;

::String Object3DEvent_obj::SCENETRANSFORM_CHANGED;

::String Object3DEvent_obj::SCENE_CHANGED;

::String Object3DEvent_obj::POSITION_CHANGED;

::String Object3DEvent_obj::ROTATION_CHANGED;

::String Object3DEvent_obj::SCALE_CHANGED;


Object3DEvent_obj::Object3DEvent_obj()
{
}

void Object3DEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object3DEvent);
	HX_MARK_MEMBER_NAME(object,"object");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Object3DEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Object3DEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCENE_CHANGED") ) { return SCENE_CHANGED; }
		if (HX_FIELD_EQ(inName,"SCALE_CHANGED") ) { return SCALE_CHANGED; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"POSITION_CHANGED") ) { return POSITION_CHANGED; }
		if (HX_FIELD_EQ(inName,"ROTATION_CHANGED") ) { return ROTATION_CHANGED; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"VISIBLITY_UPDATED") ) { return VISIBLITY_UPDATED; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SCENETRANSFORM_CHANGED") ) { return SCENETRANSFORM_CHANGED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object3DEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::away3d::core::base::Object3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCENE_CHANGED") ) { SCENE_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCALE_CHANGED") ) { SCALE_CHANGED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"POSITION_CHANGED") ) { POSITION_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROTATION_CHANGED") ) { ROTATION_CHANGED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"VISIBLITY_UPDATED") ) { VISIBLITY_UPDATED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SCENETRANSFORM_CHANGED") ) { SCENETRANSFORM_CHANGED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object3DEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VISIBLITY_UPDATED"),
	HX_CSTRING("SCENETRANSFORM_CHANGED"),
	HX_CSTRING("SCENE_CHANGED"),
	HX_CSTRING("POSITION_CHANGED"),
	HX_CSTRING("ROTATION_CHANGED"),
	HX_CSTRING("SCALE_CHANGED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("object"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::VISIBLITY_UPDATED,"VISIBLITY_UPDATED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCENETRANSFORM_CHANGED,"SCENETRANSFORM_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCENE_CHANGED,"SCENE_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::POSITION_CHANGED,"POSITION_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::ROTATION_CHANGED,"ROTATION_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCALE_CHANGED,"SCALE_CHANGED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::VISIBLITY_UPDATED,"VISIBLITY_UPDATED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCENETRANSFORM_CHANGED,"SCENETRANSFORM_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCENE_CHANGED,"SCENE_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::POSITION_CHANGED,"POSITION_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::ROTATION_CHANGED,"ROTATION_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCALE_CHANGED,"SCALE_CHANGED");
};

Class Object3DEvent_obj::__mClass;

void Object3DEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.Object3DEvent"), hx::TCanCast< Object3DEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Object3DEvent_obj::__boot()
{
	VISIBLITY_UPDATED= HX_CSTRING("visiblityUpdated");
	SCENETRANSFORM_CHANGED= HX_CSTRING("scenetransformChanged");
	SCENE_CHANGED= HX_CSTRING("sceneChanged");
	POSITION_CHANGED= HX_CSTRING("positionChanged");
	ROTATION_CHANGED= HX_CSTRING("rotationChanged");
	SCALE_CHANGED= HX_CSTRING("scaleChanged");
}

} // end namespace away3d
} // end namespace events
