#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#define INCLUDED_away3d_core_math_Matrix3DUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Matrix3DUtils)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,math,Quaternion)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Matrix3DUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix3DUtils_obj OBJ_;
		Matrix3DUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Matrix3DUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Matrix3DUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix3DUtils"); }

		static Array< Float > RAW_DATA_CONTAINER;
		static ::flash::geom::Matrix3D CALCULATION_MATRIX;
		static ::flash::geom::Matrix3D quaternion2matrix( ::away3d::core::math::Quaternion quarternion,::flash::geom::Matrix3D m);
		static Dynamic quaternion2matrix_dyn();

		static ::flash::geom::Vector3D getForward( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v);
		static Dynamic getForward_dyn();

		static ::flash::geom::Vector3D getUp( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v);
		static Dynamic getUp_dyn();

		static ::flash::geom::Vector3D getRight( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v);
		static Dynamic getRight_dyn();

		static bool compare( ::flash::geom::Matrix3D m1,::flash::geom::Matrix3D m2);
		static Dynamic compare_dyn();

		static Void lookAt( ::flash::geom::Matrix3D matrix,::flash::geom::Vector3D pos,::flash::geom::Vector3D dir,::flash::geom::Vector3D up);
		static Dynamic lookAt_dyn();

		static ::flash::geom::Matrix3D reflection( ::away3d::core::math::Plane3D plane,::flash::geom::Matrix3D target);
		static Dynamic reflection_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Matrix3DUtils */ 
