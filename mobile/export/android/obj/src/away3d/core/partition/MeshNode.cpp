#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_MeshNode
#include <away3d/core/partition/MeshNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace core{
namespace partition{

Void MeshNode_obj::__construct(::away3d::entities::Mesh mesh)
{
HX_STACK_PUSH("MeshNode::new","away3d/core/partition/MeshNode.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct(mesh);
	HX_STACK_LINE(22)
	this->_mesh = mesh;
}
;
	return null();
}

MeshNode_obj::~MeshNode_obj() { }

Dynamic MeshNode_obj::__CreateEmpty() { return  new MeshNode_obj; }
hx::ObjectPtr< MeshNode_obj > MeshNode_obj::__new(::away3d::entities::Mesh mesh)
{  hx::ObjectPtr< MeshNode_obj > result = new MeshNode_obj();
	result->__construct(mesh);
	return result;}

Dynamic MeshNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MeshNode_obj > result = new MeshNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MeshNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("MeshNode::acceptTraverser","away3d/core/partition/MeshNode.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(38)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(41)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(42)
			Array< ::Dynamic > subs = this->_mesh->get_subMeshes();		HX_STACK_VAR(subs,"subs");
			HX_STACK_LINE(43)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(44)
			int len = subs->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(46)
			while(((i < len))){
				HX_STACK_LINE(46)
				traverser->applyRenderable(subs->__get((i)++).StaticCast< ::away3d::core::base::SubMesh >());
			}
		}
	}
return null();
}


::away3d::entities::Mesh MeshNode_obj::get_mesh( ){
	HX_STACK_PUSH("MeshNode::get_mesh","away3d/core/partition/MeshNode.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return this->_mesh;
}


HX_DEFINE_DYNAMIC_FUNC0(MeshNode_obj,get_mesh,return )


MeshNode_obj::MeshNode_obj()
{
}

void MeshNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshNode);
	HX_MARK_MEMBER_NAME(_mesh,"_mesh");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mesh,"_mesh");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MeshNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mesh") ) { return get_mesh(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { return _mesh; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mesh") ) { return get_mesh_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MeshNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { _mesh=inValue.Cast< ::away3d::entities::Mesh >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_mesh"));
	outFields->push(HX_CSTRING("mesh"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("get_mesh"),
	HX_CSTRING("_mesh"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshNode_obj::__mClass,"__mClass");
};

Class MeshNode_obj::__mClass;

void MeshNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.MeshNode"), hx::TCanCast< MeshNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MeshNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
