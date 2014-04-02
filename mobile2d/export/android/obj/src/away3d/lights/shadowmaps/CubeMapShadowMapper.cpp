#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
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
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderCubeTexture
#include <away3d/textures/RenderCubeTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace lights{
namespace shadowmaps{

Void CubeMapShadowMapper_obj::__construct()
{
HX_STACK_PUSH("CubeMapShadowMapper::new","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_depthMapSize = (int)512;
	HX_STACK_LINE(25)
	this->_needsRender = ::flash::_Vector::Vector_Impl__obj::_new((int)6,true);
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		Dynamic array = this->_needsRender;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(26)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(26)
		while((((c)++ < (int)6))){
			HX_STACK_LINE(26)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(26)
		array;
	}
	HX_STACK_LINE(27)
	this->initCameras();
}
;
	return null();
}

CubeMapShadowMapper_obj::~CubeMapShadowMapper_obj() { }

Dynamic CubeMapShadowMapper_obj::__CreateEmpty() { return  new CubeMapShadowMapper_obj; }
hx::ObjectPtr< CubeMapShadowMapper_obj > CubeMapShadowMapper_obj::__new()
{  hx::ObjectPtr< CubeMapShadowMapper_obj > result = new CubeMapShadowMapper_obj();
	result->__construct();
	return result;}

Dynamic CubeMapShadowMapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeMapShadowMapper_obj > result = new CubeMapShadowMapper_obj();
	result->__construct();
	return result;}

Void CubeMapShadowMapper_obj::drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer){
{
		HX_STACK_PUSH("CubeMapShadowMapper::drawDepthMap","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(scene,"scene");
		HX_STACK_ARG(renderer,"renderer");
		HX_STACK_LINE(72)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(73)
		while(((i < (int)6))){
			HX_STACK_LINE(74)
			if ((this->_needsRender->__get(i))){
				HX_STACK_LINE(75)
				this->_casterCollector->set_camera(this->_depthCameras->__get(i).StaticCast< ::away3d::cameras::Camera3D >());
				HX_STACK_LINE(76)
				this->_casterCollector->clear();
				HX_STACK_LINE(77)
				scene->traversePartitions(this->_casterCollector);
				HX_STACK_LINE(78)
				renderer->render(this->_casterCollector,target,null(),i);
				HX_STACK_LINE(79)
				this->_casterCollector->cleanUp();
			}
			HX_STACK_LINE(81)
			++(i);
		}
	}
return null();
}


Void CubeMapShadowMapper_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
{
		HX_STACK_PUSH("CubeMapShadowMapper::updateDepthProjection","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewCamera,"viewCamera");
		HX_STACK_LINE(59)
		Float maxDistance = (hx::TCast< away3d::lights::PointLight >::cast(this->_light))->_fallOff;		HX_STACK_VAR(maxDistance,"maxDistance");
		HX_STACK_LINE(60)
		::flash::geom::Vector3D pos = this->_light->get_scenePosition();		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(62)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(63)
		while(((i < (int)6))){
			HX_STACK_LINE(64)
			this->_lenses->__get(i).StaticCast< ::away3d::cameras::lenses::PerspectiveLens >()->set_far(maxDistance);
			HX_STACK_LINE(65)
			this->_depthCameras->__get(i).StaticCast< ::away3d::cameras::Camera3D >()->set_position(pos);
			HX_STACK_LINE(66)
			this->_needsRender[i] = true;
			HX_STACK_LINE(67)
			++(i);
		}
	}
return null();
}


::away3d::textures::TextureProxyBase CubeMapShadowMapper_obj::createDepthTexture( ){
	HX_STACK_PUSH("CubeMapShadowMapper::createDepthTexture","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return ::away3d::textures::RenderCubeTexture_obj::__new(this->_depthMapSize);
}


Void CubeMapShadowMapper_obj::addCamera( Float rotationX,Float rotationY,Float rotationZ){
{
		HX_STACK_PUSH("CubeMapShadowMapper::addCamera","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rotationX,"rotationX");
		HX_STACK_ARG(rotationY,"rotationY");
		HX_STACK_ARG(rotationZ,"rotationZ");
		HX_STACK_LINE(43)
		::away3d::cameras::Camera3D cam = ::away3d::cameras::Camera3D_obj::__new(null());		HX_STACK_VAR(cam,"cam");
		HX_STACK_LINE(44)
		cam->set_rotationX(rotationX);
		HX_STACK_LINE(45)
		cam->set_rotationY(rotationY);
		HX_STACK_LINE(46)
		cam->set_rotationZ(rotationZ);
		HX_STACK_LINE(47)
		cam->get_lens()->set_near(.01);
		HX_STACK_LINE(48)
		(hx::TCast< away3d::cameras::lenses::PerspectiveLens >::cast(cam->get_lens()))->set_fieldOfView((int)90);
		HX_STACK_LINE(49)
		this->_lenses->__Field(HX_CSTRING("push"),true)(hx::TCast< away3d::cameras::lenses::PerspectiveLens >::cast(cam->get_lens()));
		HX_STACK_LINE(50)
		cam->get_lens()->set_aspectRatio((int)1);
		HX_STACK_LINE(51)
		this->_depthCameras->__Field(HX_CSTRING("push"),true)(cam);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeMapShadowMapper_obj,addCamera,(void))

Void CubeMapShadowMapper_obj::initCameras( ){
{
		HX_STACK_PUSH("CubeMapShadowMapper::initCameras","away3d/lights/shadowmaps/CubeMapShadowMapper.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->_depthCameras = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(32)
		this->_lenses = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(34)
		this->addCamera((int)0,(int)90,(int)0);
		HX_STACK_LINE(35)
		this->addCamera((int)0,(int)-90,(int)0);
		HX_STACK_LINE(36)
		this->addCamera((int)-90,(int)0,(int)0);
		HX_STACK_LINE(37)
		this->addCamera((int)90,(int)0,(int)0);
		HX_STACK_LINE(38)
		this->addCamera((int)0,(int)0,(int)0);
		HX_STACK_LINE(39)
		this->addCamera((int)0,(int)180,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CubeMapShadowMapper_obj,initCameras,(void))


CubeMapShadowMapper_obj::CubeMapShadowMapper_obj()
{
}

void CubeMapShadowMapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeMapShadowMapper);
	HX_MARK_MEMBER_NAME(_needsRender,"_needsRender");
	HX_MARK_MEMBER_NAME(_lenses,"_lenses");
	HX_MARK_MEMBER_NAME(_depthCameras,"_depthCameras");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeMapShadowMapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_needsRender,"_needsRender");
	HX_VISIT_MEMBER_NAME(_lenses,"_lenses");
	HX_VISIT_MEMBER_NAME(_depthCameras,"_depthCameras");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CubeMapShadowMapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_lenses") ) { return _lenses; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addCamera") ) { return addCamera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initCameras") ) { return initCameras_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return drawDepthMap_dyn(); }
		if (HX_FIELD_EQ(inName,"_needsRender") ) { return _needsRender; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthCameras") ) { return _depthCameras; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createDepthTexture") ) { return createDepthTexture_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return updateDepthProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeMapShadowMapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_lenses") ) { _lenses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_needsRender") ) { _needsRender=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthCameras") ) { _depthCameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeMapShadowMapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_needsRender"));
	outFields->push(HX_CSTRING("_lenses"));
	outFields->push(HX_CSTRING("_depthCameras"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawDepthMap"),
	HX_CSTRING("updateDepthProjection"),
	HX_CSTRING("createDepthTexture"),
	HX_CSTRING("addCamera"),
	HX_CSTRING("initCameras"),
	HX_CSTRING("_needsRender"),
	HX_CSTRING("_lenses"),
	HX_CSTRING("_depthCameras"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeMapShadowMapper_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeMapShadowMapper_obj::__mClass,"__mClass");
};

Class CubeMapShadowMapper_obj::__mClass;

void CubeMapShadowMapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.shadowmaps.CubeMapShadowMapper"), hx::TCanCast< CubeMapShadowMapper_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubeMapShadowMapper_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
