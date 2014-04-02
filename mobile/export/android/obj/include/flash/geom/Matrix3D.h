#ifndef INCLUDED_flash_geom_Matrix3D
#define INCLUDED_flash_geom_Matrix3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace flash{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix3D_obj OBJ_;
		Matrix3D_obj();
		Void __construct(Array< Float > v);

	public:
		static hx::ObjectPtr< Matrix3D_obj > __new(Array< Float > v);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Matrix3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix3D"); }

		virtual ::flash::geom::Matrix3D set_flashMatrix3D( ::flash::geom::Matrix3D mat);
		Dynamic set_flashMatrix3D_dyn();

		virtual ::flash::geom::Matrix3D get_flashMatrix3D( );
		Dynamic get_flashMatrix3D_dyn();

		virtual ::flash::geom::Vector3D set_position( ::flash::geom::Vector3D value);
		Dynamic set_position_dyn();

		virtual ::flash::geom::Vector3D get_position( );
		Dynamic get_position_dyn();

		virtual Float get_determinant( );
		Dynamic get_determinant_dyn();

		Float determinant;
		virtual Void transpose( );
		Dynamic transpose_dyn();

		virtual Void transformVectors( Array< Float > vin,Array< Float > vout);
		Dynamic transformVectors_dyn();

		virtual ::flash::geom::Vector3D transformVector( ::flash::geom::Vector3D v);
		Dynamic transformVector_dyn();

		virtual bool recompose( Array< ::Dynamic > components);
		Dynamic recompose_dyn();

		virtual Void prependTranslation( Float x,Float y,Float z);
		Dynamic prependTranslation_dyn();

		virtual Void prependScale( Float xScale,Float yScale,Float zScale);
		Dynamic prependScale_dyn();

		virtual Void prependRotation( Float degrees,::flash::geom::Vector3D axis);
		Dynamic prependRotation_dyn();

		virtual Void prepend( ::flash::geom::Matrix3D rhs);
		Dynamic prepend_dyn();

		virtual bool invert( );
		Dynamic invert_dyn();

		virtual Void interpolateTo( ::flash::geom::Matrix3D toMat,int percent);
		Dynamic interpolateTo_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::flash::geom::Vector3D deltaTransformVector( ::flash::geom::Vector3D v);
		Dynamic deltaTransformVector_dyn();

		virtual Array< ::Dynamic > decompose( );
		Dynamic decompose_dyn();

		virtual Void copyToMatrix3D( ::flash::geom::Matrix3D dest);
		Dynamic copyToMatrix3D_dyn();

		virtual Void copyRowTo( int row,::flash::geom::Vector3D vector3D);
		Dynamic copyRowTo_dyn();

		virtual Void copyRowFrom( int row,::flash::geom::Vector3D vector3D);
		Dynamic copyRowFrom_dyn();

		virtual Void copyRawDataTo( Array< Float > vector,hx::Null< int >  index,hx::Null< bool >  transpose);
		Dynamic copyRawDataTo_dyn();

		virtual Void copyRawDataFrom( Array< Float > vector,hx::Null< int >  index,hx::Null< bool >  transpose);
		Dynamic copyRawDataFrom_dyn();

		virtual Void copyFrom( ::flash::geom::Matrix3D sourceMatrix3D);
		Dynamic copyFrom_dyn();

		virtual Void copyColumnTo( int column,::flash::geom::Vector3D vector3D);
		Dynamic copyColumnTo_dyn();

		virtual Void copyColumnFrom( int column,::flash::geom::Vector3D vector3D);
		Dynamic copyColumnFrom_dyn();

		virtual ::flash::geom::Matrix3D clone( );
		Dynamic clone_dyn();

		virtual Void appendTranslation( Float x,Float y,Float z);
		Dynamic appendTranslation_dyn();

		virtual Void appendScale( Float xScale,Float yScale,Float zScale);
		Dynamic appendScale_dyn();

		virtual Void appendRotation( Float degrees,::flash::geom::Vector3D axis);
		Dynamic appendRotation_dyn();

		virtual Void append( ::flash::geom::Matrix3D lhs);
		Dynamic append_dyn();

		Array< Float > rawData;
		static ::flash::geom::Matrix3D interpolate( ::flash::geom::Matrix3D thisMat,::flash::geom::Matrix3D toMat,Float percent);
		static Dynamic interpolate_dyn();

		static ::flash::geom::Matrix3D getAxisRotation( Float x,Float y,Float z,Float degrees);
		static Dynamic getAxisRotation_dyn();

};

} // end namespace flash
} // end namespace geom

#endif /* INCLUDED_flash_geom_Matrix3D */ 
