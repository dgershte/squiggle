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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_LightNode
#include <away3d/core/partition/LightNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_LightEvent
#include <away3d/events/LightEvent.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
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
namespace away3d{
namespace lights{

Void LightBase_obj::__construct()
{
HX_STACK_PUSH("LightBase::new","away3d/lights/LightBase.hx",50);
{
	HX_STACK_LINE(51)
	this->_color = (int)16777215;
	HX_STACK_LINE(52)
	this->_colorR = (int)1;
	HX_STACK_LINE(53)
	this->_colorG = (int)1;
	HX_STACK_LINE(54)
	this->_colorB = (int)1;
	HX_STACK_LINE(55)
	this->_ambientColor = (int)16777215;
	HX_STACK_LINE(56)
	this->_ambient = (int)0;
	HX_STACK_LINE(57)
	this->_ambientR = (int)0;
	HX_STACK_LINE(58)
	this->_ambientG = (int)0;
	HX_STACK_LINE(59)
	this->_ambientB = (int)0;
	HX_STACK_LINE(60)
	this->_specular = (int)1;
	HX_STACK_LINE(61)
	this->_specularR = (int)1;
	HX_STACK_LINE(62)
	this->_specularG = (int)1;
	HX_STACK_LINE(63)
	this->_specularB = (int)1;
	HX_STACK_LINE(64)
	this->_diffuse = (int)1;
	HX_STACK_LINE(65)
	this->_diffuseR = (int)1;
	HX_STACK_LINE(66)
	this->_diffuseG = (int)1;
	HX_STACK_LINE(67)
	this->_diffuseB = (int)1;
	HX_STACK_LINE(68)
	super::__construct();
}
;
	return null();
}

LightBase_obj::~LightBase_obj() { }

Dynamic LightBase_obj::__CreateEmpty() { return  new LightBase_obj; }
hx::ObjectPtr< LightBase_obj > LightBase_obj::__new()
{  hx::ObjectPtr< LightBase_obj > result = new LightBase_obj();
	result->__construct();
	return result;}

Dynamic LightBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightBase_obj > result = new LightBase_obj();
	result->__construct();
	return result;}

::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::set_shadowMapper( ::away3d::lights::shadowmaps::ShadowMapperBase value){
	HX_STACK_PUSH("LightBase::set_shadowMapper","away3d/lights/LightBase.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(235)
	this->_shadowMapper = value;
	HX_STACK_LINE(236)
	this->_shadowMapper->set_light(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(237)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_shadowMapper,return )

::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::get_shadowMapper( ){
	HX_STACK_PUSH("LightBase::get_shadowMapper","away3d/lights/LightBase.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_LINE(230)
	return this->_shadowMapper;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_shadowMapper,return )

Void LightBase_obj::updateDiffuse( ){
{
		HX_STACK_PUSH("LightBase::updateDiffuse","away3d/lights/LightBase.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_LINE(225)
		this->_diffuseR = (this->_colorR * this->_diffuse);
		HX_STACK_LINE(226)
		this->_diffuseG = (this->_colorG * this->_diffuse);
		HX_STACK_LINE(227)
		this->_diffuseB = (this->_colorB * this->_diffuse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateDiffuse,(void))

Void LightBase_obj::updateSpecular( ){
{
		HX_STACK_PUSH("LightBase::updateSpecular","away3d/lights/LightBase.hx",214);
		HX_STACK_THIS(this);
		HX_STACK_LINE(215)
		this->_specularR = (this->_colorR * this->_specular);
		HX_STACK_LINE(216)
		this->_specularG = (this->_colorG * this->_specular);
		HX_STACK_LINE(217)
		this->_specularB = (this->_colorB * this->_specular);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateSpecular,(void))

::String LightBase_obj::get_assetType( ){
	HX_STACK_PUSH("LightBase::get_assetType","away3d/lights/LightBase.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_LINE(206)
	return ::away3d::library::assets::AssetType_obj::LIGHT;
}


::away3d::core::partition::EntityNode LightBase_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("LightBase::createEntityPartitionNode","away3d/lights/LightBase.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_LINE(198)
	return ::away3d::core::partition::LightNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


::flash::geom::Matrix3D LightBase_obj::getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target){
	HX_STACK_PUSH("LightBase::getObjectProjectionMatrix","away3d/lights/LightBase.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(190)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(191)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LightBase_obj,getObjectProjectionMatrix,return )

Void LightBase_obj::updateAmbient( ){
{
		HX_STACK_PUSH("LightBase::updateAmbient","away3d/lights/LightBase.hx",176);
		HX_STACK_THIS(this);
		HX_STACK_LINE(177)
		this->_ambientR = ((Float(((int((int(this->_ambientColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) * this->_ambient);
		HX_STACK_LINE(178)
		this->_ambientG = ((Float(((int((int(this->_ambientColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) * this->_ambient);
		HX_STACK_LINE(179)
		this->_ambientB = ((Float(((int(this->_ambientColor) & int((int)255)))) / Float((int)255)) * this->_ambient);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateAmbient,(void))

int LightBase_obj::set_ambientColor( int value){
	HX_STACK_PUSH("LightBase::set_ambientColor","away3d/lights/LightBase.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(171)
	this->_ambientColor = value;
	HX_STACK_LINE(172)
	this->updateAmbient();
	HX_STACK_LINE(173)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_ambientColor,return )

int LightBase_obj::get_ambientColor( ){
	HX_STACK_PUSH("LightBase::get_ambientColor","away3d/lights/LightBase.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return this->_ambientColor;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_ambientColor,return )

Float LightBase_obj::set_ambient( Float value){
	HX_STACK_PUSH("LightBase::set_ambient","away3d/lights/LightBase.hx",154);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(155)
	if (((value < (int)0))){
		HX_STACK_LINE(155)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(156)
		if (((value > (int)1))){
			HX_STACK_LINE(156)
			value = (int)1;
		}
	}
	HX_STACK_LINE(157)
	this->_ambient = value;
	HX_STACK_LINE(158)
	this->updateAmbient();
	HX_STACK_LINE(159)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_ambient,return )

Float LightBase_obj::get_ambient( ){
	HX_STACK_PUSH("LightBase::get_ambient","away3d/lights/LightBase.hx",150);
	HX_STACK_THIS(this);
	HX_STACK_LINE(150)
	return this->_ambient;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_ambient,return )

int LightBase_obj::set_color( int value){
	HX_STACK_PUSH("LightBase::set_color","away3d/lights/LightBase.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(137)
	this->_color = value;
	HX_STACK_LINE(138)
	this->_colorR = (Float(((int((int(this->_color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(139)
	this->_colorG = (Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(140)
	this->_colorB = (Float(((int(this->_color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(141)
	this->updateDiffuse();
	HX_STACK_LINE(142)
	this->updateSpecular();
	HX_STACK_LINE(143)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_color,return )

int LightBase_obj::get_color( ){
	HX_STACK_PUSH("LightBase::get_color","away3d/lights/LightBase.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_color,return )

Float LightBase_obj::set_diffuse( Float value){
	HX_STACK_PUSH("LightBase::set_diffuse","away3d/lights/LightBase.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(122)
	if (((value < (int)0))){
		HX_STACK_LINE(122)
		value = (int)0;
	}
	HX_STACK_LINE(123)
	this->_diffuse = value;
	HX_STACK_LINE(124)
	this->updateDiffuse();
	HX_STACK_LINE(125)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_diffuse,return )

Float LightBase_obj::get_diffuse( ){
	HX_STACK_PUSH("LightBase::get_diffuse","away3d/lights/LightBase.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->_diffuse;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_diffuse,return )

Float LightBase_obj::set_specular( Float value){
	HX_STACK_PUSH("LightBase::set_specular","away3d/lights/LightBase.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(107)
	if (((value < (int)0))){
		HX_STACK_LINE(107)
		value = (int)0;
	}
	HX_STACK_LINE(108)
	this->_specular = value;
	HX_STACK_LINE(109)
	this->updateSpecular();
	HX_STACK_LINE(110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_specular,return )

Float LightBase_obj::get_specular( ){
	HX_STACK_PUSH("LightBase::get_specular","away3d/lights/LightBase.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->_specular;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_specular,return )

::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::createShadowMapper( ){
	HX_STACK_PUSH("LightBase::createShadowMapper","away3d/lights/LightBase.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,createShadowMapper,return )

bool LightBase_obj::set_castsShadows( bool value){
	HX_STACK_PUSH("LightBase::set_castsShadows","away3d/lights/LightBase.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(76)
	if (((this->_castsShadows == value))){
		HX_STACK_LINE(76)
		return value;
	}
	HX_STACK_LINE(77)
	this->_castsShadows = value;
	HX_STACK_LINE(78)
	if ((value)){
		HX_STACK_LINE(79)
		if (((this->_shadowMapper == null()))){
			HX_STACK_LINE(80)
			this->_shadowMapper = this->createShadowMapper();
		}
		HX_STACK_LINE(81)
		this->_shadowMapper->set_light(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(85)
		this->_shadowMapper->dispose();
		HX_STACK_LINE(86)
		this->_shadowMapper = null();
	}
	HX_STACK_LINE(89)
	this->dispatchEvent(::away3d::events::LightEvent_obj::__new(::away3d::events::LightEvent_obj::CASTS_SHADOW_CHANGE));
	HX_STACK_LINE(90)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_castsShadows,return )

bool LightBase_obj::get_castsShadows( ){
	HX_STACK_PUSH("LightBase::get_castsShadows","away3d/lights/LightBase.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return this->_castsShadows;
}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_castsShadows,return )


LightBase_obj::LightBase_obj()
{
}

void LightBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightBase);
	HX_MARK_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_MARK_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_MARK_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_MARK_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_MARK_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_MARK_MEMBER_NAME(_diffuse,"_diffuse");
	HX_MARK_MEMBER_NAME(_specularB,"_specularB");
	HX_MARK_MEMBER_NAME(_specularG,"_specularG");
	HX_MARK_MEMBER_NAME(_specularR,"_specularR");
	HX_MARK_MEMBER_NAME(_specular,"_specular");
	HX_MARK_MEMBER_NAME(_ambientB,"_ambientB");
	HX_MARK_MEMBER_NAME(_ambientG,"_ambientG");
	HX_MARK_MEMBER_NAME(_ambientR,"_ambientR");
	HX_MARK_MEMBER_NAME(_ambient,"_ambient");
	HX_MARK_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_MARK_MEMBER_NAME(_colorB,"_colorB");
	HX_MARK_MEMBER_NAME(_colorG,"_colorG");
	HX_MARK_MEMBER_NAME(_colorR,"_colorR");
	HX_MARK_MEMBER_NAME(_color,"_color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_VISIT_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_VISIT_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_VISIT_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_VISIT_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_VISIT_MEMBER_NAME(_diffuse,"_diffuse");
	HX_VISIT_MEMBER_NAME(_specularB,"_specularB");
	HX_VISIT_MEMBER_NAME(_specularG,"_specularG");
	HX_VISIT_MEMBER_NAME(_specularR,"_specularR");
	HX_VISIT_MEMBER_NAME(_specular,"_specular");
	HX_VISIT_MEMBER_NAME(_ambientB,"_ambientB");
	HX_VISIT_MEMBER_NAME(_ambientG,"_ambientG");
	HX_VISIT_MEMBER_NAME(_ambientR,"_ambientR");
	HX_VISIT_MEMBER_NAME(_ambient,"_ambient");
	HX_VISIT_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_VISIT_MEMBER_NAME(_colorB,"_colorB");
	HX_VISIT_MEMBER_NAME(_colorG,"_colorG");
	HX_VISIT_MEMBER_NAME(_colorR,"_colorR");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colorB") ) { return _colorB; }
		if (HX_FIELD_EQ(inName,"_colorG") ) { return _colorG; }
		if (HX_FIELD_EQ(inName,"_colorR") ) { return _colorR; }
		if (HX_FIELD_EQ(inName,"ambient") ) { return get_ambient(); }
		if (HX_FIELD_EQ(inName,"diffuse") ) { return get_diffuse(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_diffuse") ) { return _diffuse; }
		if (HX_FIELD_EQ(inName,"_ambient") ) { return _ambient; }
		if (HX_FIELD_EQ(inName,"specular") ) { return get_specular(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { return _diffuseB; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { return _diffuseG; }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { return _diffuseR; }
		if (HX_FIELD_EQ(inName,"_specular") ) { return _specular; }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { return _ambientB; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { return _ambientG; }
		if (HX_FIELD_EQ(inName,"_ambientR") ) { return _ambientR; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularB") ) { return _specularB; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { return _specularG; }
		if (HX_FIELD_EQ(inName,"_specularR") ) { return _specularR; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return set_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return get_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"set_diffuse") ) { return set_diffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuse") ) { return get_diffuse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_specular") ) { return set_specular_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specular") ) { return get_specular_dyn(); }
		if (HX_FIELD_EQ(inName,"shadowMapper") ) { return get_shadowMapper(); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return get_ambientColor(); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return get_castsShadows(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDiffuse") ) { return updateDiffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAmbient") ) { return updateAmbient_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { return _shadowMapper; }
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { return _castsShadows; }
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { return _ambientColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateSpecular") ) { return updateSpecular_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_shadowMapper") ) { return set_shadowMapper_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadowMapper") ) { return get_shadowMapper_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return set_ambientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return get_ambientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_castsShadows") ) { return set_castsShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return get_castsShadows_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return createShadowMapper_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getObjectProjectionMatrix") ) { return getObjectProjectionMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_colorB") ) { _colorB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorG") ) { _colorG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorR") ) { _colorR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ambient") ) { return set_ambient(inValue); }
		if (HX_FIELD_EQ(inName,"diffuse") ) { return set_diffuse(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_diffuse") ) { _diffuse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambient") ) { _ambient=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specular") ) { return set_specular(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { _diffuseB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { _diffuseG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { _diffuseR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specular") ) { _specular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { _ambientB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { _ambientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientR") ) { _ambientR=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularB") ) { _specularB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { _specularG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularR") ) { _specularR=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowMapper") ) { return set_shadowMapper(inValue); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return set_ambientColor(inValue); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return set_castsShadows(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { _shadowMapper=inValue.Cast< ::away3d::lights::shadowmaps::ShadowMapperBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { _castsShadows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { _ambientColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shadowMapper"));
	outFields->push(HX_CSTRING("_castsShadows"));
	outFields->push(HX_CSTRING("_diffuseB"));
	outFields->push(HX_CSTRING("_diffuseG"));
	outFields->push(HX_CSTRING("_diffuseR"));
	outFields->push(HX_CSTRING("_diffuse"));
	outFields->push(HX_CSTRING("_specularB"));
	outFields->push(HX_CSTRING("_specularG"));
	outFields->push(HX_CSTRING("_specularR"));
	outFields->push(HX_CSTRING("_specular"));
	outFields->push(HX_CSTRING("_ambientB"));
	outFields->push(HX_CSTRING("_ambientG"));
	outFields->push(HX_CSTRING("_ambientR"));
	outFields->push(HX_CSTRING("_ambient"));
	outFields->push(HX_CSTRING("_ambientColor"));
	outFields->push(HX_CSTRING("_colorB"));
	outFields->push(HX_CSTRING("_colorG"));
	outFields->push(HX_CSTRING("_colorR"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("shadowMapper"));
	outFields->push(HX_CSTRING("ambientColor"));
	outFields->push(HX_CSTRING("ambient"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("diffuse"));
	outFields->push(HX_CSTRING("specular"));
	outFields->push(HX_CSTRING("castsShadows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_shadowMapper"),
	HX_CSTRING("get_shadowMapper"),
	HX_CSTRING("updateDiffuse"),
	HX_CSTRING("updateSpecular"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("getObjectProjectionMatrix"),
	HX_CSTRING("updateAmbient"),
	HX_CSTRING("set_ambientColor"),
	HX_CSTRING("get_ambientColor"),
	HX_CSTRING("set_ambient"),
	HX_CSTRING("get_ambient"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_diffuse"),
	HX_CSTRING("get_diffuse"),
	HX_CSTRING("set_specular"),
	HX_CSTRING("get_specular"),
	HX_CSTRING("createShadowMapper"),
	HX_CSTRING("set_castsShadows"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("_shadowMapper"),
	HX_CSTRING("_castsShadows"),
	HX_CSTRING("_diffuseB"),
	HX_CSTRING("_diffuseG"),
	HX_CSTRING("_diffuseR"),
	HX_CSTRING("_diffuse"),
	HX_CSTRING("_specularB"),
	HX_CSTRING("_specularG"),
	HX_CSTRING("_specularR"),
	HX_CSTRING("_specular"),
	HX_CSTRING("_ambientB"),
	HX_CSTRING("_ambientG"),
	HX_CSTRING("_ambientR"),
	HX_CSTRING("_ambient"),
	HX_CSTRING("_ambientColor"),
	HX_CSTRING("_colorB"),
	HX_CSTRING("_colorG"),
	HX_CSTRING("_colorR"),
	HX_CSTRING("_color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightBase_obj::__mClass,"__mClass");
};

Class LightBase_obj::__mClass;

void LightBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.LightBase"), hx::TCanCast< LightBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
