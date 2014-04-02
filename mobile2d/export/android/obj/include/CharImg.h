#ifndef INCLUDED_CharImg
#define INCLUDED_CharImg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/BitmapData.h>
HX_DECLARE_CLASS0(CharImg)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  CharImg_obj : public ::flash::display::BitmapData_obj{
	public:
		typedef ::flash::display::BitmapData_obj super;
		typedef CharImg_obj OBJ_;
		CharImg_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		static hx::ObjectPtr< CharImg_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CharImg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CharImg"); }

		static ::String resourceName;
};


#endif /* INCLUDED_CharImg */ 
