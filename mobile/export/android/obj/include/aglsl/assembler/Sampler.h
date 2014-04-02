#ifndef INCLUDED_aglsl_assembler_Sampler
#define INCLUDED_aglsl_assembler_Sampler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,Sampler)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  Sampler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sampler_obj OBJ_;
		Sampler_obj();
		Void __construct(int shift,int mask,int value);

	public:
		static hx::ObjectPtr< Sampler_obj > __new(int shift,int mask,int value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sampler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sampler"); }

		int value;
		int mask;
		int shift;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_Sampler */ 
