#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_LightSources
#include <away3d/materials/LightSources.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#include <away3d/materials/compilation/MethodDependencyCounter.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#include <away3d/materials/methods/BasicNormalMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#include <away3d/materials/methods/BasicSpecularMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#include <away3d/materials/methods/ColorTransformMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#include <away3d/materials/methods/MethodVOSet.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShaderMethodSetup
#include <away3d/materials/methods/ShaderMethodSetup.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void ShaderCompiler_obj::__construct(::String profile)
{
HX_STACK_PUSH("ShaderCompiler::new","away3d/materials/compilation/ShaderCompiler.hx",112);
{
	HX_STACK_LINE(113)
	this->_preserveAlpha = true;
	HX_STACK_LINE(114)
	this->_commonsDataIndex = (int)-1;
	HX_STACK_LINE(115)
	this->_uvBufferIndex = (int)-1;
	HX_STACK_LINE(116)
	this->_uvTransformIndex = (int)-1;
	HX_STACK_LINE(117)
	this->_secondaryUVBufferIndex = (int)-1;
	HX_STACK_LINE(118)
	this->_normalBufferIndex = (int)-1;
	HX_STACK_LINE(119)
	this->_tangentBufferIndex = (int)-1;
	HX_STACK_LINE(120)
	this->_lightFragmentConstantIndex = (int)-1;
	HX_STACK_LINE(121)
	this->_sceneMatrixIndex = (int)-1;
	HX_STACK_LINE(122)
	this->_sceneNormalMatrixIndex = (int)-1;
	HX_STACK_LINE(123)
	this->_cameraPositionIndex = (int)-1;
	HX_STACK_LINE(124)
	this->_probeWeightsIndex = (int)-1;
	HX_STACK_LINE(125)
	this->_sharedRegisters = ::away3d::materials::compilation::ShaderRegisterData_obj::__new();
	HX_STACK_LINE(126)
	this->_dependencyCounter = ::away3d::materials::compilation::MethodDependencyCounter_obj::__new();
	HX_STACK_LINE(127)
	this->_profile = profile;
	HX_STACK_LINE(128)
	this->initRegisterCache(profile);
}
;
	return null();
}

ShaderCompiler_obj::~ShaderCompiler_obj() { }

Dynamic ShaderCompiler_obj::__CreateEmpty() { return  new ShaderCompiler_obj; }
hx::ObjectPtr< ShaderCompiler_obj > ShaderCompiler_obj::__new(::String profile)
{  hx::ObjectPtr< ShaderCompiler_obj > result = new ShaderCompiler_obj();
	result->__construct(profile);
	return result;}

Dynamic ShaderCompiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderCompiler_obj > result = new ShaderCompiler_obj();
	result->__construct(inArgs[0]);
	return result;}

Array< int > ShaderCompiler_obj::get_lightProbeSpecularIndices( ){
	HX_STACK_PUSH("ShaderCompiler::get_lightProbeSpecularIndices","away3d/materials/compilation/ShaderCompiler.hx",937);
	HX_STACK_THIS(this);
	HX_STACK_LINE(937)
	return this->_lightProbeSpecularIndices;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightProbeSpecularIndices,return )

Array< int > ShaderCompiler_obj::get_lightProbeDiffuseIndices( ){
	HX_STACK_PUSH("ShaderCompiler::get_lightProbeDiffuseIndices","away3d/materials/compilation/ShaderCompiler.hx",929);
	HX_STACK_THIS(this);
	HX_STACK_LINE(929)
	return this->_lightProbeDiffuseIndices;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightProbeDiffuseIndices,return )

Void ShaderCompiler_obj::compileMethods( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileMethods","away3d/materials/compilation/ShaderCompiler.hx",893);
		HX_STACK_THIS(this);
		HX_STACK_LINE(894)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(895)
		int numMethods = methods->length;		HX_STACK_VAR(numMethods,"numMethods");
		HX_STACK_LINE(896)
		::away3d::materials::methods::EffectMethodBase method;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(897)
		::away3d::materials::methods::MethodVO data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(898)
		::away3d::materials::compilation::ShaderRegisterElement alphaReg = null();		HX_STACK_VAR(alphaReg,"alphaReg");
		HX_STACK_LINE(899)
		if ((this->_preserveAlpha)){
			HX_STACK_LINE(900)
			alphaReg = this->_registerCache->getFreeFragmentSingleTemp();
			HX_STACK_LINE(901)
			this->_registerCache->addFragmentTempUsages(alphaReg,(int)1);
			HX_STACK_LINE(902)
			hx::AddEq(this->_fragmentCode,((((HX_CSTRING("mov ") + ::Std_obj::string(alphaReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w\n")));
		}
		HX_STACK_LINE(904)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(905)
		while(((i < numMethods))){
			HX_STACK_LINE(906)
			method = methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method;
			HX_STACK_LINE(907)
			data = methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->data;
			HX_STACK_LINE(908)
			hx::AddEq(this->_vertexCode,method->getVertexCode(data,this->_registerCache));
			HX_STACK_LINE(909)
			if (((bool(data->needsGlobalVertexPos) || bool(data->needsGlobalFragmentPos)))){
				HX_STACK_LINE(909)
				this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
			}
			HX_STACK_LINE(910)
			hx::AddEq(this->_fragmentCode,method->getFragmentCode(data,this->_registerCache,this->_sharedRegisters->shadedTarget));
			HX_STACK_LINE(911)
			if ((data->needsNormals)){
				HX_STACK_LINE(911)
				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
			}
			HX_STACK_LINE(912)
			if ((data->needsView)){
				HX_STACK_LINE(912)
				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
			}
			HX_STACK_LINE(913)
			++(i);
		}
		HX_STACK_LINE(915)
		if ((this->_preserveAlpha)){
			HX_STACK_LINE(916)
			hx::AddEq(this->_fragmentCode,((((HX_CSTRING("mov ") + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w, ")) + ::Std_obj::string(alphaReg)) + HX_CSTRING("\n")));
			HX_STACK_LINE(917)
			this->_registerCache->removeFragmentTempUsage(alphaReg);
		}
		HX_STACK_LINE(919)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(920)
			hx::AddEq(this->_vertexCode,this->_methodSetup->_colorTransformMethod->getVertexCode(this->_methodSetup->_colorTransformMethodVO,this->_registerCache));
			HX_STACK_LINE(921)
			hx::AddEq(this->_fragmentCode,this->_methodSetup->_colorTransformMethod->getFragmentCode(this->_methodSetup->_colorTransformMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileMethods,(void))

bool ShaderCompiler_obj::usesLights( ){
	HX_STACK_PUSH("ShaderCompiler::usesLights","away3d/materials/compilation/ShaderCompiler.hx",885);
	HX_STACK_THIS(this);
	HX_STACK_LINE(885)
	return (bool((this->_numLights > (int)0)) && bool((((int(this->_combinedLightSources) & int(::away3d::materials::LightSources_obj::LIGHTS))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLights,return )

bool ShaderCompiler_obj::get_usesNormals( ){
	HX_STACK_PUSH("ShaderCompiler::get_usesNormals","away3d/materials/compilation/ShaderCompiler.hx",877);
	HX_STACK_THIS(this);
	HX_STACK_LINE(877)
	return (bool((this->_dependencyCounter->get_normalDependencies() > (int)0)) && bool(this->_methodSetup->_normalMethod->get_hasOutput()));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_usesNormals,return )

Array< ::String > ShaderCompiler_obj::get_animationTargetRegisters( ){
	HX_STACK_PUSH("ShaderCompiler::get_animationTargetRegisters","away3d/materials/compilation/ShaderCompiler.hx",869);
	HX_STACK_THIS(this);
	HX_STACK_LINE(869)
	return this->_animationTargetRegisters;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animationTargetRegisters,return )

Array< ::String > ShaderCompiler_obj::get_animatableAttributes( ){
	HX_STACK_PUSH("ShaderCompiler::get_animatableAttributes","away3d/materials/compilation/ShaderCompiler.hx",861);
	HX_STACK_THIS(this);
	HX_STACK_LINE(861)
	return this->_animatableAttributes;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animatableAttributes,return )

bool ShaderCompiler_obj::get_usingSpecularMethod( ){
	HX_STACK_PUSH("ShaderCompiler::get_usingSpecularMethod","away3d/materials/compilation/ShaderCompiler.hx",853);
	HX_STACK_THIS(this);
	HX_STACK_LINE(853)
	return this->_usingSpecularMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_usingSpecularMethod,return )

int ShaderCompiler_obj::set_numLightProbes( int value){
	HX_STACK_PUSH("ShaderCompiler::set_numLightProbes","away3d/materials/compilation/ShaderCompiler.hx",844);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(845)
	this->_numLightProbes = value;
	HX_STACK_LINE(846)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numLightProbes,return )

int ShaderCompiler_obj::get_numLightProbes( ){
	HX_STACK_PUSH("ShaderCompiler::get_numLightProbes","away3d/materials/compilation/ShaderCompiler.hx",840);
	HX_STACK_THIS(this);
	HX_STACK_LINE(840)
	return this->_numLightProbes;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numLightProbes,return )

int ShaderCompiler_obj::set_numDirectionalLights( int value){
	HX_STACK_PUSH("ShaderCompiler::set_numDirectionalLights","away3d/materials/compilation/ShaderCompiler.hx",831);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(832)
	this->_numDirectionalLights = value;
	HX_STACK_LINE(833)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numDirectionalLights,return )

int ShaderCompiler_obj::get_numDirectionalLights( ){
	HX_STACK_PUSH("ShaderCompiler::get_numDirectionalLights","away3d/materials/compilation/ShaderCompiler.hx",827);
	HX_STACK_THIS(this);
	HX_STACK_LINE(827)
	return this->_numDirectionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numDirectionalLights,return )

int ShaderCompiler_obj::set_numPointLights( int numPointLights){
	HX_STACK_PUSH("ShaderCompiler::set_numPointLights","away3d/materials/compilation/ShaderCompiler.hx",818);
	HX_STACK_THIS(this);
	HX_STACK_ARG(numPointLights,"numPointLights");
	HX_STACK_LINE(819)
	this->_numPointLights = numPointLights;
	HX_STACK_LINE(820)
	return numPointLights;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_numPointLights,return )

int ShaderCompiler_obj::get_numPointLights( ){
	HX_STACK_PUSH("ShaderCompiler::get_numPointLights","away3d/materials/compilation/ShaderCompiler.hx",814);
	HX_STACK_THIS(this);
	HX_STACK_LINE(814)
	return this->_numPointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numPointLights,return )

::String ShaderCompiler_obj::get_shadedTarget( ){
	HX_STACK_PUSH("ShaderCompiler::get_shadedTarget","away3d/materials/compilation/ShaderCompiler.hx",806);
	HX_STACK_THIS(this);
	HX_STACK_LINE(806)
	return this->_sharedRegisters->shadedTarget->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_shadedTarget,return )

::String ShaderCompiler_obj::get_fragmentPostLightCode( ){
	HX_STACK_PUSH("ShaderCompiler::get_fragmentPostLightCode","away3d/materials/compilation/ShaderCompiler.hx",798);
	HX_STACK_THIS(this);
	HX_STACK_LINE(798)
	return this->_fragmentPostLightCode;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentPostLightCode,return )

::String ShaderCompiler_obj::get_fragmentLightCode( ){
	HX_STACK_PUSH("ShaderCompiler::get_fragmentLightCode","away3d/materials/compilation/ShaderCompiler.hx",790);
	HX_STACK_THIS(this);
	HX_STACK_LINE(790)
	return this->_fragmentLightCode;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentLightCode,return )

::String ShaderCompiler_obj::get_fragmentCode( ){
	HX_STACK_PUSH("ShaderCompiler::get_fragmentCode","away3d/materials/compilation/ShaderCompiler.hx",782);
	HX_STACK_THIS(this);
	HX_STACK_LINE(782)
	return this->_fragmentCode;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_fragmentCode,return )

::String ShaderCompiler_obj::get_vertexCode( ){
	HX_STACK_PUSH("ShaderCompiler::get_vertexCode","away3d/materials/compilation/ShaderCompiler.hx",774);
	HX_STACK_THIS(this);
	HX_STACK_LINE(774)
	return this->_vertexCode;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_vertexCode,return )

int ShaderCompiler_obj::get_probeWeightsIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_probeWeightsIndex","away3d/materials/compilation/ShaderCompiler.hx",766);
	HX_STACK_THIS(this);
	HX_STACK_LINE(766)
	return this->_probeWeightsIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_probeWeightsIndex,return )

int ShaderCompiler_obj::get_sceneNormalMatrixIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_sceneNormalMatrixIndex","away3d/materials/compilation/ShaderCompiler.hx",758);
	HX_STACK_THIS(this);
	HX_STACK_LINE(758)
	return this->_sceneNormalMatrixIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_sceneNormalMatrixIndex,return )

int ShaderCompiler_obj::get_sceneMatrixIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_sceneMatrixIndex","away3d/materials/compilation/ShaderCompiler.hx",750);
	HX_STACK_THIS(this);
	HX_STACK_LINE(750)
	return this->_sceneMatrixIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_sceneMatrixIndex,return )

int ShaderCompiler_obj::get_cameraPositionIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_cameraPositionIndex","away3d/materials/compilation/ShaderCompiler.hx",742);
	HX_STACK_THIS(this);
	HX_STACK_LINE(742)
	return this->_cameraPositionIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_cameraPositionIndex,return )

int ShaderCompiler_obj::get_lightFragmentConstantIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_lightFragmentConstantIndex","away3d/materials/compilation/ShaderCompiler.hx",734);
	HX_STACK_THIS(this);
	HX_STACK_LINE(734)
	return this->_lightFragmentConstantIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_lightFragmentConstantIndex,return )

int ShaderCompiler_obj::get_tangentBufferIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_tangentBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",726);
	HX_STACK_THIS(this);
	HX_STACK_LINE(726)
	return this->_tangentBufferIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_tangentBufferIndex,return )

int ShaderCompiler_obj::get_normalBufferIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_normalBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",718);
	HX_STACK_THIS(this);
	HX_STACK_LINE(718)
	return this->_normalBufferIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_normalBufferIndex,return )

int ShaderCompiler_obj::get_secondaryUVBufferIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_secondaryUVBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",710);
	HX_STACK_THIS(this);
	HX_STACK_LINE(710)
	return this->_secondaryUVBufferIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_secondaryUVBufferIndex,return )

int ShaderCompiler_obj::get_uvTransformIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_uvTransformIndex","away3d/materials/compilation/ShaderCompiler.hx",702);
	HX_STACK_THIS(this);
	HX_STACK_LINE(702)
	return this->_uvTransformIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_uvTransformIndex,return )

int ShaderCompiler_obj::get_uvBufferIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_uvBufferIndex","away3d/materials/compilation/ShaderCompiler.hx",694);
	HX_STACK_THIS(this);
	HX_STACK_LINE(694)
	return this->_uvBufferIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_uvBufferIndex,return )

bool ShaderCompiler_obj::usesProbes( ){
	HX_STACK_PUSH("ShaderCompiler::usesProbes","away3d/materials/compilation/ShaderCompiler.hx",686);
	HX_STACK_THIS(this);
	HX_STACK_LINE(686)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(((int(this->_diffuseLightSources) | int(this->_specularLightSources)))) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbes,return )

bool ShaderCompiler_obj::usesProbesForDiffuse( ){
	HX_STACK_PUSH("ShaderCompiler::usesProbesForDiffuse","away3d/materials/compilation/ShaderCompiler.hx",678);
	HX_STACK_THIS(this);
	HX_STACK_LINE(678)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(this->_diffuseLightSources) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbesForDiffuse,return )

bool ShaderCompiler_obj::usesProbesForSpecular( ){
	HX_STACK_PUSH("ShaderCompiler::usesProbesForSpecular","away3d/materials/compilation/ShaderCompiler.hx",670);
	HX_STACK_THIS(this);
	HX_STACK_LINE(670)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(this->_specularLightSources) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesProbesForSpecular,return )

int ShaderCompiler_obj::set_diffuseLightSources( int value){
	HX_STACK_PUSH("ShaderCompiler::set_diffuseLightSources","away3d/materials/compilation/ShaderCompiler.hx",661);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(662)
	this->_diffuseLightSources = value;
	HX_STACK_LINE(663)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_diffuseLightSources,return )

int ShaderCompiler_obj::get_diffuseLightSources( ){
	HX_STACK_PUSH("ShaderCompiler::get_diffuseLightSources","away3d/materials/compilation/ShaderCompiler.hx",657);
	HX_STACK_THIS(this);
	HX_STACK_LINE(657)
	return this->_diffuseLightSources;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_diffuseLightSources,return )

int ShaderCompiler_obj::set_specularLightSources( int value){
	HX_STACK_PUSH("ShaderCompiler::set_specularLightSources","away3d/materials/compilation/ShaderCompiler.hx",645);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(646)
	this->_specularLightSources = value;
	HX_STACK_LINE(647)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_specularLightSources,return )

int ShaderCompiler_obj::get_specularLightSources( ){
	HX_STACK_PUSH("ShaderCompiler::get_specularLightSources","away3d/materials/compilation/ShaderCompiler.hx",641);
	HX_STACK_THIS(this);
	HX_STACK_LINE(641)
	return this->_specularLightSources;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_specularLightSources,return )

Void ShaderCompiler_obj::cleanUpMethods( ){
{
		HX_STACK_PUSH("ShaderCompiler::cleanUpMethods","away3d/materials/compilation/ShaderCompiler.hx",618);
		HX_STACK_THIS(this);
		HX_STACK_LINE(619)
		if (((this->_methodSetup->_normalMethod != null()))){
			HX_STACK_LINE(619)
			this->_methodSetup->_normalMethod->cleanCompilationData();
		}
		HX_STACK_LINE(620)
		if (((this->_methodSetup->_diffuseMethod != null()))){
			HX_STACK_LINE(620)
			this->_methodSetup->_diffuseMethod->cleanCompilationData();
		}
		HX_STACK_LINE(621)
		if (((this->_methodSetup->_ambientMethod != null()))){
			HX_STACK_LINE(621)
			this->_methodSetup->_ambientMethod->cleanCompilationData();
		}
		HX_STACK_LINE(622)
		if (((this->_methodSetup->_specularMethod != null()))){
			HX_STACK_LINE(622)
			this->_methodSetup->_specularMethod->cleanCompilationData();
		}
		HX_STACK_LINE(623)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(623)
			this->_methodSetup->_shadowMethod->cleanCompilationData();
		}
		HX_STACK_LINE(624)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(624)
			this->_methodSetup->_colorTransformMethod->cleanCompilationData();
		}
		HX_STACK_LINE(625)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(626)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(627)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(628)
		while(((i < len))){
			HX_STACK_LINE(629)
			methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method->cleanCompilationData();
			HX_STACK_LINE(630)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,cleanUpMethods,(void))

Void ShaderCompiler_obj::dispose( ){
{
		HX_STACK_PUSH("ShaderCompiler::dispose","away3d/materials/compilation/ShaderCompiler.hx",607);
		HX_STACK_THIS(this);
		HX_STACK_LINE(608)
		this->cleanUpMethods();
		HX_STACK_LINE(609)
		this->_registerCache->dispose();
		HX_STACK_LINE(610)
		this->_registerCache = null();
		HX_STACK_LINE(611)
		this->_sharedRegisters = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,dispose,(void))

bool ShaderCompiler_obj::usesLightsForDiffuse( ){
	HX_STACK_PUSH("ShaderCompiler::usesLightsForDiffuse","away3d/materials/compilation/ShaderCompiler.hx",599);
	HX_STACK_THIS(this);
	HX_STACK_LINE(599)
	return (bool((this->_numLights > (int)0)) && bool((((int(this->_diffuseLightSources) & int(::away3d::materials::LightSources_obj::LIGHTS))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLightsForDiffuse,return )

bool ShaderCompiler_obj::usesLightsForSpecular( ){
	HX_STACK_PUSH("ShaderCompiler::usesLightsForSpecular","away3d/materials/compilation/ShaderCompiler.hx",591);
	HX_STACK_THIS(this);
	HX_STACK_LINE(591)
	return (bool((this->_numLights > (int)0)) && bool((((int(this->_specularLightSources) & int(::away3d::materials::LightSources_obj::LIGHTS))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,usesLightsForSpecular,return )

int ShaderCompiler_obj::get_numUsedVaryings( ){
	HX_STACK_PUSH("ShaderCompiler::get_numUsedVaryings","away3d/materials/compilation/ShaderCompiler.hx",583);
	HX_STACK_THIS(this);
	HX_STACK_LINE(583)
	return this->_registerCache->get_numUsedVaryings();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedVaryings,return )

int ShaderCompiler_obj::get_numUsedTextures( ){
	HX_STACK_PUSH("ShaderCompiler::get_numUsedTextures","away3d/materials/compilation/ShaderCompiler.hx",575);
	HX_STACK_THIS(this);
	HX_STACK_LINE(575)
	return this->_registerCache->get_numUsedTextures();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedTextures,return )

int ShaderCompiler_obj::get_numUsedStreams( ){
	HX_STACK_PUSH("ShaderCompiler::get_numUsedStreams","away3d/materials/compilation/ShaderCompiler.hx",567);
	HX_STACK_THIS(this);
	HX_STACK_LINE(567)
	return this->_registerCache->get_numUsedStreams();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedStreams,return )

int ShaderCompiler_obj::get_numUsedFragmentConstants( ){
	HX_STACK_PUSH("ShaderCompiler::get_numUsedFragmentConstants","away3d/materials/compilation/ShaderCompiler.hx",558);
	HX_STACK_THIS(this);
	HX_STACK_LINE(558)
	return this->_registerCache->get_numUsedFragmentConstants();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedFragmentConstants,return )

int ShaderCompiler_obj::get_numUsedVertexConstants( ){
	HX_STACK_PUSH("ShaderCompiler::get_numUsedVertexConstants","away3d/materials/compilation/ShaderCompiler.hx",549);
	HX_STACK_THIS(this);
	HX_STACK_LINE(549)
	return this->_registerCache->get_numUsedVertexConstants();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_numUsedVertexConstants,return )

Void ShaderCompiler_obj::updateMethodRegisters( ){
{
		HX_STACK_PUSH("ShaderCompiler::updateMethodRegisters","away3d/materials/compilation/ShaderCompiler.hx",528);
		HX_STACK_THIS(this);
		HX_STACK_LINE(529)
		this->_methodSetup->_normalMethod->set_sharedRegisters(this->_sharedRegisters);
		HX_STACK_LINE(530)
		this->_methodSetup->_diffuseMethod->set_sharedRegisters(this->_sharedRegisters);
		HX_STACK_LINE(531)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(531)
			this->_methodSetup->_shadowMethod->set_sharedRegisters(this->_sharedRegisters);
		}
		HX_STACK_LINE(532)
		this->_methodSetup->_ambientMethod->set_sharedRegisters(this->_sharedRegisters);
		HX_STACK_LINE(533)
		if (((this->_methodSetup->_specularMethod != null()))){
			HX_STACK_LINE(533)
			this->_methodSetup->_specularMethod->set_sharedRegisters(this->_sharedRegisters);
		}
		HX_STACK_LINE(534)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(534)
			this->_methodSetup->_colorTransformMethod->set_sharedRegisters(this->_sharedRegisters);
		}
		HX_STACK_LINE(535)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(536)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(537)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(538)
		while(((i < len))){
			HX_STACK_LINE(539)
			methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method->set_sharedRegisters(this->_sharedRegisters);
			HX_STACK_LINE(540)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,updateMethodRegisters,(void))

int ShaderCompiler_obj::get_commonsDataIndex( ){
	HX_STACK_PUSH("ShaderCompiler::get_commonsDataIndex","away3d/materials/compilation/ShaderCompiler.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_LINE(520)
	return this->_commonsDataIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_commonsDataIndex,return )

Void ShaderCompiler_obj::setupMethod( ::away3d::materials::methods::ShadingMethodBase method,::away3d::materials::methods::MethodVO methodVO){
{
		HX_STACK_PUSH("ShaderCompiler::setupMethod","away3d/materials/compilation/ShaderCompiler.hx",503);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_ARG(methodVO,"methodVO");
		HX_STACK_LINE(504)
		method->reset();
		HX_STACK_LINE(505)
		methodVO->reset();
		HX_STACK_LINE(506)
		methodVO->vertexData = this->_vertexConstantData;
		HX_STACK_LINE(507)
		methodVO->fragmentData = this->_fragmentConstantData;
		HX_STACK_LINE(508)
		methodVO->useSmoothTextures = this->_smooth;
		HX_STACK_LINE(509)
		methodVO->repeatTextures = this->_repeat;
		HX_STACK_LINE(510)
		methodVO->useMipmapping = this->_mipmap;
		HX_STACK_LINE(511)
		methodVO->useLightFallOff = (bool(this->_enableLightFallOff) && bool((this->_profile != HX_CSTRING("baselineConstrained"))));
		HX_STACK_LINE(512)
		methodVO->numLights = (this->_numLights + this->_numLightProbes);
		HX_STACK_LINE(513)
		method->initVO(methodVO);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setupMethod,(void))

Void ShaderCompiler_obj::setupAndCountMethodDependencies( ::away3d::materials::methods::ShadingMethodBase method,::away3d::materials::methods::MethodVO methodVO){
{
		HX_STACK_PUSH("ShaderCompiler::setupAndCountMethodDependencies","away3d/materials/compilation/ShaderCompiler.hx",494);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_ARG(methodVO,"methodVO");
		HX_STACK_LINE(495)
		this->setupMethod(method,methodVO);
		HX_STACK_LINE(496)
		this->_dependencyCounter->includeMethodVO(methodVO);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setupAndCountMethodDependencies,(void))

Void ShaderCompiler_obj::calculateDependencies( ){
{
		HX_STACK_PUSH("ShaderCompiler::calculateDependencies","away3d/materials/compilation/ShaderCompiler.hx",469);
		HX_STACK_THIS(this);
		HX_STACK_LINE(470)
		this->_dependencyCounter->reset();
		HX_STACK_LINE(471)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(472)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(473)
		this->setupAndCountMethodDependencies(this->_methodSetup->_diffuseMethod,this->_methodSetup->_diffuseMethodVO);
		HX_STACK_LINE(474)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(474)
			this->setupAndCountMethodDependencies(this->_methodSetup->_shadowMethod,this->_methodSetup->_shadowMethodVO);
		}
		HX_STACK_LINE(475)
		this->setupAndCountMethodDependencies(this->_methodSetup->_ambientMethod,this->_methodSetup->_ambientMethodVO);
		HX_STACK_LINE(476)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(476)
			this->setupAndCountMethodDependencies(this->_methodSetup->_specularMethod,this->_methodSetup->_specularMethodVO);
		}
		HX_STACK_LINE(477)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(477)
			this->setupAndCountMethodDependencies(this->_methodSetup->_colorTransformMethod,this->_methodSetup->_colorTransformMethodVO);
		}
		HX_STACK_LINE(478)
		len = methods->length;
		HX_STACK_LINE(479)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(480)
		while(((i < len))){
			HX_STACK_LINE(481)
			this->setupAndCountMethodDependencies(methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method,methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->data);
			HX_STACK_LINE(482)
			++(i);
		}
		HX_STACK_LINE(484)
		if ((this->get_usesNormals())){
			HX_STACK_LINE(484)
			this->setupAndCountMethodDependencies(this->_methodSetup->_normalMethod,this->_methodSetup->_normalMethodVO);
		}
		HX_STACK_LINE(485)
		this->_dependencyCounter->setPositionedLights(this->_numPointLights,this->_combinedLightSources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,calculateDependencies,(void))

Void ShaderCompiler_obj::createCommons( ){
{
		HX_STACK_PUSH("ShaderCompiler::createCommons","away3d/materials/compilation/ShaderCompiler.hx",460);
		HX_STACK_THIS(this);
		HX_STACK_LINE(461)
		this->_sharedRegisters->commons = this->_registerCache->getFreeFragmentConstant();
		HX_STACK_LINE(462)
		this->_commonsDataIndex = (this->_sharedRegisters->commons->get_index() * (int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,createCommons,(void))

Void ShaderCompiler_obj::initLightData( ){
{
		HX_STACK_PUSH("ShaderCompiler::initLightData","away3d/materials/compilation/ShaderCompiler.hx",448);
		HX_STACK_THIS(this);
		HX_STACK_LINE(449)
		this->_numLights = (this->_numPointLights + this->_numDirectionalLights);
		HX_STACK_LINE(450)
		this->_numProbeRegisters = ::Math_obj::ceil((Float(this->_numLightProbes) / Float((int)4)));
		HX_STACK_LINE(451)
		if (((this->_methodSetup->_specularMethod != null()))){
			HX_STACK_LINE(451)
			this->_combinedLightSources = (int(this->_specularLightSources) | int(this->_diffuseLightSources));
		}
		else{
			HX_STACK_LINE(452)
			this->_combinedLightSources = this->_diffuseLightSources;
		}
		HX_STACK_LINE(453)
		this->_usingSpecularMethod = hx::TCast< Bool >::cast((bool((this->_methodSetup->_specularMethod != null())) && bool(((bool(this->usesLightsForSpecular()) || bool(this->usesProbesForSpecular()))))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,initLightData,(void))

Void ShaderCompiler_obj::initRegisterIndices( ){
{
		HX_STACK_PUSH("ShaderCompiler::initRegisterIndices","away3d/materials/compilation/ShaderCompiler.hx",430);
		HX_STACK_THIS(this);
		HX_STACK_LINE(431)
		this->_commonsDataIndex = (int)-1;
		HX_STACK_LINE(432)
		this->_cameraPositionIndex = (int)-1;
		HX_STACK_LINE(433)
		this->_uvBufferIndex = (int)-1;
		HX_STACK_LINE(434)
		this->_uvTransformIndex = (int)-1;
		HX_STACK_LINE(435)
		this->_secondaryUVBufferIndex = (int)-1;
		HX_STACK_LINE(436)
		this->_normalBufferIndex = (int)-1;
		HX_STACK_LINE(437)
		this->_tangentBufferIndex = (int)-1;
		HX_STACK_LINE(438)
		this->_lightFragmentConstantIndex = (int)-1;
		HX_STACK_LINE(439)
		this->_sceneMatrixIndex = (int)-1;
		HX_STACK_LINE(440)
		this->_sceneNormalMatrixIndex = (int)-1;
		HX_STACK_LINE(441)
		this->_probeWeightsIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,initRegisterIndices,(void))

Void ShaderCompiler_obj::compileFragmentOutput( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileFragmentOutput","away3d/materials/compilation/ShaderCompiler.hx",421);
		HX_STACK_THIS(this);
		HX_STACK_LINE(422)
		hx::AddEq(this->_fragmentCode,((((HX_CSTRING("mov ") + ::Std_obj::string(this->_registerCache->get_fragmentOutputRegister())) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING("\n")));
		HX_STACK_LINE(423)
		this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->shadedTarget);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileFragmentOutput,(void))

Void ShaderCompiler_obj::compileProjectionCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileProjectionCode","away3d/materials/compilation/ShaderCompiler.hx",405);
		HX_STACK_THIS(this);
		HX_STACK_LINE(406)
		::String pos = (  (((bool((this->_dependencyCounter->get_globalPosDependencies() > (int)0)) || bool(this->_forceSeperateMVP)))) ? ::String(this->_sharedRegisters->globalPositionVertex->toString()) : ::String(this->_animationTargetRegisters->__get((int)0)) );		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(407)
		::String code;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(408)
		if (((this->_dependencyCounter->get_projectionDependencies() > (int)0))){
			HX_STACK_LINE(409)
			this->_sharedRegisters->projectionFragment = this->_registerCache->getFreeVarying();
			HX_STACK_LINE(410)
			code = ((((((HX_CSTRING("m44 vt5, ") + pos) + HX_CSTRING(", vc0\t\t\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->projectionFragment)) + HX_CSTRING(", vt5\n")) + HX_CSTRING("mov op, vt5\n"));
		}
		else{
			HX_STACK_LINE(413)
			code = ((HX_CSTRING("m44 op, ") + pos) + HX_CSTRING(", vc0\t\t\n"));
		}
		HX_STACK_LINE(414)
		hx::AddEq(this->_vertexCode,code);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileProjectionCode,(void))

Void ShaderCompiler_obj::compileGlobalPositionCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileGlobalPositionCode","away3d/materials/compilation/ShaderCompiler.hx",386);
		HX_STACK_THIS(this);
		HX_STACK_LINE(387)
		this->_sharedRegisters->globalPositionVertex = this->_registerCache->getFreeVertexVectorTemp();
		HX_STACK_LINE(388)
		this->_registerCache->addVertexTempUsages(this->_sharedRegisters->globalPositionVertex,this->_dependencyCounter->get_globalPosDependencies());
		HX_STACK_LINE(389)
		::away3d::materials::compilation::ShaderRegisterElement positionMatrixReg = this->_registerCache->getFreeVertexConstant();		HX_STACK_VAR(positionMatrixReg,"positionMatrixReg");
		HX_STACK_LINE(390)
		this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(391)
		this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(392)
		this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(393)
		this->_sceneMatrixIndex = (positionMatrixReg->get_index() * (int)4);
		HX_STACK_LINE(394)
		hx::AddEq(this->_vertexCode,((((((HX_CSTRING("m44 ") + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->localPosition)) + HX_CSTRING(", ")) + ::Std_obj::string(positionMatrixReg)) + HX_CSTRING("\n")));
		HX_STACK_LINE(395)
		if ((this->_dependencyCounter->get_usesGlobalPosFragment())){
			HX_STACK_LINE(396)
			this->_sharedRegisters->globalPositionVarying = this->_registerCache->getFreeVarying();
			HX_STACK_LINE(397)
			hx::AddEq(this->_vertexCode,((((HX_CSTRING("mov ") + ::Std_obj::string(this->_sharedRegisters->globalPositionVarying)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_CSTRING("\n")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileGlobalPositionCode,(void))

Void ShaderCompiler_obj::compileSecondaryUVCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileSecondaryUVCode","away3d/materials/compilation/ShaderCompiler.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		::away3d::materials::compilation::ShaderRegisterElement uvAttributeReg = this->_registerCache->getFreeVertexAttribute();		HX_STACK_VAR(uvAttributeReg,"uvAttributeReg");
		HX_STACK_LINE(377)
		this->_secondaryUVBufferIndex = uvAttributeReg->get_index();
		HX_STACK_LINE(378)
		this->_sharedRegisters->secondaryUVVarying = this->_registerCache->getFreeVarying();
		HX_STACK_LINE(379)
		hx::AddEq(this->_vertexCode,((((HX_CSTRING("mov ") + ::Std_obj::string(this->_sharedRegisters->secondaryUVVarying)) + HX_CSTRING(", ")) + ::Std_obj::string(uvAttributeReg)) + HX_CSTRING("\n")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileSecondaryUVCode,(void))

Void ShaderCompiler_obj::compileUVCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileUVCode","away3d/materials/compilation/ShaderCompiler.hx",348);
		HX_STACK_THIS(this);
		HX_STACK_LINE(349)
		::away3d::materials::compilation::ShaderRegisterElement uvAttributeReg = this->_registerCache->getFreeVertexAttribute();		HX_STACK_VAR(uvAttributeReg,"uvAttributeReg");
		HX_STACK_LINE(350)
		this->_uvBufferIndex = uvAttributeReg->get_index();
		HX_STACK_LINE(351)
		::away3d::materials::compilation::ShaderRegisterElement varying = this->_registerCache->getFreeVarying();		HX_STACK_VAR(varying,"varying");
		HX_STACK_LINE(352)
		this->_sharedRegisters->uvVarying = varying;
		HX_STACK_LINE(353)
		if ((this->get_animateUVs())){
			HX_STACK_LINE(356)
			::away3d::materials::compilation::ShaderRegisterElement uvTransform1 = this->_registerCache->getFreeVertexConstant();		HX_STACK_VAR(uvTransform1,"uvTransform1");
			HX_STACK_LINE(357)
			::away3d::materials::compilation::ShaderRegisterElement uvTransform2 = this->_registerCache->getFreeVertexConstant();		HX_STACK_VAR(uvTransform2,"uvTransform2");
			HX_STACK_LINE(358)
			this->_uvTransformIndex = (uvTransform1->get_index() * (int)4);
			HX_STACK_LINE(359)
			hx::AddEq(this->_vertexCode,((((((((((((((((((HX_CSTRING("dp4 ") + ::Std_obj::string(varying)) + HX_CSTRING(".x, ")) + ::Std_obj::string(uvAttributeReg)) + HX_CSTRING(", ")) + ::Std_obj::string(uvTransform1)) + HX_CSTRING("\n")) + HX_CSTRING("dp4 ")) + ::Std_obj::string(varying)) + HX_CSTRING(".y, ")) + ::Std_obj::string(uvAttributeReg)) + HX_CSTRING(", ")) + ::Std_obj::string(uvTransform2)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(varying)) + HX_CSTRING(".zw, ")) + ::Std_obj::string(uvAttributeReg)) + HX_CSTRING(".zw \n")));
		}
		else{
			HX_STACK_LINE(363)
			this->_uvTransformIndex = (int)-1;
			HX_STACK_LINE(364)
			this->_needUVAnimation = true;
			HX_STACK_LINE(365)
			this->_UVTarget = varying->toString();
			HX_STACK_LINE(366)
			this->_UVSource = uvAttributeReg->toString();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileUVCode,(void))

Void ShaderCompiler_obj::compileNormalCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileNormalCode","away3d/materials/compilation/ShaderCompiler.hx",341);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileNormalCode,(void))

Void ShaderCompiler_obj::compileViewDirCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileViewDirCode","away3d/materials/compilation/ShaderCompiler.hx",334);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileViewDirCode,(void))

Void ShaderCompiler_obj::compileLightingCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileLightingCode","away3d/materials/compilation/ShaderCompiler.hx",327);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileLightingCode,(void))

Void ShaderCompiler_obj::compileMethodsCode( ){
{
		HX_STACK_PUSH("ShaderCompiler::compileMethodsCode","away3d/materials/compilation/ShaderCompiler.hx",312);
		HX_STACK_THIS(this);
		HX_STACK_LINE(313)
		if (((this->_dependencyCounter->get_uvDependencies() > (int)0))){
			HX_STACK_LINE(313)
			this->compileUVCode();
		}
		HX_STACK_LINE(314)
		if (((this->_dependencyCounter->get_secondaryUVDependencies() > (int)0))){
			HX_STACK_LINE(314)
			this->compileSecondaryUVCode();
		}
		HX_STACK_LINE(315)
		if (((this->_dependencyCounter->get_normalDependencies() > (int)0))){
			HX_STACK_LINE(315)
			this->compileNormalCode();
		}
		HX_STACK_LINE(316)
		if (((this->_dependencyCounter->get_viewDirDependencies() > (int)0))){
			HX_STACK_LINE(316)
			this->compileViewDirCode();
		}
		HX_STACK_LINE(317)
		this->compileLightingCode();
		HX_STACK_LINE(318)
		this->_fragmentLightCode = this->_fragmentCode;
		HX_STACK_LINE(319)
		this->_fragmentCode = HX_CSTRING("");
		HX_STACK_LINE(320)
		this->compileMethods();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compileMethodsCode,(void))

Void ShaderCompiler_obj::createNormalRegisters( ){
{
		HX_STACK_PUSH("ShaderCompiler::createNormalRegisters","away3d/materials/compilation/ShaderCompiler.hx",305);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,createNormalRegisters,(void))

Void ShaderCompiler_obj::compile( ){
{
		HX_STACK_PUSH("ShaderCompiler::compile","away3d/materials/compilation/ShaderCompiler.hx",276);
		HX_STACK_THIS(this);
		HX_STACK_LINE(277)
		this->initRegisterIndices();
		HX_STACK_LINE(278)
		this->initLightData();
		HX_STACK_LINE(279)
		this->_animatableAttributes = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< ::String >::__new().Add(HX_CSTRING("va0")));
		HX_STACK_LINE(280)
		this->_animationTargetRegisters = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< ::String >::__new().Add(HX_CSTRING("vt0")));
		HX_STACK_LINE(281)
		this->_vertexCode = HX_CSTRING("");
		HX_STACK_LINE(282)
		this->_fragmentCode = HX_CSTRING("");
		HX_STACK_LINE(283)
		this->_sharedRegisters->localPosition = this->_registerCache->getFreeVertexVectorTemp();
		HX_STACK_LINE(284)
		this->_registerCache->addVertexTempUsages(this->_sharedRegisters->localPosition,(int)1);
		HX_STACK_LINE(285)
		this->createCommons();
		HX_STACK_LINE(286)
		this->calculateDependencies();
		HX_STACK_LINE(287)
		this->updateMethodRegisters();
		HX_STACK_LINE(288)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(289)
		while(((i < (int)4))){
			HX_STACK_LINE(290)
			this->_registerCache->getFreeVertexConstant();
			HX_STACK_LINE(291)
			++(i);
		}
		HX_STACK_LINE(293)
		this->createNormalRegisters();
		HX_STACK_LINE(294)
		if (((bool((this->_dependencyCounter->get_globalPosDependencies() > (int)0)) || bool(this->_forceSeperateMVP)))){
			HX_STACK_LINE(294)
			this->compileGlobalPositionCode();
		}
		HX_STACK_LINE(295)
		this->compileProjectionCode();
		HX_STACK_LINE(296)
		this->compileMethodsCode();
		HX_STACK_LINE(297)
		this->compileFragmentOutput();
		HX_STACK_LINE(298)
		this->_fragmentPostLightCode = this->get_fragmentCode();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,compile,(void))

::away3d::materials::methods::ShaderMethodSetup ShaderCompiler_obj::set_methodSetup( ::away3d::materials::methods::ShaderMethodSetup value){
	HX_STACK_PUSH("ShaderCompiler::set_methodSetup","away3d/materials/compilation/ShaderCompiler.hx",267);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(268)
	this->_methodSetup = value;
	HX_STACK_LINE(269)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_methodSetup,return )

::away3d::materials::methods::ShaderMethodSetup ShaderCompiler_obj::get_methodSetup( ){
	HX_STACK_PUSH("ShaderCompiler::get_methodSetup","away3d/materials/compilation/ShaderCompiler.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return this->_methodSetup;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_methodSetup,return )

Void ShaderCompiler_obj::setConstantDataBuffers( Array< Float > vertexConstantData,Array< Float > fragmentConstantData){
{
		HX_STACK_PUSH("ShaderCompiler::setConstantDataBuffers","away3d/materials/compilation/ShaderCompiler.hx",254);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertexConstantData,"vertexConstantData");
		HX_STACK_ARG(fragmentConstantData,"fragmentConstantData");
		HX_STACK_LINE(255)
		this->_vertexConstantData = vertexConstantData;
		HX_STACK_LINE(256)
		this->_fragmentConstantData = fragmentConstantData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderCompiler_obj,setConstantDataBuffers,(void))

Void ShaderCompiler_obj::setTextureSampling( bool smooth,bool repeat,bool mipmap){
{
		HX_STACK_PUSH("ShaderCompiler::setTextureSampling","away3d/materials/compilation/ShaderCompiler.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(smooth,"smooth");
		HX_STACK_ARG(repeat,"repeat");
		HX_STACK_ARG(mipmap,"mipmap");
		HX_STACK_LINE(243)
		this->_smooth = smooth;
		HX_STACK_LINE(244)
		this->_repeat = repeat;
		HX_STACK_LINE(245)
		this->_mipmap = mipmap;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShaderCompiler_obj,setTextureSampling,(void))

bool ShaderCompiler_obj::set_preserveAlpha( bool value){
	HX_STACK_PUSH("ShaderCompiler::set_preserveAlpha","away3d/materials/compilation/ShaderCompiler.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(231)
	this->_preserveAlpha = value;
	HX_STACK_LINE(232)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_preserveAlpha,return )

bool ShaderCompiler_obj::get_preserveAlpha( ){
	HX_STACK_PUSH("ShaderCompiler::get_preserveAlpha","away3d/materials/compilation/ShaderCompiler.hx",226);
	HX_STACK_THIS(this);
	HX_STACK_LINE(226)
	return this->_preserveAlpha;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_preserveAlpha,return )

bool ShaderCompiler_obj::set_alphaPremultiplied( bool value){
	HX_STACK_PUSH("ShaderCompiler::set_alphaPremultiplied","away3d/materials/compilation/ShaderCompiler.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(218)
	this->_alphaPremultiplied = value;
	HX_STACK_LINE(219)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_alphaPremultiplied,return )

bool ShaderCompiler_obj::get_alphaPremultiplied( ){
	HX_STACK_PUSH("ShaderCompiler::get_alphaPremultiplied","away3d/materials/compilation/ShaderCompiler.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(213)
	return this->_alphaPremultiplied;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_alphaPremultiplied,return )

bool ShaderCompiler_obj::set_animateUVs( bool value){
	HX_STACK_PUSH("ShaderCompiler::set_animateUVs","away3d/materials/compilation/ShaderCompiler.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(204)
	this->_animateUVs = value;
	HX_STACK_LINE(205)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_animateUVs,return )

bool ShaderCompiler_obj::get_animateUVs( ){
	HX_STACK_PUSH("ShaderCompiler::get_animateUVs","away3d/materials/compilation/ShaderCompiler.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return this->_animateUVs;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_animateUVs,return )

Void ShaderCompiler_obj::initRegisterCache( ::String profile){
{
		HX_STACK_PUSH("ShaderCompiler::initRegisterCache","away3d/materials/compilation/ShaderCompiler.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(profile,"profile");
		HX_STACK_LINE(190)
		this->_registerCache = ::away3d::materials::compilation::ShaderRegisterCache_obj::__new(profile);
		HX_STACK_LINE(191)
		this->_registerCache->set_vertexAttributesOffset((int)1);
		HX_STACK_LINE(192)
		this->_registerCache->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,initRegisterCache,(void))

bool ShaderCompiler_obj::set_forceSeperateMVP( bool value){
	HX_STACK_PUSH("ShaderCompiler::set_forceSeperateMVP","away3d/materials/compilation/ShaderCompiler.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(180)
	this->_forceSeperateMVP = value;
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_forceSeperateMVP,return )

bool ShaderCompiler_obj::get_forceSeperateMVP( ){
	HX_STACK_PUSH("ShaderCompiler::get_forceSeperateMVP","away3d/materials/compilation/ShaderCompiler.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return this->_forceSeperateMVP;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_forceSeperateMVP,return )

::String ShaderCompiler_obj::get_UVSource( ){
	HX_STACK_PUSH("ShaderCompiler::get_UVSource","away3d/materials/compilation/ShaderCompiler.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_LINE(165)
	return this->_UVSource;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_UVSource,return )

::String ShaderCompiler_obj::get_UVTarget( ){
	HX_STACK_PUSH("ShaderCompiler::get_UVTarget","away3d/materials/compilation/ShaderCompiler.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(157)
	return this->_UVTarget;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_UVTarget,return )

bool ShaderCompiler_obj::get_needUVAnimation( ){
	HX_STACK_PUSH("ShaderCompiler::get_needUVAnimation","away3d/materials/compilation/ShaderCompiler.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	return this->_needUVAnimation;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_needUVAnimation,return )

bool ShaderCompiler_obj::set_enableLightFallOff( bool value){
	HX_STACK_PUSH("ShaderCompiler::set_enableLightFallOff","away3d/materials/compilation/ShaderCompiler.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(141)
	this->_enableLightFallOff = value;
	HX_STACK_LINE(142)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderCompiler_obj,set_enableLightFallOff,return )

bool ShaderCompiler_obj::get_enableLightFallOff( ){
	HX_STACK_PUSH("ShaderCompiler::get_enableLightFallOff","away3d/materials/compilation/ShaderCompiler.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(136)
	return this->_enableLightFallOff;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderCompiler_obj,get_enableLightFallOff,return )


ShaderCompiler_obj::ShaderCompiler_obj()
{
}

void ShaderCompiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderCompiler);
	HX_MARK_MEMBER_NAME(_forceSeperateMVP,"_forceSeperateMVP");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_UVSource,"_UVSource");
	HX_MARK_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_MARK_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_MARK_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_MARK_MEMBER_NAME(_combinedLightSources,"_combinedLightSources");
	HX_MARK_MEMBER_NAME(_numProbeRegisters,"_numProbeRegisters");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_numLights,"_numLights");
	HX_MARK_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_MARK_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_MARK_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_MARK_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_MARK_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_MARK_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_MARK_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_MARK_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_MARK_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_MARK_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_MARK_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_MARK_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_MARK_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_MARK_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_MARK_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_MARK_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_MARK_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_MARK_MEMBER_NAME(_fragmentPostLightCode,"_fragmentPostLightCode");
	HX_MARK_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_MARK_MEMBER_NAME(_fragmentCode,"_fragmentCode");
	HX_MARK_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_MARK_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_MARK_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_MARK_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_MARK_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_MARK_MEMBER_NAME(_dependencyCounter,"_dependencyCounter");
	HX_MARK_MEMBER_NAME(_registerCache,"_registerCache");
	HX_MARK_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	HX_MARK_END_CLASS();
}

void ShaderCompiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_forceSeperateMVP,"_forceSeperateMVP");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_UVSource,"_UVSource");
	HX_VISIT_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_VISIT_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_VISIT_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_VISIT_MEMBER_NAME(_combinedLightSources,"_combinedLightSources");
	HX_VISIT_MEMBER_NAME(_numProbeRegisters,"_numProbeRegisters");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_numLights,"_numLights");
	HX_VISIT_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_VISIT_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_VISIT_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_VISIT_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_VISIT_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_VISIT_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_VISIT_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_VISIT_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_VISIT_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_VISIT_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_VISIT_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_VISIT_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_VISIT_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_VISIT_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_VISIT_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_VISIT_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_VISIT_MEMBER_NAME(_fragmentPostLightCode,"_fragmentPostLightCode");
	HX_VISIT_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_VISIT_MEMBER_NAME(_fragmentCode,"_fragmentCode");
	HX_VISIT_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_VISIT_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_VISIT_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_VISIT_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_VISIT_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_VISIT_MEMBER_NAME(_dependencyCounter,"_dependencyCounter");
	HX_VISIT_MEMBER_NAME(_registerCache,"_registerCache");
	HX_VISIT_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
}

Dynamic ShaderCompiler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return _mipmap; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return _profile; }
		if (HX_FIELD_EQ(inName,"UVSource") ) { return get_UVSource(); }
		if (HX_FIELD_EQ(inName,"UVTarget") ) { return get_UVTarget(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVSource") ) { return _UVSource; }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { return _UVTarget; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"usesLights") ) { return usesLights_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbes") ) { return usesProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { return _numLights; }
		if (HX_FIELD_EQ(inName,"vertexCode") ) { return get_vertexCode(); }
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return get_animateUVs(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setupMethod") ) { return setupMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { return _vertexCode; }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { return _animateUVs; }
		if (HX_FIELD_EQ(inName,"usesNormals") ) { return get_usesNormals(); }
		if (HX_FIELD_EQ(inName,"methodSetup") ) { return get_methodSetup(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_UVSource") ) { return get_UVSource_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVTarget") ) { return get_UVTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { return _methodSetup; }
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { return get_shadedTarget(); }
		if (HX_FIELD_EQ(inName,"fragmentCode") ) { return get_fragmentCode(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createCommons") ) { return createCommons_dyn(); }
		if (HX_FIELD_EQ(inName,"initLightData") ) { return initLightData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileUVCode") ) { return compileUVCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_fragmentCode") ) { return _fragmentCode; }
		if (HX_FIELD_EQ(inName,"uvBufferIndex") ) { return get_uvBufferIndex(); }
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { return get_preserveAlpha(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compileMethods") ) { return compileMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexCode") ) { return get_vertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanUpMethods") ) { return cleanUpMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return set_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return get_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { return _uvBufferIndex; }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { return _preserveAlpha; }
		if (HX_FIELD_EQ(inName,"_registerCache") ) { return _registerCache; }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { return get_numLightProbes(); }
		if (HX_FIELD_EQ(inName,"numPointLights") ) { return get_numPointLights(); }
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { return get_numUsedStreams(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usesNormals") ) { return get_usesNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"set_methodSetup") ) { return set_methodSetup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_methodSetup") ) { return get_methodSetup_dyn(); }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return _numPointLights; }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return _numLightProbes; }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { return get_numUsedVaryings(); }
		if (HX_FIELD_EQ(inName,"numUsedTextures") ) { return get_numUsedTextures(); }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { return get_needUVAnimation(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_shadedTarget") ) { return get_shadedTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fragmentCode") ) { return get_fragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { return _needUVAnimation; }
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { return _sharedRegisters; }
		if (HX_FIELD_EQ(inName,"sceneMatrixIndex") ) { return get_sceneMatrixIndex(); }
		if (HX_FIELD_EQ(inName,"uvTransformIndex") ) { return get_uvTransformIndex(); }
		if (HX_FIELD_EQ(inName,"commonsDataIndex") ) { return get_commonsDataIndex(); }
		if (HX_FIELD_EQ(inName,"forceSeperateMVP") ) { return get_forceSeperateMVP(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_uvBufferIndex") ) { return get_uvBufferIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"compileNormalCode") ) { return compileNormalCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_preserveAlpha") ) { return set_preserveAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_preserveAlpha") ) { return get_preserveAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"initRegisterCache") ) { return initRegisterCache_dyn(); }
		if (HX_FIELD_EQ(inName,"_forceSeperateMVP") ) { return _forceSeperateMVP; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { return _sceneMatrixIndex; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { return _uvTransformIndex; }
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { return _commonsDataIndex; }
		if (HX_FIELD_EQ(inName,"fragmentLightCode") ) { return get_fragmentLightCode(); }
		if (HX_FIELD_EQ(inName,"probeWeightsIndex") ) { return get_probeWeightsIndex(); }
		if (HX_FIELD_EQ(inName,"normalBufferIndex") ) { return get_normalBufferIndex(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_numLightProbes") ) { return set_numLightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return get_numLightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numPointLights") ) { return set_numPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return get_numPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return get_numUsedStreams_dyn(); }
		if (HX_FIELD_EQ(inName,"compileViewDirCode") ) { return compileViewDirCode_dyn(); }
		if (HX_FIELD_EQ(inName,"compileMethodsCode") ) { return compileMethodsCode_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureSampling") ) { return setTextureSampling_dyn(); }
		if (HX_FIELD_EQ(inName,"_numProbeRegisters") ) { return _numProbeRegisters; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { return _probeWeightsIndex; }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { return _normalBufferIndex; }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { return _fragmentLightCode; }
		if (HX_FIELD_EQ(inName,"_dependencyCounter") ) { return _dependencyCounter; }
		if (HX_FIELD_EQ(inName,"tangentBufferIndex") ) { return get_tangentBufferIndex(); }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return get_alphaPremultiplied(); }
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return get_enableLightFallOff(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return get_numUsedVaryings_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedTextures") ) { return get_numUsedTextures_dyn(); }
		if (HX_FIELD_EQ(inName,"initRegisterIndices") ) { return initRegisterIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"compileLightingCode") ) { return compileLightingCode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_needUVAnimation") ) { return get_needUVAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { return _tangentBufferIndex; }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { return _vertexConstantData; }
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return _alphaPremultiplied; }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { return _enableLightFallOff; }
		if (HX_FIELD_EQ(inName,"usingSpecularMethod") ) { return get_usingSpecularMethod(); }
		if (HX_FIELD_EQ(inName,"cameraPositionIndex") ) { return get_cameraPositionIndex(); }
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return get_diffuseLightSources(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_sceneMatrixIndex") ) { return get_sceneMatrixIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uvTransformIndex") ) { return get_uvTransformIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbesForDiffuse") ) { return usesProbesForDiffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"usesLightsForDiffuse") ) { return usesLightsForDiffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_commonsDataIndex") ) { return get_commonsDataIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_forceSeperateMVP") ) { return set_forceSeperateMVP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_forceSeperateMVP") ) { return get_forceSeperateMVP_dyn(); }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { return _usingSpecularMethod; }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { return _diffuseLightSources; }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { return _cameraPositionIndex; }
		if (HX_FIELD_EQ(inName,"animatableAttributes") ) { return get_animatableAttributes(); }
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { return get_numDirectionalLights(); }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return get_specularLightSources(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_fragmentLightCode") ) { return get_fragmentLightCode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_probeWeightsIndex") ) { return get_probeWeightsIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalBufferIndex") ) { return get_normalBufferIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbesForSpecular") ) { return usesProbesForSpecular_dyn(); }
		if (HX_FIELD_EQ(inName,"usesLightsForSpecular") ) { return usesLightsForSpecular_dyn(); }
		if (HX_FIELD_EQ(inName,"updateMethodRegisters") ) { return updateMethodRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateDependencies") ) { return calculateDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"compileFragmentOutput") ) { return compileFragmentOutput_dyn(); }
		if (HX_FIELD_EQ(inName,"compileProjectionCode") ) { return compileProjectionCode_dyn(); }
		if (HX_FIELD_EQ(inName,"createNormalRegisters") ) { return createNormalRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"_combinedLightSources") ) { return _combinedLightSources; }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return _numDirectionalLights; }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { return _specularLightSources; }
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { return _animatableAttributes; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { return _fragmentConstantData; }
		if (HX_FIELD_EQ(inName,"fragmentPostLightCode") ) { return get_fragmentPostLightCode(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_tangentBufferIndex") ) { return get_tangentBufferIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"compileSecondaryUVCode") ) { return compileSecondaryUVCode_dyn(); }
		if (HX_FIELD_EQ(inName,"setConstantDataBuffers") ) { return setConstantDataBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return set_alphaPremultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return get_alphaPremultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return set_enableLightFallOff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return get_enableLightFallOff_dyn(); }
		if (HX_FIELD_EQ(inName,"_fragmentPostLightCode") ) { return _fragmentPostLightCode; }
		if (HX_FIELD_EQ(inName,"sceneNormalMatrixIndex") ) { return get_sceneNormalMatrixIndex(); }
		if (HX_FIELD_EQ(inName,"secondaryUVBufferIndex") ) { return get_secondaryUVBufferIndex(); }
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { return get_numUsedVertexConstants(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_usingSpecularMethod") ) { return get_usingSpecularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cameraPositionIndex") ) { return get_cameraPositionIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return set_diffuseLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return get_diffuseLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { return _sceneNormalMatrixIndex; }
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { return _secondaryUVBufferIndex; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_animatableAttributes") ) { return get_animatableAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numDirectionalLights") ) { return set_numDirectionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return get_numDirectionalLights_dyn(); }
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return set_specularLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return get_specularLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"lightProbeDiffuseIndices") ) { return get_lightProbeDiffuseIndices(); }
		if (HX_FIELD_EQ(inName,"animationTargetRegisters") ) { return get_animationTargetRegisters(); }
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { return get_numUsedFragmentConstants(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_fragmentPostLightCode") ) { return get_fragmentPostLightCode_dyn(); }
		if (HX_FIELD_EQ(inName,"compileGlobalPositionCode") ) { return compileGlobalPositionCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { return _lightProbeDiffuseIndices; }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { return _animationTargetRegisters; }
		if (HX_FIELD_EQ(inName,"lightProbeSpecularIndices") ) { return get_lightProbeSpecularIndices(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_sceneNormalMatrixIndex") ) { return get_sceneNormalMatrixIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVBufferIndex") ) { return get_secondaryUVBufferIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return get_numUsedVertexConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { return _lightProbeSpecularIndices; }
		if (HX_FIELD_EQ(inName,"lightFragmentConstantIndex") ) { return get_lightFragmentConstantIndex(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { return _lightFragmentConstantIndex; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_lightProbeDiffuseIndices") ) { return get_lightProbeDiffuseIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animationTargetRegisters") ) { return get_animationTargetRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return get_numUsedFragmentConstants_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_lightProbeSpecularIndices") ) { return get_lightProbeSpecularIndices_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_lightFragmentConstantIndex") ) { return get_lightFragmentConstantIndex_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"setupAndCountMethodDependencies") ) { return setupAndCountMethodDependencies_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderCompiler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVSource") ) { _UVSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { _UVTarget=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numLights") ) { _numLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return set_animateUVs(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { _vertexCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { _animateUVs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"methodSetup") ) { return set_methodSetup(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { _methodSetup=inValue.Cast< ::away3d::materials::methods::ShaderMethodSetup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fragmentCode") ) { _fragmentCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { return set_preserveAlpha(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { _uvBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { _preserveAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_registerCache") ) { _registerCache=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { return set_numLightProbes(inValue); }
		if (HX_FIELD_EQ(inName,"numPointLights") ) { return set_numPointLights(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { _needUVAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { _sharedRegisters=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceSeperateMVP") ) { return set_forceSeperateMVP(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_forceSeperateMVP") ) { _forceSeperateMVP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { _sceneMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { _uvTransformIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { _commonsDataIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numProbeRegisters") ) { _numProbeRegisters=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { _probeWeightsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { _normalBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { _fragmentLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dependencyCounter") ) { _dependencyCounter=inValue.Cast< ::away3d::materials::compilation::MethodDependencyCounter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return set_alphaPremultiplied(inValue); }
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return set_enableLightFallOff(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { _tangentBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { _vertexConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { _enableLightFallOff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return set_diffuseLightSources(inValue); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { _usingSpecularMethod=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { _diffuseLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { _cameraPositionIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { return set_numDirectionalLights(inValue); }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return set_specularLightSources(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_combinedLightSources") ) { _combinedLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { _specularLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { _animatableAttributes=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { _fragmentConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_fragmentPostLightCode") ) { _fragmentPostLightCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { _sceneNormalMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { _secondaryUVBufferIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { _lightProbeDiffuseIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { _animationTargetRegisters=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { _lightProbeSpecularIndices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { _lightFragmentConstantIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderCompiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_forceSeperateMVP"));
	outFields->push(HX_CSTRING("_profile"));
	outFields->push(HX_CSTRING("_UVSource"));
	outFields->push(HX_CSTRING("_UVTarget"));
	outFields->push(HX_CSTRING("_needUVAnimation"));
	outFields->push(HX_CSTRING("_usingSpecularMethod"));
	outFields->push(HX_CSTRING("_combinedLightSources"));
	outFields->push(HX_CSTRING("_numProbeRegisters"));
	outFields->push(HX_CSTRING("_numDirectionalLights"));
	outFields->push(HX_CSTRING("_numPointLights"));
	outFields->push(HX_CSTRING("_numLightProbes"));
	outFields->push(HX_CSTRING("_numLights"));
	outFields->push(HX_CSTRING("_diffuseLightSources"));
	outFields->push(HX_CSTRING("_specularLightSources"));
	outFields->push(HX_CSTRING("_probeWeightsIndex"));
	outFields->push(HX_CSTRING("_cameraPositionIndex"));
	outFields->push(HX_CSTRING("_sceneNormalMatrixIndex"));
	outFields->push(HX_CSTRING("_sceneMatrixIndex"));
	outFields->push(HX_CSTRING("_lightFragmentConstantIndex"));
	outFields->push(HX_CSTRING("_tangentBufferIndex"));
	outFields->push(HX_CSTRING("_normalBufferIndex"));
	outFields->push(HX_CSTRING("_secondaryUVBufferIndex"));
	outFields->push(HX_CSTRING("_uvTransformIndex"));
	outFields->push(HX_CSTRING("_uvBufferIndex"));
	outFields->push(HX_CSTRING("_lightProbeSpecularIndices"));
	outFields->push(HX_CSTRING("_lightProbeDiffuseIndices"));
	outFields->push(HX_CSTRING("_animationTargetRegisters"));
	outFields->push(HX_CSTRING("_animatableAttributes"));
	outFields->push(HX_CSTRING("_commonsDataIndex"));
	outFields->push(HX_CSTRING("_fragmentPostLightCode"));
	outFields->push(HX_CSTRING("_fragmentLightCode"));
	outFields->push(HX_CSTRING("_fragmentCode"));
	outFields->push(HX_CSTRING("_vertexCode"));
	outFields->push(HX_CSTRING("_fragmentConstantData"));
	outFields->push(HX_CSTRING("_vertexConstantData"));
	outFields->push(HX_CSTRING("_alphaPremultiplied"));
	outFields->push(HX_CSTRING("_animateUVs"));
	outFields->push(HX_CSTRING("_preserveAlpha"));
	outFields->push(HX_CSTRING("_enableLightFallOff"));
	outFields->push(HX_CSTRING("_mipmap"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_smooth"));
	outFields->push(HX_CSTRING("_methodSetup"));
	outFields->push(HX_CSTRING("_dependencyCounter"));
	outFields->push(HX_CSTRING("_registerCache"));
	outFields->push(HX_CSTRING("_sharedRegisters"));
	outFields->push(HX_CSTRING("lightProbeSpecularIndices"));
	outFields->push(HX_CSTRING("lightProbeDiffuseIndices"));
	outFields->push(HX_CSTRING("usesNormals"));
	outFields->push(HX_CSTRING("animationTargetRegisters"));
	outFields->push(HX_CSTRING("animatableAttributes"));
	outFields->push(HX_CSTRING("usingSpecularMethod"));
	outFields->push(HX_CSTRING("numLightProbes"));
	outFields->push(HX_CSTRING("numDirectionalLights"));
	outFields->push(HX_CSTRING("numPointLights"));
	outFields->push(HX_CSTRING("shadedTarget"));
	outFields->push(HX_CSTRING("fragmentPostLightCode"));
	outFields->push(HX_CSTRING("fragmentLightCode"));
	outFields->push(HX_CSTRING("fragmentCode"));
	outFields->push(HX_CSTRING("vertexCode"));
	outFields->push(HX_CSTRING("probeWeightsIndex"));
	outFields->push(HX_CSTRING("sceneNormalMatrixIndex"));
	outFields->push(HX_CSTRING("sceneMatrixIndex"));
	outFields->push(HX_CSTRING("cameraPositionIndex"));
	outFields->push(HX_CSTRING("lightFragmentConstantIndex"));
	outFields->push(HX_CSTRING("tangentBufferIndex"));
	outFields->push(HX_CSTRING("normalBufferIndex"));
	outFields->push(HX_CSTRING("secondaryUVBufferIndex"));
	outFields->push(HX_CSTRING("uvTransformIndex"));
	outFields->push(HX_CSTRING("uvBufferIndex"));
	outFields->push(HX_CSTRING("diffuseLightSources"));
	outFields->push(HX_CSTRING("specularLightSources"));
	outFields->push(HX_CSTRING("numUsedVaryings"));
	outFields->push(HX_CSTRING("numUsedTextures"));
	outFields->push(HX_CSTRING("numUsedStreams"));
	outFields->push(HX_CSTRING("numUsedFragmentConstants"));
	outFields->push(HX_CSTRING("numUsedVertexConstants"));
	outFields->push(HX_CSTRING("commonsDataIndex"));
	outFields->push(HX_CSTRING("methodSetup"));
	outFields->push(HX_CSTRING("preserveAlpha"));
	outFields->push(HX_CSTRING("alphaPremultiplied"));
	outFields->push(HX_CSTRING("animateUVs"));
	outFields->push(HX_CSTRING("forceSeperateMVP"));
	outFields->push(HX_CSTRING("UVSource"));
	outFields->push(HX_CSTRING("UVTarget"));
	outFields->push(HX_CSTRING("needUVAnimation"));
	outFields->push(HX_CSTRING("enableLightFallOff"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_lightProbeSpecularIndices"),
	HX_CSTRING("get_lightProbeDiffuseIndices"),
	HX_CSTRING("compileMethods"),
	HX_CSTRING("usesLights"),
	HX_CSTRING("get_usesNormals"),
	HX_CSTRING("get_animationTargetRegisters"),
	HX_CSTRING("get_animatableAttributes"),
	HX_CSTRING("get_usingSpecularMethod"),
	HX_CSTRING("set_numLightProbes"),
	HX_CSTRING("get_numLightProbes"),
	HX_CSTRING("set_numDirectionalLights"),
	HX_CSTRING("get_numDirectionalLights"),
	HX_CSTRING("set_numPointLights"),
	HX_CSTRING("get_numPointLights"),
	HX_CSTRING("get_shadedTarget"),
	HX_CSTRING("get_fragmentPostLightCode"),
	HX_CSTRING("get_fragmentLightCode"),
	HX_CSTRING("get_fragmentCode"),
	HX_CSTRING("get_vertexCode"),
	HX_CSTRING("get_probeWeightsIndex"),
	HX_CSTRING("get_sceneNormalMatrixIndex"),
	HX_CSTRING("get_sceneMatrixIndex"),
	HX_CSTRING("get_cameraPositionIndex"),
	HX_CSTRING("get_lightFragmentConstantIndex"),
	HX_CSTRING("get_tangentBufferIndex"),
	HX_CSTRING("get_normalBufferIndex"),
	HX_CSTRING("get_secondaryUVBufferIndex"),
	HX_CSTRING("get_uvTransformIndex"),
	HX_CSTRING("get_uvBufferIndex"),
	HX_CSTRING("usesProbes"),
	HX_CSTRING("usesProbesForDiffuse"),
	HX_CSTRING("usesProbesForSpecular"),
	HX_CSTRING("set_diffuseLightSources"),
	HX_CSTRING("get_diffuseLightSources"),
	HX_CSTRING("set_specularLightSources"),
	HX_CSTRING("get_specularLightSources"),
	HX_CSTRING("cleanUpMethods"),
	HX_CSTRING("dispose"),
	HX_CSTRING("usesLightsForDiffuse"),
	HX_CSTRING("usesLightsForSpecular"),
	HX_CSTRING("get_numUsedVaryings"),
	HX_CSTRING("get_numUsedTextures"),
	HX_CSTRING("get_numUsedStreams"),
	HX_CSTRING("get_numUsedFragmentConstants"),
	HX_CSTRING("get_numUsedVertexConstants"),
	HX_CSTRING("updateMethodRegisters"),
	HX_CSTRING("get_commonsDataIndex"),
	HX_CSTRING("setupMethod"),
	HX_CSTRING("setupAndCountMethodDependencies"),
	HX_CSTRING("calculateDependencies"),
	HX_CSTRING("createCommons"),
	HX_CSTRING("initLightData"),
	HX_CSTRING("initRegisterIndices"),
	HX_CSTRING("compileFragmentOutput"),
	HX_CSTRING("compileProjectionCode"),
	HX_CSTRING("compileGlobalPositionCode"),
	HX_CSTRING("compileSecondaryUVCode"),
	HX_CSTRING("compileUVCode"),
	HX_CSTRING("compileNormalCode"),
	HX_CSTRING("compileViewDirCode"),
	HX_CSTRING("compileLightingCode"),
	HX_CSTRING("compileMethodsCode"),
	HX_CSTRING("createNormalRegisters"),
	HX_CSTRING("compile"),
	HX_CSTRING("set_methodSetup"),
	HX_CSTRING("get_methodSetup"),
	HX_CSTRING("setConstantDataBuffers"),
	HX_CSTRING("setTextureSampling"),
	HX_CSTRING("set_preserveAlpha"),
	HX_CSTRING("get_preserveAlpha"),
	HX_CSTRING("set_alphaPremultiplied"),
	HX_CSTRING("get_alphaPremultiplied"),
	HX_CSTRING("set_animateUVs"),
	HX_CSTRING("get_animateUVs"),
	HX_CSTRING("initRegisterCache"),
	HX_CSTRING("set_forceSeperateMVP"),
	HX_CSTRING("get_forceSeperateMVP"),
	HX_CSTRING("get_UVSource"),
	HX_CSTRING("get_UVTarget"),
	HX_CSTRING("get_needUVAnimation"),
	HX_CSTRING("set_enableLightFallOff"),
	HX_CSTRING("get_enableLightFallOff"),
	HX_CSTRING("_forceSeperateMVP"),
	HX_CSTRING("_profile"),
	HX_CSTRING("_UVSource"),
	HX_CSTRING("_UVTarget"),
	HX_CSTRING("_needUVAnimation"),
	HX_CSTRING("_usingSpecularMethod"),
	HX_CSTRING("_combinedLightSources"),
	HX_CSTRING("_numProbeRegisters"),
	HX_CSTRING("_numDirectionalLights"),
	HX_CSTRING("_numPointLights"),
	HX_CSTRING("_numLightProbes"),
	HX_CSTRING("_numLights"),
	HX_CSTRING("_diffuseLightSources"),
	HX_CSTRING("_specularLightSources"),
	HX_CSTRING("_probeWeightsIndex"),
	HX_CSTRING("_cameraPositionIndex"),
	HX_CSTRING("_sceneNormalMatrixIndex"),
	HX_CSTRING("_sceneMatrixIndex"),
	HX_CSTRING("_lightFragmentConstantIndex"),
	HX_CSTRING("_tangentBufferIndex"),
	HX_CSTRING("_normalBufferIndex"),
	HX_CSTRING("_secondaryUVBufferIndex"),
	HX_CSTRING("_uvTransformIndex"),
	HX_CSTRING("_uvBufferIndex"),
	HX_CSTRING("_lightProbeSpecularIndices"),
	HX_CSTRING("_lightProbeDiffuseIndices"),
	HX_CSTRING("_animationTargetRegisters"),
	HX_CSTRING("_animatableAttributes"),
	HX_CSTRING("_commonsDataIndex"),
	HX_CSTRING("_fragmentPostLightCode"),
	HX_CSTRING("_fragmentLightCode"),
	HX_CSTRING("_fragmentCode"),
	HX_CSTRING("_vertexCode"),
	HX_CSTRING("_fragmentConstantData"),
	HX_CSTRING("_vertexConstantData"),
	HX_CSTRING("_alphaPremultiplied"),
	HX_CSTRING("_animateUVs"),
	HX_CSTRING("_preserveAlpha"),
	HX_CSTRING("_enableLightFallOff"),
	HX_CSTRING("_mipmap"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_smooth"),
	HX_CSTRING("_methodSetup"),
	HX_CSTRING("_dependencyCounter"),
	HX_CSTRING("_registerCache"),
	HX_CSTRING("_sharedRegisters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderCompiler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderCompiler_obj::__mClass,"__mClass");
};

Class ShaderCompiler_obj::__mClass;

void ShaderCompiler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.ShaderCompiler"), hx::TCanCast< ShaderCompiler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderCompiler_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
