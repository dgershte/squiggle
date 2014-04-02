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
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_RaycastCollector
#include <away3d/core/traverse/RaycastCollector.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace core{
namespace traverse{

Void RaycastCollector_obj::__construct()
{
HX_STACK_PUSH("RaycastCollector::new","away3d/core/traverse/RaycastCollector.hx",26);
{
	HX_STACK_LINE(27)
	this->_rayPosition = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(28)
	this->_rayDirection = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(29)
	super::__construct();
}
;
	return null();
}

RaycastCollector_obj::~RaycastCollector_obj() { }

Dynamic RaycastCollector_obj::__CreateEmpty() { return  new RaycastCollector_obj; }
hx::ObjectPtr< RaycastCollector_obj > RaycastCollector_obj::__new()
{  hx::ObjectPtr< RaycastCollector_obj > result = new RaycastCollector_obj();
	result->__construct();
	return result;}

Dynamic RaycastCollector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RaycastCollector_obj > result = new RaycastCollector_obj();
	result->__construct();
	return result;}

Void RaycastCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
{
		HX_STACK_PUSH("RaycastCollector::applyUnknownLight","away3d/core/traverse/RaycastCollector.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
	}
return null();
}


Void RaycastCollector_obj::applyRenderable( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("RaycastCollector::applyRenderable","away3d/core/traverse/RaycastCollector.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
	}
return null();
}


Void RaycastCollector_obj::applySkyBox( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("RaycastCollector::applySkyBox","away3d/core/traverse/RaycastCollector.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
	}
return null();
}


bool RaycastCollector_obj::enterNode( ::away3d::core::partition::NodeBase node){
	HX_STACK_PUSH("RaycastCollector::enterNode","away3d/core/traverse/RaycastCollector.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_LINE(64)
	return node->isIntersectingRay(this->_rayPosition,this->_rayDirection);
}


::flash::geom::Vector3D RaycastCollector_obj::set_rayDirection( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("RaycastCollector::set_rayDirection","away3d/core/traverse/RaycastCollector.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(54)
	this->_rayDirection = value;
	HX_STACK_LINE(55)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastCollector_obj,set_rayDirection,return )

::flash::geom::Vector3D RaycastCollector_obj::get_rayDirection( ){
	HX_STACK_PUSH("RaycastCollector::get_rayDirection","away3d/core/traverse/RaycastCollector.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->_rayDirection;
}


HX_DEFINE_DYNAMIC_FUNC0(RaycastCollector_obj,get_rayDirection,return )

::flash::geom::Vector3D RaycastCollector_obj::set_rayPosition( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("RaycastCollector::set_rayPosition","away3d/core/traverse/RaycastCollector.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(41)
	this->_rayPosition = value;
	HX_STACK_LINE(42)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastCollector_obj,set_rayPosition,return )

::flash::geom::Vector3D RaycastCollector_obj::get_rayPosition( ){
	HX_STACK_PUSH("RaycastCollector::get_rayPosition","away3d/core/traverse/RaycastCollector.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return this->_rayPosition;
}


HX_DEFINE_DYNAMIC_FUNC0(RaycastCollector_obj,get_rayPosition,return )


RaycastCollector_obj::RaycastCollector_obj()
{
}

void RaycastCollector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RaycastCollector);
	HX_MARK_MEMBER_NAME(_rayDirection,"_rayDirection");
	HX_MARK_MEMBER_NAME(_rayPosition,"_rayPosition");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RaycastCollector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rayDirection,"_rayDirection");
	HX_VISIT_MEMBER_NAME(_rayPosition,"_rayPosition");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RaycastCollector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return enterNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return applySkyBox_dyn(); }
		if (HX_FIELD_EQ(inName,"rayPosition") ) { return get_rayPosition(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rayPosition") ) { return _rayPosition; }
		if (HX_FIELD_EQ(inName,"rayDirection") ) { return get_rayDirection(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rayDirection") ) { return _rayDirection; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return applyRenderable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rayPosition") ) { return set_rayPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rayPosition") ) { return get_rayPosition_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_rayDirection") ) { return set_rayDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rayDirection") ) { return get_rayDirection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return applyUnknownLight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RaycastCollector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"rayPosition") ) { return set_rayPosition(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rayPosition") ) { _rayPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayDirection") ) { return set_rayDirection(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rayDirection") ) { _rayDirection=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RaycastCollector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rayDirection"));
	outFields->push(HX_CSTRING("_rayPosition"));
	outFields->push(HX_CSTRING("rayDirection"));
	outFields->push(HX_CSTRING("rayPosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("applyUnknownLight"),
	HX_CSTRING("applyRenderable"),
	HX_CSTRING("applySkyBox"),
	HX_CSTRING("enterNode"),
	HX_CSTRING("set_rayDirection"),
	HX_CSTRING("get_rayDirection"),
	HX_CSTRING("set_rayPosition"),
	HX_CSTRING("get_rayPosition"),
	HX_CSTRING("_rayDirection"),
	HX_CSTRING("_rayPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RaycastCollector_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RaycastCollector_obj::__mClass,"__mClass");
};

Class RaycastCollector_obj::__mClass;

void RaycastCollector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.traverse.RaycastCollector"), hx::TCanCast< RaycastCollector_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RaycastCollector_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
