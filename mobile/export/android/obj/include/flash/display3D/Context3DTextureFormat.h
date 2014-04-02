#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#define INCLUDED_flash_display3D_Context3DTextureFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFormat)
namespace flash{
namespace display3D{


class Context3DTextureFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DTextureFormat_obj OBJ_;

	public:
		Context3DTextureFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.display3D.Context3DTextureFormat"); }
		::String __ToString() const { return HX_CSTRING("Context3DTextureFormat.") + tag; }

		static ::flash::display3D::Context3DTextureFormat BGRA;
		static inline ::flash::display3D::Context3DTextureFormat BGRA_dyn() { return BGRA; }
		static ::flash::display3D::Context3DTextureFormat COMPRESSED;
		static inline ::flash::display3D::Context3DTextureFormat COMPRESSED_dyn() { return COMPRESSED; }
		static ::flash::display3D::Context3DTextureFormat COMPRESSED_ALPHA;
		static inline ::flash::display3D::Context3DTextureFormat COMPRESSED_ALPHA_dyn() { return COMPRESSED_ALPHA; }
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3DTextureFormat */ 
