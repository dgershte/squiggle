#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#include <away3d/cameras/lenses/FreeMatrixLens.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
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
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
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

Void DirectionalShadowMapper_obj::__construct()
{
HX_STACK_PUSH("DirectionalShadowMapper::new","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",32);
{
	HX_STACK_LINE(33)
	this->_lightOffset = (int)10000;
	HX_STACK_LINE(34)
	this->_snap = (int)64;
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(36)
	this->_cullPlanes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(37)
	this->_overallDepthLens = ::away3d::cameras::lenses::FreeMatrixLens_obj::__new();
	HX_STACK_LINE(38)
	this->_overallDepthCamera = ::away3d::cameras::Camera3D_obj::__new(this->_overallDepthLens);
	HX_STACK_LINE(39)
	this->_localFrustum = ::flash::_Vector::Vector_Impl__obj::_new((int)24,null());
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		Dynamic array = this->_localFrustum;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(40)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(40)
		while((((c)++ < (int)24))){
			HX_STACK_LINE(40)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(40)
		array;
	}
	HX_STACK_LINE(41)
	this->_matrix = ::flash::geom::Matrix3D_obj::__new(null());
}
;
	return null();
}

DirectionalShadowMapper_obj::~DirectionalShadowMapper_obj() { }

Dynamic DirectionalShadowMapper_obj::__CreateEmpty() { return  new DirectionalShadowMapper_obj; }
hx::ObjectPtr< DirectionalShadowMapper_obj > DirectionalShadowMapper_obj::__new()
{  hx::ObjectPtr< DirectionalShadowMapper_obj > result = new DirectionalShadowMapper_obj();
	result->__construct();
	return result;}

Dynamic DirectionalShadowMapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectionalShadowMapper_obj > result = new DirectionalShadowMapper_obj();
	result->__construct();
	return result;}

Void DirectionalShadowMapper_obj::updateProjectionFromFrustumCorners( ::away3d::cameras::Camera3D viewCamera,Array< Float > corners,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("DirectionalShadowMapper::updateProjectionFromFrustumCorners","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewCamera,"viewCamera");
		HX_STACK_ARG(corners,"corners");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(115)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(116)
		::flash::geom::Vector3D dir;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(117)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(118)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(119)
		Float z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(120)
		Float minX;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(121)
		Float minY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(122)
		Float maxX;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(123)
		Float maxY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(124)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(125)
		dir = (hx::TCast< away3d::lights::DirectionalLight >::cast(this->_light))->get_sceneDirection();
		HX_STACK_LINE(126)
		this->_overallDepthCamera->set_transform(this->_light->get_sceneTransform());
		HX_STACK_LINE(127)
		x = ((Float(((viewCamera->get_x() - (dir->x * this->_lightOffset)))) / Float(this->_snap)) * this->_snap);
		HX_STACK_LINE(128)
		y = ((Float(((viewCamera->get_y() - (dir->y * this->_lightOffset)))) / Float(this->_snap)) * this->_snap);
		HX_STACK_LINE(129)
		z = ((Float(((viewCamera->get_z() - (dir->z * this->_lightOffset)))) / Float(this->_snap)) * this->_snap);
		HX_STACK_LINE(130)
		this->_overallDepthCamera->set_x(x);
		HX_STACK_LINE(131)
		this->_overallDepthCamera->set_y(y);
		HX_STACK_LINE(132)
		this->_overallDepthCamera->set_z(z);
		HX_STACK_LINE(133)
		this->_matrix->copyFrom(this->_overallDepthCamera->get_inverseSceneTransform());
		HX_STACK_LINE(134)
		this->_matrix->prepend(viewCamera->get_sceneTransform());
		HX_STACK_LINE(135)
		this->_matrix->transformVectors(corners,this->_localFrustum);
		HX_STACK_LINE(136)
		minX = maxX = this->_localFrustum->__get((int)0);
		HX_STACK_LINE(137)
		minY = maxY = this->_localFrustum->__get((int)1);
		HX_STACK_LINE(138)
		this->_maxZ = this->_localFrustum->__get((int)2);
		HX_STACK_LINE(139)
		i = (int)3;
		HX_STACK_LINE(140)
		while(((i < (int)24))){
			HX_STACK_LINE(141)
			x = this->_localFrustum->__get(i);
			HX_STACK_LINE(142)
			y = this->_localFrustum->__get((i + (int)1));
			HX_STACK_LINE(143)
			z = this->_localFrustum->__get((i + (int)2));
			HX_STACK_LINE(144)
			if (((x < minX))){
				HX_STACK_LINE(144)
				minX = x;
			}
			HX_STACK_LINE(145)
			if (((x > maxX))){
				HX_STACK_LINE(145)
				maxX = x;
			}
			HX_STACK_LINE(146)
			if (((y < minY))){
				HX_STACK_LINE(146)
				minY = y;
			}
			HX_STACK_LINE(147)
			if (((y > maxY))){
				HX_STACK_LINE(147)
				maxY = y;
			}
			HX_STACK_LINE(148)
			if (((z > this->_maxZ))){
				HX_STACK_LINE(148)
				this->_maxZ = z;
			}
			HX_STACK_LINE(149)
			hx::AddEq(i,(int)3);
		}
		HX_STACK_LINE(152)
		this->_minZ = (int)1;
		HX_STACK_LINE(153)
		Float w = (maxX - minX);		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(154)
		Float h = (maxY - minY);		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(155)
		Float d = (Float((int)1) / Float(((this->_maxZ - this->_minZ))));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(156)
		if (((minX < (int)0))){
			HX_STACK_LINE(156)
			hx::SubEq(minX,this->_snap);
		}
		HX_STACK_LINE(157)
		if (((minY < (int)0))){
			HX_STACK_LINE(157)
			hx::SubEq(minY,this->_snap);
		}
		HX_STACK_LINE(158)
		minX = ((Float(minX) / Float(this->_snap)) * this->_snap);
		HX_STACK_LINE(159)
		minY = ((Float(minY) / Float(this->_snap)) * this->_snap);
		HX_STACK_LINE(160)
		Float snap2 = ((int)2 * this->_snap);		HX_STACK_VAR(snap2,"snap2");
		HX_STACK_LINE(161)
		w = ((((Float(w) / Float(snap2)) + (int)2)) * snap2);
		HX_STACK_LINE(162)
		h = ((((Float(h) / Float(snap2)) + (int)2)) * snap2);
		HX_STACK_LINE(163)
		maxX = (minX + w);
		HX_STACK_LINE(164)
		maxY = (minY + h);
		HX_STACK_LINE(165)
		w = (Float((int)1) / Float(w));
		HX_STACK_LINE(166)
		h = (Float((int)1) / Float(h));
		HX_STACK_LINE(167)
		raw[(int)0] = ((int)2 * w);
		HX_STACK_LINE(168)
		raw[(int)5] = ((int)2 * h);
		HX_STACK_LINE(169)
		raw[(int)10] = d;
		HX_STACK_LINE(170)
		raw[(int)12] = (-(((maxX + minX))) * w);
		HX_STACK_LINE(171)
		raw[(int)13] = (-(((maxY + minY))) * h);
		HX_STACK_LINE(172)
		raw[(int)14] = (-(this->_minZ) * d);
		HX_STACK_LINE(173)
		raw[(int)15] = (int)1;
		HX_STACK_LINE(174)
		raw[(int)1] = raw[(int)2] = raw[(int)3] = raw[(int)4] = raw[(int)6] = raw[(int)7] = raw[(int)8] = raw[(int)9] = raw[(int)11] = (int)0;
		HX_STACK_LINE(175)
		matrix->copyRawDataFrom(raw,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DirectionalShadowMapper_obj,updateProjectionFromFrustumCorners,(void))

Void DirectionalShadowMapper_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
{
		HX_STACK_PUSH("DirectionalShadowMapper::updateDepthProjection","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewCamera,"viewCamera");
		HX_STACK_LINE(109)
		this->updateProjectionFromFrustumCorners(viewCamera,viewCamera->get_lens()->get_frustumCorners(),this->_matrix);
		HX_STACK_LINE(110)
		this->_overallDepthLens->set_matrix(this->_matrix);
		HX_STACK_LINE(111)
		this->updateCullPlanes(viewCamera);
	}
return null();
}


Void DirectionalShadowMapper_obj::updateCullPlanes( ::away3d::cameras::Camera3D viewCamera){
{
		HX_STACK_PUSH("DirectionalShadowMapper::updateCullPlanes","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewCamera,"viewCamera");
		HX_STACK_LINE(88)
		Array< ::Dynamic > lightFrustumPlanes = this->_overallDepthCamera->get_frustumPlanes();		HX_STACK_VAR(lightFrustumPlanes,"lightFrustumPlanes");
		HX_STACK_LINE(89)
		Array< ::Dynamic > viewFrustumPlanes = viewCamera->get_frustumPlanes();		HX_STACK_VAR(viewFrustumPlanes,"viewFrustumPlanes");
		HX_STACK_LINE(91)
		this->_cullPlanes[(int)0] = lightFrustumPlanes->__get((int)0).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(92)
		this->_cullPlanes[(int)1] = lightFrustumPlanes->__get((int)1).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(93)
		this->_cullPlanes[(int)2] = lightFrustumPlanes->__get((int)2).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(94)
		this->_cullPlanes[(int)3] = lightFrustumPlanes->__get((int)3).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(95)
		::flash::geom::Vector3D dir = (hx::TCast< away3d::lights::DirectionalLight >::cast(this->_light))->get_sceneDirection();		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(96)
		Float dirX = dir->x;		HX_STACK_VAR(dirX,"dirX");
		HX_STACK_LINE(97)
		Float dirY = dir->y;		HX_STACK_VAR(dirY,"dirY");
		HX_STACK_LINE(98)
		Float dirZ = dir->z;		HX_STACK_VAR(dirZ,"dirZ");
		HX_STACK_LINE(99)
		int j = (int)4;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(100)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(101)
		while(((i < (int)6))){
			HX_STACK_LINE(102)
			::away3d::core::math::Plane3D plane = viewFrustumPlanes->__get(i).StaticCast< ::away3d::core::math::Plane3D >();		HX_STACK_VAR(plane,"plane");
			HX_STACK_LINE(103)
			if ((((((plane->a * dirX) + (plane->b * dirY)) + (plane->c * dirZ)) < (int)0))){
				HX_STACK_LINE(103)
				this->_cullPlanes[(j)++] = plane;
			}
			HX_STACK_LINE(104)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,updateCullPlanes,(void))

Void DirectionalShadowMapper_obj::drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer){
{
		HX_STACK_PUSH("DirectionalShadowMapper::drawDepthMap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(scene,"scene");
		HX_STACK_ARG(renderer,"renderer");
		HX_STACK_LINE(79)
		this->_casterCollector->set_camera(this->_overallDepthCamera);
		HX_STACK_LINE(80)
		this->_casterCollector->set_cullPlanes(this->_cullPlanes);
		HX_STACK_LINE(81)
		this->_casterCollector->clear();
		HX_STACK_LINE(82)
		scene->traversePartitions(this->_casterCollector);
		HX_STACK_LINE(83)
		renderer->render(this->_casterCollector,target,null(),null());
		HX_STACK_LINE(84)
		this->_casterCollector->cleanUp();
	}
return null();
}


Float DirectionalShadowMapper_obj::get_depth( ){
	HX_STACK_PUSH("DirectionalShadowMapper::get_depth","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return (this->_maxZ - this->_minZ);
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_depth,return )

::flash::geom::Matrix3D DirectionalShadowMapper_obj::get_depthProjection( ){
	HX_STACK_PUSH("DirectionalShadowMapper::get_depthProjection","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->_overallDepthCamera->get_viewProjection();
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_depthProjection,return )

Float DirectionalShadowMapper_obj::set_lightOffset( Float value){
	HX_STACK_PUSH("DirectionalShadowMapper::set_lightOffset","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(58)
	this->_lightOffset = value;
	HX_STACK_LINE(59)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,set_lightOffset,return )

Float DirectionalShadowMapper_obj::get_lightOffset( ){
	HX_STACK_PUSH("DirectionalShadowMapper::get_lightOffset","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->_lightOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_lightOffset,return )

Float DirectionalShadowMapper_obj::set_snap( Float value){
	HX_STACK_PUSH("DirectionalShadowMapper::set_snap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(49)
	this->_snap = value;
	HX_STACK_LINE(50)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DirectionalShadowMapper_obj,set_snap,return )

Float DirectionalShadowMapper_obj::get_snap( ){
	HX_STACK_PUSH("DirectionalShadowMapper::get_snap","away3d/lights/shadowmaps/DirectionalShadowMapper.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return this->_snap;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalShadowMapper_obj,get_snap,return )


DirectionalShadowMapper_obj::DirectionalShadowMapper_obj()
{
}

void DirectionalShadowMapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalShadowMapper);
	HX_MARK_MEMBER_NAME(_maxZ,"_maxZ");
	HX_MARK_MEMBER_NAME(_minZ,"_minZ");
	HX_MARK_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_MARK_MEMBER_NAME(_snap,"_snap");
	HX_MARK_MEMBER_NAME(_overallDepthLens,"_overallDepthLens");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_lightOffset,"_lightOffset");
	HX_MARK_MEMBER_NAME(_localFrustum,"_localFrustum");
	HX_MARK_MEMBER_NAME(_overallDepthCamera,"_overallDepthCamera");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalShadowMapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_maxZ,"_maxZ");
	HX_VISIT_MEMBER_NAME(_minZ,"_minZ");
	HX_VISIT_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_VISIT_MEMBER_NAME(_snap,"_snap");
	HX_VISIT_MEMBER_NAME(_overallDepthLens,"_overallDepthLens");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_lightOffset,"_lightOffset");
	HX_VISIT_MEMBER_NAME(_localFrustum,"_localFrustum");
	HX_VISIT_MEMBER_NAME(_overallDepthCamera,"_overallDepthCamera");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DirectionalShadowMapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"snap") ) { return get_snap(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_maxZ") ) { return _maxZ; }
		if (HX_FIELD_EQ(inName,"_minZ") ) { return _minZ; }
		if (HX_FIELD_EQ(inName,"_snap") ) { return _snap; }
		if (HX_FIELD_EQ(inName,"depth") ) { return get_depth(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_snap") ) { return set_snap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_snap") ) { return get_snap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { return _cullPlanes; }
		if (HX_FIELD_EQ(inName,"lightOffset") ) { return get_lightOffset(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return drawDepthMap_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightOffset") ) { return _lightOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_localFrustum") ) { return _localFrustum; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_lightOffset") ) { return set_lightOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lightOffset") ) { return get_lightOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"depthProjection") ) { return get_depthProjection(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateCullPlanes") ) { return updateCullPlanes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_overallDepthLens") ) { return _overallDepthLens; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_depthProjection") ) { return get_depthProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"_overallDepthCamera") ) { return _overallDepthCamera; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return updateDepthProjection_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"updateProjectionFromFrustumCorners") ) { return updateProjectionFromFrustumCorners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectionalShadowMapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"snap") ) { return set_snap(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_maxZ") ) { _maxZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minZ") ) { _minZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snap") ) { _snap=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { _cullPlanes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lightOffset") ) { return set_lightOffset(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightOffset") ) { _lightOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_localFrustum") ) { _localFrustum=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_overallDepthLens") ) { _overallDepthLens=inValue.Cast< ::away3d::cameras::lenses::FreeMatrixLens >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_overallDepthCamera") ) { _overallDepthCamera=inValue.Cast< ::away3d::cameras::Camera3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalShadowMapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_maxZ"));
	outFields->push(HX_CSTRING("_minZ"));
	outFields->push(HX_CSTRING("_cullPlanes"));
	outFields->push(HX_CSTRING("_snap"));
	outFields->push(HX_CSTRING("_overallDepthLens"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_lightOffset"));
	outFields->push(HX_CSTRING("_localFrustum"));
	outFields->push(HX_CSTRING("_overallDepthCamera"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("depthProjection"));
	outFields->push(HX_CSTRING("lightOffset"));
	outFields->push(HX_CSTRING("snap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateProjectionFromFrustumCorners"),
	HX_CSTRING("updateDepthProjection"),
	HX_CSTRING("updateCullPlanes"),
	HX_CSTRING("drawDepthMap"),
	HX_CSTRING("get_depth"),
	HX_CSTRING("get_depthProjection"),
	HX_CSTRING("set_lightOffset"),
	HX_CSTRING("get_lightOffset"),
	HX_CSTRING("set_snap"),
	HX_CSTRING("get_snap"),
	HX_CSTRING("_maxZ"),
	HX_CSTRING("_minZ"),
	HX_CSTRING("_cullPlanes"),
	HX_CSTRING("_snap"),
	HX_CSTRING("_overallDepthLens"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_lightOffset"),
	HX_CSTRING("_localFrustum"),
	HX_CSTRING("_overallDepthCamera"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectionalShadowMapper_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectionalShadowMapper_obj::__mClass,"__mClass");
};

Class DirectionalShadowMapper_obj::__mClass;

void DirectionalShadowMapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.lights.shadowmaps.DirectionalShadowMapper"), hx::TCanCast< DirectionalShadowMapper_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DirectionalShadowMapper_obj::__boot()
{
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
