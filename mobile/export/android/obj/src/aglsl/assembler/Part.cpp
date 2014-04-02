#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_Part
#include <aglsl/assembler/Part.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace aglsl{
namespace assembler{

Void Part_obj::__construct(::String __o_name,hx::Null< int >  __o_version)
{
HX_STACK_PUSH("Part::new","aglsl/assembler/Part.hx",12);
::String name = __o_name.Default(HX_CSTRING(""));
int version = __o_version.Default(0);
{
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->version = version;
	HX_STACK_LINE(15)
	this->data = ::flash::utils::ByteArray_obj::__new(null());
	HX_STACK_LINE(16)
	this->data->set_endian(HX_CSTRING("littleEndian"));
}
;
	return null();
}

Part_obj::~Part_obj() { }

Dynamic Part_obj::__CreateEmpty() { return  new Part_obj; }
hx::ObjectPtr< Part_obj > Part_obj::__new(::String __o_name,hx::Null< int >  __o_version)
{  hx::ObjectPtr< Part_obj > result = new Part_obj();
	result->__construct(__o_name,__o_version);
	return result;}

Dynamic Part_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Part_obj > result = new Part_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Part_obj::Part_obj()
{
}

void Part_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Part);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Part_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Part_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Part_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flash::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Part_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("version"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Part_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Part_obj::__mClass,"__mClass");
};

Class Part_obj::__mClass;

void Part_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.Part"), hx::TCanCast< Part_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Part_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
