#ifndef INCLUDED_away3d_events_MouseEvent3D
#define INCLUDED_away3d_events_MouseEvent3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,MouseEvent3D)
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


class HXCPP_CLASS_ATTRIBUTES  MouseEvent3D_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef MouseEvent3D_obj OBJ_;
		MouseEvent3D_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< MouseEvent3D_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseEvent3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseEvent3D"); }

		virtual ::flash::geom::Vector3D get_sceneNormal( );
		Dynamic get_sceneNormal_dyn();

		virtual ::flash::geom::Vector3D get_scenePosition( );
		Dynamic get_scenePosition_dyn();

		virtual ::flash::events::Event clone( );

		virtual Void stopImmediatePropagation( );

		virtual Void stopPropagation( );

		int delta;
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
		::away3d::events::MouseEvent3D _parentEvent;
		bool _allowedToPropagate;
		static ::String MOUSE_OVER;
		static ::String MOUSE_OUT;
		static ::String MOUSE_UP;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_MOVE;
		static ::String CLICK;
		static ::String DOUBLE_CLICK;
		static ::String MOUSE_WHEEL;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_MouseEvent3D */ 
