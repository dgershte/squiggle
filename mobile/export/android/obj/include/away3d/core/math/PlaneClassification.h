#ifndef INCLUDED_away3d_core_math_PlaneClassification
#define INCLUDED_away3d_core_math_PlaneClassification

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,PlaneClassification)
namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  PlaneClassification_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlaneClassification_obj OBJ_;
		PlaneClassification_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PlaneClassification_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlaneClassification_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlaneClassification"); }

		static int BACK;
		static int FRONT;
		static int IN;
		static int OUT;
		static int INTERSECT;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_PlaneClassification */ 
