#ifndef INCLUDED_away3d_events_LensEvent
#define INCLUDED_away3d_events_LensEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,events,LensEvent)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  LensEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef LensEvent_obj OBJ_;
		LensEvent_obj();
		Void __construct(::String type,::away3d::cameras::lenses::LensBase lens,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< LensEvent_obj > __new(::String type,::away3d::cameras::lenses::LensBase lens,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LensEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LensEvent"); }

		virtual ::flash::events::Event clone( );

		virtual ::away3d::cameras::lenses::LensBase get_lens( );
		Dynamic get_lens_dyn();

		::away3d::cameras::lenses::LensBase _lens;
		static ::String MATRIX_CHANGED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_LensEvent */ 
