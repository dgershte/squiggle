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
#ifndef INCLUDED_away3d_materials_SkyBoxMaterial
#include <away3d/materials/SkyBoxMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SkyBoxPass
#include <away3d/materials/passes/SkyBoxPass.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{

Void SkyBoxMaterial_obj::__construct(::away3d::textures::CubeTextureBase cubeMap)
{
HX_STACK_PUSH("SkyBoxMaterial::new","away3d/materials/SkyBoxMaterial.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_cubeMap = cubeMap;
	HX_STACK_LINE(25)
	this->addPass(this->_skyboxPass = ::away3d::materials::passes::SkyBoxPass_obj::__new());
	HX_STACK_LINE(26)
	this->_skyboxPass->set_cubeTexture(this->_cubeMap);
}
;
	return null();
}

SkyBoxMaterial_obj::~SkyBoxMaterial_obj() { }

Dynamic SkyBoxMaterial_obj::__CreateEmpty() { return  new SkyBoxMaterial_obj; }
hx::ObjectPtr< SkyBoxMaterial_obj > SkyBoxMaterial_obj::__new(::away3d::textures::CubeTextureBase cubeMap)
{  hx::ObjectPtr< SkyBoxMaterial_obj > result = new SkyBoxMaterial_obj();
	result->__construct(cubeMap);
	return result;}

Dynamic SkyBoxMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkyBoxMaterial_obj > result = new SkyBoxMaterial_obj();
	result->__construct(inArgs[0]);
	return result;}

::away3d::textures::CubeTextureBase SkyBoxMaterial_obj::set_cubeMap( ::away3d::textures::CubeTextureBase value){
	HX_STACK_PUSH("SkyBoxMaterial::set_cubeMap","away3d/materials/SkyBoxMaterial.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(39)
	if (((bool((bool((value != null())) && bool((this->_cubeMap != null())))) && bool(((bool((value->get_hasMipMaps() != this->_cubeMap->get_hasMipMaps())) || bool((value->get_format() != this->_cubeMap->get_format())))))))){
		HX_STACK_LINE(39)
		this->invalidatePasses(null());
	}
	HX_STACK_LINE(40)
	this->_cubeMap = value;
	HX_STACK_LINE(41)
	this->_skyboxPass->set_cubeTexture(this->_cubeMap);
	HX_STACK_LINE(42)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBoxMaterial_obj,set_cubeMap,return )

::away3d::textures::CubeTextureBase SkyBoxMaterial_obj::get_cubeMap( ){
	HX_STACK_PUSH("SkyBoxMaterial::get_cubeMap","away3d/materials/SkyBoxMaterial.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->_cubeMap;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBoxMaterial_obj,get_cubeMap,return )


SkyBoxMaterial_obj::SkyBoxMaterial_obj()
{
}

void SkyBoxMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkyBoxMaterial);
	HX_MARK_MEMBER_NAME(_skyboxPass,"_skyboxPass");
	HX_MARK_MEMBER_NAME(_cubeMap,"_cubeMap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkyBoxMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skyboxPass,"_skyboxPass");
	HX_VISIT_MEMBER_NAME(_cubeMap,"_cubeMap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkyBoxMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return get_cubeMap(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cubeMap") ) { return _cubeMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_cubeMap") ) { return set_cubeMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cubeMap") ) { return get_cubeMap_dyn(); }
		if (HX_FIELD_EQ(inName,"_skyboxPass") ) { return _skyboxPass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkyBoxMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return set_cubeMap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cubeMap") ) { _cubeMap=inValue.Cast< ::away3d::textures::CubeTextureBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skyboxPass") ) { _skyboxPass=inValue.Cast< ::away3d::materials::passes::SkyBoxPass >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkyBoxMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skyboxPass"));
	outFields->push(HX_CSTRING("_cubeMap"));
	outFields->push(HX_CSTRING("cubeMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_cubeMap"),
	HX_CSTRING("get_cubeMap"),
	HX_CSTRING("_skyboxPass"),
	HX_CSTRING("_cubeMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkyBoxMaterial_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkyBoxMaterial_obj::__mClass,"__mClass");
};

Class SkyBoxMaterial_obj::__mClass;

void SkyBoxMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.SkyBoxMaterial"), hx::TCanCast< SkyBoxMaterial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkyBoxMaterial_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
