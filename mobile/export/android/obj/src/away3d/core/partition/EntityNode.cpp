#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace core{
namespace partition{

Void EntityNode_obj::__construct(::away3d::entities::Entity entity)
{
HX_STACK_PUSH("EntityNode::new","away3d/core/partition/EntityNode.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->_entity = entity;
	HX_STACK_LINE(35)
	this->_numEntities = (int)1;
}
;
	return null();
}

EntityNode_obj::~EntityNode_obj() { }

Dynamic EntityNode_obj::__CreateEmpty() { return  new EntityNode_obj; }
hx::ObjectPtr< EntityNode_obj > EntityNode_obj::__new(::away3d::entities::Entity entity)
{  hx::ObjectPtr< EntityNode_obj > result = new EntityNode_obj();
	result->__construct(entity);
	return result;}

Dynamic EntityNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityNode_obj > result = new EntityNode_obj();
	result->__construct(inArgs[0]);
	return result;}

bool EntityNode_obj::isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection){
	HX_STACK_PUSH("EntityNode::isIntersectingRay","away3d/core/partition/EntityNode.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rayPosition,"rayPosition");
	HX_STACK_ARG(rayDirection,"rayDirection");
	HX_STACK_LINE(78)
	if ((!(this->_entity->get_isVisible()))){
		HX_STACK_LINE(78)
		return false;
	}
	HX_STACK_LINE(79)
	return this->_entity->isIntersectingRay(rayPosition,rayDirection);
}


bool EntityNode_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("EntityNode::isInFrustum","away3d/core/partition/EntityNode.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(64)
	if ((!(this->_entity->get_isVisible()))){
		HX_STACK_LINE(64)
		return false;
	}
	HX_STACK_LINE(68)
	return this->_entity->get_worldBounds()->isInFrustum(planes,numPlanes);
}


Void EntityNode_obj::removeFromParent( ){
{
		HX_STACK_PUSH("EntityNode::removeFromParent","away3d/core/partition/EntityNode.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		if (((this->_parent != null()))){
			HX_STACK_LINE(59)
			this->_parent->removeNode(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(60)
		this->_parent = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityNode_obj,removeFromParent,(void))

Void EntityNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("EntityNode::acceptTraverser","away3d/core/partition/EntityNode.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(50)
		traverser->applyEntity(this->_entity);
	}
return null();
}


::away3d::entities::Entity EntityNode_obj::get_entity( ){
	HX_STACK_PUSH("EntityNode::get_entity","away3d/core/partition/EntityNode.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->_entity;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityNode_obj,get_entity,return )


EntityNode_obj::EntityNode_obj()
{
}

void EntityNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityNode);
	HX_MARK_MEMBER_NAME(_updateQueueNext,"_updateQueueNext");
	HX_MARK_MEMBER_NAME(_entity,"_entity");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EntityNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_updateQueueNext,"_updateQueueNext");
	HX_VISIT_MEMBER_NAME(_entity,"_entity");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EntityNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return get_entity(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { return _entity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_entity") ) { return get_entity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeFromParent") ) { return removeFromParent_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateQueueNext") ) { return _updateQueueNext; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return isIntersectingRay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntityNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { _entity=inValue.Cast< ::away3d::entities::Entity >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updateQueueNext") ) { _updateQueueNext=inValue.Cast< ::away3d::core::partition::EntityNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_updateQueueNext"));
	outFields->push(HX_CSTRING("_entity"));
	outFields->push(HX_CSTRING("entity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isIntersectingRay"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("removeFromParent"),
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("get_entity"),
	HX_CSTRING("_updateQueueNext"),
	HX_CSTRING("_entity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityNode_obj::__mClass,"__mClass");
};

Class EntityNode_obj::__mClass;

void EntityNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.EntityNode"), hx::TCanCast< EntityNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EntityNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
