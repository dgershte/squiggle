#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
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
namespace pick{

HX_DEFINE_DYNAMIC_FUNC0(IPicker_obj,dispose,)

HX_DEFINE_DYNAMIC_FUNC1(IPicker_obj,set_onlyMouseEnabled,return )

HX_DEFINE_DYNAMIC_FUNC0(IPicker_obj,get_onlyMouseEnabled,return )

HX_DEFINE_DYNAMIC_FUNC3(IPicker_obj,getSceneCollision,return )

HX_DEFINE_DYNAMIC_FUNC3(IPicker_obj,getViewCollision,return )


static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("set_onlyMouseEnabled"),
	HX_CSTRING("get_onlyMouseEnabled"),
	HX_CSTRING("getSceneCollision"),
	HX_CSTRING("getViewCollision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IPicker_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IPicker_obj::__mClass,"__mClass");
};

Class IPicker_obj::__mClass;

void IPicker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.IPicker"), hx::TCanCast< IPicker_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IPicker_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
