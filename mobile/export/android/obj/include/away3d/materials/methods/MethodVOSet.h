#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#define INCLUDED_away3d_materials_methods_MethodVOSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVOSet)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  MethodVOSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MethodVOSet_obj OBJ_;
		MethodVOSet_obj();
		Void __construct(::away3d::materials::methods::EffectMethodBase method);

	public:
		static hx::ObjectPtr< MethodVOSet_obj > __new(::away3d::materials::methods::EffectMethodBase method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MethodVOSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MethodVOSet"); }

		::away3d::materials::methods::MethodVO data;
		::away3d::materials::methods::EffectMethodBase method;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_MethodVOSet */ 
