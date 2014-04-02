#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
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
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#include <away3d/core/data/EntityListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
namespace core{
namespace traverse{

Void EntityCollector_obj::__construct()
{
HX_STACK_PUSH("EntityCollector::new","away3d/core/traverse/EntityCollector.hx",68);
{
	HX_STACK_LINE(69)
	super::__construct();
	HX_STACK_LINE(70)
	this->init();
}
;
	return null();
}

EntityCollector_obj::~EntityCollector_obj() { }

Dynamic EntityCollector_obj::__CreateEmpty() { return  new EntityCollector_obj; }
hx::ObjectPtr< EntityCollector_obj > EntityCollector_obj::__new()
{  hx::ObjectPtr< EntityCollector_obj > result = new EntityCollector_obj();
	result->__construct();
	return result;}

Dynamic EntityCollector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityCollector_obj > result = new EntityCollector_obj();
	result->__construct();
	return result;}

Void EntityCollector_obj::cleanUp( ){
{
		HX_STACK_PUSH("EntityCollector::cleanUp","away3d/core/traverse/EntityCollector.hx",317);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,cleanUp,(void))

int EntityCollector_obj::get_numTriangles( ){
	HX_STACK_PUSH("EntityCollector::get_numTriangles","away3d/core/traverse/EntityCollector.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->_numTriangles;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_numTriangles,return )

Void EntityCollector_obj::applyLightProbe( ::away3d::lights::LightProbe light){
{
		HX_STACK_PUSH("EntityCollector::applyLightProbe","away3d/core/traverse/EntityCollector.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(301)
		this->_lights[(this->_numLights)++] = light;
		HX_STACK_LINE(302)
		this->_lightProbes[(this->_numLightProbes)++] = light;
	}
return null();
}


Void EntityCollector_obj::applyPointLight( ::away3d::lights::PointLight light){
{
		HX_STACK_PUSH("EntityCollector::applyPointLight","away3d/core/traverse/EntityCollector.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(296)
		this->_lights[(this->_numLights)++] = light;
		HX_STACK_LINE(297)
		this->_pointLights[(this->_numPointLights)++] = light;
	}
return null();
}


Void EntityCollector_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
{
		HX_STACK_PUSH("EntityCollector::applyDirectionalLight","away3d/core/traverse/EntityCollector.hx",290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(291)
		this->_lights[(this->_numLights)++] = light;
		HX_STACK_LINE(292)
		this->_directionalLights[(this->_numDirectionalLights)++] = light;
	}
return null();
}


Void EntityCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
{
		HX_STACK_PUSH("EntityCollector::applyUnknownLight","away3d/core/traverse/EntityCollector.hx",286);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(286)
		this->_lights[(this->_numLights)++] = light;
	}
return null();
}


Void EntityCollector_obj::applyEntity( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("EntityCollector::applyEntity","away3d/core/traverse/EntityCollector.hx",272);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(273)
		++(this->_numEntities);
		HX_STACK_LINE(274)
		::away3d::core::data::EntityListItem item = this->_entityListItemPool->getItem();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(276)
		item->entity = entity;
		HX_STACK_LINE(277)
		item->next = this->_entityHead;
		HX_STACK_LINE(278)
		this->_entityHead = item;
	}
return null();
}


Void EntityCollector_obj::applyRenderable( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("EntityCollector::applyRenderable","away3d/core/traverse/EntityCollector.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(237)
		::away3d::materials::MaterialBase material;		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(238)
		::away3d::entities::Entity entity = renderable->get_sourceEntity();		HX_STACK_VAR(entity,"entity");
		HX_STACK_LINE(239)
		if ((renderable->get_mouseEnabled())){
			HX_STACK_LINE(239)
			++(this->_numMouseEnableds);
		}
		HX_STACK_LINE(240)
		hx::AddEq(this->_numTriangles,renderable->get_numTriangles());
		HX_STACK_LINE(241)
		material = renderable->__Field(HX_CSTRING("get_material"),true)();
		HX_STACK_LINE(243)
		if (((material != null()))){
			HX_STACK_LINE(244)
			::away3d::core::data::RenderableListItem item = this->_renderableListItemPool->getItem();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(245)
			item->renderable = renderable;
			HX_STACK_LINE(246)
			item->materialId = material->_uniqueId;
			HX_STACK_LINE(247)
			item->renderOrderId = material->_renderOrderId;
			HX_STACK_LINE(248)
			item->cascaded = false;
			HX_STACK_LINE(249)
			Float dx = (this->_entryPoint->x - entity->get_x());		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(250)
			Float dy = (this->_entryPoint->y - entity->get_y());		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(251)
			Float dz = (this->_entryPoint->z - entity->get_z());		HX_STACK_VAR(dz,"dz");
			HX_STACK_LINE(253)
			item->zIndex = ((((dx * this->_cameraForward->x) + (dy * this->_cameraForward->y)) + (dz * this->_cameraForward->z)) + entity->get_zOffset());
			HX_STACK_LINE(254)
			item->renderSceneTransform = renderable->getRenderSceneTransform(this->_camera);
			HX_STACK_LINE(255)
			if ((material->get_requiresBlending())){
				HX_STACK_LINE(256)
				item->next = this->_blendedRenderableHead;
				HX_STACK_LINE(257)
				this->_blendedRenderableHead = item;
			}
			else{
				HX_STACK_LINE(261)
				item->next = this->_opaqueRenderableHead;
				HX_STACK_LINE(262)
				this->_opaqueRenderableHead = item;
			}
		}
	}
return null();
}


Void EntityCollector_obj::applySkyBox( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("EntityCollector::applySkyBox","away3d/core/traverse/EntityCollector.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(227)
		this->_skyBox = renderable;
	}
return null();
}


bool EntityCollector_obj::enterNode( ::away3d::core::partition::NodeBase node){
	HX_STACK_PUSH("EntityCollector::enterNode","away3d/core/traverse/EntityCollector.hx",215);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_LINE(217)
	bool enter = (bool((::away3d::core::traverse::PartitionTraverser_obj::_collectionMark != node->_collectionMark)) && bool(node->isInFrustum(this->_cullPlanes,this->_numCullPlanes)));		HX_STACK_VAR(enter,"enter");
	HX_STACK_LINE(218)
	node->_collectionMark = ::away3d::core::traverse::PartitionTraverser_obj::_collectionMark;
	HX_STACK_LINE(219)
	return enter;
}


Void EntityCollector_obj::clear( ){
{
		HX_STACK_PUSH("EntityCollector::clear","away3d/core/traverse/EntityCollector.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_LINE(190)
		if (((this->_camera != null()))){
			HX_STACK_LINE(191)
			this->_entryPoint = this->_camera->get_scenePosition();
			HX_STACK_LINE(192)
			this->_cameraForward = this->_camera->get_forwardVector();
		}
		HX_STACK_LINE(194)
		this->_cullPlanes = (  (((this->_customCullPlanes != null()))) ? Array< ::Dynamic >(this->_customCullPlanes) : Array< ::Dynamic >((  (((this->_camera != null()))) ? Array< ::Dynamic >(this->_camera->get_frustumPlanes()) : Array< ::Dynamic >(null()) )) );
		HX_STACK_LINE(195)
		this->_numCullPlanes = (  (((this->_cullPlanes != null()))) ? int(this->_cullPlanes->__Field(HX_CSTRING("length"),true)) : int((int)0) );
		HX_STACK_LINE(196)
		this->_numTriangles = this->_numMouseEnableds = (int)0;
		HX_STACK_LINE(197)
		this->_blendedRenderableHead = null();
		HX_STACK_LINE(198)
		this->_opaqueRenderableHead = null();
		HX_STACK_LINE(199)
		this->_entityHead = null();
		HX_STACK_LINE(200)
		this->_renderableListItemPool->freeAll();
		HX_STACK_LINE(201)
		this->_entityListItemPool->freeAll();
		HX_STACK_LINE(202)
		this->_skyBox = null();
		HX_STACK_LINE(203)
		if (((this->_numLights > (int)0))){
			HX_STACK_LINE(203)
			this->_numLights = (int)0;
		}
		HX_STACK_LINE(204)
		if (((this->_numDirectionalLights > (int)0))){
			HX_STACK_LINE(204)
			this->_numDirectionalLights = (int)0;
		}
		HX_STACK_LINE(205)
		if (((this->_numPointLights > (int)0))){
			HX_STACK_LINE(205)
			this->_numPointLights = (int)0;
		}
		HX_STACK_LINE(206)
		if (((this->_numLightProbes > (int)0))){
			HX_STACK_LINE(206)
			this->_numLightProbes = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,clear,(void))

Array< ::Dynamic > EntityCollector_obj::get_lightProbes( ){
	HX_STACK_PUSH("EntityCollector::get_lightProbes","away3d/core/traverse/EntityCollector.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_LINE(181)
	return this->_lightProbes;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_lightProbes,return )

Array< ::Dynamic > EntityCollector_obj::get_pointLights( ){
	HX_STACK_PUSH("EntityCollector::get_pointLights","away3d/core/traverse/EntityCollector.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return this->_pointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_pointLights,return )

Array< ::Dynamic > EntityCollector_obj::get_directionalLights( ){
	HX_STACK_PUSH("EntityCollector::get_directionalLights","away3d/core/traverse/EntityCollector.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_LINE(173)
	return this->_directionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_directionalLights,return )

Array< ::Dynamic > EntityCollector_obj::get_lights( ){
	HX_STACK_PUSH("EntityCollector::get_lights","away3d/core/traverse/EntityCollector.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return this->_lights;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_lights,return )

::away3d::core::data::EntityListItem EntityCollector_obj::get_entityHead( ){
	HX_STACK_PUSH("EntityCollector::get_entityHead","away3d/core/traverse/EntityCollector.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(161)
	return this->_entityHead;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_entityHead,return )

::away3d::core::data::RenderableListItem EntityCollector_obj::set_blendedRenderableHead( ::away3d::core::data::RenderableListItem value){
	HX_STACK_PUSH("EntityCollector::set_blendedRenderableHead","away3d/core/traverse/EntityCollector.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(157)
	this->_blendedRenderableHead = value;
	HX_STACK_LINE(158)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_blendedRenderableHead,return )

::away3d::core::data::RenderableListItem EntityCollector_obj::get_blendedRenderableHead( ){
	HX_STACK_PUSH("EntityCollector::get_blendedRenderableHead","away3d/core/traverse/EntityCollector.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return this->_blendedRenderableHead;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_blendedRenderableHead,return )

::away3d::core::data::RenderableListItem EntityCollector_obj::set_opaqueRenderableHead( ::away3d::core::data::RenderableListItem value){
	HX_STACK_PUSH("EntityCollector::set_opaqueRenderableHead","away3d/core/traverse/EntityCollector.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(143)
	this->_opaqueRenderableHead = value;
	HX_STACK_LINE(144)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_opaqueRenderableHead,return )

::away3d::core::data::RenderableListItem EntityCollector_obj::get_opaqueRenderableHead( ){
	HX_STACK_PUSH("EntityCollector::get_opaqueRenderableHead","away3d/core/traverse/EntityCollector.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_LINE(138)
	return this->_opaqueRenderableHead;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_opaqueRenderableHead,return )

::away3d::core::base::IRenderable EntityCollector_obj::get_skyBox( ){
	HX_STACK_PUSH("EntityCollector::get_skyBox","away3d/core/traverse/EntityCollector.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(129)
	return this->_skyBox;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_skyBox,return )

int EntityCollector_obj::get_numMouseEnableds( ){
	HX_STACK_PUSH("EntityCollector::get_numMouseEnableds","away3d/core/traverse/EntityCollector.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(121)
	return this->_numMouseEnableds;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_numMouseEnableds,return )

Array< ::Dynamic > EntityCollector_obj::set_cullPlanes( Array< ::Dynamic > value){
	HX_STACK_PUSH("EntityCollector::set_cullPlanes","away3d/core/traverse/EntityCollector.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(113)
	this->_customCullPlanes = value;
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_cullPlanes,return )

Array< ::Dynamic > EntityCollector_obj::get_cullPlanes( ){
	HX_STACK_PUSH("EntityCollector::get_cullPlanes","away3d/core/traverse/EntityCollector.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	return this->_customCullPlanes;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_cullPlanes,return )

::away3d::cameras::Camera3D EntityCollector_obj::set_camera( ::away3d::cameras::Camera3D value){
	HX_STACK_PUSH("EntityCollector::set_camera","away3d/core/traverse/EntityCollector.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(100)
	this->_camera = value;
	HX_STACK_LINE(101)
	this->_entryPoint = this->_camera->get_scenePosition();
	HX_STACK_LINE(102)
	this->_cameraForward = this->_camera->get_forwardVector();
	HX_STACK_LINE(103)
	this->_cullPlanes = this->_camera->get_frustumPlanes();
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_camera,return )

::away3d::cameras::Camera3D EntityCollector_obj::get_camera( ){
	HX_STACK_PUSH("EntityCollector::get_camera","away3d/core/traverse/EntityCollector.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->_camera;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_camera,return )

Void EntityCollector_obj::init( ){
{
		HX_STACK_PUSH("EntityCollector::init","away3d/core/traverse/EntityCollector.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_LINE(75)
		this->_lights = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(76)
		this->_directionalLights = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(77)
		this->_pointLights = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(78)
		this->_lightProbes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(79)
		this->_renderableListItemPool = ::away3d::core::data::RenderableListItemPool_obj::__new();
		HX_STACK_LINE(80)
		this->_entityListItemPool = ::away3d::core::data::EntityListItemPool_obj::__new();
		HX_STACK_LINE(81)
		this->_numEntities = (int)0;
		HX_STACK_LINE(82)
		this->_numLights = (int)0;
		HX_STACK_LINE(83)
		this->_numTriangles = (int)0;
		HX_STACK_LINE(84)
		this->_numMouseEnableds = (int)0;
		HX_STACK_LINE(85)
		this->_numDirectionalLights = (int)0;
		HX_STACK_LINE(86)
		this->_numPointLights = (int)0;
		HX_STACK_LINE(87)
		this->_numLightProbes = (int)0;
		HX_STACK_LINE(88)
		this->_numCullPlanes = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,init,(void))


EntityCollector_obj::EntityCollector_obj()
{
}

void EntityCollector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityCollector);
	HX_MARK_MEMBER_NAME(_numCullPlanes,"_numCullPlanes");
	HX_MARK_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_MARK_MEMBER_NAME(_customCullPlanes,"_customCullPlanes");
	HX_MARK_MEMBER_NAME(_cameraForward,"_cameraForward");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_numMouseEnableds,"_numMouseEnableds");
	HX_MARK_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_MARK_MEMBER_NAME(_numLights,"_numLights");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_MARK_MEMBER_NAME(_pointLights,"_pointLights");
	HX_MARK_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_MARK_MEMBER_NAME(_lights,"_lights");
	HX_MARK_MEMBER_NAME(_entityListItemPool,"_entityListItemPool");
	HX_MARK_MEMBER_NAME(_renderableListItemPool,"_renderableListItemPool");
	HX_MARK_MEMBER_NAME(_entityHead,"_entityHead");
	HX_MARK_MEMBER_NAME(_blendedRenderableHead,"_blendedRenderableHead");
	HX_MARK_MEMBER_NAME(_opaqueRenderableHead,"_opaqueRenderableHead");
	HX_MARK_MEMBER_NAME(_skyBox,"_skyBox");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EntityCollector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numCullPlanes,"_numCullPlanes");
	HX_VISIT_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_VISIT_MEMBER_NAME(_customCullPlanes,"_customCullPlanes");
	HX_VISIT_MEMBER_NAME(_cameraForward,"_cameraForward");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_numMouseEnableds,"_numMouseEnableds");
	HX_VISIT_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_VISIT_MEMBER_NAME(_numLights,"_numLights");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_VISIT_MEMBER_NAME(_pointLights,"_pointLights");
	HX_VISIT_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_VISIT_MEMBER_NAME(_lights,"_lights");
	HX_VISIT_MEMBER_NAME(_entityListItemPool,"_entityListItemPool");
	HX_VISIT_MEMBER_NAME(_renderableListItemPool,"_renderableListItemPool");
	HX_VISIT_MEMBER_NAME(_entityHead,"_entityHead");
	HX_VISIT_MEMBER_NAME(_blendedRenderableHead,"_blendedRenderableHead");
	HX_VISIT_MEMBER_NAME(_opaqueRenderableHead,"_opaqueRenderableHead");
	HX_VISIT_MEMBER_NAME(_skyBox,"_skyBox");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EntityCollector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lights") ) { return get_lights(); }
		if (HX_FIELD_EQ(inName,"skyBox") ) { return get_skyBox(); }
		if (HX_FIELD_EQ(inName,"camera") ) { return get_camera(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanUp") ) { return cleanUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_lights") ) { return _lights; }
		if (HX_FIELD_EQ(inName,"_skyBox") ) { return _skyBox; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return enterNode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_lights") ) { return get_lights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_skyBox") ) { return get_skyBox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { return _numLights; }
		if (HX_FIELD_EQ(inName,"entityHead") ) { return get_entityHead(); }
		if (HX_FIELD_EQ(inName,"cullPlanes") ) { return get_cullPlanes(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyEntity") ) { return applyEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return applySkyBox_dyn(); }
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { return _cullPlanes; }
		if (HX_FIELD_EQ(inName,"_entityHead") ) { return _entityHead; }
		if (HX_FIELD_EQ(inName,"lightProbes") ) { return get_lightProbes(); }
		if (HX_FIELD_EQ(inName,"pointLights") ) { return get_pointLights(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return _numEntities; }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { return _lightProbes; }
		if (HX_FIELD_EQ(inName,"_pointLights") ) { return _pointLights; }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { return _numTriangles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_entityHead") ) { return get_entityHead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cullPlanes") ) { return set_cullPlanes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cullPlanes") ) { return get_cullPlanes_dyn(); }
		if (HX_FIELD_EQ(inName,"_numCullPlanes") ) { return _numCullPlanes; }
		if (HX_FIELD_EQ(inName,"_cameraForward") ) { return _cameraForward; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return applyLightProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return applyPointLight_dyn(); }
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return applyRenderable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lightProbes") ) { return get_lightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pointLights") ) { return get_pointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return _numLightProbes; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return _numPointLights; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"numMouseEnableds") ) { return get_numMouseEnableds(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return applyUnknownLight_dyn(); }
		if (HX_FIELD_EQ(inName,"_customCullPlanes") ) { return _customCullPlanes; }
		if (HX_FIELD_EQ(inName,"_numMouseEnableds") ) { return _numMouseEnableds; }
		if (HX_FIELD_EQ(inName,"directionalLights") ) { return get_directionalLights(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { return _directionalLights; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_entityListItemPool") ) { return _entityListItemPool; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_numMouseEnableds") ) { return get_numMouseEnableds_dyn(); }
		if (HX_FIELD_EQ(inName,"opaqueRenderableHead") ) { return get_opaqueRenderableHead(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return applyDirectionalLight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_directionalLights") ) { return get_directionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return _numDirectionalLights; }
		if (HX_FIELD_EQ(inName,"_opaqueRenderableHead") ) { return _opaqueRenderableHead; }
		if (HX_FIELD_EQ(inName,"blendedRenderableHead") ) { return get_blendedRenderableHead(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_blendedRenderableHead") ) { return _blendedRenderableHead; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_renderableListItemPool") ) { return _renderableListItemPool; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_opaqueRenderableHead") ) { return set_opaqueRenderableHead_dyn(); }
		if (HX_FIELD_EQ(inName,"get_opaqueRenderableHead") ) { return get_opaqueRenderableHead_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_blendedRenderableHead") ) { return set_blendedRenderableHead_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendedRenderableHead") ) { return get_blendedRenderableHead_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntityCollector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return set_camera(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::away3d::cameras::Camera3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lights") ) { _lights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skyBox") ) { _skyBox=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numLights") ) { _numLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cullPlanes") ) { return set_cullPlanes(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { _cullPlanes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entityHead") ) { _entityHead=inValue.Cast< ::away3d::core::data::EntityListItem >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { _lightProbes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointLights") ) { _pointLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { _numTriangles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_numCullPlanes") ) { _numCullPlanes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraForward") ) { _cameraForward=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_customCullPlanes") ) { _customCullPlanes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numMouseEnableds") ) { _numMouseEnableds=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { _directionalLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_entityListItemPool") ) { _entityListItemPool=inValue.Cast< ::away3d::core::data::EntityListItemPool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"opaqueRenderableHead") ) { return set_opaqueRenderableHead(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opaqueRenderableHead") ) { _opaqueRenderableHead=inValue.Cast< ::away3d::core::data::RenderableListItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendedRenderableHead") ) { return set_blendedRenderableHead(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_blendedRenderableHead") ) { _blendedRenderableHead=inValue.Cast< ::away3d::core::data::RenderableListItem >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_renderableListItemPool") ) { _renderableListItemPool=inValue.Cast< ::away3d::core::data::RenderableListItemPool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityCollector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numCullPlanes"));
	outFields->push(HX_CSTRING("_cullPlanes"));
	outFields->push(HX_CSTRING("_customCullPlanes"));
	outFields->push(HX_CSTRING("_cameraForward"));
	outFields->push(HX_CSTRING("_numLightProbes"));
	outFields->push(HX_CSTRING("_numPointLights"));
	outFields->push(HX_CSTRING("_numDirectionalLights"));
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_numMouseEnableds"));
	outFields->push(HX_CSTRING("_numTriangles"));
	outFields->push(HX_CSTRING("_numLights"));
	outFields->push(HX_CSTRING("_numEntities"));
	outFields->push(HX_CSTRING("_lightProbes"));
	outFields->push(HX_CSTRING("_pointLights"));
	outFields->push(HX_CSTRING("_directionalLights"));
	outFields->push(HX_CSTRING("_lights"));
	outFields->push(HX_CSTRING("_entityListItemPool"));
	outFields->push(HX_CSTRING("_renderableListItemPool"));
	outFields->push(HX_CSTRING("_entityHead"));
	outFields->push(HX_CSTRING("_blendedRenderableHead"));
	outFields->push(HX_CSTRING("_opaqueRenderableHead"));
	outFields->push(HX_CSTRING("_skyBox"));
	outFields->push(HX_CSTRING("numTriangles"));
	outFields->push(HX_CSTRING("lightProbes"));
	outFields->push(HX_CSTRING("pointLights"));
	outFields->push(HX_CSTRING("directionalLights"));
	outFields->push(HX_CSTRING("lights"));
	outFields->push(HX_CSTRING("entityHead"));
	outFields->push(HX_CSTRING("blendedRenderableHead"));
	outFields->push(HX_CSTRING("opaqueRenderableHead"));
	outFields->push(HX_CSTRING("skyBox"));
	outFields->push(HX_CSTRING("numMouseEnableds"));
	outFields->push(HX_CSTRING("cullPlanes"));
	outFields->push(HX_CSTRING("camera"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanUp"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("applyLightProbe"),
	HX_CSTRING("applyPointLight"),
	HX_CSTRING("applyDirectionalLight"),
	HX_CSTRING("applyUnknownLight"),
	HX_CSTRING("applyEntity"),
	HX_CSTRING("applyRenderable"),
	HX_CSTRING("applySkyBox"),
	HX_CSTRING("enterNode"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_lightProbes"),
	HX_CSTRING("get_pointLights"),
	HX_CSTRING("get_directionalLights"),
	HX_CSTRING("get_lights"),
	HX_CSTRING("get_entityHead"),
	HX_CSTRING("set_blendedRenderableHead"),
	HX_CSTRING("get_blendedRenderableHead"),
	HX_CSTRING("set_opaqueRenderableHead"),
	HX_CSTRING("get_opaqueRenderableHead"),
	HX_CSTRING("get_skyBox"),
	HX_CSTRING("get_numMouseEnableds"),
	HX_CSTRING("set_cullPlanes"),
	HX_CSTRING("get_cullPlanes"),
	HX_CSTRING("set_camera"),
	HX_CSTRING("get_camera"),
	HX_CSTRING("init"),
	HX_CSTRING("_numCullPlanes"),
	HX_CSTRING("_cullPlanes"),
	HX_CSTRING("_customCullPlanes"),
	HX_CSTRING("_cameraForward"),
	HX_CSTRING("_numLightProbes"),
	HX_CSTRING("_numPointLights"),
	HX_CSTRING("_numDirectionalLights"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_numMouseEnableds"),
	HX_CSTRING("_numTriangles"),
	HX_CSTRING("_numLights"),
	HX_CSTRING("_numEntities"),
	HX_CSTRING("_lightProbes"),
	HX_CSTRING("_pointLights"),
	HX_CSTRING("_directionalLights"),
	HX_CSTRING("_lights"),
	HX_CSTRING("_entityListItemPool"),
	HX_CSTRING("_renderableListItemPool"),
	HX_CSTRING("_entityHead"),
	HX_CSTRING("_blendedRenderableHead"),
	HX_CSTRING("_opaqueRenderableHead"),
	HX_CSTRING("_skyBox"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityCollector_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityCollector_obj::__mClass,"__mClass");
};

Class EntityCollector_obj::__mClass;

void EntityCollector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.traverse.EntityCollector"), hx::TCanCast< EntityCollector_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EntityCollector_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
