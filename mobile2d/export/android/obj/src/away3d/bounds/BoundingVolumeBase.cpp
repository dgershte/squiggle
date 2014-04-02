#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
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
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace bounds{

Void BoundingVolumeBase_obj::__construct()
{
HX_STACK_PUSH("BoundingVolumeBase::new","away3d/bounds/BoundingVolumeBase.hx",72);
{
	HX_STACK_LINE(73)
	this->_aabbPoints = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(74)
	this->_aabbPointsDirty = true;
	HX_STACK_LINE(75)
	this->_min = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(76)
	this->_max = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
}
;
	return null();
}

BoundingVolumeBase_obj::~BoundingVolumeBase_obj() { }

Dynamic BoundingVolumeBase_obj::__CreateEmpty() { return  new BoundingVolumeBase_obj; }
hx::ObjectPtr< BoundingVolumeBase_obj > BoundingVolumeBase_obj::__new()
{  hx::ObjectPtr< BoundingVolumeBase_obj > result = new BoundingVolumeBase_obj();
	result->__construct();
	return result;}

Dynamic BoundingVolumeBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoundingVolumeBase_obj > result = new BoundingVolumeBase_obj();
	result->__construct();
	return result;}

Void BoundingVolumeBase_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("BoundingVolumeBase::transformFrom","away3d/bounds/BoundingVolumeBase.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(328)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,transformFrom,(void))

int BoundingVolumeBase_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
	HX_STACK_PUSH("BoundingVolumeBase::classifyToPlane","away3d/bounds/BoundingVolumeBase.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_ARG(plane,"plane");
	HX_STACK_LINE(324)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(325)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,classifyToPlane,return )

::away3d::primitives::WireframePrimitiveBase BoundingVolumeBase_obj::createBoundingRenderable( ){
	HX_STACK_PUSH("BoundingVolumeBase::createBoundingRenderable","away3d/bounds/BoundingVolumeBase.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(320)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,createBoundingRenderable,return )

Void BoundingVolumeBase_obj::updateBoundingRenderable( ){
{
		HX_STACK_PUSH("BoundingVolumeBase::updateBoundingRenderable","away3d/bounds/BoundingVolumeBase.hx",314);
		HX_STACK_THIS(this);
		HX_STACK_LINE(314)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,updateBoundingRenderable,(void))

Void BoundingVolumeBase_obj::updateAABBPoints( ){
{
		HX_STACK_PUSH("BoundingVolumeBase::updateAABBPoints","away3d/bounds/BoundingVolumeBase.hx",280);
		HX_STACK_THIS(this);
		HX_STACK_LINE(281)
		Float maxX = this->_max->x;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(282)
		Float maxY = this->_max->y;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(283)
		Float maxZ = this->_max->z;		HX_STACK_VAR(maxZ,"maxZ");
		HX_STACK_LINE(284)
		Float minX = this->_min->x;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(285)
		Float minY = this->_min->y;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(286)
		Float minZ = this->_min->z;		HX_STACK_VAR(minZ,"minZ");
		HX_STACK_LINE(287)
		this->_aabbPoints[(int)0] = minX;
		HX_STACK_LINE(288)
		this->_aabbPoints[(int)1] = minY;
		HX_STACK_LINE(289)
		this->_aabbPoints[(int)2] = minZ;
		HX_STACK_LINE(290)
		this->_aabbPoints[(int)3] = maxX;
		HX_STACK_LINE(291)
		this->_aabbPoints[(int)4] = minY;
		HX_STACK_LINE(292)
		this->_aabbPoints[(int)5] = minZ;
		HX_STACK_LINE(293)
		this->_aabbPoints[(int)6] = minX;
		HX_STACK_LINE(294)
		this->_aabbPoints[(int)7] = maxY;
		HX_STACK_LINE(295)
		this->_aabbPoints[(int)8] = minZ;
		HX_STACK_LINE(296)
		this->_aabbPoints[(int)9] = maxX;
		HX_STACK_LINE(297)
		this->_aabbPoints[(int)10] = maxY;
		HX_STACK_LINE(298)
		this->_aabbPoints[(int)11] = minZ;
		HX_STACK_LINE(299)
		this->_aabbPoints[(int)12] = minX;
		HX_STACK_LINE(300)
		this->_aabbPoints[(int)13] = minY;
		HX_STACK_LINE(301)
		this->_aabbPoints[(int)14] = maxZ;
		HX_STACK_LINE(302)
		this->_aabbPoints[(int)15] = maxX;
		HX_STACK_LINE(303)
		this->_aabbPoints[(int)16] = minY;
		HX_STACK_LINE(304)
		this->_aabbPoints[(int)17] = maxZ;
		HX_STACK_LINE(305)
		this->_aabbPoints[(int)18] = minX;
		HX_STACK_LINE(306)
		this->_aabbPoints[(int)19] = maxY;
		HX_STACK_LINE(307)
		this->_aabbPoints[(int)20] = maxZ;
		HX_STACK_LINE(308)
		this->_aabbPoints[(int)21] = maxX;
		HX_STACK_LINE(309)
		this->_aabbPoints[(int)22] = maxY;
		HX_STACK_LINE(310)
		this->_aabbPoints[(int)23] = maxZ;
		HX_STACK_LINE(311)
		this->_aabbPointsDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,updateAABBPoints,(void))

bool BoundingVolumeBase_obj::containsPoint( ::flash::geom::Vector3D position){
	HX_STACK_PUSH("BoundingVolumeBase::containsPoint","away3d/bounds/BoundingVolumeBase.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(275)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,containsPoint,return )

Float BoundingVolumeBase_obj::rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal){
	HX_STACK_PUSH("BoundingVolumeBase::rayIntersection","away3d/bounds/BoundingVolumeBase.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(targetNormal,"targetNormal");
	HX_STACK_LINE(263)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC3(BoundingVolumeBase_obj,rayIntersection,return )

::away3d::bounds::BoundingVolumeBase BoundingVolumeBase_obj::clone( ){
	HX_STACK_PUSH("BoundingVolumeBase::clone","away3d/bounds/BoundingVolumeBase.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(250)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(251)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,clone,return )

bool BoundingVolumeBase_obj::overlaps( ::away3d::bounds::BoundingVolumeBase bounds){
	HX_STACK_PUSH("BoundingVolumeBase::overlaps","away3d/bounds/BoundingVolumeBase.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bounds,"bounds");
	HX_STACK_LINE(234)
	::flash::geom::Vector3D min = bounds->_min;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(235)
	::flash::geom::Vector3D max = bounds->_max;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(236)
	return (bool((bool((bool((bool((bool((this->_max->x > min->x)) && bool((this->_min->x < max->x)))) && bool((this->_max->y > min->y)))) && bool((this->_min->y < max->y)))) && bool((this->_max->z > min->z)))) && bool((this->_min->z < max->z)));
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,overlaps,return )

bool BoundingVolumeBase_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("BoundingVolumeBase::isInFrustum","away3d/bounds/BoundingVolumeBase.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(225)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(226)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,isInFrustum,return )

Void BoundingVolumeBase_obj::fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
{
		HX_STACK_PUSH("BoundingVolumeBase::fromExtremes","away3d/bounds/BoundingVolumeBase.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minX,"minX");
		HX_STACK_ARG(minY,"minY");
		HX_STACK_ARG(minZ,"minZ");
		HX_STACK_ARG(maxX,"maxX");
		HX_STACK_ARG(maxY,"maxY");
		HX_STACK_ARG(maxZ,"maxZ");
		HX_STACK_LINE(207)
		this->_min->x = minX;
		HX_STACK_LINE(208)
		this->_min->y = minY;
		HX_STACK_LINE(209)
		this->_min->z = minZ;
		HX_STACK_LINE(210)
		this->_max->x = maxX;
		HX_STACK_LINE(211)
		this->_max->y = maxY;
		HX_STACK_LINE(212)
		this->_max->z = maxZ;
		HX_STACK_LINE(213)
		this->_aabbPointsDirty = true;
		HX_STACK_LINE(214)
		if (((this->_boundingRenderable != null()))){
			HX_STACK_LINE(214)
			this->updateBoundingRenderable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BoundingVolumeBase_obj,fromExtremes,(void))

Void BoundingVolumeBase_obj::fromSphere( ::flash::geom::Vector3D center,Float radius){
{
		HX_STACK_PUSH("BoundingVolumeBase::fromSphere","away3d/bounds/BoundingVolumeBase.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(center,"center");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_LINE(189)
		this->fromExtremes((center->x - radius),(center->y - radius),(center->z - radius),(center->x + radius),(center->y + radius),(center->z + radius));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoundingVolumeBase_obj,fromSphere,(void))

Void BoundingVolumeBase_obj::fromGeometry( ::away3d::core::base::Geometry geometry){
{
		HX_STACK_PUSH("BoundingVolumeBase::fromGeometry","away3d/bounds/BoundingVolumeBase.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_ARG(geometry,"geometry");
		HX_STACK_LINE(144)
		Array< ::Dynamic > subGeoms = geometry->get_subGeometries();		HX_STACK_VAR(subGeoms,"subGeoms");
		HX_STACK_LINE(145)
		int numSubGeoms = subGeoms->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numSubGeoms,"numSubGeoms");
		HX_STACK_LINE(146)
		Float minX;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(147)
		Float minY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(148)
		Float minZ;		HX_STACK_VAR(minZ,"minZ");
		HX_STACK_LINE(149)
		Float maxX;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(150)
		Float maxY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(151)
		Float maxZ;		HX_STACK_VAR(maxZ,"maxZ");
		HX_STACK_LINE(152)
		if (((numSubGeoms > (int)0))){
			HX_STACK_LINE(153)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(154)
			minX = minY = minZ = ::Math_obj::POSITIVE_INFINITY;
			HX_STACK_LINE(155)
			maxX = maxY = maxZ = ::Math_obj::NEGATIVE_INFINITY;
			HX_STACK_LINE(156)
			while(((j < numSubGeoms))){
				HX_STACK_LINE(157)
				::away3d::core::base::ISubGeometry subGeom = subGeoms->__get((j)++).StaticCast< ::away3d::core::base::ISubGeometry >();		HX_STACK_VAR(subGeom,"subGeom");
				HX_STACK_LINE(158)
				Array< Float > vertices = subGeom->get_vertexData();		HX_STACK_VAR(vertices,"vertices");
				HX_STACK_LINE(159)
				int vertexDataLen = vertices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(vertexDataLen,"vertexDataLen");
				HX_STACK_LINE(160)
				int i = subGeom->get_vertexOffset();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(161)
				int stride = subGeom->get_vertexStride();		HX_STACK_VAR(stride,"stride");
				HX_STACK_LINE(162)
				while(((i < vertexDataLen))){
					HX_STACK_LINE(163)
					Float v = vertices->__get(i);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(164)
					if (((v < minX))){
						HX_STACK_LINE(164)
						minX = v;
					}
					else{
						HX_STACK_LINE(165)
						if (((v > maxX))){
							HX_STACK_LINE(165)
							maxX = v;
						}
					}
					HX_STACK_LINE(166)
					v = vertices->__get((i + (int)1));
					HX_STACK_LINE(167)
					if (((v < minY))){
						HX_STACK_LINE(167)
						minY = v;
					}
					else{
						HX_STACK_LINE(168)
						if (((v > maxY))){
							HX_STACK_LINE(168)
							maxY = v;
						}
					}
					HX_STACK_LINE(169)
					v = vertices->__get((i + (int)2));
					HX_STACK_LINE(170)
					if (((v < minZ))){
						HX_STACK_LINE(170)
						minZ = v;
					}
					else{
						HX_STACK_LINE(171)
						if (((v > maxZ))){
							HX_STACK_LINE(171)
							maxZ = v;
						}
					}
					HX_STACK_LINE(172)
					hx::AddEq(i,stride);
				}
			}
			HX_STACK_LINE(176)
			this->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
		}
		else{
			HX_STACK_LINE(179)
			this->fromExtremes((int)0,(int)0,(int)0,(int)0,(int)0,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,fromGeometry,(void))

Void BoundingVolumeBase_obj::fromVertices( Array< Float > vertices){
{
		HX_STACK_PUSH("BoundingVolumeBase::fromVertices","away3d/bounds/BoundingVolumeBase.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertices,"vertices");
		HX_STACK_LINE(106)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(107)
		int len = vertices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(108)
		Float minX;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(109)
		Float minY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(110)
		Float minZ;		HX_STACK_VAR(minZ,"minZ");
		HX_STACK_LINE(111)
		Float maxX;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(112)
		Float maxY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(113)
		Float maxZ;		HX_STACK_VAR(maxZ,"maxZ");
		HX_STACK_LINE(114)
		if (((len == (int)0))){
			HX_STACK_LINE(115)
			this->nullify();
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(118)
		Float v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(119)
		minX = maxX = vertices->__get((i)++);
		HX_STACK_LINE(120)
		minY = maxY = vertices->__get((i)++);
		HX_STACK_LINE(121)
		minZ = maxZ = vertices->__get((i)++);
		HX_STACK_LINE(122)
		while(((i < len))){
			HX_STACK_LINE(123)
			v = vertices->__get((i)++);
			HX_STACK_LINE(124)
			if (((v < minX))){
				HX_STACK_LINE(124)
				minX = v;
			}
			else{
				HX_STACK_LINE(125)
				if (((v > maxX))){
					HX_STACK_LINE(125)
					maxX = v;
				}
			}
			HX_STACK_LINE(126)
			v = vertices->__get((i)++);
			HX_STACK_LINE(127)
			if (((v < minY))){
				HX_STACK_LINE(127)
				minY = v;
			}
			else{
				HX_STACK_LINE(128)
				if (((v > maxY))){
					HX_STACK_LINE(128)
					maxY = v;
				}
			}
			HX_STACK_LINE(129)
			v = vertices->__get((i)++);
			HX_STACK_LINE(130)
			if (((v < minZ))){
				HX_STACK_LINE(130)
				minZ = v;
			}
			else{
				HX_STACK_LINE(131)
				if (((v > maxZ))){
					HX_STACK_LINE(131)
					maxZ = v;
				}
			}
		}
		HX_STACK_LINE(134)
		this->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoundingVolumeBase_obj,fromVertices,(void))

Void BoundingVolumeBase_obj::disposeRenderable( ){
{
		HX_STACK_PUSH("BoundingVolumeBase::disposeRenderable","away3d/bounds/BoundingVolumeBase.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		if (((this->_boundingRenderable != null()))){
			HX_STACK_LINE(95)
			this->_boundingRenderable->dispose();
		}
		HX_STACK_LINE(96)
		this->_boundingRenderable = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,disposeRenderable,(void))

Void BoundingVolumeBase_obj::nullify( ){
{
		HX_STACK_PUSH("BoundingVolumeBase::nullify","away3d/bounds/BoundingVolumeBase.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		this->_min->x = this->_min->y = this->_min->z = (int)0;
		HX_STACK_LINE(85)
		this->_max->x = this->_max->y = this->_max->z = (int)0;
		HX_STACK_LINE(86)
		this->_aabbPointsDirty = true;
		HX_STACK_LINE(87)
		if (((this->_boundingRenderable != null()))){
			HX_STACK_LINE(87)
			this->updateBoundingRenderable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,nullify,(void))

::away3d::primitives::WireframePrimitiveBase BoundingVolumeBase_obj::get_boundingRenderable( ){
	HX_STACK_PUSH("BoundingVolumeBase::get_boundingRenderable","away3d/bounds/BoundingVolumeBase.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	if (((this->_boundingRenderable == null()))){
		HX_STACK_LINE(62)
		this->_boundingRenderable = this->createBoundingRenderable();
		HX_STACK_LINE(63)
		this->updateBoundingRenderable();
	}
	HX_STACK_LINE(65)
	return this->_boundingRenderable;
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_boundingRenderable,return )

Array< Float > BoundingVolumeBase_obj::get_aabbPoints( ){
	HX_STACK_PUSH("BoundingVolumeBase::get_aabbPoints","away3d/bounds/BoundingVolumeBase.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	if ((this->_aabbPointsDirty)){
		HX_STACK_LINE(49)
		this->updateAABBPoints();
	}
	HX_STACK_LINE(50)
	return this->_aabbPoints;
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_aabbPoints,return )

::flash::geom::Vector3D BoundingVolumeBase_obj::get_min( ){
	HX_STACK_PUSH("BoundingVolumeBase::get_min","away3d/bounds/BoundingVolumeBase.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return this->_min;
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_min,return )

::flash::geom::Vector3D BoundingVolumeBase_obj::get_max( ){
	HX_STACK_PUSH("BoundingVolumeBase::get_max","away3d/bounds/BoundingVolumeBase.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return this->_max;
}


HX_DEFINE_DYNAMIC_FUNC0(BoundingVolumeBase_obj,get_max,return )


BoundingVolumeBase_obj::BoundingVolumeBase_obj()
{
}

void BoundingVolumeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoundingVolumeBase);
	HX_MARK_MEMBER_NAME(_boundingRenderable,"_boundingRenderable");
	HX_MARK_MEMBER_NAME(_aabbPointsDirty,"_aabbPointsDirty");
	HX_MARK_MEMBER_NAME(_aabbPoints,"_aabbPoints");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_END_CLASS();
}

void BoundingVolumeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_boundingRenderable,"_boundingRenderable");
	HX_VISIT_MEMBER_NAME(_aabbPointsDirty,"_aabbPointsDirty");
	HX_VISIT_MEMBER_NAME(_aabbPoints,"_aabbPoints");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_min,"_min");
}

Dynamic BoundingVolumeBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nullify") ) { return nullify_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return fromSphere_dyn(); }
		if (HX_FIELD_EQ(inName,"aabbPoints") ) { return get_aabbPoints(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"_aabbPoints") ) { return _aabbPoints; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return fromExtremes_dyn(); }
		if (HX_FIELD_EQ(inName,"fromGeometry") ) { return fromGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"fromVertices") ) { return fromVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return transformFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_aabbPoints") ) { return get_aabbPoints_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return classifyToPlane_dyn(); }
		if (HX_FIELD_EQ(inName,"rayIntersection") ) { return rayIntersection_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAABBPoints") ) { return updateAABBPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"_aabbPointsDirty") ) { return _aabbPointsDirty; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeRenderable") ) { return disposeRenderable_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boundingRenderable") ) { return get_boundingRenderable(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_boundingRenderable") ) { return _boundingRenderable; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_boundingRenderable") ) { return get_boundingRenderable_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return createBoundingRenderable_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBoundingRenderable") ) { return updateBoundingRenderable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoundingVolumeBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_aabbPoints") ) { _aabbPoints=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_aabbPointsDirty") ) { _aabbPointsDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_boundingRenderable") ) { _boundingRenderable=inValue.Cast< ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoundingVolumeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_boundingRenderable"));
	outFields->push(HX_CSTRING("_aabbPointsDirty"));
	outFields->push(HX_CSTRING("_aabbPoints"));
	outFields->push(HX_CSTRING("_max"));
	outFields->push(HX_CSTRING("_min"));
	outFields->push(HX_CSTRING("boundingRenderable"));
	outFields->push(HX_CSTRING("aabbPoints"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transformFrom"),
	HX_CSTRING("classifyToPlane"),
	HX_CSTRING("createBoundingRenderable"),
	HX_CSTRING("updateBoundingRenderable"),
	HX_CSTRING("updateAABBPoints"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("rayIntersection"),
	HX_CSTRING("clone"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("fromExtremes"),
	HX_CSTRING("fromSphere"),
	HX_CSTRING("fromGeometry"),
	HX_CSTRING("fromVertices"),
	HX_CSTRING("disposeRenderable"),
	HX_CSTRING("nullify"),
	HX_CSTRING("get_boundingRenderable"),
	HX_CSTRING("get_aabbPoints"),
	HX_CSTRING("get_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("_boundingRenderable"),
	HX_CSTRING("_aabbPointsDirty"),
	HX_CSTRING("_aabbPoints"),
	HX_CSTRING("_max"),
	HX_CSTRING("_min"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoundingVolumeBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoundingVolumeBase_obj::__mClass,"__mClass");
};

Class BoundingVolumeBase_obj::__mClass;

void BoundingVolumeBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.bounds.BoundingVolumeBase"), hx::TCanCast< BoundingVolumeBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BoundingVolumeBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace bounds
