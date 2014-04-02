#ifndef INCLUDED_aglsl_assembler_RegMap
#define INCLUDED_aglsl_assembler_RegMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(aglsl,assembler,RegMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  RegMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RegMap_obj OBJ_;
		RegMap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RegMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RegMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RegMap"); }

		static ::haxe::ds::StringMap _map;
		static ::haxe::ds::StringMap get_map( );
		static Dynamic get_map_dyn();

};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_RegMap */ 
