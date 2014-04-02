#ifndef INCLUDED_aglsl_AGLSLCompiler
#define INCLUDED_aglsl_AGLSLCompiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,AGLSLCompiler)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  AGLSLCompiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGLSLCompiler_obj OBJ_;
		AGLSLCompiler_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGLSLCompiler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGLSLCompiler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGLSLCompiler"); }

		virtual ::String compile( ::String programType,::String source);
		Dynamic compile_dyn();

		::String glsl;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_AGLSLCompiler */ 
