#ifndef INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper
#define INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS3(away3d,cameras,lenses,PerspectiveLens)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,CubeMapShadowMapper)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES  CubeMapShadowMapper_obj : public ::away3d::lights::shadowmaps::ShadowMapperBase_obj{
	public:
		typedef ::away3d::lights::shadowmaps::ShadowMapperBase_obj super;
		typedef CubeMapShadowMapper_obj OBJ_;
		CubeMapShadowMapper_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CubeMapShadowMapper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubeMapShadowMapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubeMapShadowMapper"); }

		virtual Void drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer);

		virtual Void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);

		virtual ::away3d::textures::TextureProxyBase createDepthTexture( );

		virtual Void addCamera( Float rotationX,Float rotationY,Float rotationZ);
		Dynamic addCamera_dyn();

		virtual Void initCameras( );
		Dynamic initCameras_dyn();

		Array< bool > _needsRender;
		Array< ::Dynamic > _lenses;
		Array< ::Dynamic > _depthCameras;
};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper */ 
