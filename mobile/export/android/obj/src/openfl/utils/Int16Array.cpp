#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_utils_Int16Array
#include <openfl/utils/Int16Array.h>
#endif
namespace openfl{
namespace utils{

Void Int16Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_PUSH("Int16Array::new","openfl/utils/Int16Array.hx",13);
int start = __o_start.Default(0);
{
	HX_STACK_LINE(15)
	this->BYTES_PER_ELEMENT = (int)2;
	HX_STACK_LINE(17)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(19)
		super::__construct((int(::Std_obj::_int(bufferOrArray)) << int((int)1)),null(),null());
		HX_STACK_LINE(20)
		this->length = ::Std_obj::_int(bufferOrArray);
	}
	else{
		HX_STACK_LINE(22)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(24)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(26)
			if (((length != null()))){
				HX_STACK_LINE(26)
				this->length = length;
			}
			else{
				HX_STACK_LINE(30)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(36)
			super::__construct((int(this->length) << int((int)1)),null(),null());
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(42)
				while(((_g1 < _g))){
					HX_STACK_LINE(42)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(45)
					::__hxcpp_memory_set_i16(this->bytes,(int(i) << int((int)1)),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(54)
			super::__construct(bufferOrArray,start,length);
			HX_STACK_LINE(56)
			if (((((int(this->byteLength) & int((int)1))) > (int)0))){
				HX_STACK_LINE(56)
				hx::Throw (HX_CSTRING("Invalid array size"));
			}
			HX_STACK_LINE(62)
			this->length = (int(this->byteLength) >> int((int)1));
			HX_STACK_LINE(64)
			if ((((int(this->length) << int((int)1)) != this->byteLength))){
				HX_STACK_LINE(64)
				hx::Throw (HX_CSTRING("Invalid length multiple"));
			}
		}
	}
}
;
	return null();
}

Int16Array_obj::~Int16Array_obj() { }

Dynamic Int16Array_obj::__CreateEmpty() { return  new Int16Array_obj; }
hx::ObjectPtr< Int16Array_obj > Int16Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Int16Array_obj > result = new Int16Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic Int16Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int16Array_obj > result = new Int16Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Int16Array_obj::__set( int index,int value){
{
		HX_STACK_PUSH("Int16Array::__set","openfl/utils/Int16Array.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(76)
		::__hxcpp_memory_set_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,__set,(void))

int Int16Array_obj::__get( int index){
	HX_STACK_PUSH("Int16Array::__get","openfl/utils/Int16Array.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(75)
	return ::__hxcpp_memory_get_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Int16Array_obj,__get,return )


Int16Array_obj::Int16Array_obj()
{
}

void Int16Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Int16Array);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Int16Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Int16Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int16Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int16Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__set"),
	HX_CSTRING("__get"),
	HX_CSTRING("length"),
	HX_CSTRING("BYTES_PER_ELEMENT"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
};

Class Int16Array_obj::__mClass;

void Int16Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.Int16Array"), hx::TCanCast< Int16Array_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Int16Array_obj::__boot()
{
}

} // end namespace openfl
} // end namespace utils
