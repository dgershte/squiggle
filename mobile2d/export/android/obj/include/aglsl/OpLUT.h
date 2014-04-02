#ifndef INCLUDED_aglsl_OpLUT
#define INCLUDED_aglsl_OpLUT

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,OpLUT)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  OpLUT_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpLUT_obj OBJ_;
		OpLUT_obj();
		Void __construct(::String s,Dynamic __o_flags,Dynamic __o_dest,Dynamic __o_a,Dynamic __o_b,Dynamic __o_matrixwidth,Dynamic __o_matrixheight,Dynamic __o_ndwm,Dynamic __o_scaler,Dynamic __o_dm,Dynamic __o_lod);

	public:
		static hx::ObjectPtr< OpLUT_obj > __new(::String s,Dynamic __o_flags,Dynamic __o_dest,Dynamic __o_a,Dynamic __o_b,Dynamic __o_matrixwidth,Dynamic __o_matrixheight,Dynamic __o_ndwm,Dynamic __o_scaler,Dynamic __o_dm,Dynamic __o_lod);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpLUT_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpLUT"); }

		bool lod;
		bool dm;
		bool scalar;
		bool ndwm;
		int matrixheight;
		int matrixwidth;
		bool b;
		bool a;
		bool dest;
		int flags;
		::String s;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_OpLUT */ 
