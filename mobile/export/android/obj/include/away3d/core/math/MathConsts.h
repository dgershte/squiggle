#ifndef INCLUDED_away3d_core_math_MathConsts
#define INCLUDED_away3d_core_math_MathConsts

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,MathConsts)
namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  MathConsts_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MathConsts_obj OBJ_;
		MathConsts_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MathConsts_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MathConsts_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MathConsts"); }

		static Float RADIANS_TO_DEGREES;
		static Float DEGREES_TO_RADIANS;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_MathConsts */ 
