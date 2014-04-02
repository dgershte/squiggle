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
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#include <away3d/core/traverse/ShadowCasterCollector.h>
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

Void ShadowCasterCollector_obj::__construct()
{
HX_STACK_PUSH("ShadowCasterCollector::new","away3d/core/traverse/ShadowCasterCollector.hx",25);
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

ShadowCasterCollector_obj::~ShadowCasterCollector_obj() { }

Dynamic ShadowCasterCollector_obj::__CreateEmpty() { return  new ShadowCasterCollector_obj; }
hx::ObjectPtr< ShadowCasterCollector_obj > ShadowCasterCollector_obj::__new()
{  hx::ObjectPtr< ShadowCasterCollector_obj > result = new ShadowCasterCollector_obj();
	result->__construct();
	return result;}

Dynamic ShadowCasterCollector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadowCasterCollector_obj > result = new ShadowCasterCollector_obj();
	result->__construct();
	return result;}

Void ShadowCasterCollector_obj::applySkyBox( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("ShadowCasterCollector::applySkyBox","away3d/core/traverse/ShadowCasterCollector.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
	}
return null();
}


Void ShadowCasterCollector_obj::applyLightProbe( ::away3d::lights::LightProbe light){
{
		HX_STACK_PUSH("ShadowCasterCollector::applyLightProbe","away3d/core/traverse/ShadowCasterCollector.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
	}
return null();
}


Void ShadowCasterCollector_obj::applyPointLight( ::away3d::lights::PointLight light){
{
		HX_STACK_PUSH("ShadowCasterCollector::applyPointLight","away3d/core/traverse/ShadowCasterCollector.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
	}
return null();
}


Void ShadowCasterCollector_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
{
		HX_STACK_PUSH("ShadowCasterCollector::applyDirectionalLight","away3d/core/traverse/ShadowCasterCollector.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
	}
return null();
}


Void ShadowCasterCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
{
		HX_STACK_PUSH("ShadowCasterCollector::applyUnknownLight","away3d/core/traverse/ShadowCasterCollector.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
	}
return null();
}


Void ShadowCasterCollector_obj::applyRenderable( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("ShadowCasterCollector::applyRenderable","away3d/core/traverse/ShadowCasterCollector.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(36)
		::away3d::materials::MaterialBase material = renderable->__Field(HX_CSTRING("get_material"),true)();		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(37)
		::away3d::entities::Entity entity = renderable->get_sourceEntity();		HX_STACK_VAR(entity,"entity");
		HX_STACK_LINE(38)
		if (((bool(renderable->get_castsShadows()) && bool((material != null()))))){
			HX_STACK_LINE(39)
			::away3d::core::data::RenderableListItem item = this->_renderableListItemPool->getItem();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(40)
			item->renderable = renderable;
			HX_STACK_LINE(41)
			item->next = this->_opaqueRenderableHead;
			HX_STACK_LINE(42)
			item->cascaded = false;
			HX_STACK_LINE(43)
			Float dx = (this->_entryPoint->x - entity->get_x());		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(44)
			Float dy = (this->_entryPoint->y - entity->get_y());		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(45)
			Float dz = (this->_entryPoint->z - entity->get_z());		HX_STACK_VAR(dz,"dz");
			HX_STACK_LINE(46)
			item->zIndex = (((dx * this->_cameraForward->x) + (dy * this->_cameraForward->y)) + (dz * this->_cameraForward->z));
			HX_STACK_LINE(47)
			item->renderSceneTransform = renderable->getRenderSceneTransform(this->_camera);
			HX_STACK_LINE(48)
			item->renderOrderId = material->_depthPassId;
			HX_STACK_LINE(49)
			this->_opaqueRenderableHead = item;
		}
	}
return null();
}



ShadowCasterCollector_obj::ShadowCasterCollector_obj()
{
}

void ShadowCasterCollector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowCasterCollector);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadowCasterCollector_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShadowCasterCollector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return applySkyBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return applyLightProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return applyPointLight_dyn(); }
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return applyRenderable_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return applyUnknownLight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return applyDirectionalLight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadowCasterCollector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowCasterCollector_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("applySkyBox"),
	HX_CSTRING("applyLightProbe"),
	HX_CSTRING("applyPointLight"),
	HX_CSTRING("applyDirectionalLight"),
	HX_CSTRING("applyUnknownLight"),
	HX_CSTRING("applyRenderable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadowCasterCollector_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadowCasterCollector_obj::__mClass,"__mClass");
};

Class ShadowCasterCollector_obj::__mClass;

void ShadowCasterCollector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.traverse.ShadowCasterCollector"), hx::TCanCast< ShadowCasterCollector_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShadowCasterCollector_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
