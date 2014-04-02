#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
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
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#include <away3d/materials/passes/DepthMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#include <away3d/materials/passes/DistanceMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#include <away3d/materials/passes/SuperShaderPass.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
namespace away3d{
namespace materials{

Void SinglePassMaterialBase_obj::__construct()
{
HX_STACK_PUSH("SinglePassMaterialBase::new","away3d/materials/SinglePassMaterialBase.hx",52);
{
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(54)
	this->addPass(this->_screenPass = ::away3d::materials::passes::SuperShaderPass_obj::__new(hx::ObjectPtr<OBJ_>(this)));
}
;
	return null();
}

SinglePassMaterialBase_obj::~SinglePassMaterialBase_obj() { }

Dynamic SinglePassMaterialBase_obj::__CreateEmpty() { return  new SinglePassMaterialBase_obj; }
hx::ObjectPtr< SinglePassMaterialBase_obj > SinglePassMaterialBase_obj::__new()
{  hx::ObjectPtr< SinglePassMaterialBase_obj > result = new SinglePassMaterialBase_obj();
	result->__construct();
	return result;}

Dynamic SinglePassMaterialBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SinglePassMaterialBase_obj > result = new SinglePassMaterialBase_obj();
	result->__construct();
	return result;}

::away3d::materials::lightpickers::LightPickerBase SinglePassMaterialBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_lightPicker","away3d/materials/SinglePassMaterialBase.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(440)
	this->super::set_lightPicker(value);
	HX_STACK_LINE(441)
	this->_screenPass->set_lightPicker(value);
	HX_STACK_LINE(442)
	return value;
}


Void SinglePassMaterialBase_obj::updateMaterial( ::flash::display3D::Context3D context){
{
		HX_STACK_PUSH("SinglePassMaterialBase::updateMaterial","away3d/materials/SinglePassMaterialBase.hx",419);
		HX_STACK_THIS(this);
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(419)
		if ((this->_screenPass->_passesDirty)){
			HX_STACK_LINE(421)
			this->clearPasses();
			HX_STACK_LINE(422)
			if (((this->_screenPass->_passes != null()))){
				HX_STACK_LINE(423)
				int len = this->_screenPass->_passes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(424)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(425)
				while(((i < len))){
					HX_STACK_LINE(426)
					this->addPass(this->_screenPass->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >());
					HX_STACK_LINE(427)
					++(i);
				}
			}
			HX_STACK_LINE(430)
			this->addPass(this->_screenPass);
			HX_STACK_LINE(431)
			this->_screenPass->_passesDirty = false;
		}
	}
return null();
}


bool SinglePassMaterialBase_obj::set_alphaBlending( bool value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_alphaBlending","away3d/materials/SinglePassMaterialBase.hx",408);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(409)
	this->_alphaBlending = value;
	HX_STACK_LINE(410)
	this->_screenPass->setBlendMode((  (((bool((this->get_blendMode() == ::flash::display::BlendMode_obj::NORMAL)) && bool(this->get_requiresBlending())))) ? ::flash::display::BlendMode(::flash::display::BlendMode_obj::LAYER) : ::flash::display::BlendMode(this->get_blendMode()) ));
	HX_STACK_LINE(411)
	this->_screenPass->set_preserveAlpha(this->get_requiresBlending());
	HX_STACK_LINE(412)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_alphaBlending,return )

bool SinglePassMaterialBase_obj::get_alphaBlending( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_alphaBlending","away3d/materials/SinglePassMaterialBase.hx",404);
	HX_STACK_THIS(this);
	HX_STACK_LINE(404)
	return this->_alphaBlending;
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_alphaBlending,return )

int SinglePassMaterialBase_obj::set_specularColor( int value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_specularColor","away3d/materials/SinglePassMaterialBase.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(395)
	this->_screenPass->get_specularMethod()->set_specularColor(value);
	HX_STACK_LINE(396)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularColor,return )

int SinglePassMaterialBase_obj::get_specularColor( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_specularColor","away3d/materials/SinglePassMaterialBase.hx",390);
	HX_STACK_THIS(this);
	HX_STACK_LINE(390)
	return this->_screenPass->get_specularMethod()->get_specularColor();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularColor,return )

int SinglePassMaterialBase_obj::set_ambientColor( int value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_ambientColor","away3d/materials/SinglePassMaterialBase.hx",381);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(382)
	this->_screenPass->get_ambientMethod()->set_ambientColor(value);
	HX_STACK_LINE(383)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambientColor,return )

int SinglePassMaterialBase_obj::get_ambientColor( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_ambientColor","away3d/materials/SinglePassMaterialBase.hx",377);
	HX_STACK_THIS(this);
	HX_STACK_LINE(377)
	return this->_screenPass->get_ambientMethod()->get_ambientColor();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambientColor,return )

Float SinglePassMaterialBase_obj::set_specular( Float value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_specular","away3d/materials/SinglePassMaterialBase.hx",368);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(369)
	if (((this->_screenPass->get_specularMethod() != null()))){
		HX_STACK_LINE(369)
		this->_screenPass->get_specularMethod()->set_specular(value);
	}
	HX_STACK_LINE(370)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specular,return )

Float SinglePassMaterialBase_obj::get_specular( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_specular","away3d/materials/SinglePassMaterialBase.hx",364);
	HX_STACK_THIS(this);
	HX_STACK_LINE(364)
	return (  (((this->_screenPass->get_specularMethod() != null()))) ? Float(this->_screenPass->get_specularMethod()->get_specular()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specular,return )

Float SinglePassMaterialBase_obj::set_ambient( Float value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_ambient","away3d/materials/SinglePassMaterialBase.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(356)
	this->_screenPass->get_ambientMethod()->set_ambient(value);
	HX_STACK_LINE(357)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambient,return )

Float SinglePassMaterialBase_obj::get_ambient( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_ambient","away3d/materials/SinglePassMaterialBase.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(351)
	return this->_screenPass->get_ambientMethod()->get_ambient();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambient,return )

Float SinglePassMaterialBase_obj::set_gloss( Float value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_gloss","away3d/materials/SinglePassMaterialBase.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(343)
	if (((this->_screenPass->get_specularMethod() != null()))){
		HX_STACK_LINE(343)
		this->_screenPass->get_specularMethod()->set_gloss(value);
	}
	HX_STACK_LINE(344)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_gloss,return )

Float SinglePassMaterialBase_obj::get_gloss( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_gloss","away3d/materials/SinglePassMaterialBase.hx",338);
	HX_STACK_THIS(this);
	HX_STACK_LINE(338)
	return (  (((this->_screenPass->get_specularMethod() != null()))) ? Float(this->_screenPass->get_specularMethod()->get_gloss()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_gloss,return )

::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::set_specularMap( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_specularMap","away3d/materials/SinglePassMaterialBase.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(329)
	if (((this->_screenPass->get_specularMethod() != null()))){
		HX_STACK_LINE(329)
		this->_screenPass->get_specularMethod()->set_texture(value);
	}
	else{
		HX_STACK_LINE(330)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("No specular method was set to assign the specularGlossMap to"),null()));
	}
	HX_STACK_LINE(331)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularMap,return )

::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::get_specularMap( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_specularMap","away3d/materials/SinglePassMaterialBase.hx",324);
	HX_STACK_THIS(this);
	HX_STACK_LINE(324)
	return this->_screenPass->get_specularMethod()->get_texture();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularMap,return )

::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_normalMap","away3d/materials/SinglePassMaterialBase.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(314)
	this->_screenPass->set_normalMap(value);
	HX_STACK_LINE(315)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_normalMap,return )

::away3d::textures::Texture2DBase SinglePassMaterialBase_obj::get_normalMap( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_normalMap","away3d/materials/SinglePassMaterialBase.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->_screenPass->get_normalMap();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_normalMap,return )

bool SinglePassMaterialBase_obj::set_mipmap( bool value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_mipmap","away3d/materials/SinglePassMaterialBase.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(299)
	if (((this->_mipmap == value))){
		HX_STACK_LINE(299)
		return value;
	}
	HX_STACK_LINE(300)
	this->super::set_mipmap(value);
	HX_STACK_LINE(301)
	return value;
}


Void SinglePassMaterialBase_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("SinglePassMaterialBase::removeMethod","away3d/materials/SinglePassMaterialBase.hx",290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(290)
		this->_screenPass->removeMethod(method);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,removeMethod,(void))

Void SinglePassMaterialBase_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
{
		HX_STACK_PUSH("SinglePassMaterialBase::addMethodAt","away3d/materials/SinglePassMaterialBase.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(281)
		this->_screenPass->addMethodAt(method,index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SinglePassMaterialBase_obj,addMethodAt,(void))

::away3d::materials::methods::EffectMethodBase SinglePassMaterialBase_obj::getMethodAt( int index){
	HX_STACK_PUSH("SinglePassMaterialBase::getMethodAt","away3d/materials/SinglePassMaterialBase.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(271)
	return this->_screenPass->getMethodAt(index);
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,getMethodAt,return )

bool SinglePassMaterialBase_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
	HX_STACK_PUSH("SinglePassMaterialBase::hasMethod","away3d/materials/SinglePassMaterialBase.hx",261);
	HX_STACK_THIS(this);
	HX_STACK_ARG(method,"method");
	HX_STACK_LINE(261)
	return this->_screenPass->hasMethod(method);
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,hasMethod,return )

int SinglePassMaterialBase_obj::get_numMethods( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_numMethods","away3d/materials/SinglePassMaterialBase.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_LINE(250)
	return this->_screenPass->get_numMethods();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_numMethods,return )

Void SinglePassMaterialBase_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("SinglePassMaterialBase::addMethod","away3d/materials/SinglePassMaterialBase.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(242)
		this->_screenPass->addMethod(method);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,addMethod,(void))

::away3d::materials::methods::BasicSpecularMethod SinglePassMaterialBase_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_specularMethod","away3d/materials/SinglePassMaterialBase.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(232)
	this->_screenPass->set_specularMethod(value);
	HX_STACK_LINE(233)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularMethod,return )

::away3d::materials::methods::BasicSpecularMethod SinglePassMaterialBase_obj::get_specularMethod( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_specularMethod","away3d/materials/SinglePassMaterialBase.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return this->_screenPass->get_specularMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularMethod,return )

::away3d::materials::methods::BasicNormalMethod SinglePassMaterialBase_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_normalMethod","away3d/materials/SinglePassMaterialBase.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(219)
	this->_screenPass->set_normalMethod(value);
	HX_STACK_LINE(220)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_normalMethod,return )

::away3d::materials::methods::BasicNormalMethod SinglePassMaterialBase_obj::get_normalMethod( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_normalMethod","away3d/materials/SinglePassMaterialBase.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	return this->_screenPass->get_normalMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_normalMethod,return )

::away3d::materials::methods::BasicDiffuseMethod SinglePassMaterialBase_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_diffuseMethod","away3d/materials/SinglePassMaterialBase.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(206)
	this->_screenPass->set_diffuseMethod(value);
	HX_STACK_LINE(207)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_diffuseMethod,return )

::away3d::materials::methods::BasicDiffuseMethod SinglePassMaterialBase_obj::get_diffuseMethod( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_diffuseMethod","away3d/materials/SinglePassMaterialBase.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	return this->_screenPass->get_diffuseMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_diffuseMethod,return )

::away3d::materials::methods::ShadowMapMethodBase SinglePassMaterialBase_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_shadowMethod","away3d/materials/SinglePassMaterialBase.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(193)
	this->_screenPass->set_shadowMethod(value);
	HX_STACK_LINE(194)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_shadowMethod,return )

::away3d::materials::methods::ShadowMapMethodBase SinglePassMaterialBase_obj::get_shadowMethod( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_shadowMethod","away3d/materials/SinglePassMaterialBase.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	return this->_screenPass->get_shadowMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_shadowMethod,return )

::away3d::materials::methods::BasicAmbientMethod SinglePassMaterialBase_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_ambientMethod","away3d/materials/SinglePassMaterialBase.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(180)
	this->_screenPass->set_ambientMethod(value);
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_ambientMethod,return )

::away3d::materials::methods::BasicAmbientMethod SinglePassMaterialBase_obj::get_ambientMethod( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_ambientMethod","away3d/materials/SinglePassMaterialBase.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return this->_screenPass->get_ambientMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_ambientMethod,return )

::flash::geom::ColorTransform SinglePassMaterialBase_obj::set_colorTransform( ::flash::geom::ColorTransform value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_colorTransform","away3d/materials/SinglePassMaterialBase.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(167)
	this->_screenPass->set_colorTransform(value);
	HX_STACK_LINE(168)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_colorTransform,return )

::flash::geom::ColorTransform SinglePassMaterialBase_obj::get_colorTransform( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_colorTransform","away3d/materials/SinglePassMaterialBase.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return this->_screenPass->get_colorTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_colorTransform,return )

bool SinglePassMaterialBase_obj::get_requiresBlending( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_requiresBlending","away3d/materials/SinglePassMaterialBase.hx",154);
	HX_STACK_THIS(this);
	HX_STACK_LINE(154)
	return (bool((bool(this->super::get_requiresBlending()) || bool(this->_alphaBlending))) || bool((bool((this->_screenPass->get_colorTransform() != null())) && bool((this->_screenPass->get_colorTransform()->alphaMultiplier < (int)1)))));
}


int SinglePassMaterialBase_obj::set_diffuseLightSources( int value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_diffuseLightSources","away3d/materials/SinglePassMaterialBase.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(146)
	this->_screenPass->set_diffuseLightSources(value);
	HX_STACK_LINE(147)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_diffuseLightSources,return )

int SinglePassMaterialBase_obj::get_diffuseLightSources( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_diffuseLightSources","away3d/materials/SinglePassMaterialBase.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_LINE(141)
	return this->_screenPass->get_diffuseLightSources();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_diffuseLightSources,return )

int SinglePassMaterialBase_obj::set_specularLightSources( int value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_specularLightSources","away3d/materials/SinglePassMaterialBase.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(130)
	this->_screenPass->set_specularLightSources(value);
	HX_STACK_LINE(131)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_specularLightSources,return )

int SinglePassMaterialBase_obj::get_specularLightSources( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_specularLightSources","away3d/materials/SinglePassMaterialBase.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(125)
	return this->_screenPass->get_specularLightSources();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_specularLightSources,return )

Void SinglePassMaterialBase_obj::activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_distanceBased){
bool distanceBased = __o_distanceBased.Default(false);
	HX_STACK_PUSH("SinglePassMaterialBase::activateForDepth","away3d/materials/SinglePassMaterialBase.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_ARG(camera,"camera");
	HX_STACK_ARG(distanceBased,"distanceBased");
{
		HX_STACK_LINE(113)
		if ((distanceBased)){
			HX_STACK_LINE(113)
			this->_distancePass->set_alphaMask(this->_screenPass->get_diffuseMethod()->get_texture());
		}
		else{
			HX_STACK_LINE(114)
			this->_depthPass->set_alphaMask(this->_screenPass->get_diffuseMethod()->get_texture());
		}
		HX_STACK_LINE(115)
		this->super::activateForDepth(stage3DProxy,camera,distanceBased);
	}
return null();
}


int SinglePassMaterialBase_obj::set_depthCompareMode( int value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_depthCompareMode","away3d/materials/SinglePassMaterialBase.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(103)
	this->super::set_depthCompareMode(value);
	HX_STACK_LINE(104)
	this->_screenPass->set_depthCompareMode(value);
	HX_STACK_LINE(105)
	return value;
}


::flash::display::BlendMode SinglePassMaterialBase_obj::set_blendMode( ::flash::display::BlendMode value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_blendMode","away3d/materials/SinglePassMaterialBase.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(93)
	this->super::set_blendMode(value);
	HX_STACK_LINE(94)
	this->_screenPass->setBlendMode((  (((bool((this->get_blendMode() == ::flash::display::BlendMode_obj::NORMAL)) && bool(this->get_requiresBlending())))) ? ::flash::display::BlendMode(::flash::display::BlendMode_obj::LAYER) : ::flash::display::BlendMode(this->get_blendMode()) ));
	HX_STACK_LINE(95)
	return value;
}


Float SinglePassMaterialBase_obj::set_alphaThreshold( Float value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_alphaThreshold","away3d/materials/SinglePassMaterialBase.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(82)
	this->_screenPass->get_diffuseMethod()->set_alphaThreshold(value);
	HX_STACK_LINE(83)
	this->_depthPass->set_alphaThreshold(value);
	HX_STACK_LINE(84)
	this->_distancePass->set_alphaThreshold(value);
	HX_STACK_LINE(85)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_alphaThreshold,return )

Float SinglePassMaterialBase_obj::get_alphaThreshold( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_alphaThreshold","away3d/materials/SinglePassMaterialBase.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return this->_screenPass->get_diffuseMethod()->get_alphaThreshold();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_alphaThreshold,return )

bool SinglePassMaterialBase_obj::set_enableLightFallOff( bool value){
	HX_STACK_PUSH("SinglePassMaterialBase::set_enableLightFallOff","away3d/materials/SinglePassMaterialBase.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(67)
	this->_screenPass->set_enableLightFallOff(value);
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePassMaterialBase_obj,set_enableLightFallOff,return )

bool SinglePassMaterialBase_obj::get_enableLightFallOff( ){
	HX_STACK_PUSH("SinglePassMaterialBase::get_enableLightFallOff","away3d/materials/SinglePassMaterialBase.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->_screenPass->get_enableLightFallOff();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePassMaterialBase_obj,get_enableLightFallOff,return )


SinglePassMaterialBase_obj::SinglePassMaterialBase_obj()
{
}

void SinglePassMaterialBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SinglePassMaterialBase);
	HX_MARK_MEMBER_NAME(_alphaBlending,"_alphaBlending");
	HX_MARK_MEMBER_NAME(_screenPass,"_screenPass");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SinglePassMaterialBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alphaBlending,"_alphaBlending");
	HX_VISIT_MEMBER_NAME(_screenPass,"_screenPass");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SinglePassMaterialBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { return get_gloss(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { return get_ambient(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { return get_specular(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_gloss") ) { return set_gloss_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gloss") ) { return get_gloss_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return hasMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"addMethod") ) { return addMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"normalMap") ) { return get_normalMap(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return set_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"numMethods") ) { return get_numMethods(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return set_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return get_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return addMethodAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return getMethodAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_screenPass") ) { return _screenPass; }
		if (HX_FIELD_EQ(inName,"specularMap") ) { return get_specularMap(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_specular") ) { return set_specular_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specular") ) { return get_specular_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return removeMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return get_ambientColor(); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return get_normalMethod(); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return get_shadowMethod(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return set_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return get_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"alphaBlending") ) { return get_alphaBlending(); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { return get_specularColor(); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return get_diffuseMethod(); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return get_ambientMethod(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMaterial") ) { return updateMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return get_numMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"_alphaBlending") ) { return _alphaBlending; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return get_specularMethod(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return get_alphaThreshold(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return set_lightPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"set_specularMap") ) { return set_specularMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularMap") ) { return get_specularMap_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return set_ambientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return get_ambientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return set_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return get_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return set_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return get_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"activateForDepth") ) { return activateForDepth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_alphaBlending") ) { return set_alphaBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaBlending") ) { return get_alphaBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"set_specularColor") ) { return set_specularColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularColor") ) { return get_specularColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return set_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return get_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return set_ambientMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return get_ambientMethod_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return set_specularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return get_specularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return set_alphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return get_alphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return get_enableLightFallOff(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return get_diffuseLightSources(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_requiresBlending") ) { return get_requiresBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return set_depthCompareMode_dyn(); }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return get_specularLightSources(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return set_enableLightFallOff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return get_enableLightFallOff_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return set_diffuseLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return get_diffuseLightSources_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return set_specularLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return get_specularLightSources_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SinglePassMaterialBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"gloss") ) { return set_gloss(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { return set_ambient(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { return set_specular(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { return set_normalMap(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_screenPass") ) { _screenPass=inValue.Cast< ::away3d::materials::passes::SuperShaderPass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularMap") ) { return set_specularMap(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return set_ambientColor(inValue); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return set_normalMethod(inValue); }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return set_shadowMethod(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alphaBlending") ) { return set_alphaBlending(inValue); }
		if (HX_FIELD_EQ(inName,"specularColor") ) { return set_specularColor(inValue); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return set_diffuseMethod(inValue); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return set_ambientMethod(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_alphaBlending") ) { _alphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return set_specularMethod(inValue); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return set_alphaThreshold(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return set_enableLightFallOff(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return set_diffuseLightSources(inValue); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return set_specularLightSources(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SinglePassMaterialBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_alphaBlending"));
	outFields->push(HX_CSTRING("_screenPass"));
	outFields->push(HX_CSTRING("alphaBlending"));
	outFields->push(HX_CSTRING("specularColor"));
	outFields->push(HX_CSTRING("ambientColor"));
	outFields->push(HX_CSTRING("specular"));
	outFields->push(HX_CSTRING("ambient"));
	outFields->push(HX_CSTRING("gloss"));
	outFields->push(HX_CSTRING("specularMap"));
	outFields->push(HX_CSTRING("normalMap"));
	outFields->push(HX_CSTRING("numMethods"));
	outFields->push(HX_CSTRING("specularMethod"));
	outFields->push(HX_CSTRING("normalMethod"));
	outFields->push(HX_CSTRING("diffuseMethod"));
	outFields->push(HX_CSTRING("shadowMethod"));
	outFields->push(HX_CSTRING("ambientMethod"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("diffuseLightSources"));
	outFields->push(HX_CSTRING("specularLightSources"));
	outFields->push(HX_CSTRING("alphaThreshold"));
	outFields->push(HX_CSTRING("enableLightFallOff"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_lightPicker"),
	HX_CSTRING("updateMaterial"),
	HX_CSTRING("set_alphaBlending"),
	HX_CSTRING("get_alphaBlending"),
	HX_CSTRING("set_specularColor"),
	HX_CSTRING("get_specularColor"),
	HX_CSTRING("set_ambientColor"),
	HX_CSTRING("get_ambientColor"),
	HX_CSTRING("set_specular"),
	HX_CSTRING("get_specular"),
	HX_CSTRING("set_ambient"),
	HX_CSTRING("get_ambient"),
	HX_CSTRING("set_gloss"),
	HX_CSTRING("get_gloss"),
	HX_CSTRING("set_specularMap"),
	HX_CSTRING("get_specularMap"),
	HX_CSTRING("set_normalMap"),
	HX_CSTRING("get_normalMap"),
	HX_CSTRING("set_mipmap"),
	HX_CSTRING("removeMethod"),
	HX_CSTRING("addMethodAt"),
	HX_CSTRING("getMethodAt"),
	HX_CSTRING("hasMethod"),
	HX_CSTRING("get_numMethods"),
	HX_CSTRING("addMethod"),
	HX_CSTRING("set_specularMethod"),
	HX_CSTRING("get_specularMethod"),
	HX_CSTRING("set_normalMethod"),
	HX_CSTRING("get_normalMethod"),
	HX_CSTRING("set_diffuseMethod"),
	HX_CSTRING("get_diffuseMethod"),
	HX_CSTRING("set_shadowMethod"),
	HX_CSTRING("get_shadowMethod"),
	HX_CSTRING("set_ambientMethod"),
	HX_CSTRING("get_ambientMethod"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("get_requiresBlending"),
	HX_CSTRING("set_diffuseLightSources"),
	HX_CSTRING("get_diffuseLightSources"),
	HX_CSTRING("set_specularLightSources"),
	HX_CSTRING("get_specularLightSources"),
	HX_CSTRING("activateForDepth"),
	HX_CSTRING("set_depthCompareMode"),
	HX_CSTRING("set_blendMode"),
	HX_CSTRING("set_alphaThreshold"),
	HX_CSTRING("get_alphaThreshold"),
	HX_CSTRING("set_enableLightFallOff"),
	HX_CSTRING("get_enableLightFallOff"),
	HX_CSTRING("_alphaBlending"),
	HX_CSTRING("_screenPass"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SinglePassMaterialBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SinglePassMaterialBase_obj::__mClass,"__mClass");
};

Class SinglePassMaterialBase_obj::__mClass;

void SinglePassMaterialBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.SinglePassMaterialBase"), hx::TCanCast< SinglePassMaterialBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SinglePassMaterialBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
