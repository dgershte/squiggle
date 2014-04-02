#ifndef INCLUDED_aglsl_Description
#define INCLUDED_aglsl_Description

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Description)
HX_DECLARE_CLASS1(aglsl,Header)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Description_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Description_obj OBJ_;
		Description_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Description_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Description_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Description"); }

		::aglsl::Header header;
		Dynamic tokens;
		Dynamic samplers;
		bool hasmatrix;
		bool writedepth;
		bool hasindirect;
		Dynamic regwrite;
		Dynamic regread;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Description */ 
