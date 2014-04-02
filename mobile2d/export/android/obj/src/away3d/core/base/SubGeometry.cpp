#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void SubGeometry_obj::__construct()
{
HX_STACK_PUSH("SubGeometry::new","away3d/core/base/SubGeometry.hx",54);
{
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(56)
	this->_verticesInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Dynamic array = this->_verticesInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(57)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(57)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(57)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(57)
		array;
	}
	HX_STACK_LINE(58)
	this->_uvsInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		Dynamic array = this->_uvsInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(59)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(59)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(59)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(59)
		array;
	}
	HX_STACK_LINE(60)
	this->_secondaryUvsInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		Dynamic array = this->_secondaryUvsInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(61)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(61)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(61)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(61)
		array;
	}
	HX_STACK_LINE(62)
	this->_normalsInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		Dynamic array = this->_normalsInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(63)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(63)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(63)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(63)
		array;
	}
	HX_STACK_LINE(64)
	this->_tangentsInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		Dynamic array = this->_tangentsInvalid;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(65)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(65)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(65)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(65)
		array;
	}
	HX_STACK_LINE(66)
	this->_vertexBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(67)
	this->_uvBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(68)
	this->_secondaryUvBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(69)
	this->_vertexNormalBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(70)
	this->_vertexTangentBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(71)
	this->_vertexBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(72)
	this->_uvBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(73)
	this->_secondaryUvBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(74)
	this->_vertexNormalBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(75)
	this->_vertexTangentBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
}
;
	return null();
}

SubGeometry_obj::~SubGeometry_obj() { }

Dynamic SubGeometry_obj::__CreateEmpty() { return  new SubGeometry_obj; }
hx::ObjectPtr< SubGeometry_obj > SubGeometry_obj::__new()
{  hx::ObjectPtr< SubGeometry_obj > result = new SubGeometry_obj();
	result->__construct();
	return result;}

Dynamic SubGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubGeometry_obj > result = new SubGeometry_obj();
	result->__construct();
	return result;}

hx::Object *SubGeometry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::base::ISubGeometry_obj)) return operator ::away3d::core::base::ISubGeometry_obj *();
	return super::__ToInterface(inType);
}

::away3d::core::base::SubGeometry SubGeometry_obj::cloneWithSeperateBuffers( ){
	HX_STACK_PUSH("SubGeometry::cloneWithSeperateBuffers","away3d/core/base/SubGeometry.hx",458);
	HX_STACK_THIS(this);
	HX_STACK_LINE(458)
	return hx::TCast< away3d::core::base::SubGeometry >::cast(this->clone());
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,cloneWithSeperateBuffers,return )

int SubGeometry_obj::get_secondaryUVOffset( ){
	HX_STACK_PUSH("SubGeometry::get_secondaryUVOffset","away3d/core/base/SubGeometry.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_LINE(454)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVOffset,return )

int SubGeometry_obj::get_UVOffset( ){
	HX_STACK_PUSH("SubGeometry::get_UVOffset","away3d/core/base/SubGeometry.hx",450);
	HX_STACK_THIS(this);
	HX_STACK_LINE(450)
	return (int)0;
}


int SubGeometry_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("SubGeometry::get_vertexTangentOffset","away3d/core/base/SubGeometry.hx",446);
	HX_STACK_THIS(this);
	HX_STACK_LINE(446)
	return (int)0;
}


int SubGeometry_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("SubGeometry::get_vertexNormalOffset","away3d/core/base/SubGeometry.hx",442);
	HX_STACK_THIS(this);
	HX_STACK_LINE(442)
	return (int)0;
}


int SubGeometry_obj::get_vertexOffset( ){
	HX_STACK_PUSH("SubGeometry::get_vertexOffset","away3d/core/base/SubGeometry.hx",438);
	HX_STACK_THIS(this);
	HX_STACK_LINE(438)
	return (int)0;
}


int SubGeometry_obj::get_secondaryUVStride( ){
	HX_STACK_PUSH("SubGeometry::get_secondaryUVStride","away3d/core/base/SubGeometry.hx",434);
	HX_STACK_THIS(this);
	HX_STACK_LINE(434)
	return (int)2;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVStride,return )

int SubGeometry_obj::get_UVStride( ){
	HX_STACK_PUSH("SubGeometry::get_UVStride","away3d/core/base/SubGeometry.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_LINE(430)
	return (int)2;
}


int SubGeometry_obj::get_vertexNormalStride( ){
	HX_STACK_PUSH("SubGeometry::get_vertexNormalStride","away3d/core/base/SubGeometry.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_LINE(426)
	return (int)3;
}


int SubGeometry_obj::get_vertexTangentStride( ){
	HX_STACK_PUSH("SubGeometry::get_vertexTangentStride","away3d/core/base/SubGeometry.hx",422);
	HX_STACK_THIS(this);
	HX_STACK_LINE(422)
	return (int)3;
}


int SubGeometry_obj::get_vertexStride( ){
	HX_STACK_PUSH("SubGeometry::get_vertexStride","away3d/core/base/SubGeometry.hx",418);
	HX_STACK_THIS(this);
	HX_STACK_LINE(418)
	return (int)3;
}


Void SubGeometry_obj::disposeForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::disposeForStage3D","away3d/core/base/SubGeometry.hx",390);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(391)
		int index = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(392)
		if (((this->_vertexBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
			HX_STACK_LINE(393)
			this->_vertexBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
			HX_STACK_LINE(394)
			this->_vertexBuffer[index] = null();
		}
		HX_STACK_LINE(396)
		if (((this->_uvBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
			HX_STACK_LINE(397)
			this->_uvBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
			HX_STACK_LINE(398)
			this->_uvBuffer[index] = null();
		}
		HX_STACK_LINE(400)
		if (((this->_secondaryUvBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
			HX_STACK_LINE(401)
			this->_secondaryUvBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
			HX_STACK_LINE(402)
			this->_secondaryUvBuffer[index] = null();
		}
		HX_STACK_LINE(404)
		if (((this->_vertexNormalBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
			HX_STACK_LINE(405)
			this->_vertexNormalBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
			HX_STACK_LINE(406)
			this->_vertexNormalBuffer[index] = null();
		}
		HX_STACK_LINE(408)
		if (((this->_vertexTangentBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
			HX_STACK_LINE(409)
			this->_vertexTangentBuffer->__get(index).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
			HX_STACK_LINE(410)
			this->_vertexTangentBuffer[index] = null();
		}
		HX_STACK_LINE(412)
		if (((this->_indexBuffer->__get(index).StaticCast< ::flash::display3D::IndexBuffer3D >() != null()))){
			HX_STACK_LINE(413)
			this->_indexBuffer->__get(index).StaticCast< ::flash::display3D::IndexBuffer3D >()->dispose();
			HX_STACK_LINE(414)
			this->_indexBuffer[index] = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,disposeForStage3D,(void))

Array< Float > SubGeometry_obj::updateDummyUVs( Array< Float > target){
	HX_STACK_PUSH("SubGeometry::updateDummyUVs","away3d/core/base/SubGeometry.hx",385);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(386)
	this->invalidateBuffers(this->_uvsInvalid);
	HX_STACK_LINE(387)
	return this->super::updateDummyUVs(target);
}


Array< Float > SubGeometry_obj::updateVertexTangents( Array< Float > target){
	HX_STACK_PUSH("SubGeometry::updateVertexTangents","away3d/core/base/SubGeometry.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(380)
	if ((this->_vertexNormalsDirty)){
		HX_STACK_LINE(380)
		this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
	}
	HX_STACK_LINE(381)
	this->invalidateBuffers(this->_tangentsInvalid);
	HX_STACK_LINE(382)
	return this->super::updateVertexTangents(target);
}


Array< Float > SubGeometry_obj::updateVertexNormals( Array< Float > target){
	HX_STACK_PUSH("SubGeometry::updateVertexNormals","away3d/core/base/SubGeometry.hx",374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(375)
	this->invalidateBuffers(this->_normalsInvalid);
	HX_STACK_LINE(376)
	return this->super::updateVertexNormals(target);
}


Void SubGeometry_obj::fromVectors( Array< Float > vertices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents){
{
		HX_STACK_PUSH("SubGeometry::fromVectors","away3d/core/base/SubGeometry.hx",367);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertices,"vertices");
		HX_STACK_ARG(uvs,"uvs");
		HX_STACK_ARG(normals,"normals");
		HX_STACK_ARG(tangents,"tangents");
		HX_STACK_LINE(368)
		this->updateVertexData(vertices);
		HX_STACK_LINE(369)
		this->updateUVData(uvs);
		HX_STACK_LINE(370)
		this->updateVertexNormalData(normals);
		HX_STACK_LINE(371)
		this->updateVertexTangentData(tangents);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SubGeometry_obj,fromVectors,(void))

Void SubGeometry_obj::updateVertexTangentData( Array< Float > vertexTangents){
{
		HX_STACK_PUSH("SubGeometry::updateVertexTangentData","away3d/core/base/SubGeometry.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertexTangents,"vertexTangents");
		HX_STACK_LINE(361)
		this->_vertexTangentsDirty = false;
		HX_STACK_LINE(362)
		this->_autoDeriveVertexTangents = (vertexTangents == null());
		HX_STACK_LINE(363)
		this->_vertexTangents = vertexTangents;
		HX_STACK_LINE(364)
		this->invalidateBuffers(this->_tangentsInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexTangentData,(void))

Array< Float > SubGeometry_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("SubGeometry::get_vertexTangentData","away3d/core/base/SubGeometry.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(350)
	if (((bool(this->_autoDeriveVertexTangents) && bool(this->_vertexTangentsDirty)))){
		HX_STACK_LINE(350)
		this->_vertexTangents = this->updateVertexTangents(this->_vertexTangents);
	}
	HX_STACK_LINE(351)
	return this->_vertexTangents;
}


Void SubGeometry_obj::updateVertexNormalData( Array< Float > vertexNormals){
{
		HX_STACK_PUSH("SubGeometry::updateVertexNormalData","away3d/core/base/SubGeometry.hx",336);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertexNormals,"vertexNormals");
		HX_STACK_LINE(337)
		this->_vertexNormalsDirty = false;
		HX_STACK_LINE(338)
		this->_autoDeriveVertexNormals = (vertexNormals == null());
		HX_STACK_LINE(339)
		this->_vertexNormals = vertexNormals;
		HX_STACK_LINE(340)
		this->invalidateBuffers(this->_normalsInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexNormalData,(void))

Array< Float > SubGeometry_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("SubGeometry::get_vertexNormalData","away3d/core/base/SubGeometry.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_LINE(326)
	if (((bool(this->_autoDeriveVertexNormals) && bool(this->_vertexNormalsDirty)))){
		HX_STACK_LINE(326)
		this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
	}
	HX_STACK_LINE(327)
	return this->_vertexNormals;
}


Void SubGeometry_obj::updateSecondaryUVData( Array< Float > uvs){
{
		HX_STACK_PUSH("SubGeometry::updateSecondaryUVData","away3d/core/base/SubGeometry.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_ARG(uvs,"uvs");
		HX_STACK_LINE(317)
		this->_secondaryUvs = uvs;
		HX_STACK_LINE(318)
		this->invalidateBuffers(this->_secondaryUvsInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateSecondaryUVData,(void))

Void SubGeometry_obj::updateUVData( Array< Float > uvs){
{
		HX_STACK_PUSH("SubGeometry::updateUVData","away3d/core/base/SubGeometry.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(uvs,"uvs");
		HX_STACK_LINE(310)
		if ((this->_autoDeriveVertexTangents)){
			HX_STACK_LINE(310)
			this->_vertexTangentsDirty = true;
		}
		HX_STACK_LINE(311)
		this->_faceTangentsDirty = true;
		HX_STACK_LINE(312)
		this->_uvs = uvs;
		HX_STACK_LINE(313)
		this->invalidateBuffers(this->_uvsInvalid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateUVData,(void))

Array< Float > SubGeometry_obj::get_secondaryUVData( ){
	HX_STACK_PUSH("SubGeometry::get_secondaryUVData","away3d/core/base/SubGeometry.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_LINE(299)
	return this->_secondaryUvs;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_secondaryUVData,return )

Array< Float > SubGeometry_obj::get_UVData( ){
	HX_STACK_PUSH("SubGeometry::get_UVData","away3d/core/base/SubGeometry.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_LINE(295)
	if (((bool(this->_uvsDirty) && bool(this->_autoGenerateUVs)))){
		HX_STACK_LINE(295)
		this->_uvs = this->updateDummyUVs(this->_uvs);
	}
	HX_STACK_LINE(296)
	return this->_uvs;
}


Void SubGeometry_obj::updateVertexData( Array< Float > vertices){
{
		HX_STACK_PUSH("SubGeometry::updateVertexData","away3d/core/base/SubGeometry.hx",278);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vertices,"vertices");
		HX_STACK_LINE(279)
		if ((this->_autoDeriveVertexNormals)){
			HX_STACK_LINE(279)
			this->_vertexNormalsDirty = true;
		}
		HX_STACK_LINE(280)
		if ((this->_autoDeriveVertexTangents)){
			HX_STACK_LINE(280)
			this->_vertexTangentsDirty = true;
		}
		HX_STACK_LINE(281)
		this->_faceNormalsDirty = true;
		HX_STACK_LINE(282)
		this->_vertexData = vertices;
		HX_STACK_LINE(283)
		int numVertices = ::Std_obj::_int((Float(vertices->__Field(HX_CSTRING("length"),true)) / Float((int)3)));		HX_STACK_VAR(numVertices,"numVertices");
		HX_STACK_LINE(284)
		if (((numVertices != this->_numVertices))){
			HX_STACK_LINE(284)
			this->disposeAllVertexBuffers();
		}
		HX_STACK_LINE(285)
		this->_numVertices = numVertices;
		HX_STACK_LINE(286)
		this->invalidateBuffers(this->_verticesInvalid);
		HX_STACK_LINE(287)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometry_obj,updateVertexData,(void))

Array< Float > SubGeometry_obj::get_vertexPositionData( ){
	HX_STACK_PUSH("SubGeometry::get_vertexPositionData","away3d/core/base/SubGeometry.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(269)
	return this->_vertexData;
}


Array< Float > SubGeometry_obj::get_vertexData( ){
	HX_STACK_PUSH("SubGeometry::get_vertexData","away3d/core/base/SubGeometry.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	return this->_vertexData;
}


Void SubGeometry_obj::disposeAllVertexBuffers( ){
{
		HX_STACK_PUSH("SubGeometry::disposeAllVertexBuffers","away3d/core/base/SubGeometry.hx",253);
		HX_STACK_THIS(this);
		HX_STACK_LINE(254)
		this->disposeVertexBuffers(this->_vertexBuffer);
		HX_STACK_LINE(255)
		this->disposeVertexBuffers(this->_vertexNormalBuffer);
		HX_STACK_LINE(256)
		this->disposeVertexBuffers(this->_uvBuffer);
		HX_STACK_LINE(257)
		this->disposeVertexBuffers(this->_secondaryUvBuffer);
		HX_STACK_LINE(258)
		this->disposeVertexBuffers(this->_vertexTangentBuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,disposeAllVertexBuffers,(void))

Void SubGeometry_obj::dispose( ){
{
		HX_STACK_PUSH("SubGeometry::dispose","away3d/core/base/SubGeometry.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_LINE(234)
		this->super::dispose();
		HX_STACK_LINE(235)
		this->disposeAllVertexBuffers();
		HX_STACK_LINE(236)
		this->_vertexBuffer = null();
		HX_STACK_LINE(237)
		this->_vertexNormalBuffer = null();
		HX_STACK_LINE(238)
		this->_uvBuffer = null();
		HX_STACK_LINE(239)
		this->_secondaryUvBuffer = null();
		HX_STACK_LINE(240)
		this->_vertexTangentBuffer = null();
		HX_STACK_LINE(241)
		this->_indexBuffer = null();
		HX_STACK_LINE(242)
		this->_uvs = null();
		HX_STACK_LINE(243)
		this->_secondaryUvs = null();
		HX_STACK_LINE(244)
		this->_vertexNormals = null();
		HX_STACK_LINE(245)
		this->_vertexTangents = null();
		HX_STACK_LINE(246)
		this->_vertexBufferContext = null();
		HX_STACK_LINE(247)
		this->_uvBufferContext = null();
		HX_STACK_LINE(248)
		this->_secondaryUvBufferContext = null();
		HX_STACK_LINE(249)
		this->_vertexNormalBufferContext = null();
		HX_STACK_LINE(250)
		this->_vertexTangentBufferContext = null();
	}
return null();
}


Void SubGeometry_obj::scaleUV( hx::Null< Float >  __o_scaleU,hx::Null< Float >  __o_scaleV){
Float scaleU = __o_scaleU.Default(1);
Float scaleV = __o_scaleV.Default(1);
	HX_STACK_PUSH("SubGeometry::scaleUV","away3d/core/base/SubGeometry.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleU,"scaleU");
	HX_STACK_ARG(scaleV,"scaleV");
{
		HX_STACK_LINE(225)
		this->super::scaleUV(scaleU,scaleV);
		HX_STACK_LINE(226)
		this->invalidateBuffers(this->_uvsInvalid);
	}
return null();
}


Void SubGeometry_obj::scale( Float scale){
{
		HX_STACK_PUSH("SubGeometry::scale","away3d/core/base/SubGeometry.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(216)
		this->super::scale(scale);
		HX_STACK_LINE(217)
		this->invalidateBuffers(this->_verticesInvalid);
	}
return null();
}


::away3d::core::base::ISubGeometry SubGeometry_obj::clone( ){
	HX_STACK_PUSH("SubGeometry::clone","away3d/core/base/SubGeometry.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	::away3d::core::base::SubGeometry clone = ::away3d::core::base::SubGeometry_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(202)
	clone->updateVertexData(::flash::_Vector::Vector_Impl__obj::concat(this->_vertexData,null()));
	HX_STACK_LINE(203)
	clone->updateUVData(::flash::_Vector::Vector_Impl__obj::concat(this->_uvs,null()));
	HX_STACK_LINE(204)
	clone->updateIndexData(::flash::_Vector::Vector_Impl__obj::concat(this->_indices,null()));
	HX_STACK_LINE(205)
	if (((this->_secondaryUvs != null()))){
		HX_STACK_LINE(205)
		clone->updateSecondaryUVData(::flash::_Vector::Vector_Impl__obj::concat(this->_secondaryUvs,null()));
	}
	HX_STACK_LINE(206)
	if ((!(this->_autoDeriveVertexNormals))){
		HX_STACK_LINE(206)
		clone->updateVertexNormalData(::flash::_Vector::Vector_Impl__obj::concat(this->_vertexNormals,null()));
	}
	HX_STACK_LINE(207)
	if ((!(this->_autoDeriveVertexTangents))){
		HX_STACK_LINE(207)
		clone->updateVertexTangentData(::flash::_Vector::Vector_Impl__obj::concat(this->_vertexTangents,null()));
	}
	HX_STACK_LINE(208)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,clone,return )

Void SubGeometry_obj::applyTransformation( ::flash::geom::Matrix3D transform){
{
		HX_STACK_PUSH("SubGeometry::applyTransformation","away3d/core/base/SubGeometry.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(189)
		this->super::applyTransformation(transform);
		HX_STACK_LINE(190)
		this->invalidateBuffers(this->_verticesInvalid);
		HX_STACK_LINE(191)
		this->invalidateBuffers(this->_normalsInvalid);
		HX_STACK_LINE(192)
		this->invalidateBuffers(this->_tangentsInvalid);
	}
return null();
}


Void SubGeometry_obj::activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::activateVertexTangentBuffer","away3d/core/base/SubGeometry.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(173)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(174)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(175)
		if ((this->_vertexTangentsDirty)){
			HX_STACK_LINE(175)
			this->_vertexTangents = this->updateVertexTangents(this->_vertexTangents);
		}
		HX_STACK_LINE(176)
		if (((bool((this->_vertexTangentBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null())) || bool((this->_vertexTangentBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(177)
			this->_vertexTangentBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,(int)3);
			HX_STACK_LINE(178)
			this->_vertexTangentBufferContext[contextIndex] = context;
			HX_STACK_LINE(179)
			this->_tangentsInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(181)
		if ((this->_tangentsInvalid->__get(contextIndex))){
			HX_STACK_LINE(182)
			this->_vertexTangentBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_vertexTangents,(int)0,this->_numVertices);
			HX_STACK_LINE(183)
			this->_tangentsInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(185)
		context->setVertexBufferAt(index,this->_vertexTangentBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexTangentBuffer,(void))

Void SubGeometry_obj::activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::activateVertexNormalBuffer","away3d/core/base/SubGeometry.hx",150);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(151)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(152)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(153)
		if (((bool(this->_autoDeriveVertexNormals) && bool(this->_vertexNormalsDirty)))){
			HX_STACK_LINE(153)
			this->_vertexNormals = this->updateVertexNormals(this->_vertexNormals);
		}
		HX_STACK_LINE(154)
		if (((bool((this->_vertexNormalBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null())) || bool((this->_vertexNormalBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(155)
			this->_vertexNormalBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,(int)3);
			HX_STACK_LINE(156)
			this->_vertexNormalBufferContext[contextIndex] = context;
			HX_STACK_LINE(157)
			this->_normalsInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(159)
		if ((this->_normalsInvalid->__get(contextIndex))){
			HX_STACK_LINE(160)
			this->_vertexNormalBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_vertexNormals,(int)0,this->_numVertices);
			HX_STACK_LINE(161)
			this->_normalsInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(163)
		context->setVertexBufferAt(index,this->_vertexNormalBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexNormalBuffer,(void))

Void SubGeometry_obj::activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::activateSecondaryUVBuffer","away3d/core/base/SubGeometry.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(130)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(131)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(132)
		if (((bool((this->_secondaryUvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null())) || bool((this->_secondaryUvBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(133)
			this->_secondaryUvBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,(int)2);
			HX_STACK_LINE(134)
			this->_secondaryUvBufferContext[contextIndex] = context;
			HX_STACK_LINE(135)
			this->_secondaryUvsInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(137)
		if ((this->_secondaryUvsInvalid->__get(contextIndex))){
			HX_STACK_LINE(138)
			this->_secondaryUvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_secondaryUvs,(int)0,this->_numVertices);
			HX_STACK_LINE(139)
			this->_secondaryUvsInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(141)
		context->setVertexBufferAt(index,this->_secondaryUvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateSecondaryUVBuffer,(void))

Void SubGeometry_obj::activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::activateUVBuffer","away3d/core/base/SubGeometry.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(110)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(111)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(112)
		if (((bool(this->_autoGenerateUVs) && bool(this->_uvsDirty)))){
			HX_STACK_LINE(112)
			this->_uvs = this->updateDummyUVs(this->_uvs);
		}
		HX_STACK_LINE(113)
		if (((bool((this->_uvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null())) || bool((this->_uvBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(114)
			this->_uvBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,(int)2);
			HX_STACK_LINE(115)
			this->_uvBufferContext[contextIndex] = context;
			HX_STACK_LINE(116)
			this->_uvsInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(118)
		if ((this->_uvsInvalid->__get(contextIndex))){
			HX_STACK_LINE(119)
			this->_uvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_uvs,(int)0,this->_numVertices);
			HX_STACK_LINE(120)
			this->_uvsInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(122)
		context->setVertexBufferAt(index,this->_uvBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateUVBuffer,(void))

Void SubGeometry_obj::activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubGeometry::activateVertexBuffer","away3d/core/base/SubGeometry.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(91)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(92)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(93)
		if (((bool((this->_vertexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >() == null())) || bool((this->_vertexBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
			HX_STACK_LINE(94)
			this->_vertexBuffer[contextIndex] = context->createVertexBuffer(this->_numVertices,(int)3);
			HX_STACK_LINE(95)
			this->_vertexBufferContext[contextIndex] = context;
			HX_STACK_LINE(96)
			this->_verticesInvalid[contextIndex] = true;
		}
		HX_STACK_LINE(98)
		if ((this->_verticesInvalid->__get(contextIndex))){
			HX_STACK_LINE(99)
			this->_vertexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >()->uploadFromVector(this->_vertexData,(int)0,this->_numVertices);
			HX_STACK_LINE(100)
			this->_verticesInvalid[contextIndex] = false;
		}
		HX_STACK_LINE(102)
		context->setVertexBufferAt(index,this->_vertexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::VertexBuffer3D >(),(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometry_obj,activateVertexBuffer,(void))

int SubGeometry_obj::get_numVertices( ){
	HX_STACK_PUSH("SubGeometry::get_numVertices","away3d/core/base/SubGeometry.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->_numVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometry_obj,get_numVertices,return )


SubGeometry_obj::SubGeometry_obj()
{
}

void SubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubGeometry);
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	HX_MARK_MEMBER_NAME(_vertexTangentBufferContext,"_vertexTangentBufferContext");
	HX_MARK_MEMBER_NAME(_vertexNormalBufferContext,"_vertexNormalBufferContext");
	HX_MARK_MEMBER_NAME(_secondaryUvBufferContext,"_secondaryUvBufferContext");
	HX_MARK_MEMBER_NAME(_uvBufferContext,"_uvBufferContext");
	HX_MARK_MEMBER_NAME(_vertexBufferContext,"_vertexBufferContext");
	HX_MARK_MEMBER_NAME(_vertexTangentBuffer,"_vertexTangentBuffer");
	HX_MARK_MEMBER_NAME(_vertexNormalBuffer,"_vertexNormalBuffer");
	HX_MARK_MEMBER_NAME(_secondaryUvBuffer,"_secondaryUvBuffer");
	HX_MARK_MEMBER_NAME(_uvBuffer,"_uvBuffer");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_tangentsInvalid,"_tangentsInvalid");
	HX_MARK_MEMBER_NAME(_normalsInvalid,"_normalsInvalid");
	HX_MARK_MEMBER_NAME(_secondaryUvsInvalid,"_secondaryUvsInvalid");
	HX_MARK_MEMBER_NAME(_uvsInvalid,"_uvsInvalid");
	HX_MARK_MEMBER_NAME(_verticesInvalid,"_verticesInvalid");
	HX_MARK_MEMBER_NAME(_vertexTangents,"_vertexTangents");
	HX_MARK_MEMBER_NAME(_vertexNormals,"_vertexNormals");
	HX_MARK_MEMBER_NAME(_secondaryUvs,"_secondaryUvs");
	HX_MARK_MEMBER_NAME(_uvs,"_uvs");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	HX_VISIT_MEMBER_NAME(_vertexTangentBufferContext,"_vertexTangentBufferContext");
	HX_VISIT_MEMBER_NAME(_vertexNormalBufferContext,"_vertexNormalBufferContext");
	HX_VISIT_MEMBER_NAME(_secondaryUvBufferContext,"_secondaryUvBufferContext");
	HX_VISIT_MEMBER_NAME(_uvBufferContext,"_uvBufferContext");
	HX_VISIT_MEMBER_NAME(_vertexBufferContext,"_vertexBufferContext");
	HX_VISIT_MEMBER_NAME(_vertexTangentBuffer,"_vertexTangentBuffer");
	HX_VISIT_MEMBER_NAME(_vertexNormalBuffer,"_vertexNormalBuffer");
	HX_VISIT_MEMBER_NAME(_secondaryUvBuffer,"_secondaryUvBuffer");
	HX_VISIT_MEMBER_NAME(_uvBuffer,"_uvBuffer");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_tangentsInvalid,"_tangentsInvalid");
	HX_VISIT_MEMBER_NAME(_normalsInvalid,"_normalsInvalid");
	HX_VISIT_MEMBER_NAME(_secondaryUvsInvalid,"_secondaryUvsInvalid");
	HX_VISIT_MEMBER_NAME(_uvsInvalid,"_uvsInvalid");
	HX_VISIT_MEMBER_NAME(_verticesInvalid,"_verticesInvalid");
	HX_VISIT_MEMBER_NAME(_vertexTangents,"_vertexTangents");
	HX_VISIT_MEMBER_NAME(_vertexNormals,"_vertexNormals");
	HX_VISIT_MEMBER_NAME(_secondaryUvs,"_secondaryUvs");
	HX_VISIT_MEMBER_NAME(_uvs,"_uvs");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SubGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { return _uvs; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return scaleUV_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvBuffer") ) { return _uvBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromVectors") ) { return fromVectors_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvsInvalid") ) { return _uvsInvalid; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return get_UVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return get_UVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"updateUVData") ) { return updateUVData_dyn(); }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return _numVertices; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return _vertexBuffer; }
		if (HX_FIELD_EQ(inName,"_secondaryUvs") ) { return _secondaryUvs; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDummyUVs") ) { return updateDummyUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexNormals") ) { return _vertexNormals; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"_normalsInvalid") ) { return _normalsInvalid; }
		if (HX_FIELD_EQ(inName,"_vertexTangents") ) { return _vertexTangents; }
		if (HX_FIELD_EQ(inName,"secondaryUVData") ) { return get_secondaryUVData(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexData") ) { return updateVertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return activateUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvBufferContext") ) { return _uvBufferContext; }
		if (HX_FIELD_EQ(inName,"_tangentsInvalid") ) { return _tangentsInvalid; }
		if (HX_FIELD_EQ(inName,"_verticesInvalid") ) { return _verticesInvalid; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeForStage3D") ) { return disposeForStage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"secondaryUVOffset") ) { return get_secondaryUVOffset(); }
		if (HX_FIELD_EQ(inName,"secondaryUVStride") ) { return get_secondaryUVStride(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondaryUvBuffer") ) { return _secondaryUvBuffer; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateVertexNormals") ) { return updateVertexNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVData") ) { return get_secondaryUVData_dyn(); }
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return applyTransformation_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexNormalBuffer") ) { return _vertexNormalBuffer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateVertexTangents") ) { return updateVertexTangents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return get_vertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return activateVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexBufferContext") ) { return _vertexBufferContext; }
		if (HX_FIELD_EQ(inName,"_vertexTangentBuffer") ) { return _vertexTangentBuffer; }
		if (HX_FIELD_EQ(inName,"_secondaryUvsInvalid") ) { return _secondaryUvsInvalid; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_secondaryUVOffset") ) { return get_secondaryUVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_secondaryUVStride") ) { return get_secondaryUVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return get_vertexTangentData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSecondaryUVData") ) { return updateSecondaryUVData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return get_vertexNormalOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalStride") ) { return get_vertexNormalStride_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexNormalData") ) { return updateVertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexPositionData") ) { return get_vertexPositionData_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return get_vertexTangentOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentStride") ) { return get_vertexTangentStride_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexTangentData") ) { return updateVertexTangentData_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeAllVertexBuffers") ) { return disposeAllVertexBuffers_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cloneWithSeperateBuffers") ) { return cloneWithSeperateBuffers_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return activateSecondaryUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_secondaryUvBufferContext") ) { return _secondaryUvBufferContext; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return activateVertexNormalBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexNormalBufferContext") ) { return _vertexNormalBufferContext; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return activateVertexTangentBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexTangentBufferContext") ) { return _vertexTangentBufferContext; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_uvs") ) { _uvs=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvBuffer") ) { _uvBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_uvsInvalid") ) { _uvsInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_secondaryUvs") ) { _secondaryUvs=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_vertexNormals") ) { _vertexNormals=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_normalsInvalid") ) { _normalsInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexTangents") ) { _vertexTangents=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_uvBufferContext") ) { _uvBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentsInvalid") ) { _tangentsInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_verticesInvalid") ) { _verticesInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondaryUvBuffer") ) { _secondaryUvBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_vertexNormalBuffer") ) { _vertexNormalBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_vertexBufferContext") ) { _vertexBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexTangentBuffer") ) { _vertexTangentBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_secondaryUvsInvalid") ) { _secondaryUvsInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_secondaryUvBufferContext") ) { _secondaryUvBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_vertexNormalBufferContext") ) { _vertexNormalBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_vertexTangentBufferContext") ) { _vertexTangentBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numVertices"));
	outFields->push(HX_CSTRING("_vertexTangentBufferContext"));
	outFields->push(HX_CSTRING("_vertexNormalBufferContext"));
	outFields->push(HX_CSTRING("_secondaryUvBufferContext"));
	outFields->push(HX_CSTRING("_uvBufferContext"));
	outFields->push(HX_CSTRING("_vertexBufferContext"));
	outFields->push(HX_CSTRING("_vertexTangentBuffer"));
	outFields->push(HX_CSTRING("_vertexNormalBuffer"));
	outFields->push(HX_CSTRING("_secondaryUvBuffer"));
	outFields->push(HX_CSTRING("_uvBuffer"));
	outFields->push(HX_CSTRING("_vertexBuffer"));
	outFields->push(HX_CSTRING("_tangentsInvalid"));
	outFields->push(HX_CSTRING("_normalsInvalid"));
	outFields->push(HX_CSTRING("_secondaryUvsInvalid"));
	outFields->push(HX_CSTRING("_uvsInvalid"));
	outFields->push(HX_CSTRING("_verticesInvalid"));
	outFields->push(HX_CSTRING("_vertexTangents"));
	outFields->push(HX_CSTRING("_vertexNormals"));
	outFields->push(HX_CSTRING("_secondaryUvs"));
	outFields->push(HX_CSTRING("_uvs"));
	outFields->push(HX_CSTRING("secondaryUVOffset"));
	outFields->push(HX_CSTRING("secondaryUVStride"));
	outFields->push(HX_CSTRING("secondaryUVData"));
	outFields->push(HX_CSTRING("numVertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cloneWithSeperateBuffers"),
	HX_CSTRING("get_secondaryUVOffset"),
	HX_CSTRING("get_UVOffset"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_secondaryUVStride"),
	HX_CSTRING("get_UVStride"),
	HX_CSTRING("get_vertexNormalStride"),
	HX_CSTRING("get_vertexTangentStride"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("disposeForStage3D"),
	HX_CSTRING("updateDummyUVs"),
	HX_CSTRING("updateVertexTangents"),
	HX_CSTRING("updateVertexNormals"),
	HX_CSTRING("fromVectors"),
	HX_CSTRING("updateVertexTangentData"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("updateVertexNormalData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("updateSecondaryUVData"),
	HX_CSTRING("updateUVData"),
	HX_CSTRING("get_secondaryUVData"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("updateVertexData"),
	HX_CSTRING("get_vertexPositionData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("disposeAllVertexBuffers"),
	HX_CSTRING("dispose"),
	HX_CSTRING("scaleUV"),
	HX_CSTRING("scale"),
	HX_CSTRING("clone"),
	HX_CSTRING("applyTransformation"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("_numVertices"),
	HX_CSTRING("_vertexTangentBufferContext"),
	HX_CSTRING("_vertexNormalBufferContext"),
	HX_CSTRING("_secondaryUvBufferContext"),
	HX_CSTRING("_uvBufferContext"),
	HX_CSTRING("_vertexBufferContext"),
	HX_CSTRING("_vertexTangentBuffer"),
	HX_CSTRING("_vertexNormalBuffer"),
	HX_CSTRING("_secondaryUvBuffer"),
	HX_CSTRING("_uvBuffer"),
	HX_CSTRING("_vertexBuffer"),
	HX_CSTRING("_tangentsInvalid"),
	HX_CSTRING("_normalsInvalid"),
	HX_CSTRING("_secondaryUvsInvalid"),
	HX_CSTRING("_uvsInvalid"),
	HX_CSTRING("_verticesInvalid"),
	HX_CSTRING("_vertexTangents"),
	HX_CSTRING("_vertexNormals"),
	HX_CSTRING("_secondaryUvs"),
	HX_CSTRING("_uvs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubGeometry_obj::__mClass,"__mClass");
};

Class SubGeometry_obj::__mClass;

void SubGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.SubGeometry"), hx::TCanCast< SubGeometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SubGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
