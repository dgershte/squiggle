#include <hxcpp.h>

#ifndef INCLUDED_flash_system_PixelFormat
#include <flash/system/PixelFormat.h>
#endif
#ifndef INCLUDED_flash_system_ScreenMode
#include <flash/system/ScreenMode.h>
#endif
namespace flash{
namespace system{

Void ScreenMode_obj::__construct()
{
HX_STACK_PUSH("ScreenMode::new","flash/system/ScreenMode.hx",9);
{
	HX_STACK_LINE(10)
	this->width = (int)-1;
	HX_STACK_LINE(11)
	this->height = (int)-1;
	HX_STACK_LINE(12)
	this->format = null();
	HX_STACK_LINE(13)
	this->refreshRate = (int)-1;
}
;
	return null();
}

ScreenMode_obj::~ScreenMode_obj() { }

Dynamic ScreenMode_obj::__CreateEmpty() { return  new ScreenMode_obj; }
hx::ObjectPtr< ScreenMode_obj > ScreenMode_obj::__new()
{  hx::ObjectPtr< ScreenMode_obj > result = new ScreenMode_obj();
	result->__construct();
	return result;}

Dynamic ScreenMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenMode_obj > result = new ScreenMode_obj();
	result->__construct();
	return result;}


ScreenMode_obj::ScreenMode_obj()
{
}

void ScreenMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenMode);
	HX_MARK_MEMBER_NAME(refreshRate,"refreshRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void ScreenMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(refreshRate,"refreshRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic ScreenMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flash::system::PixelFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("refreshRate"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("refreshRate"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("format"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenMode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenMode_obj::__mClass,"__mClass");
};

Class ScreenMode_obj::__mClass;

void ScreenMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.system.ScreenMode"), hx::TCanCast< ScreenMode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScreenMode_obj::__boot()
{
}

} // end namespace flash
} // end namespace system