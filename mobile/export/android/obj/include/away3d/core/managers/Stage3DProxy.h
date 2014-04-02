#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#define INCLUDED_away3d_core_managers_Stage3DProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS2(flash,display,Stage3D)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Stage3DProxy_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef Stage3DProxy_obj OBJ_;
		Stage3DProxy_obj();
		Void __construct(int stage3DIndex,::flash::display::Stage3D stage3D,::away3d::core::managers::Stage3DManager stage3DManager,hx::Null< bool >  __o_forceSoftware,::String __o_profile);

	public:
		static hx::ObjectPtr< Stage3DProxy_obj > __new(int stage3DIndex,::flash::display::Stage3D stage3D,::away3d::core::managers::Stage3DManager stage3DManager,hx::Null< bool >  __o_forceSoftware,::String __o_profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stage3DProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage3DProxy"); }

		virtual Void clearDepthBuffer( );
		Dynamic clearDepthBuffer_dyn();

		virtual bool recoverFromDisposal( );
		Dynamic recoverFromDisposal_dyn();

		virtual Void onEnterFrame( ::flash::events::Event event);
		Dynamic onEnterFrame_dyn();

		virtual Void requestContext( hx::Null< bool >  forceSoftware,::String profile);
		Dynamic requestContext_dyn();

		virtual Void onContext3DUpdate( ::flash::events::Event event);
		Dynamic onContext3DUpdate_dyn();

		virtual Void freeContext3D( );
		Dynamic freeContext3D_dyn();

		virtual ::away3d::core::managers::Touch3DManager set_touch3DManager( ::away3d::core::managers::Touch3DManager value);
		Dynamic set_touch3DManager_dyn();

		virtual ::away3d::core::managers::Touch3DManager get_touch3DManager( );
		Dynamic get_touch3DManager_dyn();

		virtual ::away3d::core::managers::Mouse3DManager set_mouse3DManager( ::away3d::core::managers::Mouse3DManager value);
		Dynamic set_mouse3DManager_dyn();

		virtual ::away3d::core::managers::Mouse3DManager get_mouse3DManager( );
		Dynamic get_mouse3DManager_dyn();

		virtual bool set_bufferClear( bool newBufferClear);
		Dynamic set_bufferClear_dyn();

		virtual bool get_bufferClear( );
		Dynamic get_bufferClear_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual int set_color( int color);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual ::flash::geom::Rectangle get_viewPort( );
		Dynamic get_viewPort_dyn();

		virtual int set_antiAlias( int antiAlias);
		Dynamic set_antiAlias_dyn();

		virtual int get_antiAlias( );
		Dynamic get_antiAlias_dyn();

		virtual int set_height( int height);
		Dynamic set_height_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_width( int width);
		Dynamic set_width_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual bool get_usesSoftwareRendering( );
		Dynamic get_usesSoftwareRendering_dyn();

		virtual ::String get_driverInfo( );
		Dynamic get_driverInfo_dyn();

		virtual ::flash::display3D::Context3D get_context3D( );
		Dynamic get_context3D_dyn();

		virtual ::flash::display::Stage3D get_stage3D( );
		Dynamic get_stage3D_dyn();

		virtual int get_stage3DIndex( );
		Dynamic get_stage3DIndex_dyn();

		virtual ::flash::geom::Rectangle set_scissorRect( ::flash::geom::Rectangle value);
		Dynamic set_scissorRect_dyn();

		virtual ::flash::geom::Rectangle get_scissorRect( );
		Dynamic get_scissorRect_dyn();

		virtual Void present( );
		Dynamic present_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void setRenderTarget( ::flash::display3D::textures::TextureBase target,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  surfaceSelector);
		Dynamic setRenderTarget_dyn();

		virtual int get_renderSurfaceSelector( );
		Dynamic get_renderSurfaceSelector_dyn();

		virtual ::flash::display3D::textures::TextureBase get_renderTarget( );
		Dynamic get_renderTarget_dyn();

		virtual bool set_enableDepthAndStencil( bool enableDepthAndStencil);
		Dynamic set_enableDepthAndStencil_dyn();

		virtual bool get_enableDepthAndStencil( );
		Dynamic get_enableDepthAndStencil_dyn();

		virtual Void configureBackBuffer( int backBufferWidth,int backBufferHeight,int antiAlias,bool enableDepthAndStencil);
		Dynamic configureBackBuffer_dyn();

		virtual Void setRenderCallback( Dynamic func);
		Dynamic setRenderCallback_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::String get_profile( );
		Dynamic get_profile_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		bool forceSoftware;
		virtual Void notifyViewportUpdated( );
		Dynamic notifyViewportUpdated_dyn();

		Dynamic _callbackMethod;
		Dynamic &_callbackMethod_dyn() { return _callbackMethod;}
		::away3d::core::managers::Touch3DManager _touch3DManager;
		::away3d::core::managers::Mouse3DManager _mouse3DManager;
		bool _bufferClear;
		bool _viewportDirty;
		::away3d::events::Stage3DEvent _viewportUpdated;
		::flash::events::Event _exitFrame;
		::flash::events::Event _enterFrame;
		::flash::geom::Rectangle _viewPort;
		bool _backBufferDirty;
		int _color;
		::flash::geom::Rectangle _scissorRect;
		int _renderSurfaceSelector;
		::flash::display3D::textures::TextureBase _renderTarget;
		bool _contextRequested;
		bool _enableDepthAndStencil;
		int _antiAlias;
		int _backBufferHeight;
		int _backBufferWidth;
		::away3d::core::managers::Stage3DManager _stage3DManager;
		::flash::display3D::Program3D _activeProgram3D;
		::flash::display::Stage3D _stage3D;
		::String _profile;
		bool _usesSoftwareRendering;
		int _stage3DIndex;
		::flash::display3D::Context3D _context3D;
};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Stage3DProxy */ 
