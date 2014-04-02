#ifndef INCLUDED_away3d_entities_SegRef
#define INCLUDED_away3d_entities_SegRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,entities,SegRef)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  SegRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SegRef_obj OBJ_;
		SegRef_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SegRef_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SegRef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SegRef"); }

		::away3d::primitives::data::Segment segment;
		int subSetIndex;
		int index;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SegRef */ 
