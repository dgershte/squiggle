#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace containers{

Void Scene3D_obj::__construct()
{
HX_STACK_PUSH("Scene3D::new","away3d/containers/Scene3D.hx",30);
{
	HX_STACK_LINE(31)
	this->_partitions = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(32)
	this->_sceneGraphRoot = ::away3d::containers::ObjectContainer3D_obj::__new();
	HX_STACK_LINE(33)
	this->_sceneGraphRoot->set_scene(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(34)
	this->_sceneGraphRoot->_isRoot = true;
	HX_STACK_LINE(35)
	this->_sceneGraphRoot->set_partition(::away3d::core::partition::Partition3D_obj::__new(::away3d::core::partition::NodeBase_obj::__new()));
	HX_STACK_LINE(36)
	super::__construct(null());
}
;
	return null();
}

Scene3D_obj::~Scene3D_obj() { }

Dynamic Scene3D_obj::__CreateEmpty() { return  new Scene3D_obj; }
hx::ObjectPtr< Scene3D_obj > Scene3D_obj::__new()
{  hx::ObjectPtr< Scene3D_obj > result = new Scene3D_obj();
	result->__construct();
	return result;}

Dynamic Scene3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene3D_obj > result = new Scene3D_obj();
	result->__construct();
	return result;}

Void Scene3D_obj::addPartitionUnique( ::away3d::core::partition::Partition3D partition){
{
		HX_STACK_PUSH("Scene3D::addPartitionUnique","away3d/containers/Scene3D.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(partition,"partition");
		HX_STACK_LINE(171)
		if (((::flash::_Vector::Vector_Impl__obj::indexOf(this->_partitions,partition,null()) == (int)-1))){
			HX_STACK_LINE(172)
			this->_partitions->__Field(HX_CSTRING("push"),true)(partition);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,addPartitionUnique,(void))

Void Scene3D_obj::unregisterPartition( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Scene3D::unregisterPartition","away3d/containers/Scene3D.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(161)
		entity->get_implicitPartition()->removeEntity(entity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,unregisterPartition,(void))

Void Scene3D_obj::registerPartition( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Scene3D::registerPartition","away3d/containers/Scene3D.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(153)
		this->addPartitionUnique(entity->get_implicitPartition());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,registerPartition,(void))

Void Scene3D_obj::invalidateEntityBounds( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Scene3D::invalidateEntityBounds","away3d/containers/Scene3D.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(145)
		entity->get_implicitPartition()->markForUpdate(entity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,invalidateEntityBounds,(void))

Void Scene3D_obj::unregisterEntity( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Scene3D::unregisterEntity","away3d/containers/Scene3D.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(137)
		entity->get_implicitPartition()->removeEntity(entity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,unregisterEntity,(void))

Void Scene3D_obj::registerEntity( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Scene3D::registerEntity","away3d/containers/Scene3D.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(127)
		::away3d::core::partition::Partition3D partition = entity->get_implicitPartition();		HX_STACK_VAR(partition,"partition");
		HX_STACK_LINE(128)
		this->addPartitionUnique(partition);
		HX_STACK_LINE(129)
		partition->markForUpdate(entity);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,registerEntity,(void))

int Scene3D_obj::get_numChildren( ){
	HX_STACK_PUSH("Scene3D::get_numChildren","away3d/containers/Scene3D.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->_sceneGraphRoot->get_numChildren();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene3D_obj,get_numChildren,return )

::away3d::containers::ObjectContainer3D Scene3D_obj::getChildAt( int index){
	HX_STACK_PUSH("Scene3D::getChildAt","away3d/containers/Scene3D.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(109)
	return this->_sceneGraphRoot->getChildAt(index);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,getChildAt,return )

Void Scene3D_obj::removeChildAt( int index){
{
		HX_STACK_PUSH("Scene3D::removeChildAt","away3d/containers/Scene3D.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(99)
		this->_sceneGraphRoot->removeChildAt(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,removeChildAt,(void))

Void Scene3D_obj::removeChild( ::away3d::containers::ObjectContainer3D child){
{
		HX_STACK_PUSH("Scene3D::removeChild","away3d/containers/Scene3D.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(90)
		this->_sceneGraphRoot->removeChild(child);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,removeChild,(void))

::away3d::containers::ObjectContainer3D Scene3D_obj::addChild( ::away3d::containers::ObjectContainer3D child){
	HX_STACK_PUSH("Scene3D::addChild","away3d/containers/Scene3D.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(81)
	return this->_sceneGraphRoot->addChild(child);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,addChild,return )

bool Scene3D_obj::contains( ::away3d::containers::ObjectContainer3D child){
	HX_STACK_PUSH("Scene3D::contains","away3d/containers/Scene3D.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(71)
	return this->_sceneGraphRoot->contains(child);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,contains,return )

::away3d::core::partition::Partition3D Scene3D_obj::set_partition( ::away3d::core::partition::Partition3D value){
	HX_STACK_PUSH("Scene3D::set_partition","away3d/containers/Scene3D.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(66)
	this->_sceneGraphRoot->set_partition(value);
	HX_STACK_LINE(67)
	this->dispatchEvent(::away3d::events::Scene3DEvent_obj::__new(::away3d::events::Scene3DEvent_obj::PARTITION_CHANGED,this->_sceneGraphRoot));
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,set_partition,return )

::away3d::core::partition::Partition3D Scene3D_obj::get_partition( ){
	HX_STACK_PUSH("Scene3D::get_partition","away3d/containers/Scene3D.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return this->_sceneGraphRoot->get_partition();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene3D_obj,get_partition,return )

Void Scene3D_obj::traversePartitions( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("Scene3D::traversePartitions","away3d/containers/Scene3D.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(49)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(50)
		int len = this->_partitions->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(51)
		traverser->scene = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(53)
		while(((i < len))){
			HX_STACK_LINE(53)
			this->_partitions->__get((i)++).StaticCast< ::away3d::core::partition::Partition3D >()->traverse(traverser);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,traversePartitions,(void))


Scene3D_obj::Scene3D_obj()
{
}

void Scene3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene3D);
	HX_MARK_MEMBER_NAME(_partitions,"_partitions");
	HX_MARK_MEMBER_NAME(_sceneGraphRoot,"_sceneGraphRoot");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_partitions,"_partitions");
	HX_VISIT_MEMBER_NAME(_sceneGraphRoot,"_sceneGraphRoot");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Scene3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { return get_partition(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"_partitions") ) { return _partitions; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return get_numChildren(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_partition") ) { return set_partition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_partition") ) { return get_partition_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerEntity") ) { return registerEntity_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"_sceneGraphRoot") ) { return _sceneGraphRoot; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterEntity") ) { return unregisterEntity_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerPartition") ) { return registerPartition_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addPartitionUnique") ) { return addPartitionUnique_dyn(); }
		if (HX_FIELD_EQ(inName,"traversePartitions") ) { return traversePartitions_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unregisterPartition") ) { return unregisterPartition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"invalidateEntityBounds") ) { return invalidateEntityBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { return set_partition(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_partitions") ) { _partitions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneGraphRoot") ) { _sceneGraphRoot=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_partitions"));
	outFields->push(HX_CSTRING("_sceneGraphRoot"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("partition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addPartitionUnique"),
	HX_CSTRING("unregisterPartition"),
	HX_CSTRING("registerPartition"),
	HX_CSTRING("invalidateEntityBounds"),
	HX_CSTRING("unregisterEntity"),
	HX_CSTRING("registerEntity"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("addChild"),
	HX_CSTRING("contains"),
	HX_CSTRING("set_partition"),
	HX_CSTRING("get_partition"),
	HX_CSTRING("traversePartitions"),
	HX_CSTRING("_partitions"),
	HX_CSTRING("_sceneGraphRoot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene3D_obj::__mClass,"__mClass");
};

Class Scene3D_obj::__mClass;

void Scene3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.containers.Scene3D"), hx::TCanCast< Scene3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Scene3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace containers
