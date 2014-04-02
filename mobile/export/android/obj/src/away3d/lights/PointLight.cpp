#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingSphere
#include <away3d/bounds/BoundingSphere.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_PointLightNode
#include <away3d/core/partition/PointLightNode.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper
#include <away3d/lights/shadowmaps/CubeMapShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace lights{

Void PointLight_obj::__construct()
{
HX_STACK_PUSH("PointLight::new","away3d/lights/PointLight.hx",30);
{
	HX_STACK_LINE(31)
	this->_radius = (int)90000;
	HX_STACK_LINE(32)
	this->_fallOff = (int)100000;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->_fallOffFactor = (Float((int)1) / Float((((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)))));
}
;
	return null();
}

PointLight_obj::~PointLight_obj() { }

Dynamic PointLight_obj::__CreateEmpty() { return  new PointLight_obj; }
hx::ObjectPtr< PointLight_obj > PointLight_obj::__new()
{  hx::ObjectPtr< PointLight_obj > result = new PointLight_obj();
	result->__construct();
	return result;}

Dynamic PointLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointLight_obj > result = new PointLight_obj();
	result->__construct();
	return result;}

::flash::geom::Matrix3D PointLight_obj::getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target){
	HX_STACK_PUSH("PointLight::getObjectProjectionMatrix","away3d/lights/PointLight.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(109)
	Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(110)
	::away3d::bounds::BoundingVolumeBase bounds = renderable->get_sourceEntity()->get_bounds();		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(111)
	::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(113)
	m->copyFrom(renderable->get_sceneTransform());
	HX_STACK_LINE(114)
	m->append(this->_parent->get_inverseSceneTransform());
	HX_STACK_LINE(115)
	this->lookAt(m->get_position(),null());
	HX_STACK_LINE(116)
	m->copyFrom(renderable->get_sceneTransform());
	HX_STACK_LINE(117)
	m->append(this->get_inverseSceneTransform());
	HX_STACK_LINE(118)
	m->copyColumnTo((int)3,this->_pos);
	HX_STACK_LINE(119)
	::flash::geom::Vector3D v1 = m->deltaTransformVector(bounds->get_min());		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(120)
	::flash::geom::Vector3D v2 = m->deltaTransformVector(bounds->get_max());		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(121)
	Float z = this->_pos->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(122)
	Float d1 = (((v1->x * v1->x) + (v1->y * v1->y)) + (v1->z * v1->z));		HX_STACK_VAR(d1,"d1");
	HX_STACK_LINE(123)
	Float d2 = (((v2->x * v2->x) + (v2->y * v2->y)) + (v2->z * v2->z));		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(124)
	Float d = ::Math_obj::sqrt((  (((d1 > d2))) ? Float(d1) : Float(d2) ));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(125)
	Float zMin;		HX_STACK_VAR(zMin,"zMin");
	HX_STACK_LINE(126)
	Float zMax;		HX_STACK_VAR(zMax,"zMax");
	HX_STACK_LINE(127)
	zMin = (z - d);
	HX_STACK_LINE(128)
	zMax = (z + d);
	HX_STACK_LINE(129)
	raw[(int)5] = raw[(int)0] = (Float(zMin) / Float(d));
	HX_STACK_LINE(130)
	raw[(int)10] = (Float(zMax) / Float(((zMax - zMin))));
	HX_STACK_LINE(131)
	raw[(int)11] = (int)1;
	HX_STACK_LINE(132)
	raw[(int)1] = raw[(int)2] = raw[(int)3] = raw[(int)4] = raw[(int)6] = raw[(int)7] = raw[(int)8] = raw[(int)9] = raw[(int)12] = raw[(int)13] = raw[(int)15] = (int)0;
	HX_STACK_LINE(133)
	raw[(int)14] = (-(zMin) * raw->__get((int)10));
	HX_STACK_LINE(134)
	if (((target == null()))){
		HX_STACK_LINE(135)
		target = ::flash::geom::Matrix3D_obj::__new(null());
	}
	HX_STACK_LINE(136)
	target->copyRawDataFrom(raw,null(),null());
	HX_STACK_LINE(137)
	target->prepend(m);
	HX_STACK_LINE(138)
	return target;
}


::away3d::bounds::BoundingVolumeBase PointLight_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("PointLight::getDefaultBoundingVolume","away3d/lights/PointLight.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(100)
	return ::away3d::bounds::BoundingSphere_obj::__new();
}


Void PointLight_obj::updateBounds( ){
{
		HX_STACK_PUSH("PointLight::updateBounds","away3d/lights/PointLight.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->_bounds->fromSphere(::flash::geom::Vector3D_obj::__new(null(),null(),null(),null()),this->_fallOff);
		HX_STACK_LINE(93)
		this->_boundsInvalid = false;
	}
return null();
}


Float PointLight_obj::set_fallOff( Float value){
	HX_STACK_PUSH("PointLight::set_fallOff","away3d/lights/PointLight.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(77)
	this->_fallOff = value;
	HX_STACK_LINE(78)
	if (((this->_fallOff < (int)0))){
		HX_STACK_LINE(78)
		this->_fallOff = (int)0;
	}
	HX_STACK_LINE(79)
	if (((this->_fallOff < this->_radius))){
		HX_STACK_LINE(79)
		this->_radius = this->_fallOff;
	}
	HX_STACK_LINE(80)
	this->_fallOffFactor = (Float((int)1) / Float((((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)))));
	HX_STACK_LINE(81)
	this->invalidateBounds();
	HX_STACK_LINE(82)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PointLight_obj,set_fallOff,return )

Float PointLight_obj::get_fallOff( ){
	HX_STACK_PUSH("PointLight::get_fallOff","away3d/lights/PointLight.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->_fallOff;
}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,get_fallOff,return )

Float PointLight_obj::fallOffFactor( ){
	HX_STACK_PUSH("PointLight::fallOffFactor","away3d/lights/PointLight.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return this->_fallOffFactor;
}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,fallOffFactor,return )

Float PointLight_obj::set_radius( Float value){
	HX_STACK_PUSH("PointLight::set_radius","away3d/lights/PointLight.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(54)
	this->_radius = value;
	HX_STACK_LINE(55)
	if (((this->_radius < (int)0))){
		HX_STACK_LINE(55)
		this->_radius = (int)0;
	}
	else{
		HX_STACK_LINE(56)
		if (((this->_radius > this->_fallOff))){
			HX_STACK_LINE(57)
			this->_fallOff = this->_radius;
			HX_STACK_LINE(58)
			this->invalidateBounds();
		}
	}
	HX_STACK_LINE(60)
	this->_fallOffFactor = (Float((int)1) / Float((((this->_fallOff * this->_fallOff) - (this->_radius * this->_radius)))));
	HX_STACK_LINE(61)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PointLight_obj,set_radius,return )

Float PointLight_obj::get_radius( ){
	HX_STACK_PUSH("PointLight::get_radius","away3d/lights/PointLight.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(PointLight_obj,get_radius,return )

::away3d::core::partition::EntityNode PointLight_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("PointLight::createEntityPartitionNode","away3d/lights/PointLight.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return ::away3d::core::partition::PointLightNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


::away3d::lights::shadowmaps::ShadowMapperBase PointLight_obj::createShadowMapper( ){
	HX_STACK_PUSH("PointLight::createShadowMapper","away3d/lights/PointLight.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return ::away3d::lights::shadowmaps::CubeMapShadowMapper_obj::__new();
}



PointLight_obj::PointLight_obj()
{
}

void PointLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointLight);
	HX_MARK_MEMBER_NAME(_fallOffFactor,"_fallOffFactor");
	HX_MARK_MEMBER_NAME(_fallOff,"_fallOff");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PointLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fallOffFactor,"_fallOffFactor");
	HX_VISIT_MEMBER_NAME(_fallOff,"_fallOff");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PointLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"fallOff") ) { return get_fallOff(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fallOff") ) { return _fallOff; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_fallOff") ) { return set_fallOff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fallOff") ) { return get_fallOff_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fallOffFactor") ) { return fallOffFactor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fallOffFactor") ) { return _fallOffFactor; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return createShadowMapper_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return getDefaultBoundingVolume_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getObjectProjectionMatrix") ) { return getObjectProjectionMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PointLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fallOff") ) { return set_fallOff(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fallOff") ) { _fallOff=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fallOffFactor") ) { _fallOffFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_fallOffFactor"));
	outFields->push(HX_CSTRING("_fallOff"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("fallOff"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getObjectProjectionMatrix"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("set_fallOff"),
	HX_CSTRING("get_fallOff"),
	HX_CSTRING("fallOffFactor"),
	HX_CSTRING("set_radius"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("createShadowMapper"),
	HX_CSTRING("_fallOffFactor"),
	HX_CSTRING("_fallOff"),
	HX_CSTRING("_radius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointLight_obj::__mClass,"__mClass");
};

Class PointLight_obj::__mClass;

void PointLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.PointLight"), hx::TCanCast< PointLight_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PointLight_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
