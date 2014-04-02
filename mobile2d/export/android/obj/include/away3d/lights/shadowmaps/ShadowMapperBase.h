#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#define INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,ShadowCasterCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES  ShadowMapperBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShadowMapperBase_obj OBJ_;
		ShadowMapperBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShadowMapperBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShadowMapperBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShadowMapperBase"); }

		virtual Void drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer);
		Dynamic drawDepthMap_dyn();

		virtual Void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);
		Dynamic updateDepthProjection_dyn();

		virtual Void renderDepthMap( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::traverse::EntityCollector entityCollector,::away3d::core::render::DepthRenderer renderer);
		Dynamic renderDepthMap_dyn();

		virtual ::away3d::textures::TextureProxyBase createDepthTexture( );
		Dynamic createDepthTexture_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual int set_depthMapSize( int value);
		Dynamic set_depthMapSize_dyn();

		virtual int get_depthMapSize( );
		Dynamic get_depthMapSize_dyn();

		virtual ::away3d::textures::TextureProxyBase get_depthMap( );
		Dynamic get_depthMap_dyn();

		virtual ::away3d::lights::LightBase set_light( ::away3d::lights::LightBase value);
		Dynamic set_light_dyn();

		virtual ::away3d::lights::LightBase get_light( );
		Dynamic get_light_dyn();

		virtual Void setDepthMap( ::away3d::textures::TextureProxyBase depthMap);
		Dynamic setDepthMap_dyn();

		virtual Void updateShadows( );
		Dynamic updateShadows_dyn();

		virtual bool set_autoUpdateShadows( bool value);
		Dynamic set_autoUpdateShadows_dyn();

		virtual bool get_autoUpdateShadows( );
		Dynamic get_autoUpdateShadows_dyn();

		virtual ::away3d::core::traverse::ShadowCasterCollector createCasterCollector( );
		Dynamic createCasterCollector_dyn();

		bool _shadowsInvalid;
		bool _autoUpdateShadows;
		bool _explicitDepthMap;
		::away3d::lights::LightBase _light;
		int _depthMapSize;
		::away3d::textures::TextureProxyBase _depthMap;
		::away3d::core::traverse::ShadowCasterCollector _casterCollector;
};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase */ 
