#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
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

Void ShaderMethodSetup_obj::__construct()
{
HX_STACK_PUSH("ShaderMethodSetup::new","away3d/materials/methods/ShaderMethodSetup.hx",36);
{
	HX_STACK_LINE(37)
	this->_methods = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	this->_normalMethod = ::away3d::materials::methods::BasicNormalMethod_obj::__new();
	HX_STACK_LINE(40)
	this->_ambientMethod = ::away3d::materials::methods::BasicAmbientMethod_obj::__new();
	HX_STACK_LINE(41)
	this->_diffuseMethod = ::away3d::materials::methods::BasicDiffuseMethod_obj::__new();
	HX_STACK_LINE(42)
	this->_specularMethod = ::away3d::materials::methods::BasicSpecularMethod_obj::__new();
	HX_STACK_LINE(43)
	this->_normalMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	HX_STACK_LINE(44)
	this->_diffuseMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	HX_STACK_LINE(45)
	this->_specularMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	HX_STACK_LINE(46)
	this->_ambientMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	HX_STACK_LINE(47)
	this->_normalMethodVO = this->_normalMethod->createMethodVO();
	HX_STACK_LINE(48)
	this->_ambientMethodVO = this->_ambientMethod->createMethodVO();
	HX_STACK_LINE(49)
	this->_diffuseMethodVO = this->_diffuseMethod->createMethodVO();
	HX_STACK_LINE(50)
	this->_specularMethodVO = this->_specularMethod->createMethodVO();
	HX_STACK_LINE(51)
	super::__construct(null());
}
;
	return null();
}

ShaderMethodSetup_obj::~ShaderMethodSetup_obj() { }

Dynamic ShaderMethodSetup_obj::__CreateEmpty() { return  new ShaderMethodSetup_obj; }
hx::ObjectPtr< ShaderMethodSetup_obj > ShaderMethodSetup_obj::__new()
{  hx::ObjectPtr< ShaderMethodSetup_obj > result = new ShaderMethodSetup_obj();
	result->__construct();
	return result;}

Dynamic ShaderMethodSetup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderMethodSetup_obj > result = new ShaderMethodSetup_obj();
	result->__construct();
	return result;}

::away3d::materials::methods::MethodVOSet ShaderMethodSetup_obj::getMethodSetForMethod( ::away3d::materials::methods::EffectMethodBase method){
	HX_STACK_PUSH("ShaderMethodSetup::getMethodSetForMethod","away3d/materials/methods/ShaderMethodSetup.hx",292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(method,"method");
	HX_STACK_LINE(293)
	int len = this->_methods->length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(294)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(295)
	while(((i < len))){
		HX_STACK_LINE(296)
		if (((this->_methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method == method))){
			HX_STACK_LINE(296)
			return this->_methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >();
		}
		HX_STACK_LINE(297)
		++(i);
	}
	HX_STACK_LINE(299)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,getMethodSetForMethod,return )

Void ShaderMethodSetup_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("ShaderMethodSetup::removeMethod","away3d/materials/methods/ShaderMethodSetup.hx",282);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(283)
		::away3d::materials::methods::MethodVOSet methodSet = this->getMethodSetForMethod(method);		HX_STACK_VAR(methodSet,"methodSet");
		HX_STACK_LINE(284)
		if (((methodSet != null()))){
			HX_STACK_LINE(285)
			int index = ::Lambda_obj::indexOf(this->_methods,methodSet);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(286)
			this->_methods->splice(index,(int)1);
			HX_STACK_LINE(287)
			method->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
			HX_STACK_LINE(288)
			this->invalidateShaderProgram();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,removeMethod,(void))

int ShaderMethodSetup_obj::get_numMethods( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_numMethods","away3d/materials/methods/ShaderMethodSetup.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(273)
	return this->_methods->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_numMethods,return )

::away3d::materials::methods::EffectMethodBase ShaderMethodSetup_obj::getMethodAt( int index){
	HX_STACK_PUSH("ShaderMethodSetup::getMethodAt","away3d/materials/methods/ShaderMethodSetup.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(265)
	if (((index > (this->_methods->length - (int)1)))){
		HX_STACK_LINE(265)
		return null();
	}
	HX_STACK_LINE(266)
	return this->_methods->__get(index).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,getMethodAt,return )

Void ShaderMethodSetup_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
{
		HX_STACK_PUSH("ShaderMethodSetup::addMethodAt","away3d/materials/methods/ShaderMethodSetup.hx",251);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(253)
		this->_methods->insert(index,::away3d::materials::methods::MethodVOSet_obj::__new(method));
		HX_STACK_LINE(254)
		method->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(255)
		this->invalidateShaderProgram();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderMethodSetup_obj,addMethodAt,(void))

bool ShaderMethodSetup_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
	HX_STACK_PUSH("ShaderMethodSetup::hasMethod","away3d/materials/methods/ShaderMethodSetup.hx",241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(method,"method");
	HX_STACK_LINE(241)
	return (this->getMethodSetForMethod(method) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,hasMethod,return )

Void ShaderMethodSetup_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("ShaderMethodSetup::addMethod","away3d/materials/methods/ShaderMethodSetup.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(229)
		this->_methods->push(::away3d::materials::methods::MethodVOSet_obj::__new(method));
		HX_STACK_LINE(230)
		method->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(231)
		this->invalidateShaderProgram();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,addMethod,(void))

Void ShaderMethodSetup_obj::clearListeners( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("ShaderMethodSetup::clearListeners","away3d/materials/methods/ShaderMethodSetup.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(219)
		if (((method != null()))){
			HX_STACK_LINE(220)
			method->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,clearListeners,(void))

Void ShaderMethodSetup_obj::dispose( ){
{
		HX_STACK_PUSH("ShaderMethodSetup::dispose","away3d/materials/methods/ShaderMethodSetup.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_LINE(202)
		this->clearListeners(this->_normalMethod);
		HX_STACK_LINE(203)
		this->clearListeners(this->_diffuseMethod);
		HX_STACK_LINE(204)
		this->clearListeners(this->_shadowMethod);
		HX_STACK_LINE(205)
		this->clearListeners(this->_ambientMethod);
		HX_STACK_LINE(206)
		this->clearListeners(this->_specularMethod);
		HX_STACK_LINE(207)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(208)
		while(((i < this->_methods->length))){
			HX_STACK_LINE(209)
			this->clearListeners(this->_methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method);
			HX_STACK_LINE(210)
			++(i);
		}
		HX_STACK_LINE(212)
		this->_methods = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,dispose,(void))

::away3d::materials::methods::ColorTransformMethod ShaderMethodSetup_obj::set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value){
	HX_STACK_PUSH("ShaderMethodSetup::set_colorTransformMethod","away3d/materials/methods/ShaderMethodSetup.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(184)
	if (((this->_colorTransformMethod == value))){
		HX_STACK_LINE(184)
		return value;
	}
	HX_STACK_LINE(185)
	if (((this->_colorTransformMethod != null()))){
		HX_STACK_LINE(185)
		this->_colorTransformMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
	}
	HX_STACK_LINE(186)
	if (((bool((this->_colorTransformMethod == null())) || bool((value == null()))))){
		HX_STACK_LINE(186)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(187)
	this->_colorTransformMethod = value;
	HX_STACK_LINE(188)
	if (((this->_colorTransformMethod != null()))){
		HX_STACK_LINE(189)
		this->_colorTransformMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(190)
		this->_colorTransformMethodVO = this->_colorTransformMethod->createMethodVO();
	}
	else{
		HX_STACK_LINE(193)
		this->_colorTransformMethodVO = null();
	}
	HX_STACK_LINE(194)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_colorTransformMethod,return )

::away3d::materials::methods::ColorTransformMethod ShaderMethodSetup_obj::get_colorTransformMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_colorTransformMethod","away3d/materials/methods/ShaderMethodSetup.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(179)
	return this->_colorTransformMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_colorTransformMethod,return )

::away3d::materials::methods::BasicSpecularMethod ShaderMethodSetup_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
	HX_STACK_PUSH("ShaderMethodSetup::set_specularMethod","away3d/materials/methods/ShaderMethodSetup.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(160)
	if (((this->_specularMethod != null()))){
		HX_STACK_LINE(161)
		this->_specularMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
		HX_STACK_LINE(162)
		if (((value != null()))){
			HX_STACK_LINE(162)
			value->copyFrom(this->_specularMethod);
		}
	}
	HX_STACK_LINE(164)
	this->_specularMethod = value;
	HX_STACK_LINE(165)
	if (((this->_specularMethod != null()))){
		HX_STACK_LINE(166)
		this->_specularMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(167)
		this->_specularMethodVO = this->_specularMethod->createMethodVO();
	}
	else{
		HX_STACK_LINE(170)
		this->_specularMethodVO = null();
	}
	HX_STACK_LINE(171)
	this->invalidateShaderProgram();
	HX_STACK_LINE(172)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_specularMethod,return )

::away3d::materials::methods::BasicSpecularMethod ShaderMethodSetup_obj::get_specularMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_specularMethod","away3d/materials/methods/ShaderMethodSetup.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_LINE(155)
	return this->_specularMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_specularMethod,return )

::away3d::materials::methods::BasicDiffuseMethod ShaderMethodSetup_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
	HX_STACK_PUSH("ShaderMethodSetup::set_diffuseMethod","away3d/materials/methods/ShaderMethodSetup.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(140)
	if (((this->_diffuseMethod != null()))){
		HX_STACK_LINE(140)
		this->_diffuseMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
	}
	HX_STACK_LINE(141)
	if (((value != null()))){
		HX_STACK_LINE(142)
		if (((this->_diffuseMethod != null()))){
			HX_STACK_LINE(142)
			value->copyFrom(this->_diffuseMethod);
		}
		HX_STACK_LINE(143)
		value->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(144)
		this->_diffuseMethodVO = value->createMethodVO();
	}
	HX_STACK_LINE(146)
	this->_diffuseMethod = value;
	HX_STACK_LINE(147)
	if (((value != null()))){
		HX_STACK_LINE(147)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(148)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_diffuseMethod,return )

::away3d::materials::methods::BasicDiffuseMethod ShaderMethodSetup_obj::get_diffuseMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_diffuseMethod","away3d/materials/methods/ShaderMethodSetup.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_diffuseMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_diffuseMethod,return )

::away3d::materials::methods::ShadowMapMethodBase ShaderMethodSetup_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
	HX_STACK_PUSH("ShaderMethodSetup::set_shadowMethod","away3d/materials/methods/ShaderMethodSetup.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(119)
	if (((this->_shadowMethod != null()))){
		HX_STACK_LINE(119)
		this->_shadowMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
	}
	HX_STACK_LINE(120)
	this->_shadowMethod = value;
	HX_STACK_LINE(121)
	if (((this->_shadowMethod != null()))){
		HX_STACK_LINE(122)
		this->_shadowMethod->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(123)
		this->_shadowMethodVO = this->_shadowMethod->createMethodVO();
	}
	else{
		HX_STACK_LINE(126)
		this->_shadowMethodVO = null();
	}
	HX_STACK_LINE(127)
	this->invalidateShaderProgram();
	HX_STACK_LINE(128)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_shadowMethod,return )

::away3d::materials::methods::ShadowMapMethodBase ShaderMethodSetup_obj::get_shadowMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_shadowMethod","away3d/materials/methods/ShaderMethodSetup.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_LINE(114)
	return this->_shadowMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_shadowMethod,return )

::away3d::materials::methods::BasicAmbientMethod ShaderMethodSetup_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
	HX_STACK_PUSH("ShaderMethodSetup::set_ambientMethod","away3d/materials/methods/ShaderMethodSetup.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(99)
	if (((this->_ambientMethod != null()))){
		HX_STACK_LINE(99)
		this->_ambientMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
	}
	HX_STACK_LINE(100)
	if (((value != null()))){
		HX_STACK_LINE(101)
		if (((this->_ambientMethod != null()))){
			HX_STACK_LINE(101)
			value->copyFrom(this->_ambientMethod);
		}
		HX_STACK_LINE(102)
		value->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
		HX_STACK_LINE(103)
		this->_ambientMethodVO = value->createMethodVO();
	}
	HX_STACK_LINE(105)
	this->_ambientMethod = value;
	HX_STACK_LINE(106)
	if (((value != null()))){
		HX_STACK_LINE(106)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(107)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_ambientMethod,return )

::away3d::materials::methods::BasicAmbientMethod ShaderMethodSetup_obj::get_ambientMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_ambientMethod","away3d/materials/methods/ShaderMethodSetup.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->_ambientMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_ambientMethod,return )

::away3d::materials::methods::BasicNormalMethod ShaderMethodSetup_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
	HX_STACK_PUSH("ShaderMethodSetup::set_normalMethod","away3d/materials/methods/ShaderMethodSetup.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(79)
	if (((this->_normalMethod != null()))){
		HX_STACK_LINE(79)
		this->_normalMethod->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
	}
	HX_STACK_LINE(80)
	if (((value != null()))){
		HX_STACK_LINE(81)
		if (((this->_normalMethod != null()))){
			HX_STACK_LINE(81)
			value->copyFrom(this->_normalMethod);
		}
		HX_STACK_LINE(82)
		this->_normalMethodVO = value->createMethodVO();
		HX_STACK_LINE(83)
		value->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(85)
	this->_normalMethod = value;
	HX_STACK_LINE(86)
	if (((value != null()))){
		HX_STACK_LINE(86)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(87)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,set_normalMethod,return )

::away3d::materials::methods::BasicNormalMethod ShaderMethodSetup_obj::get_normalMethod( ){
	HX_STACK_PUSH("ShaderMethodSetup::get_normalMethod","away3d/materials/methods/ShaderMethodSetup.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->_normalMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,get_normalMethod,return )

Void ShaderMethodSetup_obj::invalidateShaderProgram( ){
{
		HX_STACK_PUSH("ShaderMethodSetup::invalidateShaderProgram","away3d/materials/methods/ShaderMethodSetup.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->dispatchEvent(::away3d::events::ShadingMethodEvent_obj::__new(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderMethodSetup_obj,invalidateShaderProgram,(void))

Void ShaderMethodSetup_obj::onShaderInvalidated( ::away3d::events::ShadingMethodEvent event){
{
		HX_STACK_PUSH("ShaderMethodSetup::onShaderInvalidated","away3d/materials/methods/ShaderMethodSetup.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(58)
		this->invalidateShaderProgram();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderMethodSetup_obj,onShaderInvalidated,(void))


ShaderMethodSetup_obj::ShaderMethodSetup_obj()
{
}

void ShaderMethodSetup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderMethodSetup);
	HX_MARK_MEMBER_NAME(_methods,"_methods");
	HX_MARK_MEMBER_NAME(_specularMethodVO,"_specularMethodVO");
	HX_MARK_MEMBER_NAME(_specularMethod,"_specularMethod");
	HX_MARK_MEMBER_NAME(_diffuseMethodVO,"_diffuseMethodVO");
	HX_MARK_MEMBER_NAME(_diffuseMethod,"_diffuseMethod");
	HX_MARK_MEMBER_NAME(_shadowMethodVO,"_shadowMethodVO");
	HX_MARK_MEMBER_NAME(_shadowMethod,"_shadowMethod");
	HX_MARK_MEMBER_NAME(_ambientMethodVO,"_ambientMethodVO");
	HX_MARK_MEMBER_NAME(_ambientMethod,"_ambientMethod");
	HX_MARK_MEMBER_NAME(_normalMethodVO,"_normalMethodVO");
	HX_MARK_MEMBER_NAME(_normalMethod,"_normalMethod");
	HX_MARK_MEMBER_NAME(_colorTransformMethodVO,"_colorTransformMethodVO");
	HX_MARK_MEMBER_NAME(_colorTransformMethod,"_colorTransformMethod");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShaderMethodSetup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_methods,"_methods");
	HX_VISIT_MEMBER_NAME(_specularMethodVO,"_specularMethodVO");
	HX_VISIT_MEMBER_NAME(_specularMethod,"_specularMethod");
	HX_VISIT_MEMBER_NAME(_diffuseMethodVO,"_diffuseMethodVO");
	HX_VISIT_MEMBER_NAME(_diffuseMethod,"_diffuseMethod");
	HX_VISIT_MEMBER_NAME(_shadowMethodVO,"_shadowMethodVO");
	HX_VISIT_MEMBER_NAME(_shadowMethod,"_shadowMethod");
	HX_VISIT_MEMBER_NAME(_ambientMethodVO,"_ambientMethodVO");
	HX_VISIT_MEMBER_NAME(_ambientMethod,"_ambientMethod");
	HX_VISIT_MEMBER_NAME(_normalMethodVO,"_normalMethodVO");
	HX_VISIT_MEMBER_NAME(_normalMethod,"_normalMethod");
	HX_VISIT_MEMBER_NAME(_colorTransformMethodVO,"_colorTransformMethodVO");
	HX_VISIT_MEMBER_NAME(_colorTransformMethod,"_colorTransformMethod");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShaderMethodSetup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { return _methods; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return hasMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"addMethod") ) { return addMethod_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { return get_numMethods(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return getMethodAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return addMethodAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return removeMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return get_shadowMethod(); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return get_normalMethod(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowMethod") ) { return _shadowMethod; }
		if (HX_FIELD_EQ(inName,"_normalMethod") ) { return _normalMethod; }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return get_diffuseMethod(); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return get_ambientMethod(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return get_numMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"clearListeners") ) { return clearListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"_diffuseMethod") ) { return _diffuseMethod; }
		if (HX_FIELD_EQ(inName,"_ambientMethod") ) { return _ambientMethod; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return get_specularMethod(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_specularMethod") ) { return _specularMethod; }
		if (HX_FIELD_EQ(inName,"_shadowMethodVO") ) { return _shadowMethodVO; }
		if (HX_FIELD_EQ(inName,"_normalMethodVO") ) { return _normalMethodVO; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return set_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return get_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return set_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return get_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"_diffuseMethodVO") ) { return _diffuseMethodVO; }
		if (HX_FIELD_EQ(inName,"_ambientMethodVO") ) { return _ambientMethodVO; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return set_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return get_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return set_ambientMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return get_ambientMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"_specularMethodVO") ) { return _specularMethodVO; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return set_specularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return get_specularMethod_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onShaderInvalidated") ) { return onShaderInvalidated_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { return get_colorTransformMethod(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getMethodSetForMethod") ) { return getMethodSetForMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransformMethod") ) { return _colorTransformMethod; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return invalidateShaderProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransformMethodVO") ) { return _colorTransformMethodVO; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_colorTransformMethod") ) { return set_colorTransformMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransformMethod") ) { return get_colorTransformMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderMethodSetup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { _methods=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return set_shadowMethod(inValue); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return set_normalMethod(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadowMethod") ) { _shadowMethod=inValue.Cast< ::away3d::materials::methods::ShadowMapMethodBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalMethod") ) { _normalMethod=inValue.Cast< ::away3d::materials::methods::BasicNormalMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return set_diffuseMethod(inValue); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return set_ambientMethod(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_diffuseMethod") ) { _diffuseMethod=inValue.Cast< ::away3d::materials::methods::BasicDiffuseMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientMethod") ) { _ambientMethod=inValue.Cast< ::away3d::materials::methods::BasicAmbientMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return set_specularMethod(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_specularMethod") ) { _specularMethod=inValue.Cast< ::away3d::materials::methods::BasicSpecularMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowMethodVO") ) { _shadowMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_normalMethodVO") ) { _normalMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_diffuseMethodVO") ) { _diffuseMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientMethodVO") ) { _ambientMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_specularMethodVO") ) { _specularMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { return set_colorTransformMethod(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorTransformMethod") ) { _colorTransformMethod=inValue.Cast< ::away3d::materials::methods::ColorTransformMethod >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_colorTransformMethodVO") ) { _colorTransformMethodVO=inValue.Cast< ::away3d::materials::methods::MethodVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderMethodSetup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_methods"));
	outFields->push(HX_CSTRING("_specularMethodVO"));
	outFields->push(HX_CSTRING("_specularMethod"));
	outFields->push(HX_CSTRING("_diffuseMethodVO"));
	outFields->push(HX_CSTRING("_diffuseMethod"));
	outFields->push(HX_CSTRING("_shadowMethodVO"));
	outFields->push(HX_CSTRING("_shadowMethod"));
	outFields->push(HX_CSTRING("_ambientMethodVO"));
	outFields->push(HX_CSTRING("_ambientMethod"));
	outFields->push(HX_CSTRING("_normalMethodVO"));
	outFields->push(HX_CSTRING("_normalMethod"));
	outFields->push(HX_CSTRING("_colorTransformMethodVO"));
	outFields->push(HX_CSTRING("_colorTransformMethod"));
	outFields->push(HX_CSTRING("numMethods"));
	outFields->push(HX_CSTRING("colorTransformMethod"));
	outFields->push(HX_CSTRING("specularMethod"));
	outFields->push(HX_CSTRING("diffuseMethod"));
	outFields->push(HX_CSTRING("shadowMethod"));
	outFields->push(HX_CSTRING("ambientMethod"));
	outFields->push(HX_CSTRING("normalMethod"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getMethodSetForMethod"),
	HX_CSTRING("removeMethod"),
	HX_CSTRING("get_numMethods"),
	HX_CSTRING("getMethodAt"),
	HX_CSTRING("addMethodAt"),
	HX_CSTRING("hasMethod"),
	HX_CSTRING("addMethod"),
	HX_CSTRING("clearListeners"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_colorTransformMethod"),
	HX_CSTRING("get_colorTransformMethod"),
	HX_CSTRING("set_specularMethod"),
	HX_CSTRING("get_specularMethod"),
	HX_CSTRING("set_diffuseMethod"),
	HX_CSTRING("get_diffuseMethod"),
	HX_CSTRING("set_shadowMethod"),
	HX_CSTRING("get_shadowMethod"),
	HX_CSTRING("set_ambientMethod"),
	HX_CSTRING("get_ambientMethod"),
	HX_CSTRING("set_normalMethod"),
	HX_CSTRING("get_normalMethod"),
	HX_CSTRING("invalidateShaderProgram"),
	HX_CSTRING("onShaderInvalidated"),
	HX_CSTRING("_methods"),
	HX_CSTRING("_specularMethodVO"),
	HX_CSTRING("_specularMethod"),
	HX_CSTRING("_diffuseMethodVO"),
	HX_CSTRING("_diffuseMethod"),
	HX_CSTRING("_shadowMethodVO"),
	HX_CSTRING("_shadowMethod"),
	HX_CSTRING("_ambientMethodVO"),
	HX_CSTRING("_ambientMethod"),
	HX_CSTRING("_normalMethodVO"),
	HX_CSTRING("_normalMethod"),
	HX_CSTRING("_colorTransformMethodVO"),
	HX_CSTRING("_colorTransformMethod"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderMethodSetup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderMethodSetup_obj::__mClass,"__mClass");
};

Class ShaderMethodSetup_obj::__mClass;

void ShaderMethodSetup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.ShaderMethodSetup"), hx::TCanCast< ShaderMethodSetup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderMethodSetup_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
