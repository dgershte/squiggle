#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#define INCLUDED_away3d_primitives_WireframePrimitiveBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/SegmentSet.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  WireframePrimitiveBase_obj : public ::away3d::entities::SegmentSet_obj{
	public:
		typedef ::away3d::entities::SegmentSet_obj super;
		typedef WireframePrimitiveBase_obj OBJ_;
		WireframePrimitiveBase_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< WireframePrimitiveBase_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WireframePrimitiveBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WireframePrimitiveBase"); }

		virtual Void updateMouseChildren( );

		virtual Void updateOrAddSegment( int index,::flash::geom::Vector3D v0,::flash::geom::Vector3D v1);
		Dynamic updateOrAddSegment_dyn();

		virtual Void updateGeometry( );
		Dynamic updateGeometry_dyn();

		virtual Void invalidateGeometry( );
		Dynamic invalidateGeometry_dyn();

		virtual Void buildGeometry( );
		Dynamic buildGeometry_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase get_bounds( );

		virtual Void removeAllSegments( );

		virtual Float set_thickness( Float value);
		Dynamic set_thickness_dyn();

		virtual Float get_thickness( );
		Dynamic get_thickness_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		Float _thickness;
		int _color;
		bool _geomDirty;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframePrimitiveBase */ 
