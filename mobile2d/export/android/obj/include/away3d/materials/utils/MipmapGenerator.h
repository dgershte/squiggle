#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#define INCLUDED_away3d_materials_utils_MipmapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,utils,MipmapGenerator)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace materials{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  MipmapGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MipmapGenerator_obj OBJ_;
		MipmapGenerator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MipmapGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MipmapGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MipmapGenerator"); }

		static ::flash::geom::Matrix _matrix;
		static ::flash::geom::Rectangle _rect;
		static Void generateMipMaps( ::flash::display::BitmapData source,::flash::display3D::textures::TextureBase target,::flash::display::BitmapData mipmap,hx::Null< bool >  alpha,hx::Null< int >  side);
		static Dynamic generateMipMaps_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace utils

#endif /* INCLUDED_away3d_materials_utils_MipmapGenerator */ 
