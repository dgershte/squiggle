#include <hxcpp.h>

#ifndef INCLUDED_Anim
#include <Anim.h>
#endif

Void Anim_obj::__construct(int x,int y,int w,int h,int frameX,int frameY)
{
HX_STACK_PUSH("Anim::new","BasicTest.hx",75);
{
	HX_STACK_LINE(76)
	this->x = x;
	HX_STACK_LINE(77)
	this->y = y;
	HX_STACK_LINE(78)
	this->w = w;
	HX_STACK_LINE(79)
	this->h = h;
	HX_STACK_LINE(80)
	this->frameX = frameX;
	HX_STACK_LINE(81)
	this->frameY = frameY;
}
;
	return null();
}

Anim_obj::~Anim_obj() { }

Dynamic Anim_obj::__CreateEmpty() { return  new Anim_obj; }
hx::ObjectPtr< Anim_obj > Anim_obj::__new(int x,int y,int w,int h,int frameX,int frameY)
{  hx::ObjectPtr< Anim_obj > result = new Anim_obj();
	result->__construct(x,y,w,h,frameX,frameY);
	return result;}

Dynamic Anim_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Anim_obj > result = new Anim_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Float Anim_obj::getScaleV( ){
	HX_STACK_PUSH("Anim::getScaleV","BasicTest.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return (Float(this->h) / Float((int)256));
}


HX_DEFINE_DYNAMIC_FUNC0(Anim_obj,getScaleV,return )

Float Anim_obj::getScaleU( ){
	HX_STACK_PUSH("Anim::getScaleU","BasicTest.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_LINE(90)
	return (Float(this->w) / Float((int)256));
}


HX_DEFINE_DYNAMIC_FUNC0(Anim_obj,getScaleU,return )

Float Anim_obj::getOffsetV( ){
	HX_STACK_PUSH("Anim::getOffsetV","BasicTest.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return (Float(this->y) / Float((int)256));
}


HX_DEFINE_DYNAMIC_FUNC0(Anim_obj,getOffsetV,return )

Float Anim_obj::getOffsetU( ){
	HX_STACK_PUSH("Anim::getOffsetU","BasicTest.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	return (Float(this->x) / Float((int)256));
}


HX_DEFINE_DYNAMIC_FUNC0(Anim_obj,getOffsetU,return )


Anim_obj::Anim_obj()
{
}

void Anim_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Anim);
	HX_MARK_MEMBER_NAME(frameY,"frameY");
	HX_MARK_MEMBER_NAME(frameX,"frameX");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Anim_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameY,"frameY");
	HX_VISIT_MEMBER_NAME(frameX,"frameX");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Anim_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frameY") ) { return frameY; }
		if (HX_FIELD_EQ(inName,"frameX") ) { return frameX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getScaleV") ) { return getScaleV_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleU") ) { return getScaleU_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOffsetV") ) { return getOffsetV_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffsetU") ) { return getOffsetU_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Anim_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frameY") ) { frameY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameX") ) { frameX=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Anim_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameY"));
	outFields->push(HX_CSTRING("frameX"));
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getScaleV"),
	HX_CSTRING("getScaleU"),
	HX_CSTRING("getOffsetV"),
	HX_CSTRING("getOffsetU"),
	HX_CSTRING("frameY"),
	HX_CSTRING("frameX"),
	HX_CSTRING("h"),
	HX_CSTRING("w"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Anim_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Anim_obj::__mClass,"__mClass");
};

Class Anim_obj::__mClass;

void Anim_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Anim"), hx::TCanCast< Anim_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Anim_obj::__boot()
{
}

