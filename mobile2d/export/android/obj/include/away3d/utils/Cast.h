#ifndef INCLUDED_away3d_utils_Cast
#define INCLUDED_away3d_utils_Cast

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,BitmapTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(away3d,utils,Cast)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace away3d{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Cast_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cast_obj OBJ_;
		Cast_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Cast_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Cast_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cast"); }

		static ::haxe::ds::StringMap _colorNames;
		static ::String _hexChars;
		static ::haxe::ds::StringMap _notClasses;
		static ::haxe::ds::StringMap _classes;
		static ::String string( Dynamic data);
		static Dynamic string_dyn();

		static ::flash::utils::ByteArray byteArray( Dynamic data);
		static Dynamic byteArray_dyn();

		static bool isHex( ::String string);
		static Dynamic isHex_dyn();

		static int tryColor( Dynamic data);
		static Dynamic tryColor_dyn();

		static int color( Dynamic data);
		static Dynamic color_dyn();

		static Dynamic tryClass( ::String name);
		static Dynamic tryClass_dyn();

		static ::flash::display::BitmapData bitmapData( Dynamic data);
		static Dynamic bitmapData_dyn();

		static ::away3d::textures::BitmapTexture bitmapTexture( Dynamic data);
		static Dynamic bitmapTexture_dyn();

};

} // end namespace away3d
} // end namespace utils

#endif /* INCLUDED_away3d_utils_Cast */ 
