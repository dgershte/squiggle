#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_AssetEvent
#include <away3d/events/AssetEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
namespace library{
namespace assets{

Void NamedAssetBase_obj::__construct(::String name)
{
HX_STACK_PUSH("NamedAssetBase::new","away3d/library/assets/NamedAssetBase.hx",21);
{
	HX_STACK_LINE(22)
	if (((name == null()))){
		HX_STACK_LINE(22)
		name = HX_CSTRING("null");
	}
	HX_STACK_LINE(23)
	this->_name = name;
	HX_STACK_LINE(24)
	this->_originalName = name;
	HX_STACK_LINE(25)
	this->updateFullPath();
	HX_STACK_LINE(26)
	super::__construct(null());
}
;
	return null();
}

NamedAssetBase_obj::~NamedAssetBase_obj() { }

Dynamic NamedAssetBase_obj::__CreateEmpty() { return  new NamedAssetBase_obj; }
hx::ObjectPtr< NamedAssetBase_obj > NamedAssetBase_obj::__new(::String name)
{  hx::ObjectPtr< NamedAssetBase_obj > result = new NamedAssetBase_obj();
	result->__construct(name);
	return result;}

Dynamic NamedAssetBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NamedAssetBase_obj > result = new NamedAssetBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NamedAssetBase_obj::updateFullPath( ){
{
		HX_STACK_PUSH("NamedAssetBase::updateFullPath","away3d/library/assets/NamedAssetBase.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		this->_full_path = Dynamic( Array_obj<Dynamic>::__new().Add(this->_namespace).Add(this->_name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,updateFullPath,(void))

Void NamedAssetBase_obj::resetAssetPath( ::String name,::String ns,hx::Null< bool >  __o_overrideOriginal){
bool overrideOriginal = __o_overrideOriginal.Default(true);
	HX_STACK_PUSH("NamedAssetBase::resetAssetPath","away3d/library/assets/NamedAssetBase.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(ns,"ns");
	HX_STACK_ARG(overrideOriginal,"overrideOriginal");
{
		HX_STACK_LINE(75)
		this->_name = (  (((name != null()))) ? ::String(name) : ::String(HX_CSTRING("null")) );
		HX_STACK_LINE(76)
		this->_namespace = (  (((ns != null()))) ? ::String(ns) : ::String(::away3d::library::assets::NamedAssetBase_obj::DEFAULT_NAMESPACE) );
		HX_STACK_LINE(77)
		if ((overrideOriginal)){
			HX_STACK_LINE(77)
			this->_originalName = this->_name;
		}
		HX_STACK_LINE(78)
		this->updateFullPath();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(NamedAssetBase_obj,resetAssetPath,(void))

bool NamedAssetBase_obj::assetPathEquals( ::String name,::String ns){
	HX_STACK_PUSH("NamedAssetBase::assetPathEquals","away3d/library/assets/NamedAssetBase.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(ns,"ns");
	HX_STACK_LINE(70)
	return (bool((this->_name == name)) && bool(((bool((ns == null())) || bool((this->_namespace == ns))))));
}


HX_DEFINE_DYNAMIC_FUNC2(NamedAssetBase_obj,assetPathEquals,return )

Dynamic NamedAssetBase_obj::get_assetFullPath( ){
	HX_STACK_PUSH("NamedAssetBase::get_assetFullPath","away3d/library/assets/NamedAssetBase.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->_full_path;
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_assetFullPath,return )

::String NamedAssetBase_obj::get_assetNamespace( ){
	HX_STACK_PUSH("NamedAssetBase::get_assetNamespace","away3d/library/assets/NamedAssetBase.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->_namespace;
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_assetNamespace,return )

::String NamedAssetBase_obj::set_name( ::String val){
	HX_STACK_PUSH("NamedAssetBase::set_name","away3d/library/assets/NamedAssetBase.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(53)
	::String prev;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(54)
	prev = this->_name;
	HX_STACK_LINE(55)
	this->_name = val;
	HX_STACK_LINE(56)
	if (((this->_name == null()))){
		HX_STACK_LINE(56)
		this->_name = HX_CSTRING("null");
	}
	HX_STACK_LINE(57)
	this->updateFullPath();
	HX_STACK_LINE(58)
	if ((this->hasEventListener(::away3d::events::AssetEvent_obj::ASSET_RENAME))){
		HX_STACK_LINE(58)
		this->dispatchEvent(::away3d::events::AssetEvent_obj::__new(::away3d::events::AssetEvent_obj::ASSET_RENAME,hx::TCast< away3d::library::assets::IAsset >::cast(hx::ObjectPtr<OBJ_>(this)),prev));
	}
	HX_STACK_LINE(59)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(NamedAssetBase_obj,set_name,return )

::String NamedAssetBase_obj::get_name( ){
	HX_STACK_PUSH("NamedAssetBase::get_name","away3d/library/assets/NamedAssetBase.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_name,return )

::String NamedAssetBase_obj::set_id( ::String newID){
	HX_STACK_PUSH("NamedAssetBase::set_id","away3d/library/assets/NamedAssetBase.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(newID,"newID");
	HX_STACK_LINE(44)
	this->_id = newID;
	HX_STACK_LINE(45)
	return newID;
}


HX_DEFINE_DYNAMIC_FUNC1(NamedAssetBase_obj,set_id,return )

::String NamedAssetBase_obj::get_id( ){
	HX_STACK_PUSH("NamedAssetBase::get_id","away3d/library/assets/NamedAssetBase.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->_id;
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_id,return )

::String NamedAssetBase_obj::get_originalName( ){
	HX_STACK_PUSH("NamedAssetBase::get_originalName","away3d/library/assets/NamedAssetBase.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->_originalName;
}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_originalName,return )

::String NamedAssetBase_obj::DEFAULT_NAMESPACE;


NamedAssetBase_obj::NamedAssetBase_obj()
{
}

void NamedAssetBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NamedAssetBase);
	HX_MARK_MEMBER_NAME(_full_path,"_full_path");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_namespace,"_namespace");
	HX_MARK_MEMBER_NAME(_originalName,"_originalName");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NamedAssetBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_full_path,"_full_path");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_namespace,"_namespace");
	HX_VISIT_MEMBER_NAME(_originalName,"_originalName");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic NamedAssetBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_full_path") ) { return _full_path; }
		if (HX_FIELD_EQ(inName,"_namespace") ) { return _namespace; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"originalName") ) { return get_originalName(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_originalName") ) { return _originalName; }
		if (HX_FIELD_EQ(inName,"assetFullPath") ) { return get_assetFullPath(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateFullPath") ) { return updateFullPath_dyn(); }
		if (HX_FIELD_EQ(inName,"resetAssetPath") ) { return resetAssetPath_dyn(); }
		if (HX_FIELD_EQ(inName,"assetNamespace") ) { return get_assetNamespace(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"assetPathEquals") ) { return assetPathEquals_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_originalName") ) { return get_originalName_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_NAMESPACE") ) { return DEFAULT_NAMESPACE; }
		if (HX_FIELD_EQ(inName,"get_assetFullPath") ) { return get_assetFullPath_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_assetNamespace") ) { return get_assetNamespace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NamedAssetBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_full_path") ) { _full_path=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_namespace") ) { _namespace=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_originalName") ) { _originalName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEFAULT_NAMESPACE") ) { DEFAULT_NAMESPACE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NamedAssetBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_full_path"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_namespace"));
	outFields->push(HX_CSTRING("_originalName"));
	outFields->push(HX_CSTRING("assetFullPath"));
	outFields->push(HX_CSTRING("assetNamespace"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("originalName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_NAMESPACE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFullPath"),
	HX_CSTRING("resetAssetPath"),
	HX_CSTRING("assetPathEquals"),
	HX_CSTRING("get_assetFullPath"),
	HX_CSTRING("get_assetNamespace"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_name"),
	HX_CSTRING("set_id"),
	HX_CSTRING("get_id"),
	HX_CSTRING("get_originalName"),
	HX_CSTRING("_full_path"),
	HX_CSTRING("_id"),
	HX_CSTRING("_name"),
	HX_CSTRING("_namespace"),
	HX_CSTRING("_originalName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NamedAssetBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NamedAssetBase_obj::DEFAULT_NAMESPACE,"DEFAULT_NAMESPACE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NamedAssetBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NamedAssetBase_obj::DEFAULT_NAMESPACE,"DEFAULT_NAMESPACE");
};

Class NamedAssetBase_obj::__mClass;

void NamedAssetBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.library.assets.NamedAssetBase"), hx::TCanCast< NamedAssetBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NamedAssetBase_obj::__boot()
{
	DEFAULT_NAMESPACE= HX_CSTRING("default");
}

} // end namespace away3d
} // end namespace library
} // end namespace assets
