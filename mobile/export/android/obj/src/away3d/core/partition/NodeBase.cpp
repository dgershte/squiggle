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
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
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
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
namespace partition{

Void NodeBase_obj::__construct()
{
HX_STACK_PUSH("NodeBase::new","away3d/core/partition/NodeBase.hx",35);
{
	HX_STACK_LINE(36)
	this->_childNodes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(37)
	this->_numEntities = (int)0;
	HX_STACK_LINE(38)
	this->_collectionMark = (int)0;
	HX_STACK_LINE(39)
	this->_numChildNodes = (int)0;
}
;
	return null();
}

NodeBase_obj::~NodeBase_obj() { }

Dynamic NodeBase_obj::__CreateEmpty() { return  new NodeBase_obj; }
hx::ObjectPtr< NodeBase_obj > NodeBase_obj::__new()
{  hx::ObjectPtr< NodeBase_obj > result = new NodeBase_obj();
	result->__construct();
	return result;}

Dynamic NodeBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeBase_obj > result = new NodeBase_obj();
	result->__construct();
	return result;}

Void NodeBase_obj::updateNumEntities( int value){
{
		HX_STACK_PUSH("NodeBase::updateNumEntities","away3d/core/partition/NodeBase.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(182)
		int diff = (value - this->_numEntities);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(183)
		::away3d::core::partition::NodeBase node = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(184)
		do{
			HX_STACK_LINE(184)
			hx::AddEq(node->_numEntities,diff);
		}
while((((node = node->_parent) != null())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,updateNumEntities,(void))

int NodeBase_obj::get_numEntities( ){
	HX_STACK_PUSH("NodeBase::get_numEntities","away3d/core/partition/NodeBase.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return this->_numEntities;
}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_numEntities,return )

::away3d::primitives::WireframePrimitiveBase NodeBase_obj::createDebugBounds( ){
	HX_STACK_PUSH("NodeBase::createDebugBounds","away3d/core/partition/NodeBase.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_LINE(173)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,createDebugBounds,return )

Void NodeBase_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("NodeBase::acceptTraverser","away3d/core/partition/NodeBase.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(162)
		if (((bool((this->_numEntities == (int)0)) && bool((this->_debugPrimitive == null()))))){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(165)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(166)
			while(((i < this->_numChildNodes))){
				HX_STACK_LINE(166)
				this->_childNodes->__get((i)++).StaticCast< ::away3d::core::partition::NodeBase >()->acceptTraverser(traverser);
			}
			HX_STACK_LINE(167)
			if (((this->_debugPrimitive != null()))){
				HX_STACK_LINE(167)
				traverser->applyRenderable(this->_debugPrimitive);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,acceptTraverser,(void))

::away3d::core::partition::NodeBase NodeBase_obj::findPartitionForEntity( ::away3d::entities::Entity entity){
	HX_STACK_PUSH("NodeBase::findPartitionForEntity","away3d/core/partition/NodeBase.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entity,"entity");
	HX_STACK_LINE(144)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,findPartitionForEntity,return )

bool NodeBase_obj::isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection){
	HX_STACK_PUSH("NodeBase::isIntersectingRay","away3d/core/partition/NodeBase.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rayPosition,"rayPosition");
	HX_STACK_ARG(rayDirection,"rayDirection");
	HX_STACK_LINE(135)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(NodeBase_obj,isIntersectingRay,return )

bool NodeBase_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("NodeBase::isInFrustum","away3d/core/partition/NodeBase.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(122)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(NodeBase_obj,isInFrustum,return )

Void NodeBase_obj::removeNode( ::away3d::core::partition::NodeBase node){
{
		HX_STACK_PUSH("NodeBase::removeNode","away3d/core/partition/NodeBase.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(103)
		int index = ::flash::_Vector::Vector_Impl__obj::indexOf(this->_childNodes,node,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(104)
		this->_childNodes[index] = this->_childNodes->__get(--(this->_numChildNodes)).StaticCast< ::away3d::core::partition::NodeBase >();
		HX_STACK_LINE(105)
		this->_childNodes->__Field(HX_CSTRING("pop"),true)();
		HX_STACK_LINE(107)
		int numEntities = node->_numEntities;		HX_STACK_VAR(numEntities,"numEntities");
		HX_STACK_LINE(108)
		node = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(109)
		do{
			HX_STACK_LINE(109)
			hx::SubEq(node->_numEntities,numEntities);
		}
while((((node = node->_parent) != null())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,removeNode,(void))

Void NodeBase_obj::addNode( ::away3d::core::partition::NodeBase node){
{
		HX_STACK_PUSH("NodeBase::addNode","away3d/core/partition/NodeBase.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(80)
		node->_parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(81)
		hx::AddEq(this->_numEntities,node->_numEntities);
		HX_STACK_LINE(82)
		this->_childNodes[(this->_numChildNodes)++] = node;
		HX_STACK_LINE(83)
		node->set_showDebugBounds((this->_debugPrimitive != null()));
		HX_STACK_LINE(85)
		int numEntities = node->_numEntities;		HX_STACK_VAR(numEntities,"numEntities");
		HX_STACK_LINE(86)
		node = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(87)
		do{
			HX_STACK_LINE(87)
			hx::AddEq(node->_numEntities,numEntities);
		}
while((((node = node->_parent) != null())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,addNode,(void))

::away3d::core::partition::NodeBase NodeBase_obj::get_parent( ){
	HX_STACK_PUSH("NodeBase::get_parent","away3d/core/partition/NodeBase.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_parent,return )

bool NodeBase_obj::set_showDebugBounds( bool value){
	HX_STACK_PUSH("NodeBase::set_showDebugBounds","away3d/core/partition/NodeBase.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(47)
	if (((hx::TCast< Bool >::cast((this->_debugPrimitive != null())) == value))){
		HX_STACK_LINE(47)
		return value;
	}
	HX_STACK_LINE(48)
	if ((value)){
		HX_STACK_LINE(48)
		this->_debugPrimitive = this->createDebugBounds();
	}
	else{
		HX_STACK_LINE(50)
		this->_debugPrimitive->dispose();
		HX_STACK_LINE(51)
		this->_debugPrimitive = null();
	}
	HX_STACK_LINE(54)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(55)
	while(((i < this->_numChildNodes))){
		HX_STACK_LINE(56)
		this->_childNodes->__get(i).StaticCast< ::away3d::core::partition::NodeBase >()->set_showDebugBounds(value);
		HX_STACK_LINE(57)
		++(i);
	}
	HX_STACK_LINE(59)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,set_showDebugBounds,return )

bool NodeBase_obj::get_showDebugBounds( ){
	HX_STACK_PUSH("NodeBase::get_showDebugBounds","away3d/core/partition/NodeBase.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return (this->_debugPrimitive != null());
}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_showDebugBounds,return )


NodeBase_obj::NodeBase_obj()
{
}

void NodeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeBase);
	HX_MARK_MEMBER_NAME(_collectionMark,"_collectionMark");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_debugPrimitive,"_debugPrimitive");
	HX_MARK_MEMBER_NAME(_numChildNodes,"_numChildNodes");
	HX_MARK_MEMBER_NAME(_childNodes,"_childNodes");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void NodeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_collectionMark,"_collectionMark");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_debugPrimitive,"_debugPrimitive");
	HX_VISIT_MEMBER_NAME(_numChildNodes,"_numChildNodes");
	HX_VISIT_MEMBER_NAME(_childNodes,"_childNodes");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic NodeBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return get_parent(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addNode") ) { return addNode_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeNode") ) { return removeNode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		if (HX_FIELD_EQ(inName,"_childNodes") ) { return _childNodes; }
		if (HX_FIELD_EQ(inName,"numEntities") ) { return get_numEntities(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return _numEntities; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_numChildNodes") ) { return _numChildNodes; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numEntities") ) { return get_numEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { return _collectionMark; }
		if (HX_FIELD_EQ(inName,"_debugPrimitive") ) { return _debugPrimitive; }
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { return get_showDebugBounds(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateNumEntities") ) { return updateNumEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"createDebugBounds") ) { return createDebugBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return isIntersectingRay_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_showDebugBounds") ) { return set_showDebugBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showDebugBounds") ) { return get_showDebugBounds_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"findPartitionForEntity") ) { return findPartitionForEntity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NodeBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::away3d::core::partition::NodeBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_childNodes") ) { _childNodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_numChildNodes") ) { _numChildNodes=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { _collectionMark=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugPrimitive") ) { _debugPrimitive=inValue.Cast< ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { return set_showDebugBounds(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NodeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_collectionMark"));
	outFields->push(HX_CSTRING("_numEntities"));
	outFields->push(HX_CSTRING("_debugPrimitive"));
	outFields->push(HX_CSTRING("_numChildNodes"));
	outFields->push(HX_CSTRING("_childNodes"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("numEntities"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("showDebugBounds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateNumEntities"),
	HX_CSTRING("get_numEntities"),
	HX_CSTRING("createDebugBounds"),
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("findPartitionForEntity"),
	HX_CSTRING("isIntersectingRay"),
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("removeNode"),
	HX_CSTRING("addNode"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_showDebugBounds"),
	HX_CSTRING("get_showDebugBounds"),
	HX_CSTRING("_collectionMark"),
	HX_CSTRING("_numEntities"),
	HX_CSTRING("_debugPrimitive"),
	HX_CSTRING("_numChildNodes"),
	HX_CSTRING("_childNodes"),
	HX_CSTRING("_parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeBase_obj::__mClass,"__mClass");
};

Class NodeBase_obj::__mClass;

void NodeBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.NodeBase"), hx::TCanCast< NodeBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NodeBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
