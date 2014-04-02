#ifndef INCLUDED_away3d_core_render_DepthRenderer
#define INCLUDED_away3d_core_render_DepthRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/render/RendererBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
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
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  DepthRenderer_obj : public ::away3d::core::render::RendererBase_obj{
	public:
		typedef ::away3d::core::render::RendererBase_obj super;
		typedef DepthRenderer_obj OBJ_;
		DepthRenderer_obj();
		Void __construct(hx::Null< bool >  __o_renderBlended,hx::Null< bool >  __o_distanceBased);

	public:
		static hx::ObjectPtr< DepthRenderer_obj > __new(hx::Null< bool >  __o_renderBlended,hx::Null< bool >  __o_distanceBased);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DepthRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DepthRenderer"); }

		virtual Void drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic drawRenderables_dyn();

		virtual Void draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target);

		virtual Void drawCascadeRenderables( ::away3d::core::data::RenderableListItem item,::away3d::cameras::Camera3D camera,Array< ::Dynamic > cullPlanes);
		Dynamic drawCascadeRenderables_dyn();

		virtual Void renderCascades( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,int numCascades,Array< ::Dynamic > scissorRects,Array< ::Dynamic > cameras);
		Dynamic renderCascades_dyn();

		virtual Float set_backgroundB( Float value);

		virtual Float set_backgroundG( Float value);

		virtual Float set_backgroundR( Float value);

		virtual bool set_disableColor( bool value);
		Dynamic set_disableColor_dyn();

		virtual bool get_disableColor( );
		Dynamic get_disableColor_dyn();

		bool _disableColor;
		bool _distanceBased;
		bool _renderBlended;
		::away3d::materials::MaterialBase _activeMaterial;
};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_DepthRenderer */ 
