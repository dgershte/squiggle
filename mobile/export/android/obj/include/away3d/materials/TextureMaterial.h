#ifndef INCLUDED_away3d_materials_TextureMaterial
#define INCLUDED_away3d_materials_TextureMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/SinglePassMaterialBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS2(away3d,materials,TextureMaterial)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  TextureMaterial_obj : public ::away3d::materials::SinglePassMaterialBase_obj{
	public:
		typedef ::away3d::materials::SinglePassMaterialBase_obj super;
		typedef TextureMaterial_obj OBJ_;
		TextureMaterial_obj();
		Void __construct(::away3d::textures::Texture2DBase texture,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_mipmap);

	public:
		static hx::ObjectPtr< TextureMaterial_obj > __new(::away3d::textures::Texture2DBase texture,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_mipmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureMaterial"); }

		virtual ::away3d::textures::Texture2DBase set_ambientTexture( ::away3d::textures::Texture2DBase value);
		Dynamic set_ambientTexture_dyn();

		virtual ::away3d::textures::Texture2DBase get_ambientTexture( );
		Dynamic get_ambientTexture_dyn();

		virtual ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		Dynamic set_texture_dyn();

		virtual ::away3d::textures::Texture2DBase get_texture( );
		Dynamic get_texture_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual bool set_animateUVs( bool value);
		Dynamic set_animateUVs_dyn();

		virtual bool get_animateUVs( );
		Dynamic get_animateUVs_dyn();

};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_TextureMaterial */ 
