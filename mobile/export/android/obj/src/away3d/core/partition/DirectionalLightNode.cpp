#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_DirectionalLightNode
#include <away3d/core/partition/DirectionalLightNode.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
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

Void DirectionalLightNode_obj::__construct(::away3d::lights::DirectionalLight light)
{
HX_STACK_PUSH("DirectionalLightNode::new","away3d/core/partition/DirectionalLightNode.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct(light);
	HX_STACK_LINE(20)
	this->_light = light;
}
;
	return null();
}

DirectionalLightNode_obj::~DirectionalLightNode_obj() { }

Dynamic DirectionalLightNode_obj::__CreateEmpty() { return  new DirectionalLightNode_obj; }
hx::ObjectPtr< DirectionalLightNode_obj > DirectionalLightNode_obj::__new(::away3d::lights::DirectionalLight light)
{  hx::ObjectPtr< DirectionalLightNode_obj > result = new DirectionalLightNode_obj();
	result->__construct(light);
	return result;}

Dynamic DirectionalLightNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectionalLightNode_obj > result = new DirectionalLightNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DirectionalLightNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("DirectionalLightNode::acceptTraverser","away3d/core/partition/DirectionalLightNode.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(35)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(37)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(38)
			traverser->applyDirectionalLight(this->_light);
		}
	}
return null();
}


::away3d::lights::DirectionalLight DirectionalLightNode_obj::get_light( ){
	HX_STACK_PUSH("DirectionalLightNode::get_light","away3d/core/partition/DirectionalLightNode.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->_light;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLightNode_obj,get_light,return )


DirectionalLightNode_obj::DirectionalLightNode_obj()
{
}

void DirectionalLightNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalLightNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalLightNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DirectionalLightNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { return get_light(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { return _light; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_light") ) { return get_light_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectionalLightNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast< ::away3d::lights::DirectionalLight >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalLightNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_light"));
	outFields->push(HX_CSTRING("light"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("get_light"),
	HX_CSTRING("_light"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectionalLightNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectionalLightNode_obj::__mClass,"__mClass");
};

Class DirectionalLightNode_obj::__mClass;

void DirectionalLightNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.DirectionalLightNode"), hx::TCanCast< DirectionalLightNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DirectionalLightNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
