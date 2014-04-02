#include <hxcpp.h>

#ifndef INCLUDED_Anim
#include <Anim.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TextureParser
#include <TextureParser.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void TextureParser_obj::__construct()
{
	return null();
}

TextureParser_obj::~TextureParser_obj() { }

Dynamic TextureParser_obj::__CreateEmpty() { return  new TextureParser_obj; }
hx::ObjectPtr< TextureParser_obj > TextureParser_obj::__new()
{  hx::ObjectPtr< TextureParser_obj > result = new TextureParser_obj();
	result->__construct();
	return result;}

Dynamic TextureParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureParser_obj > result = new TextureParser_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > TextureParser_obj::parse( ::String xmlname){
	HX_STACK_PUSH("TextureParser::parse","BasicTest.hx",101);
	HX_STACK_ARG(xmlname,"xmlname");
	HX_STACK_LINE(102)
	::Xml xml = ::Xml_obj::parse(::openfl::Assets_obj::getText(xmlname));		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(103)
	::haxe::xml::Fast elem = ::haxe::xml::Fast_obj::__new(xml->firstElement());		HX_STACK_VAR(elem,"elem");
	HX_STACK_LINE(104)
	::haxe::xml::Fast e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(105)
	Array< ::Dynamic > anims = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(anims,"anims");
	HX_STACK_LINE(106)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(elem->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e1 = __it->next();
		{
			HX_STACK_LINE(107)
			::String str = e1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(108)
			int x = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(109)
			int y = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(110)
			int w = (::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("width"))) + (int)1);		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(111)
			int h = (::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("height"))) + (int)1);		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(112)
			int frameX = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("frameX")));		HX_STACK_VAR(frameX,"frameX");
			HX_STACK_LINE(113)
			int frameY = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("frameY")));		HX_STACK_VAR(frameY,"frameY");
			HX_STACK_LINE(114)
			anims->__Field(HX_CSTRING("push"),true)(::Anim_obj::__new(x,y,w,h,frameX,frameY));
		}
;
	}
	HX_STACK_LINE(116)
	return anims;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureParser_obj,parse,return )


TextureParser_obj::TextureParser_obj()
{
}

void TextureParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureParser);
	HX_MARK_END_CLASS();
}

void TextureParser_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic TextureParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureParser_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureParser_obj::__mClass,"__mClass");
};

Class TextureParser_obj::__mClass;

void TextureParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TextureParser"), hx::TCanCast< TextureParser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureParser_obj::__boot()
{
}

