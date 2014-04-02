#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_aglsl_assembler_AGALMiniAssembler
#include <aglsl/assembler/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Part
#include <aglsl/assembler/Part.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_shaders_AGLSLShaderUtils
#include <flash/display3D/shaders/AGLSLShaderUtils.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace display3D{
namespace shaders{

Void AGLSLShaderUtils_obj::__construct()
{
	return null();
}

AGLSLShaderUtils_obj::~AGLSLShaderUtils_obj() { }

Dynamic AGLSLShaderUtils_obj::__CreateEmpty() { return  new AGLSLShaderUtils_obj; }
hx::ObjectPtr< AGLSLShaderUtils_obj > AGLSLShaderUtils_obj::__new()
{  hx::ObjectPtr< AGLSLShaderUtils_obj > result = new AGLSLShaderUtils_obj();
	result->__construct();
	return result;}

Dynamic AGLSLShaderUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGLSLShaderUtils_obj > result = new AGLSLShaderUtils_obj();
	result->__construct();
	return result;}

::flash::utils::ByteArray AGLSLShaderUtils_obj::compile( ::String programType,::String source){
	HX_STACK_PUSH("AGLSLShaderUtils::compile","flash/display3D/shaders/AGLSLShaderUtils.hx",17);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(18)
	::aglsl::assembler::AGALMiniAssembler agalMiniAssembler = ::aglsl::assembler::AGALMiniAssembler_obj::__new();		HX_STACK_VAR(agalMiniAssembler,"agalMiniAssembler");
	HX_STACK_LINE(19)
	::flash::utils::ByteArray data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(20)
	::String concatSource;		HX_STACK_VAR(concatSource,"concatSource");
	HX_STACK_LINE(21)
	::String _switch_1 = (programType);
	if (  ( _switch_1==HX_CSTRING("vertex"))){
		HX_STACK_LINE(24)
		concatSource = ((HX_CSTRING("part vertex 1 \n") + source) + HX_CSTRING("endpart"));
		HX_STACK_LINE(25)
		agalMiniAssembler->assemble(concatSource,null(),null());
		HX_STACK_LINE(26)
		data = agalMiniAssembler->r->get(HX_CSTRING("vertex"))->__Field(HX_CSTRING("data"),true);
	}
	else if (  ( _switch_1==HX_CSTRING("fragment"))){
		HX_STACK_LINE(31)
		concatSource = ((HX_CSTRING("part fragment 1 \n") + source) + HX_CSTRING("endpart"));
		HX_STACK_LINE(32)
		agalMiniAssembler->assemble(concatSource,null(),null());
		HX_STACK_LINE(33)
		data = agalMiniAssembler->r->get(HX_CSTRING("fragment"))->__Field(HX_CSTRING("data"),true);
	}
	else  {
		HX_STACK_LINE(36)
		hx::Throw (HX_CSTRING("Unknown Context3DProgramType"));
	}
;
;
	HX_STACK_LINE(40)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGLSLShaderUtils_obj,compile,return )

::openfl::gl::GLShader AGLSLShaderUtils_obj::createShader( ::flash::display3D::Context3DProgramType type,::String shaderSource){
	HX_STACK_PUSH("AGLSLShaderUtils::createShader","flash/display3D/shaders/AGLSLShaderUtils.hx",43);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(shaderSource,"shaderSource");
	HX_STACK_LINE(51)
	::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
	HX_STACK_LINE(53)
	int glType;		HX_STACK_VAR(glType,"glType");
	HX_STACK_LINE(54)
	::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
	HX_STACK_LINE(55)
	{
		::flash::display3D::Context3DProgramType _switch_2 = (type);
		switch((_switch_2)->GetIndex()){
			case 0: {
				HX_STACK_LINE(57)
				glType = (int)35633;
				HX_STACK_LINE(58)
				shaderType = HX_CSTRING("vertex");
			}
			;break;
			case 1: {
				HX_STACK_LINE(61)
				glType = (int)35632;
				HX_STACK_LINE(62)
				shaderType = HX_CSTRING("fragment");
			}
			;break;
		}
	}
	HX_STACK_LINE(66)
	::String shaderSourceString = aglsl1->compile(shaderType,shaderSource);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
	HX_STACK_LINE(67)
	::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(68)
	::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
	HX_STACK_LINE(69)
	::openfl::gl::GL_obj::compileShader(shader);
	HX_STACK_LINE(71)
	if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
		HX_STACK_LINE(73)
		::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
		HX_STACK_LINE(74)
		::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(75)
		if (((err != HX_CSTRING("")))){
			HX_STACK_LINE(75)
			hx::Throw (err);
		}
	}
	HX_STACK_LINE(80)
	return shader;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGLSLShaderUtils_obj,createShader,return )


AGLSLShaderUtils_obj::AGLSLShaderUtils_obj()
{
}

void AGLSLShaderUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGLSLShaderUtils);
	HX_MARK_END_CLASS();
}

void AGLSLShaderUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AGLSLShaderUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGLSLShaderUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AGLSLShaderUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("compile"),
	HX_CSTRING("createShader"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGLSLShaderUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGLSLShaderUtils_obj::__mClass,"__mClass");
};

Class AGLSLShaderUtils_obj::__mClass;

void AGLSLShaderUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"), hx::TCanCast< AGLSLShaderUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGLSLShaderUtils_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
} // end namespace shaders
