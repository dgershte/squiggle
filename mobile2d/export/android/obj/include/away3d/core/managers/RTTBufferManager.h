#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#define INCLUDED_away3d_core_managers_RTTBufferManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,SingletonEnforcer)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  RTTBufferManager_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef RTTBufferManager_obj OBJ_;
		RTTBufferManager_obj();
		Void __construct(::away3d::core::managers::SingletonEnforcer se,::away3d::core::managers::Stage3DProxy stage3DProxy);

	public:
		static hx::ObjectPtr< RTTBufferManager_obj > __new(::away3d::core::managers::SingletonEnforcer se,::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RTTBufferManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RTTBufferManager"); }

		virtual Void updateRTTBuffers( );
		Dynamic updateRTTBuffers_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual int get_textureHeight( );
		Dynamic get_textureHeight_dyn();

		virtual int get_textureWidth( );
		Dynamic get_textureWidth_dyn();

		virtual ::flash::geom::Rectangle get_renderToTextureRect( );
		Dynamic get_renderToTextureRect_dyn();

		virtual ::flash::display3D::IndexBuffer3D get_indexBuffer( );
		Dynamic get_indexBuffer_dyn();

		virtual ::flash::display3D::VertexBuffer3D get_renderToScreenVertexBuffer( );
		Dynamic get_renderToScreenVertexBuffer_dyn();

		virtual ::flash::display3D::VertexBuffer3D get_renderToTextureVertexBuffer( );
		Dynamic get_renderToTextureVertexBuffer_dyn();

		virtual int set_viewHeight( int value);
		Dynamic set_viewHeight_dyn();

		virtual int get_viewHeight( );
		Dynamic get_viewHeight_dyn();

		virtual int set_viewWidth( int value);
		Dynamic set_viewWidth_dyn();

		virtual int get_viewWidth( );
		Dynamic get_viewWidth_dyn();

		virtual Float get_textureRatioY( );
		Dynamic get_textureRatioY_dyn();

		virtual Float get_textureRatioX( );
		Dynamic get_textureRatioX_dyn();

		Float _textureRatioY;
		Float _textureRatioX;
		bool _buffersInvalid;
		::flash::geom::Rectangle _renderToTextureRect;
		int _textureHeight;
		int _textureWidth;
		int _viewHeight;
		int _viewWidth;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		::flash::display3D::IndexBuffer3D _indexBuffer;
		::flash::display3D::VertexBuffer3D _renderToScreenVertexBuffer;
		::flash::display3D::VertexBuffer3D _renderToTextureVertexBuffer;
		static ::haxe::ds::ObjectMap _instances;
		static ::away3d::core::managers::RTTBufferManager getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic getInstance_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_RTTBufferManager */ 
