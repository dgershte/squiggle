#ifndef INCLUDED_away3d_materials_methods_FogMethod
#define INCLUDED_away3d_materials_methods_FogMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/EffectMethodBase.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,FogMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  FogMethod_obj : public ::away3d::materials::methods::EffectMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::EffectMethodBase_obj super;
		typedef FogMethod_obj OBJ_;
		FogMethod_obj();
		Void __construct(Float minDistance,Float maxDistance,hx::Null< int >  __o_fogColor);

	public:
		static hx::ObjectPtr< FogMethod_obj > __new(Float minDistance,Float maxDistance,hx::Null< int >  __o_fogColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FogMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FogMethod"); }

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual int set_fogColor( int value);
		Dynamic set_fogColor_dyn();

		virtual int get_fogColor( );
		Dynamic get_fogColor_dyn();

		virtual Float set_maxDistance( Float value);
		Dynamic set_maxDistance_dyn();

		virtual Float get_maxDistance( );
		Dynamic get_maxDistance_dyn();

		virtual Float set_minDistance( Float value);
		Dynamic set_minDistance_dyn();

		virtual Float get_minDistance( );
		Dynamic get_minDistance_dyn();

		virtual Void initConstants( ::away3d::materials::methods::MethodVO vo);

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);

		Float _fogB;
		Float _fogG;
		Float _fogR;
		int _fogColor;
		Float _maxDistance;
		Float _minDistance;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_FogMethod */ 
