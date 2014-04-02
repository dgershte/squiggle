#ifndef INCLUDED_away3d_materials_ColorMaterial
#define INCLUDED_away3d_materials_ColorMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/SinglePassMaterialBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,ColorMaterial)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  ColorMaterial_obj : public ::away3d::materials::SinglePassMaterialBase_obj{
	public:
		typedef ::away3d::materials::SinglePassMaterialBase_obj super;
		typedef ColorMaterial_obj OBJ_;
		ColorMaterial_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha);

	public:
		static hx::ObjectPtr< ColorMaterial_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorMaterial"); }

		virtual bool get_requiresBlending( );

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		Float _diffuseAlpha;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_ColorMaterial */ 
