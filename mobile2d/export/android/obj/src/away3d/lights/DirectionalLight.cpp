#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
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
#ifndef INCLUDED_away3d_core_partition_DirectionalLightNode
#include <away3d/core/partition/DirectionalLightNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
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
#ifndef INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper
#include <away3d/lights/shadowmaps/DirectionalShadowMapper.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace lights{

Void DirectionalLight_obj::__construct(hx::Null< Float >  __o_xDir,hx::Null< Float >  __o_yDir,hx::Null< Float >  __o_zDir)
{
HX_STACK_PUSH("DirectionalLight::new","away3d/lights/DirectionalLight.hx",37);
Float xDir = __o_xDir.Default(0);
Float yDir = __o_yDir.Default(-1);
Float zDir = __o_zDir.Default(1);
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->set_direction(::flash::geom::Vector3D_obj::__new(xDir,yDir,zDir,null()));
	HX_STACK_LINE(40)
	this->_sceneDirection = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
}
;
	return null();
}

DirectionalLight_obj::~DirectionalLight_obj() { }

Dynamic DirectionalLight_obj::__CreateEmpty() { return  new DirectionalLight_obj; }
hx::ObjectPtr< DirectionalLight_obj > DirectionalLight_obj::__new(hx::Null< Float >  __o_xDir,hx::Null< Float >  __o_yDir,hx::Null< Float >  __o_zDir)
{  hx::ObjectPtr< DirectionalLight_obj > result = new DirectionalLight_obj();
	result->__construct(__o_xDir,__o_yDir,__o_zDir);
	return result;}

Dynamic DirectionalLight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectionalLight_obj > result = new DirectionalLight_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::geom::Matrix3D DirectionalLight_obj::getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target){
	HX_STACK_PUSH("DirectionalLight::getObjectProjectionMatrix","away3d/lights/DirectionalLight.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(110)
	Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(111)
	::away3d::bounds::BoundingVolumeBase bounds = renderable->get_sourceEntity()->get_bounds();		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(112)
	::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(113)
	m->copyFrom(renderable->get_sceneTransform());
	HX_STACK_LINE(114)
	m->append(this->get_inverseSceneTransform());
	HX_STACK_LINE(115)
	if (((this->_projAABBPoints == null()))){
		HX_STACK_LINE(115)
		this->_projAABBPoints = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	}
	HX_STACK_LINE(116)
	m->transformVectors(bounds->get_aabbPoints(),this->_projAABBPoints);
	HX_STACK_LINE(117)
	Float xMin = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(xMin,"xMin");
	HX_STACK_LINE(118)
	Float xMax = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(xMax,"xMax");
	HX_STACK_LINE(119)
	Float yMin = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(yMin,"yMin");
	HX_STACK_LINE(120)
	Float yMax = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(yMax,"yMax");
	HX_STACK_LINE(121)
	Float zMin = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(zMin,"zMin");
	HX_STACK_LINE(122)
	Float zMax = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(zMax,"zMax");
	HX_STACK_LINE(123)
	Float d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(124)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(125)
	while(((i < (int)24))){
		HX_STACK_LINE(126)
		d = this->_projAABBPoints->__get((i)++);
		HX_STACK_LINE(127)
		if (((d < xMin))){
			HX_STACK_LINE(127)
			xMin = d;
		}
		HX_STACK_LINE(128)
		if (((d > xMax))){
			HX_STACK_LINE(128)
			xMax = d;
		}
		HX_STACK_LINE(129)
		d = this->_projAABBPoints->__get((i)++);
		HX_STACK_LINE(130)
		if (((d < yMin))){
			HX_STACK_LINE(130)
			yMin = d;
		}
		HX_STACK_LINE(131)
		if (((d > yMax))){
			HX_STACK_LINE(131)
			yMax = d;
		}
		HX_STACK_LINE(132)
		d = this->_projAABBPoints->__get((i)++);
		HX_STACK_LINE(133)
		if (((d < zMin))){
			HX_STACK_LINE(133)
			zMin = d;
		}
		HX_STACK_LINE(134)
		if (((d > zMax))){
			HX_STACK_LINE(134)
			zMax = d;
		}
	}
	HX_STACK_LINE(136)
	Float invXRange = (Float((int)1) / Float(((xMax - xMin))));		HX_STACK_VAR(invXRange,"invXRange");
	HX_STACK_LINE(137)
	Float invYRange = (Float((int)1) / Float(((yMax - yMin))));		HX_STACK_VAR(invYRange,"invYRange");
	HX_STACK_LINE(138)
	Float invZRange = (Float((int)1) / Float(((zMax - zMin))));		HX_STACK_VAR(invZRange,"invZRange");
	HX_STACK_LINE(139)
	raw[(int)0] = ((int)2 * invXRange);
	HX_STACK_LINE(140)
	raw[(int)5] = ((int)2 * invYRange);
	HX_STACK_LINE(141)
	raw[(int)10] = invZRange;
	HX_STACK_LINE(142)
	raw[(int)12] = (-(((xMax + xMin))) * invXRange);
	HX_STACK_LINE(143)
	raw[(int)13] = (-(((yMax + yMin))) * invYRange);
	HX_STACK_LINE(144)
	raw[(int)14] = (-(zMin) * invZRange);
	HX_STACK_LINE(145)
	raw[(int)1] = raw[(int)2] = raw[(int)3] = raw[(int)4] = raw[(int)6] = raw[(int)7] = raw[(int)8] = raw[(int)9] = raw[(int)11] = (int)0;
	HX_STACK_LINE(146)
	raw[(int)15] = (int)1;
	HX_STACK_LINE(147)
	if (((target == null()))){
		HX_STACK_LINE(148)
		target = ::flash::geom::Matrix3D_obj::__new(null());
	}
	HX_STACK_LINE(149)
	target->copyRawDataFrom(raw,null(),null());
	HX_STACK_LINE(150)
	target->prepend(m);
	HX_STACK_LINE(151)
	return target;
}


::away3d::lights::shadowmaps::ShadowMapperBase DirectionalLight_obj::createShadowMapper( ){
	HX_STACK_PUSH("DirectionalLight::createShadowMapper","away3d/lights/DirectionalLight.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	return ::away3d::lights::shadowmaps::DirectionalShadowMapper_obj::__new();
}


Void DirectionalLight_obj::updateSceneTransform( ){
{
		HX_STACK_PUSH("DirectionalLight::updateSceneTransform","away3d/lights/DirectionalLight.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_LINE(96)
		this->super::updateSceneTransform();
		HX_STACK_LINE(97)
		this->get_sceneTransform()->copyColumnTo((int)2,this->_sceneDirection);
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::flash::geom::Vector3D _this = this->_sceneDirection;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(98)
			Float l = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(98)
			if (((l != (int)0))){
				HX_STACK_LINE(98)
				hx::DivEq(_this->x,l);
				HX_STACK_LINE(98)
				hx::DivEq(_this->y,l);
				HX_STACK_LINE(98)
				hx::DivEq(_this->z,l);
			}
			HX_STACK_LINE(98)
			l;
		}
	}
return null();
}


Void DirectionalLight_obj::updateBounds( ){
{
		HX_STACK_PUSH("DirectionalLight::updateBounds","away3d/lights/DirectionalLight.hx",88);
		HX_STACK_THIS(this);
	}
return null();
}


::away3d::bounds::BoundingVolumeBase DirectionalLight_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("DirectionalLight::getDefaultBoundingVolume","away3d/lights/DirectionalLight.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return ::away3d::bounds::NullBounds_obj::__new(null(),null());
}


::flash::geom::Vector3D DirectionalLight_obj::set_direction( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("DirectionalLight::set_direction","away3d/lights/DirectionalLight.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(65)
	this->_direction = value;
	HX_STACK_LINE(67)
	if (((this->_tmpLookAt == null()))){
		HX_STACK_LINE(67)
		this->_tmpLookAt = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(68)
	this->_tmpLookAt->x = (this->get_x() + this->_direction->x);
	HX_STACK_LINE(69)
	this->_tmpLookAt->y = (this->get_y() + this->_direction->y);
	HX_STACK_LINE(70)
	this->_tmpLookAt->z = (this->get_z() + this->_direction->z);
	HX_STACK_LINE(71)
	this->lookAt(this->_tmpLookAt,null());
	HX_STACK_LINE(72)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalLight_obj,set_direction,return )

::flash::geom::Vector3D DirectionalLight_obj::get_direction( ){
	HX_STACK_PUSH("DirectionalLight::get_direction","away3d/lights/DirectionalLight.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->_direction;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLight_obj,get_direction,return )

::flash::geom::Vector3D DirectionalLight_obj::get_sceneDirection( ){
	HX_STACK_PUSH("DirectionalLight::get_sceneDirection","away3d/lights/DirectionalLight.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	if ((this->_sceneTransformDirty)){
		HX_STACK_LINE(52)
		this->updateSceneTransform();
	}
	HX_STACK_LINE(53)
	return this->_sceneDirection;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLight_obj,get_sceneDirection,return )

::away3d::core::partition::EntityNode DirectionalLight_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("DirectionalLight::createEntityPartitionNode","away3d/lights/DirectionalLight.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return ::away3d::core::partition::DirectionalLightNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}



DirectionalLight_obj::DirectionalLight_obj()
{
}

void DirectionalLight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalLight);
	HX_MARK_MEMBER_NAME(_projAABBPoints,"_projAABBPoints");
	HX_MARK_MEMBER_NAME(_sceneDirection,"_sceneDirection");
	HX_MARK_MEMBER_NAME(_tmpLookAt,"_tmpLookAt");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalLight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_projAABBPoints,"_projAABBPoints");
	HX_VISIT_MEMBER_NAME(_sceneDirection,"_sceneDirection");
	HX_VISIT_MEMBER_NAME(_tmpLookAt,"_tmpLookAt");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DirectionalLight_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tmpLookAt") ) { return _tmpLookAt; }
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sceneDirection") ) { return get_sceneDirection(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_projAABBPoints") ) { return _projAABBPoints; }
		if (HX_FIELD_EQ(inName,"_sceneDirection") ) { return _sceneDirection; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return createShadowMapper_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sceneDirection") ) { return get_sceneDirection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateSceneTransform") ) { return updateSceneTransform_dyn(); }
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

Dynamic DirectionalLight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tmpLookAt") ) { _tmpLookAt=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_projAABBPoints") ) { _projAABBPoints=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneDirection") ) { _sceneDirection=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalLight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_projAABBPoints"));
	outFields->push(HX_CSTRING("_sceneDirection"));
	outFields->push(HX_CSTRING("_tmpLookAt"));
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("sceneDirection"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getObjectProjectionMatrix"),
	HX_CSTRING("createShadowMapper"),
	HX_CSTRING("updateSceneTransform"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("get_sceneDirection"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("_projAABBPoints"),
	HX_CSTRING("_sceneDirection"),
	HX_CSTRING("_tmpLookAt"),
	HX_CSTRING("_direction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectionalLight_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectionalLight_obj::__mClass,"__mClass");
};

Class DirectionalLight_obj::__mClass;

void DirectionalLight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.DirectionalLight"), hx::TCanCast< DirectionalLight_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DirectionalLight_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
