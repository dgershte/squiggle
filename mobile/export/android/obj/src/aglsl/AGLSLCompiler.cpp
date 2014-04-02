#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_AGALTokenizer
#include <aglsl/AGALTokenizer.h>
#endif
#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_aglsl_AGLSLParser
#include <aglsl/AGLSLParser.h>
#endif
#ifndef INCLUDED_aglsl_Description
#include <aglsl/Description.h>
#endif
#ifndef INCLUDED_aglsl_assembler_AGALMiniAssembler
#include <aglsl/assembler/AGALMiniAssembler.h>
#endif
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace aglsl{

Void AGLSLCompiler_obj::__construct()
{
HX_STACK_PUSH("AGLSLCompiler::new","aglsl/AGLSLCompiler.hx",8);
{
}
;
	return null();
}

AGLSLCompiler_obj::~AGLSLCompiler_obj() { }

Dynamic AGLSLCompiler_obj::__CreateEmpty() { return  new AGLSLCompiler_obj; }
hx::ObjectPtr< AGLSLCompiler_obj > AGLSLCompiler_obj::__new()
{  hx::ObjectPtr< AGLSLCompiler_obj > result = new AGLSLCompiler_obj();
	result->__construct();
	return result;}

Dynamic AGLSLCompiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGLSLCompiler_obj > result = new AGLSLCompiler_obj();
	result->__construct();
	return result;}

::String AGLSLCompiler_obj::compile( ::String programType,::String source){
	HX_STACK_PUSH("AGLSLCompiler::compile","aglsl/AGLSLCompiler.hx",11);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(12)
	::aglsl::assembler::AGALMiniAssembler agalMiniAssembler = ::aglsl::assembler::AGALMiniAssembler_obj::__new();		HX_STACK_VAR(agalMiniAssembler,"agalMiniAssembler");
	HX_STACK_LINE(13)
	::aglsl::AGALTokenizer tokenizer = ::aglsl::AGALTokenizer_obj::__new();		HX_STACK_VAR(tokenizer,"tokenizer");
	HX_STACK_LINE(14)
	::flash::utils::ByteArray data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(15)
	::String concatSource;		HX_STACK_VAR(concatSource,"concatSource");
	HX_STACK_LINE(16)
	::String _switch_1 = (programType);
	if (  ( _switch_1==HX_CSTRING("vertex"))){
		HX_STACK_LINE(19)
		concatSource = ((HX_CSTRING("part vertex 1 \n") + source) + HX_CSTRING("endpart"));
		HX_STACK_LINE(20)
		agalMiniAssembler->assemble(concatSource,null(),null());
		HX_STACK_LINE(21)
		data = agalMiniAssembler->r->get(HX_CSTRING("vertex"))->__Field(HX_CSTRING("data"),true);
	}
	else if (  ( _switch_1==HX_CSTRING("fragment"))){
		HX_STACK_LINE(26)
		concatSource = ((HX_CSTRING("part fragment 1 \n") + source) + HX_CSTRING("endpart"));
		HX_STACK_LINE(27)
		agalMiniAssembler->assemble(concatSource,null(),null());
		HX_STACK_LINE(28)
		data = agalMiniAssembler->r->get(HX_CSTRING("fragment"))->__Field(HX_CSTRING("data"),true);
	}
	else  {
		HX_STACK_LINE(31)
		hx::Throw (HX_CSTRING("Unknown Context3DProgramType"));
	}
;
;
	HX_STACK_LINE(34)
	::aglsl::Description description = tokenizer->decribeAGALByteArray(data);		HX_STACK_VAR(description,"description");
	HX_STACK_LINE(35)
	::aglsl::AGLSLParser parser = ::aglsl::AGLSLParser_obj::__new();		HX_STACK_VAR(parser,"parser");
	HX_STACK_LINE(36)
	this->glsl = parser->parse(description);
	HX_STACK_LINE(37)
	return this->glsl;
}


HX_DEFINE_DYNAMIC_FUNC2(AGLSLCompiler_obj,compile,return )


AGLSLCompiler_obj::AGLSLCompiler_obj()
{
}

void AGLSLCompiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGLSLCompiler);
	HX_MARK_MEMBER_NAME(glsl,"glsl");
	HX_MARK_END_CLASS();
}

void AGLSLCompiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glsl,"glsl");
}

Dynamic AGLSLCompiler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"glsl") ) { return glsl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGLSLCompiler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"glsl") ) { glsl=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AGLSLCompiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glsl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("compile"),
	HX_CSTRING("glsl"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGLSLCompiler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGLSLCompiler_obj::__mClass,"__mClass");
};

Class AGLSLCompiler_obj::__mClass;

void AGLSLCompiler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.AGLSLCompiler"), hx::TCanCast< AGLSLCompiler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGLSLCompiler_obj::__boot()
{
}

} // end namespace aglsl
