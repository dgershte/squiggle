#ifndef INCLUDED_away3d_core_render_RendererBase
#define INCLUDED_away3d_core_render_RendererBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,BackgroundImageRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  RendererBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RendererBase_obj OBJ_;
		RendererBase_obj();
		Void __construct(hx::Null< bool >  __o_renderToTexture);

	public:
		static hx::ObjectPtr< RendererBase_obj > __new(hx::Null< bool >  __o_renderToTexture);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RendererBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RendererBase"); }

		virtual Float set_textureRatioY( Float value);
		Dynamic set_textureRatioY_dyn();

		virtual Float get_textureRatioY( );
		Dynamic get_textureRatioY_dyn();

		virtual Float set_textureRatioX( Float value);
		Dynamic set_textureRatioX_dyn();

		virtual Float get_textureRatioX( );
		Dynamic get_textureRatioX_dyn();

		virtual int set_antiAlias( int antiAlias);
		Dynamic set_antiAlias_dyn();

		virtual int get_antiAlias( );
		Dynamic get_antiAlias_dyn();

		virtual ::away3d::core::render::BackgroundImageRenderer get_backgroundImageRenderer( );
		Dynamic get_backgroundImageRenderer_dyn();

		virtual ::away3d::textures::Texture2DBase set_background( ::away3d::textures::Texture2DBase value);
		Dynamic set_background_dyn();

		virtual ::away3d::textures::Texture2DBase get_background( );
		Dynamic get_background_dyn();

		virtual Float set_backgroundAlpha( Float value);
		Dynamic set_backgroundAlpha_dyn();

		virtual Float get_backgroundAlpha( );
		Dynamic get_backgroundAlpha_dyn();

		virtual Void onContextUpdate( ::flash::events::Event event);
		Dynamic onContextUpdate_dyn();

		virtual Void draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target);
		Dynamic draw_dyn();

		virtual Void executeRenderToTexturePass( ::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic executeRenderToTexturePass_dyn();

		virtual Void queueSnapshot( ::flash::display::BitmapData bmd);
		Dynamic queueSnapshot_dyn();

		virtual Void executeRender( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  surfaceSelector);
		Dynamic executeRender_dyn();

		virtual Void render( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  surfaceSelector);
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual bool set_shareContext( bool value);
		Dynamic set_shareContext_dyn();

		virtual bool get_shareContext( );
		Dynamic get_shareContext_dyn();

		virtual ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);
		Dynamic set_stage3DProxy_dyn();

		virtual ::away3d::core::managers::Stage3DProxy get_stage3DProxy( );
		Dynamic get_stage3DProxy_dyn();

		virtual Float set_backgroundB( Float value);
		Dynamic set_backgroundB_dyn();

		virtual Float get_backgroundB( );
		Dynamic get_backgroundB_dyn();

		virtual Float set_backgroundG( Float value);
		Dynamic set_backgroundG_dyn();

		virtual Float get_backgroundG( );
		Dynamic get_backgroundG_dyn();

		virtual Float set_backgroundR( Float value);
		Dynamic set_backgroundR_dyn();

		virtual Float get_backgroundR( );
		Dynamic get_backgroundR_dyn();

		virtual bool set_clearOnRender( bool value);
		Dynamic set_clearOnRender_dyn();

		virtual bool get_clearOnRender( );
		Dynamic get_clearOnRender_dyn();

		virtual ::away3d::core::sort::IEntitySorter set_renderableSorter( ::away3d::core::sort::IEntitySorter value);
		Dynamic set_renderableSorter_dyn();

		virtual ::away3d::core::sort::IEntitySorter get_renderableSorter( );
		Dynamic get_renderableSorter_dyn();

		virtual bool get_renderToTexture( );
		Dynamic get_renderToTexture_dyn();

		virtual Float set_viewHeight( Float value);
		Dynamic set_viewHeight_dyn();

		virtual Float get_viewHeight( );
		Dynamic get_viewHeight_dyn();

		virtual Float set_viewWidth( Float value);
		Dynamic set_viewWidth_dyn();

		virtual Float get_viewWidth( );
		Dynamic get_viewWidth_dyn();

		virtual ::away3d::core::traverse::EntityCollector createEntityCollector( );
		Dynamic createEntityCollector_dyn();

		::flash::geom::Matrix3D _rttViewProjectionMatrix;
		bool _clearOnRender;
		bool _snapshotRequired;
		::flash::display::BitmapData _snapshotBitmapData;
		Float _textureRatioY;
		Float _textureRatioX;
		int _antiAlias;
		bool _renderToTexture;
		::away3d::textures::Texture2DBase _background;
		::away3d::core::render::BackgroundImageRenderer _backgroundImageRenderer;
		::away3d::core::sort::IEntitySorter _renderableSorter;
		Float _viewHeight;
		Float _viewWidth;
		int _renderTargetSurface;
		::flash::display3D::textures::TextureBase _renderTarget;
		bool _shareContext;
		Float _backgroundAlpha;
		Float _backgroundB;
		Float _backgroundG;
		Float _backgroundR;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		::flash::display3D::Context3D _context;
};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_RendererBase */ 
