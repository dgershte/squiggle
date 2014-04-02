#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#include <flash/display3D/_Context3DBlendFactor/Context3DBlendFactor_Impl_.h>
#endif
namespace flash{
namespace display3D{
namespace _Context3DBlendFactor{

Void Context3DBlendFactor_Impl__obj::__construct()
{
	return null();
}

Context3DBlendFactor_Impl__obj::~Context3DBlendFactor_Impl__obj() { }

Dynamic Context3DBlendFactor_Impl__obj::__CreateEmpty() { return  new Context3DBlendFactor_Impl__obj; }
hx::ObjectPtr< Context3DBlendFactor_Impl__obj > Context3DBlendFactor_Impl__obj::__new()
{  hx::ObjectPtr< Context3DBlendFactor_Impl__obj > result = new Context3DBlendFactor_Impl__obj();
	result->__construct();
	return result;}

Dynamic Context3DBlendFactor_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DBlendFactor_Impl__obj > result = new Context3DBlendFactor_Impl__obj();
	result->__construct();
	return result;}

int Context3DBlendFactor_Impl__obj::_new( int a){
	HX_STACK_PUSH("Context3DBlendFactor_Impl_::_new","flash/display3D/Context3DBlendFactor.hx",27);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(27)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBlendFactor_Impl__obj,_new,return )

int Context3DBlendFactor_Impl__obj::fromInt( int s){
	HX_STACK_PUSH("Context3DBlendFactor_Impl_::fromInt","flash/display3D/Context3DBlendFactor.hx",29);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(29)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBlendFactor_Impl__obj,fromInt,return )

int Context3DBlendFactor_Impl__obj::toInt( int this1){
	HX_STACK_PUSH("Context3DBlendFactor_Impl_::toInt","flash/display3D/Context3DBlendFactor.hx",32);
	HX_STACK_ARG(this1,"this1");
	HX_STACK_LINE(32)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBlendFactor_Impl__obj,toInt,return )


Context3DBlendFactor_Impl__obj::Context3DBlendFactor_Impl__obj()
{
}

void Context3DBlendFactor_Impl__obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DBlendFactor_Impl_);
	HX_MARK_END_CLASS();
}

void Context3DBlendFactor_Impl__obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DBlendFactor_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { return fromInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DBlendFactor_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DBlendFactor_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("fromInt"),
	HX_CSTRING("toInt"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::__mClass,"__mClass");
};

Class Context3DBlendFactor_Impl__obj::__mClass;

void Context3DBlendFactor_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_"), hx::TCanCast< Context3DBlendFactor_Impl__obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DBlendFactor_Impl__obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
} // end namespace _Context3DBlendFactor
