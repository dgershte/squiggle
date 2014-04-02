#ifndef INCLUDED_away3d_events_LightEvent
#define INCLUDED_away3d_events_LightEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,events,LightEvent)
HX_DECLARE_CLASS2(flash,events,Event)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  LightEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef LightEvent_obj OBJ_;
		LightEvent_obj();
		Void __construct(::String type);

	public:
		static hx::ObjectPtr< LightEvent_obj > __new(::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightEvent"); }

		virtual ::flash::events::Event clone( );

		static ::String CASTS_SHADOW_CHANGE;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_LightEvent */ 
