#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#define INCLUDED_away3d_materials_methods_ColorTransformMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/EffectMethodBase.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  ColorTransformMethod_obj : public ::away3d::materials::methods::EffectMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::EffectMethodBase_obj super;
		typedef ColorTransformMethod_obj OBJ_;
		ColorTransformMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ColorTransformMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorTransformMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorTransformMethod"); }

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);

		virtual ::flash::geom::ColorTransform set_colorTransform( ::flash::geom::ColorTransform value);
		Dynamic set_colorTransform_dyn();

		virtual ::flash::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		::flash::geom::ColorTransform _colorTransform;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ColorTransformMethod */ 
