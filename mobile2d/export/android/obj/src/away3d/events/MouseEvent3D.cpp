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
#ifndef INCLUDED_away3d_events_MouseEvent3D
#include <away3d/events/MouseEvent3D.h>
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

Void MouseEvent3D_obj::__construct(::String type)
{
HX_STACK_PUSH("MouseEvent3D::new","away3d/events/MouseEvent3D.hx",128);
{
	HX_STACK_LINE(129)
	this->_allowedToPropagate = true;
	HX_STACK_LINE(130)
	super::__construct(type,true,true);
}
;
	return null();
}

MouseEvent3D_obj::~MouseEvent3D_obj() { }

Dynamic MouseEvent3D_obj::__CreateEmpty() { return  new MouseEvent3D_obj; }
hx::ObjectPtr< MouseEvent3D_obj > MouseEvent3D_obj::__new(::String type)
{  hx::ObjectPtr< MouseEvent3D_obj > result = new MouseEvent3D_obj();
	result->__construct(type);
	return result;}

Dynamic MouseEvent3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent3D_obj > result = new MouseEvent3D_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::geom::Vector3D MouseEvent3D_obj::get_sceneNormal( ){
	HX_STACK_PUSH("MouseEvent3D::get_sceneNormal","away3d/events/MouseEvent3D.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	if ((::Std_obj::is(this->object,hx::ClassOf< ::away3d::containers::ObjectContainer3D >()))){
		HX_STACK_LINE(207)
		::flash::geom::Vector3D sceneNormal = (hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->object))->get_sceneTransform()->deltaTransformVector(this->localNormal);		HX_STACK_VAR(sceneNormal,"sceneNormal");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			Float l = ::Math_obj::sqrt((((sceneNormal->x * sceneNormal->x) + (sceneNormal->y * sceneNormal->y)) + (sceneNormal->z * sceneNormal->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(208)
			if (((l != (int)0))){
				HX_STACK_LINE(208)
				hx::DivEq(sceneNormal->x,l);
				HX_STACK_LINE(208)
				hx::DivEq(sceneNormal->y,l);
				HX_STACK_LINE(208)
				hx::DivEq(sceneNormal->z,l);
			}
			HX_STACK_LINE(208)
			l;
		}
		HX_STACK_LINE(209)
		return sceneNormal;
	}
	else{
		HX_STACK_LINE(212)
		return this->localNormal;
	}
	HX_STACK_LINE(205)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent3D_obj,get_sceneNormal,return )

::flash::geom::Vector3D MouseEvent3D_obj::get_scenePosition( ){
	HX_STACK_PUSH("MouseEvent3D::get_scenePosition","away3d/events/MouseEvent3D.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	if ((::Std_obj::is(this->object,hx::ClassOf< ::away3d::containers::ObjectContainer3D >()))){
		HX_STACK_LINE(197)
		return (hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->object))->get_sceneTransform()->transformVector(this->localPosition);
	}
	else{
		HX_STACK_LINE(198)
		return this->localPosition;
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent3D_obj,get_scenePosition,return )

::flash::events::Event MouseEvent3D_obj::clone( ){
	HX_STACK_PUSH("MouseEvent3D::clone","away3d/events/MouseEvent3D.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	::away3d::events::MouseEvent3D result = ::away3d::events::MouseEvent3D_obj::__new(this->get_type());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(173)
	result->screenX = this->screenX;
	HX_STACK_LINE(174)
	result->screenY = this->screenY;
	HX_STACK_LINE(175)
	result->view = this->view;
	HX_STACK_LINE(176)
	result->object = this->object;
	HX_STACK_LINE(177)
	result->renderable = this->renderable;
	HX_STACK_LINE(178)
	result->material = this->material;
	HX_STACK_LINE(179)
	result->uv = this->uv;
	HX_STACK_LINE(180)
	result->localPosition = this->localPosition;
	HX_STACK_LINE(181)
	result->localNormal = this->localNormal;
	HX_STACK_LINE(182)
	result->index = this->index;
	HX_STACK_LINE(183)
	result->subGeometryIndex = this->subGeometryIndex;
	HX_STACK_LINE(184)
	result->delta = this->delta;
	HX_STACK_LINE(185)
	result->ctrlKey = this->ctrlKey;
	HX_STACK_LINE(186)
	result->shiftKey = this->shiftKey;
	HX_STACK_LINE(187)
	result->_parentEvent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(188)
	result->_allowedToPropagate = this->_allowedToPropagate;
	HX_STACK_LINE(189)
	return result;
}


Void MouseEvent3D_obj::stopImmediatePropagation( ){
{
		HX_STACK_PUSH("MouseEvent3D::stopImmediatePropagation","away3d/events/MouseEvent3D.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		this->super::stopImmediatePropagation();
		HX_STACK_LINE(160)
		this->_allowedToPropagate = false;
		HX_STACK_LINE(161)
		if (((this->_parentEvent != null()))){
			HX_STACK_LINE(161)
			this->_parentEvent->stopImmediatePropagation();
		}
	}
return null();
}


Void MouseEvent3D_obj::stopPropagation( ){
{
		HX_STACK_PUSH("MouseEvent3D::stopPropagation","away3d/events/MouseEvent3D.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(149)
		this->super::stopPropagation();
		HX_STACK_LINE(150)
		this->_allowedToPropagate = false;
		HX_STACK_LINE(151)
		if (((this->_parentEvent != null()))){
			HX_STACK_LINE(151)
			this->_parentEvent->stopPropagation();
		}
	}
return null();
}


::String MouseEvent3D_obj::MOUSE_OVER;

::String MouseEvent3D_obj::MOUSE_OUT;

::String MouseEvent3D_obj::MOUSE_UP;

::String MouseEvent3D_obj::MOUSE_DOWN;

::String MouseEvent3D_obj::MOUSE_MOVE;

::String MouseEvent3D_obj::CLICK;

::String MouseEvent3D_obj::DOUBLE_CLICK;

::String MouseEvent3D_obj::MOUSE_WHEEL;


MouseEvent3D_obj::MouseEvent3D_obj()
{
}

void MouseEvent3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent3D);
	HX_MARK_MEMBER_NAME(delta,"delta");
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

void MouseEvent3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delta,"delta");
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

Dynamic MouseEvent3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { return CLICK; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
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
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { return MOUSE_UP; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { return MOUSE_OUT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { return MOUSE_OVER; }
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { return MOUSE_DOWN; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { return MOUSE_MOVE; }
		if (HX_FIELD_EQ(inName,"renderable") ) { return renderable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { return MOUSE_WHEEL; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { return localNormal; }
		if (HX_FIELD_EQ(inName,"sceneNormal") ) { return get_sceneNormal(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { return DOUBLE_CLICK; }
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

Dynamic MouseEvent3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::away3d::containers::View3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { MOUSE_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { MOUSE_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { MOUSE_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { MOUSE_WHEEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localNormal") ) { localNormal=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { DOUBLE_CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { _parentEvent=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
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

void MouseEvent3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("delta"));
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
	HX_CSTRING("MOUSE_OVER"),
	HX_CSTRING("MOUSE_OUT"),
	HX_CSTRING("MOUSE_UP"),
	HX_CSTRING("MOUSE_DOWN"),
	HX_CSTRING("MOUSE_MOVE"),
	HX_CSTRING("CLICK"),
	HX_CSTRING("DOUBLE_CLICK"),
	HX_CSTRING("MOUSE_WHEEL"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_sceneNormal"),
	HX_CSTRING("get_scenePosition"),
	HX_CSTRING("clone"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("stopPropagation"),
	HX_CSTRING("delta"),
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
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

Class MouseEvent3D_obj::__mClass;

void MouseEvent3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.MouseEvent3D"), hx::TCanCast< MouseEvent3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseEvent3D_obj::__boot()
{
	MOUSE_OVER= HX_CSTRING("mouseOver3d");
	MOUSE_OUT= HX_CSTRING("mouseOut3d");
	MOUSE_UP= HX_CSTRING("mouseUp3d");
	MOUSE_DOWN= HX_CSTRING("mouseDown3d");
	MOUSE_MOVE= HX_CSTRING("mouseMove3d");
	CLICK= HX_CSTRING("click3d");
	DOUBLE_CLICK= HX_CSTRING("doubleClick3d");
	MOUSE_WHEEL= HX_CSTRING("mouseWheel3d");
}

} // end namespace away3d
} // end namespace events
