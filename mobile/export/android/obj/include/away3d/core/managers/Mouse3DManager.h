#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#define INCLUDED_away3d_core_managers_Mouse3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,events,MouseEvent3D)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Mouse3DManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse3DManager_obj OBJ_;
		Mouse3DManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mouse3DManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mouse3DManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mouse3DManager"); }

		virtual ::away3d::core::pick::IPicker set_mousePicker( ::away3d::core::pick::IPicker value);
		Dynamic set_mousePicker_dyn();

		virtual ::away3d::core::pick::IPicker get_mousePicker( );
		Dynamic get_mousePicker_dyn();

		virtual bool set_forceMouseMove( bool value);
		Dynamic set_forceMouseMove_dyn();

		virtual bool get_forceMouseMove( );
		Dynamic get_forceMouseMove_dyn();

		virtual Void onMouseWheel( ::flash::events::MouseEvent event);
		Dynamic onMouseWheel_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent event);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent event);
		Dynamic onMouseDown_dyn();

		virtual Void onDoubleClick( ::flash::events::MouseEvent event);
		Dynamic onDoubleClick_dyn();

		virtual Void onClick( ::flash::events::MouseEvent event);
		Dynamic onClick_dyn();

		virtual Void onMouseOver( ::flash::events::MouseEvent event);
		Dynamic onMouseOver_dyn();

		virtual Void onMouseOut( ::flash::events::MouseEvent event);
		Dynamic onMouseOut_dyn();

		virtual Void onMouseMove( ::flash::events::MouseEvent event);
		Dynamic onMouseMove_dyn();

		virtual Void traverseDisplayObjects( ::flash::display::DisplayObjectContainer container);
		Dynamic traverseDisplayObjects_dyn();

		virtual bool hasKey( ::away3d::containers::View3D view);
		Dynamic hasKey_dyn();

		virtual Void reThrowEvent( ::flash::events::MouseEvent event);
		Dynamic reThrowEvent_dyn();

		virtual Void queueDispatch( ::away3d::events::MouseEvent3D event,::flash::events::MouseEvent sourceEvent,::away3d::core::pick::PickingCollisionVO collider);
		Dynamic queueDispatch_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void disableMouseListeners( ::away3d::containers::View3D view);
		Dynamic disableMouseListeners_dyn();

		virtual Void enableMouseListeners( ::away3d::containers::View3D view);
		Dynamic enableMouseListeners_dyn();

		virtual Void addViewLayer( ::away3d::containers::View3D view);
		Dynamic addViewLayer_dyn();

		virtual Void fireMouseEvents( );
		Dynamic fireMouseEvents_dyn();

		virtual Void updateCollider( ::away3d::containers::View3D view);
		Dynamic updateCollider_dyn();

		::away3d::core::pick::PickingCollisionVO _collidingUpObject;
		::away3d::core::pick::PickingCollisionVO _collidingDownObject;
		int _childDepth;
		::away3d::core::pick::IPicker _mousePicker;
		bool _forceMouseMove;
		::flash::events::MouseEvent _mouseMoveEvent;
		::flash::geom::Vector3D _nullVector;
		bool _updateDirty;
		::away3d::containers::View3D _activeView;
		static ::haxe::ds::ObjectMap _view3Ds;
		static Array< ::Dynamic > _view3DLookup;
		static int _viewCount;
		static ::away3d::core::pick::PickingCollisionVO _collidingObject;
		static ::away3d::core::pick::PickingCollisionVO _previousCollidingObject;
		static Array< ::Dynamic > _collidingViewObjects;
		static Array< ::Dynamic > _queuedEvents;
		static ::away3d::events::MouseEvent3D _mouseUp;
		static ::away3d::events::MouseEvent3D _mouseClick;
		static ::away3d::events::MouseEvent3D _mouseOut;
		static ::away3d::events::MouseEvent3D _mouseDown;
		static ::away3d::events::MouseEvent3D _mouseMove;
		static ::away3d::events::MouseEvent3D _mouseOver;
		static ::away3d::events::MouseEvent3D _mouseWheel;
		static ::away3d::events::MouseEvent3D _mouseDoubleClick;
		static int _previousCollidingView;
		static int _collidingView;
};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Mouse3DManager */ 
