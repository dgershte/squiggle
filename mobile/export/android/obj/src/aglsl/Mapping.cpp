#include <hxcpp.h>

#ifndef INCLUDED_aglsl_Mapping
#include <aglsl/Mapping.h>
#endif
#ifndef INCLUDED_aglsl_OpLUT
#include <aglsl/OpLUT.h>
#endif
namespace aglsl{

Void Mapping_obj::__construct()
{
	return null();
}

Mapping_obj::~Mapping_obj() { }

Dynamic Mapping_obj::__CreateEmpty() { return  new Mapping_obj; }
hx::ObjectPtr< Mapping_obj > Mapping_obj::__new()
{  hx::ObjectPtr< Mapping_obj > result = new Mapping_obj();
	result->__construct();
	return result;}

Dynamic Mapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mapping_obj > result = new Mapping_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > Mapping_obj::_agal2glsllut;

Array< ::Dynamic > Mapping_obj::get_agal2glsllut( ){
	HX_STACK_PUSH("Mapping::get_agal2glsllut","aglsl/Mapping.hx",9);
	HX_STACK_LINE(10)
	if (((::aglsl::Mapping_obj::_agal2glsllut == null()))){
		HX_STACK_LINE(10)
		::aglsl::Mapping_obj::_agal2glsllut = Array_obj< ::Dynamic >::__new().Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a);\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a + %b);\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a - %b);\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a * %b);\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a / %b);\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(1.0) / %a;\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(min(%a,%b));\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(max(%a,%b));\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(fract(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(sqrt(abs(%a)));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(inversesqrt(abs(%a)));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(pow(abs(%a),%b));\n"),(int)0,true,true,true,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(log2(abs(%a)));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(exp2(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(normalize(vec3( %a ) ));\n"),(int)0,true,true,false,null(),null(),true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(sin(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(cos(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(cross(vec3(%a),vec3(%b)));\n"),(int)0,true,true,true,null(),null(),true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dot(vec3(%a),vec3(%b)));\n"),(int)0,true,true,true,null(),null(),true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dot(vec4(%a),vec4(%b)));\n"),(int)0,true,true,true,null(),null(),true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(abs(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(%a * -1.0);\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(clamp(%a,0.0,1.0));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dot(vec3(%a),vec3(%b)));\n"),null(),true,true,true,(int)3,(int)3,true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dot(vec4(%a),vec4(%b)));\n"),null(),true,true,true,(int)4,(int)4,true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dot(vec4(%a),vec4(%b)));\n"),null(),true,true,true,(int)4,(int)3,true,null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dFdx(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(dFdx(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("if (float(%a)==float(%b)) {;\n"),(int)0,false,true,true,null(),null(),null(),true,null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("if (float(%a)!=float(%b)) {;\n"),(int)0,false,true,true,null(),null(),null(),true,null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("if (float(%a)>=float(%b)) {;\n"),(int)0,false,true,true,null(),null(),null(),true,null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("if (float(%a)<float(%b)) {;\n"),(int)0,false,true,true,null(),null(),null(),true,null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("} else {;\n"),(int)0,false,false,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("};\n"),(int)0,false,false,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(null(),null(),null(),null(),false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(null(),null(),null(),null(),false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(null(),null(),null(),null(),false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(null(),null(),null(),null(),false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(texture%texdimLod(%b,%texsize(%a)).%dm);\n"),null(),true,true,true,null(),null(),null(),null(),true,null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("if ( float(%a)<0.0 ) discard;\n"),null(),false,true,false,null(),null(),null(),true,null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(texture%texdim(%b,%texsize(%a)%lod).%dm);\n"),null(),true,true,true,null(),null(),true,null(),true,true)).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(greaterThanEqual(%a,%b).%dm);\n"),(int)0,true,true,true,null(),null(),true,null(),true,null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(lessThan(%a,%b).%dm);\n"),(int)0,true,true,true,null(),null(),true,null(),true,null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(sign(%a));\n"),(int)0,true,true,false,null(),null(),null(),null(),null(),null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(equal(%a,%b).%dm);\n"),(int)0,true,true,true,null(),null(),true,null(),true,null())).Add(::aglsl::OpLUT_obj::__new(HX_CSTRING("%dest = %cast(notEqual(%a,%b).%dm);\n"),(int)0,true,true,true,null(),null(),true,null(),true,null()));
	}
	HX_STACK_LINE(50)
	return ::aglsl::Mapping_obj::_agal2glsllut;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mapping_obj,get_agal2glsllut,return )


Mapping_obj::Mapping_obj()
{
}

void Mapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mapping);
	HX_MARK_END_CLASS();
}

void Mapping_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Mapping_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"agal2glsllut") ) { return get_agal2glsllut(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_agal2glsllut") ) { return _agal2glsllut; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_agal2glsllut") ) { return get_agal2glsllut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mapping_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_agal2glsllut") ) { _agal2glsllut=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mapping_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_agal2glsllut"),
	HX_CSTRING("get_agal2glsllut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mapping_obj::_agal2glsllut,"_agal2glsllut");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mapping_obj::_agal2glsllut,"_agal2glsllut");
};

Class Mapping_obj::__mClass;

void Mapping_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.Mapping"), hx::TCanCast< Mapping_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mapping_obj::__boot()
{
}

} // end namespace aglsl
