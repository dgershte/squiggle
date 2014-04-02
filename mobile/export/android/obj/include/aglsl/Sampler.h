#ifndef INCLUDED_aglsl_Sampler
#define INCLUDED_aglsl_Sampler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Sampler)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Sampler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sampler_obj OBJ_;
		Sampler_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Sampler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sampler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sampler"); }

		Float filter;
		Float mipmap;
		Float wrap;
		Float special;
		Float readmode;
		Float dim;
		Float lodbias;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Sampler */ 
