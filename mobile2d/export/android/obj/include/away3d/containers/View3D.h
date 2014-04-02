#ifndef INCLUDED_away3d_containers_View3D
#define INCLUDED_away3d_containers_View3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,Filter3DRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,CameraEvent)
HX_DECLARE_CLASS2(away3d,events,Scene3DEvent)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  View3D_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef View3D_obj OBJ_;
		View3D_obj();
		Void __construct(::away3d::containers::Scene3D scene,::away3d::cameras::Camera3D camera,::away3d::core::render::RendererBase renderer,hx::Null< bool >  __o_forceSoftware,::String __o_profile);

	public:
		static hx::ObjectPtr< View3D_obj > __new(::away3d::containers::Scene3D scene,::away3d::cameras::Camera3D camera,::away3d::core::render::RendererBase renderer,hx::Null< bool >  __o_forceSoftware,::String __o_profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~View3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("View3D"); }

		virtual Void onViewportUpdated( ::away3d::events::Stage3DEvent event);
		Dynamic onViewportUpdated_dyn();

		virtual Void onAdded( ::flash::events::Event event);
		Dynamic onAdded_dyn();

		virtual Void onAddedToStage( ::flash::events::Event event);
		Dynamic onAddedToStage_dyn();

		virtual Void onLensChanged( ::away3d::events::CameraEvent event);
		Dynamic onLensChanged_dyn();

		virtual ::away3d::core::traverse::EntityCollector get_entityCollector( );
		Dynamic get_entityCollector_dyn();

		virtual ::away3d::core::pick::IPicker set_touchPicker( ::away3d::core::pick::IPicker value);
		Dynamic set_touchPicker_dyn();

		virtual ::away3d::core::pick::IPicker get_touchPicker( );
		Dynamic get_touchPicker_dyn();

		virtual ::away3d::core::pick::IPicker set_mousePicker( ::away3d::core::pick::IPicker value);
		Dynamic set_mousePicker_dyn();

		virtual ::away3d::core::pick::IPicker get_mousePicker( );
		Dynamic get_mousePicker_dyn();

		virtual ::flash::geom::Vector3D getRay( Float sX,Float sY,Float sZ);
		Dynamic getRay_dyn();

		virtual ::flash::geom::Vector3D unproject( Float sX,Float sY,Float sZ);
		Dynamic unproject_dyn();

		virtual ::flash::geom::Vector3D project( ::flash::geom::Vector3D point3d);
		Dynamic project_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void initDepthTexture( ::flash::display3D::Context3D context);
		Dynamic initDepthTexture_dyn();

		virtual Void renderSceneDepthToTexture( ::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic renderSceneDepthToTexture_dyn();

		virtual Void renderDepthPrepass( ::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic renderDepthPrepass_dyn();

		virtual Void updateViewSizeData( );
		Dynamic updateViewSizeData_dyn();

		virtual Void updateTime( );
		Dynamic updateTime_dyn();

		virtual Void updateGlobalPos( );
		Dynamic updateGlobalPos_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void addSourceURL( ::String url);
		Dynamic addSourceURL_dyn();

		virtual Void updateBackBuffer( );
		Dynamic updateBackBuffer_dyn();

		virtual bool set_shareContext( bool value);
		Dynamic set_shareContext_dyn();

		virtual bool get_shareContext( );
		Dynamic get_shareContext_dyn();

		virtual int get_renderedFacesCount( );
		Dynamic get_renderedFacesCount_dyn();

		virtual int set_antiAlias( int value);
		Dynamic set_antiAlias_dyn();

		virtual int get_antiAlias( );
		Dynamic get_antiAlias_dyn();

		virtual ::flash::display::Stage get_parent( );
		Dynamic get_parent_dyn();

		virtual ::flash::display::Stage get_stage( );
		Dynamic get_stage_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Void set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual int get_deltaTime( );
		Dynamic get_deltaTime_dyn();

		virtual ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D scene);
		Dynamic set_scene_dyn();

		virtual ::away3d::containers::Scene3D get_scene( );
		Dynamic get_scene_dyn();

		virtual ::away3d::cameras::Camera3D set_camera( ::away3d::cameras::Camera3D camera);
		Dynamic set_camera_dyn();

		virtual ::away3d::cameras::Camera3D get_camera( );
		Dynamic get_camera_dyn();

		virtual Float set_backgroundAlpha( Float value);
		Dynamic set_backgroundAlpha_dyn();

		virtual Float get_backgroundAlpha( );
		Dynamic get_backgroundAlpha_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual ::away3d::core::render::RendererBase set_renderer( ::away3d::core::render::RendererBase value);
		Dynamic set_renderer_dyn();

		virtual ::away3d::core::render::RendererBase get_renderer( );
		Dynamic get_renderer_dyn();

		virtual Dynamic set_filters3d( Dynamic value);
		Dynamic set_filters3d_dyn();

		virtual Dynamic get_filters3d( );
		Dynamic get_filters3d_dyn();

		virtual bool set_layeredView( bool value);
		Dynamic set_layeredView_dyn();

		virtual bool get_layeredView( );
		Dynamic get_layeredView_dyn();

		virtual ::away3d::textures::Texture2DBase set_background( ::away3d::textures::Texture2DBase value);
		Dynamic set_background_dyn();

		virtual ::away3d::textures::Texture2DBase get_background( );
		Dynamic get_background_dyn();

		virtual bool set_forceMouseMove( bool value);
		Dynamic set_forceMouseMove_dyn();

		virtual bool get_forceMouseMove( );
		Dynamic get_forceMouseMove_dyn();

		virtual ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic set_stage3DProxy_dyn();

		virtual ::away3d::core::managers::Stage3DProxy get_stage3DProxy( );
		Dynamic get_stage3DProxy_dyn();

		virtual bool set_rightClickMenuEnabled( bool val);
		Dynamic set_rightClickMenuEnabled_dyn();

		virtual bool get_rightClickMenuEnabled( );
		Dynamic get_rightClickMenuEnabled_dyn();

		virtual Void onScenePartitionChanged( ::away3d::events::Scene3DEvent event);
		Dynamic onScenePartitionChanged_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual bool set_depthPrepass( bool value);
		Dynamic set_depthPrepass_dyn();

		virtual bool get_depthPrepass( );
		Dynamic get_depthPrepass_dyn();

		bool _layeredView;
		::String _profile;
		bool _depthPrepass;
		bool _viewportDirty;
		bool _scissorRectDirty;
		::flash::geom::Rectangle _scissorRect;
		bool _shareContext;
		::String _sourceURL;
		bool _rightClickMenuEnabled;
		::away3d::core::managers::RTTBufferManager _rttBufferManager;
		int _antiAlias;
		bool _backBufferInvalid;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		::away3d::textures::Texture2DBase _background;
		bool _parentIsStage;
		bool _depthTextureInvalid;
		::flash::display3D::textures::Texture _depthRender;
		bool _requireDepthRender;
		::away3d::core::render::Filter3DRenderer _filter3DRenderer;
		bool _forceSoftware;
		bool _addedToStage;
		::away3d::core::render::DepthRenderer _depthRenderer;
		::away3d::core::render::RendererBase _renderer;
		::away3d::core::managers::Touch3DManager _touch3DManager;
		::away3d::core::managers::Mouse3DManager _mouse3DManager;
		Float _backgroundAlpha;
		int _backgroundColor;
		int _deltaTime;
		Float _time;
		Float _aspectRatio;
		::away3d::core::traverse::EntityCollector _entityCollector;
		::away3d::cameras::Camera3D _camera;
		::away3d::containers::Scene3D _scene;
		bool _globalPosDirty;
		::flash::geom::Point _globalPos;
		::flash::geom::Point _localPos;
		Float _height;
		Float _width;
		Float _y;
		Float _x;
};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_View3D */ 
