#ifndef INCLUDED_away3d_primitives_LineSegment
#define INCLUDED_away3d_primitives_LineSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/primitives/data/Segment.h>
HX_DECLARE_CLASS2(away3d,primitives,LineSegment)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  LineSegment_obj : public ::away3d::primitives::data::Segment_obj{
	public:
		typedef ::away3d::primitives::data::Segment_obj super;
		typedef LineSegment_obj OBJ_;
		LineSegment_obj();
		Void __construct(::flash::geom::Vector3D v0,::flash::geom::Vector3D v1,hx::Null< int >  __o_color0,hx::Null< int >  __o_color1,hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< LineSegment_obj > __new(::flash::geom::Vector3D v0,::flash::geom::Vector3D v1,hx::Null< int >  __o_color0,hx::Null< int >  __o_color1,hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LineSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LineSegment"); }

		::String TYPE;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_LineSegment */ 
