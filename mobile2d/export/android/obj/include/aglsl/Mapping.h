#ifndef INCLUDED_aglsl_Mapping
#define INCLUDED_aglsl_Mapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Mapping)
HX_DECLARE_CLASS1(aglsl,OpLUT)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Mapping_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mapping_obj OBJ_;
		Mapping_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mapping_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mapping_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mapping"); }

		static Array< ::Dynamic > _agal2glsllut;
		static Array< ::Dynamic > get_agal2glsllut( );
		static Dynamic get_agal2glsllut_dyn();

};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Mapping */ 
