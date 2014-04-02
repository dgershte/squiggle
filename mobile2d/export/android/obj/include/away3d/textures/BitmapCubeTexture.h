#ifndef INCLUDED_away3d_textures_BitmapCubeTexture
#define INCLUDED_away3d_textures_BitmapCubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/textures/CubeTextureBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,BitmapCubeTexture)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  BitmapCubeTexture_obj : public ::away3d::textures::CubeTextureBase_obj{
	public:
		typedef ::away3d::textures::CubeTextureBase_obj super;
		typedef BitmapCubeTexture_obj OBJ_;
		BitmapCubeTexture_obj();
		Void __construct(::flash::display::BitmapData posX,::flash::display::BitmapData negX,::flash::display::BitmapData posY,::flash::display::BitmapData negY,::flash::display::BitmapData posZ,::flash::display::BitmapData negZ);

	public:
		static hx::ObjectPtr< BitmapCubeTexture_obj > __new(::flash::display::BitmapData posX,::flash::display::BitmapData negX,::flash::display::BitmapData posY,::flash::display::BitmapData negY,::flash::display::BitmapData posZ,::flash::display::BitmapData negZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapCubeTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapCubeTexture"); }

		virtual Void uploadContent( ::flash::display3D::textures::TextureBase texture);

		virtual Void testSize( ::flash::display::BitmapData value);
		Dynamic testSize_dyn();

		virtual ::flash::display::BitmapData set_negativeZ( ::flash::display::BitmapData value);
		Dynamic set_negativeZ_dyn();

		virtual ::flash::display::BitmapData get_negativeZ( );
		Dynamic get_negativeZ_dyn();

		virtual ::flash::display::BitmapData set_positiveZ( ::flash::display::BitmapData value);
		Dynamic set_positiveZ_dyn();

		virtual ::flash::display::BitmapData get_positiveZ( );
		Dynamic get_positiveZ_dyn();

		virtual ::flash::display::BitmapData set_negativeY( ::flash::display::BitmapData value);
		Dynamic set_negativeY_dyn();

		virtual ::flash::display::BitmapData get_negativeY( );
		Dynamic get_negativeY_dyn();

		virtual ::flash::display::BitmapData set_positiveY( ::flash::display::BitmapData value);
		Dynamic set_positiveY_dyn();

		virtual ::flash::display::BitmapData get_positiveY( );
		Dynamic get_positiveY_dyn();

		virtual ::flash::display::BitmapData set_negativeX( ::flash::display::BitmapData value);
		Dynamic set_negativeX_dyn();

		virtual ::flash::display::BitmapData get_negativeX( );
		Dynamic get_negativeX_dyn();

		virtual ::flash::display::BitmapData set_positiveX( ::flash::display::BitmapData value);
		Dynamic set_positiveX_dyn();

		virtual ::flash::display::BitmapData get_positiveX( );
		Dynamic get_positiveX_dyn();

		Array< ::Dynamic > _bitmapDatas;
};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_BitmapCubeTexture */ 
