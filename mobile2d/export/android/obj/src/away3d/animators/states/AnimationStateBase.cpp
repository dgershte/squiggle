#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_animators_states_AnimationStateBase
#include <away3d/animators/states/AnimationStateBase.h>
#endif
#ifndef INCLUDED_away3d_animators_states_IAnimationState
#include <away3d/animators/states/IAnimationState.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace animators{
namespace states{

Void AnimationStateBase_obj::__construct(::away3d::animators::IAnimator animator,::away3d::animators::nodes::AnimationNodeBase animationNode)
{
HX_STACK_PUSH("AnimationStateBase::new","away3d/animators/states/AnimationStateBase.hx",26);
{
	HX_STACK_LINE(27)
	this->_rootDelta = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(28)
	this->_positionDeltaDirty = true;
	HX_STACK_LINE(29)
	this->_animator = animator;
	HX_STACK_LINE(30)
	this->_animationNode = animationNode;
}
;
	return null();
}

AnimationStateBase_obj::~AnimationStateBase_obj() { }

Dynamic AnimationStateBase_obj::__CreateEmpty() { return  new AnimationStateBase_obj; }
hx::ObjectPtr< AnimationStateBase_obj > AnimationStateBase_obj::__new(::away3d::animators::IAnimator animator,::away3d::animators::nodes::AnimationNodeBase animationNode)
{  hx::ObjectPtr< AnimationStateBase_obj > result = new AnimationStateBase_obj();
	result->__construct(animator,animationNode);
	return result;}

Dynamic AnimationStateBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationStateBase_obj > result = new AnimationStateBase_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *AnimationStateBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::animators::states::IAnimationState_obj)) return operator ::away3d::animators::states::IAnimationState_obj *();
	return super::__ToInterface(inType);
}

Void AnimationStateBase_obj::updatePositionDelta( ){
{
		HX_STACK_PUSH("AnimationStateBase::updatePositionDelta","away3d/animators/states/AnimationStateBase.hx",81);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationStateBase_obj,updatePositionDelta,(void))

Void AnimationStateBase_obj::updateTime( int time){
{
		HX_STACK_PUSH("AnimationStateBase::updateTime","away3d/animators/states/AnimationStateBase.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(73)
		this->_time = (time - this->_startTime);
		HX_STACK_LINE(74)
		this->_positionDeltaDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateBase_obj,updateTime,(void))

Void AnimationStateBase_obj::phase( Float value){
{
		HX_STACK_PUSH("AnimationStateBase::phase","away3d/animators/states/AnimationStateBase.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateBase_obj,phase,(void))

Void AnimationStateBase_obj::update( int time){
{
		HX_STACK_PUSH("AnimationStateBase::update","away3d/animators/states/AnimationStateBase.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(53)
		if (((this->_time == (time - this->_startTime)))){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(54)
		this->updateTime(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateBase_obj,update,(void))

Void AnimationStateBase_obj::offset( int startTime){
{
		HX_STACK_PUSH("AnimationStateBase::offset","away3d/animators/states/AnimationStateBase.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(startTime,"startTime");
		HX_STACK_LINE(40)
		this->_startTime = startTime;
		HX_STACK_LINE(41)
		this->_positionDeltaDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateBase_obj,offset,(void))

::flash::geom::Vector3D AnimationStateBase_obj::get_positionDelta( ){
	HX_STACK_PUSH("AnimationStateBase::get_positionDelta","away3d/animators/states/AnimationStateBase.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	if ((this->_positionDeltaDirty)){
		HX_STACK_LINE(22)
		this->updatePositionDelta();
	}
	HX_STACK_LINE(23)
	return this->_rootDelta;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationStateBase_obj,get_positionDelta,return )


AnimationStateBase_obj::AnimationStateBase_obj()
{
}

void AnimationStateBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationStateBase);
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_startTime,"_startTime");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_positionDeltaDirty,"_positionDeltaDirty");
	HX_MARK_MEMBER_NAME(_rootDelta,"_rootDelta");
	HX_MARK_MEMBER_NAME(_animationNode,"_animationNode");
	HX_MARK_END_CLASS();
}

void AnimationStateBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_startTime,"_startTime");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_positionDeltaDirty,"_positionDeltaDirty");
	HX_VISIT_MEMBER_NAME(_rootDelta,"_rootDelta");
	HX_VISIT_MEMBER_NAME(_animationNode,"_animationNode");
}

Dynamic AnimationStateBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"phase") ) { return phase_dyn(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { return _animator; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime_dyn(); }
		if (HX_FIELD_EQ(inName,"_startTime") ) { return _startTime; }
		if (HX_FIELD_EQ(inName,"_rootDelta") ) { return _rootDelta; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"positionDelta") ) { return get_positionDelta(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_animationNode") ) { return _animationNode; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_positionDelta") ) { return get_positionDelta_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updatePositionDelta") ) { return updatePositionDelta_dyn(); }
		if (HX_FIELD_EQ(inName,"_positionDeltaDirty") ) { return _positionDeltaDirty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationStateBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::away3d::animators::IAnimator >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { _startTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rootDelta") ) { _rootDelta=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_animationNode") ) { _animationNode=inValue.Cast< ::away3d::animators::nodes::AnimationNodeBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_positionDeltaDirty") ) { _positionDeltaDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationStateBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_animator"));
	outFields->push(HX_CSTRING("_startTime"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_positionDeltaDirty"));
	outFields->push(HX_CSTRING("_rootDelta"));
	outFields->push(HX_CSTRING("_animationNode"));
	outFields->push(HX_CSTRING("positionDelta"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updatePositionDelta"),
	HX_CSTRING("updateTime"),
	HX_CSTRING("phase"),
	HX_CSTRING("update"),
	HX_CSTRING("offset"),
	HX_CSTRING("get_positionDelta"),
	HX_CSTRING("_animator"),
	HX_CSTRING("_startTime"),
	HX_CSTRING("_time"),
	HX_CSTRING("_positionDeltaDirty"),
	HX_CSTRING("_rootDelta"),
	HX_CSTRING("_animationNode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationStateBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationStateBase_obj::__mClass,"__mClass");
};

Class AnimationStateBase_obj::__mClass;

void AnimationStateBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.states.AnimationStateBase"), hx::TCanCast< AnimationStateBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationStateBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace states
