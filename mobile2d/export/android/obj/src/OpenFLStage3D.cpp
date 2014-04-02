#include <hxcpp.h>

#ifndef INCLUDED_OpenFLStage3D
#include <OpenFLStage3D.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_Stage3D
#include <flash/display/Stage3D.h>
#endif
#ifndef INCLUDED_flash_display3D_AGLSLContext3D
#include <flash/display3D/AGLSLContext3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif

Void OpenFLStage3D_obj::__construct()
{
	return null();
}

OpenFLStage3D_obj::~OpenFLStage3D_obj() { }

Dynamic OpenFLStage3D_obj::__CreateEmpty() { return  new OpenFLStage3D_obj; }
hx::ObjectPtr< OpenFLStage3D_obj > OpenFLStage3D_obj::__new()
{  hx::ObjectPtr< OpenFLStage3D_obj > result = new OpenFLStage3D_obj();
	result->__construct();
	return result;}

Dynamic OpenFLStage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenFLStage3D_obj > result = new OpenFLStage3D_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > OpenFLStage3D_obj::stage3Ds;

Void OpenFLStage3D_obj::requestAGLSLContext3D( ::flash::display::Stage3D stage3D,::String __o_context3DRenderMode){
::String context3DRenderMode = __o_context3DRenderMode.Default(HX_CSTRING("auto"));
	HX_STACK_PUSH("OpenFLStage3D::requestAGLSLContext3D","OpenFLStage3D.hx",33);
	HX_STACK_ARG(stage3D,"stage3D");
	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode");
{
		HX_STACK_LINE(37)
		stage3D->context3D = ::flash::display3D::AGLSLContext3D_obj::__new();
		HX_STACK_LINE(38)
		stage3D->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::CONTEXT3D_CREATE,null(),null()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFLStage3D_obj,requestAGLSLContext3D,(void))

::flash::display::Stage3D OpenFLStage3D_obj::getStage3D( ::flash::display::Stage stage,int index){
	HX_STACK_PUSH("OpenFLStage3D::getStage3D","OpenFLStage3D.hx",49);
	HX_STACK_ARG(stage,"stage");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(49)
	if (((::OpenFLStage3D_obj::stage3Ds->__Field(HX_CSTRING("length"),true) > index))){
		HX_STACK_LINE(53)
		return ::OpenFLStage3D_obj::stage3Ds->__get(index).StaticCast< ::flash::display::Stage3D >();
	}
	else{
		HX_STACK_LINE(56)
		if (((index > (int)0))){
			HX_STACK_LINE(56)
			hx::Throw (HX_CSTRING("Only 1 Stage3D supported for now"));
		}
		HX_STACK_LINE(59)
		::flash::display::Stage3D stage3D = ::flash::display::Stage3D_obj::__new();		HX_STACK_VAR(stage3D,"stage3D");
		HX_STACK_LINE(60)
		::OpenFLStage3D_obj::stage3Ds[index] = stage3D;
		HX_STACK_LINE(61)
		return stage3D;
	}
	HX_STACK_LINE(49)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFLStage3D_obj,getStage3D,return )

Void OpenFLStage3D_obj::setRenderCallback( ::flash::display3D::Context3D context3D,Dynamic func){
{
		HX_STACK_PUSH("OpenFLStage3D::setRenderCallback","OpenFLStage3D.hx",69);
		HX_STACK_ARG(context3D,"context3D");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(69)
		context3D->setRenderMethod(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFLStage3D_obj,setRenderCallback,(void))

Void OpenFLStage3D_obj::removeRenderCallback( ::flash::display3D::Context3D context3D,Dynamic func){
{
		HX_STACK_PUSH("OpenFLStage3D::removeRenderCallback","OpenFLStage3D.hx",80);
		HX_STACK_ARG(context3D,"context3D");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(80)
		context3D->removeRenderMethod(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenFLStage3D_obj,removeRenderCallback,(void))


OpenFLStage3D_obj::OpenFLStage3D_obj()
{
}

void OpenFLStage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenFLStage3D);
	HX_MARK_END_CLASS();
}

void OpenFLStage3D_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic OpenFLStage3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getStage3D") ) { return getStage3D_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setRenderCallback") ) { return setRenderCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeRenderCallback") ) { return removeRenderCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"requestAGLSLContext3D") ) { return requestAGLSLContext3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenFLStage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenFLStage3D_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stage3Ds"),
	HX_CSTRING("requestAGLSLContext3D"),
	HX_CSTRING("getStage3D"),
	HX_CSTRING("setRenderCallback"),
	HX_CSTRING("removeRenderCallback"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenFLStage3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenFLStage3D_obj::stage3Ds,"stage3Ds");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenFLStage3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenFLStage3D_obj::stage3Ds,"stage3Ds");
};

Class OpenFLStage3D_obj::__mClass;

void OpenFLStage3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("OpenFLStage3D"), hx::TCanCast< OpenFLStage3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OpenFLStage3D_obj::__boot()
{
	stage3Ds= Array_obj< ::Dynamic >::__new();
}

