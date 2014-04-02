#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
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
namespace flash{
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::gl::GLBuffer glBuffer,int numIndices)
{
HX_STACK_PUSH("IndexBuffer3D::new","flash/display3D/IndexBuffer3D.hx",25);
{
	HX_STACK_LINE(26)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(27)
	this->numIndices = numIndices;
}
;
	return null();
}

IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::gl::GLBuffer glBuffer,int numIndices)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(glBuffer,numIndices);
	return result;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void IndexBuffer3D_obj::dispose( ){
{
		HX_STACK_PUSH("IndexBuffer3D::dispose","flash/display3D/IndexBuffer3D.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		::openfl::gl::GL_obj::deleteBuffer(this->glBuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromVector( Array< int > data,int startOffset,int count){
{
		HX_STACK_PUSH("IndexBuffer3D::uploadFromVector","flash/display3D/IndexBuffer3D.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(54)
		::openfl::gl::GL_obj::bindBuffer((int)34963,this->glBuffer);
		HX_STACK_LINE(55)
		::openfl::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(62)
		indices = ::openfl::utils::Int16Array_obj::__new(data,startOffset,count);
		HX_STACK_LINE(64)
		::openfl::gl::GL_obj::bufferData((int)34963,indices,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::flash::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_PUSH("IndexBuffer3D::uploadFromByteArray","flash/display3D/IndexBuffer3D.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(byteArray,"byteArray");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(32)
		int bytesPerIndex = (int)2;		HX_STACK_VAR(bytesPerIndex,"bytesPerIndex");
		HX_STACK_LINE(33)
		::openfl::gl::GL_obj::bindBuffer((int)34963,this->glBuffer);
		HX_STACK_LINE(34)
		int length = (count * bytesPerIndex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(35)
		int offset = (byteArrayOffset + (startOffset * bytesPerIndex));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(36)
		::openfl::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(46)
		indices = ::openfl::utils::Int16Array_obj::__new(byteArray,offset,length);
		HX_STACK_LINE(49)
		::openfl::gl::GL_obj::bufferData((int)34963,indices,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::gl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numIndices"));
	outFields->push(HX_CSTRING("glBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("uploadFromVector"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("numIndices"),
	HX_CSTRING("glBuffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.IndexBuffer3D"), hx::TCanCast< IndexBuffer3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IndexBuffer3D_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
