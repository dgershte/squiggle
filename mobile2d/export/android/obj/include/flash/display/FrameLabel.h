#ifndef INCLUDED_flash_display_FrameLabel
#define INCLUDED_flash_display_FrameLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(flash,display,FrameLabel)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace flash{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FrameLabel_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef FrameLabel_obj OBJ_;
		FrameLabel_obj();
		Void __construct(::String name,int frame);

	public:
		static hx::ObjectPtr< FrameLabel_obj > __new(::String name,int frame);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FrameLabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FrameLabel"); }

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		::String __name;
		int __frame;
		::String name;
		int frame;
};

} // end namespace flash
} // end namespace display

#endif /* INCLUDED_flash_display_FrameLabel */ 
