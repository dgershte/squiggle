#ifndef INCLUDED_aglsl_AGLSLParser
#define INCLUDED_aglsl_AGLSLParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,AGLSLParser)
HX_DECLARE_CLASS1(aglsl,Description)
HX_DECLARE_CLASS1(aglsl,Destination)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  AGLSLParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGLSLParser_obj OBJ_;
		AGLSLParser_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGLSLParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGLSLParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGLSLParser"); }

		virtual ::String sourcetostring( ::aglsl::Destination s,int subline,int dwm,bool isscalar,Dynamic desc,::String tag);
		Dynamic sourcetostring_dyn();

		virtual ::String regtostring( int regtype,int regnum,Dynamic desc,::String tag);
		Dynamic regtostring_dyn();

		virtual ::String parse( ::aglsl::Description desc);
		Dynamic parse_dyn();

};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_AGLSLParser */ 
