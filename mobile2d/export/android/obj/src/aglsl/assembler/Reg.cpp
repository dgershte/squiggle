#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_Reg
#include <aglsl/assembler/Reg.h>
#endif
namespace aglsl{
namespace assembler{

Void Reg_obj::__construct(int code,::String desc)
{
HX_STACK_PUSH("Reg::new","aglsl/assembler/Reg.hx",14);
{
	HX_STACK_LINE(15)
	this->code = code;
	HX_STACK_LINE(16)
	this->desc = desc;
}
;
	return null();
}

Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new(int code,::String desc)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct(code,desc);
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Reg_obj::Reg_obj()
{
}

void Reg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reg);
	HX_MARK_MEMBER_NAME(desc,"desc");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_END_CLASS();
}

void Reg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(desc,"desc");
	HX_VISIT_MEMBER_NAME(code,"code");
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"desc") ) { return desc; }
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"desc") ) { desc=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("desc"));
	outFields->push(HX_CSTRING("code"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("desc"),
	HX_CSTRING("code"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
};

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Reg_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
