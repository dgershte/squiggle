#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void SubMesh_obj::__construct(::away3d::core::base::ISubGeometry subGeometry,::away3d::entities::Mesh parentMesh,::away3d::materials::MaterialBase material)
{
HX_STACK_PUSH("SubMesh::new","away3d/core/base/SubMesh.hx",76);
{
	HX_STACK_LINE(77)
	this->_uvRotation = (int)0;
	HX_STACK_LINE(78)
	this->_scaleU = (int)1;
	HX_STACK_LINE(79)
	this->_scaleV = (int)1;
	HX_STACK_LINE(80)
	this->_offsetU = (int)0;
	HX_STACK_LINE(81)
	this->_offsetV = (int)0;
	HX_STACK_LINE(82)
	this->_parentMesh = parentMesh;
	HX_STACK_LINE(83)
	this->_subGeometry = subGeometry;
	HX_STACK_LINE(84)
	this->set_material(material);
}
;
	return null();
}

SubMesh_obj::~SubMesh_obj() { }

Dynamic SubMesh_obj::__CreateEmpty() { return  new SubMesh_obj; }
hx::ObjectPtr< SubMesh_obj > SubMesh_obj::__new(::away3d::core::base::ISubGeometry subGeometry,::away3d::entities::Mesh parentMesh,::away3d::materials::MaterialBase material)
{  hx::ObjectPtr< SubMesh_obj > result = new SubMesh_obj();
	result->__construct(subGeometry,parentMesh,material);
	return result;}

Dynamic SubMesh_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubMesh_obj > result = new SubMesh_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *SubMesh_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::base::IMaterialOwner_obj)) return operator ::away3d::core::base::IMaterialOwner_obj *();
	if (inType==typeid( ::away3d::core::base::IRenderable_obj)) return operator ::away3d::core::base::IRenderable_obj *();
	return super::__ToInterface(inType);
}

::flash::geom::Matrix3D SubMesh_obj::getRenderSceneTransform( ::away3d::cameras::Camera3D camera){
	HX_STACK_PUSH("SubMesh::getRenderSceneTransform","away3d/core/base/SubMesh.hx",367);
	HX_STACK_THIS(this);
	HX_STACK_ARG(camera,"camera");
	HX_STACK_LINE(367)
	return this->_parentMesh->get_sceneTransform();
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,getRenderSceneTransform,return )

int SubMesh_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("SubMesh::get_vertexTangentOffset","away3d/core/base/SubMesh.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_LINE(363)
	return this->_subGeometry->get_vertexTangentOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexTangentOffset,return )

int SubMesh_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("SubMesh::get_vertexNormalOffset","away3d/core/base/SubMesh.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_LINE(359)
	return this->_subGeometry->get_vertexNormalOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexNormalOffset,return )

int SubMesh_obj::get_vertexOffset( ){
	HX_STACK_PUSH("SubMesh::get_vertexOffset","away3d/core/base/SubMesh.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_LINE(355)
	return this->_subGeometry->get_vertexOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexOffset,return )

int SubMesh_obj::get_UVOffset( ){
	HX_STACK_PUSH("SubMesh::get_UVOffset","away3d/core/base/SubMesh.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(351)
	return this->_subGeometry->get_UVOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVOffset,return )

Array< Float > SubMesh_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("SubMesh::get_vertexTangentData","away3d/core/base/SubMesh.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_LINE(347)
	return this->_subGeometry->get_vertexTangentData();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexTangentData,return )

Array< Float > SubMesh_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("SubMesh::get_vertexNormalData","away3d/core/base/SubMesh.hx",343);
	HX_STACK_THIS(this);
	HX_STACK_LINE(343)
	return this->_subGeometry->get_vertexNormalData();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexNormalData,return )

int SubMesh_obj::get_UVStride( ){
	HX_STACK_PUSH("SubMesh::get_UVStride","away3d/core/base/SubMesh.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_LINE(339)
	return this->_subGeometry->get_UVStride();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVStride,return )

int SubMesh_obj::get_vertexStride( ){
	HX_STACK_PUSH("SubMesh::get_vertexStride","away3d/core/base/SubMesh.hx",335);
	HX_STACK_THIS(this);
	HX_STACK_LINE(335)
	return this->_subGeometry->get_vertexStride();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexStride,return )

int SubMesh_obj::get_numVertices( ){
	HX_STACK_PUSH("SubMesh::get_numVertices","away3d/core/base/SubMesh.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_LINE(331)
	return this->_subGeometry->get_numVertices();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_numVertices,return )

bool SubMesh_obj::get_visible( ){
	HX_STACK_PUSH("SubMesh::get_visible","away3d/core/base/SubMesh.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_LINE(327)
	return this->_parentMesh->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_visible,return )

::away3d::bounds::BoundingVolumeBase SubMesh_obj::get_bounds( ){
	HX_STACK_PUSH("SubMesh::get_bounds","away3d/core/base/SubMesh.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	return this->_parentMesh->get_bounds();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_bounds,return )

Array< Float > SubMesh_obj::get_UVData( ){
	HX_STACK_PUSH("SubMesh::get_UVData","away3d/core/base/SubMesh.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_LINE(318)
	return this->_subGeometry->get_UVData();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_UVData,return )

Array< int > SubMesh_obj::get_indexData( ){
	HX_STACK_PUSH("SubMesh::get_indexData","away3d/core/base/SubMesh.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(314)
	return this->_subGeometry->get_indexData();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_indexData,return )

Array< Float > SubMesh_obj::get_vertexData( ){
	HX_STACK_PUSH("SubMesh::get_vertexData","away3d/core/base/SubMesh.hx",310);
	HX_STACK_THIS(this);
	HX_STACK_LINE(310)
	return this->_subGeometry->get_vertexData();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_vertexData,return )

Void SubMesh_obj::dispose( ){
{
		HX_STACK_PUSH("SubMesh::dispose","away3d/core/base/SubMesh.hx",306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(306)
		this->set_material(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,dispose,(void))

Void SubMesh_obj::updateUVTransform( ){
{
		HX_STACK_PUSH("SubMesh::updateUVTransform","away3d/core/base/SubMesh.hx",296);
		HX_STACK_THIS(this);
		HX_STACK_LINE(297)
		if (((this->_uvTransform == null()))){
			HX_STACK_LINE(298)
			this->_uvTransform = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(299)
		this->_uvTransform->identity();
		HX_STACK_LINE(300)
		if (((this->_uvRotation != (int)0))){
			HX_STACK_LINE(300)
			this->_uvTransform->rotate(this->_uvRotation);
		}
		HX_STACK_LINE(301)
		if (((bool((this->_scaleU != (int)1)) || bool((this->_scaleV != (int)1))))){
			HX_STACK_LINE(301)
			this->_uvTransform->scale(this->_scaleU,this->_scaleV);
		}
		HX_STACK_LINE(302)
		this->_uvTransform->translate(this->_offsetU,this->_offsetV);
		HX_STACK_LINE(303)
		this->_uvTransformDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,updateUVTransform,(void))

::flash::geom::Matrix SubMesh_obj::get_uvTransform( ){
	HX_STACK_PUSH("SubMesh::get_uvTransform","away3d/core/base/SubMesh.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(292)
	if ((this->_uvTransformDirty)){
		HX_STACK_LINE(292)
		this->updateUVTransform();
	}
	HX_STACK_LINE(293)
	return this->_uvTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvTransform,return )

::away3d::entities::Mesh SubMesh_obj::set_parentMesh( ::away3d::entities::Mesh value){
	HX_STACK_PUSH("SubMesh::set_parentMesh","away3d/core/base/SubMesh.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(287)
	this->_parentMesh = value;
	HX_STACK_LINE(288)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_parentMesh,return )

::away3d::entities::Mesh SubMesh_obj::get_parentMesh( ){
	HX_STACK_PUSH("SubMesh::get_parentMesh","away3d/core/base/SubMesh.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(282)
	return this->_parentMesh;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_parentMesh,return )

bool SubMesh_obj::get_castsShadows( ){
	HX_STACK_PUSH("SubMesh::get_castsShadows","away3d/core/base/SubMesh.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(272)
	return this->_parentMesh->get_castsShadows();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_castsShadows,return )

bool SubMesh_obj::get_mouseEnabled( ){
	HX_STACK_PUSH("SubMesh::get_mouseEnabled","away3d/core/base/SubMesh.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return (bool(this->_parentMesh->get_mouseEnabled()) || bool(this->_parentMesh->_ancestorsAllowMouseEnabled));
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_mouseEnabled,return )

::away3d::animators::IAnimator SubMesh_obj::get_animator( ){
	HX_STACK_PUSH("SubMesh::get_animator","away3d/core/base/SubMesh.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_LINE(260)
	return this->_parentMesh->get_animator();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_animator,return )

int SubMesh_obj::get_numTriangles( ){
	HX_STACK_PUSH("SubMesh::get_numTriangles","away3d/core/base/SubMesh.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(252)
	return this->_subGeometry->get_numTriangles();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_numTriangles,return )

::flash::display3D::IndexBuffer3D SubMesh_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("SubMesh::getIndexBuffer","away3d/core/base/SubMesh.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(244)
	return this->_subGeometry->getIndexBuffer(stage3DProxy);
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,getIndexBuffer,return )

Void SubMesh_obj::activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubMesh::activateSecondaryUVBuffer","away3d/core/base/SubMesh.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(236)
		this->_subGeometry->activateSecondaryUVBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateSecondaryUVBuffer,(void))

Void SubMesh_obj::activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubMesh::activateUVBuffer","away3d/core/base/SubMesh.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(228)
		this->_subGeometry->activateUVBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateUVBuffer,(void))

Void SubMesh_obj::activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubMesh::activateVertexTangentBuffer","away3d/core/base/SubMesh.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(220)
		this->_subGeometry->activateVertexTangentBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexTangentBuffer,(void))

Void SubMesh_obj::activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubMesh::activateVertexNormalBuffer","away3d/core/base/SubMesh.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(212)
		this->_subGeometry->activateVertexNormalBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexNormalBuffer,(void))

Void SubMesh_obj::activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SubMesh::activateVertexBuffer","away3d/core/base/SubMesh.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(204)
		this->_subGeometry->activateVertexBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubMesh_obj,activateVertexBuffer,(void))

::flash::geom::Matrix3D SubMesh_obj::get_inverseSceneTransform( ){
	HX_STACK_PUSH("SubMesh::get_inverseSceneTransform","away3d/core/base/SubMesh.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	return this->_parentMesh->get_inverseSceneTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_inverseSceneTransform,return )

::flash::geom::Matrix3D SubMesh_obj::get_sceneTransform( ){
	HX_STACK_PUSH("SubMesh::get_sceneTransform","away3d/core/base/SubMesh.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	return this->_parentMesh->get_sceneTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_sceneTransform,return )

::away3d::materials::MaterialBase SubMesh_obj::set_material( ::away3d::materials::MaterialBase value){
	HX_STACK_PUSH("SubMesh::set_material","away3d/core/base/SubMesh.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(177)
	if (((this->_material != null()))){
		HX_STACK_LINE(177)
		this->_material->removeOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(178)
	this->_material = value;
	HX_STACK_LINE(179)
	if (((this->_material != null()))){
		HX_STACK_LINE(179)
		this->_material->addOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(180)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_material,return )

::away3d::materials::MaterialBase SubMesh_obj::get_material( ){
	HX_STACK_PUSH("SubMesh::get_material","away3d/core/base/SubMesh.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	if (((this->_material != null()))){
		HX_STACK_LINE(172)
		return this->_material;
	}
	HX_STACK_LINE(173)
	return this->_parentMesh->get_material();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_material,return )

::away3d::core::base::ISubGeometry SubMesh_obj::set_subGeometry( ::away3d::core::base::ISubGeometry value){
	HX_STACK_PUSH("SubMesh::set_subGeometry","away3d/core/base/SubMesh.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(163)
	this->_subGeometry = value;
	HX_STACK_LINE(164)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_subGeometry,return )

::away3d::core::base::ISubGeometry SubMesh_obj::get_subGeometry( ){
	HX_STACK_PUSH("SubMesh::get_subGeometry","away3d/core/base/SubMesh.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return this->_subGeometry;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_subGeometry,return )

::away3d::entities::Entity SubMesh_obj::get_sourceEntity( ){
	HX_STACK_PUSH("SubMesh::get_sourceEntity","away3d/core/base/SubMesh.hx",150);
	HX_STACK_THIS(this);
	HX_STACK_LINE(150)
	return this->_parentMesh;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_sourceEntity,return )

Float SubMesh_obj::set_uvRotation( Float value){
	HX_STACK_PUSH("SubMesh::set_uvRotation","away3d/core/base/SubMesh.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(140)
	if (((value == this->_uvRotation))){
		HX_STACK_LINE(140)
		return value;
	}
	HX_STACK_LINE(141)
	this->_uvRotation = value;
	HX_STACK_LINE(142)
	this->_uvTransformDirty = true;
	HX_STACK_LINE(143)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_uvRotation,return )

Float SubMesh_obj::get_uvRotation( ){
	HX_STACK_PUSH("SubMesh::get_uvRotation","away3d/core/base/SubMesh.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_uvRotation;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_uvRotation,return )

Float SubMesh_obj::set_scaleV( Float value){
	HX_STACK_PUSH("SubMesh::set_scaleV","away3d/core/base/SubMesh.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(129)
	if (((value == this->_scaleV))){
		HX_STACK_LINE(129)
		return value;
	}
	HX_STACK_LINE(130)
	this->_scaleV = value;
	HX_STACK_LINE(131)
	this->_uvTransformDirty = true;
	HX_STACK_LINE(132)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleV,return )

Float SubMesh_obj::get_scaleV( ){
	HX_STACK_PUSH("SubMesh::get_scaleV","away3d/core/base/SubMesh.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->_scaleV;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleV,return )

Float SubMesh_obj::set_scaleU( Float value){
	HX_STACK_PUSH("SubMesh::set_scaleU","away3d/core/base/SubMesh.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(118)
	if (((value == this->_scaleU))){
		HX_STACK_LINE(118)
		return value;
	}
	HX_STACK_LINE(119)
	this->_scaleU = value;
	HX_STACK_LINE(120)
	this->_uvTransformDirty = true;
	HX_STACK_LINE(121)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_scaleU,return )

Float SubMesh_obj::get_scaleU( ){
	HX_STACK_PUSH("SubMesh::get_scaleU","away3d/core/base/SubMesh.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	return this->_scaleU;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_scaleU,return )

Float SubMesh_obj::set_offsetV( Float value){
	HX_STACK_PUSH("SubMesh::set_offsetV","away3d/core/base/SubMesh.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(107)
	if (((value == this->_offsetV))){
		HX_STACK_LINE(107)
		return value;
	}
	HX_STACK_LINE(108)
	this->_offsetV = value;
	HX_STACK_LINE(109)
	this->_uvTransformDirty = true;
	HX_STACK_LINE(110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetV,return )

Float SubMesh_obj::get_offsetV( ){
	HX_STACK_PUSH("SubMesh::get_offsetV","away3d/core/base/SubMesh.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->_offsetV;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetV,return )

Float SubMesh_obj::set_offsetU( Float value){
	HX_STACK_PUSH("SubMesh::set_offsetU","away3d/core/base/SubMesh.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(96)
	if (((value == this->_offsetU))){
		HX_STACK_LINE(96)
		return value;
	}
	HX_STACK_LINE(97)
	this->_offsetU = value;
	HX_STACK_LINE(98)
	this->_uvTransformDirty = true;
	HX_STACK_LINE(99)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SubMesh_obj,set_offsetU,return )

Float SubMesh_obj::get_offsetU( ){
	HX_STACK_PUSH("SubMesh::get_offsetU","away3d/core/base/SubMesh.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(91)
	return this->_offsetU;
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_offsetU,return )

bool SubMesh_obj::get_shaderPickingDetails( ){
	HX_STACK_PUSH("SubMesh::get_shaderPickingDetails","away3d/core/base/SubMesh.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->get_sourceEntity()->get_shaderPickingDetails();
}


HX_DEFINE_DYNAMIC_FUNC0(SubMesh_obj,get_shaderPickingDetails,return )


SubMesh_obj::SubMesh_obj()
{
}

void SubMesh_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubMesh);
	HX_MARK_MEMBER_NAME(animatorSubGeometry,"animatorSubGeometry");
	HX_MARK_MEMBER_NAME(animationSubGeometry,"animationSubGeometry");
	HX_MARK_MEMBER_NAME(_offsetV,"_offsetV");
	HX_MARK_MEMBER_NAME(_offsetU,"_offsetU");
	HX_MARK_MEMBER_NAME(_scaleV,"_scaleV");
	HX_MARK_MEMBER_NAME(_scaleU,"_scaleU");
	HX_MARK_MEMBER_NAME(_uvRotation,"_uvRotation");
	HX_MARK_MEMBER_NAME(_uvTransformDirty,"_uvTransformDirty");
	HX_MARK_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_subGeometry,"_subGeometry");
	HX_MARK_MEMBER_NAME(_parentMesh,"_parentMesh");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_END_CLASS();
}

void SubMesh_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animatorSubGeometry,"animatorSubGeometry");
	HX_VISIT_MEMBER_NAME(animationSubGeometry,"animationSubGeometry");
	HX_VISIT_MEMBER_NAME(_offsetV,"_offsetV");
	HX_VISIT_MEMBER_NAME(_offsetU,"_offsetU");
	HX_VISIT_MEMBER_NAME(_scaleV,"_scaleV");
	HX_VISIT_MEMBER_NAME(_scaleU,"_scaleU");
	HX_VISIT_MEMBER_NAME(_uvRotation,"_uvRotation");
	HX_VISIT_MEMBER_NAME(_uvTransformDirty,"_uvTransformDirty");
	HX_VISIT_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_subGeometry,"_subGeometry");
	HX_VISIT_MEMBER_NAME(_parentMesh,"_parentMesh");
	HX_VISIT_MEMBER_NAME(_material,"_material");
}

Dynamic SubMesh_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		if (HX_FIELD_EQ(inName,"UVData") ) { return get_UVData(); }
		if (HX_FIELD_EQ(inName,"scaleV") ) { return get_scaleV(); }
		if (HX_FIELD_EQ(inName,"scaleU") ) { return get_scaleU(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaleV") ) { return _scaleV; }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { return _scaleU; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"offsetV") ) { return get_offsetV(); }
		if (HX_FIELD_EQ(inName,"offsetU") ) { return get_offsetU(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_offsetV") ) { return _offsetV; }
		if (HX_FIELD_EQ(inName,"_offsetU") ) { return _offsetU; }
		if (HX_FIELD_EQ(inName,"UVOffset") ) { return get_UVOffset(); }
		if (HX_FIELD_EQ(inName,"UVStride") ) { return get_UVStride(); }
		if (HX_FIELD_EQ(inName,"animator") ) { return get_animator(); }
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_material") ) { return _material; }
		if (HX_FIELD_EQ(inName,"indexData") ) { return get_indexData(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleV") ) { return set_scaleV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleV") ) { return get_scaleV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleU") ) { return set_scaleU_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleU") ) { return get_scaleU_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexData") ) { return get_vertexData(); }
		if (HX_FIELD_EQ(inName,"parentMesh") ) { return get_parentMesh(); }
		if (HX_FIELD_EQ(inName,"uvRotation") ) { return get_uvRotation(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_offsetV") ) { return set_offsetV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_offsetV") ) { return get_offsetV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_offsetU") ) { return set_offsetU_dyn(); }
		if (HX_FIELD_EQ(inName,"get_offsetU") ) { return get_offsetU_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvRotation") ) { return _uvRotation; }
		if (HX_FIELD_EQ(inName,"_parentMesh") ) { return _parentMesh; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		if (HX_FIELD_EQ(inName,"uvTransform") ) { return get_uvTransform(); }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { return get_subGeometry(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_UVOffset") ) { return get_UVOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_UVStride") ) { return get_UVStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return get_animator_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { return _uvTransform; }
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { return _subGeometry; }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { return get_vertexOffset(); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { return get_vertexStride(); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return get_castsShadows(); }
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return get_mouseEnabled(); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		if (HX_FIELD_EQ(inName,"sourceEntity") ) { return get_sourceEntity(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return get_indexData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parentMesh") ) { return set_parentMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parentMesh") ) { return get_parentMesh_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_uvRotation") ) { return set_uvRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uvRotation") ) { return get_uvRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneTransform") ) { return get_sceneTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uvTransform") ) { return get_uvTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_subGeometry") ) { return set_subGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subGeometry") ) { return get_subGeometry_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return get_castsShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return activateUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sourceEntity") ) { return get_sourceEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { return get_vertexNormalData(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateUVTransform") ) { return updateUVTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvTransformDirty") ) { return _uvTransformDirty; }
		if (HX_FIELD_EQ(inName,"vertexTangentData") ) { return get_vertexTangentData(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_sceneTransform") ) { return get_sceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexNormalOffset") ) { return get_vertexNormalOffset(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"animatorSubGeometry") ) { return animatorSubGeometry; }
		if (HX_FIELD_EQ(inName,"vertexTangentOffset") ) { return get_vertexTangentOffset(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return get_vertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return activateVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"animationSubGeometry") ) { return animationSubGeometry; }
		if (HX_FIELD_EQ(inName,"shaderPickingDetails") ) { return get_shaderPickingDetails(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return get_vertexTangentData_dyn(); }
		if (HX_FIELD_EQ(inName,"inverseSceneTransform") ) { return get_inverseSceneTransform(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return get_vertexNormalOffset_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRenderSceneTransform") ) { return getRenderSceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return get_vertexTangentOffset_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_shaderPickingDetails") ) { return get_shaderPickingDetails_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return activateSecondaryUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inverseSceneTransform") ) { return get_inverseSceneTransform_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return activateVertexNormalBuffer_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return activateVertexTangentBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubMesh_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleV") ) { return set_scaleV(inValue); }
		if (HX_FIELD_EQ(inName,"scaleU") ) { return set_scaleU(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleV") ) { _scaleV=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleU") ) { _scaleU=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetV") ) { return set_offsetV(inValue); }
		if (HX_FIELD_EQ(inName,"offsetU") ) { return set_offsetU(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_offsetV") ) { _offsetV=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetU") ) { _offsetU=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMesh") ) { return set_parentMesh(inValue); }
		if (HX_FIELD_EQ(inName,"uvRotation") ) { return set_uvRotation(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_uvRotation") ) { _uvRotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentMesh") ) { _parentMesh=inValue.Cast< ::away3d::entities::Mesh >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { return set_subGeometry(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { _uvTransform=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { _subGeometry=inValue.Cast< ::away3d::core::base::ISubGeometry >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_uvTransformDirty") ) { _uvTransformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"animatorSubGeometry") ) { animatorSubGeometry=inValue.Cast< ::away3d::animators::data::AnimationSubGeometry >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"animationSubGeometry") ) { animationSubGeometry=inValue.Cast< ::away3d::animators::data::AnimationSubGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubMesh_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animatorSubGeometry"));
	outFields->push(HX_CSTRING("animationSubGeometry"));
	outFields->push(HX_CSTRING("_offsetV"));
	outFields->push(HX_CSTRING("_offsetU"));
	outFields->push(HX_CSTRING("_scaleV"));
	outFields->push(HX_CSTRING("_scaleU"));
	outFields->push(HX_CSTRING("_uvRotation"));
	outFields->push(HX_CSTRING("_uvTransformDirty"));
	outFields->push(HX_CSTRING("_uvTransform"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_subGeometry"));
	outFields->push(HX_CSTRING("_parentMesh"));
	outFields->push(HX_CSTRING("_material"));
	outFields->push(HX_CSTRING("vertexTangentOffset"));
	outFields->push(HX_CSTRING("vertexNormalOffset"));
	outFields->push(HX_CSTRING("vertexOffset"));
	outFields->push(HX_CSTRING("UVOffset"));
	outFields->push(HX_CSTRING("vertexTangentData"));
	outFields->push(HX_CSTRING("vertexNormalData"));
	outFields->push(HX_CSTRING("UVStride"));
	outFields->push(HX_CSTRING("vertexStride"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("UVData"));
	outFields->push(HX_CSTRING("indexData"));
	outFields->push(HX_CSTRING("vertexData"));
	outFields->push(HX_CSTRING("uvTransform"));
	outFields->push(HX_CSTRING("parentMesh"));
	outFields->push(HX_CSTRING("castsShadows"));
	outFields->push(HX_CSTRING("mouseEnabled"));
	outFields->push(HX_CSTRING("animator"));
	outFields->push(HX_CSTRING("numTriangles"));
	outFields->push(HX_CSTRING("inverseSceneTransform"));
	outFields->push(HX_CSTRING("sceneTransform"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("subGeometry"));
	outFields->push(HX_CSTRING("sourceEntity"));
	outFields->push(HX_CSTRING("uvRotation"));
	outFields->push(HX_CSTRING("scaleV"));
	outFields->push(HX_CSTRING("scaleU"));
	outFields->push(HX_CSTRING("offsetV"));
	outFields->push(HX_CSTRING("offsetU"));
	outFields->push(HX_CSTRING("shaderPickingDetails"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRenderSceneTransform"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_UVOffset"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("get_UVStride"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_indexData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("dispose"),
	HX_CSTRING("updateUVTransform"),
	HX_CSTRING("get_uvTransform"),
	HX_CSTRING("set_parentMesh"),
	HX_CSTRING("get_parentMesh"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("get_mouseEnabled"),
	HX_CSTRING("get_animator"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("get_inverseSceneTransform"),
	HX_CSTRING("get_sceneTransform"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	HX_CSTRING("set_subGeometry"),
	HX_CSTRING("get_subGeometry"),
	HX_CSTRING("get_sourceEntity"),
	HX_CSTRING("set_uvRotation"),
	HX_CSTRING("get_uvRotation"),
	HX_CSTRING("set_scaleV"),
	HX_CSTRING("get_scaleV"),
	HX_CSTRING("set_scaleU"),
	HX_CSTRING("get_scaleU"),
	HX_CSTRING("set_offsetV"),
	HX_CSTRING("get_offsetV"),
	HX_CSTRING("set_offsetU"),
	HX_CSTRING("get_offsetU"),
	HX_CSTRING("get_shaderPickingDetails"),
	HX_CSTRING("animatorSubGeometry"),
	HX_CSTRING("animationSubGeometry"),
	HX_CSTRING("_offsetV"),
	HX_CSTRING("_offsetU"),
	HX_CSTRING("_scaleV"),
	HX_CSTRING("_scaleU"),
	HX_CSTRING("_uvRotation"),
	HX_CSTRING("_uvTransformDirty"),
	HX_CSTRING("_uvTransform"),
	HX_CSTRING("_index"),
	HX_CSTRING("_subGeometry"),
	HX_CSTRING("_parentMesh"),
	HX_CSTRING("_material"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubMesh_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubMesh_obj::__mClass,"__mClass");
};

Class SubMesh_obj::__mClass;

void SubMesh_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.SubMesh"), hx::TCanCast< SubMesh_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SubMesh_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
