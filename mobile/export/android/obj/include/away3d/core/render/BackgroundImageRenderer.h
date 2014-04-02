#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#define INCLUDED_away3d_core_render_BackgroundImageRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,BackgroundImageRenderer)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  BackgroundImageRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackgroundImageRenderer_obj OBJ_;
		BackgroundImageRenderer_obj();
		Void __construct(::away3d::core::managers::Stage3DProxy stage3DProxy);

	public:
		static hx::ObjectPtr< BackgroundImageRenderer_obj > __new(::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BackgroundImageRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BackgroundImageRenderer"); }

		virtual Void onContextUpdate( ::flash::events::Event event);
		Dynamic onContextUpdate_dyn();

		virtual ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		Dynamic set_texture_dyn();

		virtual ::away3d::textures::Texture2DBase get_texture( );
		Dynamic get_texture_dyn();

		virtual Void initBuffers( ::flash::display3D::Context3D context);
		Dynamic initBuffers_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::String getFragmentCode( );
		Dynamic getFragmentCode_dyn();

		virtual ::String getVertexCode( );
		Dynamic getVertexCode_dyn();

		virtual Void removeBuffers( );
		Dynamic removeBuffers_dyn();

		virtual ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);
		Dynamic set_stage3DProxy_dyn();

		virtual ::away3d::core::managers::Stage3DProxy get_stage3DProxy( );
		Dynamic get_stage3DProxy_dyn();

		::flash::display3D::Context3D _context;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		::flash::display3D::VertexBuffer3D _vertexBuffer;
		::flash::display3D::IndexBuffer3D _indexBuffer;
		::away3d::textures::Texture2DBase _texture;
		::flash::display3D::Program3D _program3d;
};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_BackgroundImageRenderer */ 
