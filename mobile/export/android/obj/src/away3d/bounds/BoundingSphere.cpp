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
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframeSphere
#include <away3d/primitives/WireframeSphere.h>
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

Void BoundingSphere_obj::__construct()
{
HX_STACK_PUSH("BoundingSphere::new","away3d/bounds/BoundingSphere.hx",35);
{
	HX_STACK_LINE(36)
	this->_radius = (int)0;
	HX_STACK_LINE(37)
	this->_centerX = (int)0;
	HX_STACK_LINE(38)
	this->_centerY = (int)0;
	HX_STACK_LINE(39)
	this->_centerZ = (int)0;
	HX_STACK_LINE(40)
	super::__construct();
}
;
	return null();
}

BoundingSphere_obj::~BoundingSphere_obj() { }

Dynamic BoundingSphere_obj::__CreateEmpty() { return  new BoundingSphere_obj; }
hx::ObjectPtr< BoundingSphere_obj > BoundingSphere_obj::__new()
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct();
	return result;}

Dynamic BoundingSphere_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingSphere_obj > result = new BoundingSphere_obj();
	result->__construct();
	return result;}

Void BoundingSphere_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("BoundingSphere::transformFrom","away3d/bounds/BoundingSphere.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(188)
		::away3d::bounds::BoundingSphere sphere = hx::TCast< away3d::bounds::BoundingSphere >::cast(bounds);		HX_STACK_VAR(sphere,"sphere");
		HX_STACK_LINE(189)
		Float cx = sphere->_centerX;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(190)
		Float cy = sphere->_centerY;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(191)
		Float cz = sphere->_centerZ;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(192)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(193)
		matrix->copyRawDataTo(raw,null(),null());
		HX_STACK_LINE(194)
		Float m11 = raw->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(195)
		Float m12 = raw->__get((int)4);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(196)
		Float m13 = raw->__get((int)8);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(197)
		Float m14 = raw->__get((int)12);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(198)
		Float m21 = raw->__get((int)1);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(199)
		Float m22 = raw->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(200)
		Float m23 = raw->__get((int)9);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(201)
		Float m24 = raw->__get((int)13);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(202)
		Float m31 = raw->__get((int)2);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(203)
		Float m32 = raw->__get((int)6);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(204)
		Float m33 = raw->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(205)
		Float m34 = raw->__get((int)14);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(206)
		this->_centerX = ((((cx * m11) + (cy * m12)) + (cz * m13)) + m14);
		HX_STACK_LINE(207)
		this->_centerY = ((((cx * m21) + (cy * m22)) + (cz * m23)) + m24);
		HX_STACK_LINE(208)
		this->_centerZ = ((((cx * m31) + (cy * m32)) + (cz * m33)) + m34);
		HX_STACK_LINE(209)
		if (((m11 < (int)0))){
			HX_STACK_LINE(209)
			m11 = -(m11);
		}
		HX_STACK_LINE(210)
		if (((m12 < (int)0))){
			HX_STACK_LINE(210)
			m12 = -(m12);
		}
		HX_STACK_LINE(211)
		if (((m13 < (int)0))){
			HX_STACK_LINE(211)
			m13 = -(m13);
		}
		HX_STACK_LINE(212)
		if (((m21 < (int)0))){
			HX_STACK_LINE(212)
			m21 = -(m21);
		}
		HX_STACK_LINE(213)
		if (((m22 < (int)0))){
			HX_STACK_LINE(213)
			m22 = -(m22);
		}
		HX_STACK_LINE(214)
		if (((m23 < (int)0))){
			HX_STACK_LINE(214)
			m23 = -(m23);
		}
		HX_STACK_LINE(215)
		if (((m31 < (int)0))){
			HX_STACK_LINE(215)
			m31 = -(m31);
		}
		HX_STACK_LINE(216)
		if (((m32 < (int)0))){
			HX_STACK_LINE(216)
			m32 = -(m32);
		}
		HX_STACK_LINE(217)
		if (((m33 < (int)0))){
			HX_STACK_LINE(217)
			m33 = -(m33);
		}
		HX_STACK_LINE(218)
		Float r = sphere->_radius;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(219)
		Float rx = ((m11 + m12) + m13);		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(220)
		Float ry = ((m21 + m22) + m23);		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(221)
		Float rz = ((m31 + m32) + m33);		HX_STACK_VAR(rz,"rz");
		HX_STACK_LINE(222)
		this->_radius = (r * ::Math_obj::sqrt((((rx * rx) + (ry * ry)) + (rz * rz))));
		HX_STACK_LINE(223)
		this->_min->x = (this->_centerX - this->_radius);
		HX_STACK_LINE(224)
		this->_min->y = (this->_centerY - this->_radius);
		HX_STACK_LINE(225)
		this->_min->z = (this->_centerZ - this->_radius);
		HX_STACK_LINE(226)
		this->_max->x = (this->_centerX + this->_radius);
		HX_STACK_LINE(227)
		this->_max->y = (this->_centerY + this->_radius);
		HX_STACK_LINE(228)
		this->_max->z = (this->_centerZ + this->_radius);
	}
return null();
}


int BoundingSphere_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
	HX_STACK_PUSH("BoundingSphere::classifyToPlane","away3d/bounds/BoundingSphere.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(plane,"plane");
	HX_STACK_LINE(176)
	Float a = plane->a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(177)
	Float b = plane->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(178)
	Float c = plane->c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(179)
	Float dd = ((((a * this->_centerX) + (b * this->_centerY)) + (c * this->_centerZ)) - plane->d);		HX_STACK_VAR(dd,"dd");
	HX_STACK_LINE(180)
	if (((a < (int)0))){
		HX_STACK_LINE(180)
		a = -(a);
	}
	HX_STACK_LINE(181)
	if (((b < (int)0))){
		HX_STACK_LINE(181)
		b = -(b);
	}
	HX_STACK_LINE(182)
	if (((c < (int)0))){
		HX_STACK_LINE(182)
		c = -(c);
	}
	HX_STACK_LINE(183)
	Float rr = ((((a + b) + c)) * this->_radius);		HX_STACK_VAR(rr,"rr");
	HX_STACK_LINE(184)
	return (  (((dd > rr))) ? int(::away3d::core::math::PlaneClassification_obj::FRONT) : int((  (((dd < -(rr)))) ? int(::away3d::core::math::PlaneClassification_obj::BACK) : int(::away3d::core::math::PlaneClassification_obj::INTERSECT) )) );
}


::away3d::primitives::WireframePrimitiveBase BoundingSphere_obj::createBoundingRenderable( ){
	HX_STACK_PUSH("BoundingSphere::createBoundingRenderable","away3d/bounds/BoundingSphere.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(171)
	return ::away3d::primitives::WireframeSphere_obj::__new((int)1,(int)16,(int)12,(int)16777215,0.5);
}


Void BoundingSphere_obj::updateBoundingRenderable( ){
{
		HX_STACK_PUSH("BoundingSphere::updateBoundingRenderable","away3d/bounds/BoundingSphere.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_LINE(161)
		Float sc = this->_radius;		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(162)
		if (((sc == (int)0))){
			HX_STACK_LINE(162)
			sc = 0.001;
		}
		HX_STACK_LINE(163)
		this->_boundingRenderable->set_scaleX(sc);
		HX_STACK_LINE(164)
		this->_boundingRenderable->set_scaleY(sc);
		HX_STACK_LINE(165)
		this->_boundingRenderable->set_scaleZ(sc);
		HX_STACK_LINE(166)
		this->_boundingRenderable->set_x(this->_centerX);
		HX_STACK_LINE(167)
		this->_boundingRenderable->set_y(this->_centerY);
		HX_STACK_LINE(168)
		this->_boundingRenderable->set_z(this->_centerZ);
	}
return null();
}


bool BoundingSphere_obj::containsPoint( ::flash::geom::Vector3D position){
	HX_STACK_PUSH("BoundingSphere::containsPoint","away3d/bounds/BoundingSphere.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(153)
	Float px = (position->x - this->_centerX);		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(154)
	Float py = (position->y - this->_centerY);		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(155)
	Float pz = (position->z - this->_centerZ);		HX_STACK_VAR(pz,"pz");
	HX_STACK_LINE(156)
	Float distance = ::Math_obj::sqrt((((px * px) + (py * py)) + (pz * pz)));		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(157)
	return (distance <= this->_radius);
}


Float BoundingSphere_obj::rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal){
	HX_STACK_PUSH("BoundingSphere::rayIntersection","away3d/bounds/BoundingSphere.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(targetNormal,"targetNormal");
	HX_STACK_LINE(121)
	if ((this->containsPoint(position))){
		HX_STACK_LINE(121)
		return (int)0;
	}
	HX_STACK_LINE(122)
	Float px = (position->x - this->_centerX);		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(123)
	Float py = (position->y - this->_centerY);		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(124)
	Float pz = (position->z - this->_centerZ);		HX_STACK_VAR(pz,"pz");
	HX_STACK_LINE(125)
	Float vx = direction->x;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(126)
	Float vy = direction->y;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(127)
	Float vz = direction->z;		HX_STACK_VAR(vz,"vz");
	HX_STACK_LINE(128)
	Float rayEntryDistance;		HX_STACK_VAR(rayEntryDistance,"rayEntryDistance");
	HX_STACK_LINE(129)
	Float a = (((vx * vx) + (vy * vy)) + (vz * vz));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(130)
	Float b = ((int)2 * ((((px * vx) + (py * vy)) + (pz * vz))));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(131)
	Float c = ((((px * px) + (py * py)) + (pz * pz)) - (this->_radius * this->_radius));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(132)
	Float det = ((b * b) - (((int)4 * a) * c));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(133)
	if (((det >= (int)0))){
		HX_STACK_LINE(135)
		Float sqrtDet = ::Math_obj::sqrt(det);		HX_STACK_VAR(sqrtDet,"sqrtDet");
		HX_STACK_LINE(136)
		rayEntryDistance = (Float(((-(b) - sqrtDet))) / Float((((int)2 * a))));
		HX_STACK_LINE(137)
		if (((rayEntryDistance >= (int)0))){
			HX_STACK_LINE(138)
			targetNormal->x = (px + (rayEntryDistance * vx));
			HX_STACK_LINE(139)
			targetNormal->y = (py + (rayEntryDistance * vy));
			HX_STACK_LINE(140)
			targetNormal->z = (pz + (rayEntryDistance * vz));
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				Float l = ::Math_obj::sqrt((((targetNormal->x * targetNormal->x) + (targetNormal->y * targetNormal->y)) + (targetNormal->z * targetNormal->z)));		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(141)
				if (((l != (int)0))){
					HX_STACK_LINE(141)
					hx::DivEq(targetNormal->x,l);
					HX_STACK_LINE(141)
					hx::DivEq(targetNormal->y,l);
					HX_STACK_LINE(141)
					hx::DivEq(targetNormal->z,l);
				}
				HX_STACK_LINE(141)
				l;
			}
			HX_STACK_LINE(142)
			return rayEntryDistance;
		}
	}
	HX_STACK_LINE(145)
	return (int)-1;
}


::away3d::bounds::BoundingVolumeBase BoundingSphere_obj::clone( ){
	HX_STACK_PUSH("BoundingSphere::clone","away3d/bounds/BoundingSphere.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_LINE(115)
	::away3d::bounds::BoundingSphere clone = ::away3d::bounds::BoundingSphere_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(116)
	clone->fromSphere(::flash::geom::Vector3D_obj::__new(this->_centerX,this->_centerY,this->_centerZ,null()),this->_radius);
	HX_STACK_LINE(117)
	return clone;
}


Void BoundingSphere_obj::fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
{
		HX_STACK_PUSH("BoundingSphere::fromExtremes","away3d/bounds/BoundingSphere.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minX,"minX");
		HX_STACK_ARG(minY,"minY");
		HX_STACK_ARG(minZ,"minZ");
		HX_STACK_ARG(maxX,"maxX");
		HX_STACK_ARG(maxY,"maxY");
		HX_STACK_ARG(maxZ,"maxZ");
		HX_STACK_LINE(98)
		this->_centerX = (((maxX + minX)) * .5);
		HX_STACK_LINE(99)
		this->_centerY = (((maxY + minY)) * .5);
		HX_STACK_LINE(100)
		this->_centerZ = (((maxZ + minZ)) * .5);
		HX_STACK_LINE(101)
		Float d = (maxX - minX);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(102)
		Float y = (maxY - minY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(103)
		Float z = (maxZ - minZ);		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(104)
		if (((y > d))){
			HX_STACK_LINE(104)
			d = y;
		}
		HX_STACK_LINE(105)
		if (((z > d))){
			HX_STACK_LINE(105)
			d = z;
		}
		HX_STACK_LINE(106)
		this->_radius = (d * ::Math_obj::sqrt(.5));
		HX_STACK_LINE(107)
		this->super::fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
	}
return null();
}


Void BoundingSphere_obj::fromSphere( ::flash::geom::Vector3D center,Float radius){
{
		HX_STACK_PUSH("BoundingSphere::fromSphere","away3d/bounds/BoundingSphere.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(center,"center");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_LINE(77)
		this->_centerX = center->x;
		HX_STACK_LINE(78)
		this->_centerY = center->y;
		HX_STACK_LINE(79)
		this->_centerZ = center->z;
		HX_STACK_LINE(80)
		this->_radius = radius;
		HX_STACK_LINE(81)
		this->_max->x = (this->_centerX + radius);
		HX_STACK_LINE(82)
		this->_max->y = (this->_centerY + radius);
		HX_STACK_LINE(83)
		this->_max->z = (this->_centerZ + radius);
		HX_STACK_LINE(84)
		this->_min->x = (this->_centerX - radius);
		HX_STACK_LINE(85)
		this->_min->y = (this->_centerY - radius);
		HX_STACK_LINE(86)
		this->_min->z = (this->_centerZ - radius);
		HX_STACK_LINE(87)
		this->_aabbPointsDirty = true;
		HX_STACK_LINE(88)
		if (((this->_boundingRenderable != null()))){
			HX_STACK_LINE(88)
			this->updateBoundingRenderable();
		}
	}
return null();
}


bool BoundingSphere_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("BoundingSphere::isInFrustum","away3d/bounds/BoundingSphere.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(59)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(60)
	while(((i < numPlanes))){
		HX_STACK_LINE(61)
		::away3d::core::math::Plane3D plane = planes->__get(i).StaticCast< ::away3d::core::math::Plane3D >();		HX_STACK_VAR(plane,"plane");
		HX_STACK_LINE(62)
		Float flippedExtentX = (  (((plane->a < (int)0))) ? Float(-(this->_radius)) : Float(this->_radius) );		HX_STACK_VAR(flippedExtentX,"flippedExtentX");
		HX_STACK_LINE(63)
		Float flippedExtentY = (  (((plane->b < (int)0))) ? Float(-(this->_radius)) : Float(this->_radius) );		HX_STACK_VAR(flippedExtentY,"flippedExtentY");
		HX_STACK_LINE(64)
		Float flippedExtentZ = (  (((plane->c < (int)0))) ? Float(-(this->_radius)) : Float(this->_radius) );		HX_STACK_VAR(flippedExtentZ,"flippedExtentZ");
		HX_STACK_LINE(65)
		Float projDist = ((((plane->a * ((this->_centerX + flippedExtentX))) + (plane->b * ((this->_centerY + flippedExtentY)))) + (plane->c * ((this->_centerZ + flippedExtentZ)))) - plane->d);		HX_STACK_VAR(projDist,"projDist");
		HX_STACK_LINE(66)
		if (((projDist < (int)0))){
			HX_STACK_LINE(66)
			return false;
		}
		HX_STACK_LINE(67)
		++(i);
	}
	HX_STACK_LINE(69)
	return true;
}


Void BoundingSphere_obj::nullify( ){
{
		HX_STACK_PUSH("BoundingSphere::nullify","away3d/bounds/BoundingSphere.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		this->super::nullify();
		HX_STACK_LINE(49)
		this->_centerX = this->_centerY = this->_centerZ = (int)0;
		HX_STACK_LINE(50)
		this->_radius = (int)0;
	}
return null();
}


Float BoundingSphere_obj::get_radius( ){
	HX_STACK_PUSH("BoundingSphere::get_radius","away3d/bounds/BoundingSphere.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingSphere_obj,get_radius,return )


BoundingSphere_obj::BoundingSphere_obj()
{
}

void BoundingSphere_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingSphere);
	HX_MARK_MEMBER_NAME(_centerZ,"_centerZ");
	HX_MARK_MEMBER_NAME(_centerY,"_centerY");
	HX_MARK_MEMBER_NAME(_centerX,"_centerX");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoundingSphere_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_centerZ,"_centerZ");
	HX_VISIT_MEMBER_NAME(_centerY,"_centerY");
	HX_VISIT_MEMBER_NAME(_centerX,"_centerX");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BoundingSphere_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nullify") ) { return nullify_dyn(); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerZ") ) { return _centerZ; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return fromSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return fromExtremes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return transformFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return classifyToPlane_dyn(); }
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return rayIntersection_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return createBoundingRenderable_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return updateBoundingRenderable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingSphere_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerZ") ) { _centerZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_centerZ"));
	outFields->push(HX_CSTRING("_centerY"));
	outFields->push(HX_CSTRING("_centerX"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transformFrom"),
	HX_CSTRING("classifyToPlane"),
	HX_CSTRING("createBoundingRenderable"),
	HX_CSTRING("updateBoundingRenderable"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("rayIntersection"),
	HX_CSTRING("clone"),
	HX_CSTRING("fromExtremes"),
	HX_CSTRING("fromSphere"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("nullify"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("_centerZ"),
	HX_CSTRING("_centerY"),
	HX_CSTRING("_centerX"),
	HX_CSTRING("_radius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingSphere_obj::__mClass,"__mClass");
};

Class BoundingSphere_obj::__mClass;

void BoundingSphere_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.bounds.BoundingSphere"), hx::TCanCast< BoundingSphere_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BoundingSphere_obj::__boot()
{
}

} // end namespace away3d
} // end namespace bounds
