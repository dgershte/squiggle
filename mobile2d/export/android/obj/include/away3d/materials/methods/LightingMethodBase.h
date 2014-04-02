#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#define INCLUDED_away3d_materials_methods_LightingMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/ShadingMethodBase.h>
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  LightingMethodBase_obj : public ::away3d::materials::methods::ShadingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef LightingMethodBase_obj OBJ_;
		LightingMethodBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LightingMethodBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightingMethodBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightingMethodBase"); }

		virtual ::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);
		Dynamic getFragmentPostLightingCode_dyn();

		virtual ::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache);
		Dynamic getFragmentCodePerProbe_dyn();

		virtual ::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache);
		Dynamic getFragmentCodePerLight_dyn();

		virtual ::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache);
		Dynamic getFragmentPreLightingCode_dyn();

		Dynamic _modulateMethod;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_LightingMethodBase */ 
