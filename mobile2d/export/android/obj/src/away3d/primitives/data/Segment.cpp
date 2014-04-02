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
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
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
namespace data{

Void Segment_obj::__construct(::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  __o_colorStart,hx::Null< int >  __o_colorEnd,hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("Segment::new","away3d/primitives/data/Segment.hx",32);
int colorStart = __o_colorStart.Default(3355443);
int colorEnd = __o_colorEnd.Default(3355443);
Float thickness = __o_thickness.Default(1);
{
	HX_STACK_LINE(33)
	this->_index = (int)-1;
	HX_STACK_LINE(34)
	this->_subSetIndex = (int)-1;
	HX_STACK_LINE(36)
	anchor = null();
	HX_STACK_LINE(37)
	this->_thickness = (thickness * .5);
	HX_STACK_LINE(40)
	this->_start = start;
	HX_STACK_LINE(41)
	this->_end = end;
	HX_STACK_LINE(42)
	this->set_startColor(colorStart);
	HX_STACK_LINE(43)
	this->set_endColor(colorEnd);
}
;
	return null();
}

Segment_obj::~Segment_obj() { }

Dynamic Segment_obj::__CreateEmpty() { return  new Segment_obj; }
hx::ObjectPtr< Segment_obj > Segment_obj::__new(::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  __o_colorStart,hx::Null< int >  __o_colorEnd,hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< Segment_obj > result = new Segment_obj();
	result->__construct(start,end,anchor,__o_colorStart,__o_colorEnd,__o_thickness);
	return result;}

Dynamic Segment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Segment_obj > result = new Segment_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Segment_obj::update( ){
{
		HX_STACK_PUSH("Segment::update","away3d/primitives/data/Segment.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		if (((this->_segmentsBase == null()))){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(163)
		this->_segmentsBase->updateSegment(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,update,(void))

::away3d::entities::SegmentSet Segment_obj::set_segmentsBase( ::away3d::entities::SegmentSet segBase){
	HX_STACK_PUSH("Segment::set_segmentsBase","away3d/primitives/data/Segment.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(segBase,"segBase");
	HX_STACK_LINE(157)
	this->_segmentsBase = segBase;
	HX_STACK_LINE(158)
	return segBase;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_segmentsBase,return )

int Segment_obj::set_subSetIndex( int ind){
	HX_STACK_PUSH("Segment::set_subSetIndex","away3d/primitives/data/Segment.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(152)
	this->_subSetIndex = ind;
	HX_STACK_LINE(153)
	return ind;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_subSetIndex,return )

int Segment_obj::get_subSetIndex( ){
	HX_STACK_PUSH("Segment::get_subSetIndex","away3d/primitives/data/Segment.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(147)
	return this->_subSetIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_subSetIndex,return )

int Segment_obj::set_index( int ind){
	HX_STACK_PUSH("Segment::set_index","away3d/primitives/data/Segment.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(143)
	this->_index = ind;
	HX_STACK_LINE(144)
	return ind;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_index,return )

int Segment_obj::get_index( ){
	HX_STACK_PUSH("Segment::get_index","away3d/primitives/data/Segment.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_LINE(138)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_index,return )

Void Segment_obj::dispose( ){
{
		HX_STACK_PUSH("Segment::dispose","away3d/primitives/data/Segment.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_LINE(134)
		this->_start = null();
		HX_STACK_LINE(135)
		this->_end = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,dispose,(void))

int Segment_obj::set_endColor( int color){
	HX_STACK_PUSH("Segment::set_endColor","away3d/primitives/data/Segment.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(125)
	this->_endR = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(126)
	this->_endG = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(127)
	this->_endB = (Float(((int(color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(128)
	this->_endColor = color;
	HX_STACK_LINE(129)
	this->update();
	HX_STACK_LINE(130)
	return color;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_endColor,return )

int Segment_obj::get_endColor( ){
	HX_STACK_PUSH("Segment::get_endColor","away3d/primitives/data/Segment.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(120)
	return this->_endColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_endColor,return )

int Segment_obj::set_startColor( int color){
	HX_STACK_PUSH("Segment::set_startColor","away3d/primitives/data/Segment.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(108)
	this->_startR = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(109)
	this->_startG = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(110)
	this->_startB = (Float(((int(color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(111)
	this->_startColor = color;
	HX_STACK_LINE(112)
	this->update();
	HX_STACK_LINE(113)
	return color;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_startColor,return )

int Segment_obj::get_startColor( ){
	HX_STACK_PUSH("Segment::get_startColor","away3d/primitives/data/Segment.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->_startColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_startColor,return )

Float Segment_obj::set_thickness( Float value){
	HX_STACK_PUSH("Segment::set_thickness","away3d/primitives/data/Segment.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(94)
	this->_thickness = (value * .5);
	HX_STACK_LINE(95)
	this->update();
	HX_STACK_LINE(96)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_thickness,return )

Float Segment_obj::get_thickness( ){
	HX_STACK_PUSH("Segment::get_thickness","away3d/primitives/data/Segment.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return (this->_thickness * (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_thickness,return )

::flash::geom::Vector3D Segment_obj::set_end( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("Segment::set_end","away3d/primitives/data/Segment.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(80)
	this->_end = value;
	HX_STACK_LINE(81)
	this->update();
	HX_STACK_LINE(82)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_end,return )

::flash::geom::Vector3D Segment_obj::get_end( ){
	HX_STACK_PUSH("Segment::get_end","away3d/primitives/data/Segment.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return this->_end;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_end,return )

::flash::geom::Vector3D Segment_obj::set_start( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("Segment::set_start","away3d/primitives/data/Segment.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(66)
	this->_start = value;
	HX_STACK_LINE(67)
	this->update();
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_start,return )

::flash::geom::Vector3D Segment_obj::get_start( ){
	HX_STACK_PUSH("Segment::get_start","away3d/primitives/data/Segment.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_start;
}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_start,return )

Void Segment_obj::updateSegment( ::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  __o_colorStart,hx::Null< int >  __o_colorEnd,hx::Null< Float >  __o_thickness){
int colorStart = __o_colorStart.Default(3355443);
int colorEnd = __o_colorEnd.Default(3355443);
Float thickness = __o_thickness.Default(1);
	HX_STACK_PUSH("Segment::updateSegment","away3d/primitives/data/Segment.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(start,"start");
	HX_STACK_ARG(end,"end");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(colorStart,"colorStart");
	HX_STACK_ARG(colorEnd,"colorEnd");
	HX_STACK_ARG(thickness,"thickness");
{
		HX_STACK_LINE(48)
		anchor = null();
		HX_STACK_LINE(49)
		this->_start = start;
		HX_STACK_LINE(50)
		this->_end = end;
		HX_STACK_LINE(51)
		if (((this->_startColor != colorStart))){
			HX_STACK_LINE(51)
			this->set_startColor(colorStart);
		}
		HX_STACK_LINE(52)
		if (((this->_endColor != colorEnd))){
			HX_STACK_LINE(52)
			this->set_endColor(colorEnd);
		}
		HX_STACK_LINE(53)
		this->_thickness = (thickness * .5);
		HX_STACK_LINE(54)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Segment_obj,updateSegment,(void))


Segment_obj::Segment_obj()
{
}

void Segment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Segment);
	HX_MARK_MEMBER_NAME(_endColor,"_endColor");
	HX_MARK_MEMBER_NAME(_startColor,"_startColor");
	HX_MARK_MEMBER_NAME(_subSetIndex,"_subSetIndex");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_endB,"_endB");
	HX_MARK_MEMBER_NAME(_endG,"_endG");
	HX_MARK_MEMBER_NAME(_endR,"_endR");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_end,"_end");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	HX_MARK_MEMBER_NAME(_segmentsBase,"_segmentsBase");
	HX_MARK_END_CLASS();
}

void Segment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_endColor,"_endColor");
	HX_VISIT_MEMBER_NAME(_startColor,"_startColor");
	HX_VISIT_MEMBER_NAME(_subSetIndex,"_subSetIndex");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_endB,"_endB");
	HX_VISIT_MEMBER_NAME(_endG,"_endG");
	HX_VISIT_MEMBER_NAME(_endR,"_endR");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_end,"_end");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	HX_VISIT_MEMBER_NAME(_segmentsBase,"_segmentsBase");
}

Dynamic Segment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return get_end(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { return _end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_endB") ) { return _endB; }
		if (HX_FIELD_EQ(inName,"_endG") ) { return _endG; }
		if (HX_FIELD_EQ(inName,"_endR") ) { return _endR; }
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"start") ) { return get_start(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"set_end") ) { return set_end_dyn(); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return get_end_dyn(); }
		if (HX_FIELD_EQ(inName,"_startB") ) { return _startB; }
		if (HX_FIELD_EQ(inName,"_startG") ) { return _startG; }
		if (HX_FIELD_EQ(inName,"_startR") ) { return _startR; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return get_endColor(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_start") ) { return set_start_dyn(); }
		if (HX_FIELD_EQ(inName,"get_start") ) { return get_start_dyn(); }
		if (HX_FIELD_EQ(inName,"_endColor") ) { return _endColor; }
		if (HX_FIELD_EQ(inName,"thickness") ) { return get_thickness(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_thickness") ) { return _thickness; }
		if (HX_FIELD_EQ(inName,"startColor") ) { return get_startColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startColor") ) { return _startColor; }
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { return get_subSetIndex(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_endColor") ) { return set_endColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endColor") ) { return get_endColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_subSetIndex") ) { return _subSetIndex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return get_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSegment") ) { return updateSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"_segmentsBase") ) { return _segmentsBase; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_startColor") ) { return set_startColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_startColor") ) { return get_startColor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_subSetIndex") ) { return set_subSetIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subSetIndex") ) { return get_subSetIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_segmentsBase") ) { return set_segmentsBase_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Segment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return set_end(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { _end=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_endB") ) { _endB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_endG") ) { _endG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_endR") ) { _endR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"start") ) { return set_start(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return set_endColor(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_endColor") ) { _endColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thickness") ) { return set_thickness(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startColor") ) { return set_startColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startColor") ) { _startColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { return set_subSetIndex(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subSetIndex") ) { _subSetIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segmentsBase") ) { return set_segmentsBase(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_segmentsBase") ) { _segmentsBase=inValue.Cast< ::away3d::entities::SegmentSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Segment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_endColor"));
	outFields->push(HX_CSTRING("_startColor"));
	outFields->push(HX_CSTRING("_subSetIndex"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_endB"));
	outFields->push(HX_CSTRING("_endG"));
	outFields->push(HX_CSTRING("_endR"));
	outFields->push(HX_CSTRING("_startB"));
	outFields->push(HX_CSTRING("_startG"));
	outFields->push(HX_CSTRING("_startR"));
	outFields->push(HX_CSTRING("_end"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_thickness"));
	outFields->push(HX_CSTRING("_segmentsBase"));
	outFields->push(HX_CSTRING("segmentsBase"));
	outFields->push(HX_CSTRING("subSetIndex"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("endColor"));
	outFields->push(HX_CSTRING("startColor"));
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("start"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("set_segmentsBase"),
	HX_CSTRING("set_subSetIndex"),
	HX_CSTRING("get_subSetIndex"),
	HX_CSTRING("set_index"),
	HX_CSTRING("get_index"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_endColor"),
	HX_CSTRING("get_endColor"),
	HX_CSTRING("set_startColor"),
	HX_CSTRING("get_startColor"),
	HX_CSTRING("set_thickness"),
	HX_CSTRING("get_thickness"),
	HX_CSTRING("set_end"),
	HX_CSTRING("get_end"),
	HX_CSTRING("set_start"),
	HX_CSTRING("get_start"),
	HX_CSTRING("updateSegment"),
	HX_CSTRING("_endColor"),
	HX_CSTRING("_startColor"),
	HX_CSTRING("_subSetIndex"),
	HX_CSTRING("_index"),
	HX_CSTRING("_endB"),
	HX_CSTRING("_endG"),
	HX_CSTRING("_endR"),
	HX_CSTRING("_startB"),
	HX_CSTRING("_startG"),
	HX_CSTRING("_startR"),
	HX_CSTRING("_end"),
	HX_CSTRING("_start"),
	HX_CSTRING("_thickness"),
	HX_CSTRING("_segmentsBase"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Segment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Segment_obj::__mClass,"__mClass");
};

Class Segment_obj::__mClass;

void Segment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.data.Segment"), hx::TCanCast< Segment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Segment_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
} // end namespace data
