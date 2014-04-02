#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
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

Void Texture_obj::__construct(::openfl::gl::GLTexture glTexture,bool optimizeForRenderToTexture,int width,int height)
{
HX_STACK_PUSH("Texture::new","flash/display3D/textures/Texture.hx",26);
{
	HX_STACK_LINE(28)
	super::__construct(glTexture,width,height);
	HX_STACK_LINE(31)
	::openfl::gl::GL_obj::bindTexture((int)3553,glTexture);
	HX_STACK_LINE(33)
	if ((optimizeForRenderToTexture)){
		HX_STACK_LINE(35)
		::openfl::gl::GL_obj::pixelStorei((int)37440,(int)1);
		HX_STACK_LINE(36)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
		HX_STACK_LINE(37)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
		HX_STACK_LINE(38)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(39)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
	}
	HX_STACK_LINE(43)
	::openfl::gl::GL_obj::texImage2D((int)3553,(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,null());
}
;
	return null();
}

Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::gl::GLTexture glTexture,bool optimizeForRenderToTexture,int width,int height)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(glTexture,optimizeForRenderToTexture,width,height);
	return result;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > result = new Texture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Texture_obj::uploadFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("Texture::uploadFromByteArray","flash/display3D/textures/Texture.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(miplevel,"miplevel");
{
		HX_STACK_LINE(70)
		::openfl::gl::GL_obj::bindTexture((int)3553,this->glTexture);
		HX_STACK_LINE(72)
		if ((this->optimizeForRenderToTexture)){
			HX_STACK_LINE(74)
			::openfl::gl::GL_obj::pixelStorei((int)37440,(int)1);
			HX_STACK_LINE(75)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(76)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(77)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(78)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(81)
		::openfl::utils::UInt8Array source;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(92)
		source = ::openfl::utils::UInt8Array_obj::__new(data,null(),null());
		HX_STACK_LINE(94)
		::openfl::gl::GL_obj::texSubImage2D((int)3553,miplevel,(int)0,(int)0,this->width,this->height,(int)6408,(int)5121,source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::flash::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("Texture::uploadFromBitmapData","flash/display3D/textures/Texture.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_ARG(miplevel,"miplevel");
{
		struct _Function_1_1{
			inline static ::flash::utils::ByteArray Block( ::flash::display::BitmapData &bitmapData){
				HX_STACK_PUSH("*::closure","flash/display3D/textures/Texture.hx",60);
				{
					HX_STACK_LINE(60)
					::flash::utils::ByteArray data = bitmapData->getPixels(::flash::geom::Rectangle_obj::__new((int)0,(int)0,bitmapData->get_width(),bitmapData->get_height()));		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(60)
					int size = (bitmapData->get_width() * bitmapData->get_height());		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(60)
					int alpha;		HX_STACK_VAR(alpha,"alpha");
					int red;		HX_STACK_VAR(red,"red");
					int green;		HX_STACK_VAR(green,"green");
					int blue;		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(60)
						while(((_g < size))){
							HX_STACK_LINE(60)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(60)
							alpha = data->__get((i * (int)4));
							HX_STACK_LINE(60)
							red = data->__get(((i * (int)4) + (int)1));
							HX_STACK_LINE(60)
							green = data->__get(((i * (int)4) + (int)2));
							HX_STACK_LINE(60)
							blue = data->__get(((i * (int)4) + (int)3));
							HX_STACK_LINE(60)
							hx::__ArrayImplRef(data,(i * (int)4)) = red;
							HX_STACK_LINE(60)
							hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
							HX_STACK_LINE(60)
							hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
							HX_STACK_LINE(60)
							hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
						}
					}
					HX_STACK_LINE(60)
					return data;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		::flash::utils::ByteArray p = _Function_1_1::Block(bitmapData);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(62)
		this->uploadFromByteArray(p,(int)0,miplevel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadCompressedTextureFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_PUSH("Texture::uploadCompressedTextureFromByteArray","flash/display3D/textures/Texture.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(async,"async");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))


Texture_obj::Texture_obj()
{
}

void Texture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Texture);
	HX_MARK_MEMBER_NAME(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Texture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(optimizeForRenderToTexture,"optimizeForRenderToTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Texture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("optimizeForRenderToTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	HX_CSTRING("optimizeForRenderToTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.textures.Texture"), hx::TCanCast< Texture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Texture_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
} // end namespace textures
