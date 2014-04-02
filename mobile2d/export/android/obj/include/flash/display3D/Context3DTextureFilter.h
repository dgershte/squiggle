#ifndef INCLUDED_flash_display3D_Context3DTextureFilter
#define INCLUDED_flash_display3D_Context3DTextureFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFilter)
namespace flash{
namespace display3D{


class Context3DTextureFilter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DTextureFilter_obj OBJ_;

	public:
		Context3DTextureFilter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.display3D.Context3DTextureFilter"); }
		::String __ToString() const { return HX_CSTRING("Context3DTextureFilter.") + tag; }

		static ::flash::display3D::Context3DTextureFilter LINEAR;
		static inline ::flash::display3D::Context3DTextureFilter LINEAR_dyn() { return LINEAR; }
		static ::flash::display3D::Context3DTextureFilter NEAREST;
		static inline ::flash::display3D::Context3DTextureFilter NEAREST_dyn() { return NEAREST; }
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3DTextureFilter */ 
