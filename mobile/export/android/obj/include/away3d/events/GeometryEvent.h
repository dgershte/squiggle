#ifndef INCLUDED_away3d_events_GeometryEvent
#define INCLUDED_away3d_events_GeometryEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS2(away3d,events,GeometryEvent)
HX_DECLARE_CLASS2(flash,events,Event)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  GeometryEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef GeometryEvent_obj OBJ_;
		GeometryEvent_obj();
		Void __construct(::String type,::away3d::core::base::ISubGeometry subGeometry);

	public:
		static hx::ObjectPtr< GeometryEvent_obj > __new(::String type,::away3d::core::base::ISubGeometry subGeometry);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GeometryEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeometryEvent"); }

		virtual ::flash::events::Event clone( );

		virtual ::away3d::core::base::ISubGeometry get_subGeometry( );
		Dynamic get_subGeometry_dyn();

		::away3d::core::base::ISubGeometry _subGeometry;
		static ::String SUB_GEOMETRY_ADDED;
		static ::String SUB_GEOMETRY_REMOVED;
		static ::String BOUNDS_INVALID;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_GeometryEvent */ 
