#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace base{

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_UVData,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_indexData,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_vertexTangentData,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_vertexNormalData,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_vertexData,return )

HX_DEFINE_DYNAMIC_FUNC1(IRenderable_obj,getIndexBuffer,return )

HX_DEFINE_DYNAMIC_FUNC2(IRenderable_obj,activateVertexTangentBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(IRenderable_obj,activateVertexNormalBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(IRenderable_obj,activateSecondaryUVBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(IRenderable_obj,activateUVBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(IRenderable_obj,activateVertexBuffer,)

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_vertexStride,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_numTriangles,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_numVertices,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_shaderPickingDetails,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_uvTransform,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_castsShadows,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_sourceEntity,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_mouseEnabled,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_inverseSceneTransform,return )

HX_DEFINE_DYNAMIC_FUNC1(IRenderable_obj,getRenderSceneTransform,return )

HX_DEFINE_DYNAMIC_FUNC0(IRenderable_obj,get_sceneTransform,return )


static ::String sMemberFields[] = {
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_indexData"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("get_numVertices"),
	HX_CSTRING("get_shaderPickingDetails"),
	HX_CSTRING("get_uvTransform"),
	HX_CSTRING("get_castsShadows"),
	HX_CSTRING("get_sourceEntity"),
	HX_CSTRING("get_mouseEnabled"),
	HX_CSTRING("get_inverseSceneTransform"),
	HX_CSTRING("getRenderSceneTransform"),
	HX_CSTRING("get_sceneTransform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IRenderable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IRenderable_obj::__mClass,"__mClass");
};

Class IRenderable_obj::__mClass;

void IRenderable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.IRenderable"), hx::TCanCast< IRenderable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IRenderable_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
