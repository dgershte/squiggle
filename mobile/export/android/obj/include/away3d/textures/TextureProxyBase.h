#ifndef INCLUDED_away3d_textures_TextureProxyBase
#define INCLUDED_away3d_textures_TextureProxyBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFormat)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  TextureProxyBase_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef TextureProxyBase_obj OBJ_;
		TextureProxyBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextureProxyBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureProxyBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< TextureProxyBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< TextureProxyBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TextureProxyBase"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::flash::display3D::textures::TextureBase createTexture( ::flash::display3D::Context3D context);
		Dynamic createTexture_dyn();

		virtual Void invalidateSize( );
		Dynamic invalidateSize_dyn();

		virtual Void invalidateContent( );
		Dynamic invalidateContent_dyn();

		virtual Void setSize( int width,int height);
		Dynamic setSize_dyn();

		virtual Void uploadContent( ::flash::display3D::textures::TextureBase texture);
		Dynamic uploadContent_dyn();

		virtual ::flash::display3D::textures::TextureBase getTextureForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getTextureForStage3D_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		virtual ::flash::display3D::Context3DTextureFormat get_format( );
		Dynamic get_format_dyn();

		virtual bool get_hasMipMaps( );
		Dynamic get_hasMipMaps_dyn();

		int _height;
		int _width;
		Array< ::Dynamic > _dirty;
		Array< ::Dynamic > _textures;
		bool _hasMipmaps;
		::flash::display3D::Context3DTextureFormat _format;
};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_TextureProxyBase */ 
