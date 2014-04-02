#ifndef INCLUDED_aglsl_assembler_Opcode
#define INCLUDED_aglsl_assembler_Opcode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,FS)
HX_DECLARE_CLASS2(aglsl,assembler,Flags)
HX_DECLARE_CLASS2(aglsl,assembler,Opcode)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  Opcode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Opcode_obj OBJ_;
		Opcode_obj();
		Void __construct(::String dest,::String aformat,int asize,::String bformat,int bsize,int opcode,bool simple,Dynamic __o_horizontal,Dynamic __o_fragonly,Dynamic __o_matrix);

	public:
		static hx::ObjectPtr< Opcode_obj > __new(::String dest,::String aformat,int asize,::String bformat,int bsize,int opcode,bool simple,Dynamic __o_horizontal,Dynamic __o_fragonly,Dynamic __o_matrix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Opcode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Opcode"); }

		::aglsl::assembler::Flags flags;
		int opcode;
		::aglsl::assembler::FS b;
		::aglsl::assembler::FS a;
		::String dest;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_Opcode */ 
