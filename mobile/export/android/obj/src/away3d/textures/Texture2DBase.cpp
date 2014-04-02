#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
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
namespace textures{

Void Texture2DBase_obj::__construct()
{
HX_STACK_PUSH("Texture2DBase::new","away3d/textures/Texture2DBase.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

Texture2DBase_obj::~Texture2DBase_obj() { }

Dynamic Texture2DBase_obj::__CreateEmpty() { return  new Texture2DBase_obj; }
hx::ObjectPtr< Texture2DBase_obj > Texture2DBase_obj::__new()
{  hx::ObjectPtr< Texture2DBase_obj > result = new Texture2DBase_obj();
	result->__construct();
	return result;}

Dynamic Texture2DBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture2DBase_obj > result = new Texture2DBase_obj();
	result->__construct();
	return result;}

::flash::display3D::textures::TextureBase Texture2DBase_obj::createTexture( ::flash::display3D::Context3D context){
	HX_STACK_PUSH("Texture2DBase::createTexture","away3d/textures/Texture2DBase.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context,"context");
	HX_STACK_LINE(14)
	return context->createTexture(this->_width,this->_height,::flash::display3D::Context3DTextureFormat_obj::BGRA,false,null());
}



Texture2DBase_obj::Texture2DBase_obj()
{
}

void Texture2DBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture2DBase);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture2DBase_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Texture2DBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture2DBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture2DBase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture2DBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture2DBase_obj::__mClass,"__mClass");
};

Class Texture2DBase_obj::__mClass;

void Texture2DBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.Texture2DBase"), hx::TCanCast< Texture2DBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Texture2DBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
