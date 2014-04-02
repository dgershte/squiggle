#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_OpenFLStage3D
#include <OpenFLStage3D.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#include <away3d/core/managers/Stage3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DManagerSingletonEnforcer
#include <away3d/core/managers/Stage3DManagerSingletonEnforcer.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_Stage3D
#include <flash/display/Stage3D.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void Stage3DManager_obj::__construct(::flash::display::Stage stage,::away3d::core::managers::Stage3DManagerSingletonEnforcer Stage3DManagerSingletonEnforcer)
{
HX_STACK_PUSH("Stage3DManager::new","away3d/core/managers/Stage3DManager.hx",33);
{
	HX_STACK_LINE(34)
	if (((Stage3DManagerSingletonEnforcer == null()))){
		HX_STACK_LINE(34)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("This class is a multiton and cannot be instantiated manually. Use Stage3DManager.getInstance instead."),null()));
	}
	HX_STACK_LINE(35)
	this->_stage = stage;
	HX_STACK_LINE(36)
	this->stage3DsLength = (int)1;
	HX_STACK_LINE(40)
	if (((::away3d::core::managers::Stage3DManager_obj::_stageProxies == null()))){
		HX_STACK_LINE(40)
		::away3d::core::managers::Stage3DManager_obj::_stageProxies = ::flash::_Vector::Vector_Impl__obj::_new(this->stage3DsLength,true);
	}
}
;
	return null();
}

Stage3DManager_obj::~Stage3DManager_obj() { }

Dynamic Stage3DManager_obj::__CreateEmpty() { return  new Stage3DManager_obj; }
hx::ObjectPtr< Stage3DManager_obj > Stage3DManager_obj::__new(::flash::display::Stage stage,::away3d::core::managers::Stage3DManagerSingletonEnforcer Stage3DManagerSingletonEnforcer)
{  hx::ObjectPtr< Stage3DManager_obj > result = new Stage3DManager_obj();
	result->__construct(stage,Stage3DManagerSingletonEnforcer);
	return result;}

Dynamic Stage3DManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3DManager_obj > result = new Stage3DManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Stage3DManager_obj::get_numProxySlotsTotal( ){
	HX_STACK_PUSH("Stage3DManager::get_numProxySlotsTotal","away3d/core/managers/Stage3DManager.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->__Field(HX_CSTRING("length"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsTotal,return )

int Stage3DManager_obj::get_numProxySlotsUsed( ){
	HX_STACK_PUSH("Stage3DManager::get_numProxySlotsUsed","away3d/core/managers/Stage3DManager.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	return ::away3d::core::managers::Stage3DManager_obj::_numStageProxies;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsUsed,return )

int Stage3DManager_obj::get_numProxySlotsFree( ){
	HX_STACK_PUSH("Stage3DManager::get_numProxySlotsFree","away3d/core/managers/Stage3DManager.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return (::away3d::core::managers::Stage3DManager_obj::_stageProxies->__Field(HX_CSTRING("length"),true) - ::away3d::core::managers::Stage3DManager_obj::_numStageProxies);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsFree,return )

bool Stage3DManager_obj::get_hasFreeStage3DProxy( ){
	HX_STACK_PUSH("Stage3DManager::get_hasFreeStage3DProxy","away3d/core/managers/Stage3DManager.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(122)
	return (  (((::Std_obj::_int(::away3d::core::managers::Stage3DManager_obj::_numStageProxies) < ::away3d::core::managers::Stage3DManager_obj::_stageProxies->__Field(HX_CSTRING("length"),true)))) ? bool(true) : bool(false) );
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_hasFreeStage3DProxy,return )

::away3d::core::managers::Stage3DProxy Stage3DManager_obj::getFreeStage3DProxy( hx::Null< bool >  __o_forceSoftware,::String __o_profile){
bool forceSoftware = __o_forceSoftware.Default(false);
::String profile = __o_profile.Default(HX_CSTRING("baseline"));
	HX_STACK_PUSH("Stage3DManager::getFreeStage3DProxy","away3d/core/managers/Stage3DManager.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(forceSoftware,"forceSoftware");
	HX_STACK_ARG(profile,"profile");
{
		HX_STACK_LINE(101)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(102)
		int len = this->stage3DsLength;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(103)
		while(((i < len))){
			HX_STACK_LINE(104)
			if (((::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(i).StaticCast< ::away3d::core::managers::Stage3DProxy >() == null()))){
				HX_STACK_LINE(105)
				this->getStage3DProxy(i,forceSoftware,profile);
				HX_STACK_LINE(106)
				::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(i).StaticCast< ::away3d::core::managers::Stage3DProxy >()->set_width(this->_stage->get_stageWidth());
				HX_STACK_LINE(107)
				::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(i).StaticCast< ::away3d::core::managers::Stage3DProxy >()->set_height(this->_stage->get_stageHeight());
				HX_STACK_LINE(108)
				return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(i).StaticCast< ::away3d::core::managers::Stage3DProxy >();
			}
			HX_STACK_LINE(110)
			++(i);
		}
		HX_STACK_LINE(113)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Too many Stage3D instances used!"),null()));
		HX_STACK_LINE(114)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3DManager_obj,getFreeStage3DProxy,return )

Void Stage3DManager_obj::removeStage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("Stage3DManager::removeStage3DProxy","away3d/core/managers/Stage3DManager.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(89)
		(::away3d::core::managers::Stage3DManager_obj::_numStageProxies)--;
		HX_STACK_LINE(90)
		::away3d::core::managers::Stage3DManager_obj::_stageProxies[stage3DProxy->get_stage3DIndex()] = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DManager_obj,removeStage3DProxy,(void))

::away3d::core::managers::Stage3DProxy Stage3DManager_obj::getStage3DProxy( int index,hx::Null< bool >  __o_forceSoftware,::String __o_profile){
bool forceSoftware = __o_forceSoftware.Default(false);
::String profile = __o_profile.Default(HX_CSTRING("baseline"));
	HX_STACK_PUSH("Stage3DManager::getStage3DProxy","away3d/core/managers/Stage3DManager.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(forceSoftware,"forceSoftware");
	HX_STACK_ARG(profile,"profile");
{
		HX_STACK_LINE(73)
		if (((::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(index).StaticCast< ::away3d::core::managers::Stage3DProxy >() == null()))){
			HX_STACK_LINE(74)
			(::away3d::core::managers::Stage3DManager_obj::_numStageProxies)++;
			HX_STACK_LINE(75)
			::away3d::core::managers::Stage3DManager_obj::_stageProxies[index] = ::away3d::core::managers::Stage3DProxy_obj::__new(index,::OpenFLStage3D_obj::getStage3D(this->_stage,index),hx::ObjectPtr<OBJ_>(this),forceSoftware,profile);
		}
		HX_STACK_LINE(79)
		return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->__get(index).StaticCast< ::away3d::core::managers::Stage3DProxy >();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Stage3DManager_obj,getStage3DProxy,return )

::haxe::ds::ObjectMap Stage3DManager_obj::_instances;

Array< ::Dynamic > Stage3DManager_obj::_stageProxies;

int Stage3DManager_obj::_numStageProxies;

::away3d::core::managers::Stage3DManager Stage3DManager_obj::getInstance( ::flash::display::Stage stage){
	HX_STACK_PUSH("Stage3DManager::getInstance","away3d/core/managers/Stage3DManager.hx",50);
	HX_STACK_ARG(stage,"stage");
	HX_STACK_LINE(51)
	if (((::away3d::core::managers::Stage3DManager_obj::_instances == null()))){
		HX_STACK_LINE(52)
		::away3d::core::managers::Stage3DManager_obj::_instances = ::haxe::ds::ObjectMap_obj::__new();
	}
	HX_STACK_LINE(54)
	::away3d::core::managers::Stage3DManager manager = ::away3d::core::managers::Stage3DManager_obj::_instances->get(stage);		HX_STACK_VAR(manager,"manager");
	HX_STACK_LINE(55)
	if (((manager == null()))){
		HX_STACK_LINE(56)
		manager = ::away3d::core::managers::Stage3DManager_obj::__new(stage,::away3d::core::managers::Stage3DManagerSingletonEnforcer_obj::__new());
		HX_STACK_LINE(57)
		::away3d::core::managers::Stage3DManager_obj::_instances->__Internal->set(::__hxcpp_obj_id(stage),manager);
	}
	HX_STACK_LINE(59)
	return manager;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage3DManager_obj,getInstance,return )


Stage3DManager_obj::Stage3DManager_obj()
{
}

void Stage3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DManager);
	HX_MARK_MEMBER_NAME(stage3DsLength,"stage3DsLength");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void Stage3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stage3DsLength,"stage3DsLength");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic Stage3DManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { return _instances; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageProxies") ) { return _stageProxies; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stage3DsLength") ) { return stage3DsLength; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStage3DProxy") ) { return getStage3DProxy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numStageProxies") ) { return _numStageProxies; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numProxySlotsUsed") ) { return get_numProxySlotsUsed(); }
		if (HX_FIELD_EQ(inName,"numProxySlotsFree") ) { return get_numProxySlotsFree(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeStage3DProxy") ) { return removeStage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"numProxySlotsTotal") ) { return get_numProxySlotsTotal(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getFreeStage3DProxy") ) { return getFreeStage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFreeStage3DProxy") ) { return get_hasFreeStage3DProxy(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_numProxySlotsUsed") ) { return get_numProxySlotsUsed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numProxySlotsFree") ) { return get_numProxySlotsFree_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_numProxySlotsTotal") ) { return get_numProxySlotsTotal_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_hasFreeStage3DProxy") ) { return get_hasFreeStage3DProxy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3DManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageProxies") ) { _stageProxies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stage3DsLength") ) { stage3DsLength=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numStageProxies") ) { _numStageProxies=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stage3DsLength"));
	outFields->push(HX_CSTRING("_stage"));
	outFields->push(HX_CSTRING("numProxySlotsTotal"));
	outFields->push(HX_CSTRING("numProxySlotsUsed"));
	outFields->push(HX_CSTRING("numProxySlotsFree"));
	outFields->push(HX_CSTRING("hasFreeStage3DProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instances"),
	HX_CSTRING("_stageProxies"),
	HX_CSTRING("_numStageProxies"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_numProxySlotsTotal"),
	HX_CSTRING("get_numProxySlotsUsed"),
	HX_CSTRING("get_numProxySlotsFree"),
	HX_CSTRING("get_hasFreeStage3DProxy"),
	HX_CSTRING("getFreeStage3DProxy"),
	HX_CSTRING("removeStage3DProxy"),
	HX_CSTRING("getStage3DProxy"),
	HX_CSTRING("stage3DsLength"),
	HX_CSTRING("_stage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_instances,"_instances");
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_stageProxies,"_stageProxies");
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_numStageProxies,"_numStageProxies");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_instances,"_instances");
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_stageProxies,"_stageProxies");
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_numStageProxies,"_numStageProxies");
};

Class Stage3DManager_obj::__mClass;

void Stage3DManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.Stage3DManager"), hx::TCanCast< Stage3DManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage3DManager_obj::__boot()
{
	_numStageProxies= (int)0;
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
