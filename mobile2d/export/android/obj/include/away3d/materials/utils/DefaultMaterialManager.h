#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#define INCLUDED_away3d_materials_utils_DefaultMaterialManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS2(away3d,materials,TextureMaterial)
HX_DECLARE_CLASS3(away3d,materials,utils,DefaultMaterialManager)
HX_DECLARE_CLASS2(away3d,textures,BitmapTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  DefaultMaterialManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DefaultMaterialManager_obj OBJ_;
		DefaultMaterialManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DefaultMaterialManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DefaultMaterialManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultMaterialManager"); }

		static ::flash::display::BitmapData _defaultTextureBitmapData;
		static ::away3d::materials::TextureMaterial _defaultMaterial;
		static ::away3d::textures::BitmapTexture _defaultTexture;
		static ::away3d::materials::TextureMaterial getDefaultMaterial( ::away3d::core::base::IMaterialOwner renderable);
		static Dynamic getDefaultMaterial_dyn();

		static ::away3d::textures::BitmapTexture getDefaultTexture( ::away3d::core::base::IMaterialOwner renderable);
		static Dynamic getDefaultTexture_dyn();

		static Void createDefaultTexture( );
		static Dynamic createDefaultTexture_dyn();

		static Void createDefaultMaterial( );
		static Dynamic createDefaultMaterial_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace utils

#endif /* INCLUDED_away3d_materials_utils_DefaultMaterialManager */ 
