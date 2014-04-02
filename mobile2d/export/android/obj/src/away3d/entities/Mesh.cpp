#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_MeshNode
#include <away3d/core/partition/MeshNode.h>
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
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
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
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#include <away3d/materials/utils/DefaultMaterialManager.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace entities{

Void Mesh_obj::__construct(::away3d::core::base::Geometry geometry,::away3d::materials::MaterialBase material)
{
HX_STACK_PUSH("Mesh::new","away3d/entities/Mesh.hx",47);
{
	HX_STACK_LINE(48)
	this->_castsShadows = true;
	HX_STACK_LINE(49)
	this->_shareAnimationGeometry = true;
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(51)
	this->_subMeshes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(52)
	this->set_geometry(geometry);
	HX_STACK_LINE(53)
	if (((this->get_geometry() == null()))){
		HX_STACK_LINE(53)
		this->set_geometry(::away3d::core::base::Geometry_obj::__new());
	}
	HX_STACK_LINE(55)
	this->set_material(material);
	HX_STACK_LINE(56)
	if (((this->get_material() == null()))){
		HX_STACK_LINE(56)
		this->set_material(::away3d::materials::utils::DefaultMaterialManager_obj::getDefaultMaterial(hx::ObjectPtr<OBJ_>(this)));
	}
}
;
	return null();
}

Mesh_obj::~Mesh_obj() { }

Dynamic Mesh_obj::__CreateEmpty() { return  new Mesh_obj; }
hx::ObjectPtr< Mesh_obj > Mesh_obj::__new(::away3d::core::base::Geometry geometry,::away3d::materials::MaterialBase material)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(geometry,material);
	return result;}

Dynamic Mesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mesh_obj > result = new Mesh_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Mesh_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::core::base::IMaterialOwner_obj)) return operator ::away3d::core::base::IMaterialOwner_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

bool Mesh_obj::collidesBefore( Float shortestCollisionDistance,bool findClosest){
	HX_STACK_PUSH("Mesh::collidesBefore","away3d/entities/Mesh.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shortestCollisionDistance,"shortestCollisionDistance");
	HX_STACK_ARG(findClosest,"findClosest");
	HX_STACK_LINE(352)
	this->_pickingCollider->setLocalRay(this->_pickingCollisionVO->localRayPosition,this->_pickingCollisionVO->localRayDirection);
	HX_STACK_LINE(353)
	this->_pickingCollisionVO->renderable = null();
	HX_STACK_LINE(354)
	int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(355)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(356)
	while(((i < len))){
		HX_STACK_LINE(357)
		::away3d::core::base::SubMesh subMesh = this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >();		HX_STACK_VAR(subMesh,"subMesh");
		HX_STACK_LINE(359)
		if ((this->_pickingCollider->testSubMeshCollision(subMesh,this->_pickingCollisionVO,shortestCollisionDistance))){
			HX_STACK_LINE(360)
			shortestCollisionDistance = this->_pickingCollisionVO->rayEntryDistance;
			HX_STACK_LINE(361)
			this->_pickingCollisionVO->renderable = subMesh;
			HX_STACK_LINE(362)
			if ((!(findClosest))){
				HX_STACK_LINE(362)
				return true;
			}
		}
		HX_STACK_LINE(364)
		++(i);
	}
	HX_STACK_LINE(366)
	return (this->_pickingCollisionVO->renderable != null());
}


::away3d::core::base::SubMesh Mesh_obj::getSubMeshForSubGeometry( ::away3d::core::base::SubGeometry subGeometry){
	HX_STACK_PUSH("Mesh::getSubMeshForSubGeometry","away3d/entities/Mesh.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_ARG(subGeometry,"subGeometry");
	HX_STACK_LINE(347)
	return this->_subMeshes->__get(::flash::_Vector::Vector_Impl__obj::indexOf(this->_geometry->get_subGeometries(),subGeometry,null())).StaticCast< ::away3d::core::base::SubMesh >();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,getSubMeshForSubGeometry,return )

Void Mesh_obj::addSubMesh( ::away3d::core::base::ISubGeometry subGeometry){
{
		HX_STACK_PUSH("Mesh::addSubMesh","away3d/entities/Mesh.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subGeometry,"subGeometry");
		HX_STACK_LINE(340)
		::away3d::core::base::SubMesh subMesh = ::away3d::core::base::SubMesh_obj::__new(subGeometry,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(subMesh,"subMesh");
		HX_STACK_LINE(341)
		int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(342)
		subMesh->_index = len;
		HX_STACK_LINE(343)
		this->_subMeshes[len] = subMesh;
		HX_STACK_LINE(344)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,addSubMesh,(void))

Void Mesh_obj::onSubGeometryRemoved( ::away3d::events::GeometryEvent event){
{
		HX_STACK_PUSH("Mesh::onSubGeometryRemoved","away3d/entities/Mesh.hx",309);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(310)
		::away3d::core::base::SubMesh subMesh;		HX_STACK_VAR(subMesh,"subMesh");
		HX_STACK_LINE(311)
		::away3d::core::base::ISubGeometry subGeom = event->get_subGeometry();		HX_STACK_VAR(subGeom,"subGeom");
		HX_STACK_LINE(312)
		int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(313)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(318)
		i = (int)0;
		HX_STACK_LINE(319)
		while(((i < len))){
			HX_STACK_LINE(320)
			subMesh = this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >();
			HX_STACK_LINE(321)
			if (((subMesh->get_subGeometry() == subGeom))){
				HX_STACK_LINE(322)
				subMesh->dispose();
				HX_STACK_LINE(323)
				::flash::_Vector::Vector_Impl__obj::splice(this->_subMeshes,i,(int)1);
				HX_STACK_LINE(324)
				break;
			}
			HX_STACK_LINE(326)
			++(i);
		}
		HX_STACK_LINE(328)
		--(len);
		HX_STACK_LINE(329)
		while(((i < len))){
			HX_STACK_LINE(330)
			this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >()->_index = i;
			HX_STACK_LINE(331)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onSubGeometryRemoved,(void))

Void Mesh_obj::onSubGeometryAdded( ::away3d::events::GeometryEvent event){
{
		HX_STACK_PUSH("Mesh::onSubGeometryAdded","away3d/entities/Mesh.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(301)
		this->addSubMesh(event->get_subGeometry());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onSubGeometryAdded,(void))

::away3d::core::partition::EntityNode Mesh_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("Mesh::createEntityPartitionNode","away3d/entities/Mesh.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return ::away3d::core::partition::MeshNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


Void Mesh_obj::updateBounds( ){
{
		HX_STACK_PUSH("Mesh::updateBounds","away3d/entities/Mesh.hx",284);
		HX_STACK_THIS(this);
		HX_STACK_LINE(285)
		this->_bounds->fromGeometry(this->_geometry);
		HX_STACK_LINE(286)
		this->_boundsInvalid = false;
	}
return null();
}


::away3d::core::base::Object3D Mesh_obj::clone( ){
	HX_STACK_PUSH("Mesh::clone","away3d/entities/Mesh.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_LINE(251)
	::away3d::entities::Mesh clone = ::away3d::entities::Mesh_obj::__new(this->_geometry,this->_material);		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(252)
	clone->set_transform(this->get_transform());
	HX_STACK_LINE(253)
	clone->set_pivotPoint(this->get_pivotPoint());
	HX_STACK_LINE(254)
	clone->set_partition(this->get_partition());
	HX_STACK_LINE(255)
	clone->set_bounds(this->_bounds->clone());
	HX_STACK_LINE(256)
	clone->set_name(this->get_name());
	HX_STACK_LINE(257)
	clone->set_castsShadows(this->get_castsShadows());
	HX_STACK_LINE(258)
	clone->set_shareAnimationGeometry(this->get_shareAnimationGeometry());
	HX_STACK_LINE(259)
	clone->set_mouseEnabled(this->get_mouseEnabled());
	HX_STACK_LINE(260)
	clone->set_mouseChildren(this->get_mouseChildren());
	HX_STACK_LINE(263)
	clone->extra = this->extra;
	HX_STACK_LINE(264)
	int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(265)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(266)
	while(((i < len))){
		HX_STACK_LINE(267)
		clone->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >()->_material = this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >()->_material;
		HX_STACK_LINE(268)
		++(i);
	}
	HX_STACK_LINE(270)
	len = this->get_numChildren();
	HX_STACK_LINE(271)
	i = (int)0;
	HX_STACK_LINE(272)
	while(((i < len))){
		HX_STACK_LINE(273)
		clone->addChild(hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->getChildAt(i)->clone()));
		HX_STACK_LINE(274)
		++(i);
	}
	HX_STACK_LINE(276)
	if (((this->_animator != null()))){
		HX_STACK_LINE(276)
		clone->set_animator(this->_animator->clone());
	}
	HX_STACK_LINE(277)
	return clone;
}


Void Mesh_obj::disposeWithAnimatorAndChildren( ){
{
		HX_STACK_PUSH("Mesh::disposeWithAnimatorAndChildren","away3d/entities/Mesh.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_LINE(229)
		this->disposeWithChildren();
		HX_STACK_LINE(230)
		if (((this->_animator != null()))){
			HX_STACK_LINE(230)
			this->_animator->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,disposeWithAnimatorAndChildren,(void))

Void Mesh_obj::dispose( ){
{
		HX_STACK_PUSH("Mesh::dispose","away3d/entities/Mesh.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_LINE(218)
		this->super::dispose();
		HX_STACK_LINE(219)
		this->set_material(null());
		HX_STACK_LINE(220)
		this->set_geometry(null());
	}
return null();
}


Void Mesh_obj::clearAnimationGeometry( ){
{
		HX_STACK_PUSH("Mesh::clearAnimationGeometry","away3d/entities/Mesh.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(205)
		int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(206)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(207)
		while(((i < len))){
			HX_STACK_LINE(208)
			this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >()->animationSubGeometry = null();
			HX_STACK_LINE(209)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,clearAnimationGeometry,(void))

bool Mesh_obj::set_shareAnimationGeometry( bool value){
	HX_STACK_PUSH("Mesh::set_shareAnimationGeometry","away3d/entities/Mesh.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(196)
	this->_shareAnimationGeometry = value;
	HX_STACK_LINE(197)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_shareAnimationGeometry,return )

bool Mesh_obj::get_shareAnimationGeometry( ){
	HX_STACK_PUSH("Mesh::get_shareAnimationGeometry","away3d/entities/Mesh.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_LINE(191)
	return this->_shareAnimationGeometry;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_shareAnimationGeometry,return )

Array< ::Dynamic > Mesh_obj::get_subMeshes( ){
	HX_STACK_PUSH("Mesh::get_subMeshes","away3d/entities/Mesh.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	this->_geometry->validate();
	HX_STACK_LINE(184)
	return this->_subMeshes;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_subMeshes,return )

::away3d::materials::MaterialBase Mesh_obj::set_material( ::away3d::materials::MaterialBase value){
	HX_STACK_PUSH("Mesh::set_material","away3d/entities/Mesh.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(167)
	if (((value == this->_material))){
		HX_STACK_LINE(167)
		return value;
	}
	HX_STACK_LINE(168)
	if (((this->_material != null()))){
		HX_STACK_LINE(168)
		this->_material->removeOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(169)
	this->_material = value;
	HX_STACK_LINE(170)
	if (((this->_material != null()))){
		HX_STACK_LINE(170)
		this->_material->addOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(171)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_material,return )

::away3d::materials::MaterialBase Mesh_obj::get_material( ){
	HX_STACK_PUSH("Mesh::get_material","away3d/entities/Mesh.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return this->_material;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_material,return )

::away3d::core::base::Geometry Mesh_obj::set_geometry( ::away3d::core::base::Geometry value){
	HX_STACK_PUSH("Mesh::set_geometry","away3d/entities/Mesh.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(126)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(127)
	if (((this->_geometry != null()))){
		HX_STACK_LINE(128)
		this->_geometry->removeEventListener(::away3d::events::GeometryEvent_obj::BOUNDS_INVALID,this->onGeometryBoundsInvalid_dyn(),null());
		HX_STACK_LINE(129)
		this->_geometry->removeEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_ADDED,this->onSubGeometryAdded_dyn(),null());
		HX_STACK_LINE(130)
		this->_geometry->removeEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_REMOVED,this->onSubGeometryRemoved_dyn(),null());
		HX_STACK_LINE(131)
		i = (int)0;
		HX_STACK_LINE(132)
		while(((i < this->_subMeshes->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(133)
			this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >()->dispose();
			HX_STACK_LINE(134)
			++(i);
		}
		HX_STACK_LINE(136)
		(int)0;
	}
	HX_STACK_LINE(138)
	this->_geometry = value;
	HX_STACK_LINE(139)
	if (((this->_geometry != null()))){
		HX_STACK_LINE(140)
		this->_geometry->addEventListener(::away3d::events::GeometryEvent_obj::BOUNDS_INVALID,this->onGeometryBoundsInvalid_dyn(),null(),null(),null());
		HX_STACK_LINE(141)
		this->_geometry->addEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_ADDED,this->onSubGeometryAdded_dyn(),null(),null(),null());
		HX_STACK_LINE(142)
		this->_geometry->addEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_REMOVED,this->onSubGeometryRemoved_dyn(),null(),null(),null());
		HX_STACK_LINE(143)
		Array< ::Dynamic > subGeoms = this->_geometry->get_subGeometries();		HX_STACK_VAR(subGeoms,"subGeoms");
		HX_STACK_LINE(144)
		i = (int)0;
		HX_STACK_LINE(145)
		while(((i < subGeoms->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(146)
			this->addSubMesh(subGeoms->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >());
			HX_STACK_LINE(147)
			++(i);
		}
	}
	HX_STACK_LINE(150)
	if (((this->_material != null()))){
		HX_STACK_LINE(152)
		this->_material->removeOwner(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(153)
		this->_material->addOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(155)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_geometry,return )

::away3d::core::base::Geometry Mesh_obj::get_geometry( ){
	HX_STACK_PUSH("Mesh::get_geometry","away3d/entities/Mesh.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(121)
	return this->_geometry;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_geometry,return )

::away3d::animators::IAnimator Mesh_obj::set_animator( ::away3d::animators::IAnimator value){
	HX_STACK_PUSH("Mesh::set_animator","away3d/entities/Mesh.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(94)
	if (((this->_animator != null()))){
		HX_STACK_LINE(94)
		this->_animator->removeOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(95)
	this->_animator = value;
	HX_STACK_LINE(97)
	::away3d::materials::MaterialBase oldMaterial = this->get_material();		HX_STACK_VAR(oldMaterial,"oldMaterial");
	HX_STACK_LINE(98)
	this->set_material(null());
	HX_STACK_LINE(99)
	this->set_material(oldMaterial);
	HX_STACK_LINE(100)
	int len = this->_subMeshes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(101)
	::away3d::core::base::SubMesh subMesh;		HX_STACK_VAR(subMesh,"subMesh");
	HX_STACK_LINE(103)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(104)
	while(((i < len))){
		HX_STACK_LINE(105)
		subMesh = this->_subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >();
		HX_STACK_LINE(106)
		oldMaterial = subMesh->_material;
		HX_STACK_LINE(107)
		if (((oldMaterial != null()))){
			HX_STACK_LINE(108)
			subMesh->set_material(null());
			HX_STACK_LINE(109)
			subMesh->set_material(oldMaterial);
		}
		HX_STACK_LINE(111)
		++(i);
	}
	HX_STACK_LINE(113)
	if (((this->_animator != null()))){
		HX_STACK_LINE(113)
		this->_animator->addOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_animator,return )

::away3d::animators::IAnimator Mesh_obj::get_animator( ){
	HX_STACK_PUSH("Mesh::get_animator","away3d/entities/Mesh.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->_animator;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_animator,return )

bool Mesh_obj::set_castsShadows( bool value){
	HX_STACK_PUSH("Mesh::set_castsShadows","away3d/entities/Mesh.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(81)
	this->_castsShadows = value;
	HX_STACK_LINE(82)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,set_castsShadows,return )

bool Mesh_obj::get_castsShadows( ){
	HX_STACK_PUSH("Mesh::get_castsShadows","away3d/entities/Mesh.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->_castsShadows;
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,get_castsShadows,return )

Void Mesh_obj::onGeometryBoundsInvalid( ::away3d::events::GeometryEvent event){
{
		HX_STACK_PUSH("Mesh::onGeometryBoundsInvalid","away3d/entities/Mesh.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(68)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mesh_obj,onGeometryBoundsInvalid,(void))

::String Mesh_obj::get_assetType( ){
	HX_STACK_PUSH("Mesh::get_assetType","away3d/entities/Mesh.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return ::away3d::library::assets::AssetType_obj::MESH;
}


Void Mesh_obj::bakeTransformations( ){
{
		HX_STACK_PUSH("Mesh::bakeTransformations","away3d/entities/Mesh.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		this->get_geometry()->applyTransformation(this->get_transform());
		HX_STACK_LINE(61)
		this->get_transform()->identity();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mesh_obj,bakeTransformations,(void))


Mesh_obj::Mesh_obj()
{
}

void Mesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mesh);
	HX_MARK_MEMBER_NAME(_shareAnimationGeometry,"_shareAnimationGeometry");
	HX_MARK_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	HX_MARK_MEMBER_NAME(_subMeshes,"_subMeshes");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shareAnimationGeometry,"_shareAnimationGeometry");
	HX_VISIT_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	HX_VISIT_MEMBER_NAME(_subMeshes,"_subMeshes");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Mesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		if (HX_FIELD_EQ(inName,"geometry") ) { return get_geometry(); }
		if (HX_FIELD_EQ(inName,"animator") ) { return get_animator(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { return _animator; }
		if (HX_FIELD_EQ(inName,"_material") ) { return _material; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return _geometry; }
		if (HX_FIELD_EQ(inName,"subMeshes") ) { return get_subMeshes(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addSubMesh") ) { return addSubMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"_subMeshes") ) { return _subMeshes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_geometry") ) { return get_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"set_animator") ) { return set_animator_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return get_animator_dyn(); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return get_castsShadows(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_subMeshes") ) { return get_subMeshes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { return _castsShadows; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidesBefore") ) { return collidesBefore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_castsShadows") ) { return set_castsShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return get_castsShadows_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onSubGeometryAdded") ) { return onSubGeometryAdded_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bakeTransformations") ) { return bakeTransformations_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onSubGeometryRemoved") ) { return onSubGeometryRemoved_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"clearAnimationGeometry") ) { return clearAnimationGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"shareAnimationGeometry") ) { return get_shareAnimationGeometry(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onGeometryBoundsInvalid") ) { return onGeometryBoundsInvalid_dyn(); }
		if (HX_FIELD_EQ(inName,"_shareAnimationGeometry") ) { return _shareAnimationGeometry; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getSubMeshForSubGeometry") ) { return getSubMeshForSubGeometry_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"set_shareAnimationGeometry") ) { return set_shareAnimationGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shareAnimationGeometry") ) { return get_shareAnimationGeometry_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"disposeWithAnimatorAndChildren") ) { return disposeWithAnimatorAndChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		if (HX_FIELD_EQ(inName,"geometry") ) { return set_geometry(inValue); }
		if (HX_FIELD_EQ(inName,"animator") ) { return set_animator(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::away3d::animators::IAnimator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast< ::away3d::core::base::Geometry >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_subMeshes") ) { _subMeshes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return set_castsShadows(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { _castsShadows=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"shareAnimationGeometry") ) { return set_shareAnimationGeometry(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_shareAnimationGeometry") ) { _shareAnimationGeometry=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shareAnimationGeometry"));
	outFields->push(HX_CSTRING("_castsShadows"));
	outFields->push(HX_CSTRING("_animator"));
	outFields->push(HX_CSTRING("_material"));
	outFields->push(HX_CSTRING("_geometry"));
	outFields->push(HX_CSTRING("_subMeshes"));
	outFields->push(HX_CSTRING("shareAnimationGeometry"));
	outFields->push(HX_CSTRING("subMeshes"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("geometry"));
	outFields->push(HX_CSTRING("animator"));
	outFields->push(HX_CSTRING("castsShadows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("collidesBefore"),
	HX_CSTRING("getSubMeshForSubGeometry"),
	HX_CSTRING("addSubMesh"),
	HX_CSTRING("onSubGeometryRemoved"),
	HX_CSTRING("onSubGeometryAdded"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("clone"),
	HX_CSTRING("disposeWithAnimatorAndChildren"),
	HX_CSTRING("dispose"),
	HX_CSTRING("clearAnimationGeometry"),
	HX_CSTRING("set_shareAnimationGeometry"),
	HX_CSTRING("get_shareAnimationGeometry"),
	HX_CSTRING("get_subMeshes"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	HX_CSTRING("set_geometry"),
	HX_CSTRING("get_geometry"),
	HX_CSTRING("set_animator"),
	HX_CSTRING("get_animator"),
	HX_CSTRING("set_castsShadows"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("onGeometryBoundsInvalid"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("bakeTransformations"),
	HX_CSTRING("_shareAnimationGeometry"),
	HX_CSTRING("_castsShadows"),
	HX_CSTRING("_animator"),
	HX_CSTRING("_material"),
	HX_CSTRING("_geometry"),
	HX_CSTRING("_subMeshes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mesh_obj::__mClass,"__mClass");
};

Class Mesh_obj::__mClass;

void Mesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.entities.Mesh"), hx::TCanCast< Mesh_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mesh_obj::__boot()
{
}

} // end namespace away3d
} // end namespace entities
