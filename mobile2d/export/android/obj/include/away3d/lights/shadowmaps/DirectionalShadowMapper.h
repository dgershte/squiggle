#ifndef INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper
#define INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS3(away3d,cameras,lenses,FreeMatrixLens)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,DirectionalShadowMapper)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES  DirectionalShadowMapper_obj : public ::away3d::lights::shadowmaps::ShadowMapperBase_obj{
	public:
		typedef ::away3d::lights::shadowmaps::ShadowMapperBase_obj super;
		typedef DirectionalShadowMapper_obj OBJ_;
		DirectionalShadowMapper_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DirectionalShadowMapper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DirectionalShadowMapper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DirectionalShadowMapper"); }

		virtual Void updateProjectionFromFrustumCorners( ::away3d::cameras::Camera3D viewCamera,Array< Float > corners,::flash::geom::Matrix3D matrix);
		Dynamic updateProjectionFromFrustumCorners_dyn();

		virtual Void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);

		virtual Void updateCullPlanes( ::away3d::cameras::Camera3D viewCamera);
		Dynamic updateCullPlanes_dyn();

		virtual Void drawDepthMap( ::flash::display3D::textures::TextureBase target,::away3d::containers::Scene3D scene,::away3d::core::render::DepthRenderer renderer);

		virtual Float get_depth( );
		Dynamic get_depth_dyn();

		virtual ::flash::geom::Matrix3D get_depthProjection( );
		Dynamic get_depthProjection_dyn();

		virtual Float set_lightOffset( Float value);
		Dynamic set_lightOffset_dyn();

		virtual Float get_lightOffset( );
		Dynamic get_lightOffset_dyn();

		virtual Float set_snap( Float value);
		Dynamic set_snap_dyn();

		virtual Float get_snap( );
		Dynamic get_snap_dyn();

		Float _maxZ;
		Float _minZ;
		Array< ::Dynamic > _cullPlanes;
		Float _snap;
		::away3d::cameras::lenses::FreeMatrixLens _overallDepthLens;
		::flash::geom::Matrix3D _matrix;
		Float _lightOffset;
		Array< Float > _localFrustum;
		::away3d::cameras::Camera3D _overallDepthCamera;
};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper */ 
