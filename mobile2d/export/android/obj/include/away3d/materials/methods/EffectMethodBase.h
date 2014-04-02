#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#define INCLUDED_away3d_materials_methods_EffectMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/ShadingMethodBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  EffectMethodBase_obj : public ::away3d::materials::methods::ShadingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef EffectMethodBase_obj OBJ_;
		EffectMethodBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EffectMethodBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EffectMethodBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< EffectMethodBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< EffectMethodBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("EffectMethodBase"); }

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);
		Dynamic getFragmentCode_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_EffectMethodBase */ 