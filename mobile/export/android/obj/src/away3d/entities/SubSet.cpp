#include <hxcpp.h>

#ifndef INCLUDED_away3d_entities_SubSet
#include <away3d/entities/SubSet.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
namespace away3d{
namespace entities{

Void SubSet_obj::__construct()
{
HX_STACK_PUSH("SubSet::new","away3d/entities/SegmentSet.hx",594);
{
}
;
	return null();
}

SubSet_obj::~SubSet_obj() { }

Dynamic SubSet_obj::__CreateEmpty() { return  new SubSet_obj; }
hx::ObjectPtr< SubSet_obj > SubSet_obj::__new()
{  hx::ObjectPtr< SubSet_obj > result = new SubSet_obj();
	result->__construct();
	return result;}

Dynamic SubSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubSet_obj > result = new SubSet_obj();
	result->__construct();
	return result;}

Void SubSet_obj::dispose( ){
{
		HX_STACK_PUSH("SubSet::dispose","away3d/entities/SegmentSet.hx",596);
		HX_STACK_THIS(this);
		HX_STACK_LINE(597)
		this->vertices = null();
		HX_STACK_LINE(598)
		if (((this->vertexBuffer != null()))){
			HX_STACK_LINE(598)
			this->vertexBuffer->dispose();
		}
		HX_STACK_LINE(599)
		if (((this->indexBuffer != null()))){
			HX_STACK_LINE(599)
			this->indexBuffer->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubSet_obj,dispose,(void))


SubSet_obj::SubSet_obj()
{
}

void SubSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubSet);
	HX_MARK_MEMBER_NAME(lineCount,"lineCount");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(indexContext3D,"indexContext3D");
	HX_MARK_MEMBER_NAME(vertexContext3D,"vertexContext3D");
	HX_MARK_MEMBER_NAME(indexBufferDirty,"indexBufferDirty");
	HX_MARK_MEMBER_NAME(vertexBufferDirty,"vertexBufferDirty");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_END_CLASS();
}

void SubSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lineCount,"lineCount");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(indexContext3D,"indexContext3D");
	HX_VISIT_MEMBER_NAME(vertexContext3D,"vertexContext3D");
	HX_VISIT_MEMBER_NAME(indexBufferDirty,"indexBufferDirty");
	HX_VISIT_MEMBER_NAME(vertexBufferDirty,"vertexBufferDirty");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
}

Dynamic SubSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { return lineCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return vertexBuffer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexContext3D") ) { return indexContext3D; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexContext3D") ) { return vertexContext3D; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferDirty") ) { return indexBufferDirty; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexBufferDirty") ) { return vertexBufferDirty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { lineCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::flash::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast< ::flash::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexContext3D") ) { indexContext3D=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexContext3D") ) { vertexContext3D=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferDirty") ) { indexBufferDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexBufferDirty") ) { vertexBufferDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lineCount"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("vertexBuffer"));
	outFields->push(HX_CSTRING("indexContext3D"));
	outFields->push(HX_CSTRING("vertexContext3D"));
	outFields->push(HX_CSTRING("indexBufferDirty"));
	outFields->push(HX_CSTRING("vertexBufferDirty"));
	outFields->push(HX_CSTRING("numIndices"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("vertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("lineCount"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("vertexBuffer"),
	HX_CSTRING("indexContext3D"),
	HX_CSTRING("vertexContext3D"),
	HX_CSTRING("indexBufferDirty"),
	HX_CSTRING("vertexBufferDirty"),
	HX_CSTRING("numIndices"),
	HX_CSTRING("indices"),
	HX_CSTRING("numVertices"),
	HX_CSTRING("vertices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubSet_obj::__mClass,"__mClass");
};

Class SubSet_obj::__mClass;

void SubSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.entities.SubSet"), hx::TCanCast< SubSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SubSet_obj::__boot()
{
}

} // end namespace away3d
} // end namespace entities
