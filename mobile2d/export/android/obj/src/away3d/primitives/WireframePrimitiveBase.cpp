#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
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
#ifndef INCLUDED_away3d_primitives_LineSegment
#include <away3d/primitives/LineSegment.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace away3d{
namespace primitives{

Void WireframePrimitiveBase_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("WireframePrimitiveBase::new","away3d/primitives/WireframePrimitiveBase.hx",18);
int color = __o_color.Default(16777215);
Float thickness = __o_thickness.Default(1);
{
	HX_STACK_LINE(19)
	this->_geomDirty = true;
	HX_STACK_LINE(20)
	if (((thickness <= (int)0))){
		HX_STACK_LINE(20)
		thickness = (int)1;
	}
	HX_STACK_LINE(21)
	this->_color = color;
	HX_STACK_LINE(22)
	this->_thickness = thickness;
	HX_STACK_LINE(23)
	this->set_mouseEnabled(this->set_mouseChildren(false));
	HX_STACK_LINE(24)
	super::__construct();
}
;
	return null();
}

WireframePrimitiveBase_obj::~WireframePrimitiveBase_obj() { }

Dynamic WireframePrimitiveBase_obj::__CreateEmpty() { return  new WireframePrimitiveBase_obj; }
hx::ObjectPtr< WireframePrimitiveBase_obj > WireframePrimitiveBase_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< WireframePrimitiveBase_obj > result = new WireframePrimitiveBase_obj();
	result->__construct(__o_color,__o_thickness);
	return result;}

Dynamic WireframePrimitiveBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WireframePrimitiveBase_obj > result = new WireframePrimitiveBase_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void WireframePrimitiveBase_obj::updateMouseChildren( ){
{
		HX_STACK_PUSH("WireframePrimitiveBase::updateMouseChildren","away3d/primitives/WireframePrimitiveBase.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		this->_ancestorsAllowMouseEnabled = false;
	}
return null();
}


Void WireframePrimitiveBase_obj::updateOrAddSegment( int index,::flash::geom::Vector3D v0,::flash::geom::Vector3D v1){
{
		HX_STACK_PUSH("WireframePrimitiveBase::updateOrAddSegment","away3d/primitives/WireframePrimitiveBase.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(v0,"v0");
		HX_STACK_ARG(v1,"v1");
		HX_STACK_LINE(77)
		::away3d::primitives::data::Segment segment;		HX_STACK_VAR(segment,"segment");
		HX_STACK_LINE(78)
		::flash::geom::Vector3D s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(79)
		::flash::geom::Vector3D e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(80)
		if ((((segment = this->getSegment(index)) != null()))){
			HX_STACK_LINE(81)
			s = segment->get_start();
			HX_STACK_LINE(82)
			e = segment->get_end();
			HX_STACK_LINE(83)
			s->x = v0->x;
			HX_STACK_LINE(84)
			s->y = v0->y;
			HX_STACK_LINE(85)
			s->z = v0->z;
			HX_STACK_LINE(86)
			e->x = v1->x;
			HX_STACK_LINE(87)
			e->y = v1->y;
			HX_STACK_LINE(88)
			e->z = v1->z;
			HX_STACK_LINE(89)
			segment->updateSegment(s,e,null(),this->_color,this->_color,this->_thickness);
		}
		else{
			HX_STACK_LINE(92)
			this->addSegment(::away3d::primitives::LineSegment_obj::__new(::flash::geom::Vector3D_obj::__new(v0->x,v0->y,v0->z,v0->w),::flash::geom::Vector3D_obj::__new(v1->x,v1->y,v1->z,v1->w),this->_color,this->_color,this->_thickness));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WireframePrimitiveBase_obj,updateOrAddSegment,(void))

Void WireframePrimitiveBase_obj::updateGeometry( ){
{
		HX_STACK_PUSH("WireframePrimitiveBase::updateGeometry","away3d/primitives/WireframePrimitiveBase.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		this->buildGeometry();
		HX_STACK_LINE(73)
		this->_geomDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,updateGeometry,(void))

Void WireframePrimitiveBase_obj::invalidateGeometry( ){
{
		HX_STACK_PUSH("WireframePrimitiveBase::invalidateGeometry","away3d/primitives/WireframePrimitiveBase.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		this->_geomDirty = true;
		HX_STACK_LINE(68)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,invalidateGeometry,(void))

Void WireframePrimitiveBase_obj::buildGeometry( ){
{
		HX_STACK_PUSH("WireframePrimitiveBase::buildGeometry","away3d/primitives/WireframePrimitiveBase.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,buildGeometry,(void))

::away3d::bounds::BoundingVolumeBase WireframePrimitiveBase_obj::get_bounds( ){
	HX_STACK_PUSH("WireframePrimitiveBase::get_bounds","away3d/primitives/WireframePrimitiveBase.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	if ((this->_geomDirty)){
		HX_STACK_LINE(58)
		this->updateGeometry();
	}
	HX_STACK_LINE(59)
	return this->super::get_bounds();
}


Void WireframePrimitiveBase_obj::removeAllSegments( ){
{
		HX_STACK_PUSH("WireframePrimitiveBase::removeAllSegments","away3d/primitives/WireframePrimitiveBase.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		this->super::removeAllSegments();
	}
return null();
}


Float WireframePrimitiveBase_obj::set_thickness( Float value){
	HX_STACK_PUSH("WireframePrimitiveBase::set_thickness","away3d/primitives/WireframePrimitiveBase.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(45)
	this->_thickness = value;
	HX_STACK_LINE(46)
	for(::cpp::FastIterator_obj< ::away3d::entities::SegRef > *__it = ::cpp::CreateFastIterator< ::away3d::entities::SegRef >(this->_segments->iterator());  __it->hasNext(); ){
		::away3d::entities::SegRef segRef = __it->next();
		segRef->segment->set_thickness(segRef->segment->set_thickness(value));
	}
	HX_STACK_LINE(50)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(WireframePrimitiveBase_obj,set_thickness,return )

Float WireframePrimitiveBase_obj::get_thickness( ){
	HX_STACK_PUSH("WireframePrimitiveBase::get_thickness","away3d/primitives/WireframePrimitiveBase.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return this->_thickness;
}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,get_thickness,return )

int WireframePrimitiveBase_obj::set_color( int value){
	HX_STACK_PUSH("WireframePrimitiveBase::set_color","away3d/primitives/WireframePrimitiveBase.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(32)
	this->_color = value;
	HX_STACK_LINE(33)
	for(::cpp::FastIterator_obj< ::away3d::entities::SegRef > *__it = ::cpp::CreateFastIterator< ::away3d::entities::SegRef >(this->_segments->iterator());  __it->hasNext(); ){
		::away3d::entities::SegRef segRef = __it->next();
		segRef->segment->set_startColor(segRef->segment->set_endColor(value));
	}
	HX_STACK_LINE(37)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(WireframePrimitiveBase_obj,set_color,return )

int WireframePrimitiveBase_obj::get_color( ){
	HX_STACK_PUSH("WireframePrimitiveBase::get_color","away3d/primitives/WireframePrimitiveBase.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,get_color,return )


WireframePrimitiveBase_obj::WireframePrimitiveBase_obj()
{
}

void WireframePrimitiveBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WireframePrimitiveBase);
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_geomDirty,"_geomDirty");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WireframePrimitiveBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_geomDirty,"_geomDirty");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WireframePrimitiveBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"thickness") ) { return get_thickness(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return _thickness; }
		if (HX_FIELD_EQ(inName,"_geomDirty") ) { return _geomDirty; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return buildGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return get_thickness_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGeometry") ) { return updateGeometry_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllSegments") ) { return removeAllSegments_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateOrAddSegment") ) { return updateOrAddSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateGeometry") ) { return invalidateGeometry_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return updateMouseChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WireframePrimitiveBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return set_thickness(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geomDirty") ) { _geomDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframePrimitiveBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_thickness"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_geomDirty"));
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateMouseChildren"),
	HX_CSTRING("updateOrAddSegment"),
	HX_CSTRING("updateGeometry"),
	HX_CSTRING("invalidateGeometry"),
	HX_CSTRING("buildGeometry"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("removeAllSegments"),
	HX_CSTRING("set_thickness"),
	HX_CSTRING("get_thickness"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("_thickness"),
	HX_CSTRING("_color"),
	HX_CSTRING("_geomDirty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WireframePrimitiveBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WireframePrimitiveBase_obj::__mClass,"__mClass");
};

Class WireframePrimitiveBase_obj::__mClass;

void WireframePrimitiveBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.WireframePrimitiveBase"), hx::TCanCast< WireframePrimitiveBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WireframePrimitiveBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
