#ifndef INCLUDED_away3d_primitives_PlaneGeometry
#define INCLUDED_away3d_primitives_PlaneGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/primitives/PrimitiveBase.h>
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,PlaneGeometry)
HX_DECLARE_CLASS2(away3d,primitives,PrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  PlaneGeometry_obj : public ::away3d::primitives::PrimitiveBase_obj{
	public:
		typedef ::away3d::primitives::PrimitiveBase_obj super;
		typedef PlaneGeometry_obj OBJ_;
		PlaneGeometry_obj();
		Void __construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< bool >  __o_yUp,hx::Null< bool >  __o_doubleSided);

	public:
		static hx::ObjectPtr< PlaneGeometry_obj > __new(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< bool >  __o_yUp,hx::Null< bool >  __o_doubleSided);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlaneGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlaneGeometry"); }

		virtual Void buildUVs( ::away3d::core::base::CompactSubGeometry target);

		virtual Void buildGeometry( ::away3d::core::base::CompactSubGeometry target);

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual bool set_doubleSided( bool value);
		Dynamic set_doubleSided_dyn();

		virtual bool get_doubleSided( );
		Dynamic get_doubleSided_dyn();

		virtual bool set_yUp( bool value);
		Dynamic set_yUp_dyn();

		virtual bool get_yUp( );
		Dynamic get_yUp_dyn();

		virtual int set_segmentsH( int value);
		Dynamic set_segmentsH_dyn();

		virtual int get_segmentsH( );
		Dynamic get_segmentsH_dyn();

		virtual int set_segmentsW( int value);
		Dynamic set_segmentsW_dyn();

		virtual int get_segmentsW( );
		Dynamic get_segmentsW_dyn();

		bool _doubleSided;
		Float _height;
		Float _width;
		bool _yUp;
		int _segmentsH;
		int _segmentsW;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_PlaneGeometry */ 
