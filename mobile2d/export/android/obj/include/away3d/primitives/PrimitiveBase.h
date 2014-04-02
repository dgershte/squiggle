#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#define INCLUDED_away3d_primitives_PrimitiveBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/Geometry.h>
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,PrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  PrimitiveBase_obj : public ::away3d::core::base::Geometry_obj{
	public:
		typedef ::away3d::core::base::Geometry_obj super;
		typedef PrimitiveBase_obj OBJ_;
		PrimitiveBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PrimitiveBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PrimitiveBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PrimitiveBase"); }

		virtual Void validate( );

		virtual Void updateUVs( );
		Dynamic updateUVs_dyn();

		virtual Void updateGeometry( );
		Dynamic updateGeometry_dyn();

		virtual Void invalidateUVs( );
		Dynamic invalidateUVs_dyn();

		virtual Void invalidateGeometry( );
		Dynamic invalidateGeometry_dyn();

		virtual Void buildUVs( ::away3d::core::base::CompactSubGeometry target);
		Dynamic buildUVs_dyn();

		virtual Void buildGeometry( ::away3d::core::base::CompactSubGeometry target);
		Dynamic buildGeometry_dyn();

		virtual Void applyTransformation( ::flash::geom::Matrix3D transform);

		virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV);

		virtual Void scale( Float scale);

		virtual ::away3d::core::base::Geometry clone( );

		virtual Array< ::Dynamic > get_subGeometries( );

		::away3d::core::base::CompactSubGeometry _subGeometry;
		bool _uvDirty;
		bool _geomDirty;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_PrimitiveBase */ 
