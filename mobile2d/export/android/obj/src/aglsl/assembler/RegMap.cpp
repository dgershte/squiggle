#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Reg
#include <aglsl/assembler/Reg.h>
#endif
#ifndef INCLUDED_aglsl_assembler_RegMap
#include <aglsl/assembler/RegMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace aglsl{
namespace assembler{

Void RegMap_obj::__construct()
{
HX_STACK_PUSH("RegMap::new","aglsl/assembler/RegMap.hx",29);
{
}
;
	return null();
}

RegMap_obj::~RegMap_obj() { }

Dynamic RegMap_obj::__CreateEmpty() { return  new RegMap_obj; }
hx::ObjectPtr< RegMap_obj > RegMap_obj::__new()
{  hx::ObjectPtr< RegMap_obj > result = new RegMap_obj();
	result->__construct();
	return result;}

Dynamic RegMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegMap_obj > result = new RegMap_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap RegMap_obj::_map;

::haxe::ds::StringMap RegMap_obj::get_map( ){
	HX_STACK_PUSH("RegMap::get_map","aglsl/assembler/RegMap.hx",8);
	HX_STACK_LINE(9)
	if (((::aglsl::assembler::RegMap_obj::_map == null()))){
		HX_STACK_LINE(10)
		::aglsl::assembler::RegMap_obj::_map = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(11)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("va"),::aglsl::assembler::Reg_obj::__new((int)0,HX_CSTRING("vertex attribute")));
		HX_STACK_LINE(12)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("fc"),::aglsl::assembler::Reg_obj::__new((int)1,HX_CSTRING("fragment constant")));
		HX_STACK_LINE(13)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("vc"),::aglsl::assembler::Reg_obj::__new((int)1,HX_CSTRING("vertex constant")));
		HX_STACK_LINE(14)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("ft"),::aglsl::assembler::Reg_obj::__new((int)2,HX_CSTRING("fragment temporary")));
		HX_STACK_LINE(15)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("vt"),::aglsl::assembler::Reg_obj::__new((int)2,HX_CSTRING("vertex temporary")));
		HX_STACK_LINE(16)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("vo"),::aglsl::assembler::Reg_obj::__new((int)3,HX_CSTRING("vertex output")));
		HX_STACK_LINE(17)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("op"),::aglsl::assembler::Reg_obj::__new((int)3,HX_CSTRING("vertex output")));
		HX_STACK_LINE(18)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("fd"),::aglsl::assembler::Reg_obj::__new((int)3,HX_CSTRING("fragment depth output")));
		HX_STACK_LINE(19)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("fo"),::aglsl::assembler::Reg_obj::__new((int)3,HX_CSTRING("fragment output")));
		HX_STACK_LINE(20)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("oc"),::aglsl::assembler::Reg_obj::__new((int)3,HX_CSTRING("fragment output")));
		HX_STACK_LINE(21)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("v"),::aglsl::assembler::Reg_obj::__new((int)4,HX_CSTRING("varying")));
		HX_STACK_LINE(22)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("vi"),::aglsl::assembler::Reg_obj::__new((int)4,HX_CSTRING("varying output")));
		HX_STACK_LINE(23)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("fi"),::aglsl::assembler::Reg_obj::__new((int)4,HX_CSTRING("varying input")));
		HX_STACK_LINE(24)
		::aglsl::assembler::RegMap_obj::_map->set(HX_CSTRING("fs"),::aglsl::assembler::Reg_obj::__new((int)5,HX_CSTRING("sampler")));
	}
	HX_STACK_LINE(26)
	return ::aglsl::assembler::RegMap_obj::_map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RegMap_obj,get_map,return )


RegMap_obj::RegMap_obj()
{
}

void RegMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegMap);
	HX_MARK_END_CLASS();
}

void RegMap_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic RegMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return get_map(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_map") ) { return get_map_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_map"),
	HX_CSTRING("get_map"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RegMap_obj::_map,"_map");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegMap_obj::_map,"_map");
};

Class RegMap_obj::__mClass;

void RegMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.RegMap"), hx::TCanCast< RegMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegMap_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
