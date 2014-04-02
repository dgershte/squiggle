#include <hxcpp.h>

#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace display3D{

Void VertexBuffer3D_obj::__construct(::openfl::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex)
{
HX_STACK_PUSH("VertexBuffer3D::new","flash/display3D/VertexBuffer3D.hx",26);
{
	HX_STACK_LINE(27)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(28)
	this->numVertices = numVertices;
	HX_STACK_LINE(29)
	this->data32PerVertex = data32PerVertex;
}
;
	return null();
}

VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(glBuffer,numVertices,data32PerVertex);
	return result;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void VertexBuffer3D_obj::uploadFromVector( Array< Float > data,int startVertex,int numVertices){
{
		HX_STACK_PUSH("VertexBuffer3D::uploadFromVector","flash/display3D/VertexBuffer3D.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(startVertex,"startVertex");
		HX_STACK_ARG(numVertices,"numVertices");
		HX_STACK_LINE(60)
		int bytesPerVertex = (this->data32PerVertex * (int)4);		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(61)
		::openfl::gl::GL_obj::bindBuffer((int)34962,this->glBuffer);
		HX_STACK_LINE(62)
		int length = (numVertices * this->data32PerVertex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(63)
		int offset = startVertex;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(64)
		::openfl::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(71)
		float32Array = ::openfl::utils::Float32Array_obj::__new(data,offset,length);
		HX_STACK_LINE(73)
		::openfl::gl::GL_obj::bufferData((int)34962,float32Array,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::flash::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_PUSH("VertexBuffer3D::uploadFromByteArray","flash/display3D/VertexBuffer3D.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(byteArray,"byteArray");
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
		HX_STACK_ARG(startOffset,"startOffset");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(39)
		int bytesPerVertex = (this->data32PerVertex * (int)4);		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(40)
		::openfl::gl::GL_obj::bindBuffer((int)34962,this->glBuffer);
		HX_STACK_LINE(41)
		int length = (count * bytesPerVertex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(42)
		int offset = (byteArrayOffset + (startOffset * bytesPerVertex));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(43)
		::openfl::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(53)
		float32Array = ::openfl::utils::Float32Array_obj::__new(byteArray,offset,length);
		HX_STACK_LINE(55)
		::openfl::gl::GL_obj::bufferData((int)34962,float32Array,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_PUSH("VertexBuffer3D::dispose","flash/display3D/VertexBuffer3D.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		::openfl::gl::GL_obj::deleteBuffer(this->glBuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return data32PerVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::gl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("glBuffer"));
	outFields->push(HX_CSTRING("data32PerVertex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromVector"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("dispose"),
	HX_CSTRING("numVertices"),
	HX_CSTRING("glBuffer"),
	HX_CSTRING("data32PerVertex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.VertexBuffer3D"), hx::TCanCast< VertexBuffer3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void VertexBuffer3D_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
