#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Destination
#include <aglsl/Destination.h>
#endif
namespace aglsl{

Void Destination_obj::__construct()
{
HX_STACK_PUSH("Destination::new","aglsl/Destination.hx",23);
{
	HX_STACK_LINE(24)
	this->mask = (int)0;
	HX_STACK_LINE(25)
	this->regnum = (int)0;
	HX_STACK_LINE(26)
	this->regtype = (int)0;
	HX_STACK_LINE(27)
	this->dim = (int)0;
}
;
	return null();
}

Destination_obj::~Destination_obj() { }

Dynamic Destination_obj::__CreateEmpty() { return  new Destination_obj; }
hx::ObjectPtr< Destination_obj > Destination_obj::__new()
{  hx::ObjectPtr< Destination_obj > result = new Destination_obj();
	result->__construct();
	return result;}

Dynamic Destination_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Destination_obj > result = new Destination_obj();
	result->__construct();
	return result;}


Destination_obj::Destination_obj()
{
}

void Destination_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Destination);
	HX_MARK_MEMBER_NAME(indirectflag,"indirectflag");
	HX_MARK_MEMBER_NAME(indexselect,"indexselect");
	HX_MARK_MEMBER_NAME(indexregtype,"indexregtype");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(mipmap,"mipmap");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_MEMBER_NAME(readmode,"readmode");
	HX_MARK_MEMBER_NAME(lodbiad,"lodbiad");
	HX_MARK_MEMBER_NAME(swizzle,"swizzle");
	HX_MARK_MEMBER_NAME(indexoffset,"indexoffset");
	HX_MARK_MEMBER_NAME(dim,"dim");
	HX_MARK_MEMBER_NAME(regtype,"regtype");
	HX_MARK_MEMBER_NAME(regnum,"regnum");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_END_CLASS();
}

void Destination_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(indirectflag,"indirectflag");
	HX_VISIT_MEMBER_NAME(indexselect,"indexselect");
	HX_VISIT_MEMBER_NAME(indexregtype,"indexregtype");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(mipmap,"mipmap");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(special,"special");
	HX_VISIT_MEMBER_NAME(readmode,"readmode");
	HX_VISIT_MEMBER_NAME(lodbiad,"lodbiad");
	HX_VISIT_MEMBER_NAME(swizzle,"swizzle");
	HX_VISIT_MEMBER_NAME(indexoffset,"indexoffset");
	HX_VISIT_MEMBER_NAME(dim,"dim");
	HX_VISIT_MEMBER_NAME(regtype,"regtype");
	HX_VISIT_MEMBER_NAME(regnum,"regnum");
	HX_VISIT_MEMBER_NAME(mask,"mask");
}

Dynamic Destination_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { return dim; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return mipmap; }
		if (HX_FIELD_EQ(inName,"regnum") ) { return regnum; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		if (HX_FIELD_EQ(inName,"lodbiad") ) { return lodbiad; }
		if (HX_FIELD_EQ(inName,"swizzle") ) { return swizzle; }
		if (HX_FIELD_EQ(inName,"regtype") ) { return regtype; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readmode") ) { return readmode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexselect") ) { return indexselect; }
		if (HX_FIELD_EQ(inName,"indexoffset") ) { return indexoffset; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"indirectflag") ) { return indirectflag; }
		if (HX_FIELD_EQ(inName,"indexregtype") ) { return indexregtype; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Destination_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { dim=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mipmap") ) { mipmap=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regnum") ) { regnum=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lodbiad") ) { lodbiad=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swizzle") ) { swizzle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regtype") ) { regtype=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readmode") ) { readmode=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexselect") ) { indexselect=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexoffset") ) { indexoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"indirectflag") ) { indirectflag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexregtype") ) { indexregtype=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Destination_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("indirectflag"));
	outFields->push(HX_CSTRING("indexselect"));
	outFields->push(HX_CSTRING("indexregtype"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("mipmap"));
	outFields->push(HX_CSTRING("wrap"));
	outFields->push(HX_CSTRING("special"));
	outFields->push(HX_CSTRING("readmode"));
	outFields->push(HX_CSTRING("lodbiad"));
	outFields->push(HX_CSTRING("swizzle"));
	outFields->push(HX_CSTRING("indexoffset"));
	outFields->push(HX_CSTRING("dim"));
	outFields->push(HX_CSTRING("regtype"));
	outFields->push(HX_CSTRING("regnum"));
	outFields->push(HX_CSTRING("mask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("indirectflag"),
	HX_CSTRING("indexselect"),
	HX_CSTRING("indexregtype"),
	HX_CSTRING("filter"),
	HX_CSTRING("mipmap"),
	HX_CSTRING("wrap"),
	HX_CSTRING("special"),
	HX_CSTRING("readmode"),
	HX_CSTRING("lodbiad"),
	HX_CSTRING("swizzle"),
	HX_CSTRING("indexoffset"),
	HX_CSTRING("dim"),
	HX_CSTRING("regtype"),
	HX_CSTRING("regnum"),
	HX_CSTRING("mask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Destination_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Destination_obj::__mClass,"__mClass");
};

Class Destination_obj::__mClass;

void Destination_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Destination"), hx::TCanCast< Destination_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Destination_obj::__boot()
{
}

} // end namespace aglsl
