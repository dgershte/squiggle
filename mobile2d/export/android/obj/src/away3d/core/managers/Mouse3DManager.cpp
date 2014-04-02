#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingType
#include <away3d/core/pick/PickingType.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
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
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void Mouse3DManager_obj::__construct()
{
HX_STACK_PUSH("Mouse3DManager::new","away3d/core/managers/Mouse3DManager.hx",57);
{
	HX_STACK_LINE(58)
	this->_updateDirty = true;
	HX_STACK_LINE(59)
	this->_nullVector = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(60)
	this->_mouseMoveEvent = ::flash::events::MouseEvent_obj::__new(::flash::events::MouseEvent_obj::MOUSE_MOVE,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(61)
	this->_mousePicker = ::away3d::core::pick::PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;
	HX_STACK_LINE(62)
	this->_childDepth = (int)0;
	HX_STACK_LINE(63)
	if (((::away3d::core::managers::Mouse3DManager_obj::_view3Ds == null()))){
		HX_STACK_LINE(64)
		::away3d::core::managers::Mouse3DManager_obj::_view3Ds = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(65)
		::away3d::core::managers::Mouse3DManager_obj::_view3DLookup = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	}
}
;
	return null();
}

Mouse3DManager_obj::~Mouse3DManager_obj() { }

Dynamic Mouse3DManager_obj::__CreateEmpty() { return  new Mouse3DManager_obj; }
hx::ObjectPtr< Mouse3DManager_obj > Mouse3DManager_obj::__new()
{  hx::ObjectPtr< Mouse3DManager_obj > result = new Mouse3DManager_obj();
	result->__construct();
	return result;}

Dynamic Mouse3DManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse3DManager_obj > result = new Mouse3DManager_obj();
	result->__construct();
	return result;}

::away3d::core::pick::IPicker Mouse3DManager_obj::set_mousePicker( ::away3d::core::pick::IPicker value){
	HX_STACK_PUSH("Mouse3DManager::set_mousePicker","away3d/core/managers/Mouse3DManager.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(353)
	this->_mousePicker = value;
	HX_STACK_LINE(354)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,set_mousePicker,return )

::away3d::core::pick::IPicker Mouse3DManager_obj::get_mousePicker( ){
	HX_STACK_PUSH("Mouse3DManager::get_mousePicker","away3d/core/managers/Mouse3DManager.hx",348);
	HX_STACK_THIS(this);
	HX_STACK_LINE(348)
	return this->_mousePicker;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,get_mousePicker,return )

bool Mouse3DManager_obj::set_forceMouseMove( bool value){
	HX_STACK_PUSH("Mouse3DManager::set_forceMouseMove","away3d/core/managers/Mouse3DManager.hx",343);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(344)
	this->_forceMouseMove = value;
	HX_STACK_LINE(345)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,set_forceMouseMove,return )

bool Mouse3DManager_obj::get_forceMouseMove( ){
	HX_STACK_PUSH("Mouse3DManager::get_forceMouseMove","away3d/core/managers/Mouse3DManager.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_LINE(339)
	return this->_forceMouseMove;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,get_forceMouseMove,return )

Void Mouse3DManager_obj::onMouseWheel( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseWheel","away3d/core/managers/Mouse3DManager.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(330)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(330)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseWheel,event,null());
		}
		else{
			HX_STACK_LINE(331)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(332)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseWheel,(void))

Void Mouse3DManager_obj::onMouseUp( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseUp","away3d/core/managers/Mouse3DManager.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(320)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(321)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseUp,event,null());
			HX_STACK_LINE(322)
			::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
		}
		else{
			HX_STACK_LINE(325)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(326)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseUp,(void))

Void Mouse3DManager_obj::onMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseDown","away3d/core/managers/Mouse3DManager.hx",306);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(307)
		this->_activeView = hx::TCast< away3d::containers::View3D >::cast(event->get_currentTarget());
		HX_STACK_LINE(308)
		this->updateCollider(this->_activeView);
		HX_STACK_LINE(310)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(311)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseDown,event,null());
			HX_STACK_LINE(312)
			::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
		}
		else{
			HX_STACK_LINE(315)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(316)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseDown,(void))

Void Mouse3DManager_obj::onDoubleClick( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onDoubleClick","away3d/core/managers/Mouse3DManager.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(301)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(301)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseDoubleClick,event,null());
		}
		else{
			HX_STACK_LINE(302)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(303)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onDoubleClick,(void))

Void Mouse3DManager_obj::onClick( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onClick","away3d/core/managers/Mouse3DManager.hx",291);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(292)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(292)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseClick,event,null());
		}
		else{
			HX_STACK_LINE(296)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(297)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onClick,(void))

Void Mouse3DManager_obj::onMouseOver( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseOver","away3d/core/managers/Mouse3DManager.hx",284);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(285)
		this->_activeView = hx::TCast< away3d::containers::View3D >::cast(event->get_currentTarget());
		HX_STACK_LINE(286)
		if (((bool((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null())) && bool((::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject != ::away3d::core::managers::Mouse3DManager_obj::_collidingObject))))){
			HX_STACK_LINE(286)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOver,event,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
		}
		else{
			HX_STACK_LINE(287)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(288)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseOver,(void))

Void Mouse3DManager_obj::onMouseOut( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseOut","away3d/core/managers/Mouse3DManager.hx",278);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(279)
		this->_activeView = null();
		HX_STACK_LINE(280)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(280)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOut,event,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
		}
		HX_STACK_LINE(281)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseOut,(void))

Void Mouse3DManager_obj::onMouseMove( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::onMouseMove","away3d/core/managers/Mouse3DManager.hx",272);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(273)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
			HX_STACK_LINE(273)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseMove,this->_mouseMoveEvent = event,null());
		}
		else{
			HX_STACK_LINE(274)
			this->reThrowEvent(event);
		}
		HX_STACK_LINE(275)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,onMouseMove,(void))

Void Mouse3DManager_obj::traverseDisplayObjects( ::flash::display::DisplayObjectContainer container){
{
		HX_STACK_PUSH("Mouse3DManager::traverseDisplayObjects","away3d/core/managers/Mouse3DManager.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(container,"container");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,traverseDisplayObjects,(void))

bool Mouse3DManager_obj::hasKey( ::away3d::containers::View3D view){
	HX_STACK_PUSH("Mouse3DManager::hasKey","away3d/core/managers/Mouse3DManager.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(view,"view");
	HX_STACK_LINE(234)
	Dynamic keys = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->keys();		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(235)
	for(::cpp::FastIterator_obj< ::away3d::containers::View3D > *__it = ::cpp::CreateFastIterator< ::away3d::containers::View3D >(keys);  __it->hasNext(); ){
		::away3d::containers::View3D v = __it->next();
		if (((v == view))){
			HX_STACK_LINE(236)
			return true;
		}
;
	}
	HX_STACK_LINE(240)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,hasKey,return )

Void Mouse3DManager_obj::reThrowEvent( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Mouse3DManager::reThrowEvent","away3d/core/managers/Mouse3DManager.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(223)
		if (((bool((this->_activeView == null())) || bool((bool((this->_activeView != null())) && bool(!(this->_activeView->get_shareContext()))))))){
			HX_STACK_LINE(223)
			return null();
		}
		HX_STACK_LINE(224)
		Dynamic keys = ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->keys();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(225)
		for(::cpp::FastIterator_obj< ::away3d::containers::View3D > *__it = ::cpp::CreateFastIterator< ::away3d::containers::View3D >(keys);  __it->hasNext(); ){
			::away3d::containers::View3D v = __it->next();
			if (((bool((v != this->_activeView)) && bool((::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get(v) < ::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get(this->_activeView)))))){
				HX_STACK_LINE(226)
				v->dispatchEvent(event);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,reThrowEvent,(void))

Void Mouse3DManager_obj::queueDispatch( ::away3d::events::MouseEvent3D event,::flash::events::MouseEvent sourceEvent,::away3d::core::pick::PickingCollisionVO collider){
{
		HX_STACK_PUSH("Mouse3DManager::queueDispatch","away3d/core/managers/Mouse3DManager.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(sourceEvent,"sourceEvent");
		HX_STACK_ARG(collider,"collider");
		HX_STACK_LINE(183)
		event->ctrlKey = sourceEvent->ctrlKey;
		HX_STACK_LINE(184)
		event->altKey = sourceEvent->altKey;
		HX_STACK_LINE(185)
		event->shiftKey = sourceEvent->shiftKey;
		HX_STACK_LINE(186)
		event->delta = sourceEvent->delta;
		HX_STACK_LINE(187)
		event->screenX = sourceEvent->localX;
		HX_STACK_LINE(188)
		event->screenY = sourceEvent->localY;
		HX_STACK_LINE(189)
		if (((collider == null()))){
			HX_STACK_LINE(190)
			collider = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
		}
		HX_STACK_LINE(192)
		if (((collider != null()))){
			HX_STACK_LINE(194)
			event->object = collider->entity;
			HX_STACK_LINE(195)
			event->renderable = collider->renderable;
			HX_STACK_LINE(197)
			event->uv = collider->uv;
			struct _Function_2_1{
				inline static ::flash::geom::Vector3D Block( ::away3d::core::pick::PickingCollisionVO &collider){
					HX_STACK_PUSH("*::closure","away3d/core/managers/Mouse3DManager.hx",199);
					{
						HX_STACK_LINE(199)
						::flash::geom::Vector3D _this = collider->localPosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(199)
						return ::flash::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
					return null();
				}
			};
			HX_STACK_LINE(199)
			event->localPosition = (  (((collider->localPosition != null()))) ? ::flash::geom::Vector3D(_Function_2_1::Block(collider)) : ::flash::geom::Vector3D(null()) );
			struct _Function_2_2{
				inline static ::flash::geom::Vector3D Block( ::away3d::core::pick::PickingCollisionVO &collider){
					HX_STACK_PUSH("*::closure","away3d/core/managers/Mouse3DManager.hx",201);
					{
						HX_STACK_LINE(201)
						::flash::geom::Vector3D _this = collider->localNormal;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(201)
						return ::flash::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
					return null();
				}
			};
			HX_STACK_LINE(201)
			event->localNormal = (  (((collider->localNormal != null()))) ? ::flash::geom::Vector3D(_Function_2_2::Block(collider)) : ::flash::geom::Vector3D(null()) );
			HX_STACK_LINE(203)
			event->index = collider->index;
			HX_STACK_LINE(205)
			event->subGeometryIndex = collider->subGeometryIndex;
		}
		else{
			HX_STACK_LINE(210)
			event->uv = null();
			HX_STACK_LINE(211)
			event->object = null();
			HX_STACK_LINE(212)
			event->localPosition = this->_nullVector;
			HX_STACK_LINE(213)
			event->localNormal = this->_nullVector;
			HX_STACK_LINE(214)
			event->index = (int)0;
			HX_STACK_LINE(215)
			event->subGeometryIndex = (int)0;
		}
		HX_STACK_LINE(219)
		::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->__Field(HX_CSTRING("push"),true)(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mouse3DManager_obj,queueDispatch,(void))

Void Mouse3DManager_obj::dispose( ){
{
		HX_STACK_PUSH("Mouse3DManager::dispose","away3d/core/managers/Mouse3DManager.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_LINE(173)
		this->_mousePicker->dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,dispose,(void))

Void Mouse3DManager_obj::disableMouseListeners( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Mouse3DManager::disableMouseListeners","away3d/core/managers/Mouse3DManager.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(163)
		view->removeEventListener(::flash::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null());
		HX_STACK_LINE(164)
		view->removeEventListener(::flash::events::MouseEvent_obj::DOUBLE_CLICK,this->onDoubleClick_dyn(),null());
		HX_STACK_LINE(165)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		HX_STACK_LINE(166)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null());
		HX_STACK_LINE(167)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		HX_STACK_LINE(168)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null());
		HX_STACK_LINE(169)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(170)
		view->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,disableMouseListeners,(void))

Void Mouse3DManager_obj::enableMouseListeners( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Mouse3DManager::enableMouseListeners","away3d/core/managers/Mouse3DManager.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(152)
		view->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
		HX_STACK_LINE(153)
		view->addEventListener(::flash::events::MouseEvent_obj::DOUBLE_CLICK,this->onDoubleClick_dyn(),null(),null(),null());
		HX_STACK_LINE(154)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(155)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(156)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(157)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
		HX_STACK_LINE(158)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(159)
		view->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,enableMouseListeners,(void))

Void Mouse3DManager_obj::addViewLayer( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Mouse3DManager::addViewLayer","away3d/core/managers/Mouse3DManager.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(142)
		::flash::display::Stage stg = view->get_stage();		HX_STACK_VAR(stg,"stg");
		HX_STACK_LINE(144)
		if (((view->get_stage3DProxy()->get_mouse3DManager() == null()))){
			HX_STACK_LINE(144)
			view->get_stage3DProxy()->set_mouse3DManager(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(145)
		if ((!(this->hasKey(view)))){
			HX_STACK_LINE(145)
			::away3d::core::managers::Mouse3DManager_obj::_view3Ds->__Internal->set(::__hxcpp_obj_id(view),(int)0);
		}
		HX_STACK_LINE(146)
		this->_childDepth = (int)0;
		HX_STACK_LINE(147)
		this->traverseDisplayObjects(stg);
		HX_STACK_LINE(148)
		::away3d::core::managers::Mouse3DManager_obj::_viewCount = this->_childDepth;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,addViewLayer,(void))

Void Mouse3DManager_obj::fireMouseEvents( ){
{
		HX_STACK_PUSH("Mouse3DManager::fireMouseEvents","away3d/core/managers/Mouse3DManager.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(101)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(102)
		::away3d::events::MouseEvent3D event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(103)
		::away3d::containers::ObjectContainer3D dispatcher;		HX_STACK_VAR(dispatcher,"dispatcher");
		HX_STACK_LINE(105)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects != null()))){
			HX_STACK_LINE(106)
			::away3d::core::managers::Mouse3DManager_obj::_collidingObject = null();
			HX_STACK_LINE(108)
			Float distance = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(distance,"distance");
			HX_STACK_LINE(109)
			::away3d::containers::View3D view;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(110)
			int v = (::away3d::core::managers::Mouse3DManager_obj::_viewCount - (int)1);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(111)
			while(((v >= (int)0))){
				HX_STACK_LINE(112)
				view = ::away3d::core::managers::Mouse3DManager_obj::_view3DLookup->__get(v).StaticCast< ::away3d::containers::View3D >();
				HX_STACK_LINE(113)
				if (((bool((::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->__get(v).StaticCast< ::away3d::core::pick::PickingCollisionVO >() != null())) && bool(((bool(view->get_layeredView()) || bool((::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->__get(v).StaticCast< ::away3d::core::pick::PickingCollisionVO >()->rayEntryDistance < distance)))))))){
					HX_STACK_LINE(114)
					distance = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->__get(v).StaticCast< ::away3d::core::pick::PickingCollisionVO >()->rayEntryDistance;
					HX_STACK_LINE(115)
					::away3d::core::managers::Mouse3DManager_obj::_collidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects->__get(v).StaticCast< ::away3d::core::pick::PickingCollisionVO >();
					HX_STACK_LINE(116)
					if ((view->get_layeredView())){
						HX_STACK_LINE(116)
						break;
					}
				}
				HX_STACK_LINE(118)
				(v)--;
			}
		}
		HX_STACK_LINE(121)
		if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != ::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject))){
			HX_STACK_LINE(122)
			if (((::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject != null()))){
				HX_STACK_LINE(122)
				this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOut,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject);
			}
			HX_STACK_LINE(123)
			if (((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))){
				HX_STACK_LINE(123)
				this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseOver,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
			}
		}
		HX_STACK_LINE(125)
		if (((bool(this->_forceMouseMove) && bool((::away3d::core::managers::Mouse3DManager_obj::_collidingObject != null()))))){
			HX_STACK_LINE(125)
			this->queueDispatch(::away3d::core::managers::Mouse3DManager_obj::_mouseMove,this->_mouseMoveEvent,::away3d::core::managers::Mouse3DManager_obj::_collidingObject);
		}
		HX_STACK_LINE(126)
		len = ::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(127)
		i = (int)0;
		HX_STACK_LINE(128)
		while(((i < len))){
			HX_STACK_LINE(130)
			event = ::away3d::core::managers::Mouse3DManager_obj::_queuedEvents->__get(i).StaticCast< ::away3d::events::MouseEvent3D >();
			HX_STACK_LINE(131)
			dispatcher = event->object;
			HX_STACK_LINE(132)
			while(((bool((dispatcher != null())) && bool(!(dispatcher->_ancestorsAllowMouseEnabled))))){
				HX_STACK_LINE(132)
				dispatcher = dispatcher->get_parent();
			}
			HX_STACK_LINE(133)
			if (((dispatcher != null()))){
				HX_STACK_LINE(133)
				dispatcher->dispatchEvent(event);
			}
			HX_STACK_LINE(134)
			++(i);
		}
		HX_STACK_LINE(137)
		this->_updateDirty = false;
		HX_STACK_LINE(138)
		::away3d::core::managers::Mouse3DManager_obj::_previousCollidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingObject;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse3DManager_obj,fireMouseEvents,(void))

Void Mouse3DManager_obj::updateCollider( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Mouse3DManager::updateCollider","away3d/core/managers/Mouse3DManager.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(74)
		::away3d::core::managers::Mouse3DManager_obj::_previousCollidingView = ::away3d::core::managers::Mouse3DManager_obj::_collidingView;
		HX_STACK_LINE(75)
		if (((view != null()))){
			HX_STACK_LINE(77)
			if ((view->get_stage3DProxy()->get_bufferClear())){
				HX_STACK_LINE(77)
				::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects = ::flash::_Vector::Vector_Impl__obj::_new(::away3d::core::managers::Mouse3DManager_obj::_viewCount,null());
			}
			HX_STACK_LINE(78)
			if ((!(view->get_shareContext()))){
				HX_STACK_LINE(78)
				if (((bool((view == this->_activeView)) && bool(((bool(this->_forceMouseMove) || bool(this->_updateDirty))))))){
					HX_STACK_LINE(79)
					::away3d::core::managers::Mouse3DManager_obj::_collidingObject = this->_mousePicker->getViewCollision(view->get_mouseX(),view->get_mouseY(),view);
				}
			}
			else{
				HX_STACK_LINE(85)
				if ((view->get_parent()->getBounds(null())->contains((view->get_mouseX() + view->get_x()),(view->get_mouseY() + view->get_y())))){
					HX_STACK_LINE(90)
					if (((::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects == null()))){
						HX_STACK_LINE(90)
						::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects = ::flash::_Vector::Vector_Impl__obj::_new(::away3d::core::managers::Mouse3DManager_obj::_viewCount,null());
					}
					HX_STACK_LINE(91)
					::away3d::core::managers::Mouse3DManager_obj::_collidingObject = ::away3d::core::managers::Mouse3DManager_obj::_collidingViewObjects[::away3d::core::managers::Mouse3DManager_obj::_view3Ds->get(view)] = this->_mousePicker->getViewCollision(view->get_mouseX(),view->get_mouseY(),view);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse3DManager_obj,updateCollider,(void))

::haxe::ds::ObjectMap Mouse3DManager_obj::_view3Ds;

Array< ::Dynamic > Mouse3DManager_obj::_view3DLookup;

int Mouse3DManager_obj::_viewCount;

::away3d::core::pick::PickingCollisionVO Mouse3DManager_obj::_collidingObject;

::away3d::core::pick::PickingCollisionVO Mouse3DManager_obj::_previousCollidingObject;

Array< ::Dynamic > Mouse3DManager_obj::_collidingViewObjects;

Array< ::Dynamic > Mouse3DManager_obj::_queuedEvents;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseUp;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseClick;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseOut;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseDown;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseMove;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseOver;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseWheel;

::away3d::events::MouseEvent3D Mouse3DManager_obj::_mouseDoubleClick;

int Mouse3DManager_obj::_previousCollidingView;

int Mouse3DManager_obj::_collidingView;


Mouse3DManager_obj::Mouse3DManager_obj()
{
}

void Mouse3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse3DManager);
	HX_MARK_MEMBER_NAME(_collidingUpObject,"_collidingUpObject");
	HX_MARK_MEMBER_NAME(_collidingDownObject,"_collidingDownObject");
	HX_MARK_MEMBER_NAME(_childDepth,"_childDepth");
	HX_MARK_MEMBER_NAME(_mousePicker,"_mousePicker");
	HX_MARK_MEMBER_NAME(_forceMouseMove,"_forceMouseMove");
	HX_MARK_MEMBER_NAME(_mouseMoveEvent,"_mouseMoveEvent");
	HX_MARK_MEMBER_NAME(_nullVector,"_nullVector");
	HX_MARK_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_MARK_MEMBER_NAME(_activeView,"_activeView");
	HX_MARK_END_CLASS();
}

void Mouse3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_collidingUpObject,"_collidingUpObject");
	HX_VISIT_MEMBER_NAME(_collidingDownObject,"_collidingDownObject");
	HX_VISIT_MEMBER_NAME(_childDepth,"_childDepth");
	HX_VISIT_MEMBER_NAME(_mousePicker,"_mousePicker");
	HX_VISIT_MEMBER_NAME(_forceMouseMove,"_forceMouseMove");
	HX_VISIT_MEMBER_NAME(_mouseMoveEvent,"_mouseMoveEvent");
	HX_VISIT_MEMBER_NAME(_nullVector,"_nullVector");
	HX_VISIT_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_VISIT_MEMBER_NAME(_activeView,"_activeView");
}

Dynamic Mouse3DManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hasKey") ) { return hasKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_view3Ds") ) { return _view3Ds; }
		if (HX_FIELD_EQ(inName,"_mouseUp") ) { return _mouseUp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mouseOut") ) { return _mouseOut; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_viewCount") ) { return _viewCount; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { return _mouseDown; }
		if (HX_FIELD_EQ(inName,"_mouseMove") ) { return _mouseMove; }
		if (HX_FIELD_EQ(inName,"_mouseOver") ) { return _mouseOver; }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClick") ) { return _mouseClick; }
		if (HX_FIELD_EQ(inName,"_mouseWheel") ) { return _mouseWheel; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_childDepth") ) { return _childDepth; }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { return _nullVector; }
		if (HX_FIELD_EQ(inName,"_activeView") ) { return _activeView; }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { return get_mousePicker(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"reThrowEvent") ) { return reThrowEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addViewLayer") ) { return addViewLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousePicker") ) { return _mousePicker; }
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { return _updateDirty; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_view3DLookup") ) { return _view3DLookup; }
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { return _queuedEvents; }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { return onDoubleClick_dyn(); }
		if (HX_FIELD_EQ(inName,"queueDispatch") ) { return queueDispatch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_collidingView") ) { return _collidingView; }
		if (HX_FIELD_EQ(inName,"updateCollider") ) { return updateCollider_dyn(); }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { return get_forceMouseMove(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_mousePicker") ) { return set_mousePicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mousePicker") ) { return get_mousePicker_dyn(); }
		if (HX_FIELD_EQ(inName,"fireMouseEvents") ) { return fireMouseEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"_forceMouseMove") ) { return _forceMouseMove; }
		if (HX_FIELD_EQ(inName,"_mouseMoveEvent") ) { return _mouseMoveEvent; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { return _collidingObject; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDoubleClick") ) { return _mouseDoubleClick; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_forceMouseMove") ) { return set_forceMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"get_forceMouseMove") ) { return get_forceMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_collidingUpObject") ) { return _collidingUpObject; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"enableMouseListeners") ) { return enableMouseListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"_collidingDownObject") ) { return _collidingDownObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_collidingViewObjects") ) { return _collidingViewObjects; }
		if (HX_FIELD_EQ(inName,"disableMouseListeners") ) { return disableMouseListeners_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_previousCollidingView") ) { return _previousCollidingView; }
		if (HX_FIELD_EQ(inName,"traverseDisplayObjects") ) { return traverseDisplayObjects_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { return _previousCollidingObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse3DManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_view3Ds") ) { _view3Ds=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseUp") ) { _mouseUp=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mouseOut") ) { _mouseOut=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_viewCount") ) { _viewCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseMove") ) { _mouseMove=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseOver") ) { _mouseOver=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClick") ) { _mouseClick=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseWheel") ) { _mouseWheel=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_childDepth") ) { _childDepth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { _nullVector=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeView") ) { _activeView=inValue.Cast< ::away3d::containers::View3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { return set_mousePicker(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_mousePicker") ) { _mousePicker=inValue.Cast< ::away3d::core::pick::IPicker >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { _updateDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_view3DLookup") ) { _view3DLookup=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { _queuedEvents=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_collidingView") ) { _collidingView=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { return set_forceMouseMove(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_forceMouseMove") ) { _forceMouseMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseMoveEvent") ) { _mouseMoveEvent=inValue.Cast< ::flash::events::MouseEvent >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { _collidingObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mouseDoubleClick") ) { _mouseDoubleClick=inValue.Cast< ::away3d::events::MouseEvent3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_collidingUpObject") ) { _collidingUpObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_collidingDownObject") ) { _collidingDownObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_collidingViewObjects") ) { _collidingViewObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_previousCollidingView") ) { _previousCollidingView=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { _previousCollidingObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mouse3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_collidingUpObject"));
	outFields->push(HX_CSTRING("_collidingDownObject"));
	outFields->push(HX_CSTRING("_childDepth"));
	outFields->push(HX_CSTRING("_mousePicker"));
	outFields->push(HX_CSTRING("_forceMouseMove"));
	outFields->push(HX_CSTRING("_mouseMoveEvent"));
	outFields->push(HX_CSTRING("_nullVector"));
	outFields->push(HX_CSTRING("_updateDirty"));
	outFields->push(HX_CSTRING("_activeView"));
	outFields->push(HX_CSTRING("mousePicker"));
	outFields->push(HX_CSTRING("forceMouseMove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_view3Ds"),
	HX_CSTRING("_view3DLookup"),
	HX_CSTRING("_viewCount"),
	HX_CSTRING("_collidingObject"),
	HX_CSTRING("_previousCollidingObject"),
	HX_CSTRING("_collidingViewObjects"),
	HX_CSTRING("_queuedEvents"),
	HX_CSTRING("_mouseUp"),
	HX_CSTRING("_mouseClick"),
	HX_CSTRING("_mouseOut"),
	HX_CSTRING("_mouseDown"),
	HX_CSTRING("_mouseMove"),
	HX_CSTRING("_mouseOver"),
	HX_CSTRING("_mouseWheel"),
	HX_CSTRING("_mouseDoubleClick"),
	HX_CSTRING("_previousCollidingView"),
	HX_CSTRING("_collidingView"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_mousePicker"),
	HX_CSTRING("get_mousePicker"),
	HX_CSTRING("set_forceMouseMove"),
	HX_CSTRING("get_forceMouseMove"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onDoubleClick"),
	HX_CSTRING("onClick"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("traverseDisplayObjects"),
	HX_CSTRING("hasKey"),
	HX_CSTRING("reThrowEvent"),
	HX_CSTRING("queueDispatch"),
	HX_CSTRING("dispose"),
	HX_CSTRING("disableMouseListeners"),
	HX_CSTRING("enableMouseListeners"),
	HX_CSTRING("addViewLayer"),
	HX_CSTRING("fireMouseEvents"),
	HX_CSTRING("updateCollider"),
	HX_CSTRING("_collidingUpObject"),
	HX_CSTRING("_collidingDownObject"),
	HX_CSTRING("_childDepth"),
	HX_CSTRING("_mousePicker"),
	HX_CSTRING("_forceMouseMove"),
	HX_CSTRING("_mouseMoveEvent"),
	HX_CSTRING("_nullVector"),
	HX_CSTRING("_updateDirty"),
	HX_CSTRING("_activeView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_view3Ds,"_view3Ds");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_view3DLookup,"_view3DLookup");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_viewCount,"_viewCount");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingObject,"_collidingObject");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingObject,"_previousCollidingObject");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingViewObjects,"_collidingViewObjects");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_queuedEvents,"_queuedEvents");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseUp,"_mouseUp");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseClick,"_mouseClick");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseOut,"_mouseOut");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseDown,"_mouseDown");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseMove,"_mouseMove");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseOver,"_mouseOver");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseWheel,"_mouseWheel");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_mouseDoubleClick,"_mouseDoubleClick");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingView,"_previousCollidingView");
	HX_MARK_MEMBER_NAME(Mouse3DManager_obj::_collidingView,"_collidingView");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_view3Ds,"_view3Ds");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_view3DLookup,"_view3DLookup");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_viewCount,"_viewCount");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingObject,"_collidingObject");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingObject,"_previousCollidingObject");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingViewObjects,"_collidingViewObjects");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_queuedEvents,"_queuedEvents");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseUp,"_mouseUp");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseClick,"_mouseClick");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseOut,"_mouseOut");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseDown,"_mouseDown");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseMove,"_mouseMove");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseOver,"_mouseOver");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseWheel,"_mouseWheel");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_mouseDoubleClick,"_mouseDoubleClick");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_previousCollidingView,"_previousCollidingView");
	HX_VISIT_MEMBER_NAME(Mouse3DManager_obj::_collidingView,"_collidingView");
};

Class Mouse3DManager_obj::__mClass;

void Mouse3DManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.Mouse3DManager"), hx::TCanCast< Mouse3DManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mouse3DManager_obj::__boot()
{
	_viewCount= (int)0;
	_queuedEvents= ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	_mouseUp= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_UP);
	_mouseClick= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::CLICK);
	_mouseOut= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_OUT);
	_mouseDown= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_DOWN);
	_mouseMove= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_MOVE);
	_mouseOver= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_OVER);
	_mouseWheel= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::MOUSE_WHEEL);
	_mouseDoubleClick= ::away3d::events::MouseEvent3D_obj::__new(::away3d::events::MouseEvent3D_obj::DOUBLE_CLICK);
	_previousCollidingView= (int)-1;
	_collidingView= (int)-1;
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
