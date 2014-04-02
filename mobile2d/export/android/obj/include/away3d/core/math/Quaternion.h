#ifndef INCLUDED_away3d_core_math_Quaternion
#define INCLUDED_away3d_core_math_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Quaternion)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Quaternion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);

	public:
		static hx::ObjectPtr< Quaternion_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Quaternion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Quaternion"); }

		virtual Void copyFrom( ::away3d::core::math::Quaternion q);
		Dynamic copyFrom_dyn();

		virtual ::flash::geom::Vector3D rotatePoint( ::flash::geom::Vector3D vector,::flash::geom::Vector3D target);
		Dynamic rotatePoint_dyn();

		virtual ::away3d::core::math::Quaternion clone( );
		Dynamic clone_dyn();

		virtual Void toRawData( Array< Float > target,hx::Null< bool >  exclude4thRow);
		Dynamic toRawData_dyn();

		virtual Void fromMatrix( ::flash::geom::Matrix3D matrix);
		Dynamic fromMatrix_dyn();

		virtual ::flash::geom::Matrix3D toMatrix3D( ::flash::geom::Matrix3D target);
		Dynamic toMatrix3D_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void normalize( hx::Null< Float >  val);
		Dynamic normalize_dyn();

		virtual ::flash::geom::Vector3D toEulerAngles( ::flash::geom::Vector3D target);
		Dynamic toEulerAngles_dyn();

		virtual Void fromEulerAngles( Float ax,Float ay,Float az);
		Dynamic fromEulerAngles_dyn();

		virtual Void lerp( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb,Float t);
		Dynamic lerp_dyn();

		virtual Void slerp( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb,Float t);
		Dynamic slerp_dyn();

		virtual Void fromAxisAngle( ::flash::geom::Vector3D axis,Float angle);
		Dynamic fromAxisAngle_dyn();

		virtual ::away3d::core::math::Quaternion multiplyVector( ::flash::geom::Vector3D vector,::away3d::core::math::Quaternion target);
		Dynamic multiplyVector_dyn();

		virtual Void multiply( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb);
		Dynamic multiply_dyn();

		virtual Float get_magnitude( );
		Dynamic get_magnitude_dyn();

		Float w;
		Float z;
		Float y;
		Float x;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Quaternion */ 
