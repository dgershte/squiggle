#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Opcode
#include <aglsl/assembler/Opcode.h>
#endif
#ifndef INCLUDED_aglsl_assembler_OpcodeMap
#include <aglsl/assembler/OpcodeMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace aglsl{
namespace assembler{

Void OpcodeMap_obj::__construct()
{
HX_STACK_PUSH("OpcodeMap::new","aglsl/assembler/OpcodeMap.hx",48);
{
}
;
	return null();
}

OpcodeMap_obj::~OpcodeMap_obj() { }

Dynamic OpcodeMap_obj::__CreateEmpty() { return  new OpcodeMap_obj; }
hx::ObjectPtr< OpcodeMap_obj > OpcodeMap_obj::__new()
{  hx::ObjectPtr< OpcodeMap_obj > result = new OpcodeMap_obj();
	result->__construct();
	return result;}

Dynamic OpcodeMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpcodeMap_obj > result = new OpcodeMap_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap OpcodeMap_obj::_map;

::haxe::ds::StringMap OpcodeMap_obj::get_map( ){
	HX_STACK_PUSH("OpcodeMap::get_map","aglsl/assembler/OpcodeMap.hx",7);
	HX_STACK_LINE(8)
	if (((::aglsl::assembler::OpcodeMap_obj::_map == null()))){
		HX_STACK_LINE(9)
		::aglsl::assembler::OpcodeMap_obj::_map = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(10)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("mov"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)0,true,null(),null(),null()));
		HX_STACK_LINE(11)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("add"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)1,true,null(),null(),null()));
		HX_STACK_LINE(12)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sub"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)2,true,null(),null(),null()));
		HX_STACK_LINE(13)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("mul"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)3,true,null(),null(),null()));
		HX_STACK_LINE(14)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("div"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)4,true,null(),null(),null()));
		HX_STACK_LINE(15)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("rcp"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)5,true,null(),null(),null()));
		HX_STACK_LINE(16)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("min"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)6,true,null(),null(),null()));
		HX_STACK_LINE(17)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("max"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)7,true,null(),null(),null()));
		HX_STACK_LINE(18)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("frc"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)8,true,null(),null(),null()));
		HX_STACK_LINE(19)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sqt"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)9,true,null(),null(),null()));
		HX_STACK_LINE(20)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("rsq"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)10,true,null(),null(),null()));
		HX_STACK_LINE(21)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("pow"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)11,true,null(),null(),null()));
		HX_STACK_LINE(22)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("log"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)12,true,null(),null(),null()));
		HX_STACK_LINE(23)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("exp"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)13,true,null(),null(),null()));
		HX_STACK_LINE(24)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("nrm"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)14,true,null(),null(),null()));
		HX_STACK_LINE(25)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sin"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)15,true,null(),null(),null()));
		HX_STACK_LINE(26)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("cos"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)16,true,null(),null(),null()));
		HX_STACK_LINE(27)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("crs"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)17,true,true,null(),null()));
		HX_STACK_LINE(28)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("dp3"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)18,true,true,null(),null()));
		HX_STACK_LINE(29)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("dp4"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)19,true,true,null(),null()));
		HX_STACK_LINE(30)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("abs"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)20,true,null(),null(),null()));
		HX_STACK_LINE(31)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("neg"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)21,true,null(),null(),null()));
		HX_STACK_LINE(32)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sat"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("none"),(int)0,(int)22,true,null(),null(),null()));
		HX_STACK_LINE(33)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("ted"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("sampler"),(int)1,(int)38,true,null(),true,null()));
		HX_STACK_LINE(34)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("kil"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("none"),HX_CSTRING("scalar"),(int)1,HX_CSTRING("none"),(int)0,(int)39,true,null(),true,null()));
		HX_STACK_LINE(35)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("tex"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("sampler"),(int)1,(int)40,true,null(),true,null()));
		HX_STACK_LINE(36)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("m33"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("matrix"),(int)3,HX_CSTRING("vector"),(int)3,(int)23,true,null(),null(),true));
		HX_STACK_LINE(37)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("m44"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("matrix"),(int)4,HX_CSTRING("vector"),(int)4,(int)24,true,null(),null(),true));
		HX_STACK_LINE(38)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("m43"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("matrix"),(int)3,HX_CSTRING("vector"),(int)4,(int)25,true,null(),null(),true));
		HX_STACK_LINE(39)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sge"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)41,true,null(),null(),null()));
		HX_STACK_LINE(40)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("slt"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)42,true,null(),null(),null()));
		HX_STACK_LINE(41)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sgn"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)43,true,null(),null(),null()));
		HX_STACK_LINE(42)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("seq"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)44,true,null(),null(),null()));
		HX_STACK_LINE(43)
		::aglsl::assembler::OpcodeMap_obj::_map->set(HX_CSTRING("sne"),::aglsl::assembler::Opcode_obj::__new(HX_CSTRING("vector"),HX_CSTRING("vector"),(int)4,HX_CSTRING("vector"),(int)4,(int)45,true,null(),null(),null()));
	}
	HX_STACK_LINE(45)
	return ::aglsl::assembler::OpcodeMap_obj::_map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpcodeMap_obj,get_map,return )


OpcodeMap_obj::OpcodeMap_obj()
{
}

void OpcodeMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpcodeMap);
	HX_MARK_END_CLASS();
}

void OpcodeMap_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic OpcodeMap_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic OpcodeMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpcodeMap_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(OpcodeMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpcodeMap_obj::_map,"_map");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpcodeMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpcodeMap_obj::_map,"_map");
};

Class OpcodeMap_obj::__mClass;

void OpcodeMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.OpcodeMap"), hx::TCanCast< OpcodeMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OpcodeMap_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
