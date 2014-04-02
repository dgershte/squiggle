#ifndef INCLUDED_away3d_textures_BitmapTexture
#define INCLUDED_away3d_textures_BitmapTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/textures/Texture2DBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,BitmapTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  BitmapTexture_obj : public ::away3d::textures::Texture2DBase_obj{
	public:
		typedef ::away3d::textures::Texture2DBase_obj super;
		typedef BitmapTexture_obj OBJ_;
		BitmapTexture_obj();
		Void __construct(::flash::display::BitmapData bitmapData,hx::Null< bool >  __o_generateMipmaps);

	public:
		static hx::ObjectPtr< BitmapTexture_obj > __new(::flash::display::BitmapData bitmapData,hx::Null< bool >  __o_generateMipmaps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapTexture"); }

		virtual Void dispose( );

		virtual Void freeMipMapHolder( );
		Dynamic freeMipMapHolder_dyn();

		virtual Void getMipMapHolder( );
		Dynamic getMipMapHolder_dyn();

		virtual Void uploadContent( ::flash::display3D::textures::TextureBase texture);

		virtual ::flash::display::BitmapData set_bitmapData( ::flash::display::BitmapData value);
		Dynamic set_bitmapData_dyn();

		virtual ::flash::display::BitmapData get_bitmapData( );
		Dynamic get_bitmapData_dyn();

		bool _generateMipmaps;
		::flash::display::BitmapData _mipMapHolder;
		::flash::display::BitmapData _bitmapData;
		static Dynamic _mipMaps;
		static Dynamic _mipMapUses;
};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_BitmapTexture */ 
