#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Sampler
#include <aglsl/assembler/Sampler.h>
#endif
#ifndef INCLUDED_aglsl_assembler_SamplerMap
#include <aglsl/assembler/SamplerMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace aglsl{
namespace assembler{

Void SamplerMap_obj::__construct()
{
HX_STACK_PUSH("SamplerMap::new","aglsl/assembler/SamplerMap.hx",42);
{
}
;
	return null();
}

SamplerMap_obj::~SamplerMap_obj() { }

Dynamic SamplerMap_obj::__CreateEmpty() { return  new SamplerMap_obj; }
hx::ObjectPtr< SamplerMap_obj > SamplerMap_obj::__new()
{  hx::ObjectPtr< SamplerMap_obj > result = new SamplerMap_obj();
	result->__construct();
	return result;}

Dynamic SamplerMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerMap_obj > result = new SamplerMap_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap SamplerMap_obj::_map;

::haxe::ds::StringMap SamplerMap_obj::get_map( ){
	HX_STACK_PUSH("SamplerMap::get_map","aglsl/assembler/SamplerMap.hx",9);
	HX_STACK_LINE(10)
	if (((::aglsl::assembler::SamplerMap_obj::_map == null()))){
		HX_STACK_LINE(11)
		::aglsl::assembler::SamplerMap_obj::_map = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(12)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("rgba"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)0));
		HX_STACK_LINE(13)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("rg"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)5));
		HX_STACK_LINE(14)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("r"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)4));
		HX_STACK_LINE(15)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("compressed"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)1));
		HX_STACK_LINE(16)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("compressed_alpha"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)2));
		HX_STACK_LINE(17)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("dxt1"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)1));
		HX_STACK_LINE(18)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("dxt5"),::aglsl::assembler::Sampler_obj::__new((int)8,(int)15,(int)2));
		HX_STACK_LINE(20)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("2d"),::aglsl::assembler::Sampler_obj::__new((int)12,(int)15,(int)0));
		HX_STACK_LINE(21)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("cube"),::aglsl::assembler::Sampler_obj::__new((int)12,(int)15,(int)1));
		HX_STACK_LINE(22)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("3d"),::aglsl::assembler::Sampler_obj::__new((int)12,(int)15,(int)2));
		HX_STACK_LINE(24)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("centroid"),::aglsl::assembler::Sampler_obj::__new((int)16,(int)1,(int)1));
		HX_STACK_LINE(25)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("ignoresampler"),::aglsl::assembler::Sampler_obj::__new((int)16,(int)4,(int)4));
		HX_STACK_LINE(27)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("clamp"),::aglsl::assembler::Sampler_obj::__new((int)20,(int)15,(int)0));
		HX_STACK_LINE(28)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("repeat"),::aglsl::assembler::Sampler_obj::__new((int)20,(int)15,(int)1));
		HX_STACK_LINE(29)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("wrap"),::aglsl::assembler::Sampler_obj::__new((int)20,(int)15,(int)1));
		HX_STACK_LINE(31)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("nomip"),::aglsl::assembler::Sampler_obj::__new((int)24,(int)15,(int)0));
		HX_STACK_LINE(32)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("mipnone"),::aglsl::assembler::Sampler_obj::__new((int)24,(int)15,(int)0));
		HX_STACK_LINE(33)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("mipnearest"),::aglsl::assembler::Sampler_obj::__new((int)24,(int)15,(int)1));
		HX_STACK_LINE(34)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("miplinear"),::aglsl::assembler::Sampler_obj::__new((int)24,(int)15,(int)2));
		HX_STACK_LINE(36)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("nearest"),::aglsl::assembler::Sampler_obj::__new((int)28,(int)15,(int)0));
		HX_STACK_LINE(37)
		::aglsl::assembler::SamplerMap_obj::_map->set(HX_CSTRING("linear"),::aglsl::assembler::Sampler_obj::__new((int)28,(int)15,(int)1));
	}
	HX_STACK_LINE(39)
	return ::aglsl::assembler::SamplerMap_obj::_map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SamplerMap_obj,get_map,return )


SamplerMap_obj::SamplerMap_obj()
{
}

void SamplerMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerMap);
	HX_MARK_END_CLASS();
}

void SamplerMap_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SamplerMap_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SamplerMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerMap_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SamplerMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SamplerMap_obj::_map,"_map");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SamplerMap_obj::_map,"_map");
};

Class SamplerMap_obj::__mClass;

void SamplerMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.SamplerMap"), hx::TCanCast< SamplerMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SamplerMap_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
