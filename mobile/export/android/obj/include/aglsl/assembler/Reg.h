#ifndef INCLUDED_aglsl_assembler_Reg
#define INCLUDED_aglsl_assembler_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,Reg)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct(int code,::String desc);

	public:
		static hx::ObjectPtr< Reg_obj > __new(int code,::String desc);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Reg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Reg"); }

		::String desc;
		int code;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_Reg */ 
