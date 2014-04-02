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
#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#include <away3d/core/managers/Touch3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_TouchPoint
#include <away3d/core/managers/TouchPoint.h>
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
#ifndef INCLUDED_away3d_events_TouchEvent3D
#include <away3d/events/TouchEvent3D.h>
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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void Touch3DManager_obj::__construct()
{
HX_STACK_PUSH("Touch3DManager::new","away3d/core/managers/Touch3DManager.hx",36);
{
	HX_STACK_LINE(37)
	this->_updateDirty = true;
	HX_STACK_LINE(38)
	this->_nullVector = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(39)
	this->_touchMoveEvent = ::flash::events::TouchEvent_obj::__new(::flash::events::TouchEvent_obj::TOUCH_MOVE,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(40)
	this->_touchPicker = ::away3d::core::pick::PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;
	HX_STACK_LINE(42)
	this->_touchPoints = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(43)
	this->_touchPointFromId = ::haxe::ds::IntMap_obj::__new();
}
;
	return null();
}

Touch3DManager_obj::~Touch3DManager_obj() { }

Dynamic Touch3DManager_obj::__CreateEmpty() { return  new Touch3DManager_obj; }
hx::ObjectPtr< Touch3DManager_obj > Touch3DManager_obj::__new()
{  hx::ObjectPtr< Touch3DManager_obj > result = new Touch3DManager_obj();
	result->__construct();
	return result;}

Dynamic Touch3DManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch3DManager_obj > result = new Touch3DManager_obj();
	result->__construct();
	return result;}

::away3d::containers::View3D Touch3DManager_obj::set_view( ::away3d::containers::View3D value){
	HX_STACK_PUSH("Touch3DManager::set_view","away3d/core/managers/Touch3DManager.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(250)
	this->_view = value;
	HX_STACK_LINE(251)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_view,return )

::away3d::core::pick::IPicker Touch3DManager_obj::set_touchPicker( ::away3d::core::pick::IPicker value){
	HX_STACK_PUSH("Touch3DManager::set_touchPicker","away3d/core/managers/Touch3DManager.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(245)
	this->_touchPicker = value;
	HX_STACK_LINE(246)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_touchPicker,return )

::away3d::core::pick::IPicker Touch3DManager_obj::get_touchPicker( ){
	HX_STACK_PUSH("Touch3DManager::get_touchPicker","away3d/core/managers/Touch3DManager.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(240)
	return this->_touchPicker;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,get_touchPicker,return )

bool Touch3DManager_obj::set_forceTouchMove( bool value){
	HX_STACK_PUSH("Touch3DManager::set_forceTouchMove","away3d/core/managers/Touch3DManager.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(236)
	this->_forceTouchMove = value;
	HX_STACK_LINE(237)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_forceTouchMove,return )

bool Touch3DManager_obj::get_forceTouchMove( ){
	HX_STACK_PUSH("Touch3DManager::get_forceTouchMove","away3d/core/managers/Touch3DManager.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	return this->_forceTouchMove;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,get_forceTouchMove,return )

Void Touch3DManager_obj::onTouchEnd( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("Touch3DManager::onTouchEnd","away3d/core/managers/Touch3DManager.hx",211);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(213)
		::away3d::core::managers::TouchPoint touch = this->_touchPointFromId->get(event->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(215)
		this->_collidingObject = ::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id);
		HX_STACK_LINE(216)
		if (((this->_collidingObject != null()))){
			HX_STACK_LINE(216)
			this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_END,event,this->_collidingObject,touch);
		}
		HX_STACK_LINE(220)
		this->_touchPointFromId->remove(touch->id);
		HX_STACK_LINE(221)
		(this->_numTouchPoints)--;
		HX_STACK_LINE(222)
		::flash::_Vector::Vector_Impl__obj::splice(this->_touchPoints,::flash::_Vector::Vector_Impl__obj::indexOf(this->_touchPoints,touch,null()),(int)1);
		HX_STACK_LINE(224)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchEnd,(void))

Void Touch3DManager_obj::onTouchMove( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("Touch3DManager::onTouchMove","away3d/core/managers/Touch3DManager.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(199)
		::away3d::core::managers::TouchPoint touch = this->_touchPointFromId->get(event->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(200)
		touch->x = event->stageX;
		HX_STACK_LINE(201)
		touch->y = event->stageY;
		HX_STACK_LINE(203)
		this->_collidingObject = ::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id);
		HX_STACK_LINE(204)
		if (((this->_collidingObject != null()))){
			HX_STACK_LINE(204)
			this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_MOVE,this->_touchMoveEvent = event,this->_collidingObject,touch);
		}
		HX_STACK_LINE(208)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchMove,(void))

Void Touch3DManager_obj::onTouchBegin( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("Touch3DManager::onTouchBegin","away3d/core/managers/Touch3DManager.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(179)
		::away3d::core::managers::TouchPoint touch = ::away3d::core::managers::TouchPoint_obj::__new();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(180)
		touch->id = event->touchPointID;
		HX_STACK_LINE(181)
		touch->x = event->stageX;
		HX_STACK_LINE(182)
		touch->y = event->stageY;
		HX_STACK_LINE(183)
		(this->_numTouchPoints)++;
		HX_STACK_LINE(184)
		this->_touchPoints->__Field(HX_CSTRING("push"),true)(touch);
		HX_STACK_LINE(185)
		this->_touchPointFromId->set(touch->id,touch);
		HX_STACK_LINE(187)
		this->updateCollider();
		HX_STACK_LINE(189)
		this->_collidingObject = ::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id);
		HX_STACK_LINE(190)
		if (((this->_collidingObject != null()))){
			HX_STACK_LINE(190)
			this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_BEGIN,event,this->_collidingObject,touch);
		}
		HX_STACK_LINE(194)
		this->_updateDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchBegin,(void))

Void Touch3DManager_obj::queueDispatch( ::String emitType,::flash::events::TouchEvent sourceEvent,::away3d::core::pick::PickingCollisionVO collider,::away3d::core::managers::TouchPoint touch){
{
		HX_STACK_PUSH("Touch3DManager::queueDispatch","away3d/core/managers/Touch3DManager.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_ARG(emitType,"emitType");
		HX_STACK_ARG(sourceEvent,"sourceEvent");
		HX_STACK_ARG(collider,"collider");
		HX_STACK_ARG(touch,"touch");
		HX_STACK_LINE(133)
		::away3d::events::TouchEvent3D event = ::away3d::events::TouchEvent3D_obj::__new(emitType);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(135)
		event->ctrlKey = sourceEvent->ctrlKey;
		HX_STACK_LINE(136)
		event->altKey = sourceEvent->altKey;
		HX_STACK_LINE(137)
		event->shiftKey = sourceEvent->shiftKey;
		HX_STACK_LINE(138)
		event->screenX = touch->x;
		HX_STACK_LINE(139)
		event->screenY = touch->y;
		HX_STACK_LINE(140)
		event->touchPointID = touch->id;
		HX_STACK_LINE(142)
		if (((collider != null()))){
			HX_STACK_LINE(144)
			event->object = collider->entity;
			HX_STACK_LINE(145)
			event->renderable = collider->renderable;
			HX_STACK_LINE(147)
			event->uv = collider->uv;
			struct _Function_2_1{
				inline static ::flash::geom::Vector3D Block( ::away3d::core::pick::PickingCollisionVO &collider){
					HX_STACK_PUSH("*::closure","away3d/core/managers/Touch3DManager.hx",149);
					{
						HX_STACK_LINE(149)
						::flash::geom::Vector3D _this = collider->localPosition;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(149)
						return ::flash::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
					return null();
				}
			};
			HX_STACK_LINE(149)
			event->localPosition = (  (((collider->localPosition != null()))) ? ::flash::geom::Vector3D(_Function_2_1::Block(collider)) : ::flash::geom::Vector3D(null()) );
			struct _Function_2_2{
				inline static ::flash::geom::Vector3D Block( ::away3d::core::pick::PickingCollisionVO &collider){
					HX_STACK_PUSH("*::closure","away3d/core/managers/Touch3DManager.hx",151);
					{
						HX_STACK_LINE(151)
						::flash::geom::Vector3D _this = collider->localNormal;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(151)
						return ::flash::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
					}
					return null();
				}
			};
			HX_STACK_LINE(151)
			event->localNormal = (  (((collider->localNormal != null()))) ? ::flash::geom::Vector3D(_Function_2_2::Block(collider)) : ::flash::geom::Vector3D(null()) );
			HX_STACK_LINE(153)
			event->index = collider->index;
			HX_STACK_LINE(155)
			event->subGeometryIndex = collider->subGeometryIndex;
		}
		else{
			HX_STACK_LINE(160)
			event->uv = null();
			HX_STACK_LINE(161)
			event->object = null();
			HX_STACK_LINE(162)
			event->localPosition = this->_nullVector;
			HX_STACK_LINE(163)
			event->localNormal = this->_nullVector;
			HX_STACK_LINE(164)
			event->index = (int)0;
			HX_STACK_LINE(165)
			event->subGeometryIndex = (int)0;
		}
		HX_STACK_LINE(169)
		::away3d::core::managers::Touch3DManager_obj::_queuedEvents->__Field(HX_CSTRING("push"),true)(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Touch3DManager_obj,queueDispatch,(void))

Void Touch3DManager_obj::dispose( ){
{
		HX_STACK_PUSH("Touch3DManager::dispose","away3d/core/managers/Touch3DManager.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->_touchPicker->dispose();
		HX_STACK_LINE(122)
		this->_touchPoints = null();
		HX_STACK_LINE(123)
		this->_touchPointFromId = null();
		HX_STACK_LINE(124)
		::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId = null();
		HX_STACK_LINE(125)
		::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,dispose,(void))

Void Touch3DManager_obj::disableTouchListeners( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Touch3DManager::disableTouchListeners","away3d/core/managers/Touch3DManager.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(115)
		view->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null());
		HX_STACK_LINE(116)
		view->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null());
		HX_STACK_LINE(117)
		view->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,disableTouchListeners,(void))

Void Touch3DManager_obj::enableTouchListeners( ::away3d::containers::View3D view){
{
		HX_STACK_PUSH("Touch3DManager::enableTouchListeners","away3d/core/managers/Touch3DManager.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(view,"view");
		HX_STACK_LINE(109)
		view->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null(),null(),null());
		HX_STACK_LINE(110)
		view->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null(),null(),null());
		HX_STACK_LINE(111)
		view->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,enableTouchListeners,(void))

Void Touch3DManager_obj::fireTouchEvents( ){
{
		HX_STACK_PUSH("Touch3DManager::fireTouchEvents","away3d/core/managers/Touch3DManager.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(63)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(64)
		::away3d::events::TouchEvent3D event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(65)
		::away3d::containers::ObjectContainer3D dispatcher;		HX_STACK_VAR(dispatcher,"dispatcher");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_numTouchPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while(((_g1 < _g))){
				HX_STACK_LINE(67)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(68)
				this->_touchPoint = this->_touchPoints->__get(i1).StaticCast< ::away3d::core::managers::TouchPoint >();
				HX_STACK_LINE(70)
				this->_collidingObject = ::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(this->_touchPoint->id);
				HX_STACK_LINE(71)
				this->_previousCollidingObject = ::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId->get(this->_touchPoint->id);
				HX_STACK_LINE(72)
				if (((this->_collidingObject != this->_previousCollidingObject))){
					HX_STACK_LINE(73)
					if (((this->_previousCollidingObject != null()))){
						HX_STACK_LINE(74)
						this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_OUT,this->_touchMoveEvent,this->_previousCollidingObject,this->_touchPoint);
					}
					HX_STACK_LINE(75)
					if (((this->_collidingObject != null()))){
						HX_STACK_LINE(76)
						this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_OVER,this->_touchMoveEvent,this->_collidingObject,this->_touchPoint);
					}
				}
				HX_STACK_LINE(79)
				if (((bool(this->_forceTouchMove) && bool((this->_collidingObject != null()))))){
					HX_STACK_LINE(79)
					this->queueDispatch(::away3d::events::TouchEvent3D_obj::TOUCH_MOVE,this->_touchMoveEvent,this->_collidingObject,this->_touchPoint);
				}
			}
		}
		HX_STACK_LINE(85)
		len = ::away3d::core::managers::Touch3DManager_obj::_queuedEvents->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while(((_g < len))){
				HX_STACK_LINE(86)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(89)
				event = ::away3d::core::managers::Touch3DManager_obj::_queuedEvents->__get(i1).StaticCast< ::away3d::events::TouchEvent3D >();
				HX_STACK_LINE(90)
				dispatcher = event->object;
				HX_STACK_LINE(92)
				while(((bool((dispatcher != null())) && bool(!(dispatcher->_ancestorsAllowMouseEnabled))))){
					HX_STACK_LINE(93)
					dispatcher = dispatcher->get_parent();
				}
				HX_STACK_LINE(95)
				if (((dispatcher != null()))){
					HX_STACK_LINE(96)
					dispatcher->dispatchEvent(event);
				}
			}
		}
		HX_STACK_LINE(100)
		this->_updateDirty = false;
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_numTouchPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while(((_g1 < _g))){
				HX_STACK_LINE(102)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(103)
				this->_touchPoint = this->_touchPoints->__get(i1).StaticCast< ::away3d::core::managers::TouchPoint >();
				HX_STACK_LINE(104)
				::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId->set(this->_touchPoint->id,::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(this->_touchPoint->id));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,fireTouchEvents,(void))

Void Touch3DManager_obj::updateCollider( ){
{
		HX_STACK_PUSH("Touch3DManager::updateCollider","away3d/core/managers/Touch3DManager.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		if (((bool(this->_forceTouchMove) || bool(this->_updateDirty)))){
			HX_STACK_LINE(52)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_numTouchPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while(((_g1 < _g))){
				HX_STACK_LINE(52)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				this->_touchPoint = this->_touchPoints->__get(i).StaticCast< ::away3d::core::managers::TouchPoint >();
				HX_STACK_LINE(54)
				this->_collidingObject = this->_touchPicker->getViewCollision(this->_touchPoint->x,this->_touchPoint->y,this->_view);
				HX_STACK_LINE(55)
				::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->set(this->_touchPoint->id,this->_collidingObject);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,updateCollider,(void))

::haxe::ds::IntMap Touch3DManager_obj::_collidingObjectFromTouchId;

::haxe::ds::IntMap Touch3DManager_obj::_previousCollidingObjectFromTouchId;

Array< ::Dynamic > Touch3DManager_obj::_queuedEvents;


Touch3DManager_obj::Touch3DManager_obj()
{
}

void Touch3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Touch3DManager);
	HX_MARK_MEMBER_NAME(_view,"_view");
	HX_MARK_MEMBER_NAME(_touchPicker,"_touchPicker");
	HX_MARK_MEMBER_NAME(_forceTouchMove,"_forceTouchMove");
	HX_MARK_MEMBER_NAME(_touchMoveEvent,"_touchMoveEvent");
	HX_MARK_MEMBER_NAME(_touchPointFromId,"_touchPointFromId");
	HX_MARK_MEMBER_NAME(_touchPoints,"_touchPoints");
	HX_MARK_MEMBER_NAME(_previousCollidingObject,"_previousCollidingObject");
	HX_MARK_MEMBER_NAME(_collidingObject,"_collidingObject");
	HX_MARK_MEMBER_NAME(_touchPoint,"_touchPoint");
	HX_MARK_MEMBER_NAME(_numTouchPoints,"_numTouchPoints");
	HX_MARK_MEMBER_NAME(_nullVector,"_nullVector");
	HX_MARK_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_MARK_END_CLASS();
}

void Touch3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_view,"_view");
	HX_VISIT_MEMBER_NAME(_touchPicker,"_touchPicker");
	HX_VISIT_MEMBER_NAME(_forceTouchMove,"_forceTouchMove");
	HX_VISIT_MEMBER_NAME(_touchMoveEvent,"_touchMoveEvent");
	HX_VISIT_MEMBER_NAME(_touchPointFromId,"_touchPointFromId");
	HX_VISIT_MEMBER_NAME(_touchPoints,"_touchPoints");
	HX_VISIT_MEMBER_NAME(_previousCollidingObject,"_previousCollidingObject");
	HX_VISIT_MEMBER_NAME(_collidingObject,"_collidingObject");
	HX_VISIT_MEMBER_NAME(_touchPoint,"_touchPoint");
	HX_VISIT_MEMBER_NAME(_numTouchPoints,"_numTouchPoints");
	HX_VISIT_MEMBER_NAME(_nullVector,"_nullVector");
	HX_VISIT_MEMBER_NAME(_updateDirty,"_updateDirty");
}

Dynamic Touch3DManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { return _view; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_view") ) { return set_view_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchPoint") ) { return _touchPoint; }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { return _nullVector; }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { return get_touchPicker(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchPicker") ) { return _touchPicker; }
		if (HX_FIELD_EQ(inName,"_touchPoints") ) { return _touchPoints; }
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { return _updateDirty; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { return _queuedEvents; }
		if (HX_FIELD_EQ(inName,"queueDispatch") ) { return queueDispatch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateCollider") ) { return updateCollider_dyn(); }
		if (HX_FIELD_EQ(inName,"forceTouchMove") ) { return get_forceTouchMove(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_touchPicker") ) { return set_touchPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touchPicker") ) { return get_touchPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"fireTouchEvents") ) { return fireTouchEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"_forceTouchMove") ) { return _forceTouchMove; }
		if (HX_FIELD_EQ(inName,"_touchMoveEvent") ) { return _touchMoveEvent; }
		if (HX_FIELD_EQ(inName,"_numTouchPoints") ) { return _numTouchPoints; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { return _collidingObject; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_touchPointFromId") ) { return _touchPointFromId; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_forceTouchMove") ) { return set_forceTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"get_forceTouchMove") ) { return get_forceTouchMove_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"enableTouchListeners") ) { return enableTouchListeners_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disableTouchListeners") ) { return disableTouchListeners_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { return _previousCollidingObject; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_collidingObjectFromTouchId") ) { return _collidingObjectFromTouchId; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_previousCollidingObjectFromTouchId") ) { return _previousCollidingObjectFromTouchId; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Touch3DManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return set_view(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast< ::away3d::containers::View3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_touchPoint") ) { _touchPoint=inValue.Cast< ::away3d::core::managers::TouchPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { _nullVector=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { return set_touchPicker(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_touchPicker") ) { _touchPicker=inValue.Cast< ::away3d::core::pick::IPicker >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPoints") ) { _touchPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { _updateDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { _queuedEvents=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceTouchMove") ) { return set_forceTouchMove(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_forceTouchMove") ) { _forceTouchMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchMoveEvent") ) { _touchMoveEvent=inValue.Cast< ::flash::events::TouchEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTouchPoints") ) { _numTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { _collidingObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_touchPointFromId") ) { _touchPointFromId=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { _previousCollidingObject=inValue.Cast< ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_collidingObjectFromTouchId") ) { _collidingObjectFromTouchId=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_previousCollidingObjectFromTouchId") ) { _previousCollidingObjectFromTouchId=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Touch3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_view"));
	outFields->push(HX_CSTRING("_touchPicker"));
	outFields->push(HX_CSTRING("_forceTouchMove"));
	outFields->push(HX_CSTRING("_touchMoveEvent"));
	outFields->push(HX_CSTRING("_touchPointFromId"));
	outFields->push(HX_CSTRING("_touchPoints"));
	outFields->push(HX_CSTRING("_previousCollidingObject"));
	outFields->push(HX_CSTRING("_collidingObject"));
	outFields->push(HX_CSTRING("_touchPoint"));
	outFields->push(HX_CSTRING("_numTouchPoints"));
	outFields->push(HX_CSTRING("_nullVector"));
	outFields->push(HX_CSTRING("_updateDirty"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("touchPicker"));
	outFields->push(HX_CSTRING("forceTouchMove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_collidingObjectFromTouchId"),
	HX_CSTRING("_previousCollidingObjectFromTouchId"),
	HX_CSTRING("_queuedEvents"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_view"),
	HX_CSTRING("set_touchPicker"),
	HX_CSTRING("get_touchPicker"),
	HX_CSTRING("set_forceTouchMove"),
	HX_CSTRING("get_forceTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("queueDispatch"),
	HX_CSTRING("dispose"),
	HX_CSTRING("disableTouchListeners"),
	HX_CSTRING("enableTouchListeners"),
	HX_CSTRING("fireTouchEvents"),
	HX_CSTRING("updateCollider"),
	HX_CSTRING("_view"),
	HX_CSTRING("_touchPicker"),
	HX_CSTRING("_forceTouchMove"),
	HX_CSTRING("_touchMoveEvent"),
	HX_CSTRING("_touchPointFromId"),
	HX_CSTRING("_touchPoints"),
	HX_CSTRING("_previousCollidingObject"),
	HX_CSTRING("_collidingObject"),
	HX_CSTRING("_touchPoint"),
	HX_CSTRING("_numTouchPoints"),
	HX_CSTRING("_nullVector"),
	HX_CSTRING("_updateDirty"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_collidingObjectFromTouchId,"_collidingObjectFromTouchId");
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_previousCollidingObjectFromTouchId,"_previousCollidingObjectFromTouchId");
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_queuedEvents,"_queuedEvents");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_collidingObjectFromTouchId,"_collidingObjectFromTouchId");
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_previousCollidingObjectFromTouchId,"_previousCollidingObjectFromTouchId");
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_queuedEvents,"_queuedEvents");
};

Class Touch3DManager_obj::__mClass;

void Touch3DManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.Touch3DManager"), hx::TCanCast< Touch3DManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Touch3DManager_obj::__boot()
{
	_collidingObjectFromTouchId= ::haxe::ds::IntMap_obj::__new();
	_previousCollidingObjectFromTouchId= ::haxe::ds::IntMap_obj::__new();
	_queuedEvents= ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
