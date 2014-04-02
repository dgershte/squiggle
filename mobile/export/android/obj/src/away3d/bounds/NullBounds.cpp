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
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
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

Void NullBounds_obj::__construct(hx::Null< bool >  __o_alwaysIn,::away3d::primitives::WireframePrimitiveBase renderable)
{
HX_STACK_PUSH("NullBounds::new","away3d/bounds/NullBounds.hx",23);
bool alwaysIn = __o_alwaysIn.Default(true);
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->_alwaysIn = alwaysIn;
	HX_STACK_LINE(26)
	this->_renderable = renderable;
	HX_STACK_LINE(27)
	this->_max->x = this->_max->y = this->_max->z = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(28)
	this->_min->x = this->_min->y = this->_min->z = (  ((this->_alwaysIn)) ? Float(::Math_obj::NEGATIVE_INFINITY) : Float(::Math_obj::POSITIVE_INFINITY) );
}
;
	return null();
}

NullBounds_obj::~NullBounds_obj() { }

Dynamic NullBounds_obj::__CreateEmpty() { return  new NullBounds_obj; }
hx::ObjectPtr< NullBounds_obj > NullBounds_obj::__new(hx::Null< bool >  __o_alwaysIn,::away3d::primitives::WireframePrimitiveBase renderable)
{  hx::ObjectPtr< NullBounds_obj > result = new NullBounds_obj();
	result->__construct(__o_alwaysIn,renderable);
	return result;}

Dynamic NullBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NullBounds_obj > result = new NullBounds_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void NullBounds_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("NullBounds::transformFrom","away3d/bounds/NullBounds.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(74)
		this->_alwaysIn = (hx::TCast< away3d::bounds::NullBounds >::cast(bounds))->_alwaysIn;
	}
return null();
}


int NullBounds_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
	HX_STACK_PUSH("NullBounds::classifyToPlane","away3d/bounds/NullBounds.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(plane,"plane");
	HX_STACK_LINE(69)
	return ::away3d::core::math::PlaneClassification_obj::INTERSECT;
}


Void NullBounds_obj::fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
{
		HX_STACK_PUSH("NullBounds::fromExtremes","away3d/bounds/NullBounds.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minX,"minX");
		HX_STACK_ARG(minY,"minY");
		HX_STACK_ARG(minZ,"minZ");
		HX_STACK_ARG(maxX,"maxX");
		HX_STACK_ARG(maxY,"maxY");
		HX_STACK_ARG(maxZ,"maxZ");
	}
return null();
}


Void NullBounds_obj::fromSphere( ::flash::geom::Vector3D center,Float radius){
{
		HX_STACK_PUSH("NullBounds::fromSphere","away3d/bounds/NullBounds.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(center,"center");
		HX_STACK_ARG(radius,"radius");
	}
return null();
}


Void NullBounds_obj::fromGeometry( ::away3d::core::base::Geometry geometry){
{
		HX_STACK_PUSH("NullBounds::fromGeometry","away3d/bounds/NullBounds.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(geometry,"geometry");
	}
return null();
}


bool NullBounds_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("NullBounds::isInFrustum","away3d/bounds/NullBounds.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(43)
	return this->_alwaysIn;
}


::away3d::primitives::WireframePrimitiveBase NullBounds_obj::createBoundingRenderable( ){
	HX_STACK_PUSH("NullBounds::createBoundingRenderable","away3d/bounds/NullBounds.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return (  (((this->_renderable != null()))) ? ::away3d::primitives::WireframePrimitiveBase(this->_renderable) : ::away3d::primitives::WireframePrimitiveBase(::away3d::primitives::WireframeSphere_obj::__new((int)100,(int)16,(int)12,(int)16777215,0.5)) );
}


::away3d::bounds::BoundingVolumeBase NullBounds_obj::clone( ){
	HX_STACK_PUSH("NullBounds::clone","away3d/bounds/NullBounds.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return ::away3d::bounds::NullBounds_obj::__new(this->_alwaysIn,null());
}



NullBounds_obj::NullBounds_obj()
{
}

void NullBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NullBounds);
	HX_MARK_MEMBER_NAME(_renderable,"_renderable");
	HX_MARK_MEMBER_NAME(_alwaysIn,"_alwaysIn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NullBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_renderable,"_renderable");
	HX_VISIT_MEMBER_NAME(_alwaysIn,"_alwaysIn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic NullBounds_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_alwaysIn") ) { return _alwaysIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return fromSphere_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderable") ) { return _renderable; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return fromExtremes_dyn(); }
		if (HX_FIELD_EQ(inName,"fromGeometry") ) { return fromGeometry_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return transformFrom_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return classifyToPlane_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return createBoundingRenderable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NullBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_alwaysIn") ) { _alwaysIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { _renderable=inValue.Cast< ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NullBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_renderable"));
	outFields->push(HX_CSTRING("_alwaysIn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transformFrom"),
	HX_CSTRING("classifyToPlane"),
	HX_CSTRING("fromExtremes"),
	HX_CSTRING("fromSphere"),
	HX_CSTRING("fromGeometry"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("createBoundingRenderable"),
	HX_CSTRING("clone"),
	HX_CSTRING("_renderable"),
	HX_CSTRING("_alwaysIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NullBounds_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NullBounds_obj::__mClass,"__mClass");
};

Class NullBounds_obj::__mClass;

void NullBounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.bounds.NullBounds"), hx::TCanCast< NullBounds_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NullBounds_obj::__boot()
{
}

} // end namespace away3d
} // end namespace bounds
