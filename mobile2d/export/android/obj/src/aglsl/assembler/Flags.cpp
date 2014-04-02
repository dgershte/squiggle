#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_Flags
#include <aglsl/assembler/Flags.h>
#endif
namespace aglsl{
namespace assembler{

Void Flags_obj::__construct()
{
HX_STACK_PUSH("Flags::new","aglsl/assembler/Flags.hx",16);
{
}
;
	return null();
}

Flags_obj::~Flags_obj() { }

Dynamic Flags_obj::__CreateEmpty() { return  new Flags_obj; }
hx::ObjectPtr< Flags_obj > Flags_obj::__new()
{  hx::ObjectPtr< Flags_obj > result = new Flags_obj();
	result->__construct();
	return result;}

Dynamic Flags_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Flags_obj > result = new Flags_obj();
	result->__construct();
	return result;}


Flags_obj::Flags_obj()
{
}

void Flags_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Flags);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(fragonly,"fragonly");
	HX_MARK_MEMBER_NAME(horizontal,"horizontal");
	HX_MARK_MEMBER_NAME(simple,"simple");
	HX_MARK_END_CLASS();
}

void Flags_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(fragonly,"fragonly");
	HX_VISIT_MEMBER_NAME(horizontal,"horizontal");
	HX_VISIT_MEMBER_NAME(simple,"simple");
}

Dynamic Flags_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"simple") ) { return simple; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragonly") ) { return fragonly; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Flags_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simple") ) { simple=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fragonly") ) { fragonly=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Flags_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("fragonly"));
	outFields->push(HX_CSTRING("horizontal"));
	outFields->push(HX_CSTRING("simple"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("matrix"),
	HX_CSTRING("fragonly"),
	HX_CSTRING("horizontal"),
	HX_CSTRING("simple"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Flags_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Flags_obj::__mClass,"__mClass");
};

Class Flags_obj::__mClass;

void Flags_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.Flags"), hx::TCanCast< Flags_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Flags_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
