#include <hxcpp.h>

#ifndef INCLUDED_EnvNegX
#include <EnvNegX.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif

Void EnvNegX_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_PUSH("EnvNegX::new","openfl/Assets.hx",1300);
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(1366)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(1368)
	::flash::utils::ByteArray byteArray = ::flash::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::EnvNegX_obj::resourceName));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1369)
	this->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
}
;
	return null();
}

EnvNegX_obj::~EnvNegX_obj() { }

Dynamic EnvNegX_obj::__CreateEmpty() { return  new EnvNegX_obj; }
hx::ObjectPtr< EnvNegX_obj > EnvNegX_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< EnvNegX_obj > result = new EnvNegX_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic EnvNegX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnvNegX_obj > result = new EnvNegX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String EnvNegX_obj::resourceName;


EnvNegX_obj::EnvNegX_obj()
{
}

void EnvNegX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnvNegX);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnvNegX_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EnvNegX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnvNegX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnvNegX_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnvNegX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnvNegX_obj::resourceName,"resourceName");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnvNegX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnvNegX_obj::resourceName,"resourceName");
};

Class EnvNegX_obj::__mClass;

void EnvNegX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("EnvNegX"), hx::TCanCast< EnvNegX_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EnvNegX_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap_EnvNegX");
}

