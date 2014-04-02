#include <hxcpp.h>

#ifndef INCLUDED_aglsl_OpLUT
#include <aglsl/OpLUT.h>
#endif
namespace aglsl{

Void OpLUT_obj::__construct(::String s,Dynamic __o_flags,Dynamic __o_dest,Dynamic __o_a,Dynamic __o_b,Dynamic __o_matrixwidth,Dynamic __o_matrixheight,Dynamic __o_ndwm,Dynamic __o_scaler,Dynamic __o_dm,Dynamic __o_lod)
{
HX_STACK_PUSH("OpLUT::new","aglsl/OpLUT.hx",17);
Dynamic flags = __o_flags.Default(0);
Dynamic dest = __o_dest.Default(false);
Dynamic a = __o_a.Default(false);
Dynamic b = __o_b.Default(false);
Dynamic matrixwidth = __o_matrixwidth.Default(0);
Dynamic matrixheight = __o_matrixheight.Default(0);
Dynamic ndwm = __o_ndwm.Default(false);
Dynamic scaler = __o_scaler.Default(false);
Dynamic dm = __o_dm.Default(false);
Dynamic lod = __o_lod.Default(false);
{
	HX_STACK_LINE(18)
	this->s = s;
	HX_STACK_LINE(19)
	this->flags = flags;
	HX_STACK_LINE(20)
	this->dest = dest;
	HX_STACK_LINE(21)
	this->a = a;
	HX_STACK_LINE(22)
	this->b = b;
	HX_STACK_LINE(23)
	this->matrixwidth = matrixwidth;
	HX_STACK_LINE(24)
	this->matrixheight = matrixheight;
	HX_STACK_LINE(25)
	this->ndwm = ndwm;
	HX_STACK_LINE(26)
	this->scalar = scaler;
	HX_STACK_LINE(27)
	this->dm = dm;
	HX_STACK_LINE(28)
	this->lod = lod;
}
;
	return null();
}

OpLUT_obj::~OpLUT_obj() { }

Dynamic OpLUT_obj::__CreateEmpty() { return  new OpLUT_obj; }
hx::ObjectPtr< OpLUT_obj > OpLUT_obj::__new(::String s,Dynamic __o_flags,Dynamic __o_dest,Dynamic __o_a,Dynamic __o_b,Dynamic __o_matrixwidth,Dynamic __o_matrixheight,Dynamic __o_ndwm,Dynamic __o_scaler,Dynamic __o_dm,Dynamic __o_lod)
{  hx::ObjectPtr< OpLUT_obj > result = new OpLUT_obj();
	result->__construct(s,__o_flags,__o_dest,__o_a,__o_b,__o_matrixwidth,__o_matrixheight,__o_ndwm,__o_scaler,__o_dm,__o_lod);
	return result;}

Dynamic OpLUT_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpLUT_obj > result = new OpLUT_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}


OpLUT_obj::OpLUT_obj()
{
}

void OpLUT_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpLUT);
	HX_MARK_MEMBER_NAME(lod,"lod");
	HX_MARK_MEMBER_NAME(dm,"dm");
	HX_MARK_MEMBER_NAME(scalar,"scalar");
	HX_MARK_MEMBER_NAME(ndwm,"ndwm");
	HX_MARK_MEMBER_NAME(matrixheight,"matrixheight");
	HX_MARK_MEMBER_NAME(matrixwidth,"matrixwidth");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(dest,"dest");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void OpLUT_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lod,"lod");
	HX_VISIT_MEMBER_NAME(dm,"dm");
	HX_VISIT_MEMBER_NAME(scalar,"scalar");
	HX_VISIT_MEMBER_NAME(ndwm,"ndwm");
	HX_VISIT_MEMBER_NAME(matrixheight,"matrixheight");
	HX_VISIT_MEMBER_NAME(matrixwidth,"matrixwidth");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(dest,"dest");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic OpLUT_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dm") ) { return dm; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lod") ) { return lod; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ndwm") ) { return ndwm; }
		if (HX_FIELD_EQ(inName,"dest") ) { return dest; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return flags; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scalar") ) { return scalar; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matrixwidth") ) { return matrixwidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"matrixheight") ) { return matrixheight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpLUT_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dm") ) { dm=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lod") ) { lod=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ndwm") ) { ndwm=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dest") ) { dest=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scalar") ) { scalar=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matrixwidth") ) { matrixwidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"matrixheight") ) { matrixheight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpLUT_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lod"));
	outFields->push(HX_CSTRING("dm"));
	outFields->push(HX_CSTRING("scalar"));
	outFields->push(HX_CSTRING("ndwm"));
	outFields->push(HX_CSTRING("matrixheight"));
	outFields->push(HX_CSTRING("matrixwidth"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("dest"));
	outFields->push(HX_CSTRING("flags"));
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("lod"),
	HX_CSTRING("dm"),
	HX_CSTRING("scalar"),
	HX_CSTRING("ndwm"),
	HX_CSTRING("matrixheight"),
	HX_CSTRING("matrixwidth"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("dest"),
	HX_CSTRING("flags"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpLUT_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpLUT_obj::__mClass,"__mClass");
};

Class OpLUT_obj::__mClass;

void OpLUT_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aglsl.OpLUT"), hx::TCanCast< OpLUT_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OpLUT_obj::__boot()
{
}

} // end namespace aglsl
