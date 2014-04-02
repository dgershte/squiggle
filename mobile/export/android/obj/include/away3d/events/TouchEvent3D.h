#ifndef INCLUDED_away3d_events_TouchEvent3D
#define INCLUDED_away3d_events_TouchEvent3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,TouchEvent3D)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent3D_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef TouchEvent3D_obj OBJ_;
		TouchEvent3D_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< TouchEvent3D_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchEvent3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchEvent3D"); }

		virtual ::flash::geom::Vector3D get_sceneNormal( );
		Dynamic get_sceneNormal_dyn();

		virtual ::flash::geom::Vector3D get_scenePosition( );
		Dynamic get_scenePosition_dyn();

		virtual ::flash::events::Event clone( );

		virtual Void stopImmediatePropagation( );

		virtual Void stopPropagation( );

		int touchPointID;
		bool shiftKey;
		bool altKey;
		bool ctrlKey;
		::flash::geom::Vector3D localNormal;
		::flash::geom::Vector3D localPosition;
		int subGeometryIndex;
		int index;
		::flash::geom::Point uv;
		::away3d::materials::MaterialBase material;
		::away3d::core::base::IRenderable renderable;
		::away3d::containers::ObjectContainer3D object;
		::away3d::containers::View3D view;
		Float screenY;
		Float screenX;
		::away3d::events::TouchEvent3D _parentEvent;
		bool _allowedToPropagate;
		static ::String TOUCH_END;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_TouchEvent3D */ 
