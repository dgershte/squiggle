#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{
namespace methods{

Void BasicDiffuseMethod_obj::__construct()
{
HX_STACK_PUSH("BasicDiffuseMethod::new","away3d/materials/methods/BasicDiffuseMethod.hx",39);
{
	HX_STACK_LINE(40)
	this->_diffuseColor = (int)16777215;
	HX_STACK_LINE(41)
	this->_diffuseR = (int)1;
	HX_STACK_LINE(42)
	this->_diffuseG = (int)1;
	HX_STACK_LINE(43)
	this->_diffuseB = (int)1;
	HX_STACK_LINE(44)
	this->_diffuseA = (int)1;
	HX_STACK_LINE(45)
	this->_alphaThreshold = (int)0;
	HX_STACK_LINE(46)
	super::__construct();
}
;
	return null();
}

BasicDiffuseMethod_obj::~BasicDiffuseMethod_obj() { }

Dynamic BasicDiffuseMethod_obj::__CreateEmpty() { return  new BasicDiffuseMethod_obj; }
hx::ObjectPtr< BasicDiffuseMethod_obj > BasicDiffuseMethod_obj::__new()
{  hx::ObjectPtr< BasicDiffuseMethod_obj > result = new BasicDiffuseMethod_obj();
	result->__construct();
	return result;}

Dynamic BasicDiffuseMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicDiffuseMethod_obj > result = new BasicDiffuseMethod_obj();
	result->__construct();
	return result;}

::away3d::materials::compilation::ShaderRegisterElement BasicDiffuseMethod_obj::set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value){
	HX_STACK_PUSH("BasicDiffuseMethod::set_shadowRegister","away3d/materials/methods/BasicDiffuseMethod.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(340)
	this->_shadowRegister = value;
	HX_STACK_LINE(341)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_shadowRegister,return )

Void BasicDiffuseMethod_obj::updateDiffuse( ){
{
		HX_STACK_PUSH("BasicDiffuseMethod::updateDiffuse","away3d/materials/methods/BasicDiffuseMethod.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_LINE(330)
		this->_diffuseR = (Float(((int((int(this->_diffuseColor) >> int((int)16))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(331)
		this->_diffuseG = (Float(((int((int(this->_diffuseColor) >> int((int)8))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(332)
		this->_diffuseB = (Float(((int(this->_diffuseColor) & int((int)255)))) / Float((int)255));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,updateDiffuse,(void))

Void BasicDiffuseMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("BasicDiffuseMethod::activate","away3d/materials/methods/BasicDiffuseMethod.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(307)
		if ((this->_useTexture)){
			HX_STACK_LINE(309)
			stage3DProxy->_context3D->setTextureAt(vo->texturesIndex,this->_texture->getTextureForStage3D(stage3DProxy));
			HX_STACK_LINE(310)
			if (((this->_alphaThreshold > (int)0))){
				HX_STACK_LINE(310)
				vo->fragmentData[vo->fragmentConstantsIndex] = this->_alphaThreshold;
			}
		}
		else{
			HX_STACK_LINE(314)
			int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(315)
			Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(317)
			data[index] = this->_diffuseR;
			HX_STACK_LINE(318)
			data[(index + (int)1)] = this->_diffuseG;
			HX_STACK_LINE(319)
			data[(index + (int)2)] = this->_diffuseB;
			HX_STACK_LINE(320)
			data[(index + (int)3)] = this->_diffuseA;
		}
	}
return null();
}


::String BasicDiffuseMethod_obj::applyShadow( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicDiffuseMethod::applyShadow","away3d/materials/methods/BasicDiffuseMethod.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(299)
	return ((((((HX_CSTRING("mul ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_shadowRegister)) + HX_CSTRING(".w\n"));
}


HX_DEFINE_DYNAMIC_FUNC2(BasicDiffuseMethod_obj,applyShadow,return )

::String BasicDiffuseMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("BasicDiffuseMethod::getFragmentPostLightingCode","away3d/materials/methods/BasicDiffuseMethod.hx",241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(242)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(243)
	::away3d::materials::compilation::ShaderRegisterElement albedo;		HX_STACK_VAR(albedo,"albedo");
	HX_STACK_LINE(244)
	::away3d::materials::compilation::ShaderRegisterElement cutOffReg;		HX_STACK_VAR(cutOffReg,"cutOffReg");
	HX_STACK_LINE(246)
	if (((vo->numLights > (int)0))){
		HX_STACK_LINE(247)
		if (((this->_shadowRegister != null()))){
			HX_STACK_LINE(247)
			hx::AddEq(code,this->applyShadow(vo,regCache));
		}
		HX_STACK_LINE(248)
		albedo = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(249)
		regCache->addFragmentTempUsages(albedo,(int)1);
	}
	else{
		HX_STACK_LINE(252)
		albedo = targetReg;
	}
	HX_STACK_LINE(253)
	if ((this->_useTexture)){
		HX_STACK_LINE(254)
		this->_diffuseInputRegister = regCache->getFreeTextureReg();
		HX_STACK_LINE(255)
		vo->texturesIndex = this->_diffuseInputRegister->get_index();
		HX_STACK_LINE(256)
		hx::AddEq(code,this->getTex2DSampleCode(vo,albedo,this->_diffuseInputRegister,this->_texture,null(),null()));
		HX_STACK_LINE(257)
		if (((this->_alphaThreshold > (int)0))){
			HX_STACK_LINE(258)
			cutOffReg = regCache->getFreeFragmentConstant();
			HX_STACK_LINE(259)
			vo->fragmentConstantsIndex = (cutOffReg->get_index() * (int)4);
			HX_STACK_LINE(260)
			hx::AddEq(code,((((((((((((((((HX_CSTRING("sub ") + ::Std_obj::string(albedo)) + HX_CSTRING(".w, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(".w, ")) + ::Std_obj::string(cutOffReg)) + HX_CSTRING(".x\n")) + HX_CSTRING("kil ")) + ::Std_obj::string(albedo)) + HX_CSTRING(".w\n")) + HX_CSTRING("add ")) + ::Std_obj::string(albedo)) + HX_CSTRING(".w, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(".w, ")) + ::Std_obj::string(cutOffReg)) + HX_CSTRING(".x\n")));
		}
	}
	else{
		HX_STACK_LINE(265)
		this->_diffuseInputRegister = regCache->getFreeFragmentConstant();
		HX_STACK_LINE(266)
		vo->fragmentConstantsIndex = (this->_diffuseInputRegister->get_index() * (int)4);
		HX_STACK_LINE(267)
		hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(albedo)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_diffuseInputRegister)) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(270)
	if (((vo->numLights == (int)0))){
		HX_STACK_LINE(270)
		return code;
	}
	HX_STACK_LINE(271)
	hx::AddEq(code,((((HX_CSTRING("sat ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING("\n")));
	HX_STACK_LINE(272)
	if ((this->_useAmbientTexture)){
		HX_STACK_LINE(272)
		hx::AddEq(code,(((((((((((((((((((((((((((HX_CSTRING("mul ") + ::Std_obj::string(albedo)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING("\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING("\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING("\n")) + HX_CSTRING("add ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING("\n")));
	}
	else{
		HX_STACK_LINE(277)
		hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING("\n")));
		HX_STACK_LINE(278)
		if ((this->_useTexture)){
			HX_STACK_LINE(278)
			hx::AddEq(code,(((((((((((HX_CSTRING("mul ") + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(albedo)) + HX_CSTRING(".w\n")));
		}
		else{
			HX_STACK_LINE(282)
			hx::AddEq(code,(((((((((((HX_CSTRING("mul ") + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_diffuseInputRegister)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING("\n")) + HX_CSTRING("mov ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_diffuseInputRegister)) + HX_CSTRING(".w\n")));
		}
	}
	HX_STACK_LINE(288)
	regCache->removeFragmentTempUsage(this->_totalLightColorReg);
	HX_STACK_LINE(289)
	regCache->removeFragmentTempUsage(albedo);
	HX_STACK_LINE(290)
	return code;
}


::String BasicDiffuseMethod_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicDiffuseMethod::getFragmentCodePerProbe","away3d/materials/methods/BasicDiffuseMethod.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(cubeMapReg,"cubeMapReg");
	HX_STACK_ARG(weightRegister,"weightRegister");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(218)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(219)
	::away3d::materials::compilation::ShaderRegisterElement t;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(221)
	if ((this->_isFirstLight)){
		HX_STACK_LINE(221)
		t = this->_totalLightColorReg;
	}
	else{
		HX_STACK_LINE(223)
		t = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(224)
		regCache->addFragmentTempUsages(t,(int)1);
	}
	HX_STACK_LINE(227)
	hx::AddEq(code,(((((((((((((HX_CSTRING("tex ") + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING(", ")) + ::Std_obj::string(cubeMapReg)) + HX_CSTRING(" <cube,linear,miplinear>\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + weightRegister) + HX_CSTRING("\n")));
	HX_STACK_LINE(228)
	if (((this->_modulateMethod != null()))){
		HX_STACK_LINE(228)
		hx::AddEq(code,::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
	}
	HX_STACK_LINE(229)
	if ((!(this->_isFirstLight))){
		HX_STACK_LINE(230)
		hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")));
		HX_STACK_LINE(231)
		regCache->removeFragmentTempUsage(t);
	}
	HX_STACK_LINE(233)
	this->_isFirstLight = false;
	HX_STACK_LINE(234)
	return code;
}


::String BasicDiffuseMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicDiffuseMethod::getFragmentCodePerLight","away3d/materials/methods/BasicDiffuseMethod.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(lightDirReg,"lightDirReg");
	HX_STACK_ARG(lightColReg,"lightColReg");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(192)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(193)
	::away3d::materials::compilation::ShaderRegisterElement t;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(195)
	if ((this->_isFirstLight)){
		HX_STACK_LINE(195)
		t = this->_totalLightColorReg;
	}
	else{
		HX_STACK_LINE(197)
		t = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(198)
		regCache->addFragmentTempUsages(t,(int)1);
	}
	HX_STACK_LINE(201)
	hx::AddEq(code,(((((((((((((HX_CSTRING("dp3 ") + ::Std_obj::string(t)) + HX_CSTRING(".x, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_sharedRegisters->normalFragment)) + HX_CSTRING("\n")) + HX_CSTRING("max ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".x, ")) + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_CSTRING(".y\n")));
	HX_STACK_LINE(202)
	if ((vo->useLightFallOff)){
		HX_STACK_LINE(202)
		hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w\n")));
	}
	HX_STACK_LINE(203)
	if (((this->_modulateMethod != null()))){
		HX_STACK_LINE(203)
		hx::AddEq(code,::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
	}
	HX_STACK_LINE(204)
	hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightColReg)) + HX_CSTRING("\n")));
	HX_STACK_LINE(205)
	if ((!(this->_isFirstLight))){
		HX_STACK_LINE(206)
		hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")));
		HX_STACK_LINE(207)
		regCache->removeFragmentTempUsage(t);
	}
	HX_STACK_LINE(209)
	this->_isFirstLight = false;
	HX_STACK_LINE(210)
	return code;
}


::String BasicDiffuseMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicDiffuseMethod::getFragmentPreLightingCode","away3d/materials/methods/BasicDiffuseMethod.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(178)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(179)
	this->_isFirstLight = true;
	HX_STACK_LINE(180)
	if (((vo->numLights > (int)0))){
		HX_STACK_LINE(181)
		this->_totalLightColorReg = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(182)
		regCache->addFragmentTempUsages(this->_totalLightColorReg,(int)1);
	}
	HX_STACK_LINE(184)
	return code;
}


Void BasicDiffuseMethod_obj::cleanCompilationData( ){
{
		HX_STACK_PUSH("BasicDiffuseMethod::cleanCompilationData","away3d/materials/methods/BasicDiffuseMethod.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_LINE(167)
		this->super::cleanCompilationData();
		HX_STACK_LINE(168)
		this->_shadowRegister = null();
		HX_STACK_LINE(169)
		this->_totalLightColorReg = null();
		HX_STACK_LINE(170)
		this->_diffuseInputRegister = null();
	}
return null();
}


Void BasicDiffuseMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("BasicDiffuseMethod::copyFrom","away3d/materials/methods/BasicDiffuseMethod.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(154)
		::away3d::materials::methods::BasicDiffuseMethod diff = hx::TCast< away3d::materials::methods::BasicDiffuseMethod >::cast(method);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(155)
		this->set_alphaThreshold(diff->get_alphaThreshold());
		HX_STACK_LINE(156)
		this->set_texture(diff->get_texture());
		HX_STACK_LINE(157)
		this->set_useAmbientTexture(diff->get_useAmbientTexture());
		HX_STACK_LINE(158)
		this->set_diffuseAlpha(diff->get_diffuseAlpha());
		HX_STACK_LINE(159)
		this->set_diffuseColor(diff->get_diffuseColor());
	}
return null();
}


Void BasicDiffuseMethod_obj::dispose( ){
{
		HX_STACK_PUSH("BasicDiffuseMethod::dispose","away3d/materials/methods/BasicDiffuseMethod.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_LINE(145)
		this->_texture = null();
	}
return null();
}


Float BasicDiffuseMethod_obj::set_alphaThreshold( Float value){
	HX_STACK_PUSH("BasicDiffuseMethod::set_alphaThreshold","away3d/materials/methods/BasicDiffuseMethod.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(133)
	if (((value < (int)0))){
		HX_STACK_LINE(133)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(134)
		if (((value > (int)1))){
			HX_STACK_LINE(134)
			value = (int)1;
		}
	}
	HX_STACK_LINE(135)
	if (((value == this->_alphaThreshold))){
		HX_STACK_LINE(135)
		return value;
	}
	HX_STACK_LINE(136)
	if (((bool((value == (int)0)) || bool((this->_alphaThreshold == (int)0))))){
		HX_STACK_LINE(136)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(137)
	this->_alphaThreshold = value;
	HX_STACK_LINE(138)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_alphaThreshold,return )

Float BasicDiffuseMethod_obj::get_alphaThreshold( ){
	HX_STACK_PUSH("BasicDiffuseMethod::get_alphaThreshold","away3d/materials/methods/BasicDiffuseMethod.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return this->_alphaThreshold;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_alphaThreshold,return )

::away3d::textures::Texture2DBase BasicDiffuseMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("BasicDiffuseMethod::set_texture","away3d/materials/methods/BasicDiffuseMethod.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(114)
	if (((bool((hx::TCast< Bool >::cast((value != null())) != this->_useTexture)) || bool((bool((bool((value != null())) && bool((this->_texture != null())))) && bool(((bool((value->get_hasMipMaps() != this->_texture->get_hasMipMaps())) || bool((value->get_format() != this->_texture->get_format())))))))))){
		HX_STACK_LINE(114)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(117)
	this->_useTexture = hx::TCast< Bool >::cast((value != null()));
	HX_STACK_LINE(118)
	this->_texture = value;
	HX_STACK_LINE(119)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_texture,return )

::away3d::textures::Texture2DBase BasicDiffuseMethod_obj::get_texture( ){
	HX_STACK_PUSH("BasicDiffuseMethod::get_texture","away3d/materials/methods/BasicDiffuseMethod.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_LINE(109)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_texture,return )

int BasicDiffuseMethod_obj::set_diffuseColor( int diffuseColor){
	HX_STACK_PUSH("BasicDiffuseMethod::set_diffuseColor","away3d/materials/methods/BasicDiffuseMethod.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(diffuseColor,"diffuseColor");
	HX_STACK_LINE(100)
	this->_diffuseColor = diffuseColor;
	HX_STACK_LINE(101)
	this->updateDiffuse();
	HX_STACK_LINE(102)
	return diffuseColor;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_diffuseColor,return )

int BasicDiffuseMethod_obj::get_diffuseColor( ){
	HX_STACK_PUSH("BasicDiffuseMethod::get_diffuseColor","away3d/materials/methods/BasicDiffuseMethod.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->_diffuseColor;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_diffuseColor,return )

Float BasicDiffuseMethod_obj::set_diffuseAlpha( Float value){
	HX_STACK_PUSH("BasicDiffuseMethod::set_diffuseAlpha","away3d/materials/methods/BasicDiffuseMethod.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(87)
	this->_diffuseA = value;
	HX_STACK_LINE(88)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_diffuseAlpha,return )

Float BasicDiffuseMethod_obj::get_diffuseAlpha( ){
	HX_STACK_PUSH("BasicDiffuseMethod::get_diffuseAlpha","away3d/materials/methods/BasicDiffuseMethod.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->_diffuseA;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_diffuseAlpha,return )

Void BasicDiffuseMethod_obj::generateMip( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("BasicDiffuseMethod::generateMip","away3d/materials/methods/BasicDiffuseMethod.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(74)
		if ((this->_useTexture)){
			HX_STACK_LINE(75)
			this->_texture->getTextureForStage3D(stage3DProxy);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,generateMip,(void))

Void BasicDiffuseMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("BasicDiffuseMethod::initVO","away3d/materials/methods/BasicDiffuseMethod.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(65)
		vo->needsUV = this->_useTexture;
		HX_STACK_LINE(66)
		vo->needsNormals = (vo->numLights > (int)0);
	}
return null();
}


bool BasicDiffuseMethod_obj::set_useAmbientTexture( bool value){
	HX_STACK_PUSH("BasicDiffuseMethod::set_useAmbientTexture","away3d/materials/methods/BasicDiffuseMethod.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(58)
	if (((this->_useAmbientTexture == value))){
		HX_STACK_LINE(58)
		return value;
	}
	HX_STACK_LINE(59)
	this->_useAmbientTexture = value;
	HX_STACK_LINE(60)
	this->invalidateShaderProgram();
	HX_STACK_LINE(61)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicDiffuseMethod_obj,set_useAmbientTexture,return )

bool BasicDiffuseMethod_obj::get_useAmbientTexture( ){
	HX_STACK_PUSH("BasicDiffuseMethod::get_useAmbientTexture","away3d/materials/methods/BasicDiffuseMethod.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->_useAmbientTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicDiffuseMethod_obj,get_useAmbientTexture,return )


BasicDiffuseMethod_obj::BasicDiffuseMethod_obj()
{
}

void BasicDiffuseMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicDiffuseMethod);
	HX_MARK_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_MARK_MEMBER_NAME(_diffuseA,"_diffuseA");
	HX_MARK_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_MARK_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_MARK_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_MARK_MEMBER_NAME(_diffuseColor,"_diffuseColor");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_diffuseInputRegister,"_diffuseInputRegister");
	HX_MARK_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_useAmbientTexture,"_useAmbientTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicDiffuseMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_VISIT_MEMBER_NAME(_diffuseA,"_diffuseA");
	HX_VISIT_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_VISIT_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_VISIT_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_VISIT_MEMBER_NAME(_diffuseColor,"_diffuseColor");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_diffuseInputRegister,"_diffuseInputRegister");
	HX_VISIT_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_useAmbientTexture,"_useAmbientTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BasicDiffuseMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return get_texture(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diffuseA") ) { return _diffuseA; }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { return _diffuseB; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { return _diffuseG; }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { return _diffuseR; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyShadow") ) { return applyShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMip") ) { return generateMip_dyn(); }
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return _useTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { return get_diffuseColor(); }
		if (HX_FIELD_EQ(inName,"diffuseAlpha") ) { return get_diffuseAlpha(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDiffuse") ) { return updateDiffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { return _isFirstLight; }
		if (HX_FIELD_EQ(inName,"_diffuseColor") ) { return _diffuseColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return get_alphaThreshold(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { return _alphaThreshold; }
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { return _shadowRegister; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_diffuseColor") ) { return set_diffuseColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseColor") ) { return get_diffuseColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_diffuseAlpha") ) { return set_diffuseAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseAlpha") ) { return get_diffuseAlpha_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useAmbientTexture") ) { return get_useAmbientTexture(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_shadowRegister") ) { return set_shadowRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return set_alphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return get_alphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"_useAmbientTexture") ) { return _useAmbientTexture; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { return _totalLightColorReg; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return cleanCompilationData_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_useAmbientTexture") ) { return set_useAmbientTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useAmbientTexture") ) { return get_useAmbientTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_diffuseInputRegister") ) { return _diffuseInputRegister; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return getFragmentCodePerProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return getFragmentCodePerLight_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return getFragmentPreLightingCode_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return getFragmentPostLightingCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicDiffuseMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return set_texture(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diffuseA") ) { _diffuseA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { _diffuseB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { _diffuseG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { _diffuseR=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"diffuseColor") ) { return set_diffuseColor(inValue); }
		if (HX_FIELD_EQ(inName,"diffuseAlpha") ) { return set_diffuseAlpha(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { _isFirstLight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseColor") ) { _diffuseColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shadowRegister") ) { return set_shadowRegister(inValue); }
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return set_alphaThreshold(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { _shadowRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useAmbientTexture") ) { return set_useAmbientTexture(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_useAmbientTexture") ) { _useAmbientTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { _totalLightColorReg=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_diffuseInputRegister") ) { _diffuseInputRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicDiffuseMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isFirstLight"));
	outFields->push(HX_CSTRING("_alphaThreshold"));
	outFields->push(HX_CSTRING("_shadowRegister"));
	outFields->push(HX_CSTRING("_diffuseA"));
	outFields->push(HX_CSTRING("_diffuseB"));
	outFields->push(HX_CSTRING("_diffuseG"));
	outFields->push(HX_CSTRING("_diffuseR"));
	outFields->push(HX_CSTRING("_diffuseColor"));
	outFields->push(HX_CSTRING("_texture"));
	outFields->push(HX_CSTRING("_diffuseInputRegister"));
	outFields->push(HX_CSTRING("_totalLightColorReg"));
	outFields->push(HX_CSTRING("_useTexture"));
	outFields->push(HX_CSTRING("_useAmbientTexture"));
	outFields->push(HX_CSTRING("shadowRegister"));
	outFields->push(HX_CSTRING("alphaThreshold"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("diffuseColor"));
	outFields->push(HX_CSTRING("diffuseAlpha"));
	outFields->push(HX_CSTRING("useAmbientTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_shadowRegister"),
	HX_CSTRING("updateDiffuse"),
	HX_CSTRING("activate"),
	HX_CSTRING("applyShadow"),
	HX_CSTRING("getFragmentPostLightingCode"),
	HX_CSTRING("getFragmentCodePerProbe"),
	HX_CSTRING("getFragmentCodePerLight"),
	HX_CSTRING("getFragmentPreLightingCode"),
	HX_CSTRING("cleanCompilationData"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_alphaThreshold"),
	HX_CSTRING("get_alphaThreshold"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_diffuseColor"),
	HX_CSTRING("get_diffuseColor"),
	HX_CSTRING("set_diffuseAlpha"),
	HX_CSTRING("get_diffuseAlpha"),
	HX_CSTRING("generateMip"),
	HX_CSTRING("initVO"),
	HX_CSTRING("set_useAmbientTexture"),
	HX_CSTRING("get_useAmbientTexture"),
	HX_CSTRING("_isFirstLight"),
	HX_CSTRING("_alphaThreshold"),
	HX_CSTRING("_shadowRegister"),
	HX_CSTRING("_diffuseA"),
	HX_CSTRING("_diffuseB"),
	HX_CSTRING("_diffuseG"),
	HX_CSTRING("_diffuseR"),
	HX_CSTRING("_diffuseColor"),
	HX_CSTRING("_texture"),
	HX_CSTRING("_diffuseInputRegister"),
	HX_CSTRING("_totalLightColorReg"),
	HX_CSTRING("_useTexture"),
	HX_CSTRING("_useAmbientTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicDiffuseMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicDiffuseMethod_obj::__mClass,"__mClass");
};

Class BasicDiffuseMethod_obj::__mClass;

void BasicDiffuseMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.BasicDiffuseMethod"), hx::TCanCast< BasicDiffuseMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicDiffuseMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
