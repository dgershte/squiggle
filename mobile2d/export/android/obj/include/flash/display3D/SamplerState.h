#ifndef INCLUDED_flash_display3D_SamplerState
#define INCLUDED_flash_display3D_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DMipFilter)
HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFilter)
HX_DECLARE_CLASS2(flash,display3D,Context3DWrapMode)
HX_DECLARE_CLASS2(flash,display3D,SamplerState)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  SamplerState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SamplerState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SamplerState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SamplerState"); }

		::flash::display3D::Context3DMipFilter mipfilter;
		::flash::display3D::Context3DTextureFilter filter;
		::flash::display3D::Context3DWrapMode wrap;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_SamplerState */ 
