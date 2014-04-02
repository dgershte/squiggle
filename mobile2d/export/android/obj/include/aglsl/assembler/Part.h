#ifndef INCLUDED_aglsl_assembler_Part
#define INCLUDED_aglsl_assembler_Part

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,Part)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  Part_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Part_obj OBJ_;
		Part_obj();
		Void __construct(::String __o_name,hx::Null< int >  __o_version);

	public:
		static hx::ObjectPtr< Part_obj > __new(::String __o_name,hx::Null< int >  __o_version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Part_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Part"); }

		::flash::utils::ByteArray data;
		int version;
		::String name;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_Part */ 
