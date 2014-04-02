#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#define INCLUDED_away3d_tools_utils_TextureUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,tools,utils,TextureUtils)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
namespace away3d{
namespace tools{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  TextureUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureUtils_obj OBJ_;
		TextureUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextureUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureUtils"); }

		static int MAX_SIZE;
		static bool isBitmapDataValid( ::flash::display::BitmapData bitmapData);
		static Dynamic isBitmapDataValid_dyn();

		static bool isDimensionValid( int d);
		static Dynamic isDimensionValid_dyn();

		static bool isPowerOfTwo( int value);
		static Dynamic isPowerOfTwo_dyn();

		static int getBestPowerOf2( int value);
		static Dynamic getBestPowerOf2_dyn();

};

} // end namespace away3d
} // end namespace tools
} // end namespace utils

#endif /* INCLUDED_away3d_tools_utils_TextureUtils */ 
