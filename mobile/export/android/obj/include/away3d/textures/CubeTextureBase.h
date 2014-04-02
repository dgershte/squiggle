#ifndef INCLUDED_away3d_textures_CubeTextureBase
#define INCLUDED_away3d_textures_CubeTextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/textures/TextureProxyBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  CubeTextureBase_obj : public ::away3d::textures::TextureProxyBase_obj{
	public:
		typedef ::away3d::textures::TextureProxyBase_obj super;
		typedef CubeTextureBase_obj OBJ_;
		CubeTextureBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CubeTextureBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubeTextureBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubeTextureBase"); }

		virtual ::flash::display3D::textures::TextureBase createTexture( ::flash::display3D::Context3D context);

		virtual int get_size( );
		Dynamic get_size_dyn();

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_CubeTextureBase */ 
