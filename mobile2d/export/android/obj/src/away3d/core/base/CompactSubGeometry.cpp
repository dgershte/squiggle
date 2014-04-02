#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
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
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void CompactSubGeometry_obj::__construct()
{
HX_STACK_PUSH("CompactSubGeometry::new","away3d/core/base/CompactSubGeometry.hx",29);
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->_vertexDataInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		Dynamic array = this->_vertexDataInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(32)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(32)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(32)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(32)
		array;
	}
	HX_STACK_LINE(33)
	this->_vertexBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(34)
	this->_bufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(35)
	this->_autoDeriveVertexNormals = false;
	HX_STACK_LINE(36)
	this->_autoDeriveVertexTangents = false;
}
;
	return null();
}

CompactSubGeometry_obj::~CompactSubGeometry_obj() { }

Dynamic CompactSubGeometry_obj::__CreateEmpty() { return  new CompactSubGeometry_obj; }
hx::ObjectPtr< CompactSubGeometry_obj > CompactSubGeometry_obj::__new()
{  hx::ObjectPtr< CompactSubGeometry_obj > result = new CompactSubGeometry_obj();
	result->__construct();
	return result;}

Dynamic CompactSubGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompactSubGeometry_obj > result = new CompactSubGeometry_obj();
	result->__construct();
	return result;}

hx::Object *CompactSubGeometry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::base::ISubGeometry_obj)) return operator ::away3d::core::base::ISubGeometry_obj *();
	return super::__ToInterface(inType);
}

Void CompactSubGeometry_obj::fromVectors( Array< Float > verts,Array< Float > uvs,Array< Float > normals,Array< Float > tangents){
{
		HX_STACK_PUSH("CompactSubGeometry::fromVectors","away3d/core/base/CompactSubGeometry.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_ARG(verts,"verts");
		HX_STACK_ARG(uvs,"uvs");
		HX_STACK_ARG(normals,"normals");
		HX_STACK_ARG(tangents,"tangents");
		HX_STACK_LINE(302)
		int vertLen = ::Std_obj::_int(((Float(verts->__Field(HX_CSTRING("length"),true)) / Float((int)3)) * (int)13));		HX_STACK_VAR(vertLen,"vertLen");
		HX_STACK_LINE(303)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(304)
		int v = (int)0;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(305)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(306)
		int t = (int)0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(307)
		int u = (int)0;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(308)
		Array< Float > data = ::flash::_Vector::Vector_Impl__obj::_new(vertLen,true);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(309)
		while(((index < vertLen))){
			HX_STACK_LINE(310)
			data[(index)++] = verts->__get((v)++);
			HX_STACK_LINE(311)
			data[(index)++] = verts->__get((v)++);
			HX_STACK_LINE(312)
			data[(index)++] = verts->__get((v)++);
			HX_STACK_LINE(313)
			if (((bool((normals != null())) && bool((normals->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(314)
				data[(index)++] = normals->__get((n)++);
				HX_STACK_LINE(315)
				data[(index)++] = normals->__get((n)++);
				HX_STACK_LINE(316)
				data[(index)++] = normals->__get((n)++);
			}
			else{
				HX_STACK_LINE(320)
				data[(index)++] = (int)0;
				HX_STACK_LINE(321)
				data[(index)++] = (int)0;
				HX_STACK_LINE(322)
				data[(index)++] = (int)0;
			}
			HX_STACK_LINE(325)
			if (((bool((tangents != null())) && bool((tangents->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(326)
				data[(index)++] = tangents->__get((t)++);
				HX_STACK_LINE(327)
				data[(index)++] = tangents->__get((t)++);
				HX_STACK_LINE(328)
				data[(index)++] = tangents->__get((t)++);
			}
			else{
				HX_STACK_LINE(332)
				data[(index)++] = (int)0;
				HX_STACK_LINE(333)
				data[(index)++] = (int)0;
				HX_STACK_LINE(334)
				data[(index)++] = (int)0;
			}
			HX_STACK_LINE(337)
			if (((bool((uvs != null())) && bool((uvs->__Field(HX_CSTRING("length"),true) > (int)0))))){
				HX_STACK_LINE(338)
				data[(index)++] = uvs->__get(u);
				HX_STACK_LINE(339)
				data[(index)++] = uvs->__get((u + (int)1));
				HX_STACK_LINE(341)
				data[(index)++] = uvs->__get((u)++);
				HX_STACK_LINE(342)
				data[(index)++] = uvs->__get((u)++);
			}
			else{
				HX_STACK_LINE(346)
				data[(index)++] = (int)0;
				HX_STACK_LINE(347)
				data[(index)++] = (int)0;
				HX_STACK_LINE(348)
				data[(index)++] = (int)0;
				HX_STACK_LINE(349)
				data[(index)++] = (int)0;
			}
		}
		HX_STACK_LINE(354)
		this->set_autoDeriveVertexNormals(!(((bool((normals != null())) && bool((normals->__Field(HX_CSTRING("length"),true) > (int)0))))));
		HX_STACK_LINE(355)
		this->set_autoDeriveVertexTangents(!(((bool((tangents != null())) && bool((tangents->__Field(HX_CSTRING("length"),true) > (int)0))))));
		HX_STACK_LINE(356)
		this->set_autoGenerateDummyUVs(!(((bool((uvs != null())) && bool((uvs->__Field(HX_CSTRING("length"),true) > (int)0))))));
		HX_STACK_LINE(357)
		this->updateData(data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CompactSubGeometry_obj,fromVectors,(void))

Array< Float > CompactSubGeometry_obj::stripBuffer( int offset,int numEntries){
	HX_STACK_PUSH("CompactSubGeometry::stripBuffer","away3d/core/base/CompactSubGeometry.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(numEntries,"numEntries");
	HX_STACK_LINE(284)
	Array< Float > data = ::flash::_Vector::Vector_Impl__obj::_new((this->_numVertices * numEntries),null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(285)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(286)
	int j = offset;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(287)
	int skip = ((int)13 - numEntries);		HX_STACK_VAR(skip,"skip");
	HX_STACK_LINE(288)
	int v = (int)0;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(289)
	while(((v < this->_numVertices))){
		HX_STACK_LINE(290)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(291)
		while(((k < numEntries))){
			HX_STACK_LINE(292)
			data[(i)++] = this->_vertexData->__get((j)++);
			HX_STACK_LINE(293)
			++(k);
		}
		HX_STACK_LINE(295)
		hx::AddEq(j,skip);
		HX_STACK_LINE(296)
		++(v);
	}
	HX_STACK_LINE(298)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,stripBuffer,return )

Array< Float > CompactSubGeometry_obj::get_vertexPositionData( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexPositionData","away3d/core/base/CompactSubGeometry.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(266)
	if (((bool(this->_isolatedVertexPositionDataDirty) || bool((this->_isolatedVertexPositionData == null()))))){
		HX_STACK_LINE(267)
		this->_isolatedVertexPositionData = this->stripBuffer((int)0,(int)3);
		HX_STACK_LINE(268)
		this->_isolatedVertexPositionDataDirty = false;
	}
	HX_STACK_LINE(270)
	return this->_isolatedVertexPositionData;
}


::away3d::core::base::SubGeometry CompactSubGeometry_obj::cloneWithSeperateBuffers( ){
	HX_STACK_PUSH("CompactSubGeometry::cloneWithSeperateBuffers","away3d/core/base/CompactSubGeometry.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	::away3d::core::base::SubGeometry clone = ::away3d::core::base::SubGeometry_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(254)
	clone->updateVertexData((  (((this->_isolatedVertexPositionData != null()))) ? Array< Float >(this->_isolatedVertexPositionData) : Array< Float >(this->_isolatedVertexPositionData = this->stripBuffer((int)0,(int)3)) ));
	HX_STACK_LINE(255)
	clone->set_autoDeriveVertexNormals(this->_autoDeriveVertexNormals);
	HX_STACK_LINE(256)
	clone->set_autoDeriveVertexTangents(this->_autoDeriveVertexTangents);
	HX_STACK_LINE(257)
	if ((!(this->_autoDeriveVertexNormals))){
		HX_STACK_LINE(257)
		clone->updateVertexNormalData(this->stripBuffer((int)3,(int)3));
	}
	HX_STACK_LINE(258)
	if ((!(this->_autoDeriveVertexTangents))){
		HX_STACK_LINE(258)
		clone->updateVertexTangentData(this->stripBuffer((int)6,(int)3));
	}
	HX_STACK_LINE(259)
	clone->updateUVData(this->stripBuffer((int)9,(int)2));
	HX_STACK_LINE(260)
	clone->updateSecondaryUVData(this->stripBuffer((int)11,(int)2));
	HX_STACK_LINE(261)
	clone->updateIndexData(::flash::_Vector::Vector_Impl__obj::concat(this->get_indexData(),null()));
	HX_STACK_LINE(262)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,cloneWithSeperateBuffers,return )

Void CompactSubGeometry_obj::invalidateBuffers( Array< bool > invalid){
{
		HX_STACK_PUSH("CompactSubGeometry::invalidateBuffers","away3d/core/base/CompactSubGeometry.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(invalid,"invalid");
		HX_STACK_LINE(248)
		this->super::invalidateBuffers(invalid);
		HX_STACK_LINE(249)
		this->_activeDataInvalid = true;
	}
return null();
}


Void CompactSubGeometry_obj::disposeVertexBuffers( Array< ::Dynamic > buffers){
{
		HX_STACK_PUSH("CompactSubGeometry::disposeVertexBuffers","away3d/core/base/CompactSubGeometry.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(buffers,"buffers");
		HX_STACK_LINE(243)
		this->super::disposeVertexBuffers(buffers);
		HX_STACK_LINE(244)
		this->_activeBuffer = null();
	}
return null();
}


Void CompactSubGeometry_obj::dispose( ){
{
		HX_STACK_PUSH("CompactSubGeometry::dispose","away3d/core/base/CompactSubGeometry.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_LINE(237)
		this->super::dispose();
		HX_STACK_LINE(238)
		this->disposeVertexBuffers(this->_vertexBuffer);
		HX_STACK_LINE(239)
		this->_vertexBuffer = null();
	}
return null();
}


int CompactSubGeometry_obj::get_secondaryUVOffset( ){
	HX_STACK_PUSH("CompactSubGeometry::get_secondaryUVOffset","away3d/core/base/CompactSubGeometry.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(232)
	return (int)11;
}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_secondaryUVOffset,return )

int CompactSubGeometry_obj::get_UVOffset( ){
	HX_STACK_PUSH("CompactSubGeometry::get_UVOffset","away3d/core/base/CompactSubGeometry.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(228)
	return (int)9;
}


int CompactSubGeometry_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexTangentOffset","away3d/core/base/CompactSubGeometry.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (int)6;
}


int CompactSubGeometry_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexNormalOffset","away3d/core/base/CompactSubGeometry.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_LINE(220)
	return (int)3;
}


int CompactSubGeometry_obj::get_vertexOffset( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexOffset","away3d/core/base/CompactSubGeometry.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_LINE(216)
	return (int)0;
}


int CompactSubGeometry_obj::get_secondaryUVStride( ){
	HX_STACK_PUSH("CompactSubGeometry::get_secondaryUVStride","away3d/core/base/CompactSubGeometry.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_LINE(212)
	return (int)13;
}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_secondaryUVStride,return )

int CompactSubGeometry_obj::get_UVStride( ){
	HX_STACK_PUSH("CompactSubGeometry::get_UVStride","away3d/core/base/CompactSubGeometry.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_LINE(208)
	return (int)13;
}


int CompactSubGeometry_obj::get_vertexTangentStride( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexTangentStride","away3d/core/base/CompactSubGeometry.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	return (int)13;
}


int CompactSubGeometry_obj::get_vertexNormalStride( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexNormalStride","away3d/core/base/CompactSubGeometry.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	return (int)13;
}


int CompactSubGeometry_obj::get_vertexStride( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexStride","away3d/core/base/CompactSubGeometry.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	return (int)13;
}


Void CompactSubGeometry_obj::scaleUV( hx::Null< Float >  __o_scaleU,hx::Null< Float >  __o_scaleV){
Float scaleU = __o_scaleU.Default(1);
Float scaleV = __o_scaleV.Default(1);
	HX_STACK_PUSH("CompactSubGeometry::scaleUV","away3d/core/base/CompactSubGeometry.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleU,"scaleU");
	HX_STACK_ARG(scaleV,"scaleV");
{
		HX_STACK_LINE(192)
		this->super::scaleUV(scaleU,scaleV);
		HX_STACK_LINE(193)
		this->invalidateBuffers(this->_vertexDataInvalid);
	}
return null();
}


::away3d::core::base::ISubGeometry CompactSubGeometry_obj::clone( ){
	HX_STACK_PUSH("CompactSubGeometry::clone","away3d/core/base/CompactSubGeometry.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	::away3d::core::base::CompactSubGeometry clone = ::away3d::core::base::CompactSubGeometry_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(184)
	clone->_autoDeriveVertexNormals = this->_autoDeriveVertexNormals;
	HX_STACK_LINE(185)
	clone->_autoDeriveVertexTangents = this->_autoDeriveVertexTangents;
	HX_STACK_LINE(186)
	clone->updateData(::flash::_Vector::Vector_Impl__obj::concat(this->_vertexData,null()));
	HX_STACK_LINE(187)
	clone->updateIndexData(::flash::_Vector::Vector_Impl__obj::concat(this->_indices,null()));
	HX_STACK_LINE(188)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,clone,return )

Void CompactSubGeometry_obj::scale( Float scale){
{
		HX_STACK_PUSH("CompactSubGeometry::scale","away3d/core/base/CompactSubGeometry.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(178)
		this->super::scale(scale);
		HX_STACK_LINE(179)
		this->invalidateBuffers(this->_vertexDataInvalid);
	}
return null();
}


Void CompactSubGeometry_obj::applyTransformation( ::flash::geom::Matrix3D transform){
{
		HX_STACK_PUSH("CompactSubGeometry::applyTransformation","away3d/core/base/CompactSubGeometry.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(173)
		this->super::applyTransformation(transform);
		HX_STACK_LINE(174)
		this->invalidateBuffers(this->_vertexDataInvalid);
	}
return null();
}


Array< Float > CompactSubGeometry_obj::get_UVData( ){
	HX_STACK_PUSH("CompactSubGeometry::get_UVData","away3d/core/base/CompactSubGeometry.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(165)
	if (((bool(this->_uvsDirty) && bool(this->_autoGenerateUVs)))){
		HX_STACK_LINE(166)
		this->_vertexData = this->updateDummyUVs(this->_vertexData);
		HX_STACK_LINE(167)
		this->invalidateBuffers(this->_vertexDataInvalid);
	}
	HX_STACK_LINE(169)
	return this->_vertexData;
}


Array< Float > CompactSubGeometry_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexTangentData","away3d/core/base/CompactSubGeometry.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	if (((bool(this->_autoDeriveVertexTangents) && bool(this->_vertexTangentsDirty)))){
		HX_STACK_LINE(160)
		this->_vertexData = this->updateVertexTangents(this->_vertexData);
	}
	HX_STACK_LINE(161)
	return this->_vertexData;
}


Array< Float > CompactSubGeometry_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexNormalData","away3d/core/base/CompactSubGeometry.hx",154);
	HX_STACK_THIS(this);
	HX_STACK_LINE(155)
	if (((bool(this->_autoDeriveVertexNormals) && bool(this->_vertexNormalsDirty)))){
		HX_STACK_LINE(155)
		this->_vertexData = this->updateVertexNormals(this->_vertexData);
	}
	HX_STACK_LINE(156)
	return this->_vertexData;
}


Array< Float > CompactSubGeometry_obj::updateVertexTangents( Array< Float > target){
	HX_STACK_PUSH("CompactSubGeometry::updateVertexTangents","away3d/core/base/CompactSubGeometry.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(149)
	if ((this->_vertexNormalsDirty)){
		HX_STACK_LINE(149)
		this->_vertexData = this->updateVertexNormals(this->_vertexData);
	}
	HX_STACK_LINE(150)
	this->invalidateBuffers(this->_vertexDataInvalid);
	HX_STACK_LINE(151)
	return this->super::updateVertexTangents(target);
}


Array< Float > CompactSubGeometry_obj::updateVertexNormals( Array< Float > target){
	HX_STACK_PUSH("CompactSubGeometry::updateVertexNormals","away3d/core/base/CompactSubGeometry.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(144)
	this->invalidateBuffers(this->_vertexDataInvalid);
	HX_STACK_LINE(145)
	return this->super::updateVertexNormals(target);
}


Array< Float > CompactSubGeometry_obj::get_vertexData( ){
	HX_STACK_PUSH("CompactSubGeometry::get_vertexData","away3d/core/base/CompactSubGeometry.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(137)
	if (((bool(this->_autoDeriveVertexNormals) && bool(this->_vertexNormalsDirty)))){
		HX_STACK_LINE(137)
		this->_vertexData = this->updateVertexNormals(this->_vertexData);
	}
	HX_STACK_LINE(138)
	if (((bool(this->_autoDeriveVertexTangents) && bool(this->_vertexTangentsDirty)))){
		HX_STACK_LINE(138)
		this->_vertexData = this->updateVertexTangents(this->_vertexData);
	}
	HX_STACK_LINE(139)
	if (((bool(this->_uvsDirty) && bool(this->_autoGenerateUVs)))){
		HX_STACK_LINE(139)
		this->_vertexData = this->updateDummyUVs(this->_vertexData);
	}
	HX_STACK_LINE(140)
	return this->_vertexData;
}


Void CompactSubGeometry_obj::updateActiveBuffer( int contextIndex){
{
		HX_STACK_PUSH("CompactSubGeometry::updateActiveBuffer","away3d/core/base/CompactSubGeometry.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contextIndex,"contextIndex");
		HX_STACK_LINE(130)
		this->_contextIndex = contextIndex;
		HX_STACK_LINE(131)
		this->_activeDataInvalid = this->_vertexDataInvalid->__get(contextIndex);
		HX_STACK_LINE(132)
		this->_activeBuffer = this->_vertexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >();
		HX_STACK_LINE(133)
		this->_activeContext = this->_bufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,updateActiveBuffer,(void))

Void CompactSubGeometry_obj::createBuffer( int contextIndex,::flash::display3D::Context3D context){
{
		HX_STACK_PUSH("CompactSubGeometry::createBuffer","away3d/core/base/CompactSubGeometry.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contextIndex,"contextIndex");
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(124)
		this->_vertexBuffer[contextIndex] = this->_activeBuffer = context->createVertexBuffer(this->_numVertices,(int)13);
		HX_STACK_LINE(125)
		this->_bufferContext[contextIndex] = this->_activeContext = context;
		HX_STACK_LINE(126)
		this->_vertexDataInvalid[contextIndex] = this->_activeDataInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,createBuffer,(void))

Void CompactSubGeometry_obj::activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompactSubGeometry::activateVertexTangentBuffer","away3d/core/base/CompactSubGeometry.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(115)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(116)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(117)
		if (((contextIndex != this->_contextIndex))){
			HX_STACK_LINE(117)
			this->updateActiveBuffer(contextIndex);
		}
		HX_STACK_LINE(118)
		if (((bool((this->_activeBuffer == null())) || bool((this->_activeContext != context))))){
			HX_STACK_LINE(118)
			this->createBuffer(contextIndex,context);
		}
		HX_STACK_LINE(119)
		if ((this->_activeDataInvalid)){
			HX_STACK_LINE(119)
			this->uploadData(contextIndex);
		}
		HX_STACK_LINE(120)
		context->setVertexBufferAt(index,this->_activeBuffer,(int)6,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexTangentBuffer,(void))

Void CompactSubGeometry_obj::activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompactSubGeometry::activateVertexNormalBuffer","away3d/core/base/CompactSubGeometry.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(106)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(107)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(108)
		if (((contextIndex != this->_contextIndex))){
			HX_STACK_LINE(108)
			this->updateActiveBuffer(contextIndex);
		}
		HX_STACK_LINE(109)
		if (((bool((this->_activeBuffer == null())) || bool((this->_activeContext != context))))){
			HX_STACK_LINE(109)
			this->createBuffer(contextIndex,context);
		}
		HX_STACK_LINE(110)
		if ((this->_activeDataInvalid)){
			HX_STACK_LINE(110)
			this->uploadData(contextIndex);
		}
		HX_STACK_LINE(111)
		context->setVertexBufferAt(index,this->_activeBuffer,(int)3,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexNormalBuffer,(void))

Void CompactSubGeometry_obj::uploadData( int contextIndex){
{
		HX_STACK_PUSH("CompactSubGeometry::uploadData","away3d/core/base/CompactSubGeometry.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contextIndex,"contextIndex");
		HX_STACK_LINE(101)
		this->_activeBuffer->uploadFromVector(this->_vertexData,(int)0,this->_numVertices);
		HX_STACK_LINE(102)
		this->_vertexDataInvalid[contextIndex] = this->_activeDataInvalid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,uploadData,(void))

Void CompactSubGeometry_obj::activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompactSubGeometry::activateSecondaryUVBuffer","away3d/core/base/CompactSubGeometry.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(92)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(93)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(94)
		if (((contextIndex != this->_contextIndex))){
			HX_STACK_LINE(94)
			this->updateActiveBuffer(contextIndex);
		}
		HX_STACK_LINE(95)
		if (((bool((this->_activeBuffer == null())) || bool((this->_activeContext != context))))){
			HX_STACK_LINE(95)
			this->createBuffer(contextIndex,context);
		}
		HX_STACK_LINE(96)
		if ((this->_activeDataInvalid)){
			HX_STACK_LINE(96)
			this->uploadData(contextIndex);
		}
		HX_STACK_LINE(97)
		context->setVertexBufferAt(index,this->_activeBuffer,(int)11,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateSecondaryUVBuffer,(void))

Void CompactSubGeometry_obj::activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompactSubGeometry::activateUVBuffer","away3d/core/base/CompactSubGeometry.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(79)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(80)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(81)
		if (((bool(this->_uvsDirty) && bool(this->_autoGenerateUVs)))){
			HX_STACK_LINE(82)
			this->_vertexData = this->updateDummyUVs(this->_vertexData);
			HX_STACK_LINE(83)
			this->invalidateBuffers(this->_vertexDataInvalid);
		}
		HX_STACK_LINE(85)
		if (((contextIndex != this->_contextIndex))){
			HX_STACK_LINE(85)
			this->updateActiveBuffer(contextIndex);
		}
		HX_STACK_LINE(86)
		if (((bool((this->_activeBuffer == null())) || bool((this->_activeContext != context))))){
			HX_STACK_LINE(86)
			this->createBuffer(contextIndex,context);
		}
		HX_STACK_LINE(87)
		if ((this->_activeDataInvalid)){
			HX_STACK_LINE(87)
			this->uploadData(contextIndex);
		}
		HX_STACK_LINE(88)
		context->setVertexBufferAt(index,this->_activeBuffer,(int)9,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateUVBuffer,(void))

Void CompactSubGeometry_obj::activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompactSubGeometry::activateVertexBuffer","away3d/core/base/CompactSubGeometry.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(68)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(69)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(70)
		if (((contextIndex != this->_contextIndex))){
			HX_STACK_LINE(70)
			this->updateActiveBuffer(contextIndex);
		}
		HX_STACK_LINE(71)
		if (((bool((this->_activeBuffer == null())) || bool((this->_activeContext != context))))){
			HX_STACK_LINE(71)
			this->createBuffer(contextIndex,context);
		}
		HX_STACK_LINE(72)
		if ((this->_activeDataInvalid)){
			HX_STACK_LINE(72)
			this->uploadData(contextIndex);
		}
		HX_STACK_LINE(75)
		context->setVertexBufferAt(index,this->_activeBuffer,(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompactSubGeometry_obj,activateVertexBuffer,(void))

Void CompactSubGeometry_obj::updateData( Array< Float > data){
{
		HX_STACK_PUSH("CompactSubGeometry::updateData","away3d/core/base/CompactSubGeometry.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(53)
		if ((this->_autoDeriveVertexNormals)){
			HX_STACK_LINE(53)
			this->_vertexNormalsDirty = true;
		}
		HX_STACK_LINE(54)
		if ((this->_autoDeriveVertexTangents)){
			HX_STACK_LINE(54)
			this->_vertexTangentsDirty = true;
		}
		HX_STACK_LINE(55)
		this->_faceNormalsDirty = true;
		HX_STACK_LINE(56)
		this->_faceTangentsDirty = true;
		HX_STACK_LINE(57)
		this->_isolatedVertexPositionDataDirty = true;
		HX_STACK_LINE(58)
		this->_vertexData = data;
		HX_STACK_LINE(59)
		int numVertices = ::Std_obj::_int((Float(this->_vertexData->__Field(HX_CSTRING("length"),true)) / Float((int)13)));		HX_STACK_VAR(numVertices,"numVertices");
		HX_STACK_LINE(60)
		if (((numVertices != this->_numVertices))){
			HX_STACK_LINE(60)
			this->disposeVertexBuffers(this->_vertexBuffer);
		}
		HX_STACK_LINE(61)
		this->_numVertices = numVertices;
		HX_STACK_LINE(62)
		if (((this->_numVertices == (int)0))){
			HX_STACK_LINE(62)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Bad data: geometry can't have zero triangles"),null()));
		}
		HX_STACK_LINE(63)
		this->invalidateBuffers(this->_vertexDataInvalid);
		HX_STACK_LINE(64)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompactSubGeometry_obj,updateData,(void))

int CompactSubGeometry_obj::get_numVertices( ){
	HX_STACK_PUSH("CompactSubGeometry::get_numVertices","away3d/core/base/CompactSubGeometry.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->_numVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(CompactSubGeometry_obj,get_numVertices,return )


CompactSubGeometry_obj::CompactSubGeometry_obj()
{
}

void CompactSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompactSubGeometry);
	HX_MARK_MEMBER_NAME(_isolatedVertexPositionDataDirty,"_isolatedVertexPositionDataDirty");
	HX_MARK_MEMBER_NAME(_isolatedVertexPositionData,"_isolatedVertexPositionData");
	HX_MARK_MEMBER_NAME(_activeDataInvalid,"_activeDataInvalid");
	HX_MARK_MEMBER_NAME(_activeContext,"_activeContext");
	HX_MARK_MEMBER_NAME(_activeBuffer,"_activeBuffer");
	HX_MARK_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	HX_MARK_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_vertexDataInvalid,"_vertexDataInvalid");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompactSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isolatedVertexPositionDataDirty,"_isolatedVertexPositionDataDirty");
	HX_VISIT_MEMBER_NAME(_isolatedVertexPositionData,"_isolatedVertexPositionData");
	HX_VISIT_MEMBER_NAME(_activeDataInvalid,"_activeDataInvalid");
	HX_VISIT_MEMBER_NAME(_activeContext,"_activeContext");
	HX_VISIT_MEMBER_NAME(_activeBuffer,"_activeBuffer");
	HX_VISIT_MEMBER_NAME(_contextIndex,"_contextIndex");
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	HX_VISIT_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_vertexDataInvalid,"_vertexDataInvalid");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CompactSubGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return scaleUV_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadData") ) { return uploadData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateData") ) { return updateData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromVectors") ) { return fromVectors_dyn(); }
		if (HX_FIELD_EQ(inName,"stripBuffer") ) { return stripBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return get_UVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return get_UVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return _numVertices; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeBuffer") ) { return _activeBuffer; }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { return _contextIndex; }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeContext") ) { return _activeContext; }
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { return _bufferContext; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return activateUVBuffer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidateBuffers") ) { return invalidateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"secondaryUVOffset") ) { return get_secondaryUVOffset(); }
		if (HX_FIELD_EQ(inName,"secondaryUVStride") ) { return get_secondaryUVStride(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateActiveBuffer") ) { return updateActiveBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeDataInvalid") ) { return _activeDataInvalid; }
		if (HX_FIELD_EQ(inName,"_vertexDataInvalid") ) { return _vertexDataInvalid; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return applyTransformation_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexNormals") ) { return updateVertexNormals_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"disposeVertexBuffers") ) { return disposeVertexBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return get_vertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexTangents") ) { return updateVertexTangents_dyn(); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return activateVertexBuffer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_secondaryUVOffset") ) { return get_secondaryUVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVStride") ) { return get_secondaryUVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return get_vertexTangentData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexPositionData") ) { return get_vertexPositionData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return get_vertexNormalOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalStride") ) { return get_vertexNormalStride_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return get_vertexTangentOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentStride") ) { return get_vertexTangentStride_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cloneWithSeperateBuffers") ) { return cloneWithSeperateBuffers_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return activateSecondaryUVBuffer_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return activateVertexNormalBuffer_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return activateVertexTangentBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionData") ) { return _isolatedVertexPositionData; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionDataDirty") ) { return _isolatedVertexPositionDataDirty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompactSubGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeBuffer") ) { _activeBuffer=inValue.Cast< ::flash::display3D::VertexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contextIndex") ) { _contextIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeContext") ) { _activeContext=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { _bufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeDataInvalid") ) { _activeDataInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexDataInvalid") ) { _vertexDataInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionData") ) { _isolatedVertexPositionData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"_isolatedVertexPositionDataDirty") ) { _isolatedVertexPositionDataDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompactSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isolatedVertexPositionDataDirty"));
	outFields->push(HX_CSTRING("_isolatedVertexPositionData"));
	outFields->push(HX_CSTRING("_activeDataInvalid"));
	outFields->push(HX_CSTRING("_activeContext"));
	outFields->push(HX_CSTRING("_activeBuffer"));
	outFields->push(HX_CSTRING("_contextIndex"));
	outFields->push(HX_CSTRING("_numVertices"));
	outFields->push(HX_CSTRING("_bufferContext"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_vertexDataInvalid"));
	outFields->push(HX_CSTRING("secondaryUVOffset"));
	outFields->push(HX_CSTRING("secondaryUVStride"));
	outFields->push(HX_CSTRING("numVertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("fromVectors"),
	HX_CSTRING("stripBuffer"),
	HX_CSTRING("get_vertexPositionData"),
	HX_CSTRING("cloneWithSeperateBuffers"),
	HX_CSTRING("invalidateBuffers"),
	HX_CSTRING("disposeVertexBuffers"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_secondaryUVOffset"),
	HX_CSTRING("get_UVOffset"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_secondaryUVStride"),
	HX_CSTRING("get_UVStride"),
	HX_CSTRING("get_vertexTangentStride"),
	HX_CSTRING("get_vertexNormalStride"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("scaleUV"),
	HX_CSTRING("clone"),
	HX_CSTRING("scale"),
	HX_CSTRING("applyTransformation"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("updateVertexTangents"),
	HX_CSTRING("updateVertexNormals"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("updateActiveBuffer"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("uploadData"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("updateData"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("_isolatedVertexPositionDataDirty"),
	HX_CSTRING("_isolatedVertexPositionData"),
	HX_CSTRING("_activeDataInvalid"),
	HX_CSTRING("_activeContext"),
	HX_CSTRING("_activeBuffer"),
	HX_CSTRING("_contextIndex"),
	HX_CSTRING("_numVertices"),
	HX_CSTRING("_bufferContext"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_vertexDataInvalid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompactSubGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompactSubGeometry_obj::__mClass,"__mClass");
};

Class CompactSubGeometry_obj::__mClass;

void CompactSubGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.CompactSubGeometry"), hx::TCanCast< CompactSubGeometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CompactSubGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
