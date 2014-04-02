#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_CameraNode
#include <away3d/core/partition/CameraNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
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

Void CameraNode_obj::__construct(::away3d::cameras::Camera3D camera)
{
HX_STACK_PUSH("CameraNode::new","away3d/core/partition/CameraNode.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct(camera);
}
;
	return null();
}

CameraNode_obj::~CameraNode_obj() { }

Dynamic CameraNode_obj::__CreateEmpty() { return  new CameraNode_obj; }
hx::ObjectPtr< CameraNode_obj > CameraNode_obj::__new(::away3d::cameras::Camera3D camera)
{  hx::ObjectPtr< CameraNode_obj > result = new CameraNode_obj();
	result->__construct(camera);
	return result;}

Dynamic CameraNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraNode_obj > result = new CameraNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CameraNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("CameraNode::acceptTraverser","away3d/core/partition/CameraNode.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
	}
return null();
}



CameraNode_obj::CameraNode_obj()
{
}

void CameraNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraNode);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraNode_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CameraNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraNode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("acceptTraverser"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraNode_obj::__mClass,"__mClass");
};

Class CameraNode_obj::__mClass;

void CameraNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.CameraNode"), hx::TCanCast< CameraNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CameraNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
