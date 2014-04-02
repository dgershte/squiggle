#ifndef INCLUDED_flash_display3D_Context3DMipFilter
#define INCLUDED_flash_display3D_Context3DMipFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DMipFilter)
namespace flash{
namespace display3D{


class Context3DMipFilter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DMipFilter_obj OBJ_;

	public:
		Context3DMipFilter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.display3D.Context3DMipFilter"); }
		::String __ToString() const { return HX_CSTRING("Context3DMipFilter.") + tag; }

		static ::flash::display3D::Context3DMipFilter MIPLINEAR;
		static inline ::flash::display3D::Context3DMipFilter MIPLINEAR_dyn() { return MIPLINEAR; }
		static ::flash::display3D::Context3DMipFilter MIPNEAREST;
		static inline ::flash::display3D::Context3DMipFilter MIPNEAREST_dyn() { return MIPNEAREST; }
		static ::flash::display3D::Context3DMipFilter MIPNONE;
		static inline ::flash::display3D::Context3DMipFilter MIPNONE_dyn() { return MIPNONE; }
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3DMipFilter */ 
