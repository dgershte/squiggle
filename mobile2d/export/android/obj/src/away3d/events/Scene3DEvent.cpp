#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
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

Void Scene3DEvent_obj::__construct(::String type,::away3d::containers::ObjectContainer3D objectContainer)
{
HX_STACK_PUSH("Scene3DEvent::new","away3d/events/Scene3DEvent.hx",19);
{
	HX_STACK_LINE(20)
	this->objectContainer3D = objectContainer;
	HX_STACK_LINE(21)
	super::__construct(type,null(),null());
}
;
	return null();
}

Scene3DEvent_obj::~Scene3DEvent_obj() { }

Dynamic Scene3DEvent_obj::__CreateEmpty() { return  new Scene3DEvent_obj; }
hx::ObjectPtr< Scene3DEvent_obj > Scene3DEvent_obj::__new(::String type,::away3d::containers::ObjectContainer3D objectContainer)
{  hx::ObjectPtr< Scene3DEvent_obj > result = new Scene3DEvent_obj();
	result->__construct(type,objectContainer);
	return result;}

Dynamic Scene3DEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene3DEvent_obj > result = new Scene3DEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::events::Event Scene3DEvent_obj::clone( ){
	HX_STACK_PUSH("Scene3DEvent::clone","away3d/events/Scene3DEvent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ::away3d::events::Scene3DEvent_obj::__new(this->get_type(),this->objectContainer3D);
}


::String Scene3DEvent_obj::ADDED_TO_SCENE;

::String Scene3DEvent_obj::REMOVED_FROM_SCENE;

::String Scene3DEvent_obj::PARTITION_CHANGED;


Scene3DEvent_obj::Scene3DEvent_obj()
{
}

void Scene3DEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene3DEvent);
	HX_MARK_MEMBER_NAME(objectContainer3D,"objectContainer3D");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene3DEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectContainer3D,"objectContainer3D");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Scene3DEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_SCENE") ) { return ADDED_TO_SCENE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PARTITION_CHANGED") ) { return PARTITION_CHANGED; }
		if (HX_FIELD_EQ(inName,"objectContainer3D") ) { return objectContainer3D; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_SCENE") ) { return REMOVED_FROM_SCENE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene3DEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_SCENE") ) { ADDED_TO_SCENE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PARTITION_CHANGED") ) { PARTITION_CHANGED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectContainer3D") ) { objectContainer3D=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_SCENE") ) { REMOVED_FROM_SCENE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene3DEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("objectContainer3D"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ADDED_TO_SCENE"),
	HX_CSTRING("REMOVED_FROM_SCENE"),
	HX_CSTRING("PARTITION_CHANGED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("objectContainer3D"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::ADDED_TO_SCENE,"ADDED_TO_SCENE");
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::REMOVED_FROM_SCENE,"REMOVED_FROM_SCENE");
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::PARTITION_CHANGED,"PARTITION_CHANGED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::ADDED_TO_SCENE,"ADDED_TO_SCENE");
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::REMOVED_FROM_SCENE,"REMOVED_FROM_SCENE");
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::PARTITION_CHANGED,"PARTITION_CHANGED");
};

Class Scene3DEvent_obj::__mClass;

void Scene3DEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.Scene3DEvent"), hx::TCanCast< Scene3DEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Scene3DEvent_obj::__boot()
{
	ADDED_TO_SCENE= HX_CSTRING("addedToScene");
	REMOVED_FROM_SCENE= HX_CSTRING("removedFromScene");
	PARTITION_CHANGED= HX_CSTRING("partitionChanged");
}

} // end namespace away3d
} // end namespace events
