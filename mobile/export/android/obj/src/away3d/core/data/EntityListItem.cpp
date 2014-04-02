#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace core{
namespace data{

Void EntityListItem_obj::__construct()
{
HX_STACK_PUSH("EntityListItem::new","away3d/core/data/EntityListItem.hx",10);
{
}
;
	return null();
}

EntityListItem_obj::~EntityListItem_obj() { }

Dynamic EntityListItem_obj::__CreateEmpty() { return  new EntityListItem_obj; }
hx::ObjectPtr< EntityListItem_obj > EntityListItem_obj::__new()
{  hx::ObjectPtr< EntityListItem_obj > result = new EntityListItem_obj();
	result->__construct();
	return result;}

Dynamic EntityListItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityListItem_obj > result = new EntityListItem_obj();
	result->__construct();
	return result;}


EntityListItem_obj::EntityListItem_obj()
{
}

void EntityListItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityListItem);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void EntityListItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic EntityListItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntityListItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::away3d::core::data::EntityListItem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::away3d::entities::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityListItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("entity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("entity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityListItem_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityListItem_obj::__mClass,"__mClass");
};

Class EntityListItem_obj::__mClass;

void EntityListItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.data.EntityListItem"), hx::TCanCast< EntityListItem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EntityListItem_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace data
