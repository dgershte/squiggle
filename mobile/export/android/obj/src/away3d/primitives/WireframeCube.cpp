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
namespace away3d{
namespace primitives{

Void WireframeCube_obj::__construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_depth,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("WireframeCube::new","away3d/primitives/WireframeCube.hx",26);
Float width = __o_width.Default(100);
Float height = __o_height.Default(100);
Float depth = __o_depth.Default(100);
int color = __o_color.Default(16777215);
Float thickness = __o_thickness.Default(1);
{
	HX_STACK_LINE(27)
	super::__construct(color,thickness);
	HX_STACK_LINE(28)
	this->_width = width;
	HX_STACK_LINE(29)
	this->_height = height;
	HX_STACK_LINE(30)
	this->_depth = depth;
}
;
	return null();
}

WireframeCube_obj::~WireframeCube_obj() { }

Dynamic WireframeCube_obj::__CreateEmpty() { return  new WireframeCube_obj; }
hx::ObjectPtr< WireframeCube_obj > WireframeCube_obj::__new(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_depth,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< WireframeCube_obj > result = new WireframeCube_obj();
	result->__construct(__o_width,__o_height,__o_depth,__o_color,__o_thickness);
	return result;}

Dynamic WireframeCube_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WireframeCube_obj > result = new WireframeCube_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void WireframeCube_obj::buildGeometry( ){
{
		HX_STACK_PUSH("WireframeCube::buildGeometry","away3d/primitives/WireframeCube.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		::flash::geom::Vector3D v0 = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(82)
		::flash::geom::Vector3D v1 = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(83)
		Float hw = (this->_width * .5);		HX_STACK_VAR(hw,"hw");
		HX_STACK_LINE(84)
		Float hh = (this->_height * .5);		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(85)
		Float hd = (this->_depth * .5);		HX_STACK_VAR(hd,"hd");
		HX_STACK_LINE(86)
		v0->x = -(hw);
		HX_STACK_LINE(87)
		v0->y = hh;
		HX_STACK_LINE(88)
		v0->z = -(hd);
		HX_STACK_LINE(89)
		v1->x = -(hw);
		HX_STACK_LINE(90)
		v1->y = -(hh);
		HX_STACK_LINE(91)
		v1->z = -(hd);
		HX_STACK_LINE(92)
		this->updateOrAddSegment((int)0,v0,v1);
		HX_STACK_LINE(93)
		v0->z = hd;
		HX_STACK_LINE(94)
		v1->z = hd;
		HX_STACK_LINE(95)
		this->updateOrAddSegment((int)1,v0,v1);
		HX_STACK_LINE(96)
		v0->x = hw;
		HX_STACK_LINE(97)
		v1->x = hw;
		HX_STACK_LINE(98)
		this->updateOrAddSegment((int)2,v0,v1);
		HX_STACK_LINE(99)
		v0->z = -(hd);
		HX_STACK_LINE(100)
		v1->z = -(hd);
		HX_STACK_LINE(101)
		this->updateOrAddSegment((int)3,v0,v1);
		HX_STACK_LINE(102)
		v0->x = -(hw);
		HX_STACK_LINE(103)
		v0->y = -(hh);
		HX_STACK_LINE(104)
		v0->z = -(hd);
		HX_STACK_LINE(105)
		v1->x = hw;
		HX_STACK_LINE(106)
		v1->y = -(hh);
		HX_STACK_LINE(107)
		v1->z = -(hd);
		HX_STACK_LINE(108)
		this->updateOrAddSegment((int)4,v0,v1);
		HX_STACK_LINE(109)
		v0->y = hh;
		HX_STACK_LINE(110)
		v1->y = hh;
		HX_STACK_LINE(111)
		this->updateOrAddSegment((int)5,v0,v1);
		HX_STACK_LINE(112)
		v0->z = hd;
		HX_STACK_LINE(113)
		v1->z = hd;
		HX_STACK_LINE(114)
		this->updateOrAddSegment((int)6,v0,v1);
		HX_STACK_LINE(115)
		v0->y = -(hh);
		HX_STACK_LINE(116)
		v1->y = -(hh);
		HX_STACK_LINE(117)
		this->updateOrAddSegment((int)7,v0,v1);
		HX_STACK_LINE(118)
		v0->x = -(hw);
		HX_STACK_LINE(119)
		v0->y = -(hh);
		HX_STACK_LINE(120)
		v0->z = -(hd);
		HX_STACK_LINE(121)
		v1->x = -(hw);
		HX_STACK_LINE(122)
		v1->y = -(hh);
		HX_STACK_LINE(123)
		v1->z = hd;
		HX_STACK_LINE(124)
		this->updateOrAddSegment((int)8,v0,v1);
		HX_STACK_LINE(125)
		v0->y = hh;
		HX_STACK_LINE(126)
		v1->y = hh;
		HX_STACK_LINE(127)
		this->updateOrAddSegment((int)9,v0,v1);
		HX_STACK_LINE(128)
		v0->x = hw;
		HX_STACK_LINE(129)
		v1->x = hw;
		HX_STACK_LINE(130)
		this->updateOrAddSegment((int)10,v0,v1);
		HX_STACK_LINE(131)
		v0->y = -(hh);
		HX_STACK_LINE(132)
		v1->y = -(hh);
		HX_STACK_LINE(133)
		this->updateOrAddSegment((int)11,v0,v1);
	}
return null();
}


Float WireframeCube_obj::set_depth( Float value){
	HX_STACK_PUSH("WireframeCube::set_depth","away3d/primitives/WireframeCube.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(71)
	this->_depth = value;
	HX_STACK_LINE(72)
	this->invalidateGeometry();
	HX_STACK_LINE(73)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_depth,return )

Float WireframeCube_obj::get_depth( ){
	HX_STACK_PUSH("WireframeCube::get_depth","away3d/primitives/WireframeCube.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->_depth;
}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_depth,return )

Float WireframeCube_obj::set_height( Float value){
	HX_STACK_PUSH("WireframeCube::set_height","away3d/primitives/WireframeCube.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(56)
	if (((value <= (int)0))){
		HX_STACK_LINE(56)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Value needs to be greater than 0"),null()));
	}
	HX_STACK_LINE(57)
	this->_height = value;
	HX_STACK_LINE(58)
	this->invalidateGeometry();
	HX_STACK_LINE(59)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_height,return )

Float WireframeCube_obj::get_height( ){
	HX_STACK_PUSH("WireframeCube::get_height","away3d/primitives/WireframeCube.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_height,return )

Float WireframeCube_obj::set_width( Float value){
	HX_STACK_PUSH("WireframeCube::set_width","away3d/primitives/WireframeCube.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(42)
	this->_width = value;
	HX_STACK_LINE(43)
	this->invalidateGeometry();
	HX_STACK_LINE(44)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_width,return )

Float WireframeCube_obj::get_width( ){
	HX_STACK_PUSH("WireframeCube::get_width","away3d/primitives/WireframeCube.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_width,return )


WireframeCube_obj::WireframeCube_obj()
{
}

void WireframeCube_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WireframeCube);
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WireframeCube_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WireframeCube_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return get_depth(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { return _depth; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return buildGeometry_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WireframeCube_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return set_depth(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframeCube_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_depth"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("buildGeometry"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("get_depth"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("_depth"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WireframeCube_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WireframeCube_obj::__mClass,"__mClass");
};

Class WireframeCube_obj::__mClass;

void WireframeCube_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.WireframeCube"), hx::TCanCast< WireframeCube_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WireframeCube_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
