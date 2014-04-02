#ifndef INCLUDED_away3d_events_CameraEvent
#define INCLUDED_away3d_events_CameraEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,CameraEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  CameraEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef CameraEvent_obj OBJ_;
		CameraEvent_obj();
		Void __construct(::String type,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< CameraEvent_obj > __new(::String type,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CameraEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CameraEvent"); }

		virtual ::flash::events::Event clone( );

		virtual ::away3d::cameras::Camera3D get_camera( );
		Dynamic get_camera_dyn();

		::away3d::cameras::Camera3D _camera;
		static ::String LENS_CHANGED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_CameraEvent */ 
