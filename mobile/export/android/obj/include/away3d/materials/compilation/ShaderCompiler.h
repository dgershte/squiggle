#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#define INCLUDED_away3d_materials_compilation_ShaderCompiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,MethodDependencyCounter)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  ShaderCompiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderCompiler_obj OBJ_;
		ShaderCompiler_obj();
		Void __construct(::String profile);

	public:
		static hx::ObjectPtr< ShaderCompiler_obj > __new(::String profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderCompiler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderCompiler"); }

		virtual Array< int > get_lightProbeSpecularIndices( );
		Dynamic get_lightProbeSpecularIndices_dyn();

		virtual Array< int > get_lightProbeDiffuseIndices( );
		Dynamic get_lightProbeDiffuseIndices_dyn();

		virtual Void compileMethods( );
		Dynamic compileMethods_dyn();

		virtual bool usesLights( );
		Dynamic usesLights_dyn();

		virtual bool get_usesNormals( );
		Dynamic get_usesNormals_dyn();

		virtual Array< ::String > get_animationTargetRegisters( );
		Dynamic get_animationTargetRegisters_dyn();

		virtual Array< ::String > get_animatableAttributes( );
		Dynamic get_animatableAttributes_dyn();

		virtual bool get_usingSpecularMethod( );
		Dynamic get_usingSpecularMethod_dyn();

		virtual int set_numLightProbes( int value);
		Dynamic set_numLightProbes_dyn();

		virtual int get_numLightProbes( );
		Dynamic get_numLightProbes_dyn();

		virtual int set_numDirectionalLights( int value);
		Dynamic set_numDirectionalLights_dyn();

		virtual int get_numDirectionalLights( );
		Dynamic get_numDirectionalLights_dyn();

		virtual int set_numPointLights( int numPointLights);
		Dynamic set_numPointLights_dyn();

		virtual int get_numPointLights( );
		Dynamic get_numPointLights_dyn();

		virtual ::String get_shadedTarget( );
		Dynamic get_shadedTarget_dyn();

		virtual ::String get_fragmentPostLightCode( );
		Dynamic get_fragmentPostLightCode_dyn();

		virtual ::String get_fragmentLightCode( );
		Dynamic get_fragmentLightCode_dyn();

		virtual ::String get_fragmentCode( );
		Dynamic get_fragmentCode_dyn();

		virtual ::String get_vertexCode( );
		Dynamic get_vertexCode_dyn();

		virtual int get_probeWeightsIndex( );
		Dynamic get_probeWeightsIndex_dyn();

		virtual int get_sceneNormalMatrixIndex( );
		Dynamic get_sceneNormalMatrixIndex_dyn();

		virtual int get_sceneMatrixIndex( );
		Dynamic get_sceneMatrixIndex_dyn();

		virtual int get_cameraPositionIndex( );
		Dynamic get_cameraPositionIndex_dyn();

		virtual int get_lightFragmentConstantIndex( );
		Dynamic get_lightFragmentConstantIndex_dyn();

		virtual int get_tangentBufferIndex( );
		Dynamic get_tangentBufferIndex_dyn();

		virtual int get_normalBufferIndex( );
		Dynamic get_normalBufferIndex_dyn();

		virtual int get_secondaryUVBufferIndex( );
		Dynamic get_secondaryUVBufferIndex_dyn();

		virtual int get_uvTransformIndex( );
		Dynamic get_uvTransformIndex_dyn();

		virtual int get_uvBufferIndex( );
		Dynamic get_uvBufferIndex_dyn();

		virtual bool usesProbes( );
		Dynamic usesProbes_dyn();

		virtual bool usesProbesForDiffuse( );
		Dynamic usesProbesForDiffuse_dyn();

		virtual bool usesProbesForSpecular( );
		Dynamic usesProbesForSpecular_dyn();

		virtual int set_diffuseLightSources( int value);
		Dynamic set_diffuseLightSources_dyn();

		virtual int get_diffuseLightSources( );
		Dynamic get_diffuseLightSources_dyn();

		virtual int set_specularLightSources( int value);
		Dynamic set_specularLightSources_dyn();

		virtual int get_specularLightSources( );
		Dynamic get_specularLightSources_dyn();

		virtual Void cleanUpMethods( );
		Dynamic cleanUpMethods_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual bool usesLightsForDiffuse( );
		Dynamic usesLightsForDiffuse_dyn();

		virtual bool usesLightsForSpecular( );
		Dynamic usesLightsForSpecular_dyn();

		virtual int get_numUsedVaryings( );
		Dynamic get_numUsedVaryings_dyn();

		virtual int get_numUsedTextures( );
		Dynamic get_numUsedTextures_dyn();

		virtual int get_numUsedStreams( );
		Dynamic get_numUsedStreams_dyn();

		virtual int get_numUsedFragmentConstants( );
		Dynamic get_numUsedFragmentConstants_dyn();

		virtual int get_numUsedVertexConstants( );
		Dynamic get_numUsedVertexConstants_dyn();

		virtual Void updateMethodRegisters( );
		Dynamic updateMethodRegisters_dyn();

		virtual int get_commonsDataIndex( );
		Dynamic get_commonsDataIndex_dyn();

		virtual Void setupMethod( ::away3d::materials::methods::ShadingMethodBase method,::away3d::materials::methods::MethodVO methodVO);
		Dynamic setupMethod_dyn();

		virtual Void setupAndCountMethodDependencies( ::away3d::materials::methods::ShadingMethodBase method,::away3d::materials::methods::MethodVO methodVO);
		Dynamic setupAndCountMethodDependencies_dyn();

		virtual Void calculateDependencies( );
		Dynamic calculateDependencies_dyn();

		virtual Void createCommons( );
		Dynamic createCommons_dyn();

		virtual Void initLightData( );
		Dynamic initLightData_dyn();

		virtual Void initRegisterIndices( );
		Dynamic initRegisterIndices_dyn();

		virtual Void compileFragmentOutput( );
		Dynamic compileFragmentOutput_dyn();

		virtual Void compileProjectionCode( );
		Dynamic compileProjectionCode_dyn();

		virtual Void compileGlobalPositionCode( );
		Dynamic compileGlobalPositionCode_dyn();

		virtual Void compileSecondaryUVCode( );
		Dynamic compileSecondaryUVCode_dyn();

		virtual Void compileUVCode( );
		Dynamic compileUVCode_dyn();

		virtual Void compileNormalCode( );
		Dynamic compileNormalCode_dyn();

		virtual Void compileViewDirCode( );
		Dynamic compileViewDirCode_dyn();

		virtual Void compileLightingCode( );
		Dynamic compileLightingCode_dyn();

		virtual Void compileMethodsCode( );
		Dynamic compileMethodsCode_dyn();

		virtual Void createNormalRegisters( );
		Dynamic createNormalRegisters_dyn();

		virtual Void compile( );
		Dynamic compile_dyn();

		virtual ::away3d::materials::methods::ShaderMethodSetup set_methodSetup( ::away3d::materials::methods::ShaderMethodSetup value);
		Dynamic set_methodSetup_dyn();

		virtual ::away3d::materials::methods::ShaderMethodSetup get_methodSetup( );
		Dynamic get_methodSetup_dyn();

		virtual Void setConstantDataBuffers( Array< Float > vertexConstantData,Array< Float > fragmentConstantData);
		Dynamic setConstantDataBuffers_dyn();

		virtual Void setTextureSampling( bool smooth,bool repeat,bool mipmap);
		Dynamic setTextureSampling_dyn();

		virtual bool set_preserveAlpha( bool value);
		Dynamic set_preserveAlpha_dyn();

		virtual bool get_preserveAlpha( );
		Dynamic get_preserveAlpha_dyn();

		virtual bool set_alphaPremultiplied( bool value);
		Dynamic set_alphaPremultiplied_dyn();

		virtual bool get_alphaPremultiplied( );
		Dynamic get_alphaPremultiplied_dyn();

		virtual bool set_animateUVs( bool value);
		Dynamic set_animateUVs_dyn();

		virtual bool get_animateUVs( );
		Dynamic get_animateUVs_dyn();

		virtual Void initRegisterCache( ::String profile);
		Dynamic initRegisterCache_dyn();

		virtual bool set_forceSeperateMVP( bool value);
		Dynamic set_forceSeperateMVP_dyn();

		virtual bool get_forceSeperateMVP( );
		Dynamic get_forceSeperateMVP_dyn();

		virtual ::String get_UVSource( );
		Dynamic get_UVSource_dyn();

		virtual ::String get_UVTarget( );
		Dynamic get_UVTarget_dyn();

		virtual bool get_needUVAnimation( );
		Dynamic get_needUVAnimation_dyn();

		virtual bool set_enableLightFallOff( bool value);
		Dynamic set_enableLightFallOff_dyn();

		virtual bool get_enableLightFallOff( );
		Dynamic get_enableLightFallOff_dyn();

		bool _forceSeperateMVP;
		::String _profile;
		::String _UVSource;
		::String _UVTarget;
		bool _needUVAnimation;
		bool _usingSpecularMethod;
		int _combinedLightSources;
		Float _numProbeRegisters;
		int _numDirectionalLights;
		int _numPointLights;
		int _numLightProbes;
		int _numLights;
		int _diffuseLightSources;
		int _specularLightSources;
		int _probeWeightsIndex;
		int _cameraPositionIndex;
		int _sceneNormalMatrixIndex;
		int _sceneMatrixIndex;
		int _lightFragmentConstantIndex;
		int _tangentBufferIndex;
		int _normalBufferIndex;
		int _secondaryUVBufferIndex;
		int _uvTransformIndex;
		int _uvBufferIndex;
		Array< int > _lightProbeSpecularIndices;
		Array< int > _lightProbeDiffuseIndices;
		Array< ::String > _animationTargetRegisters;
		Array< ::String > _animatableAttributes;
		int _commonsDataIndex;
		::String _fragmentPostLightCode;
		::String _fragmentLightCode;
		::String _fragmentCode;
		::String _vertexCode;
		Array< Float > _fragmentConstantData;
		Array< Float > _vertexConstantData;
		bool _alphaPremultiplied;
		bool _animateUVs;
		bool _preserveAlpha;
		bool _enableLightFallOff;
		bool _mipmap;
		bool _repeat;
		bool _smooth;
		::away3d::materials::methods::ShaderMethodSetup _methodSetup;
		::away3d::materials::compilation::MethodDependencyCounter _dependencyCounter;
		::away3d::materials::compilation::ShaderRegisterCache _registerCache;
		::away3d::materials::compilation::ShaderRegisterData _sharedRegisters;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderCompiler */ 
