#include <hxcpp.h>

#ifndef INCLUDED_flash_display_FrameLabel
#include <flash/display/FrameLabel.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace flash{
namespace display{

Void FrameLabel_obj::__construct(::String name,int frame)
{
HX_STACK_PUSH("FrameLabel::new","flash/display/FrameLabel.hx",17);
{
	HX_STACK_LINE(19)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->__name = name;
	HX_STACK_LINE(22)
	this->__frame = frame;
}
;
	return null();
}

FrameLabel_obj::~FrameLabel_obj() { }

Dynamic FrameLabel_obj::__CreateEmpty() { return  new FrameLabel_obj; }
hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__new(::String name,int frame)
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct(name,frame);
	return result;}

Dynamic FrameLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String FrameLabel_obj::get_name( ){
	HX_STACK_PUSH("FrameLabel::get_name","flash/display/FrameLabel.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->__name;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_name,return )

int FrameLabel_obj::get_frame( ){
	HX_STACK_PUSH("FrameLabel::get_frame","flash/display/FrameLabel.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->__frame;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_frame,return )


FrameLabel_obj::FrameLabel_obj()
{
}

void FrameLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameLabel);
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__frame,"__frame");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FrameLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__frame,"__frame");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FrameLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp ? get_name() : name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp ? get_frame() : frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { return __frame; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { __frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__name"));
	outFields->push(HX_CSTRING("__frame"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("frame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_name"),
	HX_CSTRING("get_frame"),
	HX_CSTRING("__name"),
	HX_CSTRING("__frame"),
	HX_CSTRING("name"),
	HX_CSTRING("frame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

Class FrameLabel_obj::__mClass;

void FrameLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.FrameLabel"), hx::TCanCast< FrameLabel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FrameLabel_obj::__boot()
{
}

} // end namespace flash
} // end namespace display
