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
#ifndef INCLUDED_away3d_core_partition_NullNode
#include <away3d/core/partition/NullNode.h>
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

Void Partition3D_obj::__construct(::away3d::core::partition::NodeBase rootNode)
{
HX_STACK_PUSH("Partition3D::new","away3d/core/partition/Partition3D.hx",23);
{
	HX_STACK_LINE(24)
	this->_rootNode = rootNode;
	HX_STACK_LINE(25)
	if (((rootNode == null()))){
		HX_STACK_LINE(25)
		this->_rootNode = ::away3d::core::partition::NullNode_obj::__new();
	}
}
;
	return null();
}

Partition3D_obj::~Partition3D_obj() { }

Dynamic Partition3D_obj::__CreateEmpty() { return  new Partition3D_obj; }
hx::ObjectPtr< Partition3D_obj > Partition3D_obj::__new(::away3d::core::partition::NodeBase rootNode)
{  hx::ObjectPtr< Partition3D_obj > result = new Partition3D_obj();
	result->__construct(rootNode);
	return result;}

Dynamic Partition3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Partition3D_obj > result = new Partition3D_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Partition3D_obj::updateEntities( ){
{
		HX_STACK_PUSH("Partition3D::updateEntities","away3d/core/partition/Partition3D.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(99)
		::away3d::core::partition::EntityNode node = this->_updateQueue;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(100)
		::away3d::core::partition::NodeBase targetNode;		HX_STACK_VAR(targetNode,"targetNode");
		HX_STACK_LINE(101)
		::away3d::core::partition::EntityNode t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(103)
		this->_updateQueue = null();
		HX_STACK_LINE(104)
		this->_updatesMade = false;
		HX_STACK_LINE(105)
		do{
			HX_STACK_LINE(106)
			targetNode = this->_rootNode->findPartitionForEntity(node->get_entity());
			HX_STACK_LINE(109)
			if (((node->get_parent() != targetNode))){
				HX_STACK_LINE(110)
				if (((node != null()))){
					HX_STACK_LINE(110)
					node->removeFromParent();
				}
				HX_STACK_LINE(111)
				targetNode->addNode(node);
			}
			HX_STACK_LINE(114)
			t = node->_updateQueueNext;
			HX_STACK_LINE(115)
			node->_updateQueueNext = null();
			HX_STACK_LINE(117)
			node->get_entity()->internalUpdate();
		}
while((((node = t) != null())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Partition3D_obj,updateEntities,(void))

Void Partition3D_obj::removeEntity( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Partition3D::removeEntity","away3d/core/partition/Partition3D.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(78)
		::away3d::core::partition::EntityNode node = entity->getEntityPartitionNode();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(79)
		::away3d::core::partition::EntityNode t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(80)
		node->removeFromParent();
		HX_STACK_LINE(82)
		if (((node == this->_updateQueue))){
			HX_STACK_LINE(82)
			this->_updateQueue = node->_updateQueueNext;
		}
		else{
			HX_STACK_LINE(84)
			t = this->_updateQueue;
			HX_STACK_LINE(85)
			while(((bool((t != null())) && bool((t->_updateQueueNext != node))))){
				HX_STACK_LINE(85)
				t = t->_updateQueueNext;
			}
			HX_STACK_LINE(86)
			if (((t != null()))){
				HX_STACK_LINE(86)
				t->_updateQueueNext = node->_updateQueueNext;
			}
		}
		HX_STACK_LINE(89)
		node->_updateQueueNext = null();
		HX_STACK_LINE(91)
		if (((this->_updateQueue == null()))){
			HX_STACK_LINE(91)
			this->_updatesMade = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,removeEntity,(void))

Void Partition3D_obj::markForUpdate( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("Partition3D::markForUpdate","away3d/core/partition/Partition3D.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(58)
		::away3d::core::partition::EntityNode node = entity->getEntityPartitionNode();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(60)
		::away3d::core::partition::EntityNode t = this->_updateQueue;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(62)
		while(((t != null()))){
			HX_STACK_LINE(63)
			if (((node == t))){
				HX_STACK_LINE(63)
				return null();
			}
			HX_STACK_LINE(64)
			t = t->_updateQueueNext;
		}
		HX_STACK_LINE(67)
		node->_updateQueueNext = this->_updateQueue;
		HX_STACK_LINE(68)
		this->_updateQueue = node;
		HX_STACK_LINE(69)
		this->_updatesMade = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,markForUpdate,(void))

Void Partition3D_obj::traverse( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("Partition3D::traverse","away3d/core/partition/Partition3D.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(45)
		if ((this->_updatesMade)){
			HX_STACK_LINE(45)
			this->updateEntities();
		}
		HX_STACK_LINE(46)
		++(::away3d::core::traverse::PartitionTraverser_obj::_collectionMark);
		HX_STACK_LINE(47)
		this->_rootNode->acceptTraverser(traverser);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,traverse,(void))

bool Partition3D_obj::set_showDebugBounds( bool value){
	HX_STACK_PUSH("Partition3D::set_showDebugBounds","away3d/core/partition/Partition3D.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(33)
	this->_rootNode->set_showDebugBounds(value);
	HX_STACK_LINE(34)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Partition3D_obj,set_showDebugBounds,return )

bool Partition3D_obj::get_showDebugBounds( ){
	HX_STACK_PUSH("Partition3D::get_showDebugBounds","away3d/core/partition/Partition3D.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return this->_rootNode->get_showDebugBounds();
}


HX_DEFINE_DYNAMIC_FUNC0(Partition3D_obj,get_showDebugBounds,return )


Partition3D_obj::Partition3D_obj()
{
}

void Partition3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Partition3D);
	HX_MARK_MEMBER_NAME(_updateQueue,"_updateQueue");
	HX_MARK_MEMBER_NAME(_updatesMade,"_updatesMade");
	HX_MARK_MEMBER_NAME(_rootNode,"_rootNode");
	HX_MARK_END_CLASS();
}

void Partition3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_updateQueue,"_updateQueue");
	HX_VISIT_MEMBER_NAME(_updatesMade,"_updatesMade");
	HX_VISIT_MEMBER_NAME(_rootNode,"_rootNode");
}

Dynamic Partition3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"traverse") ) { return traverse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rootNode") ) { return _rootNode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeEntity") ) { return removeEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateQueue") ) { return _updateQueue; }
		if (HX_FIELD_EQ(inName,"_updatesMade") ) { return _updatesMade; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"markForUpdate") ) { return markForUpdate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateEntities") ) { return updateEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { return get_showDebugBounds(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_showDebugBounds") ) { return set_showDebugBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showDebugBounds") ) { return get_showDebugBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Partition3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_rootNode") ) { _rootNode=inValue.Cast< ::away3d::core::partition::NodeBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateQueue") ) { _updateQueue=inValue.Cast< ::away3d::core::partition::EntityNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updatesMade") ) { _updatesMade=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { return set_showDebugBounds(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Partition3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_updateQueue"));
	outFields->push(HX_CSTRING("_updatesMade"));
	outFields->push(HX_CSTRING("_rootNode"));
	outFields->push(HX_CSTRING("showDebugBounds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateEntities"),
	HX_CSTRING("removeEntity"),
	HX_CSTRING("markForUpdate"),
	HX_CSTRING("traverse"),
	HX_CSTRING("set_showDebugBounds"),
	HX_CSTRING("get_showDebugBounds"),
	HX_CSTRING("_updateQueue"),
	HX_CSTRING("_updatesMade"),
	HX_CSTRING("_rootNode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Partition3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Partition3D_obj::__mClass,"__mClass");
};

Class Partition3D_obj::__mClass;

void Partition3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.Partition3D"), hx::TCanCast< Partition3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Partition3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
