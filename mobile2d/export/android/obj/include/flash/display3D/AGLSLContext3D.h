#ifndef INCLUDED_flash_display3D_AGLSLContext3D
#define INCLUDED_flash_display3D_AGLSLContext3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display3D/Context3D.h>
HX_DECLARE_CLASS2(flash,display3D,AGLSLContext3D)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Context3DProgramType)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  AGLSLContext3D_obj : public ::flash::display3D::Context3D_obj{
	public:
		typedef ::flash::display3D::Context3D_obj super;
		typedef AGLSLContext3D_obj OBJ_;
		AGLSLContext3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGLSLContext3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGLSLContext3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGLSLContext3D"); }

		virtual Void present( );

		virtual Void drawTriangles( ::flash::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);

		virtual Void setProgramConstantsFromMatrix( ::flash::display3D::Context3DProgramType programType,int firstRegister,::flash::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);

		virtual Void setCulling( int triangleFaceToCull);

		Float _yFlip;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_AGLSLContext3D */ 
