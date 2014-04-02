#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#define INCLUDED_away3d_core_render_DefaultRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/render/RendererBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,DefaultRenderer)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  DefaultRenderer_obj : public ::away3d::core::render::RendererBase_obj{
	public:
		typedef ::away3d::core::render::RendererBase_obj super;
		typedef DefaultRenderer_obj OBJ_;
		DefaultRenderer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DefaultRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DefaultRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultRenderer"); }

		virtual Void dispose( );

		virtual Void drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::core::traverse::EntityCollector entityCollector,int which);
		Dynamic drawRenderables_dyn();

		virtual Void updateSkyBoxProjection( ::away3d::cameras::Camera3D camera);
		Dynamic updateSkyBoxProjection_dyn();

		virtual Void drawSkyBox( ::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic drawSkyBox_dyn();

		virtual Void draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target);

		virtual Void updateLights( ::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic updateLights_dyn();

		virtual Void executeRender( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  surfaceSelector);

		virtual ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);

		::flash::geom::Matrix3D _skyboxProjection;
		::away3d::core::render::DepthRenderer _depthRenderer;
		::away3d::core::render::DepthRenderer _distanceRenderer;
		::away3d::materials::MaterialBase _activeMaterial;
		static int RTT_PASSES;
		static int SCREEN_PASSES;
		static int ALL_PASSES;
};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_DefaultRenderer */ 
