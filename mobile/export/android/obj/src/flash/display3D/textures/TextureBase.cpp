#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
namespace flash{
namespace display3D{
namespace textures{

Void TextureBase_obj::__construct(::openfl::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_PUSH("TextureBase::new","flash/display3D/textures/TextureBase.hx",22);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(23)
	super::__construct(null());
	HX_STACK_LINE(24)
	this->width = width;
	HX_STACK_LINE(25)
	this->height = height;
	HX_STACK_LINE(26)
	this->glTexture = glTexture;
}
;
	return null();
}

TextureBase_obj::~TextureBase_obj() { }

Dynamic TextureBase_obj::__CreateEmpty() { return  new TextureBase_obj; }
hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new(::openfl::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< TextureBase_obj > result = new TextureBase_obj();
	result->__construct(glTexture,__o_width,__o_height);
	return result;}

Dynamic TextureBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureBase_obj > result = new TextureBase_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void TextureBase_obj::dispose( ){
{
		HX_STACK_PUSH("TextureBase::dispose","flash/display3D/textures/TextureBase.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		::openfl::gl::GL_obj::deleteTexture(this->glTexture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))


TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(glTexture,"glTexture");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glTexture,"glTexture");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TextureBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { return glTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { glTexture=inValue.Cast< ::openfl::gl::GLTexture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glTexture"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("glTexture"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
};

Class TextureBase_obj::__mClass;

void TextureBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.textures.TextureBase"), hx::TCanCast< TextureBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureBase_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
} // end namespace textures
