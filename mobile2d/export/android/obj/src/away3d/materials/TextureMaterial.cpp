#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
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

Void TextureMaterial_obj::__construct(::away3d::textures::Texture2DBase texture,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_mipmap)
{
HX_STACK_PUSH("TextureMaterial::new","away3d/materials/TextureMaterial.hx",23);
bool smooth = __o_smooth.Default(true);
bool repeat = __o_repeat.Default(false);
bool mipmap = __o_mipmap.Default(true);
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->set_texture(texture);
	HX_STACK_LINE(26)
	this->set_smooth(smooth);
	HX_STACK_LINE(27)
	this->set_repeat(repeat);
	HX_STACK_LINE(28)
	this->set_mipmap(mipmap);
}
;
	return null();
}

TextureMaterial_obj::~TextureMaterial_obj() { }

Dynamic TextureMaterial_obj::__CreateEmpty() { return  new TextureMaterial_obj; }
hx::ObjectPtr< TextureMaterial_obj > TextureMaterial_obj::__new(::away3d::textures::Texture2DBase texture,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_mipmap)
{  hx::ObjectPtr< TextureMaterial_obj > result = new TextureMaterial_obj();
	result->__construct(texture,__o_smooth,__o_repeat,__o_mipmap);
	return result;}

Dynamic TextureMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureMaterial_obj > result = new TextureMaterial_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::away3d::textures::Texture2DBase TextureMaterial_obj::set_ambientTexture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("TextureMaterial::set_ambientTexture","away3d/materials/TextureMaterial.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(87)
	this->_screenPass->get_ambientMethod()->set_texture(value);
	HX_STACK_LINE(88)
	this->_screenPass->get_diffuseMethod()->set_useAmbientTexture(hx::TCast< Bool >::cast((value != null())));
	HX_STACK_LINE(89)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_ambientTexture,return )

::away3d::textures::Texture2DBase TextureMaterial_obj::get_ambientTexture( ){
	HX_STACK_PUSH("TextureMaterial::get_ambientTexture","away3d/materials/TextureMaterial.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->_screenPass->get_ambientMethod()->get_texture();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_ambientTexture,return )

::away3d::textures::Texture2DBase TextureMaterial_obj::set_texture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("TextureMaterial::set_texture","away3d/materials/TextureMaterial.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(74)
	this->_screenPass->get_diffuseMethod()->set_texture(value);
	HX_STACK_LINE(75)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_texture,return )

::away3d::textures::Texture2DBase TextureMaterial_obj::get_texture( ){
	HX_STACK_PUSH("TextureMaterial::get_texture","away3d/materials/TextureMaterial.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->_screenPass->get_diffuseMethod()->get_texture();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_texture,return )

Float TextureMaterial_obj::set_alpha( Float value){
	HX_STACK_PUSH("TextureMaterial::set_alpha","away3d/materials/TextureMaterial.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(55)
	if (((value > (int)1))){
		HX_STACK_LINE(55)
		value = (int)1;
	}
	else{
		HX_STACK_LINE(56)
		if (((value < (int)0))){
			HX_STACK_LINE(56)
			value = (int)0;
		}
	}
	HX_STACK_LINE(57)
	if (((this->get_colorTransform() == null()))){
		HX_STACK_LINE(58)
		this->set_colorTransform(::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null()));
	}
	HX_STACK_LINE(59)
	this->get_colorTransform()->alphaMultiplier = value;
	HX_STACK_LINE(60)
	this->_screenPass->set_preserveAlpha(this->get_requiresBlending());
	HX_STACK_LINE(61)
	this->_screenPass->setBlendMode((  (((bool((this->get_blendMode() == ::flash::display::BlendMode_obj::NORMAL)) && bool(this->get_requiresBlending())))) ? ::flash::display::BlendMode(::flash::display::BlendMode_obj::LAYER) : ::flash::display::BlendMode(this->get_blendMode()) ));
	HX_STACK_LINE(62)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_alpha,return )

Float TextureMaterial_obj::get_alpha( ){
	HX_STACK_PUSH("TextureMaterial::get_alpha","away3d/materials/TextureMaterial.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return (  (((this->_screenPass->get_colorTransform() != null()))) ? Float(this->_screenPass->get_colorTransform()->alphaMultiplier) : Float((int)1) );
}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_alpha,return )

bool TextureMaterial_obj::set_animateUVs( bool value){
	HX_STACK_PUSH("TextureMaterial::set_animateUVs","away3d/materials/TextureMaterial.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(42)
	this->_screenPass->set_animateUVs(value);
	HX_STACK_LINE(43)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_animateUVs,return )

bool TextureMaterial_obj::get_animateUVs( ){
	HX_STACK_PUSH("TextureMaterial::get_animateUVs","away3d/materials/TextureMaterial.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->_screenPass->get_animateUVs();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_animateUVs,return )


TextureMaterial_obj::TextureMaterial_obj()
{
}

void TextureMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureMaterial);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TextureMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return get_texture(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return get_animateUVs(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return set_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return get_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { return get_ambientTexture(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_ambientTexture") ) { return set_ambientTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientTexture") ) { return get_ambientTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return set_texture(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return set_animateUVs(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { return set_ambientTexture(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ambientTexture"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("animateUVs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_ambientTexture"),
	HX_CSTRING("get_ambientTexture"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_animateUVs"),
	HX_CSTRING("get_animateUVs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureMaterial_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureMaterial_obj::__mClass,"__mClass");
};

Class TextureMaterial_obj::__mClass;

void TextureMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.TextureMaterial"), hx::TCanCast< TextureMaterial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureMaterial_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
