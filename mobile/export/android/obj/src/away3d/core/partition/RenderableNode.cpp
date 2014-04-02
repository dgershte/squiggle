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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_RenderableNode
#include <away3d/core/partition/RenderableNode.h>
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

Void RenderableNode_obj::__construct(::away3d::core::base::IRenderable renderable)
{
HX_STACK_PUSH("RenderableNode::new","away3d/core/partition/RenderableNode.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(hx::TCast< away3d::entities::Entity >::cast(renderable));
	HX_STACK_LINE(21)
	this->_renderable = renderable;
}
;
	return null();
}

RenderableNode_obj::~RenderableNode_obj() { }

Dynamic RenderableNode_obj::__CreateEmpty() { return  new RenderableNode_obj; }
hx::ObjectPtr< RenderableNode_obj > RenderableNode_obj::__new(::away3d::core::base::IRenderable renderable)
{  hx::ObjectPtr< RenderableNode_obj > result = new RenderableNode_obj();
	result->__construct(renderable);
	return result;}

Dynamic RenderableNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderableNode_obj > result = new RenderableNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RenderableNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("RenderableNode::acceptTraverser","away3d/core/partition/RenderableNode.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(29)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(32)
			traverser->applyRenderable(this->_renderable);
		}
	}
return null();
}



RenderableNode_obj::RenderableNode_obj()
{
}

void RenderableNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableNode);
	HX_MARK_MEMBER_NAME(_renderable,"_renderable");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderableNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_renderable,"_renderable");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RenderableNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { return _renderable; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderableNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { _renderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_renderable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("_renderable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderableNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderableNode_obj::__mClass,"__mClass");
};

Class RenderableNode_obj::__mClass;

void RenderableNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.RenderableNode"), hx::TCanCast< RenderableNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderableNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
