#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
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
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
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

HX_DEFINE_DYNAMIC_FUNC0(IAnimator_obj,dispose,)

HX_DEFINE_DYNAMIC_FUNC0(IAnimator_obj,clone,return )

HX_DEFINE_DYNAMIC_FUNC1(IAnimator_obj,getAnimationStateByName,return )

HX_DEFINE_DYNAMIC_FUNC1(IAnimator_obj,getAnimationState,return )

HX_DEFINE_DYNAMIC_FUNC1(IAnimator_obj,removeOwner,)

HX_DEFINE_DYNAMIC_FUNC1(IAnimator_obj,addOwner,)

HX_DEFINE_DYNAMIC_FUNC1(IAnimator_obj,testGPUCompatibility,)

HX_DEFINE_DYNAMIC_FUNC5(IAnimator_obj,setRenderState,)

HX_DEFINE_DYNAMIC_FUNC0(IAnimator_obj,get_animationSet,return )


static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("clone"),
	HX_CSTRING("getAnimationStateByName"),
	HX_CSTRING("getAnimationState"),
	HX_CSTRING("removeOwner"),
	HX_CSTRING("addOwner"),
	HX_CSTRING("testGPUCompatibility"),
	HX_CSTRING("setRenderState"),
	HX_CSTRING("get_animationSet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAnimator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAnimator_obj::__mClass,"__mClass");
};

Class IAnimator_obj::__mClass;

void IAnimator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.IAnimator"), hx::TCanCast< IAnimator_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IAnimator_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
