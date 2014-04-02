#ifndef INCLUDED_away3d_textures_RenderTexture
#define INCLUDED_away3d_textures_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/textures/Texture2DBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,RenderTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  RenderTexture_obj : public ::away3d::textures::Texture2DBase_obj{
	public:
		typedef ::away3d::textures::Texture2DBase_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();
		Void __construct(int _width,int _height);

	public:
		static hx::ObjectPtr< RenderTexture_obj > __new(int _width,int _height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderTexture"); }

		virtual ::flash::display3D::textures::TextureBase createTexture( ::flash::display3D::Context3D context);

		virtual Void uploadContent( ::flash::display3D::textures::TextureBase texture);

		virtual int set_height( int value);

		virtual int set_width( int value);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_RenderTexture */ 
