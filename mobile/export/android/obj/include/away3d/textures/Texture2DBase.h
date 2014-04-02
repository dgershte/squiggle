#ifndef INCLUDED_away3d_textures_Texture2DBase
#define INCLUDED_away3d_textures_Texture2DBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/textures/TextureProxyBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  Texture2DBase_obj : public ::away3d::textures::TextureProxyBase_obj{
	public:
		typedef ::away3d::textures::TextureProxyBase_obj super;
		typedef Texture2DBase_obj OBJ_;
		Texture2DBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Texture2DBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Texture2DBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture2DBase"); }

		virtual ::flash::display3D::textures::TextureBase createTexture( ::flash::display3D::Context3D context);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_Texture2DBase */ 
