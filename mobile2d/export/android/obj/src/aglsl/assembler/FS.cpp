#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_FS
#include <aglsl/assembler/FS.h>
#endif
namespace aglsl{
namespace assembler{

Void FS_obj::__construct()
{
HX_STACK_PUSH("FS::new","aglsl/assembler/FS.hx",14);
{
}
;
	return null();
}

FS_obj::~FS_obj() { }

Dynamic FS_obj::__CreateEmpty() { return  new FS_obj; }
hx::ObjectPtr< FS_obj > FS_obj::__new()
{  hx::ObjectPtr< FS_obj > result = new FS_obj();
	result->__construct();
	return result;}

Dynamic FS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FS_obj > result = new FS_obj();
	result->__construct();
	return result;}


FS_obj::FS_obj()
{
}

void FS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FS);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FS_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FS_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("format"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FS_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FS_obj::__mClass,"__mClass");
};

Class FS_obj::__mClass;

void FS_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.FS"), hx::TCanCast< FS_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FS_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
