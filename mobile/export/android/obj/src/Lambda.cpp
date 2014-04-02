#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hx::ObjectPtr< Lambda_obj > Lambda_obj::__new()
{  hx::ObjectPtr< Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

bool Lambda_obj::has( Dynamic it,Dynamic elt){
	HX_STACK_PUSH("Lambda::has","/usr/lib/haxe/std/Lambda.hx",98);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(elt,"elt");
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic x = __it->next();
		if (((x == elt))){
			HX_STACK_LINE(101)
			return true;
		}
;
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,has,return )

bool Lambda_obj::foreach( Dynamic it,Dynamic f){
	HX_STACK_PUSH("Lambda::foreach","/usr/lib/haxe/std/Lambda.hx",134);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(135)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic x = __it->next();
		if ((!(f(x).Cast< bool >()))){
			HX_STACK_LINE(137)
			return false;
		}
;
	}
	HX_STACK_LINE(138)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,foreach,return )

int Lambda_obj::indexOf( Dynamic it,Dynamic v){
	HX_STACK_PUSH("Lambda::indexOf","/usr/lib/haxe/std/Lambda.hx",217);
	HX_STACK_ARG(it,"it");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic v2 = __it->next();
		{
			HX_STACK_LINE(220)
			if (((v == v2))){
				HX_STACK_LINE(221)
				return i;
			}
			HX_STACK_LINE(222)
			(i)++;
		}
;
	}
	HX_STACK_LINE(224)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,indexOf,return )


Lambda_obj::Lambda_obj()
{
}

void Lambda_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lambda);
	HX_MARK_END_CLASS();
}

void Lambda_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Lambda_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lambda_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lambda_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("has"),
	HX_CSTRING("foreach"),
	HX_CSTRING("indexOf"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

Class Lambda_obj::__mClass;

void Lambda_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lambda"), hx::TCanCast< Lambda_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lambda_obj::__boot()
{
}

