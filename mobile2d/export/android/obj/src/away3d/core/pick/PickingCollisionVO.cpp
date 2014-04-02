#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace core{
namespace pick{

Void PickingCollisionVO_obj::__construct(::away3d::entities::Entity entity)
{
HX_STACK_PUSH("PickingCollisionVO::new","away3d/core/pick/PickingCollisionVO.hx",76);
{
	HX_STACK_LINE(76)
	this->entity = entity;
}
;
	return null();
}

PickingCollisionVO_obj::~PickingCollisionVO_obj() { }

Dynamic PickingCollisionVO_obj::__CreateEmpty() { return  new PickingCollisionVO_obj; }
hx::ObjectPtr< PickingCollisionVO_obj > PickingCollisionVO_obj::__new(::away3d::entities::Entity entity)
{  hx::ObjectPtr< PickingCollisionVO_obj > result = new PickingCollisionVO_obj();
	result->__construct(entity);
	return result;}

Dynamic PickingCollisionVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PickingCollisionVO_obj > result = new PickingCollisionVO_obj();
	result->__construct(inArgs[0]);
	return result;}


PickingCollisionVO_obj::PickingCollisionVO_obj()
{
}

void PickingCollisionVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PickingCollisionVO);
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(rayEntryDistance,"rayEntryDistance");
	HX_MARK_MEMBER_NAME(rayOriginIsInsideBounds,"rayOriginIsInsideBounds");
	HX_MARK_MEMBER_NAME(rayDirection,"rayDirection");
	HX_MARK_MEMBER_NAME(rayPosition,"rayPosition");
	HX_MARK_MEMBER_NAME(localRayDirection,"localRayDirection");
	HX_MARK_MEMBER_NAME(localRayPosition,"localRayPosition");
	HX_MARK_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(localNormal,"localNormal");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void PickingCollisionVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(rayEntryDistance,"rayEntryDistance");
	HX_VISIT_MEMBER_NAME(rayOriginIsInsideBounds,"rayOriginIsInsideBounds");
	HX_VISIT_MEMBER_NAME(rayDirection,"rayDirection");
	HX_VISIT_MEMBER_NAME(rayPosition,"rayPosition");
	HX_VISIT_MEMBER_NAME(localRayDirection,"localRayDirection");
	HX_VISIT_MEMBER_NAME(localRayPosition,"localRayPosition");
	HX_VISIT_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(localNormal,"localNormal");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic PickingCollisionVO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { return renderable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rayPosition") ) { return rayPosition; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { return localNormal; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { return rayDirection; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { return localPosition; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rayEntryDistance") ) { return rayEntryDistance; }
		if (HX_FIELD_EQ(inName,"localRayPosition") ) { return localRayPosition; }
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { return subGeometryIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localRayDirection") ) { return localRayDirection; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rayOriginIsInsideBounds") ) { return rayOriginIsInsideBounds; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PickingCollisionVO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::away3d::entities::Entity >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rayPosition") ) { rayPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { localNormal=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { rayDirection=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rayEntryDistance") ) { rayEntryDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localRayPosition") ) { localRayPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { subGeometryIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localRayDirection") ) { localRayDirection=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rayOriginIsInsideBounds") ) { rayOriginIsInsideBounds=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PickingCollisionVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("renderable"));
	outFields->push(HX_CSTRING("rayEntryDistance"));
	outFields->push(HX_CSTRING("rayOriginIsInsideBounds"));
	outFields->push(HX_CSTRING("rayDirection"));
	outFields->push(HX_CSTRING("rayPosition"));
	outFields->push(HX_CSTRING("localRayDirection"));
	outFields->push(HX_CSTRING("localRayPosition"));
	outFields->push(HX_CSTRING("subGeometryIndex"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("uv"));
	outFields->push(HX_CSTRING("localNormal"));
	outFields->push(HX_CSTRING("localPosition"));
	outFields->push(HX_CSTRING("entity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("renderable"),
	HX_CSTRING("rayEntryDistance"),
	HX_CSTRING("rayOriginIsInsideBounds"),
	HX_CSTRING("rayDirection"),
	HX_CSTRING("rayPosition"),
	HX_CSTRING("localRayDirection"),
	HX_CSTRING("localRayPosition"),
	HX_CSTRING("subGeometryIndex"),
	HX_CSTRING("index"),
	HX_CSTRING("uv"),
	HX_CSTRING("localNormal"),
	HX_CSTRING("localPosition"),
	HX_CSTRING("entity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PickingCollisionVO_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PickingCollisionVO_obj::__mClass,"__mClass");
};

Class PickingCollisionVO_obj::__mClass;

void PickingCollisionVO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.PickingCollisionVO"), hx::TCanCast< PickingCollisionVO_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PickingCollisionVO_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
