#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
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
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
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
#ifndef INCLUDED_away3d_textures_RenderTexture
#include <away3d/textures/RenderTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
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
namespace away3d{
namespace lights{
namespace shadowmaps{

Void ShadowMapperBase_obj::__construct()
{
HX_STACK_PUSH("ShadowMapperBase::new","away3d/lights/shadowmaps/ShadowMapperBase.hx",31);
{
	HX_STACK_LINE(32)
	this->_depthMapSize = (int)2048;
	HX_STACK_LINE(33)
	this->_autoUpdateShadows = true;
	HX_STACK_LINE(34)
	this->_casterCollector = this->createCasterCollector();
}
;
	return null();
}

ShadowMapperBase_obj::~ShadowMapperBase_obj() { }

Dynamic ShadowMapperBase_obj::__CreateEmpty() { return  new ShadowMapperBase_obj; }
hx::ObjectPtr< ShadowMapperBase_obj > ShadowMapperBase_obj::__new()
{  hx::ObjectPtr< ShadowMapperBase_obj > result = new ShadowMapperBase_obj();
	result->__construct();
	return result;}

Dynamic ShadowMapperBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShadowMapperBase_obj > result = new ShadowMapperBase_obj();
	result->__construct();
	return result;}

Void ShadowMapperBase_obj::drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer){
{
		HX_STACK_PUSH("ShadowMapperBase::drawDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(scene,"scene");
		HX_STACK_ARG(renderer,"renderer");
		HX_STACK_LINE(128)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapperBase_obj,drawDepthMap,(void))

Void ShadowMapperBase_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
{
		HX_STACK_PUSH("ShadowMapperBase::updateDepthProjection","away3d/lights/shadowmaps/ShadowMapperBase.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewCamera,"viewCamera");
		HX_STACK_LINE(124)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,updateDepthProjection,(void))

Void ShadowMapperBase_obj::renderDepthMap( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::traverse::EntityCollector entityCollector,::away3d::core::render::DepthRenderer renderer){
{
		HX_STACK_PUSH("ShadowMapperBase::renderDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(renderer,"renderer");
		HX_STACK_LINE(118)
		this->_shadowsInvalid = false;
		HX_STACK_LINE(119)
		this->updateDepthProjection(entityCollector->get_camera());
		HX_STACK_LINE(120)
		if (((this->_depthMap == null()))){
			HX_STACK_LINE(120)
			this->_depthMap = this->createDepthTexture();
		}
		HX_STACK_LINE(121)
		this->drawDepthMap(this->_depthMap->getTextureForStage3D(stage3DProxy),entityCollector->scene,renderer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapperBase_obj,renderDepthMap,(void))

::away3d::textures::TextureProxyBase ShadowMapperBase_obj::createDepthTexture( ){
	HX_STACK_PUSH("ShadowMapperBase::createDepthTexture","away3d/lights/shadowmaps/ShadowMapperBase.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return ::away3d::textures::RenderTexture_obj::__new(this->_depthMapSize,this->_depthMapSize);
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,createDepthTexture,return )

Void ShadowMapperBase_obj::dispose( ){
{
		HX_STACK_PUSH("ShadowMapperBase::dispose","away3d/lights/shadowmaps/ShadowMapperBase.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(102)
		this->_casterCollector = null();
		HX_STACK_LINE(103)
		if (((bool((this->_depthMap != null())) && bool(!(this->_explicitDepthMap))))){
			HX_STACK_LINE(103)
			this->_depthMap->dispose();
		}
		HX_STACK_LINE(104)
		this->_depthMap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,dispose,(void))

int ShadowMapperBase_obj::set_depthMapSize( int value){
	HX_STACK_PUSH("ShadowMapperBase::set_depthMapSize","away3d/lights/shadowmaps/ShadowMapperBase.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(91)
	if (((value == this->_depthMapSize))){
		HX_STACK_LINE(91)
		return value;
	}
	HX_STACK_LINE(92)
	this->_depthMapSize = value;
	HX_STACK_LINE(93)
	if ((this->_explicitDepthMap)){
		HX_STACK_LINE(93)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Cannot set depth map size for the current renderer."),null()));
	}
	else{
		HX_STACK_LINE(94)
		if (((this->_depthMap != null()))){
			HX_STACK_LINE(95)
			this->_depthMap->dispose();
			HX_STACK_LINE(96)
			this->_depthMap = null();
		}
	}
	HX_STACK_LINE(98)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_depthMapSize,return )

int ShadowMapperBase_obj::get_depthMapSize( ){
	HX_STACK_PUSH("ShadowMapperBase::get_depthMapSize","away3d/lights/shadowmaps/ShadowMapperBase.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_depthMapSize;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_depthMapSize,return )

::away3d::textures::TextureProxyBase ShadowMapperBase_obj::get_depthMap( ){
	HX_STACK_PUSH("ShadowMapperBase::get_depthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	if (((this->_depthMap == null()))){
		HX_STACK_LINE(82)
		this->_depthMap = this->createDepthTexture();
	}
	HX_STACK_LINE(83)
	return this->_depthMap;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_depthMap,return )

::away3d::lights::LightBase ShadowMapperBase_obj::set_light( ::away3d::lights::LightBase value){
	HX_STACK_PUSH("ShadowMapperBase::set_light","away3d/lights/shadowmaps/ShadowMapperBase.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(76)
	this->_light = value;
	HX_STACK_LINE(77)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_light,return )

::away3d::lights::LightBase ShadowMapperBase_obj::get_light( ){
	HX_STACK_PUSH("ShadowMapperBase::get_light","away3d/lights/shadowmaps/ShadowMapperBase.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return this->_light;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_light,return )

Void ShadowMapperBase_obj::setDepthMap( ::away3d::textures::TextureProxyBase depthMap){
{
		HX_STACK_PUSH("ShadowMapperBase::setDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(depthMap,"depthMap");
		HX_STACK_LINE(60)
		if (((this->_depthMap == depthMap))){
			HX_STACK_LINE(60)
			return null();
		}
		HX_STACK_LINE(61)
		if (((bool((this->_depthMap != null())) && bool(!(this->_explicitDepthMap))))){
			HX_STACK_LINE(61)
			this->_depthMap->dispose();
		}
		HX_STACK_LINE(62)
		this->_depthMap = depthMap;
		HX_STACK_LINE(63)
		if (((this->_depthMap != null()))){
			HX_STACK_LINE(64)
			this->_explicitDepthMap = true;
			HX_STACK_LINE(65)
			this->_depthMapSize = this->_depthMap->get_width();
		}
		else{
			HX_STACK_LINE(68)
			this->_explicitDepthMap = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,setDepthMap,(void))

Void ShadowMapperBase_obj::updateShadows( ){
{
		HX_STACK_PUSH("ShadowMapperBase::updateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		this->_shadowsInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,updateShadows,(void))

bool ShadowMapperBase_obj::set_autoUpdateShadows( bool value){
	HX_STACK_PUSH("ShadowMapperBase::set_autoUpdateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(46)
	this->_autoUpdateShadows = value;
	HX_STACK_LINE(47)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_autoUpdateShadows,return )

bool ShadowMapperBase_obj::get_autoUpdateShadows( ){
	HX_STACK_PUSH("ShadowMapperBase::get_autoUpdateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return this->_autoUpdateShadows;
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_autoUpdateShadows,return )

::away3d::core::traverse::ShadowCasterCollector ShadowMapperBase_obj::createCasterCollector( ){
	HX_STACK_PUSH("ShadowMapperBase::createCasterCollector","away3d/lights/shadowmaps/ShadowMapperBase.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return ::away3d::core::traverse::ShadowCasterCollector_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,createCasterCollector,return )


ShadowMapperBase_obj::ShadowMapperBase_obj()
{
}

void ShadowMapperBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowMapperBase);
	HX_MARK_MEMBER_NAME(_shadowsInvalid,"_shadowsInvalid");
	HX_MARK_MEMBER_NAME(_autoUpdateShadows,"_autoUpdateShadows");
	HX_MARK_MEMBER_NAME(_explicitDepthMap,"_explicitDepthMap");
	HX_MARK_MEMBER_NAME(_light,"_light");
	HX_MARK_MEMBER_NAME(_depthMapSize,"_depthMapSize");
	HX_MARK_MEMBER_NAME(_depthMap,"_depthMap");
	HX_MARK_MEMBER_NAME(_casterCollector,"_casterCollector");
	HX_MARK_END_CLASS();
}

void ShadowMapperBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shadowsInvalid,"_shadowsInvalid");
	HX_VISIT_MEMBER_NAME(_autoUpdateShadows,"_autoUpdateShadows");
	HX_VISIT_MEMBER_NAME(_explicitDepthMap,"_explicitDepthMap");
	HX_VISIT_MEMBER_NAME(_light,"_light");
	HX_VISIT_MEMBER_NAME(_depthMapSize,"_depthMapSize");
	HX_VISIT_MEMBER_NAME(_depthMap,"_depthMap");
	HX_VISIT_MEMBER_NAME(_casterCollector,"_casterCollector");
}

Dynamic ShadowMapperBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { return get_light(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { return _light; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"depthMap") ) { return get_depthMap(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_light") ) { return set_light_dyn(); }
		if (HX_FIELD_EQ(inName,"get_light") ) { return get_light_dyn(); }
		if (HX_FIELD_EQ(inName,"_depthMap") ) { return _depthMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setDepthMap") ) { return setDepthMap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return drawDepthMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depthMap") ) { return get_depthMap_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMapSize") ) { return get_depthMapSize(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateShadows") ) { return updateShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"_depthMapSize") ) { return _depthMapSize; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDepthMap") ) { return renderDepthMap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowsInvalid") ) { return _shadowsInvalid; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_depthMapSize") ) { return set_depthMapSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depthMapSize") ) { return get_depthMapSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_casterCollector") ) { return _casterCollector; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_explicitDepthMap") ) { return _explicitDepthMap; }
		if (HX_FIELD_EQ(inName,"autoUpdateShadows") ) { return get_autoUpdateShadows(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createDepthTexture") ) { return createDepthTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_autoUpdateShadows") ) { return _autoUpdateShadows; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return updateDepthProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoUpdateShadows") ) { return set_autoUpdateShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoUpdateShadows") ) { return get_autoUpdateShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"createCasterCollector") ) { return createCasterCollector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShadowMapperBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { return set_light(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast< ::away3d::lights::LightBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_depthMap") ) { _depthMap=inValue.Cast< ::away3d::textures::TextureProxyBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthMapSize") ) { return set_depthMapSize(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthMapSize") ) { _depthMapSize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowsInvalid") ) { _shadowsInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_casterCollector") ) { _casterCollector=inValue.Cast< ::away3d::core::traverse::ShadowCasterCollector >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_explicitDepthMap") ) { _explicitDepthMap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoUpdateShadows") ) { return set_autoUpdateShadows(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoUpdateShadows") ) { _autoUpdateShadows=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowMapperBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shadowsInvalid"));
	outFields->push(HX_CSTRING("_autoUpdateShadows"));
	outFields->push(HX_CSTRING("_explicitDepthMap"));
	outFields->push(HX_CSTRING("_light"));
	outFields->push(HX_CSTRING("_depthMapSize"));
	outFields->push(HX_CSTRING("_depthMap"));
	outFields->push(HX_CSTRING("_casterCollector"));
	outFields->push(HX_CSTRING("depthMapSize"));
	outFields->push(HX_CSTRING("depthMap"));
	outFields->push(HX_CSTRING("light"));
	outFields->push(HX_CSTRING("autoUpdateShadows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawDepthMap"),
	HX_CSTRING("updateDepthProjection"),
	HX_CSTRING("renderDepthMap"),
	HX_CSTRING("createDepthTexture"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_depthMapSize"),
	HX_CSTRING("get_depthMapSize"),
	HX_CSTRING("get_depthMap"),
	HX_CSTRING("set_light"),
	HX_CSTRING("get_light"),
	HX_CSTRING("setDepthMap"),
	HX_CSTRING("updateShadows"),
	HX_CSTRING("set_autoUpdateShadows"),
	HX_CSTRING("get_autoUpdateShadows"),
	HX_CSTRING("createCasterCollector"),
	HX_CSTRING("_shadowsInvalid"),
	HX_CSTRING("_autoUpdateShadows"),
	HX_CSTRING("_explicitDepthMap"),
	HX_CSTRING("_light"),
	HX_CSTRING("_depthMapSize"),
	HX_CSTRING("_depthMap"),
	HX_CSTRING("_casterCollector"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadowMapperBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadowMapperBase_obj::__mClass,"__mClass");
};

Class ShadowMapperBase_obj::__mClass;

void ShadowMapperBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.shadowmaps.ShadowMapperBase"), hx::TCanCast< ShadowMapperBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShadowMapperBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
