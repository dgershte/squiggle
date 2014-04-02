#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
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
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
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
namespace away3d{
namespace textures{

Void BitmapTexture_obj::__construct(::flash::display::BitmapData bitmapData,hx::Null< bool >  __o_generateMipmaps)
{
HX_STACK_PUSH("BitmapTexture::new","away3d/textures/BitmapTexture.hx",20);
bool generateMipmaps = __o_generateMipmaps.Default(true);
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->set_bitmapData(bitmapData);
	HX_STACK_LINE(23)
	this->_generateMipmaps = generateMipmaps;
}
;
	return null();
}

BitmapTexture_obj::~BitmapTexture_obj() { }

Dynamic BitmapTexture_obj::__CreateEmpty() { return  new BitmapTexture_obj; }
hx::ObjectPtr< BitmapTexture_obj > BitmapTexture_obj::__new(::flash::display::BitmapData bitmapData,hx::Null< bool >  __o_generateMipmaps)
{  hx::ObjectPtr< BitmapTexture_obj > result = new BitmapTexture_obj();
	result->__construct(bitmapData,__o_generateMipmaps);
	return result;}

Dynamic BitmapTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapTexture_obj > result = new BitmapTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BitmapTexture_obj::dispose( ){
{
		HX_STACK_PUSH("BitmapTexture::dispose","away3d/textures/BitmapTexture.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		this->super::dispose();
		HX_STACK_LINE(85)
		if (((this->_mipMapHolder != null()))){
			HX_STACK_LINE(86)
			this->freeMipMapHolder();
		}
	}
return null();
}


Void BitmapTexture_obj::freeMipMapHolder( ){
{
		HX_STACK_PUSH("BitmapTexture::freeMipMapHolder","away3d/textures/BitmapTexture.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		int holderWidth = this->_mipMapHolder->get_width();		HX_STACK_VAR(holderWidth,"holderWidth");
		HX_STACK_LINE(74)
		int holderHeight = this->_mipMapHolder->get_height();		HX_STACK_VAR(holderHeight,"holderHeight");
		HX_STACK_LINE(76)
		if (((--(hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMapUses->__GetItem(holderWidth)).mPtr,holderHeight)) == (int)0))){
			HX_STACK_LINE(77)
			::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(holderWidth)->__GetItem(holderHeight)->__Field(HX_CSTRING("dispose"),true)();
			HX_STACK_LINE(78)
			hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(holderWidth)).mPtr,holderHeight) = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,freeMipMapHolder,(void))

Void BitmapTexture_obj::getMipMapHolder( ){
{
		HX_STACK_PUSH("BitmapTexture::getMipMapHolder","away3d/textures/BitmapTexture.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		int newW;		HX_STACK_VAR(newW,"newW");
		int newH;		HX_STACK_VAR(newH,"newH");
		HX_STACK_LINE(48)
		newW = this->_bitmapData->get_width();
		HX_STACK_LINE(49)
		newH = this->_bitmapData->get_height();
		HX_STACK_LINE(51)
		if (((this->_mipMapHolder != null()))){
			HX_STACK_LINE(52)
			if (((bool((this->_mipMapHolder->get_width() == newW)) && bool((this->_bitmapData->get_height() == newH))))){
				HX_STACK_LINE(53)
				return null();
			}
			HX_STACK_LINE(55)
			this->freeMipMapHolder();
		}
		HX_STACK_LINE(58)
		if (((::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(newW) == null()))){
			HX_STACK_LINE(59)
			hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMaps).mPtr,newW) = Dynamic( Array_obj<Dynamic>::__new());
			HX_STACK_LINE(60)
			hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMapUses).mPtr,newW) = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(62)
		if (((::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(newW)->__GetItem(newH) == null()))){
			HX_STACK_LINE(63)
			this->_mipMapHolder = hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(newW)).mPtr,newH) = ::flash::display::BitmapData_obj::__new(newW,newH,true,null(),null());
			HX_STACK_LINE(64)
			hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMapUses->__GetItem(newW)).mPtr,newH) = (int)1;
		}
		else{
			HX_STACK_LINE(67)
			hx::IndexRef((::away3d::textures::BitmapTexture_obj::_mipMapUses->__GetItem(newW)).mPtr,newH) = (::away3d::textures::BitmapTexture_obj::_mipMapUses->__GetItem(newW)->__GetItem(newH) + (int)1);
			HX_STACK_LINE(68)
			this->_mipMapHolder = ::away3d::textures::BitmapTexture_obj::_mipMaps->__GetItem(newW)->__GetItem(newH);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,getMipMapHolder,(void))

Void BitmapTexture_obj::uploadContent( ::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("BitmapTexture::uploadContent","away3d/textures/BitmapTexture.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(40)
		if ((this->_generateMipmaps)){
			HX_STACK_LINE(41)
			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(this->_bitmapData,texture,this->_mipMapHolder,true,null());
		}
		else{
			HX_STACK_LINE(42)
			(hx::TCast< flash::display3D::textures::Texture >::cast(texture))->uploadFromBitmapData(this->_bitmapData,(int)0);
		}
	}
return null();
}


::flash::display::BitmapData BitmapTexture_obj::set_bitmapData( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapTexture::set_bitmapData","away3d/textures/BitmapTexture.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(31)
	if (((value == this->_bitmapData))){
		HX_STACK_LINE(31)
		return null();
	}
	HX_STACK_LINE(32)
	if ((!(::away3d::tools::utils::TextureUtils_obj::isBitmapDataValid(value)))){
		HX_STACK_LINE(32)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Invalid bitmapData: Width and height must be power of 2 and cannot exceed 2048"),null()));
	}
	HX_STACK_LINE(33)
	this->invalidateContent();
	HX_STACK_LINE(34)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(35)
	this->_bitmapData = value;
	HX_STACK_LINE(36)
	if ((this->_generateMipmaps)){
		HX_STACK_LINE(36)
		this->getMipMapHolder();
	}
	HX_STACK_LINE(37)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTexture_obj,set_bitmapData,return )

::flash::display::BitmapData BitmapTexture_obj::get_bitmapData( ){
	HX_STACK_PUSH("BitmapTexture::get_bitmapData","away3d/textures/BitmapTexture.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(26)
	return this->_bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTexture_obj,get_bitmapData,return )

Dynamic BitmapTexture_obj::_mipMaps;

Dynamic BitmapTexture_obj::_mipMapUses;


BitmapTexture_obj::BitmapTexture_obj()
{
}

void BitmapTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapTexture);
	HX_MARK_MEMBER_NAME(_generateMipmaps,"_generateMipmaps");
	HX_MARK_MEMBER_NAME(_mipMapHolder,"_mipMapHolder");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_generateMipmaps,"_generateMipmaps");
	HX_VISIT_MEMBER_NAME(_mipMapHolder,"_mipMapHolder");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_mipMaps") ) { return _mipMaps; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return get_bitmapData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mipMapUses") ) { return _mipMapUses; }
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return uploadContent_dyn(); }
		if (HX_FIELD_EQ(inName,"_mipMapHolder") ) { return _mipMapHolder; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return get_bitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMipMapHolder") ) { return getMipMapHolder_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"freeMipMapHolder") ) { return freeMipMapHolder_dyn(); }
		if (HX_FIELD_EQ(inName,"_generateMipmaps") ) { return _generateMipmaps; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_mipMaps") ) { _mipMaps=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return set_bitmapData(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mipMapUses") ) { _mipMapUses=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mipMapHolder") ) { _mipMapHolder=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_generateMipmaps") ) { _generateMipmaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_generateMipmaps"));
	outFields->push(HX_CSTRING("_mipMapHolder"));
	outFields->push(HX_CSTRING("_bitmapData"));
	outFields->push(HX_CSTRING("bitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_mipMaps"),
	HX_CSTRING("_mipMapUses"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("freeMipMapHolder"),
	HX_CSTRING("getMipMapHolder"),
	HX_CSTRING("uploadContent"),
	HX_CSTRING("set_bitmapData"),
	HX_CSTRING("get_bitmapData"),
	HX_CSTRING("_generateMipmaps"),
	HX_CSTRING("_mipMapHolder"),
	HX_CSTRING("_bitmapData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapTexture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapTexture_obj::_mipMaps,"_mipMaps");
	HX_MARK_MEMBER_NAME(BitmapTexture_obj::_mipMapUses,"_mipMapUses");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapTexture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapTexture_obj::_mipMaps,"_mipMaps");
	HX_VISIT_MEMBER_NAME(BitmapTexture_obj::_mipMapUses,"_mipMapUses");
};

Class BitmapTexture_obj::__mClass;

void BitmapTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.BitmapTexture"), hx::TCanCast< BitmapTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapTexture_obj::__boot()
{
	_mipMaps= Dynamic( Array_obj<Dynamic>::__new());
	_mipMapUses= Dynamic( Array_obj<Dynamic>::__new());
}

} // end namespace away3d
} // end namespace textures
