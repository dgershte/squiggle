#ifndef INCLUDED_away3d_events_Scene3DEvent
#define INCLUDED_away3d_events_Scene3DEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,Scene3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Scene3DEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef Scene3DEvent_obj OBJ_;
		Scene3DEvent_obj();
		Void __construct(::String type,::away3d::containers::ObjectContainer3D objectContainer);

	public:
		static hx::ObjectPtr< Scene3DEvent_obj > __new(::String type,::away3d::containers::ObjectContainer3D objectContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Scene3DEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene3DEvent"); }

		virtual ::flash::events::Event clone( );

		::away3d::containers::ObjectContainer3D objectContainer3D;
		static ::String ADDED_TO_SCENE;
		static ::String REMOVED_FROM_SCENE;
		static ::String PARTITION_CHANGED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_Scene3DEvent */ 
