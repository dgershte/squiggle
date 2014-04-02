#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#define INCLUDED_away3d_events_ShadingMethodEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS2(flash,events,Event)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  ShadingMethodEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef ShadingMethodEvent_obj OBJ_;
		ShadingMethodEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< ShadingMethodEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShadingMethodEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShadingMethodEvent"); }

		static ::String SHADER_INVALIDATED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_ShadingMethodEvent */ 
