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
#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#include <away3d/materials/methods/BasicSpecularMethod.h>
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

Void BasicSpecularMethod_obj::__construct()
{
HX_STACK_PUSH("BasicSpecularMethod::new","away3d/materials/methods/BasicSpecularMethod.hx",37);
{
	HX_STACK_LINE(38)
	this->_gloss = (int)50;
	HX_STACK_LINE(39)
	this->_specular = (int)1;
	HX_STACK_LINE(40)
	this->_specularColor = (int)16777215;
	HX_STACK_LINE(41)
	this->_specularR = (int)1;
	HX_STACK_LINE(42)
	this->_specularG = (int)1;
	HX_STACK_LINE(43)
	this->_specularB = (int)1;
	HX_STACK_LINE(44)
	super::__construct();
}
;
	return null();
}

BasicSpecularMethod_obj::~BasicSpecularMethod_obj() { }

Dynamic BasicSpecularMethod_obj::__CreateEmpty() { return  new BasicSpecularMethod_obj; }
hx::ObjectPtr< BasicSpecularMethod_obj > BasicSpecularMethod_obj::__new()
{  hx::ObjectPtr< BasicSpecularMethod_obj > result = new BasicSpecularMethod_obj();
	result->__construct();
	return result;}

Dynamic BasicSpecularMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicSpecularMethod_obj > result = new BasicSpecularMethod_obj();
	result->__construct();
	return result;}

::away3d::materials::compilation::ShaderRegisterElement BasicSpecularMethod_obj::set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement shadowReg){
	HX_STACK_PUSH("BasicSpecularMethod::set_shadowRegister","away3d/materials/methods/BasicSpecularMethod.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shadowReg,"shadowReg");
	HX_STACK_LINE(280)
	this->_shadowRegister = shadowReg;
	HX_STACK_LINE(281)
	return shadowReg;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_shadowRegister,return )

Void BasicSpecularMethod_obj::updateSpecular( ){
{
		HX_STACK_PUSH("BasicSpecularMethod::updateSpecular","away3d/materials/methods/BasicSpecularMethod.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_LINE(270)
		this->_specularR = ((Float(((int((int(this->_specularColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) * this->_specular);
		HX_STACK_LINE(271)
		this->_specularG = ((Float(((int((int(this->_specularColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) * this->_specular);
		HX_STACK_LINE(272)
		this->_specularB = ((Float(((int(this->_specularColor) & int((int)255)))) / Float((int)255)) * this->_specular);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,updateSpecular,(void))

Void BasicSpecularMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("BasicSpecularMethod::activate","away3d/materials/methods/BasicSpecularMethod.hx",253);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(255)
		if (((vo->numLights == (int)0))){
			HX_STACK_LINE(255)
			return null();
		}
		HX_STACK_LINE(256)
		if ((this->_useTexture)){
			HX_STACK_LINE(256)
			stage3DProxy->_context3D->setTextureAt(vo->texturesIndex,this->_texture->getTextureForStage3D(stage3DProxy));
		}
		HX_STACK_LINE(257)
		int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(258)
		Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(259)
		data[index] = this->_specularR;
		HX_STACK_LINE(260)
		data[(index + (int)1)] = this->_specularG;
		HX_STACK_LINE(261)
		data[(index + (int)2)] = this->_specularB;
		HX_STACK_LINE(262)
		data[(index + (int)3)] = this->_gloss;
	}
return null();
}


::String BasicSpecularMethod_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("BasicSpecularMethod::getFragmentPostLightingCode","away3d/materials/methods/BasicSpecularMethod.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(236)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(237)
	if (((vo->numLights == (int)0))){
		HX_STACK_LINE(237)
		return code;
	}
	HX_STACK_LINE(238)
	if (((this->_shadowRegister != null()))){
		HX_STACK_LINE(238)
		hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_shadowRegister)) + HX_CSTRING(".w\n")));
	}
	HX_STACK_LINE(239)
	if ((this->_useTexture)){
		HX_STACK_LINE(241)
		hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_specularTexData)) + HX_CSTRING(".x\n")));
		HX_STACK_LINE(242)
		regCache->removeFragmentTempUsage(this->_specularTexData);
	}
	HX_STACK_LINE(244)
	hx::AddEq(code,(((((((((((((HX_CSTRING("mul ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_specularDataRegister)) + HX_CSTRING("\n")) + HX_CSTRING("add ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING("\n")));
	HX_STACK_LINE(245)
	regCache->removeFragmentTempUsage(this->_totalLightColorReg);
	HX_STACK_LINE(246)
	return code;
}


::String BasicSpecularMethod_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicSpecularMethod::getFragmentCodePerProbe","away3d/materials/methods/BasicSpecularMethod.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(cubeMapReg,"cubeMapReg");
	HX_STACK_ARG(weightRegister,"weightRegister");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(210)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(211)
	::away3d::materials::compilation::ShaderRegisterElement t;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(213)
	if ((this->_isFirstLight)){
		HX_STACK_LINE(213)
		t = this->_totalLightColorReg;
	}
	else{
		HX_STACK_LINE(215)
		t = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(216)
		regCache->addFragmentTempUsages(t,(int)1);
	}
	HX_STACK_LINE(219)
	::away3d::materials::compilation::ShaderRegisterElement normalReg = this->_sharedRegisters->normalFragment;		HX_STACK_VAR(normalReg,"normalReg");
	HX_STACK_LINE(220)
	::away3d::materials::compilation::ShaderRegisterElement viewDirReg = this->_sharedRegisters->viewDirFragment;		HX_STACK_VAR(viewDirReg,"viewDirReg");
	HX_STACK_LINE(221)
	hx::AddEq(code,(((((((((((((((((((((((((((((((((((((((((((HX_CSTRING("dp3 ") + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(normalReg)) + HX_CSTRING(", ")) + ::Std_obj::string(viewDirReg)) + HX_CSTRING("\n")) + HX_CSTRING("add ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(normalReg)) + HX_CSTRING("\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(viewDirReg)) + HX_CSTRING("\n")) + HX_CSTRING("tex ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(cubeMapReg)) + HX_CSTRING(" <cube,")) + ((  ((vo->useSmoothTextures)) ? ::String(HX_CSTRING("linear")) : ::String(HX_CSTRING("nearest")) ))) + HX_CSTRING(",miplinear>\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(t)) + HX_CSTRING(", ")) + weightRegister) + HX_CSTRING("\n")));
	HX_STACK_LINE(222)
	if (((this->_modulateMethod != null()))){
		HX_STACK_LINE(222)
		hx::AddEq(code,::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
	}
	HX_STACK_LINE(223)
	if ((!(this->_isFirstLight))){
		HX_STACK_LINE(224)
		hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")));
		HX_STACK_LINE(225)
		regCache->removeFragmentTempUsage(t);
	}
	HX_STACK_LINE(227)
	this->_isFirstLight = false;
	HX_STACK_LINE(228)
	return code;
}


::String BasicSpecularMethod_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicSpecularMethod::getFragmentCodePerLight","away3d/materials/methods/BasicSpecularMethod.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(lightDirReg,"lightDirReg");
	HX_STACK_ARG(lightColReg,"lightColReg");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(175)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(176)
	::away3d::materials::compilation::ShaderRegisterElement t;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(177)
	if ((this->_isFirstLight)){
		HX_STACK_LINE(177)
		t = this->_totalLightColorReg;
	}
	else{
		HX_STACK_LINE(179)
		t = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(180)
		regCache->addFragmentTempUsages(t,(int)1);
	}
	HX_STACK_LINE(183)
	::away3d::materials::compilation::ShaderRegisterElement viewDirReg = this->_sharedRegisters->viewDirFragment;		HX_STACK_VAR(viewDirReg,"viewDirReg");
	HX_STACK_LINE(184)
	::away3d::materials::compilation::ShaderRegisterElement normalReg = this->_sharedRegisters->normalFragment;		HX_STACK_VAR(normalReg,"normalReg");
	HX_STACK_LINE(186)
	hx::AddEq(code,(((((((((((((((((((((((HX_CSTRING("add ") + ::Std_obj::string(t)) + HX_CSTRING(", ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(", ")) + ::Std_obj::string(viewDirReg)) + HX_CSTRING("\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")) + HX_CSTRING("dp3 ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(normalReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")) + HX_CSTRING("sat ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w\n")));
	HX_STACK_LINE(187)
	if ((this->_useTexture)){
		HX_STACK_LINE(187)
		hx::AddEq(code,(((((((((((((HX_CSTRING("mul ") + ::Std_obj::string(this->_specularTexData)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_specularTexData)) + HX_CSTRING(".y, ")) + ::Std_obj::string(this->_specularDataRegister)) + HX_CSTRING(".w\n")) + HX_CSTRING("pow ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_specularTexData)) + HX_CSTRING(".w\n")));
	}
	else{
		HX_STACK_LINE(192)
		hx::AddEq(code,((((((HX_CSTRING("pow ") + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_specularDataRegister)) + HX_CSTRING(".w\n")));
	}
	HX_STACK_LINE(194)
	if ((vo->useLightFallOff)){
		HX_STACK_LINE(194)
		hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(t)) + HX_CSTRING(".w, ")) + ::Std_obj::string(lightDirReg)) + HX_CSTRING(".w\n")));
	}
	HX_STACK_LINE(195)
	if (((this->_modulateMethod != null()))){
		HX_STACK_LINE(195)
		hx::AddEq(code,::Std_obj::string(this->_modulateMethod(vo,t,regCache,this->_sharedRegisters)));
	}
	HX_STACK_LINE(196)
	hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(t)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(lightColReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING(".w\n")));
	HX_STACK_LINE(197)
	if ((!(this->_isFirstLight))){
		HX_STACK_LINE(198)
		hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_totalLightColorReg)) + HX_CSTRING(", ")) + ::Std_obj::string(t)) + HX_CSTRING("\n")));
		HX_STACK_LINE(199)
		regCache->removeFragmentTempUsage(t);
	}
	HX_STACK_LINE(201)
	this->_isFirstLight = false;
	HX_STACK_LINE(202)
	return code;
}


::String BasicSpecularMethod_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache){
	HX_STACK_PUSH("BasicSpecularMethod::getFragmentPreLightingCode","away3d/materials/methods/BasicSpecularMethod.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_LINE(150)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(151)
	this->_isFirstLight = true;
	HX_STACK_LINE(152)
	if (((vo->numLights > (int)0))){
		HX_STACK_LINE(153)
		this->_specularDataRegister = regCache->getFreeFragmentConstant();
		HX_STACK_LINE(154)
		vo->fragmentConstantsIndex = (this->_specularDataRegister->get_index() * (int)4);
		HX_STACK_LINE(155)
		if ((this->_useTexture)){
			HX_STACK_LINE(156)
			this->_specularTexData = regCache->getFreeFragmentVectorTemp();
			HX_STACK_LINE(157)
			regCache->addFragmentTempUsages(this->_specularTexData,(int)1);
			HX_STACK_LINE(158)
			this->_specularTextureRegister = regCache->getFreeTextureReg();
			HX_STACK_LINE(159)
			vo->texturesIndex = this->_specularTextureRegister->get_index();
			HX_STACK_LINE(160)
			code = this->getTex2DSampleCode(vo,this->_specularTexData,this->_specularTextureRegister,this->_texture,null(),null());
		}
		else{
			HX_STACK_LINE(163)
			this->_specularTextureRegister = null();
		}
		HX_STACK_LINE(164)
		this->_totalLightColorReg = regCache->getFreeFragmentVectorTemp();
		HX_STACK_LINE(165)
		regCache->addFragmentTempUsages(this->_totalLightColorReg,(int)1);
	}
	HX_STACK_LINE(167)
	return code;
}


Void BasicSpecularMethod_obj::cleanCompilationData( ){
{
		HX_STACK_PUSH("BasicSpecularMethod::cleanCompilationData","away3d/materials/methods/BasicSpecularMethod.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(137)
		this->super::cleanCompilationData();
		HX_STACK_LINE(138)
		this->_shadowRegister = null();
		HX_STACK_LINE(139)
		this->_totalLightColorReg = null();
		HX_STACK_LINE(140)
		this->_specularTextureRegister = null();
		HX_STACK_LINE(141)
		this->_specularTexData = null();
		HX_STACK_LINE(142)
		this->_specularDataRegister = null();
	}
return null();
}


Void BasicSpecularMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("BasicSpecularMethod::copyFrom","away3d/materials/methods/BasicSpecularMethod.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(125)
		::away3d::materials::methods::BasicSpecularMethod spec = hx::TCast< away3d::materials::methods::BasicSpecularMethod >::cast(method);		HX_STACK_VAR(spec,"spec");
		HX_STACK_LINE(126)
		this->set_texture(spec->get_texture());
		HX_STACK_LINE(127)
		this->set_specular(spec->get_specular());
		HX_STACK_LINE(128)
		this->set_specularColor(spec->get_specularColor());
		HX_STACK_LINE(129)
		this->set_gloss(spec->get_gloss());
	}
return null();
}


::away3d::textures::Texture2DBase BasicSpecularMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("BasicSpecularMethod::set_texture","away3d/materials/methods/BasicSpecularMethod.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(112)
	if (((bool((hx::TCast< Bool >::cast((value != null())) != this->_useTexture)) || bool((bool((bool((value != null())) && bool((this->_texture != null())))) && bool(((bool((value->get_hasMipMaps() != this->_texture->get_hasMipMaps())) || bool((value->get_format() != this->_texture->get_format())))))))))){
		HX_STACK_LINE(112)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(115)
	this->_useTexture = hx::TCast< Bool >::cast((value != null()));
	HX_STACK_LINE(116)
	this->_texture = value;
	HX_STACK_LINE(117)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_texture,return )

::away3d::textures::Texture2DBase BasicSpecularMethod_obj::get_texture( ){
	HX_STACK_PUSH("BasicSpecularMethod::get_texture","away3d/materials/methods/BasicSpecularMethod.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_texture,return )

int BasicSpecularMethod_obj::set_specularColor( int value){
	HX_STACK_PUSH("BasicSpecularMethod::set_specularColor","away3d/materials/methods/BasicSpecularMethod.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(94)
	if (((this->_specularColor == value))){
		HX_STACK_LINE(94)
		return value;
	}
	HX_STACK_LINE(95)
	if (((bool((this->_specularColor == (int)0)) || bool((value == (int)0))))){
		HX_STACK_LINE(95)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(96)
	this->_specularColor = value;
	HX_STACK_LINE(97)
	this->updateSpecular();
	HX_STACK_LINE(98)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_specularColor,return )

int BasicSpecularMethod_obj::get_specularColor( ){
	HX_STACK_PUSH("BasicSpecularMethod::get_specularColor","away3d/materials/methods/BasicSpecularMethod.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->_specularColor;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_specularColor,return )

Float BasicSpecularMethod_obj::set_specular( Float value){
	HX_STACK_PUSH("BasicSpecularMethod::set_specular","away3d/materials/methods/BasicSpecularMethod.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(79)
	if (((value == this->_specular))){
		HX_STACK_LINE(79)
		return value;
	}
	HX_STACK_LINE(80)
	this->_specular = value;
	HX_STACK_LINE(81)
	this->updateSpecular();
	HX_STACK_LINE(82)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_specular,return )

Float BasicSpecularMethod_obj::get_specular( ){
	HX_STACK_PUSH("BasicSpecularMethod::get_specular","away3d/materials/methods/BasicSpecularMethod.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->_specular;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_specular,return )

Float BasicSpecularMethod_obj::set_gloss( Float value){
	HX_STACK_PUSH("BasicSpecularMethod::set_gloss","away3d/materials/methods/BasicSpecularMethod.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(66)
	this->_gloss = value;
	HX_STACK_LINE(67)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicSpecularMethod_obj,set_gloss,return )

Float BasicSpecularMethod_obj::get_gloss( ){
	HX_STACK_PUSH("BasicSpecularMethod::get_gloss","away3d/materials/methods/BasicSpecularMethod.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_gloss;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicSpecularMethod_obj,get_gloss,return )

Void BasicSpecularMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("BasicSpecularMethod::initVO","away3d/materials/methods/BasicSpecularMethod.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(52)
		vo->needsUV = this->_useTexture;
		HX_STACK_LINE(53)
		vo->needsNormals = (vo->numLights > (int)0);
		HX_STACK_LINE(54)
		vo->needsView = (vo->numLights > (int)0);
	}
return null();
}



BasicSpecularMethod_obj::BasicSpecularMethod_obj()
{
}

void BasicSpecularMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicSpecularMethod);
	HX_MARK_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	HX_MARK_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_MARK_MEMBER_NAME(_specularB,"_specularB");
	HX_MARK_MEMBER_NAME(_specularG,"_specularG");
	HX_MARK_MEMBER_NAME(_specularR,"_specularR");
	HX_MARK_MEMBER_NAME(_specularColor,"_specularColor");
	HX_MARK_MEMBER_NAME(_specular,"_specular");
	HX_MARK_MEMBER_NAME(_gloss,"_gloss");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_specularDataRegister,"_specularDataRegister");
	HX_MARK_MEMBER_NAME(_specularTexData,"_specularTexData");
	HX_MARK_MEMBER_NAME(_specularTextureRegister,"_specularTextureRegister");
	HX_MARK_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicSpecularMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isFirstLight,"_isFirstLight");
	HX_VISIT_MEMBER_NAME(_shadowRegister,"_shadowRegister");
	HX_VISIT_MEMBER_NAME(_specularB,"_specularB");
	HX_VISIT_MEMBER_NAME(_specularG,"_specularG");
	HX_VISIT_MEMBER_NAME(_specularR,"_specularR");
	HX_VISIT_MEMBER_NAME(_specularColor,"_specularColor");
	HX_VISIT_MEMBER_NAME(_specular,"_specular");
	HX_VISIT_MEMBER_NAME(_gloss,"_gloss");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_specularDataRegister,"_specularDataRegister");
	HX_VISIT_MEMBER_NAME(_specularTexData,"_specularTexData");
	HX_VISIT_MEMBER_NAME(_specularTextureRegister,"_specularTextureRegister");
	HX_VISIT_MEMBER_NAME(_totalLightColorReg,"_totalLightColorReg");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BasicSpecularMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { return get_gloss(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		if (HX_FIELD_EQ(inName,"_gloss") ) { return _gloss; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return get_texture(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		if (HX_FIELD_EQ(inName,"specular") ) { return get_specular(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_gloss") ) { return set_gloss_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gloss") ) { return get_gloss_dyn(); }
		if (HX_FIELD_EQ(inName,"_specular") ) { return _specular; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularB") ) { return _specularB; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { return _specularG; }
		if (HX_FIELD_EQ(inName,"_specularR") ) { return _specularR; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return _useTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_specular") ) { return set_specular_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specular") ) { return get_specular_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { return _isFirstLight; }
		if (HX_FIELD_EQ(inName,"specularColor") ) { return get_specularColor(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateSpecular") ) { return updateSpecular_dyn(); }
		if (HX_FIELD_EQ(inName,"_specularColor") ) { return _specularColor; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { return _shadowRegister; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_specularTexData") ) { return _specularTexData; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_specularColor") ) { return set_specularColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularColor") ) { return get_specularColor_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_shadowRegister") ) { return set_shadowRegister_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { return _totalLightColorReg; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return cleanCompilationData_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularDataRegister") ) { return _specularDataRegister; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return getFragmentCodePerProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return getFragmentCodePerLight_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_specularTextureRegister") ) { return _specularTextureRegister; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return getFragmentPreLightingCode_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return getFragmentPostLightingCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicSpecularMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { return set_gloss(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_gloss") ) { _gloss=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return set_texture(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specular") ) { return set_specular(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_specular") ) { _specular=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularB") ) { _specularB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { _specularG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularR") ) { _specularR=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isFirstLight") ) { _isFirstLight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularColor") ) { return set_specularColor(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_specularColor") ) { _specularColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowRegister") ) { return set_shadowRegister(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowRegister") ) { _shadowRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_specularTexData") ) { _specularTexData=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_totalLightColorReg") ) { _totalLightColorReg=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_specularDataRegister") ) { _specularDataRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_specularTextureRegister") ) { _specularTextureRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicSpecularMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isFirstLight"));
	outFields->push(HX_CSTRING("_shadowRegister"));
	outFields->push(HX_CSTRING("_specularB"));
	outFields->push(HX_CSTRING("_specularG"));
	outFields->push(HX_CSTRING("_specularR"));
	outFields->push(HX_CSTRING("_specularColor"));
	outFields->push(HX_CSTRING("_specular"));
	outFields->push(HX_CSTRING("_gloss"));
	outFields->push(HX_CSTRING("_texture"));
	outFields->push(HX_CSTRING("_specularDataRegister"));
	outFields->push(HX_CSTRING("_specularTexData"));
	outFields->push(HX_CSTRING("_specularTextureRegister"));
	outFields->push(HX_CSTRING("_totalLightColorReg"));
	outFields->push(HX_CSTRING("_useTexture"));
	outFields->push(HX_CSTRING("shadowRegister"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("specularColor"));
	outFields->push(HX_CSTRING("specular"));
	outFields->push(HX_CSTRING("gloss"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_shadowRegister"),
	HX_CSTRING("updateSpecular"),
	HX_CSTRING("activate"),
	HX_CSTRING("getFragmentPostLightingCode"),
	HX_CSTRING("getFragmentCodePerProbe"),
	HX_CSTRING("getFragmentCodePerLight"),
	HX_CSTRING("getFragmentPreLightingCode"),
	HX_CSTRING("cleanCompilationData"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_specularColor"),
	HX_CSTRING("get_specularColor"),
	HX_CSTRING("set_specular"),
	HX_CSTRING("get_specular"),
	HX_CSTRING("set_gloss"),
	HX_CSTRING("get_gloss"),
	HX_CSTRING("initVO"),
	HX_CSTRING("_isFirstLight"),
	HX_CSTRING("_shadowRegister"),
	HX_CSTRING("_specularB"),
	HX_CSTRING("_specularG"),
	HX_CSTRING("_specularR"),
	HX_CSTRING("_specularColor"),
	HX_CSTRING("_specular"),
	HX_CSTRING("_gloss"),
	HX_CSTRING("_texture"),
	HX_CSTRING("_specularDataRegister"),
	HX_CSTRING("_specularTexData"),
	HX_CSTRING("_specularTextureRegister"),
	HX_CSTRING("_totalLightColorReg"),
	HX_CSTRING("_useTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicSpecularMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicSpecularMethod_obj::__mClass,"__mClass");
};

Class BasicSpecularMethod_obj::__mClass;

void BasicSpecularMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.BasicSpecularMethod"), hx::TCanCast< BasicSpecularMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicSpecularMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
