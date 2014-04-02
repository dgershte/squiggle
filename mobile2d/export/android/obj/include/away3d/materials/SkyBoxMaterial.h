#ifndef INCLUDED_away3d_materials_SkyBoxMaterial
#define INCLUDED_away3d_materials_SkyBoxMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/MaterialBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SkyBoxMaterial)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SkyBoxPass)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  SkyBoxMaterial_obj : public ::away3d::materials::MaterialBase_obj{
	public:
		typedef ::away3d::materials::MaterialBase_obj super;
		typedef SkyBoxMaterial_obj OBJ_;
		SkyBoxMaterial_obj();
		Void __construct(::away3d::textures::CubeTextureBase cubeMap);

	public:
		static hx::ObjectPtr< SkyBoxMaterial_obj > __new(::away3d::textures::CubeTextureBase cubeMap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkyBoxMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkyBoxMaterial"); }

		virtual ::away3d::textures::CubeTextureBase set_cubeMap( ::away3d::textures::CubeTextureBase value);
		Dynamic set_cubeMap_dyn();

		virtual ::away3d::textures::CubeTextureBase get_cubeMap( );
		Dynamic get_cubeMap_dyn();

		::away3d::materials::passes::SkyBoxPass _skyboxPass;
		::away3d::textures::CubeTextureBase _cubeMap;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_SkyBoxMaterial */ 
