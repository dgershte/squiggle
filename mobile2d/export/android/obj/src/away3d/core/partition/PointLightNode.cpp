#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
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
#ifndef INCLUDED_away3d_core_partition_PointLightNode
#include <away3d/core/partition/PointLightNode.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
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

Void PointLightNode_obj::__construct(::away3d::lights::PointLight light)
{
HX_STACK_PUSH("PointLightNode::new","away3d/core/partition/PointLightNode.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct(light);
	HX_STACK_LINE(20)
	this->_light = light;
}
;
	return null();
}

PointLightNode_obj::~PointLightNode_obj() { }

Dynamic PointLightNode_obj::__CreateEmpty() { return  new PointLightNode_obj; }
hx::ObjectPtr< PointLightNode_obj > PointLightNode_obj::__new(::away3d::lights::PointLight light)
{  hx::ObjectPtr< PointLightNode_obj > result = new PointLightNode_obj();
	result->__construct(light);
	return result;}

Dynamic PointLightNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointLightNode_obj > result = new PointLightNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PointLightNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("PointLightNode::acceptTraverser","away3d/core/partition/PointLightNode.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(35)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(37)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(38)
			traverser->applyPointLight(this->_light);
		}
	}
return null();
}


::away3d::lights::PointLight PointLightNode_obj::get_light( ){
	HX_STACK_PUSH("PointLightNode::get_light","away3d/core/partition/PointLightNode.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->_light;
}


HX_DEFINE_DYNAMIC_FUNC0(PointLightNode_obj,get_light,return )


PointLightNode_obj::PointLightNode_obj()
{
}

void PointLightNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointLightNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PointLightNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PointLightNode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic PointLightNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast< ::away3d::lights::PointLight >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointLightNode_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PointLightNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointLightNode_obj::__mClass,"__mClass");
};

Class PointLightNode_obj::__mClass;

void PointLightNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.PointLightNode"), hx::TCanCast< PointLightNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PointLightNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
