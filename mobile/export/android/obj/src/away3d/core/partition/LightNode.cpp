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
#ifndef INCLUDED_away3d_core_partition_LightNode
#include <away3d/core/partition/LightNode.h>
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

Void LightNode_obj::__construct(::away3d::lights::LightBase light)
{
HX_STACK_PUSH("LightNode::new","away3d/core/partition/LightNode.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct(light);
	HX_STACK_LINE(20)
	this->_light = light;
}
;
	return null();
}

LightNode_obj::~LightNode_obj() { }

Dynamic LightNode_obj::__CreateEmpty() { return  new LightNode_obj; }
hx::ObjectPtr< LightNode_obj > LightNode_obj::__new(::away3d::lights::LightBase light)
{  hx::ObjectPtr< LightNode_obj > result = new LightNode_obj();
	result->__construct(light);
	return result;}

Dynamic LightNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightNode_obj > result = new LightNode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LightNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("LightNode::acceptTraverser","away3d/core/partition/LightNode.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(35)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(37)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(38)
			traverser->applyUnknownLight(this->_light);
		}
	}
return null();
}


::away3d::lights::LightBase LightNode_obj::get_light( ){
	HX_STACK_PUSH("LightNode::get_light","away3d/core/partition/LightNode.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->_light;
}


HX_DEFINE_DYNAMIC_FUNC0(LightNode_obj,get_light,return )


LightNode_obj::LightNode_obj()
{
}

void LightNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LightNode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic LightNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast< ::away3d::lights::LightBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightNode_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(LightNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightNode_obj::__mClass,"__mClass");
};

Class LightNode_obj::__mClass;

void LightNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.LightNode"), hx::TCanCast< LightNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LightNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
