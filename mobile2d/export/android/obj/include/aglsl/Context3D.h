#ifndef INCLUDED_aglsl_Context3D
#define INCLUDED_aglsl_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Context3D)
HX_DECLARE_CLASS1(aglsl,Sampler)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Context3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3D"); }

		static bool enableErrorChecking;
		static Dynamic resources;
		static ::String driverInfo;
		static int maxvertexconstants;
		static int maxfragconstants;
		static int maxtemp;
		static int maxstreams;
		static int maxtextures;
		static ::aglsl::Sampler defaultsampler;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Context3D */ 
