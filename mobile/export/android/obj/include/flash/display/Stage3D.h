#ifndef INCLUDED_flash_display_Stage3D
#define INCLUDED_flash_display_Stage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(flash,display,Stage3D)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace flash{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage3D_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef Stage3D_obj OBJ_;
		Stage3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Stage3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stage3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage3D"); }

		virtual Void requestContext3D( ::String context3DRenderMode);
		Dynamic requestContext3D_dyn();

		Float y;
		Float x;
		bool visible;
		::flash::display3D::Context3D context3D;
};

} // end namespace flash
} // end namespace display

#endif /* INCLUDED_flash_display_Stage3D */ 
