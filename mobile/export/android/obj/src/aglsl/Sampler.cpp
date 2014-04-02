#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Sampler
#include <aglsl/Sampler.h>
#endif
namespace aglsl{

Void Sampler_obj::__construct()
{
HX_STACK_PUSH("Sampler::new","aglsl/Sampler.hx",12);
{
	HX_STACK_LINE(13)
	this->lodbias = (int)0;
	HX_STACK_LINE(14)
	this->dim = (int)0;
	HX_STACK_LINE(15)
	this->readmode = (int)0;
	HX_STACK_LINE(16)
	this->special = (int)0;
	HX_STACK_LINE(17)
	this->wrap = (int)0;
	HX_STACK_LINE(18)
	this->mipmap = (int)0;
	HX_STACK_LINE(19)
	this->filter = (int)0;
}
;
	return null();
}

Sampler_obj::~Sampler_obj() { }

Dynamic Sampler_obj::__CreateEmpty() { return  new Sampler_obj; }
hx::ObjectPtr< Sampler_obj > Sampler_obj::__new()
{  hx::ObjectPtr< Sampler_obj > result = new Sampler_obj();
	result->__construct();
	return result;}

Dynamic Sampler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sampler_obj > result = new Sampler_obj();
	result->__construct();
	return result;}


Sampler_obj::Sampler_obj()
{
}

void Sampler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sampler);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(mipmap,"mipmap");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_MEMBER_NAME(readmode,"readmode");
	HX_MARK_MEMBER_NAME(dim,"dim");
	HX_MARK_MEMBER_NAME(lodbias,"lodbias");
	HX_MARK_END_CLASS();
}

void Sampler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(mipmap,"mipmap");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(special,"special");
	HX_VISIT_MEMBER_NAME(readmode,"readmode");
	HX_VISIT_MEMBER_NAME(dim,"dim");
	HX_VISIT_MEMBER_NAME(lodbias,"lodbias");
}

Dynamic Sampler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { return dim; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return mipmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		if (HX_FIELD_EQ(inName,"lodbias") ) { return lodbias; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readmode") ) { return readmode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sampler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { dim=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mipmap") ) { mipmap=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lodbias") ) { lodbias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readmode") ) { readmode=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sampler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("mipmap"));
	outFields->push(HX_CSTRING("wrap"));
	outFields->push(HX_CSTRING("special"));
	outFields->push(HX_CSTRING("readmode"));
	outFields->push(HX_CSTRING("dim"));
	outFields->push(HX_CSTRING("lodbias"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("filter"),
	HX_CSTRING("mipmap"),
	HX_CSTRING("wrap"),
	HX_CSTRING("special"),
	HX_CSTRING("readmode"),
	HX_CSTRING("dim"),
	HX_CSTRING("lodbias"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Sampler"), hx::TCanCast< Sampler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sampler_obj::__boot()
{
}

} // end namespace aglsl
