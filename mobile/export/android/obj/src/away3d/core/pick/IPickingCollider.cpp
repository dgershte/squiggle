#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace core{
namespace pick{

HX_DEFINE_DYNAMIC_FUNC3(IPickingCollider_obj,testSubMeshCollision,return )

HX_DEFINE_DYNAMIC_FUNC2(IPickingCollider_obj,setLocalRay,)


static ::String sMemberFields[] = {
	HX_CSTRING("testSubMeshCollision"),
	HX_CSTRING("setLocalRay"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IPickingCollider_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IPickingCollider_obj::__mClass,"__mClass");
};

Class IPickingCollider_obj::__mClass;

void IPickingCollider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.IPickingCollider"), hx::TCanCast< IPickingCollider_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IPickingCollider_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
