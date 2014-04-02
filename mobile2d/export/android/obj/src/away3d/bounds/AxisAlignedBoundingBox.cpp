#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_AxisAlignedBoundingBox
#include <away3d/bounds/AxisAlignedBoundingBox.h>
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
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_PlaneClassification
#include <away3d/core/math/PlaneClassification.h>
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
#ifndef INCLUDED_away3d_primitives_WireframeCube
#include <away3d/primitives/WireframeCube.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
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
namespace bounds{

Void AxisAlignedBoundingBox_obj::__construct()
{
HX_STACK_PUSH("AxisAlignedBoundingBox::new","away3d/bounds/AxisAlignedBoundingBox.hx",31);
{
	HX_STACK_LINE(32)
	this->_centerX = (int)0;
	HX_STACK_LINE(33)
	this->_centerY = (int)0;
	HX_STACK_LINE(34)
	this->_centerZ = (int)0;
	HX_STACK_LINE(35)
	this->_halfExtentsX = (int)0;
	HX_STACK_LINE(36)
	this->_halfExtentsY = (int)0;
	HX_STACK_LINE(37)
	this->_halfExtentsZ = (int)0;
	HX_STACK_LINE(38)
	super::__construct();
}
;
	return null();
}

AxisAlignedBoundingBox_obj::~AxisAlignedBoundingBox_obj() { }

Dynamic AxisAlignedBoundingBox_obj::__CreateEmpty() { return  new AxisAlignedBoundingBox_obj; }
hx::ObjectPtr< AxisAlignedBoundingBox_obj > AxisAlignedBoundingBox_obj::__new()
{  hx::ObjectPtr< AxisAlignedBoundingBox_obj > result = new AxisAlignedBoundingBox_obj();
	result->__construct();
	return result;}

Dynamic AxisAlignedBoundingBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AxisAlignedBoundingBox_obj > result = new AxisAlignedBoundingBox_obj();
	result->__construct();
	return result;}

Void AxisAlignedBoundingBox_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("AxisAlignedBoundingBox::transformFrom","away3d/bounds/AxisAlignedBoundingBox.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(271)
		::away3d::bounds::AxisAlignedBoundingBox aabb = hx::TCast< away3d::bounds::AxisAlignedBoundingBox >::cast(bounds);		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(272)
		Float cx = aabb->_centerX;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(273)
		Float cy = aabb->_centerY;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(274)
		Float cz = aabb->_centerZ;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(275)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(276)
		matrix->copyRawDataTo(raw,null(),null());
		HX_STACK_LINE(277)
		Float m11 = raw->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(278)
		Float m12 = raw->__get((int)4);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(279)
		Float m13 = raw->__get((int)8);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(280)
		Float m14 = raw->__get((int)12);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(281)
		Float m21 = raw->__get((int)1);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(282)
		Float m22 = raw->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(283)
		Float m23 = raw->__get((int)9);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(284)
		Float m24 = raw->__get((int)13);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(285)
		Float m31 = raw->__get((int)2);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(286)
		Float m32 = raw->__get((int)6);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(287)
		Float m33 = raw->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(288)
		Float m34 = raw->__get((int)14);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(289)
		this->_centerX = ((((cx * m11) + (cy * m12)) + (cz * m13)) + m14);
		HX_STACK_LINE(290)
		this->_centerY = ((((cx * m21) + (cy * m22)) + (cz * m23)) + m24);
		HX_STACK_LINE(291)
		this->_centerZ = ((((cx * m31) + (cy * m32)) + (cz * m33)) + m34);
		HX_STACK_LINE(292)
		if (((m11 < (int)0))){
			HX_STACK_LINE(292)
			m11 = -(m11);
		}
		HX_STACK_LINE(293)
		if (((m12 < (int)0))){
			HX_STACK_LINE(293)
			m12 = -(m12);
		}
		HX_STACK_LINE(294)
		if (((m13 < (int)0))){
			HX_STACK_LINE(294)
			m13 = -(m13);
		}
		HX_STACK_LINE(295)
		if (((m21 < (int)0))){
			HX_STACK_LINE(295)
			m21 = -(m21);
		}
		HX_STACK_LINE(296)
		if (((m22 < (int)0))){
			HX_STACK_LINE(296)
			m22 = -(m22);
		}
		HX_STACK_LINE(297)
		if (((m23 < (int)0))){
			HX_STACK_LINE(297)
			m23 = -(m23);
		}
		HX_STACK_LINE(298)
		if (((m31 < (int)0))){
			HX_STACK_LINE(298)
			m31 = -(m31);
		}
		HX_STACK_LINE(299)
		if (((m32 < (int)0))){
			HX_STACK_LINE(299)
			m32 = -(m32);
		}
		HX_STACK_LINE(300)
		if (((m33 < (int)0))){
			HX_STACK_LINE(300)
			m33 = -(m33);
		}
		HX_STACK_LINE(301)
		Float hx = aabb->_halfExtentsX;		HX_STACK_VAR(hx,"hx");
		HX_STACK_LINE(302)
		Float hy = aabb->_halfExtentsY;		HX_STACK_VAR(hy,"hy");
		HX_STACK_LINE(303)
		Float hz = aabb->_halfExtentsZ;		HX_STACK_VAR(hz,"hz");
		HX_STACK_LINE(304)
		this->_halfExtentsX = (((hx * m11) + (hy * m12)) + (hz * m13));
		HX_STACK_LINE(305)
		this->_halfExtentsY = (((hx * m21) + (hy * m22)) + (hz * m23));
		HX_STACK_LINE(306)
		this->_halfExtentsZ = (((hx * m31) + (hy * m32)) + (hz * m33));
		HX_STACK_LINE(307)
		this->_min->x = (this->_centerX - this->_halfExtentsX);
		HX_STACK_LINE(308)
		this->_min->y = (this->_centerY - this->_halfExtentsY);
		HX_STACK_LINE(309)
		this->_min->z = (this->_centerZ - this->_halfExtentsZ);
		HX_STACK_LINE(310)
		this->_max->x = (this->_centerX + this->_halfExtentsX);
		HX_STACK_LINE(311)
		this->_max->y = (this->_centerY + this->_halfExtentsY);
		HX_STACK_LINE(312)
		this->_max->z = (this->_centerZ + this->_halfExtentsZ);
	}
return null();
}


int AxisAlignedBoundingBox_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
	HX_STACK_PUSH("AxisAlignedBoundingBox::classifyToPlane","away3d/bounds/AxisAlignedBoundingBox.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(plane,"plane");
	HX_STACK_LINE(259)
	Float a = plane->a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(260)
	Float b = plane->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(261)
	Float c = plane->c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(262)
	Float centerDistance = ((((a * this->_centerX) + (b * this->_centerY)) + (c * this->_centerZ)) - plane->d);		HX_STACK_VAR(centerDistance,"centerDistance");
	HX_STACK_LINE(263)
	if (((a < (int)0))){
		HX_STACK_LINE(263)
		a = -(a);
	}
	HX_STACK_LINE(264)
	if (((b < (int)0))){
		HX_STACK_LINE(264)
		b = -(b);
	}
	HX_STACK_LINE(265)
	if (((c < (int)0))){
		HX_STACK_LINE(265)
		c = -(c);
	}
	HX_STACK_LINE(266)
	Float boundOffset = (((a * this->_halfExtentsX) + (b * this->_halfExtentsY)) + (c * this->_halfExtentsZ));		HX_STACK_VAR(boundOffset,"boundOffset");
	HX_STACK_LINE(267)
	return (  (((centerDistance > boundOffset))) ? int(::away3d::core::math::PlaneClassification_obj::FRONT) : int((  (((centerDistance < -(boundOffset)))) ? int(::away3d::core::math::PlaneClassification_obj::BACK) : int(::away3d::core::math::PlaneClassification_obj::INTERSECT) )) );
}


::away3d::primitives::WireframePrimitiveBase AxisAlignedBoundingBox_obj::createBoundingRenderable( ){
	HX_STACK_PUSH("AxisAlignedBoundingBox::createBoundingRenderable","away3d/bounds/AxisAlignedBoundingBox.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(254)
	return ::away3d::primitives::WireframeCube_obj::__new((int)1,(int)1,(int)1,(int)16777215,0.5);
}


Void AxisAlignedBoundingBox_obj::updateBoundingRenderable( ){
{
		HX_STACK_PUSH("AxisAlignedBoundingBox::updateBoundingRenderable","away3d/bounds/AxisAlignedBoundingBox.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_LINE(246)
		this->_boundingRenderable->set_scaleX(::Math_obj::max((this->_halfExtentsX * (int)2),0.001));
		HX_STACK_LINE(247)
		this->_boundingRenderable->set_scaleY(::Math_obj::max((this->_halfExtentsY * (int)2),0.001));
		HX_STACK_LINE(248)
		this->_boundingRenderable->set_scaleZ(::Math_obj::max((this->_halfExtentsZ * (int)2),0.001));
		HX_STACK_LINE(249)
		this->_boundingRenderable->set_x(this->_centerX);
		HX_STACK_LINE(250)
		this->_boundingRenderable->set_y(this->_centerY);
		HX_STACK_LINE(251)
		this->_boundingRenderable->set_z(this->_centerZ);
	}
return null();
}


::flash::geom::Vector3D AxisAlignedBoundingBox_obj::closestPointToPoint( ::flash::geom::Vector3D point,::flash::geom::Vector3D target){
	HX_STACK_PUSH("AxisAlignedBoundingBox::closestPointToPoint","away3d/bounds/AxisAlignedBoundingBox.hx",226);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(227)
	Float p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(228)
	if (((target == null()))){
		HX_STACK_LINE(229)
		target = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(230)
	p = point->x;
	HX_STACK_LINE(231)
	if (((p < this->_min->x))){
		HX_STACK_LINE(231)
		p = this->_min->x;
	}
	HX_STACK_LINE(232)
	if (((p > this->_max->x))){
		HX_STACK_LINE(232)
		p = this->_max->x;
	}
	HX_STACK_LINE(233)
	target->x = p;
	HX_STACK_LINE(234)
	p = point->y;
	HX_STACK_LINE(235)
	if (((p < this->_min->y))){
		HX_STACK_LINE(235)
		p = this->_min->y;
	}
	HX_STACK_LINE(236)
	if (((p > this->_max->y))){
		HX_STACK_LINE(236)
		p = this->_max->y;
	}
	HX_STACK_LINE(237)
	target->y = p;
	HX_STACK_LINE(238)
	p = point->z;
	HX_STACK_LINE(239)
	if (((p < this->_min->z))){
		HX_STACK_LINE(239)
		p = this->_min->z;
	}
	HX_STACK_LINE(240)
	if (((p > this->_max->z))){
		HX_STACK_LINE(240)
		p = this->_max->z;
	}
	HX_STACK_LINE(241)
	target->z = p;
	HX_STACK_LINE(242)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC2(AxisAlignedBoundingBox_obj,closestPointToPoint,return )

Float AxisAlignedBoundingBox_obj::get_halfExtentsZ( ){
	HX_STACK_PUSH("AxisAlignedBoundingBox::get_halfExtentsZ","away3d/bounds/AxisAlignedBoundingBox.hx",215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(215)
	return this->_halfExtentsZ;
}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsZ,return )

Float AxisAlignedBoundingBox_obj::get_halfExtentsY( ){
	HX_STACK_PUSH("AxisAlignedBoundingBox::get_halfExtentsY","away3d/bounds/AxisAlignedBoundingBox.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->_halfExtentsY;
}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsY,return )

Float AxisAlignedBoundingBox_obj::get_halfExtentsX( ){
	HX_STACK_PUSH("AxisAlignedBoundingBox::get_halfExtentsX","away3d/bounds/AxisAlignedBoundingBox.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->_halfExtentsX;
}


HX_DEFINE_DYNAMIC_FUNC0(AxisAlignedBoundingBox_obj,get_halfExtentsX,return )

::away3d::bounds::BoundingVolumeBase AxisAlignedBoundingBox_obj::clone( ){
	HX_STACK_PUSH("AxisAlignedBoundingBox::clone","away3d/bounds/AxisAlignedBoundingBox.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(202)
	::away3d::bounds::AxisAlignedBoundingBox clone = ::away3d::bounds::AxisAlignedBoundingBox_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(203)
	clone->fromExtremes(this->_min->x,this->_min->y,this->_min->z,this->_max->x,this->_max->y,this->_max->z);
	HX_STACK_LINE(204)
	return clone;
}


Void AxisAlignedBoundingBox_obj::fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
{
		HX_STACK_PUSH("AxisAlignedBoundingBox::fromExtremes","away3d/bounds/AxisAlignedBoundingBox.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minX,"minX");
		HX_STACK_ARG(minY,"minY");
		HX_STACK_ARG(minZ,"minZ");
		HX_STACK_ARG(maxX,"maxX");
		HX_STACK_ARG(maxY,"maxY");
		HX_STACK_ARG(maxZ,"maxZ");
		HX_STACK_LINE(188)
		this->_centerX = (((maxX + minX)) * .5);
		HX_STACK_LINE(189)
		this->_centerY = (((maxY + minY)) * .5);
		HX_STACK_LINE(190)
		this->_centerZ = (((maxZ + minZ)) * .5);
		HX_STACK_LINE(191)
		this->_halfExtentsX = (((maxX - minX)) * .5);
		HX_STACK_LINE(192)
		this->_halfExtentsY = (((maxY - minY)) * .5);
		HX_STACK_LINE(193)
		this->_halfExtentsZ = (((maxZ - minZ)) * .5);
		HX_STACK_LINE(194)
		this->super::fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
	}
return null();
}


bool AxisAlignedBoundingBox_obj::containsPoint( ::flash::geom::Vector3D position){
	HX_STACK_PUSH("AxisAlignedBoundingBox::containsPoint","away3d/bounds/AxisAlignedBoundingBox.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(177)
	Float px = (position->x - this->_centerX);		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(178)
	Float py = (position->y - this->_centerY);		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(179)
	Float pz = (position->z - this->_centerZ);		HX_STACK_VAR(pz,"pz");
	HX_STACK_LINE(180)
	return (bool((bool((bool((bool((bool((px <= this->_halfExtentsX)) && bool((px >= -(this->_halfExtentsX))))) && bool((py <= this->_halfExtentsY)))) && bool((py >= -(this->_halfExtentsY))))) && bool((pz <= this->_halfExtentsZ)))) && bool((pz >= -(this->_halfExtentsZ))));
}


Float AxisAlignedBoundingBox_obj::rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal){
	HX_STACK_PUSH("AxisAlignedBoundingBox::rayIntersection","away3d/bounds/AxisAlignedBoundingBox.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(targetNormal,"targetNormal");
	HX_STACK_LINE(78)
	if ((this->containsPoint(position))){
		HX_STACK_LINE(78)
		return (int)0;
	}
	HX_STACK_LINE(79)
	Float px = (position->x - this->_centerX);		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(80)
	Float py = (position->y - this->_centerY);		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(81)
	Float pz = (position->z - this->_centerZ);		HX_STACK_VAR(pz,"pz");
	HX_STACK_LINE(82)
	Float vx = direction->x;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(83)
	Float vy = direction->y;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(84)
	Float vz = direction->z;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(85)
	Float ix;		HX_STACK_VAR(ix,"ix");
	HX_STACK_LINE(86)
	Float iy;		HX_STACK_VAR(iy,"iy");
	HX_STACK_LINE(87)
	Float iz;		HX_STACK_VAR(iz,"iz");
	HX_STACK_LINE(88)
	Float rayEntryDistance = (int)0;		HX_STACK_VAR(rayEntryDistance,"rayEntryDistance");
	HX_STACK_LINE(90)
	bool intersects = false;		HX_STACK_VAR(intersects,"intersects");
	HX_STACK_LINE(91)
	if (((vx < (int)0))){
		HX_STACK_LINE(92)
		rayEntryDistance = (Float(((this->_halfExtentsX - px))) / Float(vx));
		HX_STACK_LINE(93)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(94)
			iy = (py + (rayEntryDistance * vy));
			HX_STACK_LINE(95)
			iz = (pz + (rayEntryDistance * vz));
			HX_STACK_LINE(96)
			if (((bool((bool((bool((iy > -(this->_halfExtentsY))) && bool((iy < this->_halfExtentsY)))) && bool((iz > -(this->_halfExtentsZ))))) && bool((iz < this->_halfExtentsZ))))){
				HX_STACK_LINE(97)
				targetNormal->x = (int)1;
				HX_STACK_LINE(98)
				targetNormal->y = (int)0;
				HX_STACK_LINE(99)
				targetNormal->z = (int)0;
				HX_STACK_LINE(100)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(104)
	if (((bool(!(intersects)) && bool((vx > (int)0))))){
		HX_STACK_LINE(105)
		rayEntryDistance = (Float(((-(this->_halfExtentsX) - px))) / Float(vx));
		HX_STACK_LINE(106)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(107)
			iy = (py + (rayEntryDistance * vy));
			HX_STACK_LINE(108)
			iz = (pz + (rayEntryDistance * vz));
			HX_STACK_LINE(109)
			if (((bool((bool((bool((iy > -(this->_halfExtentsY))) && bool((iy < this->_halfExtentsY)))) && bool((iz > -(this->_halfExtentsZ))))) && bool((iz < this->_halfExtentsZ))))){
				HX_STACK_LINE(110)
				targetNormal->x = (int)-1;
				HX_STACK_LINE(111)
				targetNormal->y = (int)0;
				HX_STACK_LINE(112)
				targetNormal->z = (int)0;
				HX_STACK_LINE(113)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(117)
	if (((bool(!(intersects)) && bool((vy < (int)0))))){
		HX_STACK_LINE(118)
		rayEntryDistance = (Float(((this->_halfExtentsY - py))) / Float(vy));
		HX_STACK_LINE(119)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(120)
			ix = (px + (rayEntryDistance * vx));
			HX_STACK_LINE(121)
			iz = (pz + (rayEntryDistance * vz));
			HX_STACK_LINE(122)
			if (((bool((bool((bool((ix > -(this->_halfExtentsX))) && bool((ix < this->_halfExtentsX)))) && bool((iz > -(this->_halfExtentsZ))))) && bool((iz < this->_halfExtentsZ))))){
				HX_STACK_LINE(123)
				targetNormal->x = (int)0;
				HX_STACK_LINE(124)
				targetNormal->y = (int)1;
				HX_STACK_LINE(125)
				targetNormal->z = (int)0;
				HX_STACK_LINE(126)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(130)
	if (((bool(!(intersects)) && bool((vy > (int)0))))){
		HX_STACK_LINE(131)
		rayEntryDistance = (Float(((-(this->_halfExtentsY) - py))) / Float(vy));
		HX_STACK_LINE(132)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(133)
			ix = (px + (rayEntryDistance * vx));
			HX_STACK_LINE(134)
			iz = (pz + (rayEntryDistance * vz));
			HX_STACK_LINE(135)
			if (((bool((bool((bool((ix > -(this->_halfExtentsX))) && bool((ix < this->_halfExtentsX)))) && bool((iz > -(this->_halfExtentsZ))))) && bool((iz < this->_halfExtentsZ))))){
				HX_STACK_LINE(136)
				targetNormal->x = (int)0;
				HX_STACK_LINE(137)
				targetNormal->y = (int)-1;
				HX_STACK_LINE(138)
				targetNormal->z = (int)0;
				HX_STACK_LINE(139)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(143)
	if (((bool(!(intersects)) && bool((vz < (int)0))))){
		HX_STACK_LINE(144)
		rayEntryDistance = (Float(((this->_halfExtentsZ - pz))) / Float(vz));
		HX_STACK_LINE(145)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(146)
			ix = (px + (rayEntryDistance * vx));
			HX_STACK_LINE(147)
			iy = (py + (rayEntryDistance * vy));
			HX_STACK_LINE(148)
			if (((bool((bool((bool((iy > -(this->_halfExtentsY))) && bool((iy < this->_halfExtentsY)))) && bool((ix > -(this->_halfExtentsX))))) && bool((ix < this->_halfExtentsX))))){
				HX_STACK_LINE(149)
				targetNormal->x = (int)0;
				HX_STACK_LINE(150)
				targetNormal->y = (int)0;
				HX_STACK_LINE(151)
				targetNormal->z = (int)1;
				HX_STACK_LINE(152)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(156)
	if (((bool(!(intersects)) && bool((vz > (int)0))))){
		HX_STACK_LINE(157)
		rayEntryDistance = (Float(((-(this->_halfExtentsZ) - pz))) / Float(vz));
		HX_STACK_LINE(158)
		if (((rayEntryDistance > (int)0))){
			HX_STACK_LINE(159)
			ix = (px + (rayEntryDistance * vx));
			HX_STACK_LINE(160)
			iy = (py + (rayEntryDistance * vy));
			HX_STACK_LINE(161)
			if (((bool((bool((bool((iy > -(this->_halfExtentsY))) && bool((iy < this->_halfExtentsY)))) && bool((ix > -(this->_halfExtentsX))))) && bool((ix < this->_halfExtentsX))))){
				HX_STACK_LINE(162)
				targetNormal->x = (int)0;
				HX_STACK_LINE(163)
				targetNormal->y = (int)0;
				HX_STACK_LINE(164)
				targetNormal->z = (int)-1;
				HX_STACK_LINE(165)
				intersects = true;
			}
		}
	}
	HX_STACK_LINE(169)
	return (  ((intersects)) ? Float(rayEntryDistance) : Float((int)-1) );
}


bool AxisAlignedBoundingBox_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("AxisAlignedBoundingBox::isInFrustum","away3d/bounds/AxisAlignedBoundingBox.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(57)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(58)
	while(((i < numPlanes))){
		HX_STACK_LINE(59)
		::away3d::core::math::Plane3D plane = planes->__get(i).StaticCast< ::away3d::core::math::Plane3D >();		HX_STACK_VAR(plane,"plane");
		HX_STACK_LINE(60)
		Float a = plane->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(61)
		Float b = plane->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(62)
		Float c = plane->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(63)
		Float flippedExtentX = (  (((a < (int)0))) ? Float(-(this->_halfExtentsX)) : Float(this->_halfExtentsX) );		HX_STACK_VAR(flippedExtentX,"flippedExtentX");
		HX_STACK_LINE(64)
		Float flippedExtentY = (  (((b < (int)0))) ? Float(-(this->_halfExtentsY)) : Float(this->_halfExtentsY) );		HX_STACK_VAR(flippedExtentY,"flippedExtentY");
		HX_STACK_LINE(65)
		Float flippedExtentZ = (  (((c < (int)0))) ? Float(-(this->_halfExtentsZ)) : Float(this->_halfExtentsZ) );		HX_STACK_VAR(flippedExtentZ,"flippedExtentZ");
		HX_STACK_LINE(66)
		Float projDist = ((((a * ((this->_centerX + flippedExtentX))) + (b * ((this->_centerY + flippedExtentY)))) + (c * ((this->_centerZ + flippedExtentZ)))) - plane->d);		HX_STACK_VAR(projDist,"projDist");
		HX_STACK_LINE(67)
		if (((projDist < (int)0))){
			HX_STACK_LINE(67)
			return false;
		}
		HX_STACK_LINE(72)
		++(i);
	}
	HX_STACK_LINE(74)
	return true;
}


Void AxisAlignedBoundingBox_obj::nullify( ){
{
		HX_STACK_PUSH("AxisAlignedBoundingBox::nullify","away3d/bounds/AxisAlignedBoundingBox.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->super::nullify();
		HX_STACK_LINE(47)
		this->_centerX = this->_centerY = this->_centerZ = (int)0;
		HX_STACK_LINE(48)
		this->_halfExtentsX = this->_halfExtentsY = this->_halfExtentsZ = (int)0;
	}
return null();
}



AxisAlignedBoundingBox_obj::AxisAlignedBoundingBox_obj()
{
}

void AxisAlignedBoundingBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AxisAlignedBoundingBox);
	HX_MARK_MEMBER_NAME(_halfExtentsZ,"_halfExtentsZ");
	HX_MARK_MEMBER_NAME(_halfExtentsY,"_halfExtentsY");
	HX_MARK_MEMBER_NAME(_halfExtentsX,"_halfExtentsX");
	HX_MARK_MEMBER_NAME(_centerZ,"_centerZ");
	HX_MARK_MEMBER_NAME(_centerY,"_centerY");
	HX_MARK_MEMBER_NAME(_centerX,"_centerX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AxisAlignedBoundingBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_halfExtentsZ,"_halfExtentsZ");
	HX_VISIT_MEMBER_NAME(_halfExtentsY,"_halfExtentsY");
	HX_VISIT_MEMBER_NAME(_halfExtentsX,"_halfExtentsX");
	HX_VISIT_MEMBER_NAME(_centerZ,"_centerZ");
	HX_VISIT_MEMBER_NAME(_centerY,"_centerY");
	HX_VISIT_MEMBER_NAME(_centerX,"_centerX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AxisAlignedBoundingBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nullify") ) { return nullify_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerZ") ) { return _centerZ; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return fromExtremes_dyn(); }
		if (HX_FIELD_EQ(inName,"halfExtentsZ") ) { return get_halfExtentsZ(); }
		if (HX_FIELD_EQ(inName,"halfExtentsY") ) { return get_halfExtentsY(); }
		if (HX_FIELD_EQ(inName,"halfExtentsX") ) { return get_halfExtentsX(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return transformFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfExtentsZ") ) { return _halfExtentsZ; }
		if (HX_FIELD_EQ(inName,"_halfExtentsY") ) { return _halfExtentsY; }
		if (HX_FIELD_EQ(inName,"_halfExtentsX") ) { return _halfExtentsX; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return classifyToPlane_dyn(); }
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return rayIntersection_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_halfExtentsZ") ) { return get_halfExtentsZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_halfExtentsY") ) { return get_halfExtentsY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_halfExtentsX") ) { return get_halfExtentsX_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"closestPointToPoint") ) { return closestPointToPoint_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return createBoundingRenderable_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return updateBoundingRenderable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AxisAlignedBoundingBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_centerZ") ) { _centerZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_halfExtentsZ") ) { _halfExtentsZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfExtentsY") ) { _halfExtentsY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfExtentsX") ) { _halfExtentsX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AxisAlignedBoundingBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_halfExtentsZ"));
	outFields->push(HX_CSTRING("_halfExtentsY"));
	outFields->push(HX_CSTRING("_halfExtentsX"));
	outFields->push(HX_CSTRING("_centerZ"));
	outFields->push(HX_CSTRING("_centerY"));
	outFields->push(HX_CSTRING("_centerX"));
	outFields->push(HX_CSTRING("halfExtentsZ"));
	outFields->push(HX_CSTRING("halfExtentsY"));
	outFields->push(HX_CSTRING("halfExtentsX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transformFrom"),
	HX_CSTRING("classifyToPlane"),
	HX_CSTRING("createBoundingRenderable"),
	HX_CSTRING("updateBoundingRenderable"),
	HX_CSTRING("closestPointToPoint"),
	HX_CSTRING("get_halfExtentsZ"),
	HX_CSTRING("get_halfExtentsY"),
	HX_CSTRING("get_halfExtentsX"),
	HX_CSTRING("clone"),
	HX_CSTRING("fromExtremes"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("rayIntersection"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("nullify"),
	HX_CSTRING("_halfExtentsZ"),
	HX_CSTRING("_halfExtentsY"),
	HX_CSTRING("_halfExtentsX"),
	HX_CSTRING("_centerZ"),
	HX_CSTRING("_centerY"),
	HX_CSTRING("_centerX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AxisAlignedBoundingBox_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AxisAlignedBoundingBox_obj::__mClass,"__mClass");
};

Class AxisAlignedBoundingBox_obj::__mClass;

void AxisAlignedBoundingBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.bounds.AxisAlignedBoundingBox"), hx::TCanCast< AxisAlignedBoundingBox_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AxisAlignedBoundingBox_obj::__boot()
{
}

} // end namespace away3d
} // end namespace bounds
