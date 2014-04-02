#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#define INCLUDED_away3d_materials_methods_ShadowMapMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/ShadingMethodBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  ShadowMapMethodBase_obj : public ::away3d::materials::methods::ShadingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef ShadowMapMethodBase_obj OBJ_;
		ShadowMapMethodBase_obj();
		Void __construct(::away3d::lights::LightBase castingLight);

	public:
		static hx::ObjectPtr< ShadowMapMethodBase_obj > __new(::away3d::lights::LightBase castingLight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShadowMapMethodBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< ShadowMapMethodBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< ShadowMapMethodBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ShadowMapMethodBase"); }

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);
		Dynamic getFragmentCode_dyn();

		virtual Float set_epsilon( Float value);
		Dynamic set_epsilon_dyn();

		virtual Float get_epsilon( );
		Dynamic get_epsilon_dyn();

		virtual ::away3d::lights::LightBase get_castingLight( );
		Dynamic get_castingLight_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		Float _alpha;
		Float _epsilon;
		::away3d::lights::shadowmaps::ShadowMapperBase _shadowMapper;
		::away3d::lights::LightBase _castingLight;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShadowMapMethodBase */ 
