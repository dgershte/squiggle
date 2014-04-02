#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
#endif
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
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_CameraNode
#include <away3d/core/partition/CameraNode.h>
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
#ifndef INCLUDED_away3d_events_CameraEvent
#include <away3d/events/CameraEvent.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
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
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace cameras{

Void Camera3D_obj::__construct(::away3d::cameras::lenses::LensBase lens)
{
HX_STACK_PUSH("Camera3D::new","away3d/cameras/Camera3D.hx",40);
{
	HX_STACK_LINE(41)
	this->_viewProjection = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(42)
	this->_viewProjectionDirty = true;
	HX_STACK_LINE(43)
	this->_frustumPlanesDirty = true;
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	this->_lens = lens;
	HX_STACK_LINE(47)
	if (((this->_lens == null()))){
		HX_STACK_LINE(47)
		this->_lens = ::away3d::cameras::lenses::PerspectiveLens_obj::__new(null());
	}
	HX_STACK_LINE(48)
	this->_lens->addEventListener(::away3d::events::LensEvent_obj::MATRIX_CHANGED,this->onLensMatrixChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	this->_frustumPlanes = ::flash::_Vector::Vector_Impl__obj::_new((int)6,true);
	HX_STACK_LINE(51)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(52)
	while(((i < (int)6))){
		HX_STACK_LINE(53)
		this->_frustumPlanes[i] = ::away3d::core::math::Plane3D_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(54)
		++(i);
	}
	HX_STACK_LINE(56)
	this->set_z((int)-1000);
}
;
	return null();
}

Camera3D_obj::~Camera3D_obj() { }

Dynamic Camera3D_obj::__CreateEmpty() { return  new Camera3D_obj; }
hx::ObjectPtr< Camera3D_obj > Camera3D_obj::__new(::away3d::cameras::lenses::LensBase lens)
{  hx::ObjectPtr< Camera3D_obj > result = new Camera3D_obj();
	result->__construct(lens);
	return result;}

Dynamic Camera3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera3D_obj > result = new Camera3D_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::geom::Vector3D Camera3D_obj::project( ::flash::geom::Vector3D point3d){
	HX_STACK_PUSH("Camera3D::project","away3d/cameras/Camera3D.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point3d,"point3d");
	HX_STACK_LINE(279)
	return this->get_lens()->project(this->get_inverseSceneTransform()->transformVector(point3d));
}


HX_DEFINE_DYNAMIC_FUNC1(Camera3D_obj,project,return )

::flash::geom::Vector3D Camera3D_obj::getRay( Float nX,Float nY,Float sZ){
	HX_STACK_PUSH("Camera3D::getRay","away3d/cameras/Camera3D.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(nX,"nX");
	HX_STACK_ARG(nY,"nY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(268)
	return this->get_sceneTransform()->deltaTransformVector(this->get_lens()->unproject(nX,nY,sZ));
}


HX_DEFINE_DYNAMIC_FUNC3(Camera3D_obj,getRay,return )

::flash::geom::Vector3D Camera3D_obj::unproject( Float nX,Float nY,Float sZ){
	HX_STACK_PUSH("Camera3D::unproject","away3d/cameras/Camera3D.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(nX,"nX");
	HX_STACK_ARG(nY,"nY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(255)
	return this->get_sceneTransform()->transformVector(this->get_lens()->unproject(nX,nY,sZ));
}


HX_DEFINE_DYNAMIC_FUNC3(Camera3D_obj,unproject,return )

::flash::geom::Matrix3D Camera3D_obj::get_viewProjection( ){
	HX_STACK_PUSH("Camera3D::get_viewProjection","away3d/cameras/Camera3D.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(238)
	if ((this->_viewProjectionDirty)){
		HX_STACK_LINE(239)
		this->_viewProjection->copyFrom(this->get_inverseSceneTransform());
		HX_STACK_LINE(240)
		this->_viewProjection->append(this->_lens->get_matrix());
		HX_STACK_LINE(241)
		this->_viewProjectionDirty = false;
	}
	HX_STACK_LINE(243)
	return this->_viewProjection;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_viewProjection,return )

::away3d::cameras::lenses::LensBase Camera3D_obj::set_lens( ::away3d::cameras::lenses::LensBase value){
	HX_STACK_PUSH("Camera3D::set_lens","away3d/cameras/Camera3D.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(224)
	if (((this->_lens == value))){
		HX_STACK_LINE(224)
		return value;
	}
	HX_STACK_LINE(225)
	if (((value == null()))){
		HX_STACK_LINE(225)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Lens cannot be null!"),null()));
	}
	HX_STACK_LINE(226)
	this->_lens->removeEventListener(::away3d::events::LensEvent_obj::MATRIX_CHANGED,this->onLensMatrixChanged_dyn(),null());
	HX_STACK_LINE(227)
	this->_lens = value;
	HX_STACK_LINE(228)
	this->_lens->addEventListener(::away3d::events::LensEvent_obj::MATRIX_CHANGED,this->onLensMatrixChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(229)
	this->dispatchEvent(::away3d::events::CameraEvent_obj::__new(::away3d::events::CameraEvent_obj::LENS_CHANGED,hx::ObjectPtr<OBJ_>(this),null(),null()));
	HX_STACK_LINE(230)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera3D_obj,set_lens,return )

::away3d::cameras::lenses::LensBase Camera3D_obj::get_lens( ){
	HX_STACK_PUSH("Camera3D::get_lens","away3d/cameras/Camera3D.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->_lens;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_lens,return )

::away3d::core::partition::EntityNode Camera3D_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("Camera3D::createEntityPartitionNode","away3d/cameras/Camera3D.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return ::away3d::core::partition::CameraNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


Void Camera3D_obj::updateBounds( ){
{
		HX_STACK_PUSH("Camera3D::updateBounds","away3d/cameras/Camera3D.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		this->_bounds->nullify();
		HX_STACK_LINE(204)
		this->_boundsInvalid = false;
	}
return null();
}


Void Camera3D_obj::invalidateSceneTransform( ){
{
		HX_STACK_PUSH("Camera3D::invalidateSceneTransform","away3d/cameras/Camera3D.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_LINE(193)
		this->super::invalidateSceneTransform();
		HX_STACK_LINE(194)
		this->_viewProjectionDirty = true;
		HX_STACK_LINE(195)
		this->_frustumPlanesDirty = true;
	}
return null();
}


Void Camera3D_obj::updateFrustum( ){
{
		HX_STACK_PUSH("Camera3D::updateFrustum","away3d/cameras/Camera3D.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(84)
		Float b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(85)
		Float c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(87)
		Float c11;		HX_STACK_VAR(c11,"c11");
		HX_STACK_LINE(88)
		Float c12;		HX_STACK_VAR(c12,"c12");
		HX_STACK_LINE(89)
		Float c13;		HX_STACK_VAR(c13,"c13");
		HX_STACK_LINE(90)
		Float c14;		HX_STACK_VAR(c14,"c14");
		HX_STACK_LINE(91)
		Float c21;		HX_STACK_VAR(c21,"c21");
		HX_STACK_LINE(92)
		Float c22;		HX_STACK_VAR(c22,"c22");
		HX_STACK_LINE(93)
		Float c23;		HX_STACK_VAR(c23,"c23");
		HX_STACK_LINE(94)
		Float c24;		HX_STACK_VAR(c24,"c24");
		HX_STACK_LINE(95)
		Float c31;		HX_STACK_VAR(c31,"c31");
		HX_STACK_LINE(96)
		Float c32;		HX_STACK_VAR(c32,"c32");
		HX_STACK_LINE(97)
		Float c33;		HX_STACK_VAR(c33,"c33");
		HX_STACK_LINE(98)
		Float c34;		HX_STACK_VAR(c34,"c34");
		HX_STACK_LINE(99)
		Float c41;		HX_STACK_VAR(c41,"c41");
		HX_STACK_LINE(100)
		Float c42;		HX_STACK_VAR(c42,"c42");
		HX_STACK_LINE(101)
		Float c43;		HX_STACK_VAR(c43,"c43");
		HX_STACK_LINE(102)
		Float c44;		HX_STACK_VAR(c44,"c44");
		HX_STACK_LINE(103)
		::away3d::core::math::Plane3D p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(104)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(105)
		Float invLen;		HX_STACK_VAR(invLen,"invLen");
		HX_STACK_LINE(106)
		this->get_viewProjection()->copyRawDataTo(raw,null(),null());
		HX_STACK_LINE(107)
		c11 = raw->__get((int)0);
		HX_STACK_LINE(108)
		c12 = raw->__get((int)4);
		HX_STACK_LINE(109)
		c13 = raw->__get((int)8);
		HX_STACK_LINE(110)
		c14 = raw->__get((int)12);
		HX_STACK_LINE(111)
		c21 = raw->__get((int)1);
		HX_STACK_LINE(112)
		c22 = raw->__get((int)5);
		HX_STACK_LINE(113)
		c23 = raw->__get((int)9);
		HX_STACK_LINE(114)
		c24 = raw->__get((int)13);
		HX_STACK_LINE(115)
		c31 = raw->__get((int)2);
		HX_STACK_LINE(116)
		c32 = raw->__get((int)6);
		HX_STACK_LINE(117)
		c33 = raw->__get((int)10);
		HX_STACK_LINE(118)
		c34 = raw->__get((int)14);
		HX_STACK_LINE(119)
		c41 = raw->__get((int)3);
		HX_STACK_LINE(120)
		c42 = raw->__get((int)7);
		HX_STACK_LINE(121)
		c43 = raw->__get((int)11);
		HX_STACK_LINE(122)
		c44 = raw->__get((int)15);
		HX_STACK_LINE(124)
		p = this->_frustumPlanes->__get((int)0).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(125)
		a = (c41 + c11);
		HX_STACK_LINE(126)
		b = (c42 + c12);
		HX_STACK_LINE(127)
		c = (c43 + c13);
		HX_STACK_LINE(128)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(129)
		p->a = (a * invLen);
		HX_STACK_LINE(130)
		p->b = (b * invLen);
		HX_STACK_LINE(131)
		p->c = (c * invLen);
		HX_STACK_LINE(132)
		p->d = (-(((c44 + c14))) * invLen);
		HX_STACK_LINE(134)
		p = this->_frustumPlanes->__get((int)1).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(135)
		a = (c41 - c11);
		HX_STACK_LINE(136)
		b = (c42 - c12);
		HX_STACK_LINE(137)
		c = (c43 - c13);
		HX_STACK_LINE(138)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(139)
		p->a = (a * invLen);
		HX_STACK_LINE(140)
		p->b = (b * invLen);
		HX_STACK_LINE(141)
		p->c = (c * invLen);
		HX_STACK_LINE(142)
		p->d = (((c14 - c44)) * invLen);
		HX_STACK_LINE(144)
		p = this->_frustumPlanes->__get((int)2).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(145)
		a = (c41 + c21);
		HX_STACK_LINE(146)
		b = (c42 + c22);
		HX_STACK_LINE(147)
		c = (c43 + c23);
		HX_STACK_LINE(148)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(149)
		p->a = (a * invLen);
		HX_STACK_LINE(150)
		p->b = (b * invLen);
		HX_STACK_LINE(151)
		p->c = (c * invLen);
		HX_STACK_LINE(152)
		p->d = (-(((c44 + c24))) * invLen);
		HX_STACK_LINE(154)
		p = this->_frustumPlanes->__get((int)3).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(155)
		a = (c41 - c21);
		HX_STACK_LINE(156)
		b = (c42 - c22);
		HX_STACK_LINE(157)
		c = (c43 - c23);
		HX_STACK_LINE(158)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(159)
		p->a = (a * invLen);
		HX_STACK_LINE(160)
		p->b = (b * invLen);
		HX_STACK_LINE(161)
		p->c = (c * invLen);
		HX_STACK_LINE(162)
		p->d = (((c24 - c44)) * invLen);
		HX_STACK_LINE(164)
		p = this->_frustumPlanes->__get((int)4).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(165)
		a = c31;
		HX_STACK_LINE(166)
		b = c32;
		HX_STACK_LINE(167)
		c = c33;
		HX_STACK_LINE(168)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(169)
		p->a = (a * invLen);
		HX_STACK_LINE(170)
		p->b = (b * invLen);
		HX_STACK_LINE(171)
		p->c = (c * invLen);
		HX_STACK_LINE(172)
		p->d = (-(c34) * invLen);
		HX_STACK_LINE(174)
		p = this->_frustumPlanes->__get((int)5).StaticCast< ::away3d::core::math::Plane3D >();
		HX_STACK_LINE(175)
		a = (c41 - c31);
		HX_STACK_LINE(176)
		b = (c42 - c32);
		HX_STACK_LINE(177)
		c = (c43 - c33);
		HX_STACK_LINE(178)
		invLen = (Float((int)1) / Float(::Math_obj::sqrt((((a * a) + (b * b)) + (c * c)))));
		HX_STACK_LINE(179)
		p->a = (a * invLen);
		HX_STACK_LINE(180)
		p->b = (b * invLen);
		HX_STACK_LINE(181)
		p->c = (c * invLen);
		HX_STACK_LINE(182)
		p->d = (((c34 - c44)) * invLen);
		HX_STACK_LINE(185)
		this->_frustumPlanesDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,updateFrustum,(void))

Array< ::Dynamic > Camera3D_obj::get_frustumPlanes( ){
	HX_STACK_PUSH("Camera3D::get_frustumPlanes","away3d/cameras/Camera3D.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	if ((this->_frustumPlanesDirty)){
		HX_STACK_LINE(78)
		this->updateFrustum();
	}
	HX_STACK_LINE(79)
	return this->_frustumPlanes;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera3D_obj,get_frustumPlanes,return )

Void Camera3D_obj::onLensMatrixChanged( ::away3d::events::LensEvent event){
{
		HX_STACK_PUSH("Camera3D::onLensMatrixChanged","away3d/cameras/Camera3D.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(68)
		this->_viewProjectionDirty = true;
		HX_STACK_LINE(69)
		this->_frustumPlanesDirty = true;
		HX_STACK_LINE(70)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera3D_obj,onLensMatrixChanged,(void))

::String Camera3D_obj::get_assetType( ){
	HX_STACK_PUSH("Camera3D::get_assetType","away3d/cameras/Camera3D.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return ::away3d::library::assets::AssetType_obj::CAMERA;
}


::away3d::bounds::BoundingVolumeBase Camera3D_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("Camera3D::getDefaultBoundingVolume","away3d/cameras/Camera3D.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return ::away3d::bounds::NullBounds_obj::__new(null(),null());
}



Camera3D_obj::Camera3D_obj()
{
}

void Camera3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera3D);
	HX_MARK_MEMBER_NAME(_frustumPlanesDirty,"_frustumPlanesDirty");
	HX_MARK_MEMBER_NAME(_frustumPlanes,"_frustumPlanes");
	HX_MARK_MEMBER_NAME(_lens,"_lens");
	HX_MARK_MEMBER_NAME(_viewProjectionDirty,"_viewProjectionDirty");
	HX_MARK_MEMBER_NAME(_viewProjection,"_viewProjection");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frustumPlanesDirty,"_frustumPlanesDirty");
	HX_VISIT_MEMBER_NAME(_frustumPlanes,"_frustumPlanes");
	HX_VISIT_MEMBER_NAME(_lens,"_lens");
	HX_VISIT_MEMBER_NAME(_viewProjectionDirty,"_viewProjectionDirty");
	HX_VISIT_MEMBER_NAME(_viewProjection,"_viewProjection");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Camera3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { return get_lens(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { return _lens; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getRay") ) { return getRay_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_lens") ) { return set_lens_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lens") ) { return get_lens_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateFrustum") ) { return updateFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"frustumPlanes") ) { return get_frustumPlanes(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frustumPlanes") ) { return _frustumPlanes; }
		if (HX_FIELD_EQ(inName,"viewProjection") ) { return get_viewProjection(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_viewProjection") ) { return _viewProjection; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_frustumPlanes") ) { return get_frustumPlanes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_viewProjection") ) { return get_viewProjection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onLensMatrixChanged") ) { return onLensMatrixChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"_frustumPlanesDirty") ) { return _frustumPlanesDirty; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewProjectionDirty") ) { return _viewProjectionDirty; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return invalidateSceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return getDefaultBoundingVolume_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { return set_lens(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { _lens=inValue.Cast< ::away3d::cameras::lenses::LensBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frustumPlanes") ) { _frustumPlanes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_viewProjection") ) { _viewProjection=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_frustumPlanesDirty") ) { _frustumPlanesDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewProjectionDirty") ) { _viewProjectionDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_frustumPlanesDirty"));
	outFields->push(HX_CSTRING("_frustumPlanes"));
	outFields->push(HX_CSTRING("_lens"));
	outFields->push(HX_CSTRING("_viewProjectionDirty"));
	outFields->push(HX_CSTRING("_viewProjection"));
	outFields->push(HX_CSTRING("viewProjection"));
	outFields->push(HX_CSTRING("lens"));
	outFields->push(HX_CSTRING("frustumPlanes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("project"),
	HX_CSTRING("getRay"),
	HX_CSTRING("unproject"),
	HX_CSTRING("get_viewProjection"),
	HX_CSTRING("set_lens"),
	HX_CSTRING("get_lens"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("invalidateSceneTransform"),
	HX_CSTRING("updateFrustum"),
	HX_CSTRING("get_frustumPlanes"),
	HX_CSTRING("onLensMatrixChanged"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("_frustumPlanesDirty"),
	HX_CSTRING("_frustumPlanes"),
	HX_CSTRING("_lens"),
	HX_CSTRING("_viewProjectionDirty"),
	HX_CSTRING("_viewProjection"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera3D_obj::__mClass,"__mClass");
};

Class Camera3D_obj::__mClass;

void Camera3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.cameras.Camera3D"), hx::TCanCast< Camera3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Camera3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace cameras
