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
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderCubeTexture
#include <away3d/textures/RenderCubeTexture.h>
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
#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#include <flash/display3D/textures/CubeTexture.h>
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

Void RenderCubeTexture_obj::__construct(int size)
{
HX_STACK_PUSH("RenderCubeTexture::new","away3d/textures/RenderCubeTexture.hx",15);
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->setSize(size,size);
}
;
	return null();
}

RenderCubeTexture_obj::~RenderCubeTexture_obj() { }

Dynamic RenderCubeTexture_obj::__CreateEmpty() { return  new RenderCubeTexture_obj; }
hx::ObjectPtr< RenderCubeTexture_obj > RenderCubeTexture_obj::__new(int size)
{  hx::ObjectPtr< RenderCubeTexture_obj > result = new RenderCubeTexture_obj();
	result->__construct(size);
	return result;}

Dynamic RenderCubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderCubeTexture_obj > result = new RenderCubeTexture_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::display3D::textures::TextureBase RenderCubeTexture_obj::createTexture( ::flash::display3D::Context3D context){
	HX_STACK_PUSH("RenderCubeTexture::createTexture","away3d/textures/RenderCubeTexture.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context,"context");
	HX_STACK_LINE(39)
	return context->createCubeTexture(this->_width,::flash::display3D::Context3DTextureFormat_obj::BGRA,true,null());
}


Void RenderCubeTexture_obj::uploadContent( ::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("RenderCubeTexture::uploadContent","away3d/textures/RenderCubeTexture.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(30)
		::flash::display::BitmapData bmd = ::flash::display::BitmapData_obj::__new(this->_width,this->_height,false,(int)0,null());		HX_STACK_VAR(bmd,"bmd");
		HX_STACK_LINE(31)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(32)
		while(((i < (int)6))){
			HX_STACK_LINE(33)
			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,i);
			HX_STACK_LINE(34)
			++(i);
		}
		HX_STACK_LINE(36)
		bmd->dispose();
	}
return null();
}


int RenderCubeTexture_obj::set_size( int value){
	HX_STACK_PUSH("RenderCubeTexture::set_size","away3d/textures/RenderCubeTexture.hx",20);
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
	this->setSize(value,value);
	HX_STACK_LINE(25)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RenderCubeTexture_obj,set_size,return )


RenderCubeTexture_obj::RenderCubeTexture_obj()
{
}

void RenderCubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderCubeTexture);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderCubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RenderCubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return uploadContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderCubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderCubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createTexture"),
	HX_CSTRING("uploadContent"),
	HX_CSTRING("set_size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderCubeTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderCubeTexture_obj::__mClass,"__mClass");
};

Class RenderCubeTexture_obj::__mClass;

void RenderCubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.RenderCubeTexture"), hx::TCanCast< RenderCubeTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderCubeTexture_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
