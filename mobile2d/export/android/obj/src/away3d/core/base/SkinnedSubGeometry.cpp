#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#include <away3d/core/base/SkinnedSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void SkinnedSubGeometry_obj::__construct(int jointsPerVertex)
{
HX_STACK_PUSH("SkinnedSubGeometry::new","away3d/core/base/SkinnedSubGeometry.hx",45);
{
	HX_STACK_LINE(46)
	this->_jointWeightsBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(47)
	this->_jointIndexBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(48)
	this->_jointWeightsInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Dynamic array = this->_jointWeightsInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(49)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(49)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(49)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(49)
		array;
	}
	HX_STACK_LINE(50)
	this->_jointIndicesInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		Dynamic array = this->_jointIndicesInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(51)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(51)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(51)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(51)
		array;
	}
	HX_STACK_LINE(52)
	this->_jointWeightContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(53)
	this->_jointIndexContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(54)
	super::__construct();
	HX_STACK_LINE(55)
	this->_jointsPerVertex = jointsPerVertex;
	HX_STACK_LINE(56)
	this->_bufferFormat = this->getVertexBufferFormat(this->_jointsPerVertex);
}
;
	return null();
}

SkinnedSubGeometry_obj::~SkinnedSubGeometry_obj() { }

Dynamic SkinnedSubGeometry_obj::__CreateEmpty() { return  new SkinnedSubGeometry_obj; }
hx::ObjectPtr< SkinnedSubGeometry_obj > SkinnedSubGeometry_obj::__new(int jointsPerVertex)
{  hx::ObjectPtr< SkinnedSubGeometry_obj > result = new SkinnedSubGeometry_obj();
	result->__construct(jointsPerVertex);
	return result;}

Dynamic SkinnedSubGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkinnedSubGeometry_obj > result = new SkinnedSubGeometry_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SkinnedSubGeometry_obj::updateJointIndexData( Array< Float > value){
{
		HX_STACK_PUSH("SkinnedSubGeometry::updateJointIndexData","away3d/core/base/SkinnedSubGeometry.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(238)
		this->_jointIndexData = value;
		HX_STACK_LINE(239)
		this->invalidateBuffers(this->_jointIndicesInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateJointIndexData,(void))

Array< Float > SkinnedSubGeometry_obj::get_jointIndexData( ){
	HX_STACK_PUSH("SkinnedSubGeometry::get_jointIndexData","away3d/core/base/SkinnedSubGeometry.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(233)
	return this->_jointIndexData;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_jointIndexData,return )

Void SkinnedSubGeometry_obj::updateJointWeightsData( Array< Float > value){
{
		HX_STACK_PUSH("SkinnedSubGeometry::updateJointWeightsData","away3d/core/base/SkinnedSubGeometry.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(222)
		this->_numCondensedJoints = (int)0;
		HX_STACK_LINE(223)
		this->_condensedIndexLookUp = null();
		HX_STACK_LINE(224)
		this->_condensedJointIndexData = null();
		HX_STACK_LINE(225)
		this->_jointWeightsData = value;
		HX_STACK_LINE(226)
		this->invalidateBuffers(this->_jointWeightsInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateJointWeightsData,(void))

Array< Float > SkinnedSubGeometry_obj::get_jointWeightsData( ){
	HX_STACK_PUSH("SkinnedSubGeometry::get_jointWeightsData","away3d/core/base/SkinnedSubGeometry.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_LINE(216)
	return this->_jointWeightsData;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_jointWeightsData,return )

Void SkinnedSubGeometry_obj::condenseIndexData( ){
{
		HX_STACK_PUSH("SkinnedSubGeometry::condenseIndexData","away3d/core/base/SkinnedSubGeometry.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_LINE(188)
		int len = this->_jointIndexData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(189)
		int oldIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
		HX_STACK_LINE(190)
		int newIndex = (int)0;		HX_STACK_VAR(newIndex,"newIndex");
		HX_STACK_LINE(191)
		::haxe::ds::IntMap dic = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(dic,"dic");
		HX_STACK_LINE(192)
		this->_condensedJointIndexData = ::flash::_Vector::Vector_Impl__obj::_new(len,true);
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			Dynamic array = this->_condensedJointIndexData;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(193)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(193)
			while((((c)++ < len))){
				HX_STACK_LINE(193)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(193)
			array;
		}
		HX_STACK_LINE(194)
		this->_condensedIndexLookUp = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(195)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(196)
		while(((i < len))){
			HX_STACK_LINE(197)
			oldIndex = ::Std_obj::_int(this->_jointIndexData->__get(i));
			HX_STACK_LINE(199)
			if ((!(dic->exists(oldIndex)))){
				HX_STACK_LINE(200)
				dic->set(oldIndex,newIndex);
				HX_STACK_LINE(201)
				this->_condensedIndexLookUp[(newIndex)++] = oldIndex;
				HX_STACK_LINE(202)
				this->_condensedIndexLookUp[(newIndex)++] = (oldIndex + (int)1);
				HX_STACK_LINE(203)
				this->_condensedIndexLookUp[(newIndex)++] = (oldIndex + (int)2);
			}
			HX_STACK_LINE(205)
			this->_condensedJointIndexData[i] = dic->get(oldIndex);
			HX_STACK_LINE(206)
			++(i);
		}
		HX_STACK_LINE(208)
		this->_numCondensedJoints = ::Std_obj::_int((Float(newIndex) / Float((int)3)));
		HX_STACK_LINE(209)
		this->invalidateBuffers(this->_jointIndicesInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,condenseIndexData,(void))

Void SkinnedSubGeometry_obj::dispose( ){
{
		HX_STACK_PUSH("SkinnedSubGeometry::dispose","away3d/core/base/SkinnedSubGeometry.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		this->super::dispose();
		HX_STACK_LINE(180)
		this->disposeVertexBuffers(this->_jointWeightsBuffer);
		HX_STACK_LINE(181)
		this->disposeVertexBuffers(this->_jointIndexBuffer);
	}
return null();
}


::away3d::core::base::ISubGeometry SkinnedSubGeometry_obj::clone( ){
	HX_STACK_PUSH("SkinnedSubGeometry::clone","away3d/core/base/SkinnedSubGeometry.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(161)
	::away3d::core::base::SkinnedSubGeometry clone = ::away3d::core::base::SkinnedSubGeometry_obj::__new(this->_jointsPerVertex);		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(162)
	clone->updateData(::flash::_Vector::Vector_Impl__obj::concat(this->_vertexData,null()));
	HX_STACK_LINE(163)
	clone->updateIndexData(::flash::_Vector::Vector_Impl__obj::concat(this->_indices,null()));
	HX_STACK_LINE(164)
	clone->updateJointIndexData(::flash::_Vector::Vector_Impl__obj::concat(this->_jointIndexData,null()));
	HX_STACK_LINE(165)
	clone->updateJointWeightsData(::flash::_Vector::Vector_Impl__obj::concat(this->_jointWeightsData,null()));
	HX_STACK_LINE(166)
	clone->_autoDeriveVertexNormals = this->_autoDeriveVertexNormals;
	HX_STACK_LINE(167)
	clone->_autoDeriveVertexTangents = this->_autoDeriveVertexTangents;
	HX_STACK_LINE(168)
	clone->_numCondensedJoints = this->_numCondensedJoints;
	HX_STACK_LINE(169)
	clone->_condensedIndexLookUp = this->_condensedIndexLookUp;
	HX_STACK_LINE(170)
	clone->_condensedJointIndexData = this->_condensedJointIndexData;
	HX_STACK_LINE(171)
	return clone;
}


Void SkinnedSubGeometry_obj::uploadData( int contextIndex){
{
		HX_STACK_PUSH("SkinnedSubGeometry::uploadData","away3d/core/base/SkinnedSubGeometry.hx",146);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contextIndex,"contextIndex");
		HX_STACK_LINE(146)
		if (((this->_animatedData != null()))){
			HX_STACK_LINE(148)
			this->_activeBuffer->uploadFromVector(this->_animatedData,(int)0,this->_numVertices);
			HX_STACK_LINE(149)
			this->_vertexDataInvalid[contextIndex] = this->_activeDataInvalid = false;
		}
		else{
			HX_STACK_LINE(152)
			this->super::uploadData(contextIndex);
		}
	}
return null();
}


Void SkinnedSubGeometry_obj::activateJointIndexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkinnedSubGeometry::activateJointIndexBuffer","away3d/core/base/SkinnedSubGeometry.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(132)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(133)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(134)
		if (((bool((this->_jointIndexContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context)) || bool((this->_jointIndexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null()))))){
			HX_STACK_LINE(135)
			this->_jointIndexBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,this->_jointsPerVertex);
			HX_STACK_LINE(136)
			this->_jointIndexContext[contextIndex] = context;
			HX_STACK_LINE(137)
			this->_jointIndicesInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(139)
		if ((this->_jointIndicesInvalid->__get(contextIndex))){
			HX_STACK_LINE(140)
			this->_jointIndexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector((  (((this->_numCondensedJoints > (int)0))) ? Array< Float >(this->_condensedJointIndexData) : Array< Float >(this->_jointIndexData) ),(int)0,::Std_obj::_int((Float(this->_jointIndexData->__Field(HX_CSTRING("length"),true)) / Float(this->_jointsPerVertex))));
			HX_STACK_LINE(141)
			this->_jointIndicesInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(143)
		context->setVertexBufferAt(index,this->_jointIndexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,this->_bufferFormat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkinnedSubGeometry_obj,activateJointIndexBuffer,(void))

Void SkinnedSubGeometry_obj::activateJointWeightsBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkinnedSubGeometry::activateJointWeightsBuffer","away3d/core/base/SkinnedSubGeometry.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(111)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(112)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(113)
		if (((bool((this->_jointWeightContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context)) || bool((this->_jointWeightsBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null()))))){
			HX_STACK_LINE(114)
			this->_jointWeightsBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,this->_jointsPerVertex);
			HX_STACK_LINE(115)
			this->_jointWeightContext[contextIndex] = context;
			HX_STACK_LINE(116)
			this->_jointWeightsInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(118)
		if ((this->_jointWeightsInvalid->__get(contextIndex))){
			HX_STACK_LINE(119)
			this->_jointWeightsBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_jointWeightsData,(int)0,::Std_obj::_int((Float(this->_jointWeightsData->__Field(HX_CSTRING("length"),true)) / Float(this->_jointsPerVertex))));
			HX_STACK_LINE(120)
			this->_jointWeightsInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(122)
		context->setVertexBufferAt(index,this->_jointWeightsBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,this->_bufferFormat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkinnedSubGeometry_obj,activateJointWeightsBuffer,(void))

Void SkinnedSubGeometry_obj::updateAnimatedData( Array< Float > value){
{
		HX_STACK_PUSH("SkinnedSubGeometry::updateAnimatedData","away3d/core/base/SkinnedSubGeometry.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(100)
		this->_animatedData = value;
		HX_STACK_LINE(101)
		this->invalidateBuffers(this->_vertexDataInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateAnimatedData,(void))

Array< Float > SkinnedSubGeometry_obj::get_animatedData( ){
	HX_STACK_PUSH("SkinnedSubGeometry::get_animatedData","away3d/core/base/SkinnedSubGeometry.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	if (((this->_animatedData != null()))){
		HX_STACK_LINE(95)
		return this->_animatedData;
	}
	HX_STACK_LINE(96)
	return ::flash::_Vector::Vector_Impl__obj::concat(this->_vertexData,null());
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_animatedData,return )

int SkinnedSubGeometry_obj::get_numCondensedJoints( ){
	HX_STACK_PUSH("SkinnedSubGeometry::get_numCondensedJoints","away3d/core/base/SkinnedSubGeometry.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_numCondensedJoints;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_numCondensedJoints,return )

Array< int > SkinnedSubGeometry_obj::get_condensedIndexLookUp( ){
	HX_STACK_PUSH("SkinnedSubGeometry::get_condensedIndexLookUp","away3d/core/base/SkinnedSubGeometry.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->_condensedIndexLookUp;
}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_condensedIndexLookUp,return )

::flash::display3D::Context3DVertexBufferFormat SkinnedSubGeometry_obj::getVertexBufferFormat( int size){
	HX_STACK_PUSH("SkinnedSubGeometry::getVertexBufferFormat","away3d/core/base/SkinnedSubGeometry.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(size,"size");
	HX_STACK_LINE(59)
	switch( (int)(size)){
		case (int)1: {
			HX_STACK_LINE(62)
			return ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(64)
			return ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(66)
			return ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(68)
			return ::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3;
		}
		;break;
		default: {
			HX_STACK_LINE(70)
			return null();
		}
	}
	HX_STACK_LINE(59)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,getVertexBufferFormat,return )


SkinnedSubGeometry_obj::SkinnedSubGeometry_obj()
{
}

void SkinnedSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinnedSubGeometry);
	HX_MARK_MEMBER_NAME(_numCondensedJoints,"_numCondensedJoints");
	HX_MARK_MEMBER_NAME(_condensedIndexLookUp,"_condensedIndexLookUp");
	HX_MARK_MEMBER_NAME(_condensedJointIndexData,"_condensedJointIndexData");
	HX_MARK_MEMBER_NAME(_jointsPerVertex,"_jointsPerVertex");
	HX_MARK_MEMBER_NAME(_jointIndexContext,"_jointIndexContext");
	HX_MARK_MEMBER_NAME(_jointWeightContext,"_jointWeightContext");
	HX_MARK_MEMBER_NAME(_jointIndicesInvalid,"_jointIndicesInvalid");
	HX_MARK_MEMBER_NAME(_jointWeightsInvalid,"_jointWeightsInvalid");
	HX_MARK_MEMBER_NAME(_jointIndexBuffer,"_jointIndexBuffer");
	HX_MARK_MEMBER_NAME(_jointWeightsBuffer,"_jointWeightsBuffer");
	HX_MARK_MEMBER_NAME(_animatedData,"_animatedData");
	HX_MARK_MEMBER_NAME(_jointIndexData,"_jointIndexData");
	HX_MARK_MEMBER_NAME(_jointWeightsData,"_jointWeightsData");
	HX_MARK_MEMBER_NAME(_bufferFormat,"_bufferFormat");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinnedSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numCondensedJoints,"_numCondensedJoints");
	HX_VISIT_MEMBER_NAME(_condensedIndexLookUp,"_condensedIndexLookUp");
	HX_VISIT_MEMBER_NAME(_condensedJointIndexData,"_condensedJointIndexData");
	HX_VISIT_MEMBER_NAME(_jointsPerVertex,"_jointsPerVertex");
	HX_VISIT_MEMBER_NAME(_jointIndexContext,"_jointIndexContext");
	HX_VISIT_MEMBER_NAME(_jointWeightContext,"_jointWeightContext");
	HX_VISIT_MEMBER_NAME(_jointIndicesInvalid,"_jointIndicesInvalid");
	HX_VISIT_MEMBER_NAME(_jointWeightsInvalid,"_jointWeightsInvalid");
	HX_VISIT_MEMBER_NAME(_jointIndexBuffer,"_jointIndexBuffer");
	HX_VISIT_MEMBER_NAME(_jointWeightsBuffer,"_jointWeightsBuffer");
	HX_VISIT_MEMBER_NAME(_animatedData,"_animatedData");
	HX_VISIT_MEMBER_NAME(_jointIndexData,"_jointIndexData");
	HX_VISIT_MEMBER_NAME(_jointWeightsData,"_jointWeightsData");
	HX_VISIT_MEMBER_NAME(_bufferFormat,"_bufferFormat");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkinnedSubGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uploadData") ) { return uploadData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"animatedData") ) { return get_animatedData(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_animatedData") ) { return _animatedData; }
		if (HX_FIELD_EQ(inName,"_bufferFormat") ) { return _bufferFormat; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"jointIndexData") ) { return get_jointIndexData(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_jointIndexData") ) { return _jointIndexData; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_animatedData") ) { return get_animatedData_dyn(); }
		if (HX_FIELD_EQ(inName,"_jointsPerVertex") ) { return _jointsPerVertex; }
		if (HX_FIELD_EQ(inName,"jointWeightsData") ) { return get_jointWeightsData(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"condenseIndexData") ) { return condenseIndexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_jointIndexBuffer") ) { return _jointIndexBuffer; }
		if (HX_FIELD_EQ(inName,"_jointWeightsData") ) { return _jointWeightsData; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_jointIndexData") ) { return get_jointIndexData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAnimatedData") ) { return updateAnimatedData_dyn(); }
		if (HX_FIELD_EQ(inName,"_jointIndexContext") ) { return _jointIndexContext; }
		if (HX_FIELD_EQ(inName,"numCondensedJoints") ) { return get_numCondensedJoints(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_numCondensedJoints") ) { return _numCondensedJoints; }
		if (HX_FIELD_EQ(inName,"_jointWeightContext") ) { return _jointWeightContext; }
		if (HX_FIELD_EQ(inName,"_jointWeightsBuffer") ) { return _jointWeightsBuffer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateJointIndexData") ) { return updateJointIndexData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointWeightsData") ) { return get_jointWeightsData_dyn(); }
		if (HX_FIELD_EQ(inName,"_jointIndicesInvalid") ) { return _jointIndicesInvalid; }
		if (HX_FIELD_EQ(inName,"_jointWeightsInvalid") ) { return _jointWeightsInvalid; }
		if (HX_FIELD_EQ(inName,"condensedIndexLookUp") ) { return get_condensedIndexLookUp(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getVertexBufferFormat") ) { return getVertexBufferFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"_condensedIndexLookUp") ) { return _condensedIndexLookUp; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateJointWeightsData") ) { return updateJointWeightsData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numCondensedJoints") ) { return get_numCondensedJoints_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"activateJointIndexBuffer") ) { return activateJointIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_condensedIndexLookUp") ) { return get_condensedIndexLookUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_condensedJointIndexData") ) { return _condensedJointIndexData; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateJointWeightsBuffer") ) { return activateJointWeightsBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkinnedSubGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_animatedData") ) { _animatedData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferFormat") ) { _bufferFormat=inValue.Cast< ::flash::display3D::Context3DVertexBufferFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_jointIndexData") ) { _jointIndexData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_jointsPerVertex") ) { _jointsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_jointIndexBuffer") ) { _jointIndexBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointWeightsData") ) { _jointWeightsData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_jointIndexContext") ) { _jointIndexContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_numCondensedJoints") ) { _numCondensedJoints=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointWeightContext") ) { _jointWeightContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointWeightsBuffer") ) { _jointWeightsBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_jointIndicesInvalid") ) { _jointIndicesInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointWeightsInvalid") ) { _jointWeightsInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_condensedIndexLookUp") ) { _condensedIndexLookUp=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_condensedJointIndexData") ) { _condensedJointIndexData=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinnedSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numCondensedJoints"));
	outFields->push(HX_CSTRING("_condensedIndexLookUp"));
	outFields->push(HX_CSTRING("_condensedJointIndexData"));
	outFields->push(HX_CSTRING("_jointsPerVertex"));
	outFields->push(HX_CSTRING("_jointIndexContext"));
	outFields->push(HX_CSTRING("_jointWeightContext"));
	outFields->push(HX_CSTRING("_jointIndicesInvalid"));
	outFields->push(HX_CSTRING("_jointWeightsInvalid"));
	outFields->push(HX_CSTRING("_jointIndexBuffer"));
	outFields->push(HX_CSTRING("_jointWeightsBuffer"));
	outFields->push(HX_CSTRING("_animatedData"));
	outFields->push(HX_CSTRING("_jointIndexData"));
	outFields->push(HX_CSTRING("_jointWeightsData"));
	outFields->push(HX_CSTRING("_bufferFormat"));
	outFields->push(HX_CSTRING("jointIndexData"));
	outFields->push(HX_CSTRING("jointWeightsData"));
	outFields->push(HX_CSTRING("animatedData"));
	outFields->push(HX_CSTRING("numCondensedJoints"));
	outFields->push(HX_CSTRING("condensedIndexLookUp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateJointIndexData"),
	HX_CSTRING("get_jointIndexData"),
	HX_CSTRING("updateJointWeightsData"),
	HX_CSTRING("get_jointWeightsData"),
	HX_CSTRING("condenseIndexData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("clone"),
	HX_CSTRING("uploadData"),
	HX_CSTRING("activateJointIndexBuffer"),
	HX_CSTRING("activateJointWeightsBuffer"),
	HX_CSTRING("updateAnimatedData"),
	HX_CSTRING("get_animatedData"),
	HX_CSTRING("get_numCondensedJoints"),
	HX_CSTRING("get_condensedIndexLookUp"),
	HX_CSTRING("getVertexBufferFormat"),
	HX_CSTRING("_numCondensedJoints"),
	HX_CSTRING("_condensedIndexLookUp"),
	HX_CSTRING("_condensedJointIndexData"),
	HX_CSTRING("_jointsPerVertex"),
	HX_CSTRING("_jointIndexContext"),
	HX_CSTRING("_jointWeightContext"),
	HX_CSTRING("_jointIndicesInvalid"),
	HX_CSTRING("_jointWeightsInvalid"),
	HX_CSTRING("_jointIndexBuffer"),
	HX_CSTRING("_jointWeightsBuffer"),
	HX_CSTRING("_animatedData"),
	HX_CSTRING("_jointIndexData"),
	HX_CSTRING("_jointWeightsData"),
	HX_CSTRING("_bufferFormat"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkinnedSubGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkinnedSubGeometry_obj::__mClass,"__mClass");
};

Class SkinnedSubGeometry_obj::__mClass;

void SkinnedSubGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.SkinnedSubGeometry"), hx::TCanCast< SkinnedSubGeometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkinnedSubGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
