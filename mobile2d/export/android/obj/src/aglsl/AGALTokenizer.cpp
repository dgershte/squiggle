#include <hxcpp.h>

#ifndef INCLUDED_aglsl_AGALTokenizer
#include <aglsl/AGALTokenizer.h>
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
#ifndef INCLUDED_aglsl_Token
#include <aglsl/Token.h>
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

Void AGALTokenizer_obj::__construct()
{
HX_STACK_PUSH("AGALTokenizer::new","aglsl/AGALTokenizer.hx",8);
{
}
;
	return null();
}

AGALTokenizer_obj::~AGALTokenizer_obj() { }

Dynamic AGALTokenizer_obj::__CreateEmpty() { return  new AGALTokenizer_obj; }
hx::ObjectPtr< AGALTokenizer_obj > AGALTokenizer_obj::__new()
{  hx::ObjectPtr< AGALTokenizer_obj > result = new AGALTokenizer_obj();
	result->__construct();
	return result;}

Dynamic AGALTokenizer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALTokenizer_obj > result = new AGALTokenizer_obj();
	result->__construct();
	return result;}

Void AGALTokenizer_obj::readReg( ::aglsl::Destination s,int mh,::aglsl::Description desc,::flash::utils::ByteArray bytes){
{
		HX_STACK_PUSH("AGALTokenizer::readReg","aglsl/AGALTokenizer.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_ARG(mh,"mh");
		HX_STACK_ARG(desc,"desc");
		HX_STACK_ARG(bytes,"bytes");
		HX_STACK_LINE(96)
		s->regnum = bytes->readUnsignedShort();
		struct _Function_1_1{
			inline static int Block( ::flash::utils::ByteArray &bytes){
				HX_STACK_PUSH("*::closure","aglsl/AGALTokenizer.hx",97);
				{
					HX_STACK_LINE(97)
					int value = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(97)
					return (  (((((int(value) & int((int)128))) != (int)0))) ? int((value - (int)256)) : int(value) );
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		s->indexoffset = _Function_1_1::Block(bytes);
		HX_STACK_LINE(98)
		s->swizzle = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
		HX_STACK_LINE(99)
		s->regtype = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
		HX_STACK_LINE(100)
		hx::IndexRef((desc->regread->__GetItem(s->regtype)).mPtr,s->regnum) = (int)15;
		HX_STACK_LINE(102)
		if (((s->regtype == (int)5))){
			HX_STACK_LINE(104)
			s->lodbiad = s->indexoffset;
			HX_STACK_LINE(106)
			s->indexoffset = (int)0;
			HX_STACK_LINE(107)
			s->swizzle = (int)0;
			HX_STACK_LINE(109)
			s->readmode = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(110)
			s->dim = (int(s->readmode) >> int((int)4));
			HX_STACK_LINE(111)
			hx::AndEq(s->readmode,(int)15);
			HX_STACK_LINE(112)
			s->special = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(113)
			s->wrap = (int(s->special) >> int((int)4));
			HX_STACK_LINE(114)
			hx::AndEq(s->special,(int)15);
			HX_STACK_LINE(115)
			s->mipmap = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(116)
			s->filter = (int(s->mipmap) >> int((int)4));
			HX_STACK_LINE(117)
			hx::AndEq(s->mipmap,(int)15);
			HX_STACK_LINE(118)
			hx::IndexRef((desc->samplers).mPtr,s->regnum) = s;
		}
		else{
			HX_STACK_LINE(122)
			s->indexregtype = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(123)
			s->indexselect = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(124)
			s->indirectflag = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
		}
		HX_STACK_LINE(127)
		if (((s->indirectflag == (int)1))){
			HX_STACK_LINE(127)
			desc->hasindirect = true;
		}
		HX_STACK_LINE(130)
		if (((bool((s->indirectflag == (int)0)) && bool((mh > (int)0))))){
			HX_STACK_LINE(131)
			int mhi = (int)0;		HX_STACK_VAR(mhi,"mhi");
			HX_STACK_LINE(132)
			while(((mhi < mh))){
				HX_STACK_LINE(134)
				hx::IndexRef((desc->regread->__GetItem(s->regtype)).mPtr,(s->regnum + mhi)) = desc->regread->__GetItem(s->regtype)->__GetItem(s->regnum);
				HX_STACK_LINE(135)
				(mhi)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AGALTokenizer_obj,readReg,(void))

::aglsl::Description AGALTokenizer_obj::decribeAGALByteArray( ::flash::utils::ByteArray bytes){
	HX_STACK_PUSH("AGALTokenizer::decribeAGALByteArray","aglsl/AGALTokenizer.hx",11);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_LINE(13)
	::aglsl::Header header = ::aglsl::Header_obj::__new();		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(14)
	if (((((  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) )) != (int)160))){
		HX_STACK_LINE(14)
		hx::Throw (HX_CSTRING("Bad AGAL : Missing 0xa0 magic byte."));
	}
	HX_STACK_LINE(17)
	header->version = bytes->readUnsignedInt();
	HX_STACK_LINE(18)
	if (((header->version >= (int)16))){
		HX_STACK_LINE(19)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(19)
			bytes->b->__get((bytes->position)++);
		}
		else{
			HX_STACK_LINE(19)
			bytes->__throwEOFi();
		}
		HX_STACK_LINE(20)
		hx::ShrEq(header->version,(int)1);
	}
	HX_STACK_LINE(22)
	if (((((  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) )) != (int)161))){
		HX_STACK_LINE(22)
		hx::Throw (HX_CSTRING("Bad AGAL : Missing 0xa1 magic byte."));
	}
	HX_STACK_LINE(25)
	header->progid = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
	HX_STACK_LINE(26)
	int _sw0_ = header->progid;		HX_STACK_VAR(_sw0_,"_sw0_");
	HX_STACK_LINE(27)
	switch( (int)(_sw0_)){
		case (int)1: {
			HX_STACK_LINE(28)
			header->type = HX_CSTRING("fragment");
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(30)
			header->type = HX_CSTRING("vertex");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			header->type = HX_CSTRING("cpu");
		}
		;break;
		default: {
			HX_STACK_LINE(34)
			header->type = HX_CSTRING("");
		}
	}
	HX_STACK_LINE(37)
	::aglsl::Description desc = ::aglsl::Description_obj::__new();		HX_STACK_VAR(desc,"desc");
	HX_STACK_LINE(38)
	Dynamic tokens = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tokens,"tokens");
	HX_STACK_LINE(39)
	Dynamic agal2glsllut = ::aglsl::Mapping_obj::get_agal2glsllut();		HX_STACK_VAR(agal2glsllut,"agal2glsllut");
	HX_STACK_LINE(40)
	while(((bytes->position < bytes->length))){
		HX_STACK_LINE(41)
		::aglsl::Token token = ::aglsl::Token_obj::__new();		HX_STACK_VAR(token,"token");
		HX_STACK_LINE(42)
		token->opcode = bytes->readUnsignedInt();
		HX_STACK_LINE(43)
		::aglsl::OpLUT lutentry = ::aglsl::Mapping_obj::get_agal2glsllut()->__get(token->opcode).StaticCast< ::aglsl::OpLUT >();		HX_STACK_VAR(lutentry,"lutentry");
		HX_STACK_LINE(44)
		if (((lutentry == null()))){
			HX_STACK_LINE(44)
			hx::Throw ((HX_CSTRING("Opcode not valid or not implemented yet :  ") + token->opcode));
		}
		HX_STACK_LINE(47)
		if (((lutentry->matrixheight == (int)0))){
			HX_STACK_LINE(47)
			desc->hasmatrix = true;
		}
		HX_STACK_LINE(50)
		if ((lutentry->dest)){
			HX_STACK_LINE(51)
			token->dest->regnum = bytes->readUnsignedShort();
			HX_STACK_LINE(52)
			token->dest->mask = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(53)
			token->dest->regtype = (  (((bytes->position < bytes->length))) ? int(bytes->b->__get((bytes->position)++)) : int(bytes->__throwEOFi()) );
			HX_STACK_LINE(54)
			if (((desc->regwrite->__GetItem(token->dest->regtype)->__GetItem(token->dest->regnum) == null()))){
				HX_STACK_LINE(54)
				hx::IndexRef((desc->regwrite->__GetItem(token->dest->regtype)).mPtr,token->dest->regnum) = token->dest->mask;
			}
			else{
				HX_STACK_LINE(56)
				hx::OrEq(hx::IndexRef((desc->regwrite->__GetItem(token->dest->regtype)).mPtr,token->dest->regnum),token->dest->mask);
			}
		}
		else{
			HX_STACK_LINE(63)
			token->dest = null();
			HX_STACK_LINE(64)
			bytes->readUnsignedInt();
		}
		HX_STACK_LINE(67)
		if ((lutentry->a)){
			HX_STACK_LINE(67)
			this->readReg(token->a,(int)1,desc,bytes);
		}
		else{
			HX_STACK_LINE(72)
			token->a = null();
			HX_STACK_LINE(73)
			bytes->readUnsignedInt();
			HX_STACK_LINE(74)
			bytes->readUnsignedInt();
		}
		HX_STACK_LINE(77)
		if ((lutentry->b)){
			HX_STACK_LINE(77)
			this->readReg(token->b,(int(lutentry->matrixheight) | int((int)0)),desc,bytes);
		}
		else{
			HX_STACK_LINE(82)
			token->b = null();
			HX_STACK_LINE(83)
			bytes->readUnsignedInt();
			HX_STACK_LINE(84)
			bytes->readUnsignedInt();
		}
		HX_STACK_LINE(87)
		tokens->__Field(HX_CSTRING("push"),true)(token);
	}
	HX_STACK_LINE(90)
	desc->header = header;
	HX_STACK_LINE(91)
	desc->tokens = tokens;
	HX_STACK_LINE(92)
	return desc;
}


HX_DEFINE_DYNAMIC_FUNC1(AGALTokenizer_obj,decribeAGALByteArray,return )


AGALTokenizer_obj::AGALTokenizer_obj()
{
}

void AGALTokenizer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALTokenizer);
	HX_MARK_END_CLASS();
}

void AGALTokenizer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AGALTokenizer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readReg") ) { return readReg_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"decribeAGALByteArray") ) { return decribeAGALByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGALTokenizer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AGALTokenizer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readReg"),
	HX_CSTRING("decribeAGALByteArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALTokenizer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALTokenizer_obj::__mClass,"__mClass");
};

Class AGALTokenizer_obj::__mClass;

void AGALTokenizer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.AGALTokenizer"), hx::TCanCast< AGALTokenizer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGALTokenizer_obj::__boot()
{
}

} // end namespace aglsl
