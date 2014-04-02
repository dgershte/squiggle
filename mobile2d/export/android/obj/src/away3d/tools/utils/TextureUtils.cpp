#include <hxcpp.h>

#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
namespace away3d{
namespace tools{
namespace utils{

Void TextureUtils_obj::__construct()
{
	return null();
}

TextureUtils_obj::~TextureUtils_obj() { }

Dynamic TextureUtils_obj::__CreateEmpty() { return  new TextureUtils_obj; }
hx::ObjectPtr< TextureUtils_obj > TextureUtils_obj::__new()
{  hx::ObjectPtr< TextureUtils_obj > result = new TextureUtils_obj();
	result->__construct();
	return result;}

Dynamic TextureUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureUtils_obj > result = new TextureUtils_obj();
	result->__construct();
	return result;}

int TextureUtils_obj::MAX_SIZE;

bool TextureUtils_obj::isBitmapDataValid( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TextureUtils::isBitmapDataValid","away3d/tools/utils/TextureUtils.hx",9);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(10)
	if (((bitmapData == null()))){
		HX_STACK_LINE(10)
		return true;
	}
	HX_STACK_LINE(11)
	return (bool(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(bitmapData->get_width())) && bool(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(bitmapData->get_height())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isBitmapDataValid,return )

bool TextureUtils_obj::isDimensionValid( int d){
	HX_STACK_PUSH("TextureUtils::isDimensionValid","away3d/tools/utils/TextureUtils.hx",14);
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(14)
	return (bool((bool((d >= (int)1)) && bool((d <= ::away3d::tools::utils::TextureUtils_obj::MAX_SIZE)))) && bool(::away3d::tools::utils::TextureUtils_obj::isPowerOfTwo(d)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isDimensionValid,return )

bool TextureUtils_obj::isPowerOfTwo( int value){
	HX_STACK_PUSH("TextureUtils::isPowerOfTwo","away3d/tools/utils/TextureUtils.hx",18);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(18)
	return (  (((value > (int)0))) ? bool((((int(value) & int(-(value)))) == value)) : bool(false) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,isPowerOfTwo,return )

int TextureUtils_obj::getBestPowerOf2( int value){
	HX_STACK_PUSH("TextureUtils::getBestPowerOf2","away3d/tools/utils/TextureUtils.hx",22);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(23)
	int p = (int)1;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(24)
	while(((p < value))){
		HX_STACK_LINE(24)
		hx::ShlEq(p,(int)1);
	}
	HX_STACK_LINE(25)
	if (((p > ::away3d::tools::utils::TextureUtils_obj::MAX_SIZE))){
		HX_STACK_LINE(25)
		p = ::away3d::tools::utils::TextureUtils_obj::MAX_SIZE;
	}
	HX_STACK_LINE(26)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureUtils_obj,getBestPowerOf2,return )


TextureUtils_obj::TextureUtils_obj()
{
}

void TextureUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureUtils);
	HX_MARK_END_CLASS();
}

void TextureUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic TextureUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MAX_SIZE") ) { return MAX_SIZE; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isPowerOfTwo") ) { return isPowerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBestPowerOf2") ) { return getBestPowerOf2_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isDimensionValid") ) { return isDimensionValid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isBitmapDataValid") ) { return isBitmapDataValid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"MAX_SIZE") ) { MAX_SIZE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_SIZE"),
	HX_CSTRING("isBitmapDataValid"),
	HX_CSTRING("isDimensionValid"),
	HX_CSTRING("isPowerOfTwo"),
	HX_CSTRING("getBestPowerOf2"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureUtils_obj::MAX_SIZE,"MAX_SIZE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureUtils_obj::MAX_SIZE,"MAX_SIZE");
};

Class TextureUtils_obj::__mClass;

void TextureUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.tools.utils.TextureUtils"), hx::TCanCast< TextureUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureUtils_obj::__boot()
{
	MAX_SIZE= (int)4096;
}

} // end namespace away3d
} // end namespace tools
} // end namespace utils
