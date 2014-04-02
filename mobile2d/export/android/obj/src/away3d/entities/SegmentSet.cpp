#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingSphere
#include <away3d/bounds/BoundingSphere.h>
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
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
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
#ifndef INCLUDED_away3d_core_partition_RenderableNode
#include <away3d/core/partition/RenderableNode.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_entities_SubSet
#include <away3d/entities/SubSet.h>
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
#ifndef INCLUDED_away3d_materials_SegmentMaterial
#include <away3d/materials/SegmentMaterial.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace entities{

Void SegmentSet_obj::__construct()
{
HX_STACK_PUSH("SegmentSet::new","away3d/entities/SegmentSet.hx",62);
{
	HX_STACK_LINE(63)
	this->LIMIT = (int)196605;
	HX_STACK_LINE(64)
	super::__construct();
	HX_STACK_LINE(65)
	this->_subSetCount = (int)0;
	HX_STACK_LINE(66)
	this->_subSets = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(67)
	this->addSubSet();
	HX_STACK_LINE(68)
	this->_segments = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(69)
	this->set_material(::away3d::materials::SegmentMaterial_obj::__new(null()));
}
;
	return null();
}

SegmentSet_obj::~SegmentSet_obj() { }

Dynamic SegmentSet_obj::__CreateEmpty() { return  new SegmentSet_obj; }
hx::ObjectPtr< SegmentSet_obj > SegmentSet_obj::__new()
{  hx::ObjectPtr< SegmentSet_obj > result = new SegmentSet_obj();
	result->__construct();
	return result;}

Dynamic SegmentSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SegmentSet_obj > result = new SegmentSet_obj();
	result->__construct();
	return result;}

hx::Object *SegmentSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::base::IMaterialOwner_obj)) return operator ::away3d::core::base::IMaterialOwner_obj *();
	if (inType==typeid( ::away3d::core::base::IRenderable_obj)) return operator ::away3d::core::base::IRenderable_obj *();
	return super::__ToInterface(inType);
}

::flash::geom::Matrix3D SegmentSet_obj::getRenderSceneTransform( ::away3d::cameras::Camera3D camera){
	HX_STACK_PUSH("SegmentSet::getRenderSceneTransform","away3d/entities/SegmentSet.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_ARG(camera,"camera");
	HX_STACK_LINE(564)
	return this->_sceneTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getRenderSceneTransform,return )

::String SegmentSet_obj::get_assetType( ){
	HX_STACK_PUSH("SegmentSet::get_assetType","away3d/entities/SegmentSet.hx",560);
	HX_STACK_THIS(this);
	HX_STACK_LINE(560)
	return ::away3d::library::assets::AssetType_obj::SEGMENT_SET;
}


int SegmentSet_obj::get_vertexTangentOffset( ){
	HX_STACK_PUSH("SegmentSet::get_vertexTangentOffset","away3d/entities/SegmentSet.hx",556);
	HX_STACK_THIS(this);
	HX_STACK_LINE(556)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexTangentOffset,return )

int SegmentSet_obj::get_vertexNormalOffset( ){
	HX_STACK_PUSH("SegmentSet::get_vertexNormalOffset","away3d/entities/SegmentSet.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_LINE(552)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexNormalOffset,return )

int SegmentSet_obj::get_vertexOffset( ){
	HX_STACK_PUSH("SegmentSet::get_vertexOffset","away3d/entities/SegmentSet.hx",548);
	HX_STACK_THIS(this);
	HX_STACK_LINE(548)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexOffset,return )

Array< Float > SegmentSet_obj::get_vertexTangentData( ){
	HX_STACK_PUSH("SegmentSet::get_vertexTangentData","away3d/entities/SegmentSet.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_LINE(544)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexTangentData,return )

Array< Float > SegmentSet_obj::get_vertexNormalData( ){
	HX_STACK_PUSH("SegmentSet::get_vertexNormalData","away3d/entities/SegmentSet.hx",540);
	HX_STACK_THIS(this);
	HX_STACK_LINE(540)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexNormalData,return )

int SegmentSet_obj::get_vertexStride( ){
	HX_STACK_PUSH("SegmentSet::get_vertexStride","away3d/entities/SegmentSet.hx",536);
	HX_STACK_THIS(this);
	HX_STACK_LINE(536)
	return (int)11;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexStride,return )

int SegmentSet_obj::get_numVertices( ){
	HX_STACK_PUSH("SegmentSet::get_numVertices","away3d/entities/SegmentSet.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(532)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_numVertices,return )

Array< Float > SegmentSet_obj::get_UVData( ){
	HX_STACK_PUSH("SegmentSet::get_UVData","away3d/entities/SegmentSet.hx",528);
	HX_STACK_THIS(this);
	HX_STACK_LINE(528)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_UVData,return )

Array< int > SegmentSet_obj::get_indexData( ){
	HX_STACK_PUSH("SegmentSet::get_indexData","away3d/entities/SegmentSet.hx",524);
	HX_STACK_THIS(this);
	HX_STACK_LINE(524)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_indexData,return )

Array< Float > SegmentSet_obj::get_vertexData( ){
	HX_STACK_PUSH("SegmentSet::get_vertexData","away3d/entities/SegmentSet.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_LINE(520)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexData,return )

::flash::geom::Matrix SegmentSet_obj::get_uvTransform( ){
	HX_STACK_PUSH("SegmentSet::get_uvTransform","away3d/entities/SegmentSet.hx",516);
	HX_STACK_THIS(this);
	HX_STACK_LINE(516)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_uvTransform,return )

::away3d::materials::MaterialBase SegmentSet_obj::set_material( ::away3d::materials::MaterialBase value){
	HX_STACK_PUSH("SegmentSet::set_material","away3d/entities/SegmentSet.hx",508);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(509)
	if (((value == this->_material))){
		HX_STACK_LINE(509)
		return value;
	}
	HX_STACK_LINE(510)
	if (((this->_material != null()))){
		HX_STACK_LINE(510)
		this->_material->removeOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(511)
	this->_material = value;
	HX_STACK_LINE(512)
	if (((this->_material != null()))){
		HX_STACK_LINE(512)
		this->_material->addOwner(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(513)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,set_material,return )

::away3d::animators::IAnimator SegmentSet_obj::get_animator( ){
	HX_STACK_PUSH("SegmentSet::get_animator","away3d/entities/SegmentSet.hx",504);
	HX_STACK_THIS(this);
	HX_STACK_LINE(504)
	return this->_animator;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_animator,return )

::away3d::materials::MaterialBase SegmentSet_obj::get_material( ){
	HX_STACK_PUSH("SegmentSet::get_material","away3d/entities/SegmentSet.hx",500);
	HX_STACK_THIS(this);
	HX_STACK_LINE(500)
	return this->_material;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_material,return )

bool SegmentSet_obj::get_castsShadows( ){
	HX_STACK_PUSH("SegmentSet::get_castsShadows","away3d/entities/SegmentSet.hx",496);
	HX_STACK_THIS(this);
	HX_STACK_LINE(496)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_castsShadows,return )

::away3d::entities::Entity SegmentSet_obj::get_sourceEntity( ){
	HX_STACK_PUSH("SegmentSet::get_sourceEntity","away3d/entities/SegmentSet.hx",492);
	HX_STACK_THIS(this);
	HX_STACK_LINE(492)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_sourceEntity,return )

int SegmentSet_obj::get_numTriangles( ){
	HX_STACK_PUSH("SegmentSet::get_numTriangles","away3d/entities/SegmentSet.hx",488);
	HX_STACK_THIS(this);
	HX_STACK_LINE(488)
	return ::Std_obj::_int((Float(this->_numIndices) / Float((int)3)));
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_numTriangles,return )

::away3d::core::partition::EntityNode SegmentSet_obj::createEntityPartitionNode( ){
	HX_STACK_PUSH("SegmentSet::createEntityPartitionNode","away3d/entities/SegmentSet.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_LINE(484)
	return ::away3d::core::partition::RenderableNode_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


Void SegmentSet_obj::updateBounds( ){
{
		HX_STACK_PUSH("SegmentSet::updateBounds","away3d/entities/SegmentSet.hx",433);
		HX_STACK_THIS(this);
		HX_STACK_LINE(434)
		::away3d::entities::SubSet subSet;		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(435)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(436)
		Float v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(437)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(438)
		Float minX = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(439)
		Float minY = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(440)
		Float minZ = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(minZ,"minZ");
		HX_STACK_LINE(441)
		Float maxX = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(442)
		Float maxY = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(443)
		Float maxZ = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(maxZ,"maxZ");
		HX_STACK_LINE(444)
		Array< Float > vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(445)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(446)
		while(((i < this->_subSetCount))){
			HX_STACK_LINE(447)
			subSet = this->_subSets->__get(i).StaticCast< ::away3d::entities::SubSet >();
			HX_STACK_LINE(448)
			index = (int)0;
			HX_STACK_LINE(449)
			vertices = subSet->vertices;
			HX_STACK_LINE(450)
			len = vertices->__Field(HX_CSTRING("length"),true);
			HX_STACK_LINE(451)
			if (((len == (int)0))){
				HX_STACK_LINE(452)
				++(i);
				HX_STACK_LINE(453)
				continue;
			}
			HX_STACK_LINE(456)
			while(((index < len))){
				HX_STACK_LINE(457)
				v = vertices->__get((index)++);
				HX_STACK_LINE(458)
				if (((v < minX))){
					HX_STACK_LINE(458)
					minX = v;
				}
				else{
					HX_STACK_LINE(459)
					if (((v > maxX))){
						HX_STACK_LINE(459)
						maxX = v;
					}
				}
				HX_STACK_LINE(460)
				v = vertices->__get((index)++);
				HX_STACK_LINE(461)
				if (((v < minY))){
					HX_STACK_LINE(461)
					minY = v;
				}
				else{
					HX_STACK_LINE(462)
					if (((v > maxY))){
						HX_STACK_LINE(462)
						maxY = v;
					}
				}
				HX_STACK_LINE(463)
				v = vertices->__get((index)++);
				HX_STACK_LINE(464)
				if (((v < minZ))){
					HX_STACK_LINE(464)
					minZ = v;
				}
				else{
					HX_STACK_LINE(465)
					if (((v > maxZ))){
						HX_STACK_LINE(465)
						maxZ = v;
					}
				}
				HX_STACK_LINE(466)
				hx::AddEq(index,(int)8);
			}
			HX_STACK_LINE(469)
			++(i);
		}
		HX_STACK_LINE(471)
		if (((minX != ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(471)
			this->_bounds->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
		}
		else{
			HX_STACK_LINE(473)
			Float min = .5;		HX_STACK_VAR(min,"min");
			HX_STACK_LINE(474)
			this->_bounds->fromExtremes(-(min),-(min),-(min),min,min,min);
		}
		HX_STACK_LINE(477)
		this->_boundsInvalid = false;
	}
return null();
}


::away3d::bounds::BoundingVolumeBase SegmentSet_obj::getDefaultBoundingVolume( ){
	HX_STACK_PUSH("SegmentSet::getDefaultBoundingVolume","away3d/entities/SegmentSet.hx",425);
	HX_STACK_THIS(this);
	HX_STACK_LINE(425)
	return ::away3d::bounds::BoundingSphere_obj::__new();
}


bool SegmentSet_obj::get_mouseEnabled( ){
	HX_STACK_PUSH("SegmentSet::get_mouseEnabled","away3d/entities/SegmentSet.hx",417);
	HX_STACK_THIS(this);
	HX_STACK_LINE(417)
	return false;
}


Void SegmentSet_obj::dispose( ){
{
		HX_STACK_PUSH("SegmentSet::dispose","away3d/entities/SegmentSet.hx",402);
		HX_STACK_THIS(this);
		HX_STACK_LINE(403)
		this->super::dispose();
		HX_STACK_LINE(404)
		this->removeAllSegments();
		HX_STACK_LINE(405)
		this->_segments = null();
		HX_STACK_LINE(406)
		this->_material = null();
		HX_STACK_LINE(407)
		::away3d::entities::SubSet subSet = this->_subSets->__get((int)0).StaticCast< ::away3d::entities::SubSet >();		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(408)
		subSet->vertices = null();
		HX_STACK_LINE(409)
		subSet->indices = null();
		HX_STACK_LINE(410)
		this->_subSets = null();
	}
return null();
}


::away3d::entities::SubSet SegmentSet_obj::addSubSet( ){
	HX_STACK_PUSH("SegmentSet::addSubSet","away3d/entities/SegmentSet.hx",384);
	HX_STACK_THIS(this);
	HX_STACK_LINE(385)
	::away3d::entities::SubSet subSet = ::away3d::entities::SubSet_obj::__new();		HX_STACK_VAR(subSet,"subSet");
	HX_STACK_LINE(386)
	this->_subSets->__Field(HX_CSTRING("push"),true)(subSet);
	HX_STACK_LINE(387)
	subSet->vertices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(388)
	subSet->numVertices = (int)0;
	HX_STACK_LINE(389)
	subSet->indices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(390)
	subSet->numIndices = (int)0;
	HX_STACK_LINE(391)
	subSet->vertexBufferDirty = true;
	HX_STACK_LINE(392)
	subSet->indexBufferDirty = true;
	HX_STACK_LINE(393)
	subSet->lineCount = (int)0;
	HX_STACK_LINE(394)
	(this->_subSetCount)++;
	HX_STACK_LINE(395)
	return subSet;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,addSubSet,return )

Void SegmentSet_obj::reOrderIndices( int subSetIndex,int index){
{
		HX_STACK_PUSH("SegmentSet::reOrderIndices","away3d/entities/SegmentSet.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subSetIndex,"subSetIndex");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(370)
		::away3d::entities::SegRef segRef;		HX_STACK_VAR(segRef,"segRef");
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			int _g1 = index;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_indexSegments - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(372)
			while(((_g1 < _g))){
				HX_STACK_LINE(372)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(373)
				segRef = this->_segments->get((i + (int)1));
				HX_STACK_LINE(374)
				segRef->index = i;
				HX_STACK_LINE(375)
				if (((segRef->subSetIndex == subSetIndex))){
					HX_STACK_LINE(376)
					::away3d::primitives::data::Segment _g2 = segRef->segment;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(376)
					_g2->set_index((_g2->get_index() - (int)44));
				}
				HX_STACK_LINE(378)
				this->_segments->set(i,segRef);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,reOrderIndices,(void))

Void SegmentSet_obj::activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentSet::activateSecondaryUVBuffer","away3d/entities/SegmentSet.hx",366);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateSecondaryUVBuffer,(void))

Void SegmentSet_obj::activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentSet::activateVertexTangentBuffer","away3d/entities/SegmentSet.hx",363);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexTangentBuffer,(void))

Void SegmentSet_obj::activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentSet::activateVertexNormalBuffer","away3d/entities/SegmentSet.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexNormalBuffer,(void))

Void SegmentSet_obj::activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentSet::activateUVBuffer","away3d/entities/SegmentSet.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateUVBuffer,(void))

Void SegmentSet_obj::activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentSet::activateVertexBuffer","away3d/entities/SegmentSet.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(340)
		::away3d::entities::SubSet subSet = this->_subSets->__get(index).StaticCast< ::away3d::entities::SubSet >();		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(341)
		this->_activeSubSet = subSet;
		HX_STACK_LINE(342)
		this->_numIndices = subSet->numIndices;
		HX_STACK_LINE(343)
		if (((bool((subSet->vertexContext3D != stage3DProxy->get_context3D())) || bool(subSet->vertexBufferDirty)))){
			HX_STACK_LINE(344)
			subSet->vertexBuffer = stage3DProxy->_context3D->createVertexBuffer(subSet->numVertices,(int)11);
			HX_STACK_LINE(345)
			subSet->vertexBuffer->uploadFromVector(subSet->vertices,(int)0,subSet->numVertices);
			HX_STACK_LINE(346)
			subSet->vertexBufferDirty = false;
			HX_STACK_LINE(347)
			subSet->vertexContext3D = stage3DProxy->get_context3D();
		}
		HX_STACK_LINE(349)
		::flash::display3D::VertexBuffer3D vertexBuffer = subSet->vertexBuffer;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
		HX_STACK_LINE(350)
		::flash::display3D::Context3D context3d = stage3DProxy->_context3D;		HX_STACK_VAR(context3d,"context3d");
		HX_STACK_LINE(351)
		context3d->setVertexBufferAt((int)0,vertexBuffer,(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
		HX_STACK_LINE(352)
		context3d->setVertexBufferAt((int)1,vertexBuffer,(int)3,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);
		HX_STACK_LINE(353)
		context3d->setVertexBufferAt((int)2,vertexBuffer,(int)6,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_1);
		HX_STACK_LINE(354)
		context3d->setVertexBufferAt((int)3,vertexBuffer,(int)7,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexBuffer,(void))

::flash::display3D::IndexBuffer3D SegmentSet_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("SegmentSet::getIndexBuffer","away3d/entities/SegmentSet.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(330)
	if (((bool((this->_activeSubSet->indexContext3D != stage3DProxy->get_context3D())) || bool(this->_activeSubSet->indexBufferDirty)))){
		HX_STACK_LINE(331)
		this->_activeSubSet->indexBuffer = stage3DProxy->_context3D->createIndexBuffer(this->_activeSubSet->numIndices);
		HX_STACK_LINE(332)
		this->_activeSubSet->indexBuffer->uploadFromVector(this->_activeSubSet->indices,(int)0,this->_activeSubSet->numIndices);
		HX_STACK_LINE(333)
		this->_activeSubSet->indexBufferDirty = false;
		HX_STACK_LINE(334)
		this->_activeSubSet->indexContext3D = stage3DProxy->get_context3D();
	}
	HX_STACK_LINE(336)
	return this->_activeSubSet->indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getIndexBuffer,return )

bool SegmentSet_obj::get_hasData( ){
	HX_STACK_PUSH("SegmentSet::get_hasData","away3d/entities/SegmentSet.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_LINE(325)
	return this->_hasData;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_hasData,return )

Void SegmentSet_obj::updateSegment( ::away3d::primitives::data::Segment segment){
{
		HX_STACK_PUSH("SegmentSet::updateSegment","away3d/entities/SegmentSet.hx",257);
		HX_STACK_THIS(this);
		HX_STACK_ARG(segment,"segment");
		HX_STACK_LINE(259)
		::flash::geom::Vector3D start = segment->_start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(260)
		::flash::geom::Vector3D end = segment->_end;		HX_STACK_VAR(end,"end");
		HX_STACK_LINE(261)
		Float startX = start->x;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(262)
		Float startY = start->y;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(263)
		Float startZ = start->z;		HX_STACK_VAR(startZ,"startZ");
		HX_STACK_LINE(264)
		Float endX = end->x;		HX_STACK_VAR(endX,"endX");
		HX_STACK_LINE(265)
		Float endY = end->y;		HX_STACK_VAR(endY,"endY");
		HX_STACK_LINE(266)
		Float endZ = end->z;		HX_STACK_VAR(endZ,"endZ");
		HX_STACK_LINE(267)
		Float startR = segment->_startR;		HX_STACK_VAR(startR,"startR");
		HX_STACK_LINE(268)
		Float startG = segment->_startG;		HX_STACK_VAR(startG,"startG");
		HX_STACK_LINE(269)
		Float startB = segment->_startB;		HX_STACK_VAR(startB,"startB");
		HX_STACK_LINE(270)
		Float endR = segment->_endR;		HX_STACK_VAR(endR,"endR");
		HX_STACK_LINE(271)
		Float endG = segment->_endG;		HX_STACK_VAR(endG,"endG");
		HX_STACK_LINE(272)
		Float endB = segment->_endB;		HX_STACK_VAR(endB,"endB");
		HX_STACK_LINE(273)
		int index = segment->get_index();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(274)
		Float t = segment->get_thickness();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(275)
		::away3d::entities::SubSet subSet = this->_subSets->__get(segment->get_subSetIndex()).StaticCast< ::away3d::entities::SubSet >();		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(276)
		Array< Float > vertices = subSet->vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(277)
		vertices[(index)++] = startX;
		HX_STACK_LINE(278)
		vertices[(index)++] = startY;
		HX_STACK_LINE(279)
		vertices[(index)++] = startZ;
		HX_STACK_LINE(280)
		vertices[(index)++] = endX;
		HX_STACK_LINE(281)
		vertices[(index)++] = endY;
		HX_STACK_LINE(282)
		vertices[(index)++] = endZ;
		HX_STACK_LINE(283)
		vertices[(index)++] = t;
		HX_STACK_LINE(284)
		vertices[(index)++] = startR;
		HX_STACK_LINE(285)
		vertices[(index)++] = startG;
		HX_STACK_LINE(286)
		vertices[(index)++] = startB;
		HX_STACK_LINE(287)
		vertices[(index)++] = (int)1;
		HX_STACK_LINE(288)
		vertices[(index)++] = endX;
		HX_STACK_LINE(289)
		vertices[(index)++] = endY;
		HX_STACK_LINE(290)
		vertices[(index)++] = endZ;
		HX_STACK_LINE(291)
		vertices[(index)++] = startX;
		HX_STACK_LINE(292)
		vertices[(index)++] = startY;
		HX_STACK_LINE(293)
		vertices[(index)++] = startZ;
		HX_STACK_LINE(294)
		vertices[(index)++] = -(t);
		HX_STACK_LINE(295)
		vertices[(index)++] = endR;
		HX_STACK_LINE(296)
		vertices[(index)++] = endG;
		HX_STACK_LINE(297)
		vertices[(index)++] = endB;
		HX_STACK_LINE(298)
		vertices[(index)++] = (int)1;
		HX_STACK_LINE(299)
		vertices[(index)++] = startX;
		HX_STACK_LINE(300)
		vertices[(index)++] = startY;
		HX_STACK_LINE(301)
		vertices[(index)++] = startZ;
		HX_STACK_LINE(302)
		vertices[(index)++] = endX;
		HX_STACK_LINE(303)
		vertices[(index)++] = endY;
		HX_STACK_LINE(304)
		vertices[(index)++] = endZ;
		HX_STACK_LINE(305)
		vertices[(index)++] = -(t);
		HX_STACK_LINE(306)
		vertices[(index)++] = startR;
		HX_STACK_LINE(307)
		vertices[(index)++] = startG;
		HX_STACK_LINE(308)
		vertices[(index)++] = startB;
		HX_STACK_LINE(309)
		vertices[(index)++] = (int)1;
		HX_STACK_LINE(310)
		vertices[(index)++] = endX;
		HX_STACK_LINE(311)
		vertices[(index)++] = endY;
		HX_STACK_LINE(312)
		vertices[(index)++] = endZ;
		HX_STACK_LINE(313)
		vertices[(index)++] = startX;
		HX_STACK_LINE(314)
		vertices[(index)++] = startY;
		HX_STACK_LINE(315)
		vertices[(index)++] = startZ;
		HX_STACK_LINE(316)
		vertices[(index)++] = t;
		HX_STACK_LINE(317)
		vertices[(index)++] = endR;
		HX_STACK_LINE(318)
		vertices[(index)++] = endG;
		HX_STACK_LINE(319)
		vertices[(index)++] = endB;
		HX_STACK_LINE(320)
		vertices[(index)++] = (int)1;
		HX_STACK_LINE(321)
		subSet->vertexBufferDirty = true;
		HX_STACK_LINE(322)
		this->invalidateBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,updateSegment,(void))

int SegmentSet_obj::get_subSetCount( ){
	HX_STACK_PUSH("SegmentSet::get_subSetCount","away3d/entities/SegmentSet.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	return this->_subSetCount;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_subSetCount,return )

int SegmentSet_obj::get_segmentCount( ){
	HX_STACK_PUSH("SegmentSet::get_segmentCount","away3d/entities/SegmentSet.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(249)
	return this->_indexSegments;
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_segmentCount,return )

::away3d::primitives::data::Segment SegmentSet_obj::getSegment( int index){
	HX_STACK_PUSH("SegmentSet::getSegment","away3d/entities/SegmentSet.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(238)
	if (((index > (this->_indexSegments - (int)1)))){
		HX_STACK_LINE(239)
		return null();
	}
	HX_STACK_LINE(241)
	return this->_segments->get(index)->__Field(HX_CSTRING("segment"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getSegment,return )

Void SegmentSet_obj::removeAllSegments( ){
{
		HX_STACK_PUSH("SegmentSet::removeAllSegments","away3d/entities/SegmentSet.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_LINE(204)
		::away3d::entities::SubSet subSet;		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_subSetCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			while(((_g1 < _g))){
				HX_STACK_LINE(205)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(206)
				subSet = this->_subSets->__get(i).StaticCast< ::away3d::entities::SubSet >();
				HX_STACK_LINE(207)
				subSet->vertices = null();
				HX_STACK_LINE(208)
				subSet->indices = null();
				HX_STACK_LINE(209)
				if (((subSet->vertexBuffer != null()))){
					HX_STACK_LINE(210)
					subSet->vertexBuffer->dispose();
				}
				HX_STACK_LINE(211)
				if (((subSet->indexBuffer != null()))){
					HX_STACK_LINE(212)
					subSet->indexBuffer->dispose();
				}
				HX_STACK_LINE(213)
				subSet = null();
			}
		}
		HX_STACK_LINE(216)
		Dynamic iterator = this->_segments->iterator();		HX_STACK_VAR(iterator,"iterator");
		HX_STACK_LINE(217)
		for(::cpp::FastIterator_obj< ::away3d::entities::SegRef > *__it = ::cpp::CreateFastIterator< ::away3d::entities::SegRef >(iterator);  __it->hasNext(); ){
			::away3d::entities::SegRef segReg = __it->next();
			segReg = null();
		}
		HX_STACK_LINE(220)
		this->_segments = null();
		HX_STACK_LINE(222)
		this->_subSetCount = (int)0;
		HX_STACK_LINE(223)
		this->_activeSubSet = null();
		HX_STACK_LINE(224)
		this->_indexSegments = (int)0;
		HX_STACK_LINE(225)
		this->_subSets = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(226)
		this->_segments = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(228)
		this->addSubSet();
		HX_STACK_LINE(230)
		this->_hasData = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,removeAllSegments,(void))

Void SegmentSet_obj::removeSegment( ::away3d::primitives::data::Segment segment,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(false);
	HX_STACK_PUSH("SegmentSet::removeSegment","away3d/entities/SegmentSet.hx",194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(segment,"segment");
	HX_STACK_ARG(dispose,"dispose");
{
		HX_STACK_LINE(195)
		if (((segment->get_index() == (int)-1))){
			HX_STACK_LINE(195)
			return null();
		}
		HX_STACK_LINE(196)
		this->removeSegmentByIndex(::Std_obj::_int((Float(segment->get_index()) / Float((int)44))),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,removeSegment,(void))

Void SegmentSet_obj::removeSegmentByIndex( int index,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(false);
	HX_STACK_PUSH("SegmentSet::removeSegmentByIndex","away3d/entities/SegmentSet.hx",123);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(dispose,"dispose");
{
		HX_STACK_LINE(124)
		::away3d::entities::SegRef segRef;		HX_STACK_VAR(segRef,"segRef");
		HX_STACK_LINE(125)
		if (((index >= this->_indexSegments))){
			HX_STACK_LINE(126)
			return null();
		}
		HX_STACK_LINE(128)
		if ((this->_segments->exists(index))){
			HX_STACK_LINE(128)
			segRef = this->_segments->get(index);
		}
		else{
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(135)
		::away3d::entities::SubSet subSet;		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(136)
		if (((this->_subSets->__get(segRef->subSetIndex).StaticCast< ::away3d::entities::SubSet >() == null()))){
			HX_STACK_LINE(137)
			return null();
		}
		HX_STACK_LINE(139)
		int subSetIndex = segRef->subSetIndex;		HX_STACK_VAR(subSetIndex,"subSetIndex");
		HX_STACK_LINE(140)
		subSet = this->_subSets->__get(segRef->subSetIndex).StaticCast< ::away3d::entities::SubSet >();
		HX_STACK_LINE(142)
		::away3d::primitives::data::Segment segment = segRef->segment;		HX_STACK_VAR(segment,"segment");
		HX_STACK_LINE(143)
		Array< int > indices = subSet->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(145)
		int ind = (index * (int)6);		HX_STACK_VAR(ind,"ind");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g1 = ind;		HX_STACK_VAR(_g1,"_g1");
			int _g = indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while(((_g1 < _g))){
				HX_STACK_LINE(146)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(147)
				hx::SubEq(indices[i],(int)4);
			}
		}
		HX_STACK_LINE(149)
		::flash::_Vector::Vector_Impl__obj::splice(subSet->indices,(index * (int)6),(int)6);
		HX_STACK_LINE(150)
		::flash::_Vector::Vector_Impl__obj::splice(subSet->vertices,(index * (int)44),(int)44);
		HX_STACK_LINE(151)
		subSet->numVertices = ::Std_obj::_int((Float(subSet->vertices->__Field(HX_CSTRING("length"),true)) / Float((int)11)));
		HX_STACK_LINE(152)
		subSet->numIndices = indices->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(153)
		subSet->vertexBufferDirty = true;
		HX_STACK_LINE(154)
		subSet->indexBufferDirty = true;
		HX_STACK_LINE(155)
		(subSet->lineCount)--;
		HX_STACK_LINE(157)
		if ((dispose)){
			HX_STACK_LINE(158)
			segment->dispose();
			HX_STACK_LINE(159)
			segment = null();
		}
		else{
			HX_STACK_LINE(163)
			segment->set_index((int)-1);
			HX_STACK_LINE(164)
			segment->set_segmentsBase(null());
		}
		HX_STACK_LINE(167)
		if (((subSet->lineCount == (int)0))){
			HX_STACK_LINE(167)
			if (((subSetIndex == (int)0))){
				HX_STACK_LINE(169)
				this->_hasData = false;
			}
			else{
				HX_STACK_LINE(174)
				subSet->dispose();
				HX_STACK_LINE(175)
				this->_subSets[subSetIndex] = null();
				HX_STACK_LINE(176)
				::flash::_Vector::Vector_Impl__obj::splice(this->_subSets,subSetIndex,(int)1);
			}
		}
		HX_STACK_LINE(180)
		this->reOrderIndices(subSetIndex,index);
		HX_STACK_LINE(182)
		segRef = null();
		HX_STACK_LINE(183)
		this->_segments->remove(this->_indexSegments);
		HX_STACK_LINE(184)
		(this->_indexSegments)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,removeSegmentByIndex,(void))

Void SegmentSet_obj::addSegment( ::away3d::primitives::data::Segment segment){
{
		HX_STACK_PUSH("SegmentSet::addSegment","away3d/entities/SegmentSet.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(segment,"segment");
		HX_STACK_LINE(79)
		segment->set_segmentsBase(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(80)
		this->_hasData = true;
		HX_STACK_LINE(81)
		int subSetIndex = (this->_subSets->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(subSetIndex,"subSetIndex");
		HX_STACK_LINE(82)
		::away3d::entities::SubSet subSet = this->_subSets->__get(subSetIndex).StaticCast< ::away3d::entities::SubSet >();		HX_STACK_VAR(subSet,"subSet");
		HX_STACK_LINE(83)
		if ((((subSet->vertices->__Field(HX_CSTRING("length"),true) + (int)44) > this->LIMIT))){
			HX_STACK_LINE(84)
			subSet = this->addSubSet();
			HX_STACK_LINE(85)
			(subSetIndex)++;
		}
		HX_STACK_LINE(87)
		segment->set_index(subSet->vertices->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(88)
		segment->set_subSetIndex(subSetIndex);
		HX_STACK_LINE(89)
		this->updateSegment(segment);
		HX_STACK_LINE(90)
		int index = (int(subSet->lineCount) << int((int)2));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(92)
		subSet->indices->__Field(HX_CSTRING("push"),true)(index);
		HX_STACK_LINE(93)
		subSet->indices->__Field(HX_CSTRING("push"),true)((index + (int)1));
		HX_STACK_LINE(94)
		subSet->indices->__Field(HX_CSTRING("push"),true)((index + (int)2));
		HX_STACK_LINE(95)
		subSet->indices->__Field(HX_CSTRING("push"),true)((index + (int)3));
		HX_STACK_LINE(96)
		subSet->indices->__Field(HX_CSTRING("push"),true)((index + (int)2));
		HX_STACK_LINE(97)
		subSet->indices->__Field(HX_CSTRING("push"),true)((index + (int)1));
		HX_STACK_LINE(98)
		subSet->numVertices = ::Std_obj::_int((Float(subSet->vertices->__Field(HX_CSTRING("length"),true)) / Float((int)11)));
		HX_STACK_LINE(99)
		subSet->numIndices = subSet->indices->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(100)
		(subSet->lineCount)++;
		HX_STACK_LINE(101)
		::away3d::entities::SegRef segRef = ::away3d::entities::SegRef_obj::__new();		HX_STACK_VAR(segRef,"segRef");
		HX_STACK_LINE(102)
		segRef->index = index;
		HX_STACK_LINE(103)
		segRef->subSetIndex = subSetIndex;
		HX_STACK_LINE(104)
		segRef->segment = segment;
		HX_STACK_LINE(105)
		this->_segments->set(this->_indexSegments,segRef);
		HX_STACK_LINE(106)
		(this->_indexSegments)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,addSegment,(void))


SegmentSet_obj::SegmentSet_obj()
{
}

void SegmentSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentSet);
	HX_MARK_MEMBER_NAME(_indexSegments,"_indexSegments");
	HX_MARK_MEMBER_NAME(_segments,"_segments");
	HX_MARK_MEMBER_NAME(_hasData,"_hasData");
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_numIndices,"_numIndices");
	HX_MARK_MEMBER_NAME(_subSetCount,"_subSetCount");
	HX_MARK_MEMBER_NAME(_subSets,"_subSets");
	HX_MARK_MEMBER_NAME(_activeSubSet,"_activeSubSet");
	HX_MARK_MEMBER_NAME(LIMIT,"LIMIT");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_indexSegments,"_indexSegments");
	HX_VISIT_MEMBER_NAME(_segments,"_segments");
	HX_VISIT_MEMBER_NAME(_hasData,"_hasData");
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_numIndices,"_numIndices");
	HX_VISIT_MEMBER_NAME(_subSetCount,"_subSetCount");
	HX_VISIT_MEMBER_NAME(_subSets,"_subSets");
	HX_VISIT_MEMBER_NAME(_activeSubSet,"_activeSubSet");
	HX_VISIT_MEMBER_NAME(LIMIT,"LIMIT");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SegmentSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LIMIT") ) { return LIMIT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UVData") ) { return get_UVData(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hasData") ) { return get_hasData(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasData") ) { return _hasData; }
		if (HX_FIELD_EQ(inName,"_subSets") ) { return _subSets; }
		if (HX_FIELD_EQ(inName,"animator") ) { return get_animator(); }
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addSubSet") ) { return addSubSet_dyn(); }
		if (HX_FIELD_EQ(inName,"_segments") ) { return _segments; }
		if (HX_FIELD_EQ(inName,"_animator") ) { return _animator; }
		if (HX_FIELD_EQ(inName,"_material") ) { return _material; }
		if (HX_FIELD_EQ(inName,"indexData") ) { return get_indexData(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return get_UVData_dyn(); }
		if (HX_FIELD_EQ(inName,"getSegment") ) { return getSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"addSegment") ) { return addSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexData") ) { return get_vertexData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_hasData") ) { return get_hasData_dyn(); }
		if (HX_FIELD_EQ(inName,"_numIndices") ) { return _numIndices; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return get_numVertices(); }
		if (HX_FIELD_EQ(inName,"uvTransform") ) { return get_uvTransform(); }
		if (HX_FIELD_EQ(inName,"subSetCount") ) { return get_subSetCount(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return get_animator_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_subSetCount") ) { return _subSetCount; }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { return get_vertexOffset(); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { return get_vertexStride(); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { return get_castsShadows(); }
		if (HX_FIELD_EQ(inName,"sourceEntity") ) { return get_sourceEntity(); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { return get_numTriangles(); }
		if (HX_FIELD_EQ(inName,"segmentCount") ) { return get_segmentCount(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return get_indexData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSegment") ) { return updateSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"removeSegment") ) { return removeSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeSubSet") ) { return _activeSubSet; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return get_vertexData_dyn(); }
		if (HX_FIELD_EQ(inName,"reOrderIndices") ) { return reOrderIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return getIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_indexSegments") ) { return _indexSegments; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uvTransform") ) { return get_uvTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subSetCount") ) { return get_subSetCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return get_vertexOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return get_vertexStride_dyn(); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return get_castsShadows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sourceEntity") ) { return get_sourceEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return activateUVBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_segmentCount") ) { return get_segmentCount_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { return get_vertexNormalData(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllSegments") ) { return removeAllSegments_dyn(); }
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
		if (HX_FIELD_EQ(inName,"removeSegmentByIndex") ) { return removeSegmentByIndex_dyn(); }
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

Dynamic SegmentSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LIMIT") ) { LIMIT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hasData") ) { _hasData=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_subSets") ) { _subSets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_segments") ) { _segments=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::away3d::animators::IAnimator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numIndices") ) { _numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subSetCount") ) { _subSetCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeSubSet") ) { _activeSubSet=inValue.Cast< ::away3d::entities::SubSet >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_indexSegments") ) { _indexSegments=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegmentSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_indexSegments"));
	outFields->push(HX_CSTRING("_segments"));
	outFields->push(HX_CSTRING("_hasData"));
	outFields->push(HX_CSTRING("_animator"));
	outFields->push(HX_CSTRING("_material"));
	outFields->push(HX_CSTRING("_numIndices"));
	outFields->push(HX_CSTRING("_subSetCount"));
	outFields->push(HX_CSTRING("_subSets"));
	outFields->push(HX_CSTRING("_activeSubSet"));
	outFields->push(HX_CSTRING("LIMIT"));
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
	outFields->push(HX_CSTRING("animator"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("castsShadows"));
	outFields->push(HX_CSTRING("sourceEntity"));
	outFields->push(HX_CSTRING("numTriangles"));
	outFields->push(HX_CSTRING("hasData"));
	outFields->push(HX_CSTRING("subSetCount"));
	outFields->push(HX_CSTRING("segmentCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRenderSceneTransform"),
	HX_CSTRING("get_assetType"),
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
	HX_CSTRING("set_material"),
	HX_CSTRING("get_animator"),
	HX_CSTRING("get_material"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("get_sourceEntity"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("createEntityPartitionNode"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("getDefaultBoundingVolume"),
	HX_CSTRING("get_mouseEnabled"),
	HX_CSTRING("dispose"),
	HX_CSTRING("addSubSet"),
	HX_CSTRING("reOrderIndices"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("get_hasData"),
	HX_CSTRING("updateSegment"),
	HX_CSTRING("get_subSetCount"),
	HX_CSTRING("get_segmentCount"),
	HX_CSTRING("getSegment"),
	HX_CSTRING("removeAllSegments"),
	HX_CSTRING("removeSegment"),
	HX_CSTRING("removeSegmentByIndex"),
	HX_CSTRING("addSegment"),
	HX_CSTRING("_indexSegments"),
	HX_CSTRING("_segments"),
	HX_CSTRING("_hasData"),
	HX_CSTRING("_animator"),
	HX_CSTRING("_material"),
	HX_CSTRING("_numIndices"),
	HX_CSTRING("_subSetCount"),
	HX_CSTRING("_subSets"),
	HX_CSTRING("_activeSubSet"),
	HX_CSTRING("LIMIT"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegmentSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegmentSet_obj::__mClass,"__mClass");
};

Class SegmentSet_obj::__mClass;

void SegmentSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.entities.SegmentSet"), hx::TCanCast< SegmentSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SegmentSet_obj::__boot()
{
}

} // end namespace away3d
} // end namespace entities
