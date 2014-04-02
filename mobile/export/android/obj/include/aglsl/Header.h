#ifndef INCLUDED_aglsl_Header
#define INCLUDED_aglsl_Header

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Header)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Header_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Header_obj OBJ_;
		Header_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Header_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Header_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Header"); }

		::String type;
		int version;
		int progid;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Header */ 
