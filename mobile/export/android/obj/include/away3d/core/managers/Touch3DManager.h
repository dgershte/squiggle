#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#define INCLUDED_away3d_core_managers_Touch3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,TouchPoint)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,events,TouchEvent3D)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Touch3DManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Touch3DManager_obj OBJ_;
		Touch3DManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Touch3DManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Touch3DManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Touch3DManager"); }

		virtual ::away3d::containers::View3D set_view( ::away3d::containers::View3D value);
		Dynamic set_view_dyn();

		virtual ::away3d::core::pick::IPicker set_touchPicker( ::away3d::core::pick::IPicker value);
		Dynamic set_touchPicker_dyn();

		virtual ::away3d::core::pick::IPicker get_touchPicker( );
		Dynamic get_touchPicker_dyn();

		virtual bool set_forceTouchMove( bool value);
		Dynamic set_forceTouchMove_dyn();

		virtual bool get_forceTouchMove( );
		Dynamic get_forceTouchMove_dyn();

		virtual Void onTouchEnd( ::flash::events::TouchEvent event);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchMove( ::flash::events::TouchEvent event);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchBegin( ::flash::events::TouchEvent event);
		Dynamic onTouchBegin_dyn();

		virtual Void queueDispatch( ::String emitType,::flash::events::TouchEvent sourceEvent,::away3d::core::pick::PickingCollisionVO collider,::away3d::core::managers::TouchPoint touch);
		Dynamic queueDispatch_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void disableTouchListeners( ::away3d::containers::View3D view);
		Dynamic disableTouchListeners_dyn();

		virtual Void enableTouchListeners( ::away3d::containers::View3D view);
		Dynamic enableTouchListeners_dyn();

		virtual Void fireTouchEvents( );
		Dynamic fireTouchEvents_dyn();

		virtual Void updateCollider( );
		Dynamic updateCollider_dyn();

		::away3d::containers::View3D _view;
		::away3d::core::pick::IPicker _touchPicker;
		bool _forceTouchMove;
		::flash::events::TouchEvent _touchMoveEvent;
		::haxe::ds::IntMap _touchPointFromId;
		Array< ::Dynamic > _touchPoints;
		::away3d::core::pick::PickingCollisionVO _previousCollidingObject;
		::away3d::core::pick::PickingCollisionVO _collidingObject;
		::away3d::core::managers::TouchPoint _touchPoint;
		int _numTouchPoints;
		::flash::geom::Vector3D _nullVector;
		bool _updateDirty;
		static ::haxe::ds::IntMap _collidingObjectFromTouchId;
		static ::haxe::ds::IntMap _previousCollidingObjectFromTouchId;
		static Array< ::Dynamic > _queuedEvents;
};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Touch3DManager */ 
