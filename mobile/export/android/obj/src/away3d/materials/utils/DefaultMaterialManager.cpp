#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
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
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#include <away3d/materials/utils/DefaultMaterialManager.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapTexture
#include <away3d/textures/BitmapTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{
namespace utils{

Void DefaultMaterialManager_obj::__construct()
{
	return null();
}

DefaultMaterialManager_obj::~DefaultMaterialManager_obj() { }

Dynamic DefaultMaterialManager_obj::__CreateEmpty() { return  new DefaultMaterialManager_obj; }
hx::ObjectPtr< DefaultMaterialManager_obj > DefaultMaterialManager_obj::__new()
{  hx::ObjectPtr< DefaultMaterialManager_obj > result = new DefaultMaterialManager_obj();
	result->__construct();
	return result;}

Dynamic DefaultMaterialManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultMaterialManager_obj > result = new DefaultMaterialManager_obj();
	result->__construct();
	return result;}

::flash::display::BitmapData DefaultMaterialManager_obj::_defaultTextureBitmapData;

::away3d::materials::TextureMaterial DefaultMaterialManager_obj::_defaultMaterial;

::away3d::textures::BitmapTexture DefaultMaterialManager_obj::_defaultTexture;

::away3d::materials::TextureMaterial DefaultMaterialManager_obj::getDefaultMaterial( ::away3d::core::base::IMaterialOwner renderable){
	HX_STACK_PUSH("DefaultMaterialManager::getDefaultMaterial","away3d/materials/utils/DefaultMaterialManager.hx",14);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_LINE(15)
	if (((::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture == null()))){
		HX_STACK_LINE(15)
		::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultTexture();
	}
	HX_STACK_LINE(16)
	if (((::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial == null()))){
		HX_STACK_LINE(16)
		::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultMaterial();
	}
	HX_STACK_LINE(17)
	return ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DefaultMaterialManager_obj,getDefaultMaterial,return )

::away3d::textures::BitmapTexture DefaultMaterialManager_obj::getDefaultTexture( ::away3d::core::base::IMaterialOwner renderable){
	HX_STACK_PUSH("DefaultMaterialManager::getDefaultTexture","away3d/materials/utils/DefaultMaterialManager.hx",20);
	HX_STACK_ARG(renderable,"renderable");
	HX_STACK_LINE(21)
	if (((::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture == null()))){
		HX_STACK_LINE(21)
		::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultTexture();
	}
	HX_STACK_LINE(22)
	return ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DefaultMaterialManager_obj,getDefaultTexture,return )

Void DefaultMaterialManager_obj::createDefaultTexture( ){
{
		HX_STACK_PUSH("DefaultMaterialManager::createDefaultTexture","away3d/materials/utils/DefaultMaterialManager.hx",25);
		HX_STACK_LINE(26)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData = ::flash::display::BitmapData_obj::__new((int)8,(int)8,false,(int)0,null());
		HX_STACK_LINE(28)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(29)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(30)
		i = (int)0;
		HX_STACK_LINE(31)
		while(((i < (int)8))){
			HX_STACK_LINE(32)
			j = (int)0;
			HX_STACK_LINE(33)
			while(((j < (int)8))){
				HX_STACK_LINE(34)
				if (((((int((int(j) & int((int)1))) ^ int((int(i) & int((int)1))))) == (int)1))){
					HX_STACK_LINE(34)
					::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(i,j,(int)16777215);
				}
				HX_STACK_LINE(35)
				(j)++;
			}
			HX_STACK_LINE(37)
			(i)++;
		}
		HX_STACK_LINE(39)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture = ::away3d::textures::BitmapTexture_obj::__new(::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData,null());
		HX_STACK_LINE(40)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture->set_name(HX_CSTRING("defaultTexture"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultMaterialManager_obj,createDefaultTexture,(void))

Void DefaultMaterialManager_obj::createDefaultMaterial( ){
{
		HX_STACK_PUSH("DefaultMaterialManager::createDefaultMaterial","away3d/materials/utils/DefaultMaterialManager.hx",43);
		HX_STACK_LINE(44)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial = ::away3d::materials::TextureMaterial_obj::__new(::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture,null(),null(),null());
		HX_STACK_LINE(45)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_mipmap(false);
		HX_STACK_LINE(46)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_smooth(false);
		HX_STACK_LINE(47)
		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_name(HX_CSTRING("defaultMaterial"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultMaterialManager_obj,createDefaultMaterial,(void))


DefaultMaterialManager_obj::DefaultMaterialManager_obj()
{
}

void DefaultMaterialManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultMaterialManager);
	HX_MARK_END_CLASS();
}

void DefaultMaterialManager_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic DefaultMaterialManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultTexture") ) { return _defaultTexture; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultMaterial") ) { return _defaultMaterial; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getDefaultTexture") ) { return getDefaultTexture_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDefaultMaterial") ) { return getDefaultMaterial_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createDefaultTexture") ) { return createDefaultTexture_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createDefaultMaterial") ) { return createDefaultMaterial_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_defaultTextureBitmapData") ) { return _defaultTextureBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultMaterialManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultTexture") ) { _defaultTexture=inValue.Cast< ::away3d::textures::BitmapTexture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultMaterial") ) { _defaultMaterial=inValue.Cast< ::away3d::materials::TextureMaterial >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_defaultTextureBitmapData") ) { _defaultTextureBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultMaterialManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_defaultTextureBitmapData"),
	HX_CSTRING("_defaultMaterial"),
	HX_CSTRING("_defaultTexture"),
	HX_CSTRING("getDefaultMaterial"),
	HX_CSTRING("getDefaultTexture"),
	HX_CSTRING("createDefaultTexture"),
	HX_CSTRING("createDefaultMaterial"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTextureBitmapData,"_defaultTextureBitmapData");
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultMaterial,"_defaultMaterial");
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTexture,"_defaultTexture");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTextureBitmapData,"_defaultTextureBitmapData");
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultMaterial,"_defaultMaterial");
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTexture,"_defaultTexture");
};

Class DefaultMaterialManager_obj::__mClass;

void DefaultMaterialManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.utils.DefaultMaterialManager"), hx::TCanCast< DefaultMaterialManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DefaultMaterialManager_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace utils
