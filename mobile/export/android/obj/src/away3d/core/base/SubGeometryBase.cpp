#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void SubGeometryBase_obj::__construct()
{
HX_STACK_PUSH("SubGeometryBase::new","away3d/core/base/SubGeometryBase.hx",63);
{
	HX_STACK_LINE(64)
	this->_faceNormalsDirty = true;
	HX_STACK_LINE(65)
	this->_faceTangentsDirty = true;
	HX_STACK_LINE(66)
	this->_indexBuffer = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(67)
	this->_indexBufferContext = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(68)
	this->_indicesInvalid = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(69)
	this->_autoDeriveVertexNormals = true;
	HX_STACK_LINE(70)
	this->_autoDeriveVertexTangents = true;
	HX_STACK_LINE(71)
	this->_autoGenerateUVs = false;
	HX_STACK_LINE(72)
	this->_useFaceWeights = false;
	HX_STACK_LINE(73)
	this->_vertexNormalsDirty = true;
	HX_STACK_LINE(74)
	this->_vertexTangentsDirty = true;
	HX_STACK_LINE(75)
	this->_scaleU = (int)1;
	HX_STACK_LINE(76)
	this->_scaleV = (int)1;
	HX_STACK_LINE(77)
	this->_uvsDirty = true;
}
;
	return null();
}

SubGeometryBase_obj::~SubGeometryBase_obj() { }

Dynamic SubGeometryBase_obj::__CreateEmpty() { return  new SubGeometryBase_obj; }
hx::ObjectPtr< SubGeometryBase_obj > SubGeometryBase_obj::__new()
{  hx::ObjectPtr< SubGeometryBase_obj > result = new SubGeometryBase_obj();
	result->__construct();
	return result;}

Dynamic SubGeometryBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubGeometryBase_obj > result = new SubGeometryBase_obj();
	result->__construct();
	return result;}

Array< Float > SubGeometryBase_obj::updateDummyUVs( Array< Float > target){
	HX_STACK_PUSH("SubGeometryBase::updateDummyUVs","away3d/core/base/SubGeometryBase.hx",754);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(755)
	this->_uvsDirty = false;
	HX_STACK_LINE(756)
	int idx;		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(757)
	int uvIdx;		HX_STACK_VAR(uvIdx,"uvIdx");
	HX_STACK_LINE(758)
	int stride = this->get_UVStride();		HX_STACK_VAR(stride,"stride");
	HX_STACK_LINE(759)
	int skip = (stride - (int)2);		HX_STACK_VAR(skip,"skip");
	HX_STACK_LINE(760)
	int len = ::Std_obj::_int(((Float(this->_vertexData->__Field(HX_CSTRING("length"),true)) / Float(this->get_vertexStride())) * stride));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(761)
	if (((target == null()))){
		HX_STACK_LINE(761)
		target = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	}
	HX_STACK_LINE(763)
	len;
	HX_STACK_LINE(765)
	idx = this->get_UVOffset();
	HX_STACK_LINE(766)
	uvIdx = (int)0;
	HX_STACK_LINE(767)
	while(((idx < len))){
		HX_STACK_LINE(768)
		target[(idx)++] = (uvIdx * .5);
		HX_STACK_LINE(769)
		target[(idx)++] = (1.0 - ((int(uvIdx) & int((int)1))));
		HX_STACK_LINE(770)
		hx::AddEq(idx,skip);
		HX_STACK_LINE(771)
		if (((++(uvIdx) == (int)3))){
			HX_STACK_LINE(771)
			uvIdx = (int)0;
		}
	}
	HX_STACK_LINE(774)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,updateDummyUVs,return )

Void SubGeometryBase_obj::applyTransformation( ::flash::geom::Matrix3D transform){
{
		HX_STACK_PUSH("SubGeometryBase::applyTransformation","away3d/core/base/SubGeometryBase.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(685)
		Array< Float > vertices = this->_vertexData;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(686)
		Array< Float > normals = this->get_vertexNormalData();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(687)
		Array< Float > tangents = this->get_vertexTangentData();		HX_STACK_VAR(tangents,"tangents");
		HX_STACK_LINE(688)
		int posStride = this->get_vertexStride();		HX_STACK_VAR(posStride,"posStride");
		HX_STACK_LINE(689)
		int normalStride = this->get_vertexNormalStride();		HX_STACK_VAR(normalStride,"normalStride");
		HX_STACK_LINE(690)
		int tangentStride = this->get_vertexTangentStride();		HX_STACK_VAR(tangentStride,"tangentStride");
		HX_STACK_LINE(691)
		int posOffset = this->get_vertexOffset();		HX_STACK_VAR(posOffset,"posOffset");
		HX_STACK_LINE(692)
		int normalOffset = this->get_vertexNormalOffset();		HX_STACK_VAR(normalOffset,"normalOffset");
		HX_STACK_LINE(693)
		int tangentOffset = this->get_vertexTangentOffset();		HX_STACK_VAR(tangentOffset,"tangentOffset");
		HX_STACK_LINE(694)
		int len = ::Std_obj::_int((Float(vertices->__Field(HX_CSTRING("length"),true)) / Float(posStride)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(695)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(696)
		int i1;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(697)
		int i2;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(698)
		::flash::geom::Vector3D vector = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(699)
		bool bakeNormals = (normals != null());		HX_STACK_VAR(bakeNormals,"bakeNormals");
		HX_STACK_LINE(700)
		bool bakeTangents = (tangents != null());		HX_STACK_VAR(bakeTangents,"bakeTangents");
		HX_STACK_LINE(701)
		::flash::geom::Matrix3D invTranspose = null();		HX_STACK_VAR(invTranspose,"invTranspose");
		HX_STACK_LINE(702)
		if (((bool(bakeNormals) || bool(bakeTangents)))){
			HX_STACK_LINE(703)
			invTranspose = transform->clone();
			HX_STACK_LINE(704)
			invTranspose->invert();
			HX_STACK_LINE(705)
			invTranspose->transpose();
		}
		HX_STACK_LINE(707)
		int vi0 = posOffset;		HX_STACK_VAR(vi0,"vi0");
		HX_STACK_LINE(708)
		int ni0 = normalOffset;		HX_STACK_VAR(ni0,"ni0");
		HX_STACK_LINE(709)
		int ti0 = tangentOffset;		HX_STACK_VAR(ti0,"ti0");
		HX_STACK_LINE(710)
		i = (int)0;
		HX_STACK_LINE(711)
		while(((i < len))){
			HX_STACK_LINE(712)
			i1 = (vi0 + (int)1);
			HX_STACK_LINE(713)
			i2 = (vi0 + (int)2);
			HX_STACK_LINE(715)
			vector->x = vertices->__get(vi0);
			HX_STACK_LINE(716)
			vector->y = vertices->__get(i1);
			HX_STACK_LINE(717)
			vector->z = vertices->__get(i2);
			HX_STACK_LINE(718)
			vector = transform->transformVector(vector);
			HX_STACK_LINE(719)
			vertices[vi0] = vector->x;
			HX_STACK_LINE(720)
			vertices[i1] = vector->y;
			HX_STACK_LINE(721)
			vertices[i2] = vector->z;
			HX_STACK_LINE(722)
			hx::AddEq(vi0,posStride);
			HX_STACK_LINE(724)
			if ((bakeNormals)){
				HX_STACK_LINE(725)
				i1 = (ni0 + (int)1);
				HX_STACK_LINE(726)
				i2 = (ni0 + (int)2);
				HX_STACK_LINE(727)
				vector->x = normals->__get(ni0);
				HX_STACK_LINE(728)
				vector->y = normals->__get(i1);
				HX_STACK_LINE(729)
				vector->z = normals->__get(i2);
				HX_STACK_LINE(730)
				vector = invTranspose->deltaTransformVector(vector);
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					Float l = ::Math_obj::sqrt((((vector->x * vector->x) + (vector->y * vector->y)) + (vector->z * vector->z)));		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(731)
					if (((l != (int)0))){
						HX_STACK_LINE(731)
						hx::DivEq(vector->x,l);
						HX_STACK_LINE(731)
						hx::DivEq(vector->y,l);
						HX_STACK_LINE(731)
						hx::DivEq(vector->z,l);
					}
					HX_STACK_LINE(731)
					l;
				}
				HX_STACK_LINE(732)
				normals[ni0] = vector->x;
				HX_STACK_LINE(733)
				normals[i1] = vector->y;
				HX_STACK_LINE(734)
				normals[i2] = vector->z;
				HX_STACK_LINE(735)
				hx::AddEq(ni0,normalStride);
			}
			HX_STACK_LINE(737)
			if ((bakeTangents)){
				HX_STACK_LINE(738)
				i1 = (ti0 + (int)1);
				HX_STACK_LINE(739)
				i2 = (ti0 + (int)2);
				HX_STACK_LINE(740)
				vector->x = tangents->__get(ti0);
				HX_STACK_LINE(741)
				vector->y = tangents->__get(i1);
				HX_STACK_LINE(742)
				vector->z = tangents->__get(i2);
				HX_STACK_LINE(743)
				vector = invTranspose->deltaTransformVector(vector);
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					Float l = ::Math_obj::sqrt((((vector->x * vector->x) + (vector->y * vector->y)) + (vector->z * vector->z)));		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(744)
					if (((l != (int)0))){
						HX_STACK_LINE(744)
						hx::DivEq(vector->x,l);
						HX_STACK_LINE(744)
						hx::DivEq(vector->y,l);
						HX_STACK_LINE(744)
						hx::DivEq(vector->z,l);
					}
					HX_STACK_LINE(744)
					l;
				}
				HX_STACK_LINE(745)
				tangents[ti0] = vector->x;
				HX_STACK_LINE(746)
				tangents[i1] = vector->y;
				HX_STACK_LINE(747)
				tangents[i2] = vector->z;
				HX_STACK_LINE(748)
				hx::AddEq(ti0,tangentStride);
			}
			HX_STACK_LINE(750)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,applyTransformation,(void))

Void SubGeometryBase_obj::scale( Float scale){
{
		HX_STACK_PUSH("SubGeometryBase::scale","away3d/core/base/SubGeometryBase.hx",670);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(671)
		Array< Float > vertices = this->get_UVData();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(672)
		int len = vertices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(673)
		int offset = this->get_vertexOffset();		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(674)
		int stride = this->get_vertexStride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(675)
		int i = offset;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(676)
		while(((i < len))){
			HX_STACK_LINE(677)
			hx::MultEq(vertices[i],scale);
			HX_STACK_LINE(678)
			hx::MultEq(vertices[(i + (int)1)],scale);
			HX_STACK_LINE(679)
			hx::MultEq(vertices[(i + (int)2)],scale);
			HX_STACK_LINE(680)
			hx::AddEq(i,stride);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,scale,(void))

Void SubGeometryBase_obj::scaleUV( hx::Null< Float >  __o_scaleU,hx::Null< Float >  __o_scaleV){
Float scaleU = __o_scaleU.Default(1);
Float scaleV = __o_scaleV.Default(1);
	HX_STACK_PUSH("SubGeometryBase::scaleUV","away3d/core/base/SubGeometryBase.hx",648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleU,"scaleU");
	HX_STACK_ARG(scaleV,"scaleV");
{
		HX_STACK_LINE(649)
		int offset = this->get_UVOffset();		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(650)
		int stride = this->get_UVStride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(651)
		Array< Float > uvs = this->get_UVData();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(652)
		int len = uvs->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(653)
		Float ratioU = (Float(scaleU) / Float(this->_scaleU));		HX_STACK_VAR(ratioU,"ratioU");
		HX_STACK_LINE(654)
		Float ratioV = (Float(scaleV) / Float(this->_scaleV));		HX_STACK_VAR(ratioV,"ratioV");
		HX_STACK_LINE(655)
		int i = offset;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(656)
		while(((i < len))){
			HX_STACK_LINE(657)
			hx::MultEq(uvs[i],ratioU);
			HX_STACK_LINE(658)
			hx::MultEq(uvs[(i + (int)1)],ratioV);
			HX_STACK_LINE(659)
			hx::AddEq(i,stride);
		}
		HX_STACK_LINE(661)
		this->_scaleU = scaleU;
		HX_STACK_LINE(662)
		this->_scaleV = scaleV;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubGeometryBase_obj,scaleUV,(void))

Float SubGeometryBase_obj::get_scaleV( ){
	HX_STACK_PUSH("SubGeometryBase::get_scaleV","away3d/core/base/SubGeometryBase.hx",644);
	HX_STACK_THIS(this);
	HX_STACK_LINE(644)
	return this->_scaleV;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_scaleV,return )

Float SubGeometryBase_obj::get_scaleU( ){
	HX_STACK_PUSH("SubGeometryBase::get_scaleU","away3d/core/base/SubGeometryBase.hx",640);
	HX_STACK_THIS(this);
	HX_STACK_LINE(640)
	return this->_scaleU;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_scaleU,return )

::away3d::core::base::Geometry SubGeometryBase_obj::set_parentGeometry( ::away3d::core::base::Geometry value){
	HX_STACK_PUSH("SubGeometryBase::set_parentGeometry","away3d/core/base/SubGeometryBase.hx",629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(630)
	this->_parentGeometry = value;
	HX_STACK_LINE(631)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,set_parentGeometry,return )

::away3d::core::base::Geometry SubGeometryBase_obj::get_parentGeometry( ){
	HX_STACK_PUSH("SubGeometryBase::get_parentGeometry","away3d/core/base/SubGeometryBase.hx",625);
	HX_STACK_THIS(this);
	HX_STACK_LINE(625)
	return this->_parentGeometry;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_parentGeometry,return )

Void SubGeometryBase_obj::invalidateBounds( ){
{
		HX_STACK_PUSH("SubGeometryBase::invalidateBounds","away3d/core/base/SubGeometryBase.hx",615);
		HX_STACK_THIS(this);
		HX_STACK_LINE(615)
		if (((this->_parentGeometry != null()))){
			HX_STACK_LINE(616)
			this->_parentGeometry->invalidateBounds(hx::TCast< away3d::core::base::ISubGeometry >::cast(hx::ObjectPtr<OBJ_>(this)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,invalidateBounds,(void))

int SubGeometryBase_obj::get_UVOffset( ){
	HX_STACK_PUSH("SubGeometryBase::get_UVOffset","away3d/core/base/SubGeometryBase.hx",610);
	HX_STACK_THIS(this);
	HX_STACK_LINE(611)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(612)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_UVOffset,return )

int SubGeometryBase_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexTangentOffset","away3d/core/base/SubGeometryBase.hx",605);
	HX_STACK_THIS(this);
	HX_STACK_LINE(606)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(607)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexTangentOffset,return )

int SubGeometryBase_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexNormalOffset","away3d/core/base/SubGeometryBase.hx",600);
	HX_STACK_THIS(this);
	HX_STACK_LINE(601)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(602)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexNormalOffset,return )

int SubGeometryBase_obj::get_vertexOffset( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexOffset","away3d/core/base/SubGeometryBase.hx",595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(596)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(597)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexOffset,return )

int SubGeometryBase_obj::get_vertexTangentStride( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexTangentStride","away3d/core/base/SubGeometryBase.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_LINE(591)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(592)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexTangentStride,return )

int SubGeometryBase_obj::get_vertexNormalStride( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexNormalStride","away3d/core/base/SubGeometryBase.hx",585);
	HX_STACK_THIS(this);
	HX_STACK_LINE(586)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(587)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexNormalStride,return )

int SubGeometryBase_obj::get_vertexStride( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexStride","away3d/core/base/SubGeometryBase.hx",580);
	HX_STACK_THIS(this);
	HX_STACK_LINE(581)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(582)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexStride,return )

Array< Float > SubGeometryBase_obj::get_UVData( ){
	HX_STACK_PUSH("SubGeometryBase::get_UVData","away3d/core/base/SubGeometryBase.hx",575);
	HX_STACK_THIS(this);
	HX_STACK_LINE(576)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(577)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_UVData,return )

Array< Float > SubGeometryBase_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexTangentData","away3d/core/base/SubGeometryBase.hx",570);
	HX_STACK_THIS(this);
	HX_STACK_LINE(571)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(572)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexTangentData,return )

Array< Float > SubGeometryBase_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexNormalData","away3d/core/base/SubGeometryBase.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_LINE(566)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(567)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexNormalData,return )

Array< Float > SubGeometryBase_obj::get_vertexPositionData( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexPositionData","away3d/core/base/SubGeometryBase.hx",560);
	HX_STACK_THIS(this);
	HX_STACK_LINE(561)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(562)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexPositionData,return )

Array< Float > SubGeometryBase_obj::get_vertexData( ){
	HX_STACK_PUSH("SubGeometryBase::get_vertexData","away3d/core/base/SubGeometryBase.hx",555);
	HX_STACK_THIS(this);
	HX_STACK_LINE(556)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(557)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_vertexData,return )

int SubGeometryBase_obj::get_UVStride( ){
	HX_STACK_PUSH("SubGeometryBase::get_UVStride","away3d/core/base/SubGeometryBase.hx",550);
	HX_STACK_THIS(this);
	HX_STACK_LINE(551)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(552)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_UVStride,return )

Void SubGeometryBase_obj::invalidateBuffers( Array< bool > invalid){
{
		HX_STACK_PUSH("SubGeometryBase::invalidateBuffers","away3d/core/base/SubGeometryBase.hx",542);
		HX_STACK_THIS(this);
		HX_STACK_ARG(invalid,"invalid");
		HX_STACK_LINE(543)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(544)
		while(((i < (int)8))){
			HX_STACK_LINE(545)
			invalid[i] = true;
			HX_STACK_LINE(546)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,invalidateBuffers,(void))

Array< Float > SubGeometryBase_obj::get_faceNormals( ){
	HX_STACK_PUSH("SubGeometryBase::get_faceNormals","away3d/core/base/SubGeometryBase.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(533)
	if ((this->_faceNormalsDirty)){
		HX_STACK_LINE(533)
		this->updateFaceNormals();
	}
	HX_STACK_LINE(534)
	return this->_faceNormals;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_faceNormals,return )

bool SubGeometryBase_obj::set_autoDeriveVertexTangents( bool value){
	HX_STACK_PUSH("SubGeometryBase::set_autoDeriveVertexTangents","away3d/core/base/SubGeometryBase.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(521)
	this->_autoDeriveVertexTangents = value;
	HX_STACK_LINE(522)
	this->_vertexTangentsDirty = value;
	HX_STACK_LINE(523)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,set_autoDeriveVertexTangents,return )

bool SubGeometryBase_obj::get_autoDeriveVertexTangents( ){
	HX_STACK_PUSH("SubGeometryBase::get_autoDeriveVertexTangents","away3d/core/base/SubGeometryBase.hx",516);
	HX_STACK_THIS(this);
	HX_STACK_LINE(516)
	return this->_autoDeriveVertexTangents;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_autoDeriveVertexTangents,return )

Void SubGeometryBase_obj::disposeVertexBuffers( Array< ::Dynamic > buffers){
{
		HX_STACK_PUSH("SubGeometryBase::disposeVertexBuffers","away3d/core/base/SubGeometryBase.hx",500);
		HX_STACK_THIS(this);
		HX_STACK_ARG(buffers,"buffers");
		HX_STACK_LINE(501)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(502)
		while(((i < (int)8))){
			HX_STACK_LINE(503)
			if (((buffers->__get(i).StaticCast< ::flash::display3D::VertexBuffer3D >() != null()))){
				HX_STACK_LINE(504)
				buffers->__get(i).StaticCast< ::flash::display3D::VertexBuffer3D >()->dispose();
				HX_STACK_LINE(505)
				buffers[i] = null();
			}
			HX_STACK_LINE(507)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,disposeVertexBuffers,(void))

Void SubGeometryBase_obj::disposeIndexBuffers( Array< ::Dynamic > buffers){
{
		HX_STACK_PUSH("SubGeometryBase::disposeIndexBuffers","away3d/core/base/SubGeometryBase.hx",484);
		HX_STACK_THIS(this);
		HX_STACK_ARG(buffers,"buffers");
		HX_STACK_LINE(485)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(486)
		while(((i < (int)8))){
			HX_STACK_LINE(487)
			if (((buffers->__get(i).StaticCast< ::flash::display3D::IndexBuffer3D >() != null()))){
				HX_STACK_LINE(488)
				buffers->__get(i).StaticCast< ::flash::display3D::IndexBuffer3D >()->dispose();
				HX_STACK_LINE(489)
				buffers[i] = null();
			}
			HX_STACK_LINE(491)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,disposeIndexBuffers,(void))

Void SubGeometryBase_obj::updateIndexData( Array< int > indices){
{
		HX_STACK_PUSH("SubGeometryBase::updateIndexData","away3d/core/base/SubGeometryBase.hx",467);
		HX_STACK_THIS(this);
		HX_STACK_ARG(indices,"indices");
		HX_STACK_LINE(468)
		this->_indices = indices;
		HX_STACK_LINE(469)
		this->_numIndices = indices->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(470)
		int numTriangles = ::Std_obj::_int((Float(this->_numIndices) / Float((int)3)));		HX_STACK_VAR(numTriangles,"numTriangles");
		HX_STACK_LINE(471)
		if (((this->_numTriangles != numTriangles))){
			HX_STACK_LINE(471)
			this->disposeIndexBuffers(this->_indexBuffer);
		}
		HX_STACK_LINE(472)
		this->_numTriangles = numTriangles;
		HX_STACK_LINE(473)
		this->invalidateBuffers(this->_indicesInvalid);
		HX_STACK_LINE(474)
		this->_faceNormalsDirty = true;
		HX_STACK_LINE(475)
		if ((this->_autoDeriveVertexNormals)){
			HX_STACK_LINE(475)
			this->_vertexNormalsDirty = true;
		}
		HX_STACK_LINE(476)
		if ((this->_autoDeriveVertexTangents)){
			HX_STACK_LINE(476)
			this->_vertexTangentsDirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,updateIndexData,(void))

Array< int > SubGeometryBase_obj::get_indexData( ){
	HX_STACK_PUSH("SubGeometryBase::get_indexData","away3d/core/base/SubGeometryBase.hx",457);
	HX_STACK_THIS(this);
	HX_STACK_LINE(457)
	return this->_indices;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_indexData,return )

Void SubGeometryBase_obj::dispose( ){
{
		HX_STACK_PUSH("SubGeometryBase::dispose","away3d/core/base/SubGeometryBase.hx",441);
		HX_STACK_THIS(this);
		HX_STACK_LINE(442)
		this->disposeIndexBuffers(this->_indexBuffer);
		HX_STACK_LINE(443)
		this->_indices = null();
		HX_STACK_LINE(444)
		this->_indexBufferContext = null();
		HX_STACK_LINE(445)
		this->_faceNormals = null();
		HX_STACK_LINE(446)
		this->_faceWeights = null();
		HX_STACK_LINE(447)
		this->_faceTangents = null();
		HX_STACK_LINE(448)
		this->_vertexData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,dispose,(void))

Array< Float > SubGeometryBase_obj::updateVertexTangents( Array< Float > target){
	HX_STACK_PUSH("SubGeometryBase::updateVertexTangents","away3d/core/base/SubGeometryBase.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(380)
	if ((this->_faceTangentsDirty)){
		HX_STACK_LINE(380)
		this->updateFaceTangents();
	}
	HX_STACK_LINE(381)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(382)
	int lenV = this->_vertexData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(lenV,"lenV");
	HX_STACK_LINE(383)
	int tangentStride = this->get_vertexTangentStride();		HX_STACK_VAR(tangentStride,"tangentStride");
	HX_STACK_LINE(384)
	int tangentOffset = this->get_vertexTangentOffset();		HX_STACK_VAR(tangentOffset,"tangentOffset");
	HX_STACK_LINE(385)
	if (((target == null()))){
		HX_STACK_LINE(387)
		target = ::flash::_Vector::Vector_Impl__obj::_new(lenV,true);
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(388)
			while((((c)++ < lenV))){
				HX_STACK_LINE(388)
				target->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(388)
			target;
		}
	}
	HX_STACK_LINE(390)
	i = tangentOffset;
	HX_STACK_LINE(391)
	while(((i < lenV))){
		HX_STACK_LINE(392)
		target[i] = 0.0;
		HX_STACK_LINE(393)
		target[(i + (int)1)] = 0.0;
		HX_STACK_LINE(394)
		target[(i + (int)2)] = 0.0;
		HX_STACK_LINE(395)
		hx::AddEq(i,tangentStride);
	}
	HX_STACK_LINE(398)
	int k = (int)0;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(399)
	int lenI = this->_indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(lenI,"lenI");
	HX_STACK_LINE(400)
	int index;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(401)
	Float weight;		HX_STACK_VAR(weight,"weight");
	HX_STACK_LINE(402)
	int f1 = (int)0;		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(403)
	int f2 = (int)1;		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(404)
	int f3 = (int)2;		HX_STACK_VAR(f3,"f3");
	HX_STACK_LINE(405)
	i = (int)0;
	HX_STACK_LINE(406)
	while(((i < lenI))){
		HX_STACK_LINE(407)
		weight = (  ((this->_useFaceWeights)) ? Float(this->_faceWeights->__get((k)++)) : Float((int)1) );
		HX_STACK_LINE(408)
		index = (tangentOffset + (this->_indices->__get((i)++) * tangentStride));
		HX_STACK_LINE(409)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f1) * weight));
		HX_STACK_LINE(410)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f2) * weight));
		HX_STACK_LINE(411)
		hx::AddEq(target[index],(this->_faceTangents->__get(f3) * weight));
		HX_STACK_LINE(412)
		index = (tangentOffset + (this->_indices->__get((i)++) * tangentStride));
		HX_STACK_LINE(413)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f1) * weight));
		HX_STACK_LINE(414)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f2) * weight));
		HX_STACK_LINE(415)
		hx::AddEq(target[index],(this->_faceTangents->__get(f3) * weight));
		HX_STACK_LINE(416)
		index = (tangentOffset + (this->_indices->__get((i)++) * tangentStride));
		HX_STACK_LINE(417)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f1) * weight));
		HX_STACK_LINE(418)
		hx::AddEq(target[(index)++],(this->_faceTangents->__get(f2) * weight));
		HX_STACK_LINE(419)
		hx::AddEq(target[index],(this->_faceTangents->__get(f3) * weight));
		HX_STACK_LINE(420)
		hx::AddEq(f1,(int)3);
		HX_STACK_LINE(421)
		hx::AddEq(f2,(int)3);
		HX_STACK_LINE(422)
		hx::AddEq(f3,(int)3);
	}
	HX_STACK_LINE(425)
	i = tangentOffset;
	HX_STACK_LINE(426)
	while(((i < lenV))){
		HX_STACK_LINE(427)
		Float vx = target->__get(i);		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(428)
		Float vy = target->__get((i + (int)1));		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(429)
		Float vz = target->__get((i + (int)2));		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(430)
		Float d = (Float(1.0) / Float(::Math_obj::sqrt((((vx * vx) + (vy * vy)) + (vz * vz)))));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(431)
		target[i] = (vx * d);
		HX_STACK_LINE(432)
		target[(i + (int)1)] = (vy * d);
		HX_STACK_LINE(433)
		target[(i + (int)2)] = (vz * d);
		HX_STACK_LINE(434)
		hx::AddEq(i,tangentStride);
	}
	HX_STACK_LINE(437)
	this->_vertexTangentsDirty = false;
	HX_STACK_LINE(438)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,updateVertexTangents,return )

Array< Float > SubGeometryBase_obj::updateVertexNormals( Array< Float > target){
	HX_STACK_PUSH("SubGeometryBase::updateVertexNormals","away3d/core/base/SubGeometryBase.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(314)
	if ((this->_faceNormalsDirty)){
		HX_STACK_LINE(314)
		this->updateFaceNormals();
	}
	HX_STACK_LINE(315)
	int v1;		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(316)
	int f1 = (int)0;		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(317)
	int f2 = (int)1;		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(318)
	int f3 = (int)2;		HX_STACK_VAR(f3,"f3");
	HX_STACK_LINE(319)
	int lenV = this->_vertexData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(lenV,"lenV");
	HX_STACK_LINE(320)
	int normalStride = this->get_vertexNormalStride();		HX_STACK_VAR(normalStride,"normalStride");
	HX_STACK_LINE(321)
	int normalOffset = this->get_vertexNormalOffset();		HX_STACK_VAR(normalOffset,"normalOffset");
	HX_STACK_LINE(322)
	if (((target == null()))){
		HX_STACK_LINE(324)
		target = ::flash::_Vector::Vector_Impl__obj::_new(lenV,true);
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(325)
			while((((c)++ < lenV))){
				HX_STACK_LINE(325)
				target->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(325)
			target;
		}
	}
	HX_STACK_LINE(327)
	v1 = normalOffset;
	HX_STACK_LINE(328)
	while(((v1 < lenV))){
		HX_STACK_LINE(329)
		target[v1] = 0.0;
		HX_STACK_LINE(330)
		target[(v1 + (int)1)] = 0.0;
		HX_STACK_LINE(331)
		target[(v1 + (int)2)] = 0.0;
		HX_STACK_LINE(332)
		hx::AddEq(v1,normalStride);
	}
	HX_STACK_LINE(335)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(336)
	int k = (int)0;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(337)
	int lenI = this->_indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(lenI,"lenI");
	HX_STACK_LINE(338)
	int index;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(339)
	Float weight;		HX_STACK_VAR(weight,"weight");
	HX_STACK_LINE(340)
	while(((i < lenI))){
		HX_STACK_LINE(341)
		weight = (  ((this->_useFaceWeights)) ? Float(this->_faceWeights->__get((k)++)) : Float((int)1) );
		HX_STACK_LINE(342)
		index = (normalOffset + (this->_indices->__get((i)++) * normalStride));
		HX_STACK_LINE(343)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f1) * weight));
		HX_STACK_LINE(344)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f2) * weight));
		HX_STACK_LINE(345)
		hx::AddEq(target[index],(this->_faceNormals->__get(f3) * weight));
		HX_STACK_LINE(346)
		index = (normalOffset + (this->_indices->__get((i)++) * normalStride));
		HX_STACK_LINE(347)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f1) * weight));
		HX_STACK_LINE(348)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f2) * weight));
		HX_STACK_LINE(349)
		hx::AddEq(target[index],(this->_faceNormals->__get(f3) * weight));
		HX_STACK_LINE(350)
		index = (normalOffset + (this->_indices->__get((i)++) * normalStride));
		HX_STACK_LINE(351)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f1) * weight));
		HX_STACK_LINE(352)
		hx::AddEq(target[(index)++],(this->_faceNormals->__get(f2) * weight));
		HX_STACK_LINE(353)
		hx::AddEq(target[index],(this->_faceNormals->__get(f3) * weight));
		HX_STACK_LINE(354)
		hx::AddEq(f1,(int)3);
		HX_STACK_LINE(355)
		hx::AddEq(f2,(int)3);
		HX_STACK_LINE(356)
		hx::AddEq(f3,(int)3);
	}
	HX_STACK_LINE(359)
	v1 = normalOffset;
	HX_STACK_LINE(360)
	while(((v1 < lenV))){
		HX_STACK_LINE(361)
		Float vx = target->__get(v1);		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(362)
		Float vy = target->__get((v1 + (int)1));		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(363)
		Float vz = target->__get((v1 + (int)2));		HX_STACK_VAR(vz,"vz");
		HX_STACK_LINE(364)
		Float d = (Float(1.0) / Float(::Math_obj::sqrt((((vx * vx) + (vy * vy)) + (vz * vz)))));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(365)
		target[v1] = (vx * d);
		HX_STACK_LINE(366)
		target[(v1 + (int)1)] = (vy * d);
		HX_STACK_LINE(367)
		target[(v1 + (int)2)] = (vz * d);
		HX_STACK_LINE(368)
		hx::AddEq(v1,normalStride);
	}
	HX_STACK_LINE(371)
	this->_vertexNormalsDirty = false;
	HX_STACK_LINE(372)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,updateVertexNormals,return )

Void SubGeometryBase_obj::updateFaceNormals( ){
{
		HX_STACK_PUSH("SubGeometryBase::updateFaceNormals","away3d/core/base/SubGeometryBase.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_LINE(234)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(235)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(236)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(237)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(238)
		int len = this->_indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(239)
		Float x1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(240)
		Float x2;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(241)
		Float x3;		HX_STACK_VAR(x3,"x3");
		HX_STACK_LINE(242)
		Float y1;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(243)
		Float y2;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(244)
		Float y3;		HX_STACK_VAR(y3,"y3");
		HX_STACK_LINE(245)
		Float z1;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(246)
		Float z2;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(247)
		Float z3;		HX_STACK_VAR(z3,"z3");
		HX_STACK_LINE(248)
		Float dx1;		HX_STACK_VAR(dx1,"dx1");
		HX_STACK_LINE(249)
		Float dy1;		HX_STACK_VAR(dy1,"dy1");
		HX_STACK_LINE(250)
		Float dz1;		HX_STACK_VAR(dz1,"dz1");
		HX_STACK_LINE(251)
		Float dx2;		HX_STACK_VAR(dx2,"dx2");
		HX_STACK_LINE(252)
		Float dy2;		HX_STACK_VAR(dy2,"dy2");
		HX_STACK_LINE(253)
		Float dz2;		HX_STACK_VAR(dz2,"dz2");
		HX_STACK_LINE(254)
		Float cx;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(255)
		Float cy;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(256)
		Float cz;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(257)
		Float d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(258)
		Array< Float > vertices = this->_vertexData;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(259)
		int posStride = this->get_vertexStride();		HX_STACK_VAR(posStride,"posStride");
		HX_STACK_LINE(260)
		int posOffset = this->get_vertexOffset();		HX_STACK_VAR(posOffset,"posOffset");
		HX_STACK_LINE(261)
		if (((this->_faceNormals == null()))){
			HX_STACK_LINE(263)
			this->_faceNormals = ::flash::_Vector::Vector_Impl__obj::_new(len,true);
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				Dynamic array = this->_faceNormals;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(264)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(264)
				while((((c)++ < len))){
					HX_STACK_LINE(264)
					array->__Field(HX_CSTRING("push"),true)((int)0);
				}
				HX_STACK_LINE(264)
				array;
			}
		}
		HX_STACK_LINE(266)
		if (((this->_faceWeights == null()))){
			HX_STACK_LINE(267)
			this->_faceWeights = ::flash::_Vector::Vector_Impl__obj::_new(::Std_obj::_int((Float(len) / Float((int)3))),true);
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				Dynamic array = this->_faceWeights;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(268)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(268)
				while((((c)++ < ::Std_obj::_int((Float(len) / Float((int)3)))))){
					HX_STACK_LINE(268)
					array->__Field(HX_CSTRING("push"),true)((int)0);
				}
				HX_STACK_LINE(268)
				array;
			}
		}
		HX_STACK_LINE(271)
		while(((i < len))){
			HX_STACK_LINE(272)
			index = (posOffset + (this->_indices->__get((i)++) * posStride));
			HX_STACK_LINE(273)
			x1 = vertices->__get(index);
			HX_STACK_LINE(274)
			y1 = vertices->__get((index + (int)1));
			HX_STACK_LINE(275)
			z1 = vertices->__get((index + (int)2));
			HX_STACK_LINE(276)
			index = (posOffset + (this->_indices->__get((i)++) * posStride));
			HX_STACK_LINE(277)
			x2 = vertices->__get(index);
			HX_STACK_LINE(278)
			y2 = vertices->__get((index + (int)1));
			HX_STACK_LINE(279)
			z2 = vertices->__get((index + (int)2));
			HX_STACK_LINE(280)
			index = (posOffset + (this->_indices->__get((i)++) * posStride));
			HX_STACK_LINE(281)
			x3 = vertices->__get(index);
			HX_STACK_LINE(282)
			y3 = vertices->__get((index + (int)1));
			HX_STACK_LINE(283)
			z3 = vertices->__get((index + (int)2));
			HX_STACK_LINE(284)
			dx1 = (x3 - x1);
			HX_STACK_LINE(285)
			dy1 = (y3 - y1);
			HX_STACK_LINE(286)
			dz1 = (z3 - z1);
			HX_STACK_LINE(287)
			dx2 = (x2 - x1);
			HX_STACK_LINE(288)
			dy2 = (y2 - y1);
			HX_STACK_LINE(289)
			dz2 = (z2 - z1);
			HX_STACK_LINE(290)
			cx = ((dz1 * dy2) - (dy1 * dz2));
			HX_STACK_LINE(291)
			cy = ((dx1 * dz2) - (dz1 * dx2));
			HX_STACK_LINE(292)
			cz = ((dy1 * dx2) - (dx1 * dy2));
			HX_STACK_LINE(293)
			d = ::Math_obj::sqrt((((cx * cx) + (cy * cy)) + (cz * cz)));
			HX_STACK_LINE(295)
			if ((this->_useFaceWeights)){
				HX_STACK_LINE(296)
				Float w = (d * (int)10000);		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(297)
				if (((w < (int)1))){
					HX_STACK_LINE(297)
					w = (int)1;
				}
				HX_STACK_LINE(298)
				this->_faceWeights[(k)++] = w;
			}
			HX_STACK_LINE(300)
			d = (Float((int)1) / Float(d));
			HX_STACK_LINE(301)
			this->_faceNormals[(j)++] = (cx * d);
			HX_STACK_LINE(302)
			this->_faceNormals[(j)++] = (cy * d);
			HX_STACK_LINE(303)
			this->_faceNormals[(j)++] = (cz * d);
		}
		HX_STACK_LINE(306)
		this->_faceNormalsDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,updateFaceNormals,(void))

Void SubGeometryBase_obj::updateFaceTangents( ){
{
		HX_STACK_PUSH("SubGeometryBase::updateFaceTangents","away3d/core/base/SubGeometryBase.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_LINE(163)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(164)
		int index1;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(165)
		int index2;		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(166)
		int index3;		HX_STACK_VAR(index3,"index3");
		HX_STACK_LINE(167)
		int len = this->_indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(168)
		int ui;		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(169)
		int vi;		HX_STACK_VAR(vi,"vi");
		HX_STACK_LINE(170)
		Float v0;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(171)
		Float dv1;		HX_STACK_VAR(dv1,"dv1");
		HX_STACK_LINE(172)
		Float dv2;		HX_STACK_VAR(dv2,"dv2");
		HX_STACK_LINE(173)
		Float denom;		HX_STACK_VAR(denom,"denom");
		HX_STACK_LINE(174)
		Float x0;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(175)
		Float y0;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(176)
		Float z0;		HX_STACK_VAR(z0,"z0");
		HX_STACK_LINE(177)
		Float dx1;		HX_STACK_VAR(dx1,"dx1");
		HX_STACK_LINE(178)
		Float dy1;		HX_STACK_VAR(dy1,"dy1");
		HX_STACK_LINE(179)
		Float dz1;		HX_STACK_VAR(dz1,"dz1");
		HX_STACK_LINE(180)
		Float dx2;		HX_STACK_VAR(dx2,"dx2");
		HX_STACK_LINE(181)
		Float dy2;		HX_STACK_VAR(dy2,"dy2");
		HX_STACK_LINE(182)
		Float dz2;		HX_STACK_VAR(dz2,"dz2");
		HX_STACK_LINE(183)
		Float cx;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(184)
		Float cy;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(185)
		Float cz;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(186)
		Array< Float > vertices = this->_vertexData;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(187)
		Array< Float > uvs = this->get_UVData();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(188)
		int posStride = this->get_vertexStride();		HX_STACK_VAR(posStride,"posStride");
		HX_STACK_LINE(189)
		int posOffset = this->get_vertexOffset();		HX_STACK_VAR(posOffset,"posOffset");
		HX_STACK_LINE(190)
		int texStride = this->get_UVStride();		HX_STACK_VAR(texStride,"texStride");
		HX_STACK_LINE(191)
		int texOffset = this->get_UVOffset();		HX_STACK_VAR(texOffset,"texOffset");
		HX_STACK_LINE(192)
		if (((this->_faceTangents == null()))){
			HX_STACK_LINE(193)
			this->_faceTangents = ::flash::_Vector::Vector_Impl__obj::_new(this->_indices->__Field(HX_CSTRING("length"),true),true);
		}
		HX_STACK_LINE(195)
		while(((i < len))){
			HX_STACK_LINE(196)
			index1 = this->_indices->__get(i);
			HX_STACK_LINE(197)
			index2 = this->_indices->__get((i + (int)1));
			HX_STACK_LINE(198)
			index3 = this->_indices->__get((i + (int)2));
			HX_STACK_LINE(199)
			ui = ((texOffset + (index1 * texStride)) + (int)1);
			HX_STACK_LINE(200)
			v0 = uvs->__get(ui);
			HX_STACK_LINE(201)
			ui = ((texOffset + (index2 * texStride)) + (int)1);
			HX_STACK_LINE(202)
			dv1 = (uvs->__get(ui) - v0);
			HX_STACK_LINE(203)
			ui = ((texOffset + (index3 * texStride)) + (int)1);
			HX_STACK_LINE(204)
			dv2 = (uvs->__get(ui) - v0);
			HX_STACK_LINE(205)
			vi = (posOffset + (index1 * posStride));
			HX_STACK_LINE(206)
			x0 = vertices->__get(vi);
			HX_STACK_LINE(207)
			y0 = vertices->__get((vi + (int)1));
			HX_STACK_LINE(208)
			z0 = vertices->__get((vi + (int)2));
			HX_STACK_LINE(209)
			vi = (posOffset + (index2 * posStride));
			HX_STACK_LINE(210)
			dx1 = (vertices->__get(vi) - x0);
			HX_STACK_LINE(211)
			dy1 = (vertices->__get((vi + (int)1)) - y0);
			HX_STACK_LINE(212)
			dz1 = (vertices->__get((vi + (int)2)) - z0);
			HX_STACK_LINE(213)
			vi = (posOffset + (index3 * posStride));
			HX_STACK_LINE(214)
			dx2 = (vertices->__get(vi) - x0);
			HX_STACK_LINE(215)
			dy2 = (vertices->__get((vi + (int)1)) - y0);
			HX_STACK_LINE(216)
			dz2 = (vertices->__get((vi + (int)2)) - z0);
			HX_STACK_LINE(217)
			cx = ((dv2 * dx1) - (dv1 * dx2));
			HX_STACK_LINE(218)
			cy = ((dv2 * dy1) - (dv1 * dy2));
			HX_STACK_LINE(219)
			cz = ((dv2 * dz1) - (dv1 * dz2));
			HX_STACK_LINE(220)
			denom = (Float((int)1) / Float(::Math_obj::sqrt((((cx * cx) + (cy * cy)) + (cz * cz)))));
			HX_STACK_LINE(221)
			this->_faceTangents[(i)++] = (denom * cx);
			HX_STACK_LINE(222)
			this->_faceTangents[(i)++] = (denom * cy);
			HX_STACK_LINE(223)
			this->_faceTangents[(i)++] = (denom * cz);
		}
		HX_STACK_LINE(226)
		this->_faceTangentsDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,updateFaceTangents,(void))

::flash::display3D::IndexBuffer3D SubGeometryBase_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("SubGeometryBase::getIndexBuffer","away3d/core/base/SubGeometryBase.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(142)
	int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
	HX_STACK_LINE(143)
	::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(144)
	if (((bool((this->_indexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::IndexBuffer3D >() == null())) || bool((this->_indexBufferContext->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
		HX_STACK_LINE(145)
		this->_indexBuffer[contextIndex] = context->createIndexBuffer(this->_numIndices);
		HX_STACK_LINE(146)
		this->_indexBufferContext[contextIndex] = context;
		HX_STACK_LINE(147)
		this->_indicesInvalid[contextIndex] = true;
	}
	HX_STACK_LINE(149)
	if ((this->_indicesInvalid->__get(contextIndex))){
		HX_STACK_LINE(150)
		this->_indexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::IndexBuffer3D >()->uploadFromVector(this->_indices,(int)0,this->_numIndices);
		HX_STACK_LINE(151)
		this->_indicesInvalid[contextIndex] = false;
	}
	HX_STACK_LINE(155)
	return this->_indexBuffer->__get(contextIndex).StaticCast< ::flash::display3D::IndexBuffer3D >();
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,getIndexBuffer,return )

int SubGeometryBase_obj::get_numTriangles( ){
	HX_STACK_PUSH("SubGeometryBase::get_numTriangles","away3d/core/base/SubGeometryBase.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return this->_numTriangles;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_numTriangles,return )

bool SubGeometryBase_obj::set_useFaceWeights( bool value){
	HX_STACK_PUSH("SubGeometryBase::set_useFaceWeights","away3d/core/base/SubGeometryBase.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(120)
	this->_useFaceWeights = value;
	HX_STACK_LINE(121)
	if ((this->_autoDeriveVertexNormals)){
		HX_STACK_LINE(121)
		this->_vertexNormalsDirty = true;
	}
	HX_STACK_LINE(122)
	if ((this->_autoDeriveVertexTangents)){
		HX_STACK_LINE(122)
		this->_vertexTangentsDirty = true;
	}
	HX_STACK_LINE(123)
	this->_faceNormalsDirty = true;
	HX_STACK_LINE(124)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,set_useFaceWeights,return )

bool SubGeometryBase_obj::get_useFaceWeights( ){
	HX_STACK_PUSH("SubGeometryBase::get_useFaceWeights","away3d/core/base/SubGeometryBase.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_LINE(115)
	return this->_useFaceWeights;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_useFaceWeights,return )

bool SubGeometryBase_obj::set_autoDeriveVertexNormals( bool value){
	HX_STACK_PUSH("SubGeometryBase::set_autoDeriveVertexNormals","away3d/core/base/SubGeometryBase.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(106)
	this->_autoDeriveVertexNormals = value;
	HX_STACK_LINE(107)
	this->_vertexNormalsDirty = value;
	HX_STACK_LINE(108)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,set_autoDeriveVertexNormals,return )

bool SubGeometryBase_obj::get_autoDeriveVertexNormals( ){
	HX_STACK_PUSH("SubGeometryBase::get_autoDeriveVertexNormals","away3d/core/base/SubGeometryBase.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	return this->_autoDeriveVertexNormals;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_autoDeriveVertexNormals,return )

bool SubGeometryBase_obj::set_autoGenerateDummyUVs( bool value){
	HX_STACK_PUSH("SubGeometryBase::set_autoGenerateDummyUVs","away3d/core/base/SubGeometryBase.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(91)
	this->_autoGenerateUVs = value;
	HX_STACK_LINE(92)
	this->_uvsDirty = value;
	HX_STACK_LINE(93)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubGeometryBase_obj,set_autoGenerateDummyUVs,return )

bool SubGeometryBase_obj::get_autoGenerateDummyUVs( ){
	HX_STACK_PUSH("SubGeometryBase::get_autoGenerateDummyUVs","away3d/core/base/SubGeometryBase.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_autoGenerateUVs;
}


HX_DEFINE_DYNAMIC_FUNC0(SubGeometryBase_obj,get_autoGenerateDummyUVs,return )


SubGeometryBase_obj::SubGeometryBase_obj()
{
}

void SubGeometryBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubGeometryBase);
	HX_MARK_MEMBER_NAME(_uvsDirty,"_uvsDirty");
	HX_MARK_MEMBER_NAME(_scaleV,"_scaleV");
	HX_MARK_MEMBER_NAME(_scaleU,"_scaleU");
	HX_MARK_MEMBER_NAME(_faceWeights,"_faceWeights");
	HX_MARK_MEMBER_NAME(_faceNormals,"_faceNormals");
	HX_MARK_MEMBER_NAME(_vertexTangentsDirty,"_vertexTangentsDirty");
	HX_MARK_MEMBER_NAME(_vertexNormalsDirty,"_vertexNormalsDirty");
	HX_MARK_MEMBER_NAME(_useFaceWeights,"_useFaceWeights");
	HX_MARK_MEMBER_NAME(_autoGenerateUVs,"_autoGenerateUVs");
	HX_MARK_MEMBER_NAME(_autoDeriveVertexTangents,"_autoDeriveVertexTangents");
	HX_MARK_MEMBER_NAME(_autoDeriveVertexNormals,"_autoDeriveVertexNormals");
	HX_MARK_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_MARK_MEMBER_NAME(_indicesInvalid,"_indicesInvalid");
	HX_MARK_MEMBER_NAME(_indexBufferContext,"_indexBufferContext");
	HX_MARK_MEMBER_NAME(_numIndices,"_numIndices");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_indices,"_indices");
	HX_MARK_MEMBER_NAME(_faceTangents,"_faceTangents");
	HX_MARK_MEMBER_NAME(_faceTangentsDirty,"_faceTangentsDirty");
	HX_MARK_MEMBER_NAME(_faceNormalsDirty,"_faceNormalsDirty");
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_MEMBER_NAME(_parentGeometry,"_parentGeometry");
	HX_MARK_END_CLASS();
}

void SubGeometryBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_uvsDirty,"_uvsDirty");
	HX_VISIT_MEMBER_NAME(_scaleV,"_scaleV");
	HX_VISIT_MEMBER_NAME(_scaleU,"_scaleU");
	HX_VISIT_MEMBER_NAME(_faceWeights,"_faceWeights");
	HX_VISIT_MEMBER_NAME(_faceNormals,"_faceNormals");
	HX_VISIT_MEMBER_NAME(_vertexTangentsDirty,"_vertexTangentsDirty");
	HX_VISIT_MEMBER_NAME(_vertexNormalsDirty,"_vertexNormalsDirty");
	HX_VISIT_MEMBER_NAME(_useFaceWeights,"_useFaceWeights");
	HX_VISIT_MEMBER_NAME(_autoGenerateUVs,"_autoGenerateUVs");
	HX_VISIT_MEMBER_NAME(_autoDeriveVertexTangents,"_autoDeriveVertexTangents");
	HX_VISIT_MEMBER_NAME(_autoDeriveVertexNormals,"_autoDeriveVertexNormals");
	HX_VISIT_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_VISIT_MEMBER_NAME(_indicesInvalid,"_indicesInvalid");
	HX_VISIT_MEMBER_NAME(_indexBufferContext,"_indexBufferContext");
	HX_VISIT_MEMBER_NAME(_numIndices,"_numIndices");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_indices,"_indices");
	HX_VISIT_MEMBER_NAME(_faceTangents,"_faceTangents");
	HX_VISIT_MEMBER_NAME(_faceTangentsDirty,"_faceTangentsDirty");
	HX_VISIT_MEMBER_NAME(_faceNormalsDirty,"_faceNormalsDirty");
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
	HX_VISIT_MEMBER_NAME(_parentGeometry,"_parentGeometry");
}

Dynamic SubGeometryBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleV") ) { return get_scaleV(); }
		if (HX_FIELD_EQ(inName,"scaleU") ) { return get_scaleU(); }
		if (HX_FIELD_EQ(inName,"UVData") ) { return get_UVData(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return scaleUV_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaleV") ) { return _scaleV; }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { return _scaleU; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_indices") ) { return _indices; }
		if (HX_FIELD_EQ(inName,"UVOffset") ) { return get_UVOffset(); }
		if (HX_FIELD_EQ(inName,"UVStride") ) { return get_UVStride(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvsDirty") ) { return _uvsDirty; }
		if (HX_FIELD_EQ(inName,"indexData") ) { return get_indexData(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_scaleV") ) { return get_scaleV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleU") ) { return get_scaleU_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexData") ) { return get_vertexData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numIndices") ) { return _numIndices; }
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return _vertexData; }
		if (HX_FIELD_EQ(inName,"faceNormals") ) { return get_faceNormals(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return get_UVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return get_UVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"_faceWeights") ) { return _faceWeights; }
		if (HX_FIELD_EQ(inName,"_faceNormals") ) { return _faceNormals; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { return get_vertexOffset(); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { return get_vertexStride(); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return get_indexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { return _numTriangles; }
		if (HX_FIELD_EQ(inName,"_faceTangents") ) { return _faceTangents; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDummyUVs") ) { return updateDummyUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"parentGeometry") ) { return get_parentGeometry(); }
		if (HX_FIELD_EQ(inName,"useFaceWeights") ) { return get_useFaceWeights(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_faceNormals") ) { return get_faceNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"updateIndexData") ) { return updateIndexData_dyn(); }
		if (HX_FIELD_EQ(inName,"_useFaceWeights") ) { return _useFaceWeights; }
		if (HX_FIELD_EQ(inName,"_indicesInvalid") ) { return _indicesInvalid; }
		if (HX_FIELD_EQ(inName,"_parentGeometry") ) { return _parentGeometry; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return invalidateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"_autoGenerateUVs") ) { return _autoGenerateUVs; }
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { return get_vertexNormalData(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidateBuffers") ) { return invalidateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFaceNormals") ) { return updateFaceNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"_faceNormalsDirty") ) { return _faceNormalsDirty; }
		if (HX_FIELD_EQ(inName,"vertexTangentData") ) { return get_vertexTangentData(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_parentGeometry") ) { return set_parentGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parentGeometry") ) { return get_parentGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFaceTangents") ) { return updateFaceTangents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useFaceWeights") ) { return set_useFaceWeights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useFaceWeights") ) { return get_useFaceWeights_dyn(); }
		if (HX_FIELD_EQ(inName,"_faceTangentsDirty") ) { return _faceTangentsDirty; }
		if (HX_FIELD_EQ(inName,"vertexNormalOffset") ) { return get_vertexNormalOffset(); }
		if (HX_FIELD_EQ(inName,"vertexNormalStride") ) { return get_vertexNormalStride(); }
		if (HX_FIELD_EQ(inName,"vertexPositionData") ) { return get_vertexPositionData(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return applyTransformation_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeIndexBuffers") ) { return disposeIndexBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexNormals") ) { return updateVertexNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexNormalsDirty") ) { return _vertexNormalsDirty; }
		if (HX_FIELD_EQ(inName,"_indexBufferContext") ) { return _indexBufferContext; }
		if (HX_FIELD_EQ(inName,"vertexTangentOffset") ) { return get_vertexTangentOffset(); }
		if (HX_FIELD_EQ(inName,"vertexTangentStride") ) { return get_vertexTangentStride(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return get_vertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeVertexBuffers") ) { return disposeVertexBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVertexTangents") ) { return updateVertexTangents_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexTangentsDirty") ) { return _vertexTangentsDirty; }
		if (HX_FIELD_EQ(inName,"autoGenerateDummyUVs") ) { return get_autoGenerateDummyUVs(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return get_vertexTangentData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return get_vertexNormalOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalStride") ) { return get_vertexNormalStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexPositionData") ) { return get_vertexPositionData_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return get_vertexTangentOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentStride") ) { return get_vertexTangentStride_dyn(); }
		if (HX_FIELD_EQ(inName,"autoDeriveVertexNormals") ) { return get_autoDeriveVertexNormals(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_autoGenerateDummyUVs") ) { return set_autoGenerateDummyUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoGenerateDummyUVs") ) { return get_autoGenerateDummyUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"_autoDeriveVertexNormals") ) { return _autoDeriveVertexNormals; }
		if (HX_FIELD_EQ(inName,"autoDeriveVertexTangents") ) { return get_autoDeriveVertexTangents(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_autoDeriveVertexTangents") ) { return _autoDeriveVertexTangents; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_autoDeriveVertexNormals") ) { return set_autoDeriveVertexNormals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoDeriveVertexNormals") ) { return get_autoDeriveVertexNormals_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"set_autoDeriveVertexTangents") ) { return set_autoDeriveVertexTangents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoDeriveVertexTangents") ) { return get_autoDeriveVertexTangents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubGeometryBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleV") ) { _scaleV=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { _scaleU=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_indices") ) { _indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uvsDirty") ) { _uvsDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numIndices") ) { _numIndices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_faceWeights") ) { _faceWeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_faceNormals") ) { _faceNormals=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { _numTriangles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_faceTangents") ) { _faceTangents=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parentGeometry") ) { return set_parentGeometry(inValue); }
		if (HX_FIELD_EQ(inName,"useFaceWeights") ) { return set_useFaceWeights(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_useFaceWeights") ) { _useFaceWeights=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indicesInvalid") ) { _indicesInvalid=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentGeometry") ) { _parentGeometry=inValue.Cast< ::away3d::core::base::Geometry >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoGenerateUVs") ) { _autoGenerateUVs=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_faceNormalsDirty") ) { _faceNormalsDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_faceTangentsDirty") ) { _faceTangentsDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_vertexNormalsDirty") ) { _vertexNormalsDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indexBufferContext") ) { _indexBufferContext=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_vertexTangentsDirty") ) { _vertexTangentsDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoGenerateDummyUVs") ) { return set_autoGenerateDummyUVs(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"autoDeriveVertexNormals") ) { return set_autoDeriveVertexNormals(inValue); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_autoDeriveVertexNormals") ) { _autoDeriveVertexNormals=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoDeriveVertexTangents") ) { return set_autoDeriveVertexTangents(inValue); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_autoDeriveVertexTangents") ) { _autoDeriveVertexTangents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubGeometryBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_uvsDirty"));
	outFields->push(HX_CSTRING("_scaleV"));
	outFields->push(HX_CSTRING("_scaleU"));
	outFields->push(HX_CSTRING("_faceWeights"));
	outFields->push(HX_CSTRING("_faceNormals"));
	outFields->push(HX_CSTRING("_vertexTangentsDirty"));
	outFields->push(HX_CSTRING("_vertexNormalsDirty"));
	outFields->push(HX_CSTRING("_useFaceWeights"));
	outFields->push(HX_CSTRING("_autoGenerateUVs"));
	outFields->push(HX_CSTRING("_autoDeriveVertexTangents"));
	outFields->push(HX_CSTRING("_autoDeriveVertexNormals"));
	outFields->push(HX_CSTRING("_numTriangles"));
	outFields->push(HX_CSTRING("_indicesInvalid"));
	outFields->push(HX_CSTRING("_indexBufferContext"));
	outFields->push(HX_CSTRING("_numIndices"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_indices"));
	outFields->push(HX_CSTRING("_faceTangents"));
	outFields->push(HX_CSTRING("_faceTangentsDirty"));
	outFields->push(HX_CSTRING("_faceNormalsDirty"));
	outFields->push(HX_CSTRING("_vertexData"));
	outFields->push(HX_CSTRING("_parentGeometry"));
	outFields->push(HX_CSTRING("scaleV"));
	outFields->push(HX_CSTRING("scaleU"));
	outFields->push(HX_CSTRING("parentGeometry"));
	outFields->push(HX_CSTRING("UVOffset"));
	outFields->push(HX_CSTRING("vertexTangentOffset"));
	outFields->push(HX_CSTRING("vertexNormalOffset"));
	outFields->push(HX_CSTRING("vertexOffset"));
	outFields->push(HX_CSTRING("vertexTangentStride"));
	outFields->push(HX_CSTRING("vertexNormalStride"));
	outFields->push(HX_CSTRING("vertexStride"));
	outFields->push(HX_CSTRING("UVData"));
	outFields->push(HX_CSTRING("vertexTangentData"));
	outFields->push(HX_CSTRING("vertexNormalData"));
	outFields->push(HX_CSTRING("vertexPositionData"));
	outFields->push(HX_CSTRING("vertexData"));
	outFields->push(HX_CSTRING("UVStride"));
	outFields->push(HX_CSTRING("faceNormals"));
	outFields->push(HX_CSTRING("autoDeriveVertexTangents"));
	outFields->push(HX_CSTRING("indexData"));
	outFields->push(HX_CSTRING("numTriangles"));
	outFields->push(HX_CSTRING("useFaceWeights"));
	outFields->push(HX_CSTRING("autoDeriveVertexNormals"));
	outFields->push(HX_CSTRING("autoGenerateDummyUVs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateDummyUVs"),
	HX_CSTRING("applyTransformation"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleUV"),
	HX_CSTRING("get_scaleV"),
	HX_CSTRING("get_scaleU"),
	HX_CSTRING("set_parentGeometry"),
	HX_CSTRING("get_parentGeometry"),
	HX_CSTRING("invalidateBounds"),
	HX_CSTRING("get_UVOffset"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_vertexTangentStride"),
	HX_CSTRING("get_vertexNormalStride"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("get_vertexPositionData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("get_UVStride"),
	HX_CSTRING("invalidateBuffers"),
	HX_CSTRING("get_faceNormals"),
	HX_CSTRING("set_autoDeriveVertexTangents"),
	HX_CSTRING("get_autoDeriveVertexTangents"),
	HX_CSTRING("disposeVertexBuffers"),
	HX_CSTRING("disposeIndexBuffers"),
	HX_CSTRING("updateIndexData"),
	HX_CSTRING("get_indexData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("updateVertexTangents"),
	HX_CSTRING("updateVertexNormals"),
	HX_CSTRING("updateFaceNormals"),
	HX_CSTRING("updateFaceTangents"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("set_useFaceWeights"),
	HX_CSTRING("get_useFaceWeights"),
	HX_CSTRING("set_autoDeriveVertexNormals"),
	HX_CSTRING("get_autoDeriveVertexNormals"),
	HX_CSTRING("set_autoGenerateDummyUVs"),
	HX_CSTRING("get_autoGenerateDummyUVs"),
	HX_CSTRING("_uvsDirty"),
	HX_CSTRING("_scaleV"),
	HX_CSTRING("_scaleU"),
	HX_CSTRING("_faceWeights"),
	HX_CSTRING("_faceNormals"),
	HX_CSTRING("_vertexTangentsDirty"),
	HX_CSTRING("_vertexNormalsDirty"),
	HX_CSTRING("_useFaceWeights"),
	HX_CSTRING("_autoGenerateUVs"),
	HX_CSTRING("_autoDeriveVertexTangents"),
	HX_CSTRING("_autoDeriveVertexNormals"),
	HX_CSTRING("_numTriangles"),
	HX_CSTRING("_indicesInvalid"),
	HX_CSTRING("_indexBufferContext"),
	HX_CSTRING("_numIndices"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_indices"),
	HX_CSTRING("_faceTangents"),
	HX_CSTRING("_faceTangentsDirty"),
	HX_CSTRING("_faceNormalsDirty"),
	HX_CSTRING("_vertexData"),
	HX_CSTRING("_parentGeometry"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubGeometryBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubGeometryBase_obj::__mClass,"__mClass");
};

Class SubGeometryBase_obj::__mClass;

void SubGeometryBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.SubGeometryBase"), hx::TCanCast< SubGeometryBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SubGeometryBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
