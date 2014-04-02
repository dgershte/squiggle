#ifndef INCLUDED_away3d_materials_LightSources
#define INCLUDED_away3d_materials_LightSources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,materials,LightSources)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  LightSources_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LightSources_obj OBJ_;
		LightSources_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LightSources_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightSources_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightSources"); }

		static int LIGHTS;
		static int PROBES;
		static int ALL;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_LightSources */ 
