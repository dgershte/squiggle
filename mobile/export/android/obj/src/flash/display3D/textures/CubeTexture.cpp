#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#include <flash/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_utils_UInt8Array
#include <openfl/utils/UInt8Array.h>
#endif
namespace flash{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::openfl::gl::GLTexture glTexture,int size)
{
HX_STACK_PUSH("CubeTexture::new","flash/display3D/textures/CubeTexture.hx",25);
{
	HX_STACK_LINE(27)
	super::__construct(glTexture,size,size);
	HX_STACK_LINE(28)
	this->size = size;
	HX_STACK_LINE(30)
	this->_textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		while(((_g < (int)6))){
			HX_STACK_LINE(31)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(33)
			this->_textures[i] = ::openfl::gl::GL_obj::createTexture();
		}
	}
}
;
	return null();
}

CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::gl::GLTexture glTexture,int size)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(glTexture,size);
	return result;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::openfl::gl::GLTexture CubeTexture_obj::glTextureAt( int index){
	HX_STACK_PUSH("CubeTexture::glTextureAt","flash/display3D/textures/CubeTexture.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(93)
	return this->_textures->__get(index).StaticCast< ::openfl::gl::GLTexture >();
}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

Void CubeTexture_obj::uploadFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("CubeTexture::uploadFromByteArray","flash/display3D/textures/CubeTexture.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(side,"side");
	HX_STACK_ARG(miplevel,"miplevel");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::flash::display::BitmapData data,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("CubeTexture::uploadFromBitmapData","flash/display3D/textures/CubeTexture.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(side,"side");
	HX_STACK_ARG(miplevel,"miplevel");
{
		struct _Function_1_1{
			inline static ::flash::utils::ByteArray Block( ::flash::display::BitmapData &data){
				HX_STACK_PUSH("*::closure","flash/display3D/textures/CubeTexture.hx",47);
				{
					HX_STACK_LINE(47)
					::flash::utils::ByteArray data1 = data->getPixels(::flash::geom::Rectangle_obj::__new((int)0,(int)0,data->get_width(),data->get_height()));		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(47)
					int size = (data->get_width() * data->get_height());		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(47)
					int alpha;		HX_STACK_VAR(alpha,"alpha");
					int red;		HX_STACK_VAR(red,"red");
					int green;		HX_STACK_VAR(green,"green");
					int blue;		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(47)
						while(((_g < size))){
							HX_STACK_LINE(47)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(47)
							alpha = data1->__get((i * (int)4));
							HX_STACK_LINE(47)
							red = data1->__get(((i * (int)4) + (int)1));
							HX_STACK_LINE(47)
							green = data1->__get(((i * (int)4) + (int)2));
							HX_STACK_LINE(47)
							blue = data1->__get(((i * (int)4) + (int)3));
							HX_STACK_LINE(47)
							hx::__ArrayImplRef(data1,(i * (int)4)) = red;
							HX_STACK_LINE(47)
							hx::__ArrayImplRef(data1,((i * (int)4) + (int)1)) = green;
							HX_STACK_LINE(47)
							hx::__ArrayImplRef(data1,((i * (int)4) + (int)2)) = blue;
							HX_STACK_LINE(47)
							hx::__ArrayImplRef(data1,((i * (int)4) + (int)3)) = alpha;
						}
					}
					HX_STACK_LINE(47)
					return data1;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		::flash::utils::ByteArray p = _Function_1_1::Block(data);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(49)
		::openfl::utils::UInt8Array source = null();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(60)
		source = ::openfl::utils::UInt8Array_obj::__new(p,null(),null());
		HX_STACK_LINE(64)
		::openfl::gl::GL_obj::bindTexture((int)34067,this->glTexture);
		HX_STACK_LINE(65)
		switch( (int)(side)){
			case (int)0: {
				HX_STACK_LINE(67)
				::openfl::gl::GL_obj::texImage2D((int)34069,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(69)
				::openfl::gl::GL_obj::texImage2D((int)34070,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(71)
				::openfl::gl::GL_obj::texImage2D((int)34071,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(73)
				::openfl::gl::GL_obj::texImage2D((int)34072,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(75)
				::openfl::gl::GL_obj::texImage2D((int)34073,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(77)
				::openfl::gl::GL_obj::texImage2D((int)34074,miplevel,(int)6408,this->size,this->size,(int)0,(int)6408,(int)5121,source);
			}
			;break;
			default: {
				HX_STACK_LINE(79)
				hx::Throw (HX_CSTRING("unknown side type"));
			}
		}
		HX_STACK_LINE(82)
		::openfl::gl::GL_obj::bindTexture((int)34067,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_PUSH("CubeTexture::uploadCompressedTextureFromByteArray","flash/display3D/textures/CubeTexture.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(async,"async");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(size,"size");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(size,"size");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return glTextureAt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textures"));
	outFields->push(HX_CSTRING("size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("glTextureAt"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	HX_CSTRING("_textures"),
	HX_CSTRING("size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.textures.CubeTexture"), hx::TCanCast< CubeTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubeTexture_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
} // end namespace textures
