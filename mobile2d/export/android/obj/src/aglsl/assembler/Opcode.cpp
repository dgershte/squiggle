#include <hxcpp.h>

#ifndef INCLUDED_aglsl_assembler_FS
#include <aglsl/assembler/FS.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Flags
#include <aglsl/assembler/Flags.h>
#endif
#ifndef INCLUDED_aglsl_assembler_Opcode
#include <aglsl/assembler/Opcode.h>
#endif
namespace aglsl{
namespace assembler{

Void Opcode_obj::__construct(::String dest,::String aformat,int asize,::String bformat,int bsize,int opcode,bool simple,Dynamic __o_horizontal,Dynamic __o_fragonly,Dynamic __o_matrix)
{
HX_STACK_PUSH("Opcode::new","aglsl/assembler/Opcode.hx",10);
Dynamic horizontal = __o_horizontal.Default(false);
Dynamic fragonly = __o_fragonly.Default(false);
Dynamic matrix = __o_matrix.Default(false);
{
	HX_STACK_LINE(11)
	this->a = ::aglsl::assembler::FS_obj::__new();
	HX_STACK_LINE(12)
	this->b = ::aglsl::assembler::FS_obj::__new();
	HX_STACK_LINE(13)
	this->flags = ::aglsl::assembler::Flags_obj::__new();
	HX_STACK_LINE(14)
	this->dest = dest;
	HX_STACK_LINE(15)
	this->a->format = aformat;
	HX_STACK_LINE(16)
	this->a->size = asize;
	HX_STACK_LINE(17)
	this->b->format = bformat;
	HX_STACK_LINE(18)
	this->b->size = bsize;
	HX_STACK_LINE(19)
	this->opcode = opcode;
	HX_STACK_LINE(20)
	this->flags->simple = simple;
	HX_STACK_LINE(21)
	this->flags->horizontal = horizontal;
	HX_STACK_LINE(22)
	this->flags->fragonly = fragonly;
	HX_STACK_LINE(23)
	this->flags->matrix = matrix;
}
;
	return null();
}

Opcode_obj::~Opcode_obj() { }

Dynamic Opcode_obj::__CreateEmpty() { return  new Opcode_obj; }
hx::ObjectPtr< Opcode_obj > Opcode_obj::__new(::String dest,::String aformat,int asize,::String bformat,int bsize,int opcode,bool simple,Dynamic __o_horizontal,Dynamic __o_fragonly,Dynamic __o_matrix)
{  hx::ObjectPtr< Opcode_obj > result = new Opcode_obj();
	result->__construct(dest,aformat,asize,bformat,bsize,opcode,simple,__o_horizontal,__o_fragonly,__o_matrix);
	return result;}

Dynamic Opcode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Opcode_obj > result = new Opcode_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}


Opcode_obj::Opcode_obj()
{
}

void Opcode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Opcode);
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(opcode,"opcode");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(dest,"dest");
	HX_MARK_END_CLASS();
}

void Opcode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(opcode,"opcode");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(dest,"dest");
}

Dynamic Opcode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { return dest; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return flags; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { return opcode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Opcode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::aglsl::assembler::FS >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::aglsl::assembler::FS >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { dest=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< ::aglsl::assembler::Flags >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opcode") ) { opcode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Opcode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flags"));
	outFields->push(HX_CSTRING("opcode"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("dest"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("flags"),
	HX_CSTRING("opcode"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("dest"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Opcode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Opcode_obj::__mClass,"__mClass");
};

Class Opcode_obj::__mClass;

void Opcode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.assembler.Opcode"), hx::TCanCast< Opcode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Opcode_obj::__boot()
{
}

} // end namespace aglsl
} // end namespace assembler
