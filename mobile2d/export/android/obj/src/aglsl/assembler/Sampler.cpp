#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_Sampler
#include <aglsl/assembler/Sampler.h>
#endif
namespace aglsl{
namespace assembler{

Void Sampler_obj::__construct(int shift,int mask,int value)
{
HX_STACK_PUSH("Sampler::new","aglsl/assembler/Sampler.hx",15);
{
	HX_STACK_LINE(16)
	this->shift = shift;
	HX_STACK_LINE(17)
	this->mask = mask;
	HX_STACK_LINE(18)
	this->value = value;
}
;
	return null();
}

Sampler_obj::~Sampler_obj() { }

Dynamic Sampler_obj::__CreateEmpty() { return  new Sampler_obj; }
hx::ObjectPtr< Sampler_obj > Sampler_obj::__new(int shift,int mask,int value)
{  hx::ObjectPtr< Sampler_obj > result = new Sampler_obj();
	result->__construct(shift,mask,value);
	return result;}

Dynamic Sampler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sampler_obj > result = new Sampler_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


Sampler_obj::Sampler_obj()
{
}

void Sampler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sampler);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(shift,"shift");
	HX_MARK_END_CLASS();
}

void Sampler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(shift,"shift");
}

Dynamic Sampler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sampler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shift") ) { shift=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sampler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("shift"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("value"),
	HX_CSTRING("mask"),
	HX_CSTRING("shift"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sampler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sampler_obj::__mClass,"__mClass");
};

Class Sampler_obj::__mClass;

void Sampler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.Sampler"), hx::TCanCast< Sampler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sampler_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
