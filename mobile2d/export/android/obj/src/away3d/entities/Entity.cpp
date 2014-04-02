#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_bounds_AxisAlignedBoundingBox
#include <away3d/bounds/AxisAlignedBoundingBox.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace entities{

Void Entity_obj::__construct()
{
HX_STACK_PUSH("Entity::new","away3d/entities/Entity.hx",252);
{
	HX_STACK_LINE(253)
	this->_boundsIsShown = false;
	HX_STACK_LINE(254)
	this->_boundsInvalid = true;
	HX_STACK_LINE(255)
	this->_worldBoundsInvalid = true;
	HX_STACK_LINE(256)
	super::__construct();
	HX_STACK_LINE(257)
	this->_bounds = this->getDefaultBoundingVolume();
	HX_STACK_LINE(258)
	this->_worldBounds = this->getDefaultBoundingVolume();
}
;
	return null();
}

Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new()
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct();
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct();
	return result;}

Void Entity_obj::internalUpdate( ){
{
		HX_STACK_PUSH("Entity::internalUpdate","away3d/entities/Entity.hx",392);
		HX_STACK_THIS(this);
		HX_STACK_LINE(392)
		if (((this->_controller != null()))){
			HX_STACK_LINE(393)
			this->_controller->update(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,internalUpdate,(void))

Void Entity_obj::removeBounds( ){
{
		HX_STACK_PUSH("Entity::removeBounds","away3d/entities/Entity.hx",384);
		HX_STACK_THIS(this);
		HX_STACK_LINE(384)
		if ((this->_boundsIsShown)){
			HX_STACK_LINE(386)
			this->_boundsIsShown = false;
			HX_STACK_LINE(387)
			this->removeChild(this->_bounds->get_boundingRenderable());
			HX_STACK_LINE(388)
			this->_bounds->disposeRenderable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removeBounds,(void))

Void Entity_obj::addBounds( ){
{
		HX_STACK_PUSH("Entity::addBounds","away3d/entities/Entity.hx",377);
		HX_STACK_THIS(this);
		HX_STACK_LINE(377)
		if ((!(this->_boundsIsShown))){
			HX_STACK_LINE(379)
			this->_boundsIsShown = true;
			HX_STACK_LINE(380)
			this->addChild(this->_bounds->get_boundingRenderable());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,addBounds,(void))

Void Entity_obj::notifyPartitionUnassigned( ){
{
		HX_STACK_PUSH("Entity::notifyPartitionUnassigned","away3d/entities/Entity.hx",373);
		HX_STACK_THIS(this);
		HX_STACK_LINE(373)
		if (((this->_scene != null()))){
			HX_STACK_LINE(374)
			this->_scene->unregisterPartition(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifyPartitionUnassigned,(void))

Void Entity_obj::notifyPartitionAssigned( ){
{
		HX_STACK_PUSH("Entity::notifyPartitionAssigned","away3d/entities/Entity.hx",365);
		HX_STACK_THIS(this);
		HX_STACK_LINE(365)
		if (((this->_scene != null()))){
			HX_STACK_LINE(366)
			this->_scene->registerPartition(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifyPartitionAssigned,(void))

Void Entity_obj::notifySceneBoundsInvalid( ){
{
		HX_STACK_PUSH("Entity::notifySceneBoundsInvalid","away3d/entities/Entity.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_LINE(356)
		if (((this->_scene != null()))){
			HX_STACK_LINE(357)
			this->_scene->invalidateEntityBounds(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,notifySceneBoundsInvalid,(void))

Void Entity_obj::updateMouseChildren( ){
{
		HX_STACK_PUSH("Entity::updateMouseChildren","away3d/entities/Entity.hx",340);
		HX_STACK_THIS(this);
		HX_STACK_LINE(343)
		if (((bool((this->_parent == null())) && bool((this->get_pickingCollider() != null()))))){
			HX_STACK_LINE(343)
			if ((::Std_obj::is(this->_parent,hx::ClassOf< ::away3d::entities::Entity >()))){
				HX_STACK_LINE(345)
				::away3d::core::pick::IPickingCollider collider = (hx::TCast< away3d::entities::Entity >::cast(this->_parent))->get_pickingCollider();		HX_STACK_VAR(collider,"collider");
				HX_STACK_LINE(346)
				if (((collider != null()))){
					HX_STACK_LINE(346)
					this->set_pickingCollider(collider);
				}
			}
		}
		HX_STACK_LINE(349)
		this->super::updateMouseChildren();
	}
return null();
}


Void Entity_obj::invalidateBounds( ){
{
		HX_STACK_PUSH("Entity::invalidateBounds","away3d/entities/Entity.hx",334);
		HX_STACK_THIS(this);
		HX_STACK_LINE(335)
		this->_boundsInvalid = true;
		HX_STACK_LINE(336)
		this->_worldBoundsInvalid = true;
		HX_STACK_LINE(337)
		this->notifySceneBoundsInvalid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,invalidateBounds,(void))

Void Entity_obj::invalidateSceneTransform( ){
{
		HX_STACK_PUSH("Entity::invalidateSceneTransform","away3d/entities/Entity.hx",322);
		HX_STACK_THIS(this);
		HX_STACK_LINE(322)
		if ((!(this->_ignoreTransform))){
			HX_STACK_LINE(324)
			this->super::invalidateSceneTransform();
			HX_STACK_LINE(325)
			this->_worldBoundsInvalid = true;
			HX_STACK_LINE(326)
			this->notifySceneBoundsInvalid();
		}
	}
return null();
}


Void Entity_obj::updateBounds( ){
{
		HX_STACK_PUSH("Entity::updateBounds","away3d/entities/Entity.hx",313);
		HX_STACK_THIS(this);
		HX_STACK_LINE(314)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
		HX_STACK_LINE(315)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,updateBounds,(void))

::away3d::bounds::BoundingVolumeBase Entity_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("Entity::getDefaultBoundingVolume","away3d/entities/Entity.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return ::away3d::bounds::AxisAlignedBoundingBox_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getDefaultBoundingVolume,return )

::away3d::core::partition::EntityNode Entity_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("Entity::createEntityPartitionNode","away3d/entities/Entity.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(295)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,createEntityPartitionNode,return )

bool Entity_obj::isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection){
	HX_STACK_PUSH("Entity::isIntersectingRay","away3d/entities/Entity.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rayPosition,"rayPosition");
	HX_STACK_ARG(rayDirection,"rayDirection");
	HX_STACK_LINE(272)
	::flash::geom::Vector3D localRayPosition = this->get_inverseSceneTransform()->transformVector(rayPosition);		HX_STACK_VAR(localRayPosition,"localRayPosition");
	HX_STACK_LINE(273)
	::flash::geom::Vector3D localRayDirection = this->get_inverseSceneTransform()->deltaTransformVector(rayDirection);		HX_STACK_VAR(localRayDirection,"localRayDirection");
	HX_STACK_LINE(275)
	if (((this->get_pickingCollisionVO()->localNormal == null()))){
		HX_STACK_LINE(275)
		this->get_pickingCollisionVO()->localNormal = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(276)
	Float rayEntryDistance = this->get_bounds()->rayIntersection(localRayPosition,localRayDirection,this->get_pickingCollisionVO()->localNormal);		HX_STACK_VAR(rayEntryDistance,"rayEntryDistance");
	HX_STACK_LINE(277)
	if (((rayEntryDistance < (int)0))){
		HX_STACK_LINE(277)
		return false;
	}
	HX_STACK_LINE(278)
	this->get_pickingCollisionVO()->rayEntryDistance = rayEntryDistance;
	HX_STACK_LINE(279)
	this->get_pickingCollisionVO()->localRayPosition = localRayPosition;
	HX_STACK_LINE(280)
	this->get_pickingCollisionVO()->localRayDirection = localRayDirection;
	HX_STACK_LINE(281)
	this->get_pickingCollisionVO()->rayPosition = rayPosition;
	HX_STACK_LINE(282)
	this->get_pickingCollisionVO()->rayDirection = rayDirection;
	HX_STACK_LINE(283)
	this->get_pickingCollisionVO()->rayOriginIsInsideBounds = (rayEntryDistance == (int)0);
	HX_STACK_LINE(284)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,isIntersectingRay,return )

::away3d::core::partition::EntityNode Entity_obj::getEntityPartitionNode( ){
	HX_STACK_PUSH("Entity::getEntityPartitionNode","away3d/entities/Entity.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(266)
	if (((this->_partitionNode == null()))){
		HX_STACK_LINE(266)
		this->_partitionNode = this->createEntityPartitionNode();
	}
	HX_STACK_LINE(267)
	return this->_partitionNode;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getEntityPartitionNode,return )

::away3d::core::pick::IPickingCollider Entity_obj::set_pickingCollider( ::away3d::core::pick::IPickingCollider value){
	HX_STACK_PUSH("Entity::set_pickingCollider","away3d/entities/Entity.hx",243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(244)
	this->_pickingCollider = value;
	HX_STACK_LINE(245)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pickingCollider,return )

::away3d::core::pick::IPickingCollider Entity_obj::get_pickingCollider( ){
	HX_STACK_PUSH("Entity::get_pickingCollider","away3d/entities/Entity.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_LINE(239)
	return this->_pickingCollider;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pickingCollider,return )

::String Entity_obj::get_assetType( ){
	HX_STACK_PUSH("Entity::get_assetType","away3d/entities/Entity.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return ::away3d::library::assets::AssetType_obj::ENTITY;
}


::away3d::containers::Scene3D Entity_obj::set_scene( ::away3d::containers::Scene3D value){
	HX_STACK_PUSH("Entity::set_scene","away3d/entities/Entity.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(220)
	if (((value == this->_scene))){
		HX_STACK_LINE(220)
		return value;
	}
	HX_STACK_LINE(221)
	if (((this->_scene != null()))){
		HX_STACK_LINE(221)
		this->_scene->unregisterEntity(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(222)
	if (((value != null()))){
		HX_STACK_LINE(222)
		value->registerEntity(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(223)
	this->super::set_scene(value);
	HX_STACK_LINE(224)
	return value;
}


::away3d::core::partition::Partition3D Entity_obj::set_implicitPartition( ::away3d::core::partition::Partition3D value){
	HX_STACK_PUSH("Entity::set_implicitPartition","away3d/entities/Entity.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(208)
	if (((value == this->_implicitPartition))){
		HX_STACK_LINE(208)
		return value;
	}
	HX_STACK_LINE(209)
	if (((this->_implicitPartition != null()))){
		HX_STACK_LINE(209)
		this->notifyPartitionUnassigned();
	}
	HX_STACK_LINE(210)
	this->super::set_implicitPartition(value);
	HX_STACK_LINE(211)
	this->notifyPartitionAssigned();
	HX_STACK_LINE(212)
	return value;
}


Void Entity_obj::updateWorldBounds( ){
{
		HX_STACK_PUSH("Entity::updateWorldBounds","away3d/entities/Entity.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		this->_worldBounds->transformFrom(this->get_bounds(),this->get_sceneTransform());
		HX_STACK_LINE(200)
		this->_worldBoundsInvalid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,updateWorldBounds,(void))

::away3d::bounds::BoundingVolumeBase Entity_obj::get_worldBounds( ){
	HX_STACK_PUSH("Entity::get_worldBounds","away3d/entities/Entity.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_LINE(191)
	if ((this->_worldBoundsInvalid)){
		HX_STACK_LINE(191)
		this->updateWorldBounds();
	}
	HX_STACK_LINE(195)
	return this->_worldBounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_worldBounds,return )

::away3d::bounds::BoundingVolumeBase Entity_obj::set_bounds( ::away3d::bounds::BoundingVolumeBase value){
	HX_STACK_PUSH("Entity::set_bounds","away3d/entities/Entity.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(181)
	this->removeBounds();
	HX_STACK_LINE(182)
	this->_bounds = value;
	HX_STACK_LINE(183)
	this->_worldBounds = value->clone();
	HX_STACK_LINE(184)
	this->invalidateBounds();
	HX_STACK_LINE(185)
	if ((this->_showBounds)){
		HX_STACK_LINE(185)
		this->addBounds();
	}
	HX_STACK_LINE(186)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_bounds,return )

::away3d::bounds::BoundingVolumeBase Entity_obj::get_bounds( ){
	HX_STACK_PUSH("Entity::get_bounds","away3d/entities/Entity.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(176)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(176)
		this->updateBounds();
	}
	HX_STACK_LINE(177)
	return this->_bounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_bounds,return )

Float Entity_obj::get_maxZ( ){
	HX_STACK_PUSH("Entity::get_maxZ","away3d/entities/Entity.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_LINE(167)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(167)
		this->updateBounds();
	}
	HX_STACK_LINE(168)
	return this->_bounds->get_max()->z;
}


Float Entity_obj::get_maxY( ){
	HX_STACK_PUSH("Entity::get_maxY","away3d/entities/Entity.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(158)
		this->updateBounds();
	}
	HX_STACK_LINE(159)
	return this->_bounds->get_max()->y;
}


Float Entity_obj::get_maxX( ){
	HX_STACK_PUSH("Entity::get_maxX","away3d/entities/Entity.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(149)
		this->updateBounds();
	}
	HX_STACK_LINE(150)
	return this->_bounds->get_max()->x;
}


Float Entity_obj::get_minZ( ){
	HX_STACK_PUSH("Entity::get_minZ","away3d/entities/Entity.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(140)
		this->updateBounds();
	}
	HX_STACK_LINE(141)
	return this->_bounds->get_min()->z;
}


Float Entity_obj::get_minY( ){
	HX_STACK_PUSH("Entity::get_minY","away3d/entities/Entity.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(131)
		this->updateBounds();
	}
	HX_STACK_LINE(132)
	return this->_bounds->get_min()->y;
}


Float Entity_obj::get_minX( ){
	HX_STACK_PUSH("Entity::get_minX","away3d/entities/Entity.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(122)
	if ((this->_boundsInvalid)){
		HX_STACK_LINE(122)
		this->updateBounds();
	}
	HX_STACK_LINE(123)
	return this->_bounds->get_min()->x;
}


bool Entity_obj::set_showBounds( bool value){
	HX_STACK_PUSH("Entity::set_showBounds","away3d/entities/Entity.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(110)
	if (((value == this->_showBounds))){
		HX_STACK_LINE(110)
		return value;
	}
	HX_STACK_LINE(111)
	this->_showBounds = value;
	HX_STACK_LINE(112)
	if ((this->_showBounds)){
		HX_STACK_LINE(112)
		this->addBounds();
	}
	else{
		HX_STACK_LINE(113)
		this->removeBounds();
	}
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_showBounds,return )

bool Entity_obj::get_showBounds( ){
	HX_STACK_PUSH("Entity::get_showBounds","away3d/entities/Entity.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(105)
	return this->_showBounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_showBounds,return )

bool Entity_obj::collidesBefore( Float shortestCollisionDistance,bool findClosest){
	HX_STACK_PUSH("Entity::collidesBefore","away3d/entities/Entity.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shortestCollisionDistance,"shortestCollisionDistance");
	HX_STACK_ARG(findClosest,"findClosest");
	HX_STACK_LINE(96)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,collidesBefore,return )

::away3d::core::pick::PickingCollisionVO Entity_obj::get_pickingCollisionVO( ){
	HX_STACK_PUSH("Entity::get_pickingCollisionVO","away3d/entities/Entity.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	if (((this->_pickingCollisionVO == null()))){
		HX_STACK_LINE(86)
		this->_pickingCollisionVO = ::away3d::core::pick::PickingCollisionVO_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(87)
	return this->_pickingCollisionVO;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pickingCollisionVO,return )

bool Entity_obj::set_staticNode( bool value){
	HX_STACK_PUSH("Entity::set_staticNode","away3d/entities/Entity.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(77)
	this->_staticNode = value;
	HX_STACK_LINE(78)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_staticNode,return )

bool Entity_obj::get_staticNode( ){
	HX_STACK_PUSH("Entity::get_staticNode","away3d/entities/Entity.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->_staticNode;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_staticNode,return )

bool Entity_obj::set_shaderPickingDetails( bool value){
	HX_STACK_PUSH("Entity::set_shaderPickingDetails","away3d/entities/Entity.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(63)
	this->_shaderPickingDetails = value;
	HX_STACK_LINE(64)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_shaderPickingDetails,return )

bool Entity_obj::get_shaderPickingDetails( ){
	HX_STACK_PUSH("Entity::get_shaderPickingDetails","away3d/entities/Entity.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->_shaderPickingDetails;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_shaderPickingDetails,return )

bool Entity_obj::set_ignoreTransform( bool value){
	HX_STACK_PUSH("Entity::set_ignoreTransform","away3d/entities/Entity.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(45)
	if (((this->_scene != null()))){
		HX_STACK_LINE(45)
		this->_scene->invalidateEntityBounds(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(46)
	this->super::set_ignoreTransform(value);
	HX_STACK_LINE(47)
	return value;
}



Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(_worldBoundsInvalid,"_worldBoundsInvalid");
	HX_MARK_MEMBER_NAME(_worldBounds,"_worldBounds");
	HX_MARK_MEMBER_NAME(_boundsInvalid,"_boundsInvalid");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_staticNode,"_staticNode");
	HX_MARK_MEMBER_NAME(_pickingCollider,"_pickingCollider");
	HX_MARK_MEMBER_NAME(_pickingCollisionVO,"_pickingCollisionVO");
	HX_MARK_MEMBER_NAME(_shaderPickingDetails,"_shaderPickingDetails");
	HX_MARK_MEMBER_NAME(_boundsIsShown,"_boundsIsShown");
	HX_MARK_MEMBER_NAME(_partitionNode,"_partitionNode");
	HX_MARK_MEMBER_NAME(_showBounds,"_showBounds");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_worldBoundsInvalid,"_worldBoundsInvalid");
	HX_VISIT_MEMBER_NAME(_worldBounds,"_worldBounds");
	HX_VISIT_MEMBER_NAME(_boundsInvalid,"_boundsInvalid");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_staticNode,"_staticNode");
	HX_VISIT_MEMBER_NAME(_pickingCollider,"_pickingCollider");
	HX_VISIT_MEMBER_NAME(_pickingCollisionVO,"_pickingCollisionVO");
	HX_VISIT_MEMBER_NAME(_shaderPickingDetails,"_shaderPickingDetails");
	HX_VISIT_MEMBER_NAME(_boundsIsShown,"_boundsIsShown");
	HX_VISIT_MEMBER_NAME(_partitionNode,"_partitionNode");
	HX_VISIT_MEMBER_NAME(_showBounds,"_showBounds");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_maxZ") ) { return get_maxZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxY") ) { return get_maxY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxX") ) { return get_maxX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minZ") ) { return get_minZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minY") ) { return get_minY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minX") ) { return get_minX_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBounds") ) { return addBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"showBounds") ) { return get_showBounds(); }
		if (HX_FIELD_EQ(inName,"staticNode") ) { return get_staticNode(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticNode") ) { return _staticNode; }
		if (HX_FIELD_EQ(inName,"_showBounds") ) { return _showBounds; }
		if (HX_FIELD_EQ(inName,"worldBounds") ) { return get_worldBounds(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeBounds") ) { return removeBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_worldBounds") ) { return _worldBounds; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internalUpdate") ) { return internalUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showBounds") ) { return set_showBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showBounds") ) { return get_showBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"collidesBefore") ) { return collidesBefore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_staticNode") ) { return set_staticNode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticNode") ) { return get_staticNode_dyn(); }
		if (HX_FIELD_EQ(inName,"_boundsInvalid") ) { return _boundsInvalid; }
		if (HX_FIELD_EQ(inName,"_boundsIsShown") ) { return _boundsIsShown; }
		if (HX_FIELD_EQ(inName,"_partitionNode") ) { return _partitionNode; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_worldBounds") ) { return get_worldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"pickingCollider") ) { return get_pickingCollider(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return invalidateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_pickingCollider") ) { return _pickingCollider; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return isIntersectingRay_dyn(); }
		if (HX_FIELD_EQ(inName,"updateWorldBounds") ) { return updateWorldBounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pickingCollisionVO") ) { return get_pickingCollisionVO(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return updateMouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pickingCollider") ) { return set_pickingCollider_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pickingCollider") ) { return get_pickingCollider_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignoreTransform") ) { return set_ignoreTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_worldBoundsInvalid") ) { return _worldBoundsInvalid; }
		if (HX_FIELD_EQ(inName,"_pickingCollisionVO") ) { return _pickingCollisionVO; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { return get_shaderPickingDetails(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_implicitPartition") ) { return set_implicitPartition_dyn(); }
		if (HX_FIELD_EQ(inName,"_shaderPickingDetails") ) { return _shaderPickingDetails; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getEntityPartitionNode") ) { return getEntityPartitionNode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pickingCollisionVO") ) { return get_pickingCollisionVO_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"notifyPartitionAssigned") ) { return notifyPartitionAssigned_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"notifySceneBoundsInvalid") ) { return notifySceneBoundsInvalid_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return invalidateSceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return getDefaultBoundingVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shaderPickingDetails") ) { return set_shaderPickingDetails_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shaderPickingDetails") ) { return get_shaderPickingDetails_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"notifyPartitionUnassigned") ) { return notifyPartitionUnassigned_dyn(); }
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return set_bounds(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::away3d::bounds::BoundingVolumeBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showBounds") ) { return set_showBounds(inValue); }
		if (HX_FIELD_EQ(inName,"staticNode") ) { return set_staticNode(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticNode") ) { _staticNode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showBounds") ) { _showBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_worldBounds") ) { _worldBounds=inValue.Cast< ::away3d::bounds::BoundingVolumeBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_boundsInvalid") ) { _boundsInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundsIsShown") ) { _boundsIsShown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_partitionNode") ) { _partitionNode=inValue.Cast< ::away3d::core::partition::EntityNode >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pickingCollider") ) { return set_pickingCollider(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_pickingCollider") ) { _pickingCollider=inValue.Cast< ::away3d::core::pick::IPickingCollider >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_worldBoundsInvalid") ) { _worldBoundsInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pickingCollisionVO") ) { _pickingCollisionVO=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { return set_shaderPickingDetails(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_shaderPickingDetails") ) { _shaderPickingDetails=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_worldBoundsInvalid"));
	outFields->push(HX_CSTRING("_worldBounds"));
	outFields->push(HX_CSTRING("_boundsInvalid"));
	outFields->push(HX_CSTRING("_bounds"));
	outFields->push(HX_CSTRING("_staticNode"));
	outFields->push(HX_CSTRING("_pickingCollider"));
	outFields->push(HX_CSTRING("_pickingCollisionVO"));
	outFields->push(HX_CSTRING("_shaderPickingDetails"));
	outFields->push(HX_CSTRING("_boundsIsShown"));
	outFields->push(HX_CSTRING("_partitionNode"));
	outFields->push(HX_CSTRING("_showBounds"));
	outFields->push(HX_CSTRING("pickingCollider"));
	outFields->push(HX_CSTRING("worldBounds"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("showBounds"));
	outFields->push(HX_CSTRING("pickingCollisionVO"));
	outFields->push(HX_CSTRING("staticNode"));
	outFields->push(HX_CSTRING("shaderPickingDetails"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("internalUpdate"),
	HX_CSTRING("removeBounds"),
	HX_CSTRING("addBounds"),
	HX_CSTRING("notifyPartitionUnassigned"),
	HX_CSTRING("notifyPartitionAssigned"),
	HX_CSTRING("notifySceneBoundsInvalid"),
	HX_CSTRING("updateMouseChildren"),
	HX_CSTRING("invalidateBounds"),
	HX_CSTRING("invalidateSceneTransform"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("isIntersectingRay"),
	HX_CSTRING("getEntityPartitionNode"),
	HX_CSTRING("set_pickingCollider"),
	HX_CSTRING("get_pickingCollider"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("set_implicitPartition"),
	HX_CSTRING("updateWorldBounds"),
	HX_CSTRING("get_worldBounds"),
	HX_CSTRING("set_bounds"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("get_maxZ"),
	HX_CSTRING("get_maxY"),
	HX_CSTRING("get_maxX"),
	HX_CSTRING("get_minZ"),
	HX_CSTRING("get_minY"),
	HX_CSTRING("get_minX"),
	HX_CSTRING("set_showBounds"),
	HX_CSTRING("get_showBounds"),
	HX_CSTRING("collidesBefore"),
	HX_CSTRING("get_pickingCollisionVO"),
	HX_CSTRING("set_staticNode"),
	HX_CSTRING("get_staticNode"),
	HX_CSTRING("set_shaderPickingDetails"),
	HX_CSTRING("get_shaderPickingDetails"),
	HX_CSTRING("set_ignoreTransform"),
	HX_CSTRING("_worldBoundsInvalid"),
	HX_CSTRING("_worldBounds"),
	HX_CSTRING("_boundsInvalid"),
	HX_CSTRING("_bounds"),
	HX_CSTRING("_staticNode"),
	HX_CSTRING("_pickingCollider"),
	HX_CSTRING("_pickingCollisionVO"),
	HX_CSTRING("_shaderPickingDetails"),
	HX_CSTRING("_boundsIsShown"),
	HX_CSTRING("_partitionNode"),
	HX_CSTRING("_showBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.entities.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Entity_obj::__boot()
{
}

} // end namespace away3d
} // end namespace entities
