#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
namespace away3d{
namespace controllers{

Void ControllerBase_obj::__construct(::away3d::entities::Entity targetObject)
{
HX_STACK_PUSH("ControllerBase::new","away3d/controllers/ControllerBase.hx",59);
{
	HX_STACK_LINE(60)
	this->_autoUpdate = true;
	HX_STACK_LINE(61)
	this->set_targetObject(targetObject);
}
;
	return null();
}

ControllerBase_obj::~ControllerBase_obj() { }

Dynamic ControllerBase_obj::__CreateEmpty() { return  new ControllerBase_obj; }
hx::ObjectPtr< ControllerBase_obj > ControllerBase_obj::__new(::away3d::entities::Entity targetObject)
{  hx::ObjectPtr< ControllerBase_obj > result = new ControllerBase_obj();
	result->__construct(targetObject);
	return result;}

Dynamic ControllerBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControllerBase_obj > result = new ControllerBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ControllerBase_obj::update( hx::Null< bool >  __o_interpolate){
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_PUSH("ControllerBase::update","away3d/controllers/ControllerBase.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(interpolate,"interpolate");
{
		HX_STACK_LINE(69)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,update,(void))

bool ControllerBase_obj::set_autoUpdate( bool val){
	HX_STACK_PUSH("ControllerBase::set_autoUpdate","away3d/controllers/ControllerBase.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(44)
	if (((this->_autoUpdate == val))){
		HX_STACK_LINE(44)
		return val;
	}
	HX_STACK_LINE(45)
	this->_autoUpdate = val;
	HX_STACK_LINE(46)
	if (((this->_targetObject != null()))){
		HX_STACK_LINE(46)
		if ((this->_autoUpdate)){
			HX_STACK_LINE(47)
			this->_targetObject->_controller = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(48)
			this->_targetObject->_controller = null();
		}
	}
	HX_STACK_LINE(50)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,set_autoUpdate,return )

bool ControllerBase_obj::get_autoUpdate( ){
	HX_STACK_PUSH("ControllerBase::get_autoUpdate","away3d/controllers/ControllerBase.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->_autoUpdate;
}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,get_autoUpdate,return )

::away3d::entities::Entity ControllerBase_obj::set_targetObject( ::away3d::entities::Entity val){
	HX_STACK_PUSH("ControllerBase::set_targetObject","away3d/controllers/ControllerBase.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(27)
	if (((this->_targetObject == val))){
		HX_STACK_LINE(27)
		return val;
	}
	HX_STACK_LINE(28)
	if (((bool((this->_targetObject != null())) && bool(this->_autoUpdate)))){
		HX_STACK_LINE(28)
		this->_targetObject->_controller = null();
	}
	HX_STACK_LINE(29)
	this->_targetObject = val;
	HX_STACK_LINE(30)
	if (((bool((this->_targetObject != null())) && bool(this->_autoUpdate)))){
		HX_STACK_LINE(30)
		this->_targetObject->_controller = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(31)
	this->notifyUpdate();
	HX_STACK_LINE(32)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,set_targetObject,return )

::away3d::entities::Entity ControllerBase_obj::get_targetObject( ){
	HX_STACK_PUSH("ControllerBase::get_targetObject","away3d/controllers/ControllerBase.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return this->_targetObject;
}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,get_targetObject,return )

Void ControllerBase_obj::notifyUpdate( ){
{
		HX_STACK_PUSH("ControllerBase::notifyUpdate","away3d/controllers/ControllerBase.hx",14);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14)
		if (((bool((bool((this->_targetObject != null())) && bool((this->_targetObject->get_implicitPartition() != null())))) && bool(this->_autoUpdate)))){
			HX_STACK_LINE(15)
			this->_targetObject->get_implicitPartition()->markForUpdate(this->_targetObject);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,notifyUpdate,(void))


ControllerBase_obj::ControllerBase_obj()
{
}

void ControllerBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControllerBase);
	HX_MARK_MEMBER_NAME(_targetObject,"_targetObject");
	HX_MARK_MEMBER_NAME(_autoUpdate,"_autoUpdate");
	HX_MARK_END_CLASS();
}

void ControllerBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_targetObject,"_targetObject");
	HX_VISIT_MEMBER_NAME(_autoUpdate,"_autoUpdate");
}

Dynamic ControllerBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { return get_autoUpdate(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { return _autoUpdate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"notifyUpdate") ) { return notifyUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"targetObject") ) { return get_targetObject(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_targetObject") ) { return _targetObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_autoUpdate") ) { return set_autoUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoUpdate") ) { return get_autoUpdate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_targetObject") ) { return set_targetObject_dyn(); }
		if (HX_FIELD_EQ(inName,"get_targetObject") ) { return get_targetObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControllerBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { return set_autoUpdate(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { _autoUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetObject") ) { return set_targetObject(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_targetObject") ) { _targetObject=inValue.Cast< ::away3d::entities::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ControllerBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_targetObject"));
	outFields->push(HX_CSTRING("_autoUpdate"));
	outFields->push(HX_CSTRING("autoUpdate"));
	outFields->push(HX_CSTRING("targetObject"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("set_autoUpdate"),
	HX_CSTRING("get_autoUpdate"),
	HX_CSTRING("set_targetObject"),
	HX_CSTRING("get_targetObject"),
	HX_CSTRING("notifyUpdate"),
	HX_CSTRING("_targetObject"),
	HX_CSTRING("_autoUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControllerBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControllerBase_obj::__mClass,"__mClass");
};

Class ControllerBase_obj::__mClass;

void ControllerBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.controllers.ControllerBase"), hx::TCanCast< ControllerBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ControllerBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace controllers
