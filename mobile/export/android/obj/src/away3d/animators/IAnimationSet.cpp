#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace animators{

HX_DEFINE_DYNAMIC_FUNC2(IAnimationSet_obj,deactivate,)

HX_DEFINE_DYNAMIC_FUNC2(IAnimationSet_obj,activate,)

HX_DEFINE_DYNAMIC_FUNC1(IAnimationSet_obj,doneAGALCode,)

HX_DEFINE_DYNAMIC_FUNC3(IAnimationSet_obj,getAGALUVCode,return )

HX_DEFINE_DYNAMIC_FUNC3(IAnimationSet_obj,getAGALFragmentCode,return )

HX_DEFINE_DYNAMIC_FUNC4(IAnimationSet_obj,getAGALVertexCode,return )

HX_DEFINE_DYNAMIC_FUNC0(IAnimationSet_obj,cancelGPUCompatibility,)

HX_DEFINE_DYNAMIC_FUNC0(IAnimationSet_obj,resetGPUCompatibility,)

HX_DEFINE_DYNAMIC_FUNC0(IAnimationSet_obj,get_usesCPU,return )

HX_DEFINE_DYNAMIC_FUNC1(IAnimationSet_obj,getAnimation,return )

HX_DEFINE_DYNAMIC_FUNC1(IAnimationSet_obj,hasAnimation,return )


static ::String sMemberFields[] = {
	HX_CSTRING("deactivate"),
	HX_CSTRING("activate"),
	HX_CSTRING("doneAGALCode"),
	HX_CSTRING("getAGALUVCode"),
	HX_CSTRING("getAGALFragmentCode"),
	HX_CSTRING("getAGALVertexCode"),
	HX_CSTRING("cancelGPUCompatibility"),
	HX_CSTRING("resetGPUCompatibility"),
	HX_CSTRING("get_usesCPU"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("hasAnimation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAnimationSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAnimationSet_obj::__mClass,"__mClass");
};

Class IAnimationSet_obj::__mClass;

void IAnimationSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.IAnimationSet"), hx::TCanCast< IAnimationSet_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IAnimationSet_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
