#ifndef INCLUDED_EnvNegY
#define INCLUDED_EnvNegY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/BitmapData.h>
HX_DECLARE_CLASS0(EnvNegY)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  EnvNegY_obj : public ::flash::display::BitmapData_obj{
	public:
		typedef ::flash::display::BitmapData_obj super;
		typedef EnvNegY_obj OBJ_;
		EnvNegY_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		static hx::ObjectPtr< EnvNegY_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EnvNegY_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EnvNegY"); }

		static ::String resourceName;
};


#endif /* INCLUDED_EnvNegY */ 
