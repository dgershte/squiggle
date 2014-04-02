#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
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
#ifndef INCLUDED_away3d_events_TouchEvent3D
#include <away3d/events/TouchEvent3D.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace events{

Void TouchEvent3D_obj::__construct(::String type)
{
HX_STACK_PUSH("TouchEvent3D::new","away3d/events/TouchEvent3D.hx",86);
{
	HX_STACK_LINE(87)
	this->_allowedToPropagate = true;
	HX_STACK_LINE(88)
	super::__construct(type,true,true);
}
;
	return null();
}

TouchEvent3D_obj::~TouchEvent3D_obj() { }

Dynamic TouchEvent3D_obj::__CreateEmpty() { return  new TouchEvent3D_obj; }
hx::ObjectPtr< TouchEvent3D_obj > TouchEvent3D_obj::__new(::String type)
{  hx::ObjectPtr< TouchEvent3D_obj > result = new TouchEvent3D_obj();
	result->__construct(type);
	return result;}

Dynamic TouchEvent3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent3D_obj > result = new TouchEvent3D_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::geom::Vector3D TouchEvent3D_obj::get_sceneNormal( ){
	HX_STACK_PUSH("TouchEvent3D::get_sceneNormal","away3d/events/TouchEvent3D.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	if ((::Std_obj::is(this->object,hx::ClassOf< ::away3d::containers::ObjectContainer3D >()))){
		HX_STACK_LINE(162)
		::flash::geom::Vector3D sceneNormal = (hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->object))->get_sceneTransform()->deltaTransformVector(this->localNormal);		HX_STACK_VAR(sceneNormal,"sceneNormal");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			Float l = ::Math_obj::sqrt((((sceneNormal->x * sceneNormal->x) + (sceneNormal->y * sceneNormal->y)) + (sceneNormal->z * sceneNormal->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(163)
			if (((l != (int)0))){
				HX_STACK_LINE(163)
				hx::DivEq(sceneNormal->x,l);
				HX_STACK_LINE(163)
				hx::DivEq(sceneNormal->y,l);
				HX_STACK_LINE(163)
				hx::DivEq(sceneNormal->z,l);
			}
			HX_STACK_LINE(163)
			l;
		}
		HX_STACK_LINE(164)
		return sceneNormal;
	}
	else{
		HX_STACK_LINE(167)
		return this->localNormal;
	}
	HX_STACK_LINE(160)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent3D_obj,get_sceneNormal,return )

::flash::geom::Vector3D TouchEvent3D_obj::get_scenePosition( ){
	HX_STACK_PUSH("TouchEvent3D::get_scenePosition","away3d/events/TouchEvent3D.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	if ((::Std_obj::is(this->object,hx::ClassOf< ::away3d::containers::ObjectContainer3D >()))){
		HX_STACK_LINE(152)
		return (hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->object))->get_sceneTransform()->transformVector(this->localPosition);
	}
	else{
		HX_STACK_LINE(153)
		return this->localPosition;
	}
	HX_STACK_LINE(151)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent3D_obj,get_scenePosition,return )

::flash::events::Event TouchEvent3D_obj::clone( ){
	HX_STACK_PUSH("TouchEvent3D::clone","away3d/events/TouchEvent3D.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(126)
	::away3d::events::TouchEvent3D result = ::away3d::events::TouchEvent3D_obj::__new(this->get_type());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(130)
	result->screenX = this->screenX;
	HX_STACK_LINE(131)
	result->screenY = this->screenY;
	HX_STACK_LINE(132)
	result->view = this->view;
	HX_STACK_LINE(133)
	result->object = this->object;
	HX_STACK_LINE(134)
	result->renderable = this->renderable;
	HX_STACK_LINE(135)
	result->material = this->material;
	HX_STACK_LINE(136)
	result->uv = this->uv;
	HX_STACK_LINE(137)
	result->localPosition = this->localPosition;
	HX_STACK_LINE(138)
	result->localNormal = this->localNormal;
	HX_STACK_LINE(139)
	result->index = this->index;
	HX_STACK_LINE(140)
	result->subGeometryIndex = this->subGeometryIndex;
	HX_STACK_LINE(141)
	result->ctrlKey = this->ctrlKey;
	HX_STACK_LINE(142)
	result->shiftKey = this->shiftKey;
	HX_STACK_LINE(143)
	result->_parentEvent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(144)
	return result;
}


Void TouchEvent3D_obj::stopImmediatePropagation( ){
{
		HX_STACK_PUSH("TouchEvent3D::stopImmediatePropagation","away3d/events/TouchEvent3D.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(116)
		this->super::stopImmediatePropagation();
		HX_STACK_LINE(117)
		this->_allowedToPropagate = false;
		HX_STACK_LINE(118)
		if (((this->_parentEvent != null()))){
			HX_STACK_LINE(118)
			this->_parentEvent->_allowedToPropagate = false;
		}
	}
return null();
}


Void TouchEvent3D_obj::stopPropagation( ){
{
		HX_STACK_PUSH("TouchEvent3D::stopPropagation","away3d/events/TouchEvent3D.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		this->super::stopPropagation();
		HX_STACK_LINE(107)
		this->_allowedToPropagate = false;
		HX_STACK_LINE(108)
		if (((this->_parentEvent != null()))){
			HX_STACK_LINE(108)
			this->_parentEvent->_allowedToPropagate = false;
		}
	}
return null();
}


::String TouchEvent3D_obj::TOUCH_END;

::String TouchEvent3D_obj::TOUCH_BEGIN;

::String TouchEvent3D_obj::TOUCH_MOVE;

::String TouchEvent3D_obj::TOUCH_OUT;

::String TouchEvent3D_obj::TOUCH_OVER;


TouchEvent3D_obj::TouchEvent3D_obj()
{
}

void TouchEvent3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent3D);
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(localNormal,"localNormal");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(_parentEvent,"_parentEvent");
	HX_MARK_MEMBER_NAME(_allowedToPropagate,"_allowedToPropagate");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TouchEvent3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(localNormal,"localNormal");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(_parentEvent,"_parentEvent");
	HX_VISIT_MEMBER_NAME(_allowedToPropagate,"_allowedToPropagate");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TouchEvent3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { return TOUCH_END; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { return TOUCH_OUT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { return TOUCH_MOVE; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { return TOUCH_OVER; }
		if (HX_FIELD_EQ(inName,"renderable") ) { return renderable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { return TOUCH_BEGIN; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { return localNormal; }
		if (HX_FIELD_EQ(inName,"sceneNormal") ) { return get_sceneNormal(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { return _parentEvent; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { return localPosition; }
		if (HX_FIELD_EQ(inName,"scenePosition") ) { return get_scenePosition(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_sceneNormal") ) { return get_sceneNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { return subGeometryIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_scenePosition") ) { return get_scenePosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_allowedToPropagate") ) { return _allowedToPropagate; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEvent3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::away3d::containers::View3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { TOUCH_END=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { TOUCH_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { TOUCH_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { TOUCH_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { TOUCH_BEGIN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { localNormal=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { _parentEvent=inValue.Cast< ::away3d::events::TouchEvent3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { subGeometryIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_allowedToPropagate") ) { _allowedToPropagate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("shiftKey"));
	outFields->push(HX_CSTRING("altKey"));
	outFields->push(HX_CSTRING("ctrlKey"));
	outFields->push(HX_CSTRING("localNormal"));
	outFields->push(HX_CSTRING("localPosition"));
	outFields->push(HX_CSTRING("subGeometryIndex"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("uv"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("renderable"));
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("_parentEvent"));
	outFields->push(HX_CSTRING("_allowedToPropagate"));
	outFields->push(HX_CSTRING("sceneNormal"));
	outFields->push(HX_CSTRING("scenePosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOUCH_END"),
	HX_CSTRING("TOUCH_BEGIN"),
	HX_CSTRING("TOUCH_MOVE"),
	HX_CSTRING("TOUCH_OUT"),
	HX_CSTRING("TOUCH_OVER"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_sceneNormal"),
	HX_CSTRING("get_scenePosition"),
	HX_CSTRING("clone"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("stopPropagation"),
	HX_CSTRING("touchPointID"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("altKey"),
	HX_CSTRING("ctrlKey"),
	HX_CSTRING("localNormal"),
	HX_CSTRING("localPosition"),
	HX_CSTRING("subGeometryIndex"),
	HX_CSTRING("index"),
	HX_CSTRING("uv"),
	HX_CSTRING("material"),
	HX_CSTRING("renderable"),
	HX_CSTRING("object"),
	HX_CSTRING("view"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("_parentEvent"),
	HX_CSTRING("_allowedToPropagate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OVER,"TOUCH_OVER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OVER,"TOUCH_OVER");
};

Class TouchEvent3D_obj::__mClass;

void TouchEvent3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.TouchEvent3D"), hx::TCanCast< TouchEvent3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TouchEvent3D_obj::__boot()
{
	TOUCH_END= HX_CSTRING("touchEnd3d");
	TOUCH_BEGIN= HX_CSTRING("touchBegin3d");
	TOUCH_MOVE= HX_CSTRING("touchMove3d");
	TOUCH_OUT= HX_CSTRING("touchOut3d");
	TOUCH_OVER= HX_CSTRING("touchOver3d");
}

} // end namespace away3d
} // end namespace events
