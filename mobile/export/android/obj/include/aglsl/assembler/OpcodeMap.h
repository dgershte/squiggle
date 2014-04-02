#ifndef INCLUDED_aglsl_assembler_OpcodeMap
#define INCLUDED_aglsl_assembler_OpcodeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(aglsl,assembler,OpcodeMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  OpcodeMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpcodeMap_obj OBJ_;
		OpcodeMap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OpcodeMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpcodeMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpcodeMap"); }

		static ::haxe::ds::StringMap _map;
		static ::haxe::ds::StringMap get_map( );
		static Dynamic get_map_dyn();

};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_OpcodeMap */ 
