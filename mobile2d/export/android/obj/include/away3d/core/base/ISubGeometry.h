#ifndef INCLUDED_away3d_core_base_ISubGeometry
#define INCLUDED_away3d_core_base_ISubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  ISubGeometry_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ISubGeometry_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Array< Float > get_vertexPositionData( )=0;
		Dynamic get_vertexPositionData_dyn();
virtual Void fromVectors( Array< Float > vertices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents)=0;
		Dynamic fromVectors_dyn();
virtual bool set_autoDeriveVertexTangents( bool value)=0;
		Dynamic set_autoDeriveVertexTangents_dyn();
virtual bool get_autoDeriveVertexTangents( )=0;
		Dynamic get_autoDeriveVertexTangents_dyn();
virtual bool set_autoDeriveVertexNormals( bool value)=0;
		Dynamic set_autoDeriveVertexNormals_dyn();
virtual bool get_autoDeriveVertexNormals( )=0;
		Dynamic get_autoDeriveVertexNormals_dyn();
virtual ::away3d::core::base::SubGeometry cloneWithSeperateBuffers( )=0;
		Dynamic cloneWithSeperateBuffers_dyn();
virtual Array< Float > get_faceNormals( )=0;
		Dynamic get_faceNormals_dyn();
virtual ::away3d::core::base::Geometry set_parentGeometry( ::away3d::core::base::Geometry value)=0;
		Dynamic set_parentGeometry_dyn();
virtual ::away3d::core::base::Geometry get_parentGeometry( )=0;
		Dynamic get_parentGeometry_dyn();
virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV)=0;
		Dynamic scaleUV_dyn();
virtual Float get_scaleV( )=0;
		Dynamic get_scaleV_dyn();
virtual Float get_scaleU( )=0;
		Dynamic get_scaleU_dyn();
virtual ::away3d::core::base::ISubGeometry clone( )=0;
		Dynamic clone_dyn();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
virtual Void scale( Float scale)=0;
		Dynamic scale_dyn();
virtual Void applyTransformation( ::flash::geom::Matrix3D transform)=0;
		Dynamic applyTransformation_dyn();
virtual Array< Float > get_UVData( )=0;
		Dynamic get_UVData_dyn();
virtual Array< int > get_indexData( )=0;
		Dynamic get_indexData_dyn();
virtual int get_secondaryUVOffset( )=0;
		Dynamic get_secondaryUVOffset_dyn();
virtual int get_UVOffset( )=0;
		Dynamic get_UVOffset_dyn();
virtual int get_vertexTangentOffset( )=0;
		Dynamic get_vertexTangentOffset_dyn();
virtual int get_vertexNormalOffset( )=0;
		Dynamic get_vertexNormalOffset_dyn();
virtual int get_vertexOffset( )=0;
		Dynamic get_vertexOffset_dyn();
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
virtual int get_secondaryUVStride( )=0;
		Dynamic get_secondaryUVStride_dyn();
virtual int get_UVStride( )=0;
		Dynamic get_UVStride_dyn();
virtual int get_vertexTangentStride( )=0;
		Dynamic get_vertexTangentStride_dyn();
virtual int get_vertexNormalStride( )=0;
		Dynamic get_vertexNormalStride_dyn();
virtual int get_vertexStride( )=0;
		Dynamic get_vertexStride_dyn();
virtual int get_numTriangles( )=0;
		Dynamic get_numTriangles_dyn();
virtual int get_numVertices( )=0;
		Dynamic get_numVertices_dyn();
};

#define DELEGATE_away3d_core_base_ISubGeometry \
virtual Array< Float > get_vertexPositionData( ) { return mDelegate->get_vertexPositionData();}  \
virtual Dynamic get_vertexPositionData_dyn() { return mDelegate->get_vertexPositionData_dyn();}  \
virtual Void fromVectors( Array< Float > vertices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents) { return mDelegate->fromVectors(vertices,uvs,normals,tangents);}  \
virtual Dynamic fromVectors_dyn() { return mDelegate->fromVectors_dyn();}  \
virtual bool set_autoDeriveVertexTangents( bool value) { return mDelegate->set_autoDeriveVertexTangents(value);}  \
virtual Dynamic set_autoDeriveVertexTangents_dyn() { return mDelegate->set_autoDeriveVertexTangents_dyn();}  \
virtual bool get_autoDeriveVertexTangents( ) { return mDelegate->get_autoDeriveVertexTangents();}  \
virtual Dynamic get_autoDeriveVertexTangents_dyn() { return mDelegate->get_autoDeriveVertexTangents_dyn();}  \
virtual bool set_autoDeriveVertexNormals( bool value) { return mDelegate->set_autoDeriveVertexNormals(value);}  \
virtual Dynamic set_autoDeriveVertexNormals_dyn() { return mDelegate->set_autoDeriveVertexNormals_dyn();}  \
virtual bool get_autoDeriveVertexNormals( ) { return mDelegate->get_autoDeriveVertexNormals();}  \
virtual Dynamic get_autoDeriveVertexNormals_dyn() { return mDelegate->get_autoDeriveVertexNormals_dyn();}  \
virtual ::away3d::core::base::SubGeometry cloneWithSeperateBuffers( ) { return mDelegate->cloneWithSeperateBuffers();}  \
virtual Dynamic cloneWithSeperateBuffers_dyn() { return mDelegate->cloneWithSeperateBuffers_dyn();}  \
virtual Array< Float > get_faceNormals( ) { return mDelegate->get_faceNormals();}  \
virtual Dynamic get_faceNormals_dyn() { return mDelegate->get_faceNormals_dyn();}  \
virtual ::away3d::core::base::Geometry set_parentGeometry( ::away3d::core::base::Geometry value) { return mDelegate->set_parentGeometry(value);}  \
virtual Dynamic set_parentGeometry_dyn() { return mDelegate->set_parentGeometry_dyn();}  \
virtual ::away3d::core::base::Geometry get_parentGeometry( ) { return mDelegate->get_parentGeometry();}  \
virtual Dynamic get_parentGeometry_dyn() { return mDelegate->get_parentGeometry_dyn();}  \
virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV) { return mDelegate->scaleUV(scaleU,scaleV);}  \
virtual Dynamic scaleUV_dyn() { return mDelegate->scaleUV_dyn();}  \
virtual Float get_scaleV( ) { return mDelegate->get_scaleV();}  \
virtual Dynamic get_scaleV_dyn() { return mDelegate->get_scaleV_dyn();}  \
virtual Float get_scaleU( ) { return mDelegate->get_scaleU();}  \
virtual Dynamic get_scaleU_dyn() { return mDelegate->get_scaleU_dyn();}  \
virtual ::away3d::core::base::ISubGeometry clone( ) { return mDelegate->clone();}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \
virtual Void scale( Float scale) { return mDelegate->scale(scale);}  \
virtual Dynamic scale_dyn() { return mDelegate->scale_dyn();}  \
virtual Void applyTransformation( ::flash::geom::Matrix3D transform) { return mDelegate->applyTransformation(transform);}  \
virtual Dynamic applyTransformation_dyn() { return mDelegate->applyTransformation_dyn();}  \
virtual Array< Float > get_UVData( ) { return mDelegate->get_UVData();}  \
virtual Dynamic get_UVData_dyn() { return mDelegate->get_UVData_dyn();}  \
virtual Array< int > get_indexData( ) { return mDelegate->get_indexData();}  \
virtual Dynamic get_indexData_dyn() { return mDelegate->get_indexData_dyn();}  \
virtual int get_secondaryUVOffset( ) { return mDelegate->get_secondaryUVOffset();}  \
virtual Dynamic get_secondaryUVOffset_dyn() { return mDelegate->get_secondaryUVOffset_dyn();}  \
virtual int get_UVOffset( ) { return mDelegate->get_UVOffset();}  \
virtual Dynamic get_UVOffset_dyn() { return mDelegate->get_UVOffset_dyn();}  \
virtual int get_vertexTangentOffset( ) { return mDelegate->get_vertexTangentOffset();}  \
virtual Dynamic get_vertexTangentOffset_dyn() { return mDelegate->get_vertexTangentOffset_dyn();}  \
virtual int get_vertexNormalOffset( ) { return mDelegate->get_vertexNormalOffset();}  \
virtual Dynamic get_vertexNormalOffset_dyn() { return mDelegate->get_vertexNormalOffset_dyn();}  \
virtual int get_vertexOffset( ) { return mDelegate->get_vertexOffset();}  \
virtual Dynamic get_vertexOffset_dyn() { return mDelegate->get_vertexOffset_dyn();}  \
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
virtual int get_secondaryUVStride( ) { return mDelegate->get_secondaryUVStride();}  \
virtual Dynamic get_secondaryUVStride_dyn() { return mDelegate->get_secondaryUVStride_dyn();}  \
virtual int get_UVStride( ) { return mDelegate->get_UVStride();}  \
virtual Dynamic get_UVStride_dyn() { return mDelegate->get_UVStride_dyn();}  \
virtual int get_vertexTangentStride( ) { return mDelegate->get_vertexTangentStride();}  \
virtual Dynamic get_vertexTangentStride_dyn() { return mDelegate->get_vertexTangentStride_dyn();}  \
virtual int get_vertexNormalStride( ) { return mDelegate->get_vertexNormalStride();}  \
virtual Dynamic get_vertexNormalStride_dyn() { return mDelegate->get_vertexNormalStride_dyn();}  \
virtual int get_vertexStride( ) { return mDelegate->get_vertexStride();}  \
virtual Dynamic get_vertexStride_dyn() { return mDelegate->get_vertexStride_dyn();}  \
virtual int get_numTriangles( ) { return mDelegate->get_numTriangles();}  \
virtual Dynamic get_numTriangles_dyn() { return mDelegate->get_numTriangles_dyn();}  \
virtual int get_numVertices( ) { return mDelegate->get_numVertices();}  \
virtual Dynamic get_numVertices_dyn() { return mDelegate->get_numVertices_dyn();}  \


template<typename IMPL>
class ISubGeometry_delegate_ : public ISubGeometry_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ISubGeometry_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_base_ISubGeometry
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_ISubGeometry */ 
