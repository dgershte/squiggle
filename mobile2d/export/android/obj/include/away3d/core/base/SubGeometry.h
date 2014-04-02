#ifndef INCLUDED_away3d_core_base_SubGeometry
#define INCLUDED_away3d_core_base_SubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/SubGeometryBase.h>
#include <away3d/core/base/ISubGeometry.h>
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  SubGeometry_obj : public ::away3d::core::base::SubGeometryBase_obj{
	public:
		typedef ::away3d::core::base::SubGeometryBase_obj super;
		typedef SubGeometry_obj OBJ_;
		SubGeometry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SubGeometry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SubGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::base::ISubGeometry_obj *()
			{ return new ::away3d::core::base::ISubGeometry_delegate_< SubGeometry_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SubGeometry"); }

		virtual ::away3d::core::base::SubGeometry cloneWithSeperateBuffers( );
		Dynamic cloneWithSeperateBuffers_dyn();

		virtual int get_secondaryUVOffset( );
		Dynamic get_secondaryUVOffset_dyn();

		virtual int get_UVOffset( );

		virtual int get_vertexTangentOffset( );

		virtual int get_vertexNormalOffset( );

		virtual int get_vertexOffset( );

		virtual int get_secondaryUVStride( );
		Dynamic get_secondaryUVStride_dyn();

		virtual int get_UVStride( );

		virtual int get_vertexNormalStride( );

		virtual int get_vertexTangentStride( );

		virtual int get_vertexStride( );

		virtual Void disposeForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic disposeForStage3D_dyn();

		virtual Array< Float > updateDummyUVs( Array< Float > target);

		virtual Array< Float > updateVertexTangents( Array< Float > target);

		virtual Array< Float > updateVertexNormals( Array< Float > target);

		virtual Void fromVectors( Array< Float > vertices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents);
		Dynamic fromVectors_dyn();

		virtual Void updateVertexTangentData( Array< Float > vertexTangents);
		Dynamic updateVertexTangentData_dyn();

		virtual Array< Float > get_vertexTangentData( );

		virtual Void updateVertexNormalData( Array< Float > vertexNormals);
		Dynamic updateVertexNormalData_dyn();

		virtual Array< Float > get_vertexNormalData( );

		virtual Void updateSecondaryUVData( Array< Float > uvs);
		Dynamic updateSecondaryUVData_dyn();

		virtual Void updateUVData( Array< Float > uvs);
		Dynamic updateUVData_dyn();

		virtual Array< Float > get_secondaryUVData( );
		Dynamic get_secondaryUVData_dyn();

		virtual Array< Float > get_UVData( );

		virtual Void updateVertexData( Array< Float > vertices);
		Dynamic updateVertexData_dyn();

		virtual Array< Float > get_vertexPositionData( );

		virtual Array< Float > get_vertexData( );

		virtual Void disposeAllVertexBuffers( );
		Dynamic disposeAllVertexBuffers_dyn();

		virtual Void dispose( );

		virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV);

		virtual Void scale( Float scale);

		virtual ::away3d::core::base::ISubGeometry clone( );
		Dynamic clone_dyn();

		virtual Void applyTransformation( ::flash::geom::Matrix3D transform);

		virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexTangentBuffer_dyn();

		virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexNormalBuffer_dyn();

		virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateSecondaryUVBuffer_dyn();

		virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateUVBuffer_dyn();

		virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexBuffer_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		int _numVertices;
		Array< ::Dynamic > _vertexTangentBufferContext;
		Array< ::Dynamic > _vertexNormalBufferContext;
		Array< ::Dynamic > _secondaryUvBufferContext;
		Array< ::Dynamic > _uvBufferContext;
		Array< ::Dynamic > _vertexBufferContext;
		Array< ::Dynamic > _vertexTangentBuffer;
		Array< ::Dynamic > _vertexNormalBuffer;
		Array< ::Dynamic > _secondaryUvBuffer;
		Array< ::Dynamic > _uvBuffer;
		Array< ::Dynamic > _vertexBuffer;
		Array< bool > _tangentsInvalid;
		Array< bool > _normalsInvalid;
		Array< bool > _secondaryUvsInvalid;
		Array< bool > _uvsInvalid;
		Array< bool > _verticesInvalid;
		Array< Float > _vertexTangents;
		Array< Float > _vertexNormals;
		Array< Float > _secondaryUvs;
		Array< Float > _uvs;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SubGeometry */ 
