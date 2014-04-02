#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Destination
#include <aglsl/Destination.h>
#endif
#ifndef INCLUDED_aglsl_Token
#include <aglsl/Token.h>
#endif
namespace aglsl{

Void Token_obj::__construct()
{
HX_STACK_PUSH("Token::new","aglsl/Token.hx",9);
{
	HX_STACK_LINE(10)
	this->dest = ::aglsl::Destination_obj::__new();
	HX_STACK_LINE(11)
	this->opcode = (int)0;
	HX_STACK_LINE(12)
	this->a = ::aglsl::Destination_obj::__new();
	HX_STACK_LINE(13)
	this->b = ::aglsl::Destination_obj::__new();
}
;
	return null();
}

Token_obj::~Token_obj() { }

Dynamic Token_obj::__CreateEmpty() { return  new Token_obj; }
hx::ObjectPtr< Token_obj > Token_obj::__new()
{  hx::ObjectPtr< Token_obj > result = new Token_obj();
	result->__construct();
	return result;}

Dynamic Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Token_obj > result = new Token_obj();
	result->__construct();
	return result;}


Token_obj::Token_obj()
{
}

void Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Token);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(opcode,"opcode");
	HX_MARK_MEMBER_NAME(dest,"dest");
	HX_MARK_END_CLASS();
}

void Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(opcode,"opcode");
	HX_VISIT_MEMBER_NAME(dest,"dest");
}

Dynamic Token_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { return dest; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { return opcode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::aglsl::Destination >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::aglsl::Destination >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { dest=inValue.Cast< ::aglsl::Destination >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { opcode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("opcode"));
	outFields->push(HX_CSTRING("dest"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("opcode"),
	HX_CSTRING("dest"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
};

Class Token_obj::__mClass;

void Token_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Token"), hx::TCanCast< Token_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Token_obj::__boot()
{
}

} // end namespace aglsl
