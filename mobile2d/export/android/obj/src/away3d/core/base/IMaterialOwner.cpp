#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace core{
namespace base{

HX_DEFINE_DYNAMIC_FUNC0(IMaterialOwner_obj,get_animator,return )

HX_DEFINE_DYNAMIC_FUNC1(IMaterialOwner_obj,set_material,return )

HX_DEFINE_DYNAMIC_FUNC0(IMaterialOwner_obj,get_material,return )


static ::String sMemberFields[] = {
	HX_CSTRING("get_animator"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMaterialOwner_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMaterialOwner_obj::__mClass,"__mClass");
};

Class IMaterialOwner_obj::__mClass;

void IMaterialOwner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.IMaterialOwner"), hx::TCanCast< IMaterialOwner_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IMaterialOwner_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
