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
#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#include <away3d/materials/compilation/SuperShaderCompiler.h>
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
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
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

Void SuperShaderCompiler_obj::__construct(::String profile)
{
HX_STACK_PUSH("SuperShaderCompiler::new","away3d/materials/compilation/SuperShaderCompiler.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct(profile);
}
;
	return null();
}

SuperShaderCompiler_obj::~SuperShaderCompiler_obj() { }

Dynamic SuperShaderCompiler_obj::__CreateEmpty() { return  new SuperShaderCompiler_obj; }
hx::ObjectPtr< SuperShaderCompiler_obj > SuperShaderCompiler_obj::__new(::String profile)
{  hx::ObjectPtr< SuperShaderCompiler_obj > result = new SuperShaderCompiler_obj();
	result->__construct(profile);
	return result;}

Dynamic SuperShaderCompiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SuperShaderCompiler_obj > result = new SuperShaderCompiler_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SuperShaderCompiler_obj::compileLightProbeCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileLightProbeCode","away3d/materials/compilation/SuperShaderCompiler.hx",286);
		HX_STACK_THIS(this);
		HX_STACK_LINE(287)
		::String weightReg;		HX_STACK_VAR(weightReg,"weightReg");
		HX_STACK_LINE(288)
		Dynamic weightComponents = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING(".x")).Add(HX_CSTRING(".y")).Add(HX_CSTRING(".z")).Add(HX_CSTRING(".w")));		HX_STACK_VAR(weightComponents,"weightComponents");
		HX_STACK_LINE(289)
		Array< ::Dynamic > weightRegisters = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(weightRegisters,"weightRegisters");
		HX_STACK_LINE(290)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(291)
		::away3d::materials::compilation::ShaderRegisterElement texReg;		HX_STACK_VAR(texReg,"texReg");
		HX_STACK_LINE(292)
		bool addSpec = (bool(this->_usingSpecularMethod) && bool(this->usesProbesForSpecular()));		HX_STACK_VAR(addSpec,"addSpec");
		HX_STACK_LINE(293)
		bool addDiff = this->usesProbesForDiffuse();		HX_STACK_VAR(addDiff,"addDiff");
		HX_STACK_LINE(294)
		if ((!(((bool(addSpec) || bool(addDiff)))))){
			HX_STACK_LINE(294)
			return null();
		}
		HX_STACK_LINE(295)
		if ((addDiff)){
			HX_STACK_LINE(295)
			this->_lightProbeDiffuseIndices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		}
		HX_STACK_LINE(296)
		if ((addSpec)){
			HX_STACK_LINE(296)
			this->_lightProbeSpecularIndices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		}
		HX_STACK_LINE(297)
		i = (int)0;
		HX_STACK_LINE(298)
		while(((i < this->_numProbeRegisters))){
			HX_STACK_LINE(299)
			weightRegisters[i] = this->_registerCache->getFreeFragmentConstant();
			HX_STACK_LINE(300)
			if (((i == (int)0))){
				HX_STACK_LINE(300)
				this->_probeWeightsIndex = (weightRegisters->__get(i).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * (int)4);
			}
			HX_STACK_LINE(301)
			++(i);
		}
		HX_STACK_LINE(303)
		i = (int)0;
		HX_STACK_LINE(304)
		while(((i < this->_numLightProbes))){
			HX_STACK_LINE(305)
			weightReg = (weightRegisters->__get(::Math_obj::floor((Float(i) / Float((int)4)))).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >()->toString() + weightComponents->__GetItem(hx::Mod(i,(int)4)));
			HX_STACK_LINE(306)
			if ((addDiff)){
				HX_STACK_LINE(307)
				texReg = this->_registerCache->getFreeTextureReg();
				HX_STACK_LINE(308)
				this->_lightProbeDiffuseIndices[i] = texReg->get_index();
				HX_STACK_LINE(309)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_diffuseMethod->getFragmentCodePerProbe(this->_methodSetup->_diffuseMethodVO,texReg,weightReg,this->_registerCache));
			}
			HX_STACK_LINE(311)
			if ((addSpec)){
				HX_STACK_LINE(312)
				texReg = this->_registerCache->getFreeTextureReg();
				HX_STACK_LINE(313)
				this->_lightProbeSpecularIndices[i] = texReg->get_index();
				HX_STACK_LINE(314)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_specularMethod->getFragmentCodePerProbe(this->_methodSetup->_specularMethodVO,texReg,weightReg,this->_registerCache));
			}
			HX_STACK_LINE(316)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileLightProbeCode,(void))

Void SuperShaderCompiler_obj::compilePointLightCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compilePointLightCode","away3d/materials/compilation/SuperShaderCompiler.hx",254);
		HX_STACK_THIS(this);
		HX_STACK_LINE(255)
		::away3d::materials::compilation::ShaderRegisterElement diffuseColorReg;		HX_STACK_VAR(diffuseColorReg,"diffuseColorReg");
		HX_STACK_LINE(256)
		::away3d::materials::compilation::ShaderRegisterElement specularColorReg;		HX_STACK_VAR(specularColorReg,"specularColorReg");
		HX_STACK_LINE(257)
		::away3d::materials::compilation::ShaderRegisterElement lightPosReg;		HX_STACK_VAR(lightPosReg,"lightPosReg");
		HX_STACK_LINE(258)
		::away3d::materials::compilation::ShaderRegisterElement lightDirReg;		HX_STACK_VAR(lightDirReg,"lightDirReg");
		HX_STACK_LINE(259)
		int regIndex = (int)0;		HX_STACK_VAR(regIndex,"regIndex");
		HX_STACK_LINE(260)
		bool addSpec = (bool(this->_usingSpecularMethod) && bool(this->usesLightsForSpecular()));		HX_STACK_VAR(addSpec,"addSpec");
		HX_STACK_LINE(261)
		bool addDiff = this->usesLightsForDiffuse();		HX_STACK_VAR(addDiff,"addDiff");
		HX_STACK_LINE(262)
		if ((!(((bool(addSpec) || bool(addDiff)))))){
			HX_STACK_LINE(262)
			return null();
		}
		HX_STACK_LINE(263)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(264)
		while(((i < this->_numPointLights))){
			HX_STACK_LINE(265)
			lightPosReg = this->_pointLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(266)
			diffuseColorReg = this->_pointLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(267)
			specularColorReg = this->_pointLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(268)
			lightDirReg = this->_registerCache->getFreeFragmentVectorTemp();
			HX_STACK_LINE(269)
			this->_registerCache->addFragmentTempUsages(lightDirReg,(int)1);
			HX_STACK_LINE(271)
			hx::AddEq(this->_fragmentCode,((((((((((((((((((((((((((((((((((((((((((((HX_CSTRING("sub ") + ::Std_obj::string(lightDirReg)) + HX_CSTRING(", ")) + ::Std_obj::string(lightPosReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->globalPositionVarying)) + HX_CSTRING("\n")) + HX_CSTRING("dp3 ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(", ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING("\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(diffuseColorReg)) + HX_CSTRING(".w\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(specularColorReg)) + HX_CSTRING(".w\n")) + HX_CSTRING("sat ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightPosReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING("\n")));
			HX_STACK_LINE(278)
			if (((this->_lightFragmentConstantIndex == (int)-1))){
				HX_STACK_LINE(278)
				this->_lightFragmentConstantIndex = (lightPosReg->get_index() * (int)4);
			}
			HX_STACK_LINE(279)
			if ((addDiff)){
				HX_STACK_LINE(279)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_diffuseMethod->getFragmentCodePerLight(this->_methodSetup->_diffuseMethodVO,lightDirReg,diffuseColorReg,this->_registerCache));
			}
			HX_STACK_LINE(280)
			if ((addSpec)){
				HX_STACK_LINE(280)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_specularMethod->getFragmentCodePerLight(this->_methodSetup->_specularMethodVO,lightDirReg,specularColorReg,this->_registerCache));
			}
			HX_STACK_LINE(281)
			this->_registerCache->removeFragmentTempUsage(lightDirReg);
			HX_STACK_LINE(282)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compilePointLightCode,(void))

Void SuperShaderCompiler_obj::compileDirectionalLightCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileDirectionalLightCode","away3d/materials/compilation/SuperShaderCompiler.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_LINE(236)
		::away3d::materials::compilation::ShaderRegisterElement diffuseColorReg;		HX_STACK_VAR(diffuseColorReg,"diffuseColorReg");
		HX_STACK_LINE(237)
		::away3d::materials::compilation::ShaderRegisterElement specularColorReg;		HX_STACK_VAR(specularColorReg,"specularColorReg");
		HX_STACK_LINE(238)
		::away3d::materials::compilation::ShaderRegisterElement lightDirReg;		HX_STACK_VAR(lightDirReg,"lightDirReg");
		HX_STACK_LINE(239)
		int regIndex = (int)0;		HX_STACK_VAR(regIndex,"regIndex");
		HX_STACK_LINE(240)
		bool addSpec = (bool(this->_usingSpecularMethod) && bool(this->usesLightsForSpecular()));		HX_STACK_VAR(addSpec,"addSpec");
		HX_STACK_LINE(241)
		bool addDiff = this->usesLightsForDiffuse();		HX_STACK_VAR(addDiff,"addDiff");
		HX_STACK_LINE(242)
		if ((!(((bool(addSpec) || bool(addDiff)))))){
			HX_STACK_LINE(242)
			return null();
		}
		HX_STACK_LINE(243)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(244)
		while(((i < this->_numDirectionalLights))){
			HX_STACK_LINE(245)
			lightDirReg = this->_dirLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(246)
			diffuseColorReg = this->_dirLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(247)
			specularColorReg = this->_dirLightRegisters->__get((regIndex)++).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			HX_STACK_LINE(248)
			if ((addDiff)){
				HX_STACK_LINE(248)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_diffuseMethod->getFragmentCodePerLight(this->_methodSetup->_diffuseMethodVO,lightDirReg,diffuseColorReg,this->_registerCache));
			}
			HX_STACK_LINE(249)
			if ((addSpec)){
				HX_STACK_LINE(249)
				hx::AddEq(this->_fragmentCode,this->_methodSetup->_specularMethod->getFragmentCodePerLight(this->_methodSetup->_specularMethodVO,lightDirReg,specularColorReg,this->_registerCache));
			}
			HX_STACK_LINE(250)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileDirectionalLightCode,(void))

Void SuperShaderCompiler_obj::initLightRegisters( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::initLightRegisters","away3d/materials/compilation/SuperShaderCompiler.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_LINE(217)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(218)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(219)
		len = this->_dirLightRegisters->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(220)
		i = (int)0;
		HX_STACK_LINE(221)
		while(((i < len))){
			HX_STACK_LINE(222)
			this->_dirLightRegisters[i] = this->_registerCache->getFreeFragmentConstant();
			HX_STACK_LINE(223)
			if (((this->_lightFragmentConstantIndex == (int)-1))){
				HX_STACK_LINE(223)
				this->_lightFragmentConstantIndex = (this->_dirLightRegisters->__get(i).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * (int)4);
			}
			HX_STACK_LINE(224)
			++(i);
		}
		HX_STACK_LINE(226)
		len = this->_pointLightRegisters->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(227)
		i = (int)0;
		HX_STACK_LINE(228)
		while(((i < len))){
			HX_STACK_LINE(229)
			this->_pointLightRegisters[i] = this->_registerCache->getFreeFragmentConstant();
			HX_STACK_LINE(230)
			if (((this->_lightFragmentConstantIndex == (int)-1))){
				HX_STACK_LINE(230)
				this->_lightFragmentConstantIndex = (this->_pointLightRegisters->__get(i).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * (int)4);
			}
			HX_STACK_LINE(231)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,initLightRegisters,(void))

Void SuperShaderCompiler_obj::compileLightingCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileLightingCode","away3d/materials/compilation/SuperShaderCompiler.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		::away3d::materials::compilation::ShaderRegisterElement shadowReg = null();		HX_STACK_VAR(shadowReg,"shadowReg");
		HX_STACK_LINE(166)
		this->_sharedRegisters->shadedTarget = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(167)
		this->_registerCache->addFragmentTempUsages(this->_sharedRegisters->shadedTarget,(int)1);
		HX_STACK_LINE(168)
		hx::AddEq(this->_vertexCode,this->_methodSetup->_diffuseMethod->getVertexCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache));
		HX_STACK_LINE(169)
		hx::AddEq(this->_fragmentCode,this->_methodSetup->_diffuseMethod->getFragmentPreLightingCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache));
		HX_STACK_LINE(170)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(171)
			hx::AddEq(this->_vertexCode,this->_methodSetup->_specularMethod->getVertexCode(this->_methodSetup->_specularMethodVO,this->_registerCache));
			HX_STACK_LINE(172)
			hx::AddEq(this->_fragmentCode,this->_methodSetup->_specularMethod->getFragmentPreLightingCode(this->_methodSetup->_specularMethodVO,this->_registerCache));
		}
		HX_STACK_LINE(174)
		if ((this->usesLights())){
			HX_STACK_LINE(175)
			this->initLightRegisters();
			HX_STACK_LINE(176)
			this->compileDirectionalLightCode();
			HX_STACK_LINE(177)
			this->compilePointLightCode();
		}
		HX_STACK_LINE(179)
		if ((this->usesProbes())){
			HX_STACK_LINE(179)
			this->compileLightProbeCode();
		}
		HX_STACK_LINE(180)
		hx::AddEq(this->_vertexCode,this->_methodSetup->_ambientMethod->getVertexCode(this->_methodSetup->_ambientMethodVO,this->_registerCache));
		HX_STACK_LINE(181)
		hx::AddEq(this->_fragmentCode,this->_methodSetup->_ambientMethod->getFragmentCode(this->_methodSetup->_ambientMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
		HX_STACK_LINE(182)
		if ((this->_methodSetup->_ambientMethodVO->needsNormals)){
			HX_STACK_LINE(182)
			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
		}
		HX_STACK_LINE(183)
		if ((this->_methodSetup->_ambientMethodVO->needsView)){
			HX_STACK_LINE(183)
			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
		}
		HX_STACK_LINE(184)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(185)
			hx::AddEq(this->_vertexCode,this->_methodSetup->_shadowMethod->getVertexCode(this->_methodSetup->_shadowMethodVO,this->_registerCache));
			HX_STACK_LINE(188)
			if (((this->_dependencyCounter->get_normalDependencies() == (int)0))){
				HX_STACK_LINE(189)
				shadowReg = this->_registerCache->getFreeFragmentVectorTemp();
				HX_STACK_LINE(190)
				this->_registerCache->addFragmentTempUsages(shadowReg,(int)1);
			}
			else{
				HX_STACK_LINE(193)
				shadowReg = this->_sharedRegisters->normalFragment;
			}
			HX_STACK_LINE(194)
			this->_methodSetup->_diffuseMethod->set_shadowRegister(shadowReg);
			HX_STACK_LINE(195)
			hx::AddEq(this->_fragmentCode,this->_methodSetup->_shadowMethod->getFragmentCode(this->_methodSetup->_shadowMethodVO,this->_registerCache,shadowReg));
		}
		HX_STACK_LINE(197)
		hx::AddEq(this->_fragmentCode,this->_methodSetup->_diffuseMethod->getFragmentPostLightingCode(this->_methodSetup->_diffuseMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
		HX_STACK_LINE(198)
		if ((this->_alphaPremultiplied)){
			HX_STACK_LINE(198)
			hx::AddEq(this->_fragmentCode,(((((((((((((((((((((((((HX_CSTRING("add ") + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_CSTRING(".z\n")) + HX_CSTRING("div ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_CSTRING(".z\n")) + HX_CSTRING("sat ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->shadedTarget)) + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(201)
		if ((this->_methodSetup->_diffuseMethodVO->needsNormals)){
			HX_STACK_LINE(201)
			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
		}
		HX_STACK_LINE(202)
		if ((this->_methodSetup->_diffuseMethodVO->needsView)){
			HX_STACK_LINE(202)
			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
		}
		HX_STACK_LINE(203)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(204)
			this->_methodSetup->_specularMethod->set_shadowRegister(shadowReg);
			HX_STACK_LINE(205)
			hx::AddEq(this->_fragmentCode,this->_methodSetup->_specularMethod->getFragmentPostLightingCode(this->_methodSetup->_specularMethodVO,this->_registerCache,this->_sharedRegisters->shadedTarget));
			HX_STACK_LINE(206)
			if ((this->_methodSetup->_specularMethodVO->needsNormals)){
				HX_STACK_LINE(206)
				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->normalFragment);
			}
			HX_STACK_LINE(207)
			if ((this->_methodSetup->_specularMethodVO->needsView)){
				HX_STACK_LINE(207)
				this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
			}
		}
	}
return null();
}


Void SuperShaderCompiler_obj::compileViewDirCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileViewDirCode","away3d/materials/compilation/SuperShaderCompiler.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		::away3d::materials::compilation::ShaderRegisterElement cameraPositionReg = this->_registerCache->getFreeVertexConstant();		HX_STACK_VAR(cameraPositionReg,"cameraPositionReg");
		HX_STACK_LINE(151)
		this->_sharedRegisters->viewDirVarying = this->_registerCache->getFreeVarying();
		HX_STACK_LINE(152)
		this->_sharedRegisters->viewDirFragment = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(153)
		this->_registerCache->addFragmentTempUsages(this->_sharedRegisters->viewDirFragment,this->_dependencyCounter->get_viewDirDependencies());
		HX_STACK_LINE(154)
		this->_cameraPositionIndex = (cameraPositionReg->get_index() * (int)4);
		HX_STACK_LINE(155)
		hx::AddEq(this->_vertexCode,((((((HX_CSTRING("sub ") + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_CSTRING(", ")) + ::Std_obj::string(cameraPositionReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->globalPositionVertex)) + HX_CSTRING("\n")));
		HX_STACK_LINE(156)
		hx::AddEq(this->_fragmentCode,(((((((((HX_CSTRING("nrm ") + ::Std_obj::string(this->_sharedRegisters->viewDirFragment)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->viewDirFragment)) + HX_CSTRING(".w,   ")) + ::Std_obj::string(this->_sharedRegisters->viewDirVarying)) + HX_CSTRING(".w \t\t\n")));
		HX_STACK_LINE(157)
		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
	}
return null();
}


Void SuperShaderCompiler_obj::compileTangentNormalMapFragmentCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileTangentNormalMapFragmentCode","away3d/materials/compilation/SuperShaderCompiler.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(124)
		::away3d::materials::compilation::ShaderRegisterElement t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(125)
		::away3d::materials::compilation::ShaderRegisterElement b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(126)
		::away3d::materials::compilation::ShaderRegisterElement n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(127)
		t = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(128)
		this->_registerCache->addFragmentTempUsages(t,(int)1);
		HX_STACK_LINE(129)
		b = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(130)
		this->_registerCache->addFragmentTempUsages(b,(int)1);
		HX_STACK_LINE(131)
		n = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(132)
		this->_registerCache->addFragmentTempUsages(n,(int)1);
		HX_STACK_LINE(133)
		hx::AddEq(this->_fragmentCode,(((((((((((((((((((HX_CSTRING("nrm ") + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(".w\t\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(b)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_CSTRING("\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(n)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING("\n")));
		HX_STACK_LINE(134)
		::away3d::materials::compilation::ShaderRegisterElement temp = this->_registerCache->getFreeFragmentVectorTemp();		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(135)
		this->_registerCache->addFragmentTempUsages(temp,(int)1);
		HX_STACK_LINE(136)
		hx::AddEq(this->_fragmentCode,((((((((((((this->_methodSetup->_normalMethod->getFragmentCode(this->_methodSetup->_normalMethodVO,this->_registerCache,temp) + HX_CSTRING("m33 ")) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(temp)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\t\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING(".w,   ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".w\t\t\t\n")));
		HX_STACK_LINE(137)
		this->_registerCache->removeFragmentTempUsage(temp);
		HX_STACK_LINE(138)
		if ((this->_methodSetup->_normalMethodVO->needsView)){
			HX_STACK_LINE(138)
			this->_registerCache->removeFragmentTempUsage(this->_sharedRegisters->viewDirFragment);
		}
		HX_STACK_LINE(139)
		if (((bool(this->_methodSetup->_normalMethodVO->needsGlobalVertexPos) || bool(this->_methodSetup->_normalMethodVO->needsGlobalFragmentPos)))){
			HX_STACK_LINE(139)
			this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->globalPositionVertex);
		}
		HX_STACK_LINE(140)
		this->_registerCache->removeFragmentTempUsage(b);
		HX_STACK_LINE(141)
		this->_registerCache->removeFragmentTempUsage(t);
		HX_STACK_LINE(142)
		this->_registerCache->removeFragmentTempUsage(n);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderCompiler_obj,compileTangentNormalMapFragmentCode,(void))

Void SuperShaderCompiler_obj::compileTangentVertexCode( Array< ::Dynamic > matrix){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileTangentVertexCode","away3d/materials/compilation/SuperShaderCompiler.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(110)
		this->_sharedRegisters->tangentVarying = this->_registerCache->getFreeVarying();
		HX_STACK_LINE(111)
		this->_sharedRegisters->bitangentVarying = this->_registerCache->getFreeVarying();
		HX_STACK_LINE(112)
		hx::AddEq(this->_vertexCode,(((((((((((HX_CSTRING("m33 ") + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(", ")) + ::Std_obj::string(matrix->__get((int)0).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_CSTRING("\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING("\n")));
		HX_STACK_LINE(113)
		hx::AddEq(this->_vertexCode,(((((((((((HX_CSTRING("m33 ") + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(", ")) + ::Std_obj::string(matrix->__get((int)0).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_CSTRING("\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING("\n")));
		HX_STACK_LINE(114)
		::away3d::materials::compilation::ShaderRegisterElement bitanTemp = this->_registerCache->getFreeVertexVectorTemp();		HX_STACK_VAR(bitanTemp,"bitanTemp");
		HX_STACK_LINE(115)
		hx::AddEq(this->_vertexCode,((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((HX_CSTRING("mov ") + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(".x, ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(".x  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(".z, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".x  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_CSTRING(".w  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_CSTRING(".x, ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(".y  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_CSTRING(".z, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".y  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_CSTRING(".w  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".x, ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING(".z  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".z, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".z  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->normalInput)) + HX_CSTRING(".w  \n")) + HX_CSTRING("crs ")) + ::Std_obj::string(bitanTemp)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->animatedTangent)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(".y, ")) + ::Std_obj::string(bitanTemp)) + HX_CSTRING(".x    \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->bitangentVarying)) + HX_CSTRING(".y, ")) + ::Std_obj::string(bitanTemp)) + HX_CSTRING(".y  \n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".y, ")) + ::Std_obj::string(bitanTemp)) + HX_CSTRING(".z    \n")));
		HX_STACK_LINE(116)
		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->animatedTangent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderCompiler_obj,compileTangentVertexCode,(void))

Void SuperShaderCompiler_obj::createNormalRegisters( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::createNormalRegisters","away3d/materials/compilation/SuperShaderCompiler.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_LINE(86)
		if (((this->_dependencyCounter->get_normalDependencies() > (int)0))){
			HX_STACK_LINE(87)
			this->_sharedRegisters->normalInput = this->_registerCache->getFreeVertexAttribute();
			HX_STACK_LINE(88)
			this->_normalBufferIndex = this->_sharedRegisters->normalInput->get_index();
			HX_STACK_LINE(89)
			this->_sharedRegisters->animatedNormal = this->_registerCache->getFreeVertexVectorTemp();
			HX_STACK_LINE(90)
			this->_registerCache->addVertexTempUsages(this->_sharedRegisters->animatedNormal,(int)1);
			HX_STACK_LINE(91)
			this->_animatableAttributes->__Field(HX_CSTRING("push"),true)(this->_sharedRegisters->normalInput->toString());
			HX_STACK_LINE(92)
			this->_animationTargetRegisters->__Field(HX_CSTRING("push"),true)(this->_sharedRegisters->animatedNormal->toString());
		}
		HX_STACK_LINE(94)
		if ((this->_methodSetup->_normalMethod->get_hasOutput())){
			HX_STACK_LINE(95)
			this->_sharedRegisters->tangentInput = this->_registerCache->getFreeVertexAttribute();
			HX_STACK_LINE(96)
			this->_tangentBufferIndex = this->_sharedRegisters->tangentInput->get_index();
			HX_STACK_LINE(97)
			this->_sharedRegisters->animatedTangent = this->_registerCache->getFreeVertexVectorTemp();
			HX_STACK_LINE(98)
			this->_registerCache->addVertexTempUsages(this->_sharedRegisters->animatedTangent,(int)1);
			HX_STACK_LINE(99)
			this->_animatableAttributes->__Field(HX_CSTRING("push"),true)(this->_sharedRegisters->tangentInput->toString());
			HX_STACK_LINE(100)
			this->_animationTargetRegisters->__Field(HX_CSTRING("push"),true)(this->_sharedRegisters->animatedTangent->toString());
		}
	}
return null();
}


Void SuperShaderCompiler_obj::compileNormalCode( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::compileNormalCode","away3d/materials/compilation/SuperShaderCompiler.hx",46);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","away3d/materials/compilation/SuperShaderCompiler.hx",47);
				{
					HX_STACK_LINE(47)
					Dynamic array = ::flash::_Vector::Vector_Impl__obj::_new((int)3,true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(47)
					int c = (int)0;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(47)
					while((((c)++ < (int)3))){
						HX_STACK_LINE(47)
						array->__Field(HX_CSTRING("push"),true)(null());
					}
					HX_STACK_LINE(47)
					return array;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		Array< ::Dynamic > normalMatrix = _Function_1_1::Block();		HX_STACK_VAR(normalMatrix,"normalMatrix");
		HX_STACK_LINE(48)
		this->_sharedRegisters->normalFragment = this->_registerCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(49)
		this->_registerCache->addFragmentTempUsages(this->_sharedRegisters->normalFragment,this->_dependencyCounter->get_normalDependencies());
		HX_STACK_LINE(50)
		if (((bool(this->_methodSetup->_normalMethod->get_hasOutput()) && bool(!(this->_methodSetup->_normalMethod->get_tangentSpace()))))){
			HX_STACK_LINE(51)
			hx::AddEq(this->_vertexCode,this->_methodSetup->_normalMethod->getVertexCode(this->_methodSetup->_normalMethodVO,this->_registerCache));
			HX_STACK_LINE(52)
			hx::AddEq(this->_fragmentCode,this->_methodSetup->_normalMethod->getFragmentCode(this->_methodSetup->_normalMethodVO,this->_registerCache,this->_sharedRegisters->normalFragment));
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(55)
		this->_sharedRegisters->normalVarying = this->_registerCache->getFreeVarying();
		HX_STACK_LINE(56)
		normalMatrix[(int)0] = this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(57)
		normalMatrix[(int)1] = this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(58)
		normalMatrix[(int)2] = this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(59)
		this->_registerCache->getFreeVertexConstant();
		HX_STACK_LINE(60)
		this->_sceneNormalMatrixIndex = (normalMatrix->__get((int)0).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >()->get_index() * (int)4);
		HX_STACK_LINE(61)
		if ((this->_methodSetup->_normalMethod->get_hasOutput())){
			HX_STACK_LINE(63)
			this->compileTangentVertexCode(normalMatrix);
			HX_STACK_LINE(64)
			this->compileTangentNormalMapFragmentCode();
		}
		else{
			HX_STACK_LINE(68)
			hx::AddEq(this->_vertexCode,(((((((((((HX_CSTRING("m33 ") + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(", ")) + ::Std_obj::string(normalMatrix->__get((int)0).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >())) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->animatedNormal)) + HX_CSTRING(".w\t\n")));
			HX_STACK_LINE(69)
			hx::AddEq(this->_fragmentCode,(((((((((HX_CSTRING("nrm ") + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->normalVarying)) + HX_CSTRING(".w\t\t\n")));
			HX_STACK_LINE(70)
			if (((this->_dependencyCounter->get_tangentDependencies() > (int)0))){
				HX_STACK_LINE(71)
				this->_sharedRegisters->tangentInput = this->_registerCache->getFreeVertexAttribute();
				HX_STACK_LINE(72)
				this->_tangentBufferIndex = this->_sharedRegisters->tangentInput->get_index();
				HX_STACK_LINE(73)
				this->_sharedRegisters->tangentVarying = this->_registerCache->getFreeVarying();
				HX_STACK_LINE(74)
				hx::AddEq(this->_vertexCode,((((HX_CSTRING("mov ") + ::Std_obj::string(this->_sharedRegisters->tangentVarying)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->tangentInput)) + HX_CSTRING("\n")));
			}
		}
		HX_STACK_LINE(78)
		this->_registerCache->removeVertexTempUsage(this->_sharedRegisters->animatedNormal);
	}
return null();
}


Void SuperShaderCompiler_obj::calculateDependencies( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::calculateDependencies","away3d/materials/compilation/SuperShaderCompiler.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		this->super::calculateDependencies();
		HX_STACK_LINE(39)
		this->_dependencyCounter->addWorldSpaceDependencies(true);
	}
return null();
}


Void SuperShaderCompiler_obj::initLightData( ){
{
		HX_STACK_PUSH("SuperShaderCompiler::initLightData","away3d/materials/compilation/SuperShaderCompiler.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->super::initLightData();
		struct _Function_1_1{
			inline static Dynamic Block( ::away3d::materials::compilation::SuperShaderCompiler_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/materials/compilation/SuperShaderCompiler.hx",29);
				{
					HX_STACK_LINE(29)
					Dynamic array = ::flash::_Vector::Vector_Impl__obj::_new((__this->_numPointLights * (int)3),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(29)
					int c = (int)0;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(29)
					while((((c)++ < (__this->_numPointLights * (int)3)))){
						HX_STACK_LINE(29)
						array->__Field(HX_CSTRING("push"),true)(null());
					}
					HX_STACK_LINE(29)
					return array;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		this->_pointLightRegisters = _Function_1_1::Block(this);
		struct _Function_1_2{
			inline static Dynamic Block( ::away3d::materials::compilation::SuperShaderCompiler_obj *__this){
				HX_STACK_PUSH("*::closure","away3d/materials/compilation/SuperShaderCompiler.hx",30);
				{
					HX_STACK_LINE(30)
					Dynamic array = ::flash::_Vector::Vector_Impl__obj::_new((__this->_numDirectionalLights * (int)3),true);		HX_STACK_VAR(array,"array");
					HX_STACK_LINE(30)
					int c = (int)0;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(30)
					while((((c)++ < (__this->_numDirectionalLights * (int)3)))){
						HX_STACK_LINE(30)
						array->__Field(HX_CSTRING("push"),true)(null());
					}
					HX_STACK_LINE(30)
					return array;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		this->_dirLightRegisters = _Function_1_2::Block(this);
	}
return null();
}



SuperShaderCompiler_obj::SuperShaderCompiler_obj()
{
}

void SuperShaderCompiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuperShaderCompiler);
	HX_MARK_MEMBER_NAME(_dirLightRegisters,"_dirLightRegisters");
	HX_MARK_MEMBER_NAME(_pointLightRegisters,"_pointLightRegisters");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SuperShaderCompiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dirLightRegisters,"_dirLightRegisters");
	HX_VISIT_MEMBER_NAME(_pointLightRegisters,"_pointLightRegisters");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SuperShaderCompiler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"initLightData") ) { return initLightData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"compileNormalCode") ) { return compileNormalCode_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initLightRegisters") ) { return initLightRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"compileViewDirCode") ) { return compileViewDirCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_dirLightRegisters") ) { return _dirLightRegisters; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"compileLightingCode") ) { return compileLightingCode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_pointLightRegisters") ) { return _pointLightRegisters; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"compileLightProbeCode") ) { return compileLightProbeCode_dyn(); }
		if (HX_FIELD_EQ(inName,"compilePointLightCode") ) { return compilePointLightCode_dyn(); }
		if (HX_FIELD_EQ(inName,"createNormalRegisters") ) { return createNormalRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateDependencies") ) { return calculateDependencies_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"compileTangentVertexCode") ) { return compileTangentVertexCode_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"compileDirectionalLightCode") ) { return compileDirectionalLightCode_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"compileTangentNormalMapFragmentCode") ) { return compileTangentNormalMapFragmentCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SuperShaderCompiler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_dirLightRegisters") ) { _dirLightRegisters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_pointLightRegisters") ) { _pointLightRegisters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SuperShaderCompiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dirLightRegisters"));
	outFields->push(HX_CSTRING("_pointLightRegisters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("compileLightProbeCode"),
	HX_CSTRING("compilePointLightCode"),
	HX_CSTRING("compileDirectionalLightCode"),
	HX_CSTRING("initLightRegisters"),
	HX_CSTRING("compileLightingCode"),
	HX_CSTRING("compileViewDirCode"),
	HX_CSTRING("compileTangentNormalMapFragmentCode"),
	HX_CSTRING("compileTangentVertexCode"),
	HX_CSTRING("createNormalRegisters"),
	HX_CSTRING("compileNormalCode"),
	HX_CSTRING("calculateDependencies"),
	HX_CSTRING("initLightData"),
	HX_CSTRING("_dirLightRegisters"),
	HX_CSTRING("_pointLightRegisters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperShaderCompiler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SuperShaderCompiler_obj::__mClass,"__mClass");
};

Class SuperShaderCompiler_obj::__mClass;

void SuperShaderCompiler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.SuperShaderCompiler"), hx::TCanCast< SuperShaderCompiler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SuperShaderCompiler_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
