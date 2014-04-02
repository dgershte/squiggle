#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#include <away3d/animators/data/ParticleAnimationData.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace animators{
namespace data{

Void AnimationSubGeometry_obj::__construct()
{
HX_STACK_PUSH("AnimationSubGeometry::new","away3d/animators/data/AnimationSubGeometry.hx",28);
{
	HX_STACK_LINE(29)
	this->_vertexBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(30)
	this->_bufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(31)
	this->_bufferDirty = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(32)
	this->numProcessedVertices = (int)0;
	HX_STACK_LINE(33)
	this->previousTime = ::Math_obj::NEGATIVE_INFINITY;
	HX_STACK_LINE(34)
	this->animationParticles = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(35)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(36)
	while(((i < (int)8))){
		HX_STACK_LINE(37)
		this->_bufferDirty[i] = true;
		HX_STACK_LINE(38)
		(i)++;
	}
}
;
	return null();
}

AnimationSubGeometry_obj::~AnimationSubGeometry_obj() { }

Dynamic AnimationSubGeometry_obj::__CreateEmpty() { return  new AnimationSubGeometry_obj; }
hx::ObjectPtr< AnimationSubGeometry_obj > AnimationSubGeometry_obj::__new()
{  hx::ObjectPtr< AnimationSubGeometry_obj > result = new AnimationSubGeometry_obj();
	result->__construct();
	return result;}

Dynamic AnimationSubGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationSubGeometry_obj > result = new AnimationSubGeometry_obj();
	result->__construct();
	return result;}

int AnimationSubGeometry_obj::get_totalLenOfOneVertex( ){
	HX_STACK_PUSH("AnimationSubGeometry::get_totalLenOfOneVertex","away3d/animators/data/AnimationSubGeometry.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->_totalLenOfOneVertex;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_totalLenOfOneVertex,return )

int AnimationSubGeometry_obj::get_numVertices( ){
	HX_STACK_PUSH("AnimationSubGeometry::get_numVertices","away3d/animators/data/AnimationSubGeometry.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return this->_numVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_numVertices,return )

Array< Float > AnimationSubGeometry_obj::get_vertexData( ){
	HX_STACK_PUSH("AnimationSubGeometry::get_vertexData","away3d/animators/data/AnimationSubGeometry.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	return this->_vertexData;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_vertexData,return )

Void AnimationSubGeometry_obj::invalidateBuffer( ){
{
		HX_STACK_PUSH("AnimationSubGeometry::invalidateBuffer","away3d/animators/data/AnimationSubGeometry.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(74)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(75)
		while(((i < (int)8))){
			HX_STACK_LINE(76)
			this->_bufferDirty[i] = true;
			HX_STACK_LINE(77)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,invalidateBuffer,(void))

Void AnimationSubGeometry_obj::dispose( ){
{
		HX_STACK_PUSH("AnimationSubGeometry::dispose","away3d/animators/data/AnimationSubGeometry.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(65)
		while(((this->_vertexBuffer->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(67)
			::flash::display3D::VertexBuffer3D vertexBuffer = this->_vertexBuffer->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
			HX_STACK_LINE(68)
			if (((vertexBuffer != null()))){
				HX_STACK_LINE(68)
				vertexBuffer->dispose();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,dispose,(void))

Void AnimationSubGeometry_obj::activateVertexBuffer( int index,int bufferOffset,::away3d::core::managers::Stage3DProxy stage3DProxy,::flash::display3D::Context3DVertexBufferFormat format){
{
		HX_STACK_PUSH("AnimationSubGeometry::activateVertexBuffer","away3d/animators/data/AnimationSubGeometry.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(bufferOffset,"bufferOffset");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(format,"format");
		HX_STACK_LINE(50)
		int contextIndex = stage3DProxy->get_stage3DIndex();		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(51)
		::flash::display3D::Context3D context = stage3DProxy->get_context3D();		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(52)
		::flash::display3D::VertexBuffer3D buffer = this->_vertexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(53)
		if (((bool((buffer == null())) || bool((this->_bufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(54)
			buffer = this->_vertexBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,this->_totalLenOfOneVertex);
			HX_STACK_LINE(55)
			this->_bufferContext[contextIndex] = context;
			HX_STACK_LINE(56)
			this->_bufferDirty[contextIndex] = true;
		}
		HX_STACK_LINE(58)
		if ((this->_bufferDirty->__get(contextIndex))){
			HX_STACK_LINE(59)
			buffer->uploadFromVector(this->_vertexData,(int)0,this->_numVertices);
			HX_STACK_LINE(60)
			this->_bufferDirty[contextIndex] = false;
		}
		HX_STACK_LINE(62)
		context->setVertexBufferAt(index,buffer,bufferOffset,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AnimationSubGeometry_obj,activateVertexBuffer,(void))

Void AnimationSubGeometry_obj::createVertexData( int numVertices,int totalLenOfOneVertex){
{
		HX_STACK_PUSH("AnimationSubGeometry::createVertexData","away3d/animators/data/AnimationSubGeometry.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(numVertices,"numVertices");
		HX_STACK_ARG(totalLenOfOneVertex,"totalLenOfOneVertex");
		HX_STACK_LINE(43)
		this->_numVertices = numVertices;
		HX_STACK_LINE(44)
		this->_totalLenOfOneVertex = totalLenOfOneVertex;
		HX_STACK_LINE(45)
		this->_vertexData = ::flash::_Vector::Vector_Impl__obj::_new((numVertices * totalLenOfOneVertex),true);
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Dynamic array = this->_vertexData;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(46)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(46)
			while((((c)++ < (numVertices * totalLenOfOneVertex)))){
				HX_STACK_LINE(46)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(46)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationSubGeometry_obj,createVertexData,(void))


AnimationSubGeometry_obj::AnimationSubGeometry_obj()
{
}

void AnimationSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationSubGeometry);
	HX_MARK_MEMBER_NAME(animationParticles,"animationParticles");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	HX_MARK_MEMBER_NAME(numProcessedVertices,"numProcessedVertices");
	HX_MARK_MEMBER_NAME(_totalLenOfOneVertex,"_totalLenOfOneVertex");
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	HX_MARK_MEMBER_NAME(_bufferDirty,"_bufferDirty");
	HX_MARK_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_END_CLASS();
}

void AnimationSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationParticles,"animationParticles");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	HX_VISIT_MEMBER_NAME(numProcessedVertices,"numProcessedVertices");
	HX_VISIT_MEMBER_NAME(_totalLenOfOneVertex,"_totalLenOfOneVertex");
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	HX_VISIT_MEMBER_NAME(_bufferDirty,"_bufferDirty");
	HX_VISIT_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
}

Dynamic AnimationSubGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { return get_vertexData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return _vertexData; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return _numVertices; }
		if (HX_FIELD_EQ(inName,"_bufferDirty") ) { return _bufferDirty; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { return _bufferContext; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateBuffer") ) { return invalidateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createVertexData") ) { return createVertexData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationParticles") ) { return animationParticles; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"totalLenOfOneVertex") ) { return get_totalLenOfOneVertex(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return activateVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"numProcessedVertices") ) { return numProcessedVertices; }
		if (HX_FIELD_EQ(inName,"_totalLenOfOneVertex") ) { return _totalLenOfOneVertex; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_totalLenOfOneVertex") ) { return get_totalLenOfOneVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationSubGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferDirty") ) { _bufferDirty=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { _bufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationParticles") ) { animationParticles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"numProcessedVertices") ) { numProcessedVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalLenOfOneVertex") ) { _totalLenOfOneVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animationParticles"));
	outFields->push(HX_CSTRING("previousTime"));
	outFields->push(HX_CSTRING("numProcessedVertices"));
	outFields->push(HX_CSTRING("_totalLenOfOneVertex"));
	outFields->push(HX_CSTRING("_numVertices"));
	outFields->push(HX_CSTRING("_bufferDirty"));
	outFields->push(HX_CSTRING("_bufferContext"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_vertexData"));
	outFields->push(HX_CSTRING("totalLenOfOneVertex"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("vertexData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_totalLenOfOneVertex"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("invalidateBuffer"),
	HX_CSTRING("dispose"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("createVertexData"),
	HX_CSTRING("animationParticles"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("numProcessedVertices"),
	HX_CSTRING("_totalLenOfOneVertex"),
	HX_CSTRING("_numVertices"),
	HX_CSTRING("_bufferDirty"),
	HX_CSTRING("_bufferContext"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_vertexData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationSubGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationSubGeometry_obj::__mClass,"__mClass");
};

Class AnimationSubGeometry_obj::__mClass;

void AnimationSubGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.data.AnimationSubGeometry"), hx::TCanCast< AnimationSubGeometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationSubGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
