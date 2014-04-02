#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_aglsl_assembler_AGALMiniAssembler
#include <aglsl/assembler/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_aglsl_assembler_FS
#include <aglsl/assembler/FS.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Opcode
#include <aglsl/assembler/Opcode.h>
#endif
#ifndef INCLUDED_aglsl_assembler_OpcodeMap
#include <aglsl/assembler/OpcodeMap.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Part
#include <aglsl/assembler/Part.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Reg
#include <aglsl/assembler/Reg.h>
#endif
#ifndef INCLUDED_aglsl_assembler_RegMap
#include <aglsl/assembler/RegMap.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Sampler
#include <aglsl/assembler/Sampler.h>
#endif
#ifndef INCLUDED_aglsl_assembler_SamplerMap
#include <aglsl/assembler/SamplerMap.h>
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
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace aglsl{
namespace assembler{

Void AGALMiniAssembler_obj::__construct()
{
HX_STACK_PUSH("AGALMiniAssembler::new","aglsl/assembler/AGALMiniAssembler.hx",18);
{
	HX_STACK_LINE(19)
	this->r = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(20)
	this->cur = ::aglsl::assembler::Part_obj::__new(null(),null());
}
;
	return null();
}

AGALMiniAssembler_obj::~AGALMiniAssembler_obj() { }

Dynamic AGALMiniAssembler_obj::__CreateEmpty() { return  new AGALMiniAssembler_obj; }
hx::ObjectPtr< AGALMiniAssembler_obj > AGALMiniAssembler_obj::__new()
{  hx::ObjectPtr< AGALMiniAssembler_obj > result = new AGALMiniAssembler_obj();
	result->__construct();
	return result;}

Dynamic AGALMiniAssembler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALMiniAssembler_obj > result = new AGALMiniAssembler_obj();
	result->__construct();
	return result;}

Void AGALMiniAssembler_obj::addHeader( ::String partname,int version){
{
		HX_STACK_PUSH("AGALMiniAssembler::addHeader","aglsl/assembler/AGALMiniAssembler.hx",379);
		HX_STACK_THIS(this);
		HX_STACK_ARG(partname,"partname");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(380)
		if (((version == (int)0))){
			HX_STACK_LINE(381)
			version = (int)1;
		}
		HX_STACK_LINE(384)
		if ((!(this->r->exists(partname)))){
			HX_STACK_LINE(386)
			this->r->set(partname,::aglsl::assembler::Part_obj::__new(partname,version));
			HX_STACK_LINE(387)
			this->emitHeader(this->r->get(partname));
		}
		else{
			HX_STACK_LINE(389)
			if (((this->r->get(partname)->__Field(HX_CSTRING("version"),true) != ::Std_obj::_int(version)))){
				HX_STACK_LINE(390)
				hx::Throw ((HX_CSTRING("Multiple versions for part ") + partname));
			}
		}
		HX_STACK_LINE(393)
		this->cur = this->r->get(partname);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,addHeader,(void))

bool AGALMiniAssembler_obj::emitSource( ::aglsl::assembler::Part pr,::String token,::aglsl::assembler::FS opsrc){
	HX_STACK_PUSH("AGALMiniAssembler::emitSource","aglsl/assembler/AGALMiniAssembler.hx",338);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pr,"pr");
	HX_STACK_ARG(token,"token");
	HX_STACK_ARG(opsrc,"opsrc");
	HX_STACK_LINE(340)
	Array< ::String > indexed = this->getGroupMatches(::EReg_obj::__new(HX_CSTRING("vc\\[(v[tcai])(\\d+)\\.([xyzw])([\\+\\-]\\d+)?\\](\\.[xyzw]{1,4})?"),HX_CSTRING("i")),token,(int)5);		HX_STACK_VAR(indexed,"indexed");
	HX_STACK_LINE(341)
	Array< ::String > reg;		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(342)
	if (((indexed->length > (int)0))){
		HX_STACK_LINE(344)
		if (((::aglsl::assembler::RegMap_obj::get_map()->get(indexed->__get((int)1)) == null()))){
			HX_STACK_LINE(345)
			return false;
		}
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","aglsl/assembler/AGALMiniAssembler.hx",348);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (int)0,false);
					__result->Add(HX_CSTRING("y") , (int)1,false);
					__result->Add(HX_CSTRING("z") , (int)2,false);
					__result->Add(HX_CSTRING("w") , (int)3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(348)
		Dynamic selindex = _Function_2_1::Block();		HX_STACK_VAR(selindex,"selindex");
		struct _Function_2_2{
			inline static Dynamic Block( ::aglsl::assembler::AGALMiniAssembler_obj *__this,Array< ::String > &indexed,Dynamic &selindex){
				HX_STACK_PUSH("*::closure","aglsl/assembler/AGALMiniAssembler.hx",349);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("num") , (int(::Std_obj::parseInt(indexed->__get((int)2))) | int((int)0)),false);
					__result->Add(HX_CSTRING("code") , ::aglsl::assembler::RegMap_obj::get_map()->get(indexed->__get((int)1))->__Field(HX_CSTRING("code"),true),false);
					__result->Add(HX_CSTRING("swizzle") , __this->stringToSwizzle(indexed->__get((int)5)),false);
					__result->Add(HX_CSTRING("select") , (  (((selindex == null()))) ? Dynamic(null()) : Dynamic(selindex->__Field(indexed->__get((int)3),true)) ),false);
					__result->Add(HX_CSTRING("offset") , (int(::Std_obj::parseInt(indexed->__get((int)4))) | int((int)0)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(349)
		Dynamic em = _Function_2_2::Block(this,indexed,selindex);		HX_STACK_VAR(em,"em");
		HX_STACK_LINE(350)
		pr->data->writeShort(em->__Field(HX_CSTRING("num"),true));
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(351)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(351)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("swizzle"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(352)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(352)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(353)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(353)
			_this->b[(_this->position)++] = (int)1;
		}
		HX_STACK_LINE(354)
		{
			HX_STACK_LINE(354)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("code"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(354)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(354)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("select"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(355)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(355)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(356)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(356)
			_this->b[(_this->position)++] = (int)128;
		}
	}
	else{
		HX_STACK_LINE(360)
		reg = this->getGroupMatches(::EReg_obj::__new(HX_CSTRING("([fov]?[tpocidavs])(\\d*)(\\.[xyzw]{1,4})?"),HX_CSTRING("i")),token,(int)3);
		HX_STACK_LINE(361)
		if (((::aglsl::assembler::RegMap_obj::get_map()->get(reg->__get((int)1)) == null()))){
			HX_STACK_LINE(362)
			return false;
		}
		HX_STACK_LINE(365)
		if (((reg->length < (int)4))){
			HX_STACK_LINE(365)
			reg->push(HX_CSTRING(""));
		}
		struct _Function_2_1{
			inline static Dynamic Block( Array< ::String > &reg,::aglsl::assembler::AGALMiniAssembler_obj *__this){
				HX_STACK_PUSH("*::closure","aglsl/assembler/AGALMiniAssembler.hx",366);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("num") , (int(::Std_obj::parseInt(reg->__get((int)2))) | int((int)0)),false);
					__result->Add(HX_CSTRING("code") , ::aglsl::assembler::RegMap_obj::get_map()->get(reg->__get((int)1))->__Field(HX_CSTRING("code"),true),false);
					__result->Add(HX_CSTRING("swizzle") , __this->stringToSwizzle(reg->__get((int)3)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(366)
		Dynamic em = _Function_2_1::Block(reg,this);		HX_STACK_VAR(em,"em");
		HX_STACK_LINE(367)
		pr->data->writeShort(em->__Field(HX_CSTRING("num"),true));
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(368)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(368)
			_this->b[(_this->position)++] = (int)0;
		}
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("swizzle"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(369)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(369)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			int value = em->__Field(HX_CSTRING("code"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(370)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(370)
			_this->b[(_this->position)++] = value;
		}
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(371)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(371)
			_this->b[(_this->position)++] = (int)0;
		}
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(372)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(372)
			_this->b[(_this->position)++] = (int)0;
		}
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(373)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(373)
			_this->b[(_this->position)++] = (int)0;
		}
	}
	HX_STACK_LINE(375)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(AGALMiniAssembler_obj,emitSource,return )

bool AGALMiniAssembler_obj::emitSampler( ::aglsl::assembler::Part pr,::String token,::aglsl::assembler::FS opsrc,Array< ::String > opts){
	HX_STACK_PUSH("AGALMiniAssembler::emitSampler","aglsl/assembler/AGALMiniAssembler.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pr,"pr");
	HX_STACK_ARG(token,"token");
	HX_STACK_ARG(opsrc,"opsrc");
	HX_STACK_ARG(opts,"opts");
	HX_STACK_LINE(290)
	Array< ::String > reg = this->getGroupMatches(::EReg_obj::__new(HX_CSTRING("fs(\\d*)"),HX_CSTRING("i")),token,(int)1);		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(292)
	if (((reg->length < (int)1))){
		HX_STACK_LINE(293)
		return false;
	}
	HX_STACK_LINE(296)
	pr->data->writeShort(::Std_obj::parseInt(reg->__get((int)1)));
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(297)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(297)
		_this->b[(_this->position)++] = (int)0;
	}
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(298)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(298)
		_this->b[(_this->position)++] = (int)0;
	}
	HX_STACK_LINE(305)
	int samplerbits = (int)5;		HX_STACK_VAR(samplerbits,"samplerbits");
	HX_STACK_LINE(306)
	int sampleroptset = (int)0;		HX_STACK_VAR(sampleroptset,"sampleroptset");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = opts->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while(((_g1 < _g))){
			HX_STACK_LINE(307)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(309)
			::aglsl::assembler::Sampler o = ::aglsl::assembler::SamplerMap_obj::get_map()->get(opts->__get(i).toLowerCase());		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(311)
			if (((o != null()))){
				HX_STACK_LINE(313)
				if (((((int((int(sampleroptset) >> int(o->shift))) & int(o->mask))) != (int)0))){
					HX_STACK_LINE(314)
					::haxe::Log_obj::trace(HX_CSTRING("Warning, duplicate sampler option"),hx::SourceInfo(HX_CSTRING("AGALMiniAssembler.hx"),315,HX_CSTRING("aglsl.assembler.AGALMiniAssembler"),HX_CSTRING("emitSampler")));
				}
				HX_STACK_LINE(317)
				hx::OrEq(sampleroptset,(int(o->mask) << int(o->shift)));
				HX_STACK_LINE(318)
				hx::AndEq(samplerbits,~(int)(((int(o->mask) << int(o->shift)))));
				HX_STACK_LINE(319)
				hx::OrEq(samplerbits,(int(o->value) << int(o->shift)));
			}
			else{
			}
		}
	}
	HX_STACK_LINE(326)
	pr->data->writeUnsignedInt(samplerbits);
	HX_STACK_LINE(334)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(AGALMiniAssembler_obj,emitSampler,return )

int AGALMiniAssembler_obj::stringToSwizzle( ::String s){
	HX_STACK_PUSH("AGALMiniAssembler::stringToSwizzle","aglsl/assembler/AGALMiniAssembler.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(241)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(242)
		return (int)228;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","aglsl/assembler/AGALMiniAssembler.hx",245);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)1,false);
				__result->Add(HX_CSTRING("z") , (int)2,false);
				__result->Add(HX_CSTRING("w") , (int)3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(245)
	Dynamic chartoindex = _Function_1_1::Block();		HX_STACK_VAR(chartoindex,"chartoindex");
	HX_STACK_LINE(246)
	int sw = (int)0;		HX_STACK_VAR(sw,"sw");
	HX_STACK_LINE(248)
	if (((s.charAt((int)0) != HX_CSTRING(".")))){
		HX_STACK_LINE(249)
		hx::Throw (HX_CSTRING("Missing . for swizzle"));
	}
	HX_STACK_LINE(253)
	if (((s.length > (int)1))){
		HX_STACK_LINE(254)
		hx::OrEq(sw,::Reflect_obj::field(chartoindex,s.charAt((int)1)));
	}
	HX_STACK_LINE(258)
	if (((s.length > (int)2))){
		HX_STACK_LINE(259)
		hx::OrEq(sw,(int(::Reflect_obj::field(chartoindex,s.charAt((int)2))) << int((int)2)));
	}
	else{
		HX_STACK_LINE(263)
		hx::OrEq(sw,(int(((int(sw) & int((int)3)))) << int((int)2)));
	}
	HX_STACK_LINE(267)
	if (((s.length > (int)3))){
		HX_STACK_LINE(268)
		hx::OrEq(sw,(int(::Reflect_obj::field(chartoindex,s.charAt((int)3))) << int((int)4)));
	}
	else{
		HX_STACK_LINE(272)
		hx::OrEq(sw,(int(((int(sw) & int((int)12)))) << int((int)2)));
	}
	HX_STACK_LINE(276)
	if (((s.length > (int)4))){
		HX_STACK_LINE(277)
		hx::OrEq(sw,(int(::Reflect_obj::field(chartoindex,s.charAt((int)4))) << int((int)6)));
	}
	else{
		HX_STACK_LINE(281)
		hx::OrEq(sw,(int(((int(sw) & int((int)48)))) << int((int)2)));
	}
	HX_STACK_LINE(285)
	return sw;
}


HX_DEFINE_DYNAMIC_FUNC1(AGALMiniAssembler_obj,stringToSwizzle,return )

int AGALMiniAssembler_obj::stringToMask( ::String s){
	HX_STACK_PUSH("AGALMiniAssembler::stringToMask","aglsl/assembler/AGALMiniAssembler.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(230)
	if (((s == null()))){
		HX_STACK_LINE(230)
		return (int)15;
	}
	HX_STACK_LINE(231)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(232)
	if (((s.indexOf(HX_CSTRING("x"),null()) != (int)-1))){
		HX_STACK_LINE(232)
		hx::OrEq(r,(int)1);
	}
	HX_STACK_LINE(233)
	if (((s.indexOf(HX_CSTRING("y"),null()) != (int)-1))){
		HX_STACK_LINE(233)
		hx::OrEq(r,(int)2);
	}
	HX_STACK_LINE(234)
	if (((s.indexOf(HX_CSTRING("z"),null()) != (int)-1))){
		HX_STACK_LINE(234)
		hx::OrEq(r,(int)4);
	}
	HX_STACK_LINE(235)
	if (((s.indexOf(HX_CSTRING("w"),null()) != (int)-1))){
		HX_STACK_LINE(235)
		hx::OrEq(r,(int)8);
	}
	HX_STACK_LINE(236)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(AGALMiniAssembler_obj,stringToMask,return )

bool AGALMiniAssembler_obj::emitDest( ::aglsl::assembler::Part pr,::String token,::String opdest){
	HX_STACK_PUSH("AGALMiniAssembler::emitDest","aglsl/assembler/AGALMiniAssembler.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pr,"pr");
	HX_STACK_ARG(token,"token");
	HX_STACK_ARG(opdest,"opdest");
	HX_STACK_LINE(216)
	Array< ::String > reg = this->getGroupMatches(::EReg_obj::__new(HX_CSTRING("([fov]?[tpocidavs])(\\d*)(\\.[xyzw]{1,4})?"),HX_CSTRING("i")),token,(int)3);		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(218)
	if (((::aglsl::assembler::RegMap_obj::get_map()->get(reg->__get((int)1)) == null()))){
		HX_STACK_LINE(219)
		return false;
	}
	HX_STACK_LINE(220)
	if (((::Std_obj::parseInt(reg->__get((int)2)) == null()))){
		HX_STACK_LINE(220)
		reg[(int)2] = HX_CSTRING("0");
	}
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::String > &reg,::aglsl::assembler::AGALMiniAssembler_obj *__this){
			HX_STACK_PUSH("*::closure","aglsl/assembler/AGALMiniAssembler.hx",221);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("num") , (  (((reg->__get((int)2) != null()))) ? ::String(reg->__get((int)2)) : ::String(HX_CSTRING("0")) ),false);
				__result->Add(HX_CSTRING("code") , ::aglsl::assembler::RegMap_obj::get_map()->get(reg->__get((int)1))->__Field(HX_CSTRING("code"),true),false);
				__result->Add(HX_CSTRING("mask") , __this->stringToMask(reg->__get((int)3)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(221)
	Dynamic em = _Function_1_1::Block(reg,this);		HX_STACK_VAR(em,"em");
	HX_STACK_LINE(222)
	pr->data->writeShort(::Std_obj::parseInt(em->__Field(HX_CSTRING("num"),true)));
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(223)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(223)
		_this->b[(_this->position)++] = em->__Field(HX_CSTRING("mask"),true);
	}
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(224)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(224)
		_this->b[(_this->position)++] = em->__Field(HX_CSTRING("code"),true);
	}
	HX_STACK_LINE(225)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(AGALMiniAssembler_obj,emitDest,return )

Void AGALMiniAssembler_obj::emitZeroQword( Dynamic pr){
{
		HX_STACK_PUSH("AGALMiniAssembler::emitZeroQword","aglsl/assembler/AGALMiniAssembler.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pr,"pr");
		HX_STACK_LINE(209)
		pr->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("writeUnsignedInt"),true)((int)0);
		HX_STACK_LINE(210)
		pr->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("writeUnsignedInt"),true)((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AGALMiniAssembler_obj,emitZeroQword,(void))

Void AGALMiniAssembler_obj::emitZeroDword( ::aglsl::assembler::Part pr){
{
		HX_STACK_PUSH("AGALMiniAssembler::emitZeroDword","aglsl/assembler/AGALMiniAssembler.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pr,"pr");
		HX_STACK_LINE(203)
		pr->data->writeUnsignedInt((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AGALMiniAssembler_obj,emitZeroDword,(void))

Void AGALMiniAssembler_obj::emitOpcode( ::aglsl::assembler::Part pr,int opcode){
{
		HX_STACK_PUSH("AGALMiniAssembler::emitOpcode","aglsl/assembler/AGALMiniAssembler.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pr,"pr");
		HX_STACK_ARG(opcode,"opcode");
		HX_STACK_LINE(198)
		pr->data->writeUnsignedInt(opcode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,emitOpcode,(void))

Void AGALMiniAssembler_obj::emitHeader( ::aglsl::assembler::Part pr){
{
		HX_STACK_PUSH("AGALMiniAssembler::emitHeader","aglsl/assembler/AGALMiniAssembler.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pr,"pr");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(181)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(181)
			_this->b[(_this->position)++] = (int)160;
		}
		HX_STACK_LINE(182)
		pr->data->writeUnsignedInt(pr->version);
		HX_STACK_LINE(183)
		if (((pr->version >= (int)16))){
			HX_STACK_LINE(185)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(185)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(185)
			_this->b[(_this->position)++] = (int)0;
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(187)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(187)
			_this->b[(_this->position)++] = (int)161;
		}
		HX_STACK_LINE(188)
		::String _switch_1 = (pr->name);
		if (  ( _switch_1==HX_CSTRING("fragment"))){
			HX_STACK_LINE(190)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(190)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(190)
			_this->b[(_this->position)++] = (int)1;
		}
		else if (  ( _switch_1==HX_CSTRING("vertex"))){
			HX_STACK_LINE(191)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(191)
			_this->b[(_this->position)++] = (int)0;
		}
		else if (  ( _switch_1==HX_CSTRING("cpu"))){
			HX_STACK_LINE(192)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(192)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(192)
			_this->b[(_this->position)++] = (int)2;
		}
		else  {
			HX_STACK_LINE(193)
			::flash::utils::ByteArray _this = pr->data;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(193)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(193)
			_this->b[(_this->position)++] = (int)255;
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AGALMiniAssembler_obj,emitHeader,(void))

Array< ::String > AGALMiniAssembler_obj::getGroupMatches( ::EReg ereg,::String text,hx::Null< int >  __o_groupCount){
int groupCount = __o_groupCount.Default(0);
	HX_STACK_PUSH("AGALMiniAssembler::getGroupMatches","aglsl/assembler/AGALMiniAssembler.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ereg,"ereg");
	HX_STACK_ARG(text,"text");
	HX_STACK_ARG(groupCount,"groupCount");
{
		HX_STACK_LINE(167)
		Array< ::String > matches = Array_obj< ::String >::__new();		HX_STACK_VAR(matches,"matches");
		HX_STACK_LINE(168)
		if ((!(ereg->match(text)))){
			HX_STACK_LINE(168)
			return matches;
		}
		HX_STACK_LINE(169)
		int m = (int)0;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(170)
		::String t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(171)
		bool completed = false;		HX_STACK_VAR(completed,"completed");
		HX_STACK_LINE(172)
		while(((bool(!(completed)) && bool(((t = ereg->matched((m)++)) != null()))))){
			HX_STACK_LINE(173)
			matches->push(t);
			HX_STACK_LINE(174)
			if (((bool((groupCount != (int)0)) && bool((m > groupCount))))){
				HX_STACK_LINE(174)
				completed = true;
			}
		}
		HX_STACK_LINE(176)
		return matches;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(AGALMiniAssembler_obj,getGroupMatches,return )

Array< ::String > AGALMiniAssembler_obj::getMatches( ::EReg ereg,::String text){
	HX_STACK_PUSH("AGALMiniAssembler::getMatches","aglsl/assembler/AGALMiniAssembler.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ereg,"ereg");
	HX_STACK_ARG(text,"text");
	HX_STACK_LINE(157)
	Array< ::String > matches = Array_obj< ::String >::__new();		HX_STACK_VAR(matches,"matches");
	HX_STACK_LINE(158)
	while((ereg->match(text))){
		HX_STACK_LINE(159)
		::String t = ereg->matched((int)1);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(160)
		matches->push(t);
		HX_STACK_LINE(161)
		text = ereg->matchedRight();
	}
	HX_STACK_LINE(163)
	return matches;
}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,getMatches,return )

Void AGALMiniAssembler_obj::processLine( ::String line,int linenr){
{
		HX_STACK_PUSH("AGALMiniAssembler::processLine","aglsl/assembler/AGALMiniAssembler.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_ARG(line,"line");
		HX_STACK_ARG(linenr,"linenr");
		HX_STACK_LINE(48)
		int startcomment = line.indexOf(HX_CSTRING("//"),null());		HX_STACK_VAR(startcomment,"startcomment");
		HX_STACK_LINE(49)
		if (((startcomment != (int)-1))){
			HX_STACK_LINE(50)
			line = line.substring((int)0,startcomment);
		}
		HX_STACK_LINE(53)
		::EReg r = ::EReg_obj::__new(HX_CSTRING("^\\s+|\\s+$"),HX_CSTRING("g"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(54)
		line = r->replace(line,HX_CSTRING(""));
		HX_STACK_LINE(55)
		if ((!(((line.length > (int)0))))){
			HX_STACK_LINE(56)
			return null();
		}
		HX_STACK_LINE(59)
		r = ::EReg_obj::__new(HX_CSTRING("<.*>"),HX_CSTRING("g"));
		HX_STACK_LINE(60)
		bool optsb = r->match(line);		HX_STACK_VAR(optsb,"optsb");
		HX_STACK_LINE(61)
		Array< ::String > opts = null();		HX_STACK_VAR(opts,"opts");
		HX_STACK_LINE(62)
		if ((optsb)){
			HX_STACK_LINE(64)
			int optsi = r->matchedPos()->__Field(HX_CSTRING("pos"),true);		HX_STACK_VAR(optsi,"optsi");
			HX_STACK_LINE(65)
			opts = this->getMatches(::EReg_obj::__new(HX_CSTRING("([\\w\\.\\-\\+]+)"),HX_CSTRING("gi")),line.substring(optsi,null()));
			HX_STACK_LINE(66)
			line = line.substring((int)0,optsi);
		}
		HX_STACK_LINE(70)
		Array< ::String > tokens = this->getMatches(::EReg_obj::__new(HX_CSTRING("([\\w\\.\\+\\[\\]]+)"),HX_CSTRING("gi")),line);		HX_STACK_VAR(tokens,"tokens");
		HX_STACK_LINE(71)
		if (((tokens->length == (int)0))){
			HX_STACK_LINE(73)
			if (((line.length >= (int)3))){
				HX_STACK_LINE(74)
				::haxe::Log_obj::trace((((HX_CSTRING("Warning: bad line ") + linenr) + HX_CSTRING(": ")) + line),hx::SourceInfo(HX_CSTRING("AGALMiniAssembler.hx"),75,HX_CSTRING("aglsl.assembler.AGALMiniAssembler"),HX_CSTRING("processLine")));
			}
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::String _g = tokens->__get((int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			::String _switch_2 = (_g);
			if (  ( _switch_2==HX_CSTRING("part"))){
				HX_STACK_LINE(83)
				this->addHeader(tokens->__get((int)1),::Std_obj::parseInt(tokens->__get((int)2)));
			}
			else if (  ( _switch_2==HX_CSTRING("endpart"))){
				HX_STACK_LINE(86)
				if (((this->cur == null()))){
					HX_STACK_LINE(87)
					hx::Throw (HX_CSTRING("Unexpected endpart"));
				}
				HX_STACK_LINE(90)
				this->cur->data->position = (int)0;
				HX_STACK_LINE(91)
				this->cur = null();
				HX_STACK_LINE(92)
				return null();
			}
			else  {
				HX_STACK_LINE(94)
				if (((this->cur == null()))){
					HX_STACK_LINE(96)
					::haxe::Log_obj::trace(((((HX_CSTRING("Warning: bad line ") + linenr) + HX_CSTRING(": ")) + line) + HX_CSTRING(" (Outside of any part definition)")),hx::SourceInfo(HX_CSTRING("AGALMiniAssembler.hx"),96,HX_CSTRING("aglsl.assembler.AGALMiniAssembler"),HX_CSTRING("processLine")));
					HX_STACK_LINE(97)
					return null();
				}
				HX_STACK_LINE(99)
				if (((this->cur->name == HX_CSTRING("comment")))){
					HX_STACK_LINE(100)
					return null();
				}
				HX_STACK_LINE(103)
				::aglsl::assembler::Opcode op = ::aglsl::assembler::OpcodeMap_obj::get_map()->get(tokens->__get((int)0));		HX_STACK_VAR(op,"op");
				HX_STACK_LINE(104)
				if (((op == null()))){
					HX_STACK_LINE(105)
					hx::Throw ((((((HX_CSTRING("Bad opcode ") + tokens->__get((int)0)) + HX_CSTRING(" ")) + linenr) + HX_CSTRING(": ")) + line));
				}
				HX_STACK_LINE(109)
				this->emitOpcode(this->cur,op->opcode);
				HX_STACK_LINE(110)
				int ti = (int)1;		HX_STACK_VAR(ti,"ti");
				HX_STACK_LINE(111)
				if (((bool((op->dest != null())) && bool((op->dest != HX_CSTRING("none")))))){
					HX_STACK_LINE(112)
					if ((!(this->emitDest(this->cur,tokens->__get((ti)++),op->dest)))){
						HX_STACK_LINE(114)
						hx::Throw ((((((HX_CSTRING("Bad destination register ") + tokens->__get((ti - (int)1))) + HX_CSTRING(" ")) + linenr) + HX_CSTRING(": ")) + line));
					}
				}
				else{
					HX_STACK_LINE(119)
					this->emitZeroDword(this->cur);
				}
				HX_STACK_LINE(123)
				if (((bool((op->a != null())) && bool((op->a->format != HX_CSTRING("none")))))){
					HX_STACK_LINE(124)
					if ((!(this->emitSource(this->cur,tokens->__get((ti)++),op->a)))){
						HX_STACK_LINE(125)
						hx::Throw ((((((HX_CSTRING("Bad source register ") + tokens->__get((ti - (int)1))) + HX_CSTRING(" ")) + linenr) + HX_CSTRING(": ")) + line));
					}
				}
				else{
					HX_STACK_LINE(128)
					this->emitZeroQword(this->cur);
				}
				HX_STACK_LINE(132)
				if (((bool((op->b != null())) && bool((op->b->format != HX_CSTRING("none")))))){
					HX_STACK_LINE(133)
					if (((op->b->format == HX_CSTRING("sampler")))){
						HX_STACK_LINE(135)
						if ((!(this->emitSampler(this->cur,tokens->__get((ti)++),op->b,opts)))){
							HX_STACK_LINE(137)
							hx::Throw ((((((HX_CSTRING("Bad sampler register ") + tokens->__get((ti - (int)1))) + HX_CSTRING(" ")) + linenr) + HX_CSTRING(": ")) + line));
						}
					}
					else{
						HX_STACK_LINE(142)
						if ((!(this->emitSource(this->cur,tokens->__get((ti)++),op->b)))){
							HX_STACK_LINE(144)
							hx::Throw ((((((HX_CSTRING("Bad source register ") + tokens->__get((ti - (int)1))) + HX_CSTRING(" ")) + linenr) + HX_CSTRING(": ")) + line));
						}
					}
				}
				else{
					HX_STACK_LINE(150)
					this->emitZeroQword(this->cur);
				}
			}
;
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,processLine,(void))

Dynamic AGALMiniAssembler_obj::assemble( ::String source,::String ext_part,Dynamic ext_version){
	HX_STACK_PUSH("AGALMiniAssembler::assemble","aglsl/assembler/AGALMiniAssembler.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(ext_part,"ext_part");
	HX_STACK_ARG(ext_version,"ext_version");
	HX_STACK_LINE(25)
	if (((ext_version == (int)0))){
		HX_STACK_LINE(26)
		ext_version = (int)1;
	}
	HX_STACK_LINE(30)
	if (((ext_part != null()))){
		HX_STACK_LINE(31)
		this->addHeader(ext_part,ext_version);
	}
	HX_STACK_LINE(35)
	::EReg reg = ::EReg_obj::__new(HX_CSTRING("[\n\r]+"),HX_CSTRING("g"));		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(36)
	Array< ::String > lines = reg->split(source);		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(38)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = lines->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while(((_g1 < _g))){
			HX_STACK_LINE(39)
			int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(41)
			this->processLine(lines->__get(i1),i1);
		}
	}
	HX_STACK_LINE(43)
	return this->r;
}


HX_DEFINE_DYNAMIC_FUNC3(AGALMiniAssembler_obj,assemble,return )


AGALMiniAssembler_obj::AGALMiniAssembler_obj()
{
}

void AGALMiniAssembler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALMiniAssembler);
	HX_MARK_MEMBER_NAME(cur,"cur");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void AGALMiniAssembler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cur,"cur");
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic AGALMiniAssembler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return cur; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitDest") ) { return emitDest_dyn(); }
		if (HX_FIELD_EQ(inName,"assemble") ) { return assemble_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addHeader") ) { return addHeader_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"emitSource") ) { return emitSource_dyn(); }
		if (HX_FIELD_EQ(inName,"emitOpcode") ) { return emitOpcode_dyn(); }
		if (HX_FIELD_EQ(inName,"emitHeader") ) { return emitHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"getMatches") ) { return getMatches_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emitSampler") ) { return emitSampler_dyn(); }
		if (HX_FIELD_EQ(inName,"processLine") ) { return processLine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stringToMask") ) { return stringToMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"emitZeroQword") ) { return emitZeroQword_dyn(); }
		if (HX_FIELD_EQ(inName,"emitZeroDword") ) { return emitZeroDword_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stringToSwizzle") ) { return stringToSwizzle_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroupMatches") ) { return getGroupMatches_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGALMiniAssembler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast< ::aglsl::assembler::Part >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AGALMiniAssembler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cur"));
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addHeader"),
	HX_CSTRING("emitSource"),
	HX_CSTRING("emitSampler"),
	HX_CSTRING("stringToSwizzle"),
	HX_CSTRING("stringToMask"),
	HX_CSTRING("emitDest"),
	HX_CSTRING("emitZeroQword"),
	HX_CSTRING("emitZeroDword"),
	HX_CSTRING("emitOpcode"),
	HX_CSTRING("emitHeader"),
	HX_CSTRING("getGroupMatches"),
	HX_CSTRING("getMatches"),
	HX_CSTRING("processLine"),
	HX_CSTRING("assemble"),
	HX_CSTRING("cur"),
	HX_CSTRING("r"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::__mClass,"__mClass");
};

Class AGALMiniAssembler_obj::__mClass;

void AGALMiniAssembler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.AGALMiniAssembler"), hx::TCanCast< AGALMiniAssembler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGALMiniAssembler_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
