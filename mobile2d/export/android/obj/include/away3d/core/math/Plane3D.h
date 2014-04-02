#ifndef INCLUDED_away3d_core_math_Plane3D
#define INCLUDED_away3d_core_math_Plane3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Plane3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Plane3D_obj OBJ_;
		Plane3D_obj();
		Void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d);

	public:
		static hx::ObjectPtr< Plane3D_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Plane3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Plane3D"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int classifyPoint( ::flash::geom::Vector3D p,hx::Null< Float >  epsilon);
		Dynamic classifyPoint_dyn();

		virtual Float distance( ::flash::geom::Vector3D p);
		Dynamic distance_dyn();

		virtual ::away3d::core::math::Plane3D normalize( );
		Dynamic normalize_dyn();

		virtual Void fromNormalAndPoint( ::flash::geom::Vector3D normal,::flash::geom::Vector3D point);
		Dynamic fromNormalAndPoint_dyn();

		virtual Void fromPoints( ::flash::geom::Vector3D p0,::flash::geom::Vector3D p1,::flash::geom::Vector3D p2);
		Dynamic fromPoints_dyn();

		int _alignment;
		Float d;
		Float c;
		Float b;
		Float a;
		static int ALIGN_ANY;
		static int ALIGN_XY_AXIS;
		static int ALIGN_YZ_AXIS;
		static int ALIGN_XZ_AXIS;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Plane3D */ 
