#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#include <away3d/core/pick/RaycastPicker.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace pick{

Void RaycastPicker_obj::__construct(bool findClosestCollision)
{
HX_STACK_PUSH("RaycastPicker::new","away3d/core/pick/RaycastPicker.hx",50);
{
	HX_STACK_LINE(51)
	this->_raycastCollector = ::away3d::core::traverse::RaycastCollector_obj::__new();
	HX_STACK_LINE(52)
	this->_ignoredEntities = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(53)
	this->_onlyMouseEnabled = true;
	HX_STACK_LINE(54)
	this->_findClosestCollision = findClosestCollision;
	HX_STACK_LINE(55)
	this->_entities = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

RaycastPicker_obj::~RaycastPicker_obj() { }

Dynamic RaycastPicker_obj::__CreateEmpty() { return  new RaycastPicker_obj; }
hx::ObjectPtr< RaycastPicker_obj > RaycastPicker_obj::__new(bool findClosestCollision)
{  hx::ObjectPtr< RaycastPicker_obj > result = new RaycastPicker_obj();
	result->__construct(findClosestCollision);
	return result;}

Dynamic RaycastPicker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RaycastPicker_obj > result = new RaycastPicker_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *RaycastPicker_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::pick::IPicker_obj)) return operator ::away3d::core::pick::IPicker_obj *();
	return super::__ToInterface(inType);
}

Void RaycastPicker_obj::dispose( ){
{
		HX_STACK_PUSH("RaycastPicker::dispose","away3d/core/pick/RaycastPicker.hx",206);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,dispose,(void))

Void RaycastPicker_obj::updateLocalPosition( ::away3d::core::pick::PickingCollisionVO pickingCollisionVO){
{
		HX_STACK_PUSH("RaycastPicker::updateLocalPosition","away3d/core/pick/RaycastPicker.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pickingCollisionVO,"pickingCollisionVO");
		HX_STACK_LINE(196)
		if (((pickingCollisionVO->localPosition == null()))){
			HX_STACK_LINE(196)
			pickingCollisionVO->localPosition = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(197)
		::flash::geom::Vector3D collisionPos = pickingCollisionVO->localPosition;		HX_STACK_VAR(collisionPos,"collisionPos");
		HX_STACK_LINE(198)
		::flash::geom::Vector3D rayDir = pickingCollisionVO->localRayDirection;		HX_STACK_VAR(rayDir,"rayDir");
		HX_STACK_LINE(199)
		::flash::geom::Vector3D rayPos = pickingCollisionVO->localRayPosition;		HX_STACK_VAR(rayPos,"rayPos");
		HX_STACK_LINE(200)
		Float t = pickingCollisionVO->rayEntryDistance;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(201)
		collisionPos->x = (rayPos->x + (t * rayDir->x));
		HX_STACK_LINE(202)
		collisionPos->y = (rayPos->y + (t * rayDir->y));
		HX_STACK_LINE(203)
		collisionPos->z = (rayPos->z + (t * rayDir->z));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,updateLocalPosition,(void))

::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getPickingCollisionVO( ){
	HX_STACK_PUSH("RaycastPicker::getPickingCollisionVO","away3d/core/pick/RaycastPicker.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_LINE(150)
	this->_numEntities;
	HX_STACK_LINE(153)
	::flash::_Vector::Vector_Impl__obj::sort(this->_entities,this->sortOnNearT_dyn());
	HX_STACK_LINE(158)
	Float shortestCollisionDistance = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(shortestCollisionDistance,"shortestCollisionDistance");
	HX_STACK_LINE(159)
	::away3d::core::pick::PickingCollisionVO bestCollisionVO = null();		HX_STACK_VAR(bestCollisionVO,"bestCollisionVO");
	HX_STACK_LINE(160)
	::away3d::core::pick::PickingCollisionVO pickingCollisionVO;		HX_STACK_VAR(pickingCollisionVO,"pickingCollisionVO");
	HX_STACK_LINE(161)
	::away3d::entities::Entity entity;		HX_STACK_VAR(entity,"entity");
	HX_STACK_LINE(162)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(163)
	i = (int)0;
	HX_STACK_LINE(164)
	while(((i < this->_numEntities))){
		HX_STACK_LINE(165)
		entity = this->_entities->__get(i).StaticCast< ::away3d::entities::Entity >();
		HX_STACK_LINE(166)
		pickingCollisionVO = entity->_pickingCollisionVO;
		HX_STACK_LINE(167)
		if (((entity->get_pickingCollider() != null()))){
			HX_STACK_LINE(167)
			if (((bool(((bool((bestCollisionVO == null())) || bool((pickingCollisionVO->rayEntryDistance < bestCollisionVO->rayEntryDistance))))) && bool(entity->collidesBefore(shortestCollisionDistance,this->_findClosestCollision))))){
				HX_STACK_LINE(170)
				shortestCollisionDistance = pickingCollisionVO->rayEntryDistance;
				HX_STACK_LINE(171)
				bestCollisionVO = pickingCollisionVO;
				HX_STACK_LINE(172)
				if ((!(this->_findClosestCollision))){
					HX_STACK_LINE(173)
					this->updateLocalPosition(pickingCollisionVO);
					HX_STACK_LINE(174)
					return pickingCollisionVO;
				}
			}
		}
		else{
			HX_STACK_LINE(179)
			if (((bool((bestCollisionVO == null())) || bool((pickingCollisionVO->rayEntryDistance < bestCollisionVO->rayEntryDistance))))){
				HX_STACK_LINE(179)
				if ((!(pickingCollisionVO->rayOriginIsInsideBounds))){
					HX_STACK_LINE(186)
					this->updateLocalPosition(pickingCollisionVO);
					HX_STACK_LINE(187)
					return pickingCollisionVO;
				}
			}
		}
		HX_STACK_LINE(190)
		++(i);
	}
	HX_STACK_LINE(192)
	return bestCollisionVO;
}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,getPickingCollisionVO,return )

int RaycastPicker_obj::sortOnNearT( ::away3d::entities::Entity entity1,::away3d::entities::Entity entity2){
	HX_STACK_PUSH("RaycastPicker::sortOnNearT","away3d/core/pick/RaycastPicker.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entity1,"entity1");
	HX_STACK_ARG(entity2,"entity2");
	HX_STACK_LINE(144)
	return (  (((entity1->get_pickingCollisionVO()->rayEntryDistance > entity2->get_pickingCollisionVO()->rayEntryDistance))) ? int((int)1) : int((int)-1) );
}


HX_DEFINE_DYNAMIC_FUNC2(RaycastPicker_obj,sortOnNearT,return )

bool RaycastPicker_obj::isIgnored( ::away3d::entities::Entity entity){
	HX_STACK_PUSH("RaycastPicker::isIgnored","away3d/core/pick/RaycastPicker.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entity,"entity");
	HX_STACK_LINE(135)
	if (((bool(this->_onlyMouseEnabled) && bool(((bool(!(entity->_ancestorsAllowMouseEnabled)) || bool(!(entity->get_mouseEnabled())))))))){
		HX_STACK_LINE(135)
		return true;
	}
	HX_STACK_LINE(136)
	::away3d::entities::Entity ignoredEntity;		HX_STACK_VAR(ignoredEntity,"ignoredEntity");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->_ignoredEntities;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(137)
			Dynamic ignoredEntity1 = _g1->__GetItem(_g);		HX_STACK_VAR(ignoredEntity1,"ignoredEntity1");
			HX_STACK_LINE(137)
			++(_g);
			HX_STACK_LINE(138)
			if (((ignoredEntity1 == entity))){
				HX_STACK_LINE(138)
				return true;
			}
		}
	}
	HX_STACK_LINE(141)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,isIgnored,return )

Void RaycastPicker_obj::setIgnoreList( Dynamic entities){
{
		HX_STACK_PUSH("RaycastPicker::setIgnoreList","away3d/core/pick/RaycastPicker.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entities,"entities");
		HX_STACK_LINE(130)
		this->_ignoredEntities = entities;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,setIgnoreList,(void))

::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getEntityCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,Array< ::Dynamic > entities){
	HX_STACK_PUSH("RaycastPicker::getEntityCollision","away3d/core/pick/RaycastPicker.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(entities,"entities");
	HX_STACK_LINE(121)
	this->_numEntities = (int)0;
	HX_STACK_LINE(122)
	::away3d::entities::Entity entity;		HX_STACK_VAR(entity,"entity");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &entities){
			HX_STACK_PUSH("*::closure","away3d/core/pick/RaycastPicker.hx",123);
			{
				HX_STACK_LINE(123)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(entities);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","away3d/core/pick/RaycastPicker.hx",123);
					{
						HX_STACK_LINE(123)
						return ::flash::_Vector::Vector_Impl__obj::iterator(_e->__get((int)0).StaticCast< Array< ::Dynamic > >());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(123)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(123)
	for(::cpp::FastIterator_obj< ::away3d::entities::Entity > *__it = ::cpp::CreateFastIterator< ::away3d::entities::Entity >((_Function_1_1::Block(entities))());  __it->hasNext(); ){
		::away3d::entities::Entity entity1 = __it->next();
		if ((entity1->isIntersectingRay(position,direction))){
			HX_STACK_LINE(124)
			this->_entities[(this->_numEntities)++] = entity1;
		}
;
	}
	HX_STACK_LINE(127)
	return this->getPickingCollisionVO();
}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getEntityCollision,return )

::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene){
	HX_STACK_PUSH("RaycastPicker::getSceneCollision","away3d/core/pick/RaycastPicker.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(scene,"scene");
	HX_STACK_LINE(95)
	this->_raycastCollector->clear();
	HX_STACK_LINE(97)
	this->_raycastCollector->set_rayPosition(position);
	HX_STACK_LINE(98)
	this->_raycastCollector->set_rayDirection(direction);
	HX_STACK_LINE(100)
	scene->traversePartitions(this->_raycastCollector);
	HX_STACK_LINE(101)
	this->_numEntities = (int)0;
	HX_STACK_LINE(102)
	::away3d::core::data::EntityListItem node = this->_raycastCollector->get_entityHead();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(103)
	::away3d::entities::Entity entity;		HX_STACK_VAR(entity,"entity");
	HX_STACK_LINE(104)
	while(((node != null()))){
		HX_STACK_LINE(105)
		entity = node->entity;
		HX_STACK_LINE(106)
		if ((this->isIgnored(entity))){
			HX_STACK_LINE(107)
			node = node->next;
			HX_STACK_LINE(108)
			continue;
		}
		HX_STACK_LINE(110)
		this->_entities[(this->_numEntities)++] = entity;
		HX_STACK_LINE(111)
		node = node->next;
	}
	HX_STACK_LINE(115)
	if (((this->_numEntities == (int)0))){
		HX_STACK_LINE(115)
		return null();
	}
	HX_STACK_LINE(116)
	return this->getPickingCollisionVO();
}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getSceneCollision,return )

::away3d::core::pick::PickingCollisionVO RaycastPicker_obj::getViewCollision( Float x,Float y,::away3d::containers::View3D view){
	HX_STACK_PUSH("RaycastPicker::getViewCollision","away3d/core/pick/RaycastPicker.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(view,"view");
	HX_STACK_LINE(64)
	::away3d::core::traverse::EntityCollector collector = view->get_entityCollector();		HX_STACK_VAR(collector,"collector");
	HX_STACK_LINE(66)
	if (((collector->get_numMouseEnableds() == (int)0))){
		HX_STACK_LINE(66)
		return null();
	}
	HX_STACK_LINE(67)
	::flash::geom::Vector3D rayPosition = view->unproject(x,y,(int)0);		HX_STACK_VAR(rayPosition,"rayPosition");
	HX_STACK_LINE(68)
	::flash::geom::Vector3D rayDirection = view->unproject(x,y,(int)1);		HX_STACK_VAR(rayDirection,"rayDirection");
	HX_STACK_LINE(69)
	rayDirection = ::flash::geom::Vector3D_obj::__new((rayDirection->x - rayPosition->x),(rayDirection->y - rayPosition->y),(rayDirection->z - rayPosition->z),null());
	HX_STACK_LINE(71)
	this->_numEntities = (int)0;
	HX_STACK_LINE(72)
	::away3d::core::data::EntityListItem node = collector->get_entityHead();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(73)
	::away3d::entities::Entity entity;		HX_STACK_VAR(entity,"entity");
	HX_STACK_LINE(74)
	while(((node != null()))){
		HX_STACK_LINE(75)
		entity = node->entity;
		HX_STACK_LINE(76)
		if ((this->isIgnored(entity))){
			HX_STACK_LINE(77)
			node = node->next;
			HX_STACK_LINE(78)
			continue;
		}
		HX_STACK_LINE(80)
		if (((bool(entity->get_isVisible()) && bool(entity->isIntersectingRay(rayPosition,rayDirection))))){
			HX_STACK_LINE(80)
			this->_entities[(this->_numEntities)++] = entity;
		}
		HX_STACK_LINE(81)
		node = node->next;
	}
	HX_STACK_LINE(85)
	if (((this->_numEntities == (int)0))){
		HX_STACK_LINE(85)
		return null();
	}
	HX_STACK_LINE(86)
	return this->getPickingCollisionVO();
}


HX_DEFINE_DYNAMIC_FUNC3(RaycastPicker_obj,getViewCollision,return )

bool RaycastPicker_obj::set_onlyMouseEnabled( bool value){
	HX_STACK_PUSH("RaycastPicker::set_onlyMouseEnabled","away3d/core/pick/RaycastPicker.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(39)
	this->_onlyMouseEnabled = value;
	HX_STACK_LINE(40)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RaycastPicker_obj,set_onlyMouseEnabled,return )

bool RaycastPicker_obj::get_onlyMouseEnabled( ){
	HX_STACK_PUSH("RaycastPicker::get_onlyMouseEnabled","away3d/core/pick/RaycastPicker.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->_onlyMouseEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(RaycastPicker_obj,get_onlyMouseEnabled,return )


RaycastPicker_obj::RaycastPicker_obj()
{
}

void RaycastPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RaycastPicker);
	HX_MARK_MEMBER_NAME(_hasCollisions,"_hasCollisions");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_entities,"_entities");
	HX_MARK_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_MARK_MEMBER_NAME(_ignoredEntities,"_ignoredEntities");
	HX_MARK_MEMBER_NAME(_raycastCollector,"_raycastCollector");
	HX_MARK_MEMBER_NAME(_findClosestCollision,"_findClosestCollision");
	HX_MARK_END_CLASS();
}

void RaycastPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hasCollisions,"_hasCollisions");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_entities,"_entities");
	HX_VISIT_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_VISIT_MEMBER_NAME(_ignoredEntities,"_ignoredEntities");
	HX_VISIT_MEMBER_NAME(_raycastCollector,"_raycastCollector");
	HX_VISIT_MEMBER_NAME(_findClosestCollision,"_findClosestCollision");
}

Dynamic RaycastPicker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isIgnored") ) { return isIgnored_dyn(); }
		if (HX_FIELD_EQ(inName,"_entities") ) { return _entities; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortOnNearT") ) { return sortOnNearT_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return _numEntities; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setIgnoreList") ) { return setIgnoreList_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hasCollisions") ) { return _hasCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getViewCollision") ) { return getViewCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"_ignoredEntities") ) { return _ignoredEntities; }
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { return get_onlyMouseEnabled(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getSceneCollision") ) { return getSceneCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { return _onlyMouseEnabled; }
		if (HX_FIELD_EQ(inName,"_raycastCollector") ) { return _raycastCollector; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getEntityCollision") ) { return getEntityCollision_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLocalPosition") ) { return updateLocalPosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_onlyMouseEnabled") ) { return set_onlyMouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onlyMouseEnabled") ) { return get_onlyMouseEnabled_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getPickingCollisionVO") ) { return getPickingCollisionVO_dyn(); }
		if (HX_FIELD_EQ(inName,"_findClosestCollision") ) { return _findClosestCollision; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RaycastPicker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_entities") ) { _entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hasCollisions") ) { _hasCollisions=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ignoredEntities") ) { _ignoredEntities=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { return set_onlyMouseEnabled(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { _onlyMouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_raycastCollector") ) { _raycastCollector=inValue.Cast< ::away3d::core::traverse::RaycastCollector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_findClosestCollision") ) { _findClosestCollision=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RaycastPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_hasCollisions"));
	outFields->push(HX_CSTRING("_numEntities"));
	outFields->push(HX_CSTRING("_entities"));
	outFields->push(HX_CSTRING("_onlyMouseEnabled"));
	outFields->push(HX_CSTRING("_ignoredEntities"));
	outFields->push(HX_CSTRING("_raycastCollector"));
	outFields->push(HX_CSTRING("_findClosestCollision"));
	outFields->push(HX_CSTRING("onlyMouseEnabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("updateLocalPosition"),
	HX_CSTRING("getPickingCollisionVO"),
	HX_CSTRING("sortOnNearT"),
	HX_CSTRING("isIgnored"),
	HX_CSTRING("setIgnoreList"),
	HX_CSTRING("getEntityCollision"),
	HX_CSTRING("getSceneCollision"),
	HX_CSTRING("getViewCollision"),
	HX_CSTRING("set_onlyMouseEnabled"),
	HX_CSTRING("get_onlyMouseEnabled"),
	HX_CSTRING("_hasCollisions"),
	HX_CSTRING("_numEntities"),
	HX_CSTRING("_entities"),
	HX_CSTRING("_onlyMouseEnabled"),
	HX_CSTRING("_ignoredEntities"),
	HX_CSTRING("_raycastCollector"),
	HX_CSTRING("_findClosestCollision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RaycastPicker_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RaycastPicker_obj::__mClass,"__mClass");
};

Class RaycastPicker_obj::__mClass;

void RaycastPicker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.RaycastPicker"), hx::TCanCast< RaycastPicker_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RaycastPicker_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
