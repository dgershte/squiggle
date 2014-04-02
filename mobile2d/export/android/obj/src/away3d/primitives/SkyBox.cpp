#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
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
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_SkyBoxNode
#include <away3d/core/partition/SkyBoxNode.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
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
#ifndef INCLUDED_away3d_materials_SkyBoxMaterial
#include <away3d/materials/SkyBoxMaterial.h>
#endif
#ifndef INCLUDED_away3d_primitives_SkyBox
#include <away3d/primitives/SkyBox.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace primitives{

Void SkyBox_obj::__construct(::away3d::textures::CubeTextureBase cubeMap)
{
HX_STACK_PUSH("SkyBox::new","away3d/primitives/SkyBox.hx",66);
{
	HX_STACK_LINE(67)
	this->_uvTransform = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(68)
	super::__construct();
	HX_STACK_LINE(69)
	this->_material = ::away3d::materials::SkyBoxMaterial_obj::__new(cubeMap);
	HX_STACK_LINE(70)
	this->_material->addOwner(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(71)
	this->_geometry = ::away3d::core::base::SubGeometry_obj::__new();
	HX_STACK_LINE(72)
	this->buildGeometry(this->_geometry);
}
;
	return null();
}

SkyBox_obj::~SkyBox_obj() { }

Dynamic SkyBox_obj::__CreateEmpty() { return  new SkyBox_obj; }
hx::ObjectPtr< SkyBox_obj > SkyBox_obj::__new(::away3d::textures::CubeTextureBase cubeMap)
{  hx::ObjectPtr< SkyBox_obj > result = new SkyBox_obj();
	result->__construct(cubeMap);
	return result;}

Dynamic SkyBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkyBox_obj > result = new SkyBox_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *SkyBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::base::IMaterialOwner_obj)) return operator ::away3d::core::base::IMaterialOwner_obj *();
	if (inType==typeid( ::away3d::core::base::IRenderable_obj)) return operator ::away3d::core::base::IRenderable_obj *();
	return super::__ToInterface(inType);
}

::flash::geom::Matrix3D SkyBox_obj::getRenderSceneTransform( ::away3d::cameras::Camera3D camera){
	HX_STACK_PUSH("SkyBox::getRenderSceneTransform","away3d/primitives/SkyBox.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(camera,"camera");
	HX_STACK_LINE(235)
	return this->_sceneTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBox_obj,getRenderSceneTransform,return )

int SkyBox_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("SkyBox::get_vertexTangentOffset","away3d/primitives/SkyBox.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	return this->_geometry->get_vertexTangentOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexTangentOffset,return )

int SkyBox_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("SkyBox::get_vertexNormalOffset","away3d/primitives/SkyBox.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return this->_geometry->get_vertexNormalOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexNormalOffset,return )

int SkyBox_obj::get_vertexOffset( ){
	HX_STACK_PUSH("SkyBox::get_vertexOffset","away3d/primitives/SkyBox.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return this->_geometry->get_vertexOffset();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexOffset,return )

Array< Float > SkyBox_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("SkyBox::get_vertexTangentData","away3d/primitives/SkyBox.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->_geometry->get_vertexTangentData();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexTangentData,return )

Array< Float > SkyBox_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("SkyBox::get_vertexNormalData","away3d/primitives/SkyBox.hx",215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(215)
	return this->_geometry->get_vertexNormalData();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexNormalData,return )

int SkyBox_obj::get_vertexStride( ){
	HX_STACK_PUSH("SkyBox::get_vertexStride","away3d/primitives/SkyBox.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->_geometry->get_vertexStride();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexStride,return )

int SkyBox_obj::get_numVertices( ){
	HX_STACK_PUSH("SkyBox::get_numVertices","away3d/primitives/SkyBox.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->_geometry->get_numVertices();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_numVertices,return )

Array< Float > SkyBox_obj::get_UVData( ){
	HX_STACK_PUSH("SkyBox::get_UVData","away3d/primitives/SkyBox.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	return this->_geometry->get_UVData();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_UVData,return )

Array< int > SkyBox_obj::get_indexData( ){
	HX_STACK_PUSH("SkyBox::get_indexData","away3d/primitives/SkyBox.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return this->_geometry->get_indexData();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_indexData,return )

Array< Float > SkyBox_obj::get_vertexData( ){
	HX_STACK_PUSH("SkyBox::get_vertexData","away3d/primitives/SkyBox.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(195)
	return this->_geometry->get_vertexData();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_vertexData,return )

::flash::geom::Matrix SkyBox_obj::get_uvTransform( ){
	HX_STACK_PUSH("SkyBox::get_uvTransform","away3d/primitives/SkyBox.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_LINE(191)
	return this->_uvTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_uvTransform,return )

bool SkyBox_obj::get_castsShadows( ){
	HX_STACK_PUSH("SkyBox::get_castsShadows","away3d/primitives/SkyBox.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_castsShadows,return )

Void SkyBox_obj::buildGeometry( ::away3d::core::base::SubGeometry target){
{
		HX_STACK_PUSH("SkyBox::buildGeometry","away3d/primitives/SkyBox.hx",176);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(178)
		Array< Float > tmp = Array_obj< Float >::__new().Add((int)-1).Add((int)1).Add((int)-1).Add((int)1).Add((int)1).Add((int)-1).Add((int)1).Add((int)1).Add((int)1).Add((int)-1).Add((int)1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)1).Add((int)-1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		Array< Float > vertices = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),tmp);		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(181)
		Array< int > indextmp = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)0).Add((int)6).Add((int)5).Add((int)4).Add((int)4).Add((int)7).Add((int)6).Add((int)2).Add((int)6).Add((int)7).Add((int)7).Add((int)3).Add((int)2).Add((int)4).Add((int)5).Add((int)1).Add((int)1).Add((int)0).Add((int)4).Add((int)4).Add((int)0).Add((int)3).Add((int)3).Add((int)7).Add((int)4).Add((int)2).Add((int)1).Add((int)5).Add((int)5).Add((int)6).Add((int)2);		HX_STACK_VAR(indextmp,"indextmp");
		HX_STACK_LINE(182)
		Array< int > indices = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),indextmp);		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(183)
		target->updateVertexData(vertices);
		HX_STACK_LINE(184)
		target->updateIndexData(indices);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBox_obj,buildGeometry,(void))

Void SkyBox_obj::updateBounds( ){
{
		HX_STACK_PUSH("SkyBox::updateBounds","away3d/primitives/SkyBox.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_LINE(168)
		this->_boundsInvalid = false;
	}
return null();
}


::away3d::core::partition::EntityNode SkyBox_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("SkyBox::createEntityPartitionNode","away3d/primitives/SkyBox.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	return ::away3d::core::partition::SkyBoxNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


Void SkyBox_obj::invalidateBounds( ){
{
		HX_STACK_PUSH("SkyBox::invalidateBounds","away3d/primitives/SkyBox.hx",152);
		HX_STACK_THIS(this);
	}
return null();
}


::String SkyBox_obj::get_assetType( ){
	HX_STACK_PUSH("SkyBox::get_assetType","away3d/primitives/SkyBox.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return ::away3d::library::assets::AssetType_obj::SKYBOX;
}


::away3d::materials::MaterialBase SkyBox_obj::set_material( ::away3d::materials::MaterialBase value){
	HX_STACK_PUSH("SkyBox::set_material","away3d/primitives/SkyBox.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(140)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(HX_CSTRING("Unsupported method!"),null()));
	HX_STACK_LINE(141)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBox_obj,set_material,return )

::away3d::materials::MaterialBase SkyBox_obj::get_material( ){
	HX_STACK_PUSH("SkyBox::get_material","away3d/primitives/SkyBox.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_material;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_material,return )

::away3d::entities::Entity SkyBox_obj::get_sourceEntity( ){
	HX_STACK_PUSH("SkyBox::get_sourceEntity","away3d/primitives/SkyBox.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(127)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_sourceEntity,return )

int SkyBox_obj::get_numTriangles( ){
	HX_STACK_PUSH("SkyBox::get_numTriangles","away3d/primitives/SkyBox.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_LINE(119)
	return this->_geometry->get_numTriangles();
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_numTriangles,return )

::flash::display3D::IndexBuffer3D SkyBox_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("SkyBox::getIndexBuffer","away3d/primitives/SkyBox.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(111)
	return this->_geometry->getIndexBuffer(stage3DProxy);
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBox_obj,getIndexBuffer,return )

Void SkyBox_obj::activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkyBox::activateSecondaryUVBuffer","away3d/primitives/SkyBox.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkyBox_obj,activateSecondaryUVBuffer,(void))

Void SkyBox_obj::activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkyBox::activateVertexTangentBuffer","away3d/primitives/SkyBox.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkyBox_obj,activateVertexTangentBuffer,(void))

Void SkyBox_obj::activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkyBox::activateVertexNormalBuffer","away3d/primitives/SkyBox.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkyBox_obj,activateVertexNormalBuffer,(void))

Void SkyBox_obj::activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkyBox::activateUVBuffer","away3d/primitives/SkyBox.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkyBox_obj,activateUVBuffer,(void))

Void SkyBox_obj::activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SkyBox::activateVertexBuffer","away3d/primitives/SkyBox.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(79)
		this->_geometry->activateVertexBuffer(index,stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SkyBox_obj,activateVertexBuffer,(void))

::away3d::bounds::BoundingVolumeBase SkyBox_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("SkyBox::getDefaultBoundingVolume","away3d/primitives/SkyBox.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return ::away3d::bounds::NullBounds_obj::__new(null(),null());
}


::away3d::animators::IAnimator SkyBox_obj::get_animator( ){
	HX_STACK_PUSH("SkyBox::get_animator","away3d/primitives/SkyBox.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->_animator;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBox_obj,get_animator,return )


SkyBox_obj::SkyBox_obj()
{
}

void SkyBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkyBox);
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkyBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_uvTransform,"_uvTransform");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkyBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UVData") ) { return get_UVData(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		if (HX_FIELD_EQ(inName,"animator") ) { return get_animator(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { return _animator; }
		if (HX_FIELD_EQ(inName,"_material") ) { return _material; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return _geometry; }
		if (HX_FIELD_EQ(inName,"indexData") ) { return get_indexData(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexData") ) { return get_vertexData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		if (HX_FIELD_EQ(inName,"uvTransform") ) { return get_uvTransform(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return get_animator_dyn(); }
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { return _uvTransform; }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { return get_vertexOffset(); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { return get_vertexStride(); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return get_castsShadows(); }
		if (HX_FIELD_EQ(inName,"sourceEntity") ) { return get_sourceEntity(); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return get_indexData_dyn(); }
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return buildGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uvTransform") ) { return get_uvTransform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return get_castsShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return invalidateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sourceEntity") ) { return get_sourceEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return activateUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { return get_vertexNormalData(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexTangentData") ) { return get_vertexTangentData(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexNormalOffset") ) { return get_vertexNormalOffset(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"vertexTangentOffset") ) { return get_vertexTangentOffset(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return get_vertexNormalData_dyn(); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return activateVertexBuffer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return get_vertexTangentData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return get_vertexNormalOffset_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRenderSceneTransform") ) { return getRenderSceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return get_vertexTangentOffset_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return getDefaultBoundingVolume_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return createEntityPartitionNode_dyn(); }
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return activateSecondaryUVBuffer_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return activateVertexNormalBuffer_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return activateVertexTangentBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkyBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::away3d::animators::IAnimator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast< ::away3d::materials::SkyBoxMaterial >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast< ::away3d::core::base::SubGeometry >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_uvTransform") ) { _uvTransform=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkyBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_animator"));
	outFields->push(HX_CSTRING("_uvTransform"));
	outFields->push(HX_CSTRING("_material"));
	outFields->push(HX_CSTRING("_geometry"));
	outFields->push(HX_CSTRING("vertexTangentOffset"));
	outFields->push(HX_CSTRING("vertexNormalOffset"));
	outFields->push(HX_CSTRING("vertexOffset"));
	outFields->push(HX_CSTRING("vertexTangentData"));
	outFields->push(HX_CSTRING("vertexNormalData"));
	outFields->push(HX_CSTRING("vertexStride"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("UVData"));
	outFields->push(HX_CSTRING("indexData"));
	outFields->push(HX_CSTRING("vertexData"));
	outFields->push(HX_CSTRING("uvTransform"));
	outFields->push(HX_CSTRING("castsShadows"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("sourceEntity"));
	outFields->push(HX_CSTRING("numTriangles"));
	outFields->push(HX_CSTRING("animator"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRenderSceneTransform"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_indexData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("get_uvTransform"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("buildGeometry"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("invalidateBounds"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	HX_CSTRING("get_sourceEntity"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("get_animator"),
	HX_CSTRING("_animator"),
	HX_CSTRING("_uvTransform"),
	HX_CSTRING("_material"),
	HX_CSTRING("_geometry"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkyBox_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkyBox_obj::__mClass,"__mClass");
};

Class SkyBox_obj::__mClass;

void SkyBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.SkyBox"), hx::TCanCast< SkyBox_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkyBox_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
