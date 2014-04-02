#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace away3d{
namespace debug{

Void Debug_obj::__construct()
{
	return null();
}

Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

bool Debug_obj::active;

bool Debug_obj::warningsAsErrors;

Void Debug_obj::clear( ){
{
		HX_STACK_PUSH("Debug::clear","away3d/debug/Debug.hx",13);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clear,(void))

Void Debug_obj::delimiter( ){
{
		HX_STACK_PUSH("Debug::delimiter","away3d/debug/Debug.hx",16);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,delimiter,(void))

Void Debug_obj::trace( Dynamic message){
{
		HX_STACK_PUSH("Debug::trace","away3d/debug/Debug.hx",19);
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(19)
		if ((::away3d::debug::Debug_obj::active)){
			HX_STACK_LINE(20)
			::haxe::Log_obj::trace(message,hx::SourceInfo(HX_CSTRING("Debug.hx"),20,HX_CSTRING("away3d.debug.Debug"),HX_CSTRING("trace")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,trace,(void))

Void Debug_obj::warning( Dynamic message){
{
		HX_STACK_PUSH("Debug::warning","away3d/debug/Debug.hx",23);
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(24)
		if ((::away3d::debug::Debug_obj::warningsAsErrors)){
			HX_STACK_LINE(25)
			::away3d::debug::Debug_obj::error(message);
			HX_STACK_LINE(26)
			return null();
		}
		HX_STACK_LINE(28)
		::haxe::Log_obj::trace((HX_CSTRING("WARNING: ") + ::Std_obj::string(message)),hx::SourceInfo(HX_CSTRING("Debug.hx"),28,HX_CSTRING("away3d.debug.Debug"),HX_CSTRING("warning")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,warning,(void))

Void Debug_obj::error( Dynamic message){
{
		HX_STACK_PUSH("Debug::error","away3d/debug/Debug.hx",31);
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(32)
		::haxe::Log_obj::trace((HX_CSTRING("ERROR: ") + ::Std_obj::string(message)),hx::SourceInfo(HX_CSTRING("Debug.hx"),32,HX_CSTRING("away3d.debug.Debug"),HX_CSTRING("error")));
		HX_STACK_LINE(33)
		hx::Throw (::flash::errors::Error_obj::__new(message,null()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,error,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { return warning_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimiter") ) { return delimiter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"warningsAsErrors") ) { return warningsAsErrors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"warningsAsErrors") ) { warningsAsErrors=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("warningsAsErrors"),
	HX_CSTRING("clear"),
	HX_CSTRING("delimiter"),
	HX_CSTRING("trace"),
	HX_CSTRING("warning"),
	HX_CSTRING("error"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::active,"active");
	HX_MARK_MEMBER_NAME(Debug_obj::warningsAsErrors,"warningsAsErrors");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::active,"active");
	HX_VISIT_MEMBER_NAME(Debug_obj::warningsAsErrors,"warningsAsErrors");
};

Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.debug.Debug"), hx::TCanCast< Debug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Debug_obj::__boot()
{
	active= false;
	warningsAsErrors= false;
}

} // end namespace away3d
} // end namespace debug
