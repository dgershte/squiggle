#ifndef INCLUDED_away3d_materials_passes_SkyBoxPass
#define INCLUDED_away3d_materials_passes_SkyBoxPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/passes/MaterialPassBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SkyBoxPass)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  SkyBoxPass_obj : public ::away3d::materials::passes::MaterialPassBase_obj{
	public:
		typedef ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef SkyBoxPass_obj OBJ_;
		SkyBoxPass_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SkyBoxPass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkyBoxPass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkyBoxPass"); }

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual Void render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);

		virtual ::String getFragmentCode( ::String animationCode);

		virtual ::String getVertexCode( );

		virtual ::away3d::textures::CubeTextureBase set_cubeTexture( ::away3d::textures::CubeTextureBase value);
		Dynamic set_cubeTexture_dyn();

		virtual ::away3d::textures::CubeTextureBase get_cubeTexture( );
		Dynamic get_cubeTexture_dyn();

		Array< Float > _vertexData;
		::away3d::textures::CubeTextureBase _cubeTexture;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SkyBoxPass */ 
