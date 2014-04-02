#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
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
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace base{

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexPositionData,return )

HX_DEFINE_DYNAMIC_FUNC4(ISubGeometry_obj,fromVectors,)

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,set_autoDeriveVertexTangents,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_autoDeriveVertexTangents,return )

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,set_autoDeriveVertexNormals,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_autoDeriveVertexNormals,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,cloneWithSeperateBuffers,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_faceNormals,return )

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,set_parentGeometry,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_parentGeometry,return )

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,scaleUV,)

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_scaleV,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_scaleU,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,clone,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,dispose,)

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,scale,)

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,applyTransformation,)

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_UVData,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_indexData,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_secondaryUVOffset,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_UVOffset,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexTangentOffset,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexNormalOffset,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexOffset,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexTangentData,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexNormalData,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexData,return )

HX_DEFINE_DYNAMIC_FUNC1(ISubGeometry_obj,getIndexBuffer,return )

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,activateVertexTangentBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,activateVertexNormalBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,activateSecondaryUVBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,activateUVBuffer,)

HX_DEFINE_DYNAMIC_FUNC2(ISubGeometry_obj,activateVertexBuffer,)

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_secondaryUVStride,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_UVStride,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexTangentStride,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexNormalStride,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_vertexStride,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_numTriangles,return )

HX_DEFINE_DYNAMIC_FUNC0(ISubGeometry_obj,get_numVertices,return )


static ::String sMemberFields[] = {
	HX_CSTRING("get_vertexPositionData"),
	HX_CSTRING("fromVectors"),
	HX_CSTRING("set_autoDeriveVertexTangents"),
	HX_CSTRING("get_autoDeriveVertexTangents"),
	HX_CSTRING("set_autoDeriveVertexNormals"),
	HX_CSTRING("get_autoDeriveVertexNormals"),
	HX_CSTRING("cloneWithSeperateBuffers"),
	HX_CSTRING("get_faceNormals"),
	HX_CSTRING("set_parentGeometry"),
	HX_CSTRING("get_parentGeometry"),
	HX_CSTRING("scaleUV"),
	HX_CSTRING("get_scaleV"),
	HX_CSTRING("get_scaleU"),
	HX_CSTRING("clone"),
	HX_CSTRING("dispose"),
	HX_CSTRING("scale"),
	HX_CSTRING("applyTransformation"),
	HX_CSTRING("get_UVData"),
	HX_CSTRING("get_indexData"),
	HX_CSTRING("get_secondaryUVOffset"),
	HX_CSTRING("get_UVOffset"),
	HX_CSTRING("get_vertexTangentOffset"),
	HX_CSTRING("get_vertexNormalOffset"),
	HX_CSTRING("get_vertexOffset"),
	HX_CSTRING("get_vertexTangentData"),
	HX_CSTRING("get_vertexNormalData"),
	HX_CSTRING("get_vertexData"),
	HX_CSTRING("getIndexBuffer"),
	HX_CSTRING("activateVertexTangentBuffer"),
	HX_CSTRING("activateVertexNormalBuffer"),
	HX_CSTRING("activateSecondaryUVBuffer"),
	HX_CSTRING("activateUVBuffer"),
	HX_CSTRING("activateVertexBuffer"),
	HX_CSTRING("get_secondaryUVStride"),
	HX_CSTRING("get_UVStride"),
	HX_CSTRING("get_vertexTangentStride"),
	HX_CSTRING("get_vertexNormalStride"),
	HX_CSTRING("get_vertexStride"),
	HX_CSTRING("get_numTriangles"),
	HX_CSTRING("get_numVertices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ISubGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ISubGeometry_obj::__mClass,"__mClass");
};

Class ISubGeometry_obj::__mClass;

void ISubGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.ISubGeometry"), hx::TCanCast< ISubGeometry_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ISubGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
