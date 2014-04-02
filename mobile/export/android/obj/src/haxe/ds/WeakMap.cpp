#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_WeakMap
#include <haxe/ds/WeakMap.h>
#endif
namespace haxe{
namespace ds{

Void WeakMap_obj::__construct()
{
HX_STACK_PUSH("WeakMap::new","/usr/lib/haxe/std/haxe/ds/WeakMap.hx",26);
{
	HX_STACK_LINE(26)
	hx::Throw (HX_CSTRING("Not implemented for this platform"));
}
;
	return null();
}

WeakMap_obj::~WeakMap_obj() { }

Dynamic WeakMap_obj::__CreateEmpty() { return  new WeakMap_obj; }
hx::ObjectPtr< WeakMap_obj > WeakMap_obj::__new()
{  hx::ObjectPtr< WeakMap_obj > result = new WeakMap_obj();
	result->__construct();
	return result;}

Dynamic WeakMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakMap_obj > result = new WeakMap_obj();
	result->__construct();
	return result;}

hx::Object *WeakMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::IMap_obj)) return operator ::IMap_obj *();
	return super::__ToInterface(inType);
}

bool WeakMap_obj::exists( Dynamic key){
	HX_STACK_PUSH("WeakMap::exists","/usr/lib/haxe/std/haxe/ds/WeakMap.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(34)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(WeakMap_obj,exists,return )

Dynamic WeakMap_obj::get( Dynamic key){
	HX_STACK_PUSH("WeakMap::get","/usr/lib/haxe/std/haxe/ds/WeakMap.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(31)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WeakMap_obj,get,return )

Void WeakMap_obj::set( Dynamic key,Dynamic value){
{
		HX_STACK_PUSH("WeakMap::set","/usr/lib/haxe/std/haxe/ds/WeakMap.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(value,"value");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WeakMap_obj,set,(void))


WeakMap_obj::WeakMap_obj()
{
}

void WeakMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakMap);
	HX_MARK_END_CLASS();
}

void WeakMap_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic WeakMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("exists"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakMap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakMap_obj::__mClass,"__mClass");
};

Class WeakMap_obj::__mClass;

void WeakMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.WeakMap"), hx::TCanCast< WeakMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WeakMap_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds
