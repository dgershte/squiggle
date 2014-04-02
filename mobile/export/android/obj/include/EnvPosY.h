#ifndef INCLUDED_EnvPosY
#define INCLUDED_EnvPosY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/BitmapData.h>
HX_DECLARE_CLASS0(EnvPosY)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  EnvPosY_obj : public ::flash::display::BitmapData_obj{
	public:
		typedef ::flash::display::BitmapData_obj super;
		typedef EnvPosY_obj OBJ_;
		EnvPosY_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		static hx::ObjectPtr< EnvPosY_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EnvPosY_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EnvPosY"); }

		static ::String resourceName;
};


#endif /* INCLUDED_EnvPosY */ 
