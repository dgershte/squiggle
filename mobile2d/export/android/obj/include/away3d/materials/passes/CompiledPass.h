#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#define INCLUDED_away3d_materials_passes_CompiledPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/passes/MaterialPassBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  CompiledPass_obj : public ::away3d::materials::passes::MaterialPassBase_obj{
	public:
		typedef ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef CompiledPass_obj OBJ_;
		CompiledPass_obj();
		Void __construct(::away3d::materials::MaterialBase material);

	public:
		static hx::ObjectPtr< CompiledPass_obj > __new(::away3d::materials::MaterialBase material);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CompiledPass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CompiledPass"); }

		virtual int set_diffuseLightSources( int value);
		Dynamic set_diffuseLightSources_dyn();

		virtual int get_diffuseLightSources( );
		Dynamic get_diffuseLightSources_dyn();

		virtual int set_specularLightSources( int value);
		Dynamic set_specularLightSources_dyn();

		virtual int get_specularLightSources( );
		Dynamic get_specularLightSources_dyn();

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual bool usesLights( );
		Dynamic usesLights_dyn();

		virtual bool usesProbes( );
		Dynamic usesProbes_dyn();

		virtual Void render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual ::String getFragmentCode( ::String animatorCode);

		virtual ::String getVertexCode( );

		virtual Void onShaderInvalidated( ::away3d::events::ShadingMethodEvent event);
		Dynamic onShaderInvalidated_dyn();

		virtual Void updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic updateProbes_dyn();

		virtual Void updateLightConstants( );
		Dynamic updateLightConstants_dyn();

		virtual Void updateMethodConstants( );
		Dynamic updateMethodConstants_dyn();

		virtual Void cleanUp( );
		Dynamic cleanUp_dyn();

		virtual Void initCommonsData( );
		Dynamic initCommonsData_dyn();

		virtual Void initUVTransformData( );
		Dynamic initUVTransformData_dyn();

		virtual Void addPasses( Array< ::Dynamic > passes);
		Dynamic addPasses_dyn();

		virtual Void addPassesFromMethods( );
		Dynamic addPassesFromMethods_dyn();

		virtual Void invalidateShaderProgram( hx::Null< bool >  updateMaterial);

		virtual Void dispose( );

		virtual Void init( );
		Dynamic init_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		Dynamic set_specularMethod_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod get_specularMethod( );
		Dynamic get_specularMethod_dyn();

		virtual ::away3d::materials::methods::BasicDiffuseMethod set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value);
		Dynamic set_diffuseMethod_dyn();

		virtual ::away3d::materials::methods::BasicDiffuseMethod get_diffuseMethod( );
		Dynamic get_diffuseMethod_dyn();

		virtual ::away3d::materials::methods::ShadowMapMethodBase set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value);
		Dynamic set_shadowMethod_dyn();

		virtual ::away3d::materials::methods::ShadowMapMethodBase get_shadowMethod( );
		Dynamic get_shadowMethod_dyn();

		virtual ::away3d::materials::methods::BasicAmbientMethod set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value);
		Dynamic set_ambientMethod_dyn();

		virtual ::away3d::materials::methods::BasicAmbientMethod get_ambientMethod( );
		Dynamic get_ambientMethod_dyn();

		virtual ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		Dynamic set_normalMethod_dyn();

		virtual ::away3d::materials::methods::BasicNormalMethod get_normalMethod( );
		Dynamic get_normalMethod_dyn();

		virtual ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		Dynamic set_normalMap_dyn();

		virtual ::away3d::textures::Texture2DBase get_normalMap( );
		Dynamic get_normalMap_dyn();

		virtual bool set_mipmap( bool value);

		virtual bool set_animateUVs( bool value);
		Dynamic set_animateUVs_dyn();

		virtual bool get_animateUVs( );
		Dynamic get_animateUVs_dyn();

		virtual bool set_preserveAlpha( bool value);
		Dynamic set_preserveAlpha_dyn();

		virtual bool get_preserveAlpha( );
		Dynamic get_preserveAlpha_dyn();

		virtual Void updateRegisterIndices( );
		Dynamic updateRegisterIndices_dyn();

		virtual Void updateShaderProperties( );
		Dynamic updateShaderProperties_dyn();

		virtual ::away3d::materials::compilation::ShaderCompiler createCompiler( ::String profile);
		Dynamic createCompiler_dyn();

		virtual Void initCompiler( ::String profile);
		Dynamic initCompiler_dyn();

		virtual Void initConstantData( );
		Dynamic initConstantData_dyn();

		virtual Void updateUsedOffsets( );
		Dynamic updateUsedOffsets_dyn();

		virtual Void reset( ::String profile);
		Dynamic reset_dyn();

		virtual Void updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual int get_numLightProbes( );
		Dynamic get_numLightProbes_dyn();

		virtual int get_numDirectionalLights( );
		Dynamic get_numDirectionalLights_dyn();

		virtual int get_numPointLights( );
		Dynamic get_numPointLights_dyn();

		virtual bool set_forceSeparateMVP( bool value);
		Dynamic set_forceSeparateMVP_dyn();

		virtual bool get_forceSeparateMVP( );
		Dynamic get_forceSeparateMVP_dyn();

		virtual bool set_enableLightFallOff( bool value);
		Dynamic set_enableLightFallOff_dyn();

		virtual bool get_enableLightFallOff( );
		Dynamic get_enableLightFallOff_dyn();

		bool _forceSeparateMVP;
		bool _enableLightFallOff;
		int _numLightProbes;
		int _numDirectionalLights;
		int _numPointLights;
		bool _animateUVs;
		bool _preserveAlpha;
		bool _usesNormals;
		bool _usingSpecularMethod;
		::away3d::materials::methods::ShaderMethodSetup _methodSetup;
		::away3d::materials::compilation::ShaderCompiler _compiler;
		Float _ambientLightB;
		Float _ambientLightG;
		Float _ambientLightR;
		Array< int > _lightProbeSpecularIndices;
		Array< int > _lightProbeDiffuseIndices;
		int _uvTransformIndex;
		int _cameraPositionIndex;
		int _lightFragmentConstantIndex;
		int _sceneNormalMatrixIndex;
		int _sceneMatrixIndex;
		int _tangentBufferIndex;
		int _normalBufferIndex;
		int _secondaryUVBufferIndex;
		int _uvBufferIndex;
		int _probeWeightsIndex;
		int _commonsDataIndex;
		Array< Float > _fragmentConstantData;
		Array< Float > _vertexConstantData;
		::String _framentPostLightCode;
		::String _fragmentLightCode;
		::String _vertexCode;
		int _diffuseLightSources;
		int _specularLightSources;
		bool _passesDirty;
		Array< ::Dynamic > _passes;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_CompiledPass */ 
