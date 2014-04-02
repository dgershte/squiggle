#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_aglsl_AGLSLParser
#include <aglsl/AGLSLParser.h>
#endif
#ifndef INCLUDED_aglsl_Context3D
#include <aglsl/Context3D.h>
#endif
#ifndef INCLUDED_aglsl_Description
#include <aglsl/Description.h>
#endif
#ifndef INCLUDED_aglsl_Destination
#include <aglsl/Destination.h>
#endif
#ifndef INCLUDED_aglsl_Header
#include <aglsl/Header.h>
#endif
#ifndef INCLUDED_aglsl_Mapping
#include <aglsl/Mapping.h>
#endif
#ifndef INCLUDED_aglsl_OpLUT
#include <aglsl/OpLUT.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace aglsl{

Void AGLSLParser_obj::__construct()
{
HX_STACK_PUSH("AGLSLParser::new","aglsl/AGLSLParser.hx",7);
{
}
;
	return null();
}

AGLSLParser_obj::~AGLSLParser_obj() { }

Dynamic AGLSLParser_obj::__CreateEmpty() { return  new AGLSLParser_obj; }
hx::ObjectPtr< AGLSLParser_obj > AGLSLParser_obj::__new()
{  hx::ObjectPtr< AGLSLParser_obj > result = new AGLSLParser_obj();
	result->__construct();
	return result;}

Dynamic AGLSLParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGLSLParser_obj > result = new AGLSLParser_obj();
	result->__construct();
	return result;}

::String AGLSLParser_obj::sourcetostring( ::aglsl::Destination s,int subline,int dwm,bool isscalar,Dynamic desc,::String tag){
	HX_STACK_PUSH("AGLSLParser::sourcetostring","aglsl/AGLSLParser.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(subline,"subline");
	HX_STACK_ARG(dwm,"dwm");
	HX_STACK_ARG(isscalar,"isscalar");
	HX_STACK_ARG(desc,"desc");
	HX_STACK_ARG(tag,"tag");
	HX_STACK_LINE(238)
	Array< ::String > swiz = Array_obj< ::String >::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y")).Add(HX_CSTRING("z")).Add(HX_CSTRING("w"));		HX_STACK_VAR(swiz,"swiz");
	HX_STACK_LINE(239)
	::String r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(240)
	if (((s->indirectflag == (int)1))){
		HX_STACK_LINE(241)
		r = ((((HX_CSTRING("vcarrr[int(") + this->regtostring(s->indexregtype,s->regnum,desc,tag)) + HX_CSTRING(".")) + swiz->__get(s->indexselect)) + HX_CSTRING(")"));
		HX_STACK_LINE(242)
		int realofs = (subline + s->indexoffset);		HX_STACK_VAR(realofs,"realofs");
		HX_STACK_LINE(243)
		if (((realofs < (int)0))){
			HX_STACK_LINE(243)
			hx::AddEq(r,::Std_obj::string(realofs));
		}
		HX_STACK_LINE(244)
		if (((realofs > (int)0))){
			HX_STACK_LINE(244)
			hx::AddEq(r,(HX_CSTRING("+") + ::Std_obj::string(realofs)));
		}
		HX_STACK_LINE(245)
		hx::AddEq(r,HX_CSTRING("]"));
	}
	else{
		HX_STACK_LINE(248)
		r = this->regtostring(s->regtype,(s->regnum + subline),desc,tag);
	}
	HX_STACK_LINE(253)
	if (((s->regtype == (int)5))){
		HX_STACK_LINE(253)
		return r;
	}
	HX_STACK_LINE(256)
	if ((isscalar)){
		HX_STACK_LINE(256)
		return ((r + HX_CSTRING(".")) + swiz->__get((int(s->swizzle) & int((int)3))));
	}
	HX_STACK_LINE(259)
	if (((bool((s->swizzle == (int)228)) && bool((dwm == (int)15))))){
		HX_STACK_LINE(259)
		return r;
	}
	HX_STACK_LINE(262)
	hx::AddEq(r,HX_CSTRING("."));
	HX_STACK_LINE(264)
	if (((((int(dwm) & int((int)1))) != (int)0))){
		HX_STACK_LINE(264)
		hx::AddEq(r,swiz->__get((int(s->swizzle) & int((int)3))));
	}
	HX_STACK_LINE(265)
	if (((((int(dwm) & int((int)2))) != (int)0))){
		HX_STACK_LINE(265)
		hx::AddEq(r,swiz->__get((int((int(s->swizzle) >> int((int)2))) & int((int)3))));
	}
	HX_STACK_LINE(266)
	if (((((int(dwm) & int((int)4))) != (int)0))){
		HX_STACK_LINE(266)
		hx::AddEq(r,swiz->__get((int((int(s->swizzle) >> int((int)4))) & int((int)3))));
	}
	HX_STACK_LINE(267)
	if (((((int(dwm) & int((int)8))) != (int)0))){
		HX_STACK_LINE(267)
		hx::AddEq(r,swiz->__get((int((int(s->swizzle) >> int((int)6))) & int((int)3))));
	}
	HX_STACK_LINE(268)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC6(AGLSLParser_obj,sourcetostring,return )

::String AGLSLParser_obj::regtostring( int regtype,int regnum,Dynamic desc,::String tag){
	HX_STACK_PUSH("AGLSLParser::regtostring","aglsl/AGLSLParser.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(regtype,"regtype");
	HX_STACK_ARG(regnum,"regnum");
	HX_STACK_ARG(desc,"desc");
	HX_STACK_ARG(tag,"tag");
	HX_STACK_LINE(196)
	switch( (int)(regtype)){
		case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)5: case (int)6: {
			HX_STACK_LINE(199)
			switch( (int)(regtype)){
				case (int)0: {
					HX_STACK_LINE(200)
					return (HX_CSTRING("va") + regnum);
				}
				;break;
			}
			HX_STACK_LINE(203)
			switch( (int)(regtype)){
				case (int)1: {
					HX_STACK_LINE(204)
					if (((bool(desc->__Field(HX_CSTRING("hasindirect"),true)) && bool((desc->__Field(HX_CSTRING("header"),true)->__Field(HX_CSTRING("type"),true) == HX_CSTRING("vertex")))))){
						HX_STACK_LINE(205)
						return ((HX_CSTRING("vcarrr[") + regnum) + HX_CSTRING("]"));
					}
					else{
						HX_STACK_LINE(209)
						return ((tag + HX_CSTRING("c")) + regnum);
					}
				}
				;break;
			}
			HX_STACK_LINE(214)
			switch( (int)(regtype)){
				case (int)2: {
					HX_STACK_LINE(215)
					return ((tag + HX_CSTRING("t")) + regnum);
				}
				;break;
			}
			HX_STACK_LINE(218)
			switch( (int)(regtype)){
				case (int)3: {
					HX_STACK_LINE(219)
					return (  (((desc->__Field(HX_CSTRING("header"),true)->__Field(HX_CSTRING("type"),true) == HX_CSTRING("vertex")))) ? ::String(HX_CSTRING("outpos")) : ::String(HX_CSTRING("gl_FragColor")) );
				}
				;break;
			}
			HX_STACK_LINE(222)
			switch( (int)(regtype)){
				case (int)4: {
					HX_STACK_LINE(223)
					return (HX_CSTRING("vi") + regnum);
				}
				;break;
			}
			HX_STACK_LINE(226)
			switch( (int)(regtype)){
				case (int)5: {
					HX_STACK_LINE(227)
					return (HX_CSTRING("fs") + regnum);
				}
				;break;
			}
			HX_STACK_LINE(230)
			return HX_CSTRING("tmp_FragDepth");
			HX_STACK_LINE(231)
			hx::Throw (HX_CSTRING("Unknown register type"));
		}
		;break;
		default: {
			HX_STACK_LINE(232)
			hx::Throw (HX_CSTRING("Unknown register type"));
		}
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AGLSLParser_obj,regtostring,return )

::String AGLSLParser_obj::parse( ::aglsl::Description desc){
	HX_STACK_PUSH("AGLSLParser::parse","aglsl/AGLSLParser.hx",9);
	HX_STACK_THIS(this);
	HX_STACK_ARG(desc,"desc");
	HX_STACK_LINE(10)
	::String header = HX_CSTRING("");		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(11)
	::String body = HX_CSTRING("");		HX_STACK_VAR(body,"body");
	HX_STACK_LINE(12)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(16)
	::String tag = desc->header->type.charAt((int)0);		HX_STACK_VAR(tag,"tag");
	HX_STACK_LINE(19)
	if (((desc->header->type == HX_CSTRING("vertex")))){
		HX_STACK_LINE(19)
		hx::AddEq(header,HX_CSTRING("uniform float yflip;\n"));
	}
	HX_STACK_LINE(23)
	if ((!(desc->hasindirect))){
		HX_STACK_LINE(25)
		i = (int)0;
		HX_STACK_LINE(26)
		while(((i < desc->regread->__GetItem((int)1)->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(27)
			if (((desc->regread->__GetItem((int)1)->__GetItem(i) > (int)0))){
				HX_STACK_LINE(27)
				hx::AddEq(header,((((HX_CSTRING("uniform vec4 ") + tag) + HX_CSTRING("c")) + i) + HX_CSTRING(";\n")));
			}
			HX_STACK_LINE(32)
			(i)++;
		}
	}
	else{
		HX_STACK_LINE(34)
		hx::AddEq(header,((((HX_CSTRING("uniform vec4 ") + tag) + HX_CSTRING("carrr[")) + ::aglsl::Context3D_obj::maxvertexconstants) + HX_CSTRING("];\n")));
	}
	HX_STACK_LINE(38)
	i = (int)0;
	HX_STACK_LINE(39)
	while(((bool((i < desc->regread->__GetItem((int)2)->__Field(HX_CSTRING("length"),true))) || bool((i < desc->regwrite->__GetItem((int)2)->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(40)
		if (((bool((desc->regread->__GetItem((int)2)->__GetItem(i) > (int)0)) || bool((desc->regwrite->__GetItem((int)2)->__GetItem(i) > (int)0))))){
			HX_STACK_LINE(41)
			hx::AddEq(header,((((HX_CSTRING("vec4 ") + tag) + HX_CSTRING("t")) + i) + HX_CSTRING(";\n")));
		}
		HX_STACK_LINE(44)
		(i)++;
	}
	HX_STACK_LINE(48)
	i = (int)0;
	HX_STACK_LINE(49)
	while(((i < desc->regread->__GetItem((int)0)->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(50)
		if (((desc->regread->__GetItem((int)0)->__GetItem(i) > (int)0))){
			HX_STACK_LINE(50)
			hx::AddEq(header,((HX_CSTRING("attribute vec4 va") + i) + HX_CSTRING(";\n")));
		}
		HX_STACK_LINE(53)
		(i)++;
	}
	HX_STACK_LINE(57)
	i = (int)0;
	HX_STACK_LINE(58)
	while(((bool((i < desc->regread->__GetItem((int)4)->__Field(HX_CSTRING("length"),true))) || bool((i < desc->regwrite->__GetItem((int)4)->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(59)
		if (((bool((desc->regread->__GetItem((int)4)->__GetItem(i) > (int)0)) || bool((desc->regwrite->__GetItem((int)4)->__GetItem(i) > (int)0))))){
			HX_STACK_LINE(59)
			hx::AddEq(header,((HX_CSTRING("varying vec4 vi") + i) + HX_CSTRING(";\n")));
		}
		HX_STACK_LINE(62)
		(i)++;
	}
	HX_STACK_LINE(66)
	Array< ::String > samptype = Array_obj< ::String >::__new().Add(HX_CSTRING("2D")).Add(HX_CSTRING("Cube")).Add(HX_CSTRING("3D")).Add(HX_CSTRING(""));		HX_STACK_VAR(samptype,"samptype");
	HX_STACK_LINE(67)
	i = (int)0;
	HX_STACK_LINE(68)
	while(((i < desc->samplers->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(70)
		if (((desc->samplers->__GetItem(i) != null()))){
			HX_STACK_LINE(70)
			hx::AddEq(header,((((HX_CSTRING("uniform sampler") + samptype->__get((int(desc->samplers->__GetItem(i)->__Field(HX_CSTRING("dim"),true)) & int((int)3)))) + HX_CSTRING(" fs")) + i) + HX_CSTRING(";\n")));
		}
		HX_STACK_LINE(73)
		(i)++;
	}
	HX_STACK_LINE(77)
	if (((desc->header->type == HX_CSTRING("vertex")))){
		HX_STACK_LINE(77)
		hx::AddEq(header,HX_CSTRING("vec4 outpos;\n"));
	}
	HX_STACK_LINE(80)
	if ((desc->writedepth)){
		HX_STACK_LINE(80)
		hx::AddEq(header,HX_CSTRING("vec4 tmp_FragDepth;\n"));
	}
	HX_STACK_LINE(87)
	hx::AddEq(body,HX_CSTRING("void main() {\n"));
	HX_STACK_LINE(88)
	i = (int)0;
	HX_STACK_LINE(89)
	while(((i < desc->tokens->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(90)
		::aglsl::OpLUT lutentry = ::aglsl::Mapping_obj::get_agal2glsllut()->__get(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("opcode"),true)).StaticCast< ::aglsl::OpLUT >();		HX_STACK_VAR(lutentry,"lutentry");
		HX_STACK_LINE(91)
		if (((lutentry == null()))){
			HX_STACK_LINE(91)
			hx::Throw (HX_CSTRING("Opcode not valid or not implemented yet: "));
		}
		HX_STACK_LINE(95)
		int sublines = ::Std_obj::_int(::Math_obj::max(lutentry->matrixheight,(int)1));		HX_STACK_VAR(sublines,"sublines");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while(((_g < sublines))){
				HX_STACK_LINE(96)
				int sl = (_g)++;		HX_STACK_VAR(sl,"sl");
				HX_STACK_LINE(97)
				::String line = (HX_CSTRING("  ") + lutentry->s);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(98)
				::String destregstring;		HX_STACK_VAR(destregstring,"destregstring");
				HX_STACK_LINE(99)
				::String destcaststring;		HX_STACK_VAR(destcaststring,"destcaststring");
				HX_STACK_LINE(100)
				::String destmaskstring;		HX_STACK_VAR(destmaskstring,"destmaskstring");
				HX_STACK_LINE(102)
				if (((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true) != null()))){
					HX_STACK_LINE(103)
					if (((lutentry->matrixheight > (int)0))){
						HX_STACK_LINE(104)
						if (((((int((int(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)) >> int(sl))) & int((int)1))) != (int)1))){
							HX_STACK_LINE(104)
							continue;
						}
						HX_STACK_LINE(107)
						destregstring = this->regtostring(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("regtype"),true),desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("regnum"),true),desc,tag);
						HX_STACK_LINE(108)
						destcaststring = HX_CSTRING("float");
						HX_STACK_LINE(109)
						destmaskstring = Array_obj< ::String >::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y")).Add(HX_CSTRING("z")).Add(HX_CSTRING("w"))->__get(sl);
						HX_STACK_LINE(110)
						hx::AddEq(destregstring,(HX_CSTRING(".") + destmaskstring));
					}
					else{
						HX_STACK_LINE(112)
						destregstring = this->regtostring(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("regtype"),true),desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("regnum"),true),desc,tag);
						HX_STACK_LINE(113)
						if (((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true) != (int)15))){
							HX_STACK_LINE(114)
							int ndest = (int)0;		HX_STACK_VAR(ndest,"ndest");
							HX_STACK_LINE(115)
							destmaskstring = HX_CSTRING("");
							HX_STACK_LINE(117)
							if (((((int(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)) & int((int)1))) != (int)0))){
								HX_STACK_LINE(118)
								(ndest)++;
								HX_STACK_LINE(119)
								hx::AddEq(destmaskstring,HX_CSTRING("x"));
							}
							HX_STACK_LINE(121)
							if (((((int(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)) & int((int)2))) != (int)0))){
								HX_STACK_LINE(122)
								(ndest)++;
								HX_STACK_LINE(123)
								hx::AddEq(destmaskstring,HX_CSTRING("y"));
							}
							HX_STACK_LINE(125)
							if (((((int(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)) & int((int)4))) != (int)0))){
								HX_STACK_LINE(126)
								(ndest)++;
								HX_STACK_LINE(127)
								hx::AddEq(destmaskstring,HX_CSTRING("z"));
							}
							HX_STACK_LINE(129)
							if (((((int(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)) & int((int)8))) != (int)0))){
								HX_STACK_LINE(130)
								(ndest)++;
								HX_STACK_LINE(131)
								hx::AddEq(destmaskstring,HX_CSTRING("w"));
							}
							HX_STACK_LINE(133)
							hx::AddEq(destregstring,(HX_CSTRING(".") + destmaskstring));
							HX_STACK_LINE(134)
							switch( (int)(ndest)){
								case (int)1: {
									HX_STACK_LINE(135)
									destcaststring = HX_CSTRING("float");
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(138)
									destcaststring = HX_CSTRING("vec2");
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(141)
									destcaststring = HX_CSTRING("vec3");
								}
								;break;
								default: {
									HX_STACK_LINE(144)
									hx::Throw ((HX_CSTRING("Unexpected destination mask") + desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true)));
								}
							}
						}
						else{
							HX_STACK_LINE(148)
							destcaststring = HX_CSTRING("vec4");
							HX_STACK_LINE(149)
							destmaskstring = HX_CSTRING("xyzw");
						}
					}
					HX_STACK_LINE(152)
					line = ::StringTools_obj::replace(line,HX_CSTRING("%dest"),destregstring);
					HX_STACK_LINE(153)
					line = ::StringTools_obj::replace(line,HX_CSTRING("%cast"),destcaststring);
					HX_STACK_LINE(154)
					line = ::StringTools_obj::replace(line,HX_CSTRING("%dm"),destmaskstring);
				}
				HX_STACK_LINE(156)
				int dwm = (int)15;		HX_STACK_VAR(dwm,"dwm");
				HX_STACK_LINE(157)
				if (((bool((bool(!(lutentry->ndwm)) && bool(lutentry->dest))) && bool((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true) != null()))))){
					HX_STACK_LINE(157)
					dwm = desc->tokens->__GetItem(i)->__Field(HX_CSTRING("dest"),true)->__Field(HX_CSTRING("mask"),true);
				}
				HX_STACK_LINE(160)
				if (((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("a"),true) != null()))){
					HX_STACK_LINE(160)
					line = ::StringTools_obj::replace(line,HX_CSTRING("%a"),this->sourcetostring(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("a"),true),(int)0,dwm,lutentry->scalar,desc,tag));
				}
				HX_STACK_LINE(163)
				if (((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("b"),true) != null()))){
					HX_STACK_LINE(164)
					line = ::StringTools_obj::replace(line,HX_CSTRING("%b"),this->sourcetostring(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("b"),true),sl,dwm,lutentry->scalar,desc,tag));
					HX_STACK_LINE(165)
					if (((desc->tokens->__GetItem(i)->__Field(HX_CSTRING("b"),true)->__Field(HX_CSTRING("regtype"),true) == (int)5))){
						HX_STACK_LINE(167)
						::String texdim = Array_obj< ::String >::__new().Add(HX_CSTRING("2D")).Add(HX_CSTRING("Cube")).Add(HX_CSTRING("3D"))->__get(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("b"),true)->__Field(HX_CSTRING("dim"),true));		HX_STACK_VAR(texdim,"texdim");
						HX_STACK_LINE(168)
						::String texsize = Array_obj< ::String >::__new().Add(HX_CSTRING("vec2")).Add(HX_CSTRING("vec3")).Add(HX_CSTRING("vec3"))->__get(desc->tokens->__GetItem(i)->__Field(HX_CSTRING("b"),true)->__Field(HX_CSTRING("dim"),true));		HX_STACK_VAR(texsize,"texsize");
						HX_STACK_LINE(169)
						line = ::StringTools_obj::replace(line,HX_CSTRING("%texdim"),texdim);
						HX_STACK_LINE(170)
						line = ::StringTools_obj::replace(line,HX_CSTRING("%texsize"),texsize);
						HX_STACK_LINE(171)
						::String texlod = HX_CSTRING("");		HX_STACK_VAR(texlod,"texlod");
						HX_STACK_LINE(172)
						line = ::StringTools_obj::replace(line,HX_CSTRING("%lod"),texlod);
					}
				}
				HX_STACK_LINE(175)
				hx::AddEq(body,line);
			}
		}
		HX_STACK_LINE(177)
		(i)++;
	}
	HX_STACK_LINE(181)
	if (((desc->header->type == HX_CSTRING("vertex")))){
		HX_STACK_LINE(181)
		hx::AddEq(body,HX_CSTRING("  gl_Position = vec4(outpos.x, yflip*outpos.y, outpos.z*2.0 - outpos.w, outpos.w);\n"));
	}
	HX_STACK_LINE(186)
	if ((desc->writedepth)){
		HX_STACK_LINE(186)
		hx::AddEq(body,HX_CSTRING("  gl_FragDepth = clamp(tmp_FragDepth,0.0,1.0);\n"));
	}
	HX_STACK_LINE(191)
	hx::AddEq(body,HX_CSTRING("}\n"));
	HX_STACK_LINE(193)
	return (header + body);
}


HX_DEFINE_DYNAMIC_FUNC1(AGLSLParser_obj,parse,return )


AGLSLParser_obj::AGLSLParser_obj()
{
}

void AGLSLParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGLSLParser);
	HX_MARK_END_CLASS();
}

void AGLSLParser_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AGLSLParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"regtostring") ) { return regtostring_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sourcetostring") ) { return sourcetostring_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGLSLParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AGLSLParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sourcetostring"),
	HX_CSTRING("regtostring"),
	HX_CSTRING("parse"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGLSLParser_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGLSLParser_obj::__mClass,"__mClass");
};

Class AGLSLParser_obj::__mClass;

void AGLSLParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.AGLSLParser"), hx::TCanCast< AGLSLParser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGLSLParser_obj::__boot()
{
}

} // end namespace aglsl
