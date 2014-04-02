#ifndef INCLUDED_flash_display3D_Context3DProgramType
#define INCLUDED_flash_display3D_Context3DProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DProgramType)
namespace flash{
namespace display3D{


class Context3DProgramType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DProgramType_obj OBJ_;

	public:
		Context3DProgramType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flash.display3D.Context3DProgramType"); }
		::String __ToString() const { return HX_CSTRING("Context3DProgramType.") + tag; }

		static ::flash::display3D::Context3DProgramType FRAGMENT;
		static inline ::flash::display3D::Context3DProgramType FRAGMENT_dyn() { return FRAGMENT; }
		static ::flash::display3D::Context3DProgramType VERTEX;
		static inline ::flash::display3D::Context3DProgramType VERTEX_dyn() { return VERTEX; }
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3DProgramType */ 
