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
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
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
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
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
namespace materials{
namespace lightpickers{

Void LightPickerBase_obj::__construct()
{
HX_STACK_PUSH("LightPickerBase::new","away3d/materials/lightpickers/LightPickerBase.hx",53);
{
	HX_STACK_LINE(53)
	super::__construct(null());
}
;
	return null();
}

LightPickerBase_obj::~LightPickerBase_obj() { }

Dynamic LightPickerBase_obj::__CreateEmpty() { return  new LightPickerBase_obj; }
hx::ObjectPtr< LightPickerBase_obj > LightPickerBase_obj::__new()
{  hx::ObjectPtr< LightPickerBase_obj > result = new LightPickerBase_obj();
	result->__construct();
	return result;}

Dynamic LightPickerBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightPickerBase_obj > result = new LightPickerBase_obj();
	result->__construct();
	return result;}

hx::Object *LightPickerBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

Void LightPickerBase_obj::updateProbeWeights( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("LightPickerBase::updateProbeWeights","away3d/materials/lightpickers/LightPickerBase.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(183)
		::flash::geom::Vector3D objectPos = renderable->get_sourceEntity()->get_scenePosition();		HX_STACK_VAR(objectPos,"objectPos");
		HX_STACK_LINE(184)
		::flash::geom::Vector3D lightPos;		HX_STACK_VAR(lightPos,"lightPos");
		HX_STACK_LINE(185)
		Float rx = objectPos->x;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(186)
		Float ry = objectPos->y;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(187)
		Float rz = objectPos->z;		HX_STACK_VAR(rz,"rz");
		HX_STACK_LINE(188)
		Float dx;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(189)
		Float dy;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(190)
		Float dz;		HX_STACK_VAR(dz,"dz");
		HX_STACK_LINE(191)
		Float w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(192)
		Float total = (int)0;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(193)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(195)
		i = (int)0;
		HX_STACK_LINE(196)
		while(((i < this->_numLightProbes))){
			HX_STACK_LINE(197)
			lightPos = this->_lightProbes->__get(i).StaticCast< ::away3d::lights::LightProbe >()->get_scenePosition();
			HX_STACK_LINE(198)
			dx = (rx - lightPos->x);
			HX_STACK_LINE(199)
			dy = (ry - lightPos->y);
			HX_STACK_LINE(200)
			dz = (rz - lightPos->z);
			HX_STACK_LINE(202)
			w = (((dx * dx) + (dy * dy)) + (dz * dz));
			HX_STACK_LINE(204)
			w = (  (((w > .00001))) ? Float((Float((int)1) / Float(w))) : Float((int)50000000) );
			HX_STACK_LINE(205)
			this->_lightProbeWeights[i] = w;
			HX_STACK_LINE(206)
			hx::AddEq(total,w);
			HX_STACK_LINE(207)
			++(i);
		}
		HX_STACK_LINE(210)
		total = (Float((int)1) / Float(total));
		HX_STACK_LINE(211)
		i = (int)0;
		HX_STACK_LINE(212)
		while(((i < this->_numLightProbes))){
			HX_STACK_LINE(213)
			hx::MultEq(this->_lightProbeWeights[i],total);
			HX_STACK_LINE(214)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LightPickerBase_obj,updateProbeWeights,(void))

Void LightPickerBase_obj::collectLights( ::away3d::core::base::IRenderable renderable,::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("LightPickerBase::collectLights","away3d/materials/lightpickers/LightPickerBase.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(172)
		this->updateProbeWeights(renderable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LightPickerBase_obj,collectLights,(void))

Array< ::Dynamic > LightPickerBase_obj::get_allPickedLights( ){
	HX_STACK_PUSH("LightPickerBase::get_allPickedLights","away3d/materials/lightpickers/LightPickerBase.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return this->_allPickedLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_allPickedLights,return )

Array< Float > LightPickerBase_obj::get_lightProbeWeights( ){
	HX_STACK_PUSH("LightPickerBase::get_lightProbeWeights","away3d/materials/lightpickers/LightPickerBase.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(156)
	return this->_lightProbeWeights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_lightProbeWeights,return )

Array< ::Dynamic > LightPickerBase_obj::get_lightProbes( ){
	HX_STACK_PUSH("LightPickerBase::get_lightProbes","away3d/materials/lightpickers/LightPickerBase.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_LINE(148)
	return this->_lightProbes;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_lightProbes,return )

Array< ::Dynamic > LightPickerBase_obj::get_castingDirectionalLights( ){
	HX_STACK_PUSH("LightPickerBase::get_castingDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	return this->_castingDirectionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_castingDirectionalLights,return )

Array< ::Dynamic > LightPickerBase_obj::get_castingPointLights( ){
	HX_STACK_PUSH("LightPickerBase::get_castingPointLights","away3d/materials/lightpickers/LightPickerBase.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->_castingPointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_castingPointLights,return )

Array< ::Dynamic > LightPickerBase_obj::get_directionalLights( ){
	HX_STACK_PUSH("LightPickerBase::get_directionalLights","away3d/materials/lightpickers/LightPickerBase.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->_directionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_directionalLights,return )

Array< ::Dynamic > LightPickerBase_obj::get_pointLights( ){
	HX_STACK_PUSH("LightPickerBase::get_pointLights","away3d/materials/lightpickers/LightPickerBase.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return this->_pointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_pointLights,return )

int LightPickerBase_obj::get_numLightProbes( ){
	HX_STACK_PUSH("LightPickerBase::get_numLightProbes","away3d/materials/lightpickers/LightPickerBase.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	return this->_numLightProbes;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numLightProbes,return )

int LightPickerBase_obj::get_numCastingPointLights( ){
	HX_STACK_PUSH("LightPickerBase::get_numCastingPointLights","away3d/materials/lightpickers/LightPickerBase.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(100)
	return this->_numCastingPointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numCastingPointLights,return )

int LightPickerBase_obj::get_numCastingDirectionalLights( ){
	HX_STACK_PUSH("LightPickerBase::get_numCastingDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	return this->_numCastingDirectionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numCastingDirectionalLights,return )

int LightPickerBase_obj::get_numPointLights( ){
	HX_STACK_PUSH("LightPickerBase::get_numPointLights","away3d/materials/lightpickers/LightPickerBase.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->_numPointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numPointLights,return )

int LightPickerBase_obj::get_numDirectionalLights( ){
	HX_STACK_PUSH("LightPickerBase::get_numDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->_numDirectionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numDirectionalLights,return )

::String LightPickerBase_obj::get_assetType( ){
	HX_STACK_PUSH("LightPickerBase::get_assetType","away3d/materials/lightpickers/LightPickerBase.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return ::away3d::library::assets::AssetType_obj::LIGHT_PICKER;
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_assetType,return )

Void LightPickerBase_obj::dispose( ){
{
		HX_STACK_PUSH("LightPickerBase::dispose","away3d/materials/lightpickers/LightPickerBase.hx",61);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,dispose,(void))


LightPickerBase_obj::LightPickerBase_obj()
{
}

void LightPickerBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightPickerBase);
	HX_MARK_MEMBER_NAME(_lightProbeWeights,"_lightProbeWeights");
	HX_MARK_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_MARK_MEMBER_NAME(_castingDirectionalLights,"_castingDirectionalLights");
	HX_MARK_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_MARK_MEMBER_NAME(_castingPointLights,"_castingPointLights");
	HX_MARK_MEMBER_NAME(_pointLights,"_pointLights");
	HX_MARK_MEMBER_NAME(_allPickedLights,"_allPickedLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_numCastingDirectionalLights,"_numCastingDirectionalLights");
	HX_MARK_MEMBER_NAME(_numCastingPointLights,"_numCastingPointLights");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightPickerBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lightProbeWeights,"_lightProbeWeights");
	HX_VISIT_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_VISIT_MEMBER_NAME(_castingDirectionalLights,"_castingDirectionalLights");
	HX_VISIT_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_VISIT_MEMBER_NAME(_castingPointLights,"_castingPointLights");
	HX_VISIT_MEMBER_NAME(_pointLights,"_pointLights");
	HX_VISIT_MEMBER_NAME(_allPickedLights,"_allPickedLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_numCastingDirectionalLights,"_numCastingDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numCastingPointLights,"_numCastingPointLights");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightPickerBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightProbes") ) { return get_lightProbes(); }
		if (HX_FIELD_EQ(inName,"pointLights") ) { return get_pointLights(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { return _lightProbes; }
		if (HX_FIELD_EQ(inName,"_pointLights") ) { return _pointLights; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collectLights") ) { return collectLights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { return get_numLightProbes(); }
		if (HX_FIELD_EQ(inName,"numPointLights") ) { return get_numPointLights(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_lightProbes") ) { return get_lightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pointLights") ) { return get_pointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return _numLightProbes; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return _numPointLights; }
		if (HX_FIELD_EQ(inName,"allPickedLights") ) { return get_allPickedLights(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_allPickedLights") ) { return _allPickedLights; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lightProbeWeights") ) { return get_lightProbeWeights(); }
		if (HX_FIELD_EQ(inName,"directionalLights") ) { return get_directionalLights(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateProbeWeights") ) { return updateProbeWeights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return get_numLightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return get_numPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightProbeWeights") ) { return _lightProbeWeights; }
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { return _directionalLights; }
		if (HX_FIELD_EQ(inName,"castingPointLights") ) { return get_castingPointLights(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_allPickedLights") ) { return get_allPickedLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_castingPointLights") ) { return _castingPointLights; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { return get_numDirectionalLights(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_lightProbeWeights") ) { return get_lightProbeWeights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_directionalLights") ) { return get_directionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return _numDirectionalLights; }
		if (HX_FIELD_EQ(inName,"numCastingPointLights") ) { return get_numCastingPointLights(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_castingPointLights") ) { return get_castingPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numCastingPointLights") ) { return _numCastingPointLights; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return get_numDirectionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"castingDirectionalLights") ) { return get_castingDirectionalLights(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_numCastingPointLights") ) { return get_numCastingPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_castingDirectionalLights") ) { return _castingDirectionalLights; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"numCastingDirectionalLights") ) { return get_numCastingDirectionalLights(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_castingDirectionalLights") ) { return get_castingDirectionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_numCastingDirectionalLights") ) { return _numCastingDirectionalLights; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_numCastingDirectionalLights") ) { return get_numCastingDirectionalLights_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightPickerBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { _lightProbes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointLights") ) { _pointLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_allPickedLights") ) { _allPickedLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_lightProbeWeights") ) { _lightProbeWeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { _directionalLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_castingPointLights") ) { _castingPointLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_numCastingPointLights") ) { _numCastingPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_castingDirectionalLights") ) { _castingDirectionalLights=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_numCastingDirectionalLights") ) { _numCastingDirectionalLights=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightPickerBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lightProbeWeights"));
	outFields->push(HX_CSTRING("_lightProbes"));
	outFields->push(HX_CSTRING("_castingDirectionalLights"));
	outFields->push(HX_CSTRING("_directionalLights"));
	outFields->push(HX_CSTRING("_castingPointLights"));
	outFields->push(HX_CSTRING("_pointLights"));
	outFields->push(HX_CSTRING("_allPickedLights"));
	outFields->push(HX_CSTRING("_numLightProbes"));
	outFields->push(HX_CSTRING("_numCastingDirectionalLights"));
	outFields->push(HX_CSTRING("_numCastingPointLights"));
	outFields->push(HX_CSTRING("_numDirectionalLights"));
	outFields->push(HX_CSTRING("_numPointLights"));
	outFields->push(HX_CSTRING("allPickedLights"));
	outFields->push(HX_CSTRING("lightProbeWeights"));
	outFields->push(HX_CSTRING("lightProbes"));
	outFields->push(HX_CSTRING("castingDirectionalLights"));
	outFields->push(HX_CSTRING("castingPointLights"));
	outFields->push(HX_CSTRING("directionalLights"));
	outFields->push(HX_CSTRING("pointLights"));
	outFields->push(HX_CSTRING("numLightProbes"));
	outFields->push(HX_CSTRING("numCastingPointLights"));
	outFields->push(HX_CSTRING("numCastingDirectionalLights"));
	outFields->push(HX_CSTRING("numPointLights"));
	outFields->push(HX_CSTRING("numDirectionalLights"));
	outFields->push(HX_CSTRING("assetType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateProbeWeights"),
	HX_CSTRING("collectLights"),
	HX_CSTRING("get_allPickedLights"),
	HX_CSTRING("get_lightProbeWeights"),
	HX_CSTRING("get_lightProbes"),
	HX_CSTRING("get_castingDirectionalLights"),
	HX_CSTRING("get_castingPointLights"),
	HX_CSTRING("get_directionalLights"),
	HX_CSTRING("get_pointLights"),
	HX_CSTRING("get_numLightProbes"),
	HX_CSTRING("get_numCastingPointLights"),
	HX_CSTRING("get_numCastingDirectionalLights"),
	HX_CSTRING("get_numPointLights"),
	HX_CSTRING("get_numDirectionalLights"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("dispose"),
	HX_CSTRING("_lightProbeWeights"),
	HX_CSTRING("_lightProbes"),
	HX_CSTRING("_castingDirectionalLights"),
	HX_CSTRING("_directionalLights"),
	HX_CSTRING("_castingPointLights"),
	HX_CSTRING("_pointLights"),
	HX_CSTRING("_allPickedLights"),
	HX_CSTRING("_numLightProbes"),
	HX_CSTRING("_numCastingDirectionalLights"),
	HX_CSTRING("_numCastingPointLights"),
	HX_CSTRING("_numDirectionalLights"),
	HX_CSTRING("_numPointLights"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightPickerBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightPickerBase_obj::__mClass,"__mClass");
};

Class LightPickerBase_obj::__mClass;

void LightPickerBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.lightpickers.LightPickerBase"), hx::TCanCast< LightPickerBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightPickerBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers
