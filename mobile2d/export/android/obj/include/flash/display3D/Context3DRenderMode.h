#ifndef INCLUDED_flash_display3D_Context3DRenderMode
#define INCLUDED_flash_display3D_Context3DRenderMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DRenderMode)
namespace flash{
namespace display3D{


class Context3DRenderMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DRenderMode_obj OBJ_;

	public:
		Context3DRenderMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.display3D.Context3DRenderMode"); }
		::String __ToString() const { return HX_CSTRING("Context3DRenderMode.") + tag; }

		static ::flash::display3D::Context3DRenderMode AUTO;
		static inline ::flash::display3D::Context3DRenderMode AUTO_dyn() { return AUTO; }
		static ::flash::display3D::Context3DRenderMode SOFTWARE;
		static inline ::flash::display3D::Context3DRenderMode SOFTWARE_dyn() { return SOFTWARE; }
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3DRenderMode */ 
