#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_ColorMaterial
#include <away3d/materials/ColorMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
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
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{

Void ColorMaterial_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha)
{
HX_STACK_PUSH("ColorMaterial::new","away3d/materials/ColorMaterial.hx",20);
int color = __o_color.Default(13421772);
Float alpha = __o_alpha.Default(1);
{
	HX_STACK_LINE(21)
	this->_diffuseAlpha = (int)1;
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->set_color(color);
	HX_STACK_LINE(24)
	this->set_alpha(alpha);
}
;
	return null();
}

ColorMaterial_obj::~ColorMaterial_obj() { }

Dynamic ColorMaterial_obj::__CreateEmpty() { return  new ColorMaterial_obj; }
hx::ObjectPtr< ColorMaterial_obj > ColorMaterial_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha)
{  hx::ObjectPtr< ColorMaterial_obj > result = new ColorMaterial_obj();
	result->__construct(__o_color,__o_alpha);
	return result;}

Dynamic ColorMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMaterial_obj > result = new ColorMaterial_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool ColorMaterial_obj::get_requiresBlending( ){
	HX_STACK_PUSH("ColorMaterial::get_requiresBlending","away3d/materials/ColorMaterial.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return (bool(this->super::get_requiresBlending()) || bool((this->_diffuseAlpha < (int)1)));
}


int ColorMaterial_obj::set_color( int value){
	HX_STACK_PUSH("ColorMaterial::set_color","away3d/materials/ColorMaterial.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(53)
	this->_screenPass->get_diffuseMethod()->set_diffuseColor(value);
	HX_STACK_LINE(54)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMaterial_obj,set_color,return )

int ColorMaterial_obj::get_color( ){
	HX_STACK_PUSH("ColorMaterial::get_color","away3d/materials/ColorMaterial.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_screenPass->get_diffuseMethod()->get_diffuseColor();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMaterial_obj,get_color,return )

Float ColorMaterial_obj::set_alpha( Float value){
	HX_STACK_PUSH("ColorMaterial::set_alpha","away3d/materials/ColorMaterial.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(36)
	if (((value > (int)1))){
		HX_STACK_LINE(36)
		value = (int)1;
	}
	else{
		HX_STACK_LINE(37)
		if (((value < (int)0))){
			HX_STACK_LINE(37)
			value = (int)0;
		}
	}
	HX_STACK_LINE(38)
	this->_screenPass->get_diffuseMethod()->set_diffuseAlpha(this->_diffuseAlpha = value);
	HX_STACK_LINE(39)
	this->_screenPass->set_preserveAlpha(this->get_requiresBlending());
	HX_STACK_LINE(40)
	this->_screenPass->setBlendMode((  (((bool((this->get_blendMode() == ::flash::display::BlendMode_obj::NORMAL)) && bool(this->get_requiresBlending())))) ? ::flash::display::BlendMode(::flash::display::BlendMode_obj::LAYER) : ::flash::display::BlendMode(this->get_blendMode()) ));
	HX_STACK_LINE(41)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMaterial_obj,set_alpha,return )

Float ColorMaterial_obj::get_alpha( ){
	HX_STACK_PUSH("ColorMaterial::get_alpha","away3d/materials/ColorMaterial.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return this->_screenPass->get_diffuseMethod()->get_diffuseAlpha();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMaterial_obj,get_alpha,return )


ColorMaterial_obj::ColorMaterial_obj()
{
}

void ColorMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMaterial);
	HX_MARK_MEMBER_NAME(_diffuseAlpha,"_diffuseAlpha");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_diffuseAlpha,"_diffuseAlpha");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffuseAlpha") ) { return _diffuseAlpha; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_requiresBlending") ) { return get_requiresBlending_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_diffuseAlpha") ) { _diffuseAlpha=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_diffuseAlpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_requiresBlending"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("_diffuseAlpha"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMaterial_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMaterial_obj::__mClass,"__mClass");
};

Class ColorMaterial_obj::__mClass;

void ColorMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.ColorMaterial"), hx::TCanCast< ColorMaterial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorMaterial_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
