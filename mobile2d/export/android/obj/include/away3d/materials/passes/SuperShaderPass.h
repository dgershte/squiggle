#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#define INCLUDED_away3d_materials_passes_SuperShaderPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/passes/CompiledPass.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SuperShaderPass)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  SuperShaderPass_obj : public ::away3d::materials::passes::CompiledPass_obj{
	public:
		typedef ::away3d::materials::passes::CompiledPass_obj super;
		typedef SuperShaderPass_obj OBJ_;
		SuperShaderPass_obj();
		Void __construct(::away3d::materials::MaterialBase material);

	public:
		static hx::ObjectPtr< SuperShaderPass_obj > __new(::away3d::materials::MaterialBase material);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SuperShaderPass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SuperShaderPass"); }

		virtual bool set_ignoreLights( bool ignoreLights);
		Dynamic set_ignoreLights_dyn();

		virtual bool get_ignoreLights( );
		Dynamic get_ignoreLights_dyn();

		virtual Void updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual Void updateLightConstants( );

		virtual Void updateMethodConstants( );

		virtual bool usesProbesForDiffuse( );
		Dynamic usesProbesForDiffuse_dyn();

		virtual bool usesProbesForSpecular( );
		Dynamic usesProbesForSpecular_dyn();

		virtual Void addPassesFromMethods( );

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual Void updateLights( );

		virtual Void removeMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic removeMethod_dyn();

		virtual Void addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index);
		Dynamic addMethodAt_dyn();

		virtual ::away3d::materials::methods::EffectMethodBase getMethodAt( int index);
		Dynamic getMethodAt_dyn();

		virtual bool hasMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic hasMethod_dyn();

		virtual int get_numMethods( );
		Dynamic get_numMethods_dyn();

		int numMethods;
		virtual Void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic addMethod_dyn();

		virtual ::away3d::materials::methods::ColorTransformMethod set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value);
		Dynamic set_colorTransformMethod_dyn();

		virtual ::away3d::materials::methods::ColorTransformMethod get_colorTransformMethod( );
		Dynamic get_colorTransformMethod_dyn();

		virtual ::flash::geom::ColorTransform set_colorTransform( ::flash::geom::ColorTransform value);
		Dynamic set_colorTransform_dyn();

		virtual ::flash::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual bool set_includeCasters( bool value);
		Dynamic set_includeCasters_dyn();

		virtual bool get_includeCasters( );
		Dynamic get_includeCasters_dyn();

		virtual ::away3d::materials::compilation::ShaderCompiler createCompiler( ::String profile);

		bool _ignoreLights;
		bool _includeCasters;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SuperShaderPass */ 
