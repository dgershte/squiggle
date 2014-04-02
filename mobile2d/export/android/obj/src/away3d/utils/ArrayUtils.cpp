#include <hxcpp.h>

#ifndef INCLUDED_away3d_utils_ArrayUtils
#include <away3d/utils/ArrayUtils.h>
#endif
namespace away3d{
namespace utils{

Void ArrayUtils_obj::__construct()
{
	return null();
}

ArrayUtils_obj::~ArrayUtils_obj() { }

Dynamic ArrayUtils_obj::__CreateEmpty() { return  new ArrayUtils_obj; }
hx::ObjectPtr< ArrayUtils_obj > ArrayUtils_obj::__new()
{  hx::ObjectPtr< ArrayUtils_obj > result = new ArrayUtils_obj();
	result->__construct();
	return result;}

Dynamic ArrayUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayUtils_obj > result = new ArrayUtils_obj();
	result->__construct();
	return result;}

Dynamic ArrayUtils_obj::reSize( Dynamic array,int count,Dynamic defaultValue){
	HX_STACK_PUSH("ArrayUtils::reSize","away3d/utils/ArrayUtils.hx",5);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(count,"count");
	HX_STACK_ARG(defaultValue,"defaultValue");
	HX_STACK_LINE(9)
	int c = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(10)
	while(((c < count))){
		HX_STACK_LINE(11)
		array->__Field(HX_CSTRING("push"),true)(defaultValue);
		HX_STACK_LINE(12)
		(c)++;
	}
	HX_STACK_LINE(14)
	while(((c > count))){
		HX_STACK_LINE(15)
		array->__Field(HX_CSTRING("pop"),true)();
		HX_STACK_LINE(16)
		(c)--;
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		while(((_g1 < _g))){
			HX_STACK_LINE(19)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(20)
			hx::IndexRef((array).mPtr,i) = defaultValue;
		}
	}
	HX_STACK_LINE(22)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayUtils_obj,reSize,return )

Dynamic ArrayUtils_obj::Prefill( Dynamic array,int count,Dynamic defaultValue){
	HX_STACK_PUSH("ArrayUtils::Prefill","away3d/utils/ArrayUtils.hx",25);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(count,"count");
	HX_STACK_ARG(defaultValue,"defaultValue");
	HX_STACK_LINE(33)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(34)
	while((((c)++ < count))){
		HX_STACK_LINE(34)
		array->__Field(HX_CSTRING("push"),true)(defaultValue);
	}
	HX_STACK_LINE(39)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayUtils_obj,Prefill,return )


ArrayUtils_obj::ArrayUtils_obj()
{
}

void ArrayUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayUtils);
	HX_MARK_END_CLASS();
}

void ArrayUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ArrayUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"reSize") ) { return reSize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Prefill") ) { return Prefill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("reSize"),
	HX_CSTRING("Prefill"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayUtils_obj::__mClass,"__mClass");
};

Class ArrayUtils_obj::__mClass;

void ArrayUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.utils.ArrayUtils"), hx::TCanCast< ArrayUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArrayUtils_obj::__boot()
{
}

} // end namespace away3d
} // end namespace utils
