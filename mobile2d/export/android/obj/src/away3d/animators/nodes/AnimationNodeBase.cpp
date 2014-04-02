#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
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
namespace animators{
namespace nodes{

Void AnimationNodeBase_obj::__construct()
{
HX_STACK_PUSH("AnimationNodeBase::new","away3d/animators/nodes/AnimationNodeBase.hx",25);
{
	HX_STACK_LINE(25)
	super::__construct(null());
}
;
	return null();
}

AnimationNodeBase_obj::~AnimationNodeBase_obj() { }

Dynamic AnimationNodeBase_obj::__CreateEmpty() { return  new AnimationNodeBase_obj; }
hx::ObjectPtr< AnimationNodeBase_obj > AnimationNodeBase_obj::__new()
{  hx::ObjectPtr< AnimationNodeBase_obj > result = new AnimationNodeBase_obj();
	result->__construct();
	return result;}

Dynamic AnimationNodeBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationNodeBase_obj > result = new AnimationNodeBase_obj();
	result->__construct();
	return result;}

hx::Object *AnimationNodeBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

::String AnimationNodeBase_obj::get_assetType( ){
	HX_STACK_PUSH("AnimationNodeBase::get_assetType","away3d/animators/nodes/AnimationNodeBase.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return ::away3d::library::assets::AssetType_obj::ANIMATION_NODE;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,get_assetType,return )

Void AnimationNodeBase_obj::dispose( ){
{
		HX_STACK_PUSH("AnimationNodeBase::dispose","away3d/animators/nodes/AnimationNodeBase.hx",33);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,dispose,(void))

::Class AnimationNodeBase_obj::get_stateClass( ){
	HX_STACK_PUSH("AnimationNodeBase::get_stateClass","away3d/animators/nodes/AnimationNodeBase.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return this->_stateClass;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,get_stateClass,return )


AnimationNodeBase_obj::AnimationNodeBase_obj()
{
}

void AnimationNodeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationNodeBase);
	HX_MARK_MEMBER_NAME(_stateClass,"_stateClass");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationNodeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stateClass,"_stateClass");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AnimationNodeBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateClass") ) { return get_stateClass(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_stateClass") ) { return _stateClass; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_stateClass") ) { return get_stateClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationNodeBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_stateClass") ) { _stateClass=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationNodeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_stateClass"));
	outFields->push(HX_CSTRING("assetType"));
	outFields->push(HX_CSTRING("stateClass"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_assetType"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_stateClass"),
	HX_CSTRING("_stateClass"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationNodeBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationNodeBase_obj::__mClass,"__mClass");
};

Class AnimationNodeBase_obj::__mClass;

void AnimationNodeBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.nodes.AnimationNodeBase"), hx::TCanCast< AnimationNodeBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationNodeBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace nodes
