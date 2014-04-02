#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
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
#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#include <flash/display3D/textures/CubeTexture.h>
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

Void CubeTextureBase_obj::__construct()
{
HX_STACK_PUSH("CubeTextureBase::new","away3d/textures/CubeTextureBase.hx",11);
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

CubeTextureBase_obj::~CubeTextureBase_obj() { }

Dynamic CubeTextureBase_obj::__CreateEmpty() { return  new CubeTextureBase_obj; }
hx::ObjectPtr< CubeTextureBase_obj > CubeTextureBase_obj::__new()
{  hx::ObjectPtr< CubeTextureBase_obj > result = new CubeTextureBase_obj();
	result->__construct();
	return result;}

Dynamic CubeTextureBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTextureBase_obj > result = new CubeTextureBase_obj();
	result->__construct();
	return result;}

::flash::display3D::textures::TextureBase CubeTextureBase_obj::createTexture( ::flash::display3D::Context3D context){
	HX_STACK_PUSH("CubeTextureBase::createTexture","away3d/textures/CubeTextureBase.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context,"context");
	HX_STACK_LINE(19)
	return context->createCubeTexture(this->get_width(),::flash::display3D::Context3DTextureFormat_obj::BGRA,false,null());
}


int CubeTextureBase_obj::get_size( ){
	HX_STACK_PUSH("CubeTextureBase::get_size","away3d/textures/CubeTextureBase.hx",15);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(CubeTextureBase_obj,get_size,return )


CubeTextureBase_obj::CubeTextureBase_obj()
{
}

void CubeTextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTextureBase);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTextureBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTextureBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createTexture"),
	HX_CSTRING("get_size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTextureBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTextureBase_obj::__mClass,"__mClass");
};

Class CubeTextureBase_obj::__mClass;

void CubeTextureBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.CubeTextureBase"), hx::TCanCast< CubeTextureBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubeTextureBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
