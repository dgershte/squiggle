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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_LightProbeNode
#include <away3d/core/partition/LightProbeNode.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
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
namespace away3d{
namespace lights{

Void LightProbe_obj::__construct(::away3d::textures::CubeTextureBase diffuseMap,::away3d::textures::CubeTextureBase specularMap)
{
HX_STACK_PUSH("LightProbe::new","away3d/lights/LightProbe.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->_diffuseMap = diffuseMap;
	HX_STACK_LINE(26)
	this->_specularMap = specularMap;
}
;
	return null();
}

LightProbe_obj::~LightProbe_obj() { }

Dynamic LightProbe_obj::__CreateEmpty() { return  new LightProbe_obj; }
hx::ObjectPtr< LightProbe_obj > LightProbe_obj::__new(::away3d::textures::CubeTextureBase diffuseMap,::away3d::textures::CubeTextureBase specularMap)
{  hx::ObjectPtr< LightProbe_obj > result = new LightProbe_obj();
	result->__construct(diffuseMap,specularMap);
	return result;}

Dynamic LightProbe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightProbe_obj > result = new LightProbe_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::geom::Matrix3D LightProbe_obj::getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target){
	HX_STACK_PUSH("LightProbe::getObjectProjectionMatrix","away3d/lights/LightProbe.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(76)
	hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Object projection matrices are not supported for LightProbe objects!"),null()));
	HX_STACK_LINE(77)
	return null();
}


::away3d::bounds::BoundingVolumeBase LightProbe_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("LightProbe::getDefaultBoundingVolume","away3d/lights/LightProbe.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return ::away3d::bounds::NullBounds_obj::__new(null(),null());
}


Void LightProbe_obj::updateBounds( ){
{
		HX_STACK_PUSH("LightProbe::updateBounds","away3d/lights/LightProbe.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		this->_boundsInvalid = false;
	}
return null();
}


::away3d::textures::CubeTextureBase LightProbe_obj::set_specularMap( ::away3d::textures::CubeTextureBase value){
	HX_STACK_PUSH("LightProbe::set_specularMap","away3d/lights/LightProbe.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(47)
	this->_specularMap = value;
	HX_STACK_LINE(48)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightProbe_obj,set_specularMap,return )

::away3d::textures::CubeTextureBase LightProbe_obj::get_specularMap( ){
	HX_STACK_PUSH("LightProbe::get_specularMap","away3d/lights/LightProbe.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->_specularMap;
}


HX_DEFINE_DYNAMIC_FUNC0(LightProbe_obj,get_specularMap,return )

::away3d::textures::CubeTextureBase LightProbe_obj::set_diffuseMap( ::away3d::textures::CubeTextureBase value){
	HX_STACK_PUSH("LightProbe::set_diffuseMap","away3d/lights/LightProbe.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(38)
	this->_diffuseMap = value;
	HX_STACK_LINE(39)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightProbe_obj,set_diffuseMap,return )

::away3d::textures::CubeTextureBase LightProbe_obj::get_diffuseMap( ){
	HX_STACK_PUSH("LightProbe::get_diffuseMap","away3d/lights/LightProbe.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->_diffuseMap;
}


HX_DEFINE_DYNAMIC_FUNC0(LightProbe_obj,get_diffuseMap,return )

::away3d::core::partition::EntityNode LightProbe_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("LightProbe::createEntityPartitionNode","away3d/lights/LightProbe.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	return ::away3d::core::partition::LightProbeNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}



LightProbe_obj::LightProbe_obj()
{
}

void LightProbe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightProbe);
	HX_MARK_MEMBER_NAME(_specularMap,"_specularMap");
	HX_MARK_MEMBER_NAME(_diffuseMap,"_diffuseMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightProbe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_specularMap,"_specularMap");
	HX_VISIT_MEMBER_NAME(_diffuseMap,"_diffuseMap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightProbe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"diffuseMap") ) { return get_diffuseMap(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_diffuseMap") ) { return _diffuseMap; }
		if (HX_FIELD_EQ(inName,"specularMap") ) { return get_specularMap(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_specularMap") ) { return _specularMap; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_diffuseMap") ) { return set_diffuseMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseMap") ) { return get_diffuseMap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_specularMap") ) { return set_specularMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularMap") ) { return get_specularMap_dyn(); }
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

Dynamic LightProbe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"diffuseMap") ) { return set_diffuseMap(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_diffuseMap") ) { _diffuseMap=inValue.Cast< ::away3d::textures::CubeTextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularMap") ) { return set_specularMap(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_specularMap") ) { _specularMap=inValue.Cast< ::away3d::textures::CubeTextureBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightProbe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_specularMap"));
	outFields->push(HX_CSTRING("_diffuseMap"));
	outFields->push(HX_CSTRING("specularMap"));
	outFields->push(HX_CSTRING("diffuseMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getObjectProjectionMatrix"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("set_specularMap"),
	HX_CSTRING("get_specularMap"),
	HX_CSTRING("set_diffuseMap"),
	HX_CSTRING("get_diffuseMap"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("_specularMap"),
	HX_CSTRING("_diffuseMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightProbe_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightProbe_obj::__mClass,"__mClass");
};

Class LightProbe_obj::__mClass;

void LightProbe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.LightProbe"), hx::TCanCast< LightProbe_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightProbe_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
