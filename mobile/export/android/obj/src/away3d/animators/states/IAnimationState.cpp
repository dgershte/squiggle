#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_states_IAnimationState
#include <away3d/animators/states/IAnimationState.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace animators{
namespace states{

HX_DEFINE_DYNAMIC_FUNC1(IAnimationState_obj,phase,)

HX_DEFINE_DYNAMIC_FUNC1(IAnimationState_obj,update,)

HX_DEFINE_DYNAMIC_FUNC1(IAnimationState_obj,offset,)

HX_DEFINE_DYNAMIC_FUNC0(IAnimationState_obj,get_positionDelta,return )


static ::String sMemberFields[] = {
	HX_CSTRING("phase"),
	HX_CSTRING("update"),
	HX_CSTRING("offset"),
	HX_CSTRING("get_positionDelta"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAnimationState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAnimationState_obj::__mClass,"__mClass");
};

Class IAnimationState_obj::__mClass;

void IAnimationState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.states.IAnimationState"), hx::TCanCast< IAnimationState_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IAnimationState_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace states
