#ifndef INCLUDED_away3d_core_base_IRenderable
#define INCLUDED_away3d_core_base_IRenderable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/IMaterialOwner.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  IRenderable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRenderable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Array< Float > get_UVData( )=0;
		Dynamic get_UVData_dyn();
virtual Array< int > get_indexData( )=0;
		Dynamic get_indexData_dyn();
virtual Array< Float > get_vertexTangentData( )=0;
		Dynamic get_vertexTangentData_dyn();
virtual Array< Float > get_vertexNormalData( )=0;
		Dynamic get_vertexNormalData_dyn();
virtual Array< Float > get_vertexData( )=0;
		Dynamic get_vertexData_dyn();
virtual ::flash::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic getIndexBuffer_dyn();
virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic activateVertexTangentBuffer_dyn();
virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic activateVertexNormalBuffer_dyn();
virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic activateSecondaryUVBuffer_dyn();
virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic activateUVBuffer_dyn();
virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy)=0;
		Dynamic activateVertexBuffer_dyn();
virtual int get_vertexStride( )=0;
		Dynamic get_vertexStride_dyn();
virtual int get_numTriangles( )=0;
		Dynamic get_numTriangles_dyn();
virtual int get_numVertices( )=0;
		Dynamic get_numVertices_dyn();
virtual bool get_shaderPickingDetails( )=0;
		Dynamic get_shaderPickingDetails_dyn();
virtual ::flash::geom::Matrix get_uvTransform( )=0;
		Dynamic get_uvTransform_dyn();
virtual bool get_castsShadows( )=0;
		Dynamic get_castsShadows_dyn();
virtual ::away3d::entities::Entity get_sourceEntity( )=0;
		Dynamic get_sourceEntity_dyn();
virtual bool get_mouseEnabled( )=0;
		Dynamic get_mouseEnabled_dyn();
virtual ::flash::geom::Matrix3D get_inverseSceneTransform( )=0;
		Dynamic get_inverseSceneTransform_dyn();
virtual ::flash::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera)=0;
		Dynamic getRenderSceneTransform_dyn();
virtual ::flash::geom::Matrix3D get_sceneTransform( )=0;
		Dynamic get_sceneTransform_dyn();
};

#define DELEGATE_away3d_core_base_IRenderable \
virtual Array< Float > get_UVData( ) { return mDelegate->get_UVData();}  \
virtual Dynamic get_UVData_dyn() { return mDelegate->get_UVData_dyn();}  \
virtual Array< int > get_indexData( ) { return mDelegate->get_indexData();}  \
virtual Dynamic get_indexData_dyn() { return mDelegate->get_indexData_dyn();}  \
virtual Array< Float > get_vertexTangentData( ) { return mDelegate->get_vertexTangentData();}  \
virtual Dynamic get_vertexTangentData_dyn() { return mDelegate->get_vertexTangentData_dyn();}  \
virtual Array< Float > get_vertexNormalData( ) { return mDelegate->get_vertexNormalData();}  \
virtual Dynamic get_vertexNormalData_dyn() { return mDelegate->get_vertexNormalData_dyn();}  \
virtual Array< Float > get_vertexData( ) { return mDelegate->get_vertexData();}  \
virtual Dynamic get_vertexData_dyn() { return mDelegate->get_vertexData_dyn();}  \
virtual ::flash::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->getIndexBuffer(stage3DProxy);}  \
virtual Dynamic getIndexBuffer_dyn() { return mDelegate->getIndexBuffer_dyn();}  \
virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->activateVertexTangentBuffer(index,stage3DProxy);}  \
virtual Dynamic activateVertexTangentBuffer_dyn() { return mDelegate->activateVertexTangentBuffer_dyn();}  \
virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->activateVertexNormalBuffer(index,stage3DProxy);}  \
virtual Dynamic activateVertexNormalBuffer_dyn() { return mDelegate->activateVertexNormalBuffer_dyn();}  \
virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->activateSecondaryUVBuffer(index,stage3DProxy);}  \
virtual Dynamic activateSecondaryUVBuffer_dyn() { return mDelegate->activateSecondaryUVBuffer_dyn();}  \
virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->activateUVBuffer(index,stage3DProxy);}  \
virtual Dynamic activateUVBuffer_dyn() { return mDelegate->activateUVBuffer_dyn();}  \
virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy) { return mDelegate->activateVertexBuffer(index,stage3DProxy);}  \
virtual Dynamic activateVertexBuffer_dyn() { return mDelegate->activateVertexBuffer_dyn();}  \
virtual int get_vertexStride( ) { return mDelegate->get_vertexStride();}  \
virtual Dynamic get_vertexStride_dyn() { return mDelegate->get_vertexStride_dyn();}  \
virtual int get_numTriangles( ) { return mDelegate->get_numTriangles();}  \
virtual Dynamic get_numTriangles_dyn() { return mDelegate->get_numTriangles_dyn();}  \
virtual int get_numVertices( ) { return mDelegate->get_numVertices();}  \
virtual Dynamic get_numVertices_dyn() { return mDelegate->get_numVertices_dyn();}  \
virtual bool get_shaderPickingDetails( ) { return mDelegate->get_shaderPickingDetails();}  \
virtual Dynamic get_shaderPickingDetails_dyn() { return mDelegate->get_shaderPickingDetails_dyn();}  \
virtual ::flash::geom::Matrix get_uvTransform( ) { return mDelegate->get_uvTransform();}  \
virtual Dynamic get_uvTransform_dyn() { return mDelegate->get_uvTransform_dyn();}  \
virtual bool get_castsShadows( ) { return mDelegate->get_castsShadows();}  \
virtual Dynamic get_castsShadows_dyn() { return mDelegate->get_castsShadows_dyn();}  \
virtual ::away3d::entities::Entity get_sourceEntity( ) { return mDelegate->get_sourceEntity();}  \
virtual Dynamic get_sourceEntity_dyn() { return mDelegate->get_sourceEntity_dyn();}  \
virtual bool get_mouseEnabled( ) { return mDelegate->get_mouseEnabled();}  \
virtual Dynamic get_mouseEnabled_dyn() { return mDelegate->get_mouseEnabled_dyn();}  \
virtual ::flash::geom::Matrix3D get_inverseSceneTransform( ) { return mDelegate->get_inverseSceneTransform();}  \
virtual Dynamic get_inverseSceneTransform_dyn() { return mDelegate->get_inverseSceneTransform_dyn();}  \
virtual ::flash::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera) { return mDelegate->getRenderSceneTransform(camera);}  \
virtual Dynamic getRenderSceneTransform_dyn() { return mDelegate->getRenderSceneTransform_dyn();}  \
virtual ::flash::geom::Matrix3D get_sceneTransform( ) { return mDelegate->get_sceneTransform();}  \
virtual Dynamic get_sceneTransform_dyn() { return mDelegate->get_sceneTransform_dyn();}  \


template<typename IMPL>
class IRenderable_delegate_ : public IRenderable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRenderable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_base_IRenderable
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_IRenderable */ 
