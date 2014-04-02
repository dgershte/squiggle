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
#ifndef INCLUDED_away3d_textures_RenderTexture
#include <away3d/textures/RenderTexture.h>
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
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
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

Void RenderTexture_obj::__construct(int _width,int _height)
{
HX_STACK_PUSH("RenderTexture::new","away3d/textures/RenderTexture.hx",15);
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->setSize(_width,_height);
}
;
	return null();
}

RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(int _width,int _height)
{  hx::ObjectPtr< RenderTexture_obj > result = new RenderTexture_obj();
	result->__construct(_width,_height);
	return result;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > result = new RenderTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::display3D::textures::TextureBase RenderTexture_obj::createTexture( ::flash::display3D::Context3D context){
	HX_STACK_PUSH("RenderTexture::createTexture","away3d/textures/RenderTexture.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context,"context");
	HX_STACK_LINE(43)
	return context->createTexture(this->get_width(),this->get_height(),::flash::display3D::Context3DTextureFormat_obj::BGRA,true,null());
}


Void RenderTexture_obj::uploadContent( ::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("RenderTexture::uploadContent","away3d/textures/RenderTexture.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(38)
		::flash::display::BitmapData bmp = ::flash::display::BitmapData_obj::__new(this->get_width(),this->get_height(),false,(int)16711680,null());		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(39)
		::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmp,texture,null(),null(),null());
		HX_STACK_LINE(40)
		bmp->dispose();
	}
return null();
}


int RenderTexture_obj::set_height( int value){
	HX_STACK_PUSH("RenderTexture::set_height","away3d/textures/RenderTexture.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(29)
	if (((value == this->_height))){
		HX_STACK_LINE(29)
		return value;
	}
	HX_STACK_LINE(30)
	if ((!(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(value)))){
		HX_STACK_LINE(30)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Invalid size: Width and height must be power of 2 and cannot exceed 2048"),null()));
	}
	HX_STACK_LINE(31)
	this->invalidateContent();
	HX_STACK_LINE(32)
	this->setSize(this->_width,value);
	HX_STACK_LINE(33)
	return value;
}


int RenderTexture_obj::set_width( int value){
	HX_STACK_PUSH("RenderTexture::set_width","away3d/textures/RenderTexture.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(21)
	if (((value == this->_width))){
		HX_STACK_LINE(21)
		return value;
	}
	HX_STACK_LINE(22)
	if ((!(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(value)))){
		HX_STACK_LINE(22)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Invalid size: Width and height must be power of 2 and cannot exceed 2048"),null()));
	}
	HX_STACK_LINE(23)
	this->invalidateContent();
	HX_STACK_LINE(24)
	this->setSize(value,this->_height);
	HX_STACK_LINE(25)
	return value;
}



RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return uploadContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createTexture"),
	HX_CSTRING("uploadContent"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.RenderTexture"), hx::TCanCast< RenderTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderTexture_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
