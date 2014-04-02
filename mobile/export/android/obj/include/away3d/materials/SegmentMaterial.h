#ifndef INCLUDED_away3d_materials_SegmentMaterial
#define INCLUDED_away3d_materials_SegmentMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/MaterialBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SegmentMaterial)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SegmentPass)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  SegmentMaterial_obj : public ::away3d::materials::MaterialBase_obj{
	public:
		typedef ::away3d::materials::MaterialBase_obj super;
		typedef SegmentMaterial_obj OBJ_;
		SegmentMaterial_obj();
		Void __construct(hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< SegmentMaterial_obj > __new(hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SegmentMaterial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SegmentMaterial"); }

		::away3d::materials::passes::SegmentPass _screenPass;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_SegmentMaterial */ 
