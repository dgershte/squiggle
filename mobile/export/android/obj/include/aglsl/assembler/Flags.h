#ifndef INCLUDED_aglsl_assembler_Flags
#define INCLUDED_aglsl_assembler_Flags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,Flags)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  Flags_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Flags_obj OBJ_;
		Flags_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Flags_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Flags_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Flags"); }

		bool matrix;
		bool fragonly;
		bool horizontal;
		bool simple;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_Flags */ 
