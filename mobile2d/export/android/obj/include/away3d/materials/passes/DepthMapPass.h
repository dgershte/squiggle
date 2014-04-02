#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#define INCLUDED_away3d_materials_passes_DepthMapPass

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
HX_DECLARE_CLASS3(away3d,materials,passes,DepthMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  DepthMapPass_obj : public ::away3d::materials::passes::MaterialPassBase_obj{
	public:
		typedef ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef DepthMapPass_obj OBJ_;
		DepthMapPass_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DepthMapPass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DepthMapPass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DepthMapPass"); }

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual Void render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);

		virtual ::String getFragmentCode( ::String code);

		virtual ::String getVertexCode( );

		virtual ::away3d::textures::Texture2DBase set_alphaMask( ::away3d::textures::Texture2DBase value);
		Dynamic set_alphaMask_dyn();

		virtual ::away3d::textures::Texture2DBase get_alphaMask( );
		Dynamic get_alphaMask_dyn();

		virtual Float set_alphaThreshold( Float value);
		Dynamic set_alphaThreshold_dyn();

		virtual Float get_alphaThreshold( );
		Dynamic get_alphaThreshold_dyn();

		::away3d::textures::Texture2DBase _alphaMask;
		Float _alphaThreshold;
		Array< Float > _data;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_DepthMapPass */ 
