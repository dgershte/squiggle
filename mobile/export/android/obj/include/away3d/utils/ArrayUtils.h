#ifndef INCLUDED_away3d_utils_ArrayUtils
#define INCLUDED_away3d_utils_ArrayUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,utils,ArrayUtils)
namespace away3d{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ArrayUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayUtils_obj OBJ_;
		ArrayUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArrayUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrayUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrayUtils"); }

		static Dynamic reSize( Dynamic array,int count,Dynamic defaultValue);
		static Dynamic reSize_dyn();

		static Dynamic Prefill( Dynamic array,int count,Dynamic defaultValue);
		static Dynamic Prefill_dyn();

};

} // end namespace away3d
} // end namespace utils

#endif /* INCLUDED_away3d_utils_ArrayUtils */ 
