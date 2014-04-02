#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#define INCLUDED_away3d_core_base_CompactSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/SubGeometryBase.h>
#include <away3d/core/base/ISubGeometry.h>
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
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


class HXCPP_CLASS_ATTRIBUTES  CompactSubGeometry_obj : public ::away3d::core::base::SubGeometryBase_obj{
	public:
		typedef ::away3d::core::base::SubGeometryBase_obj super;
		typedef CompactSubGeometry_obj OBJ_;
		CompactSubGeometry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CompactSubGeometry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CompactSubGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::base::ISubGeometry_obj *()
			{ return new ::away3d::core::base::ISubGeometry_delegate_< CompactSubGeometry_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("CompactSubGeometry"); }

		virtual Void fromVectors( Array< Float > verts,Array< Float > uvs,Array< Float > normals,Array< Float > tangents);
		Dynamic fromVectors_dyn();

		virtual Array< Float > stripBuffer( int offset,int numEntries);
		Dynamic stripBuffer_dyn();

		virtual Array< Float > get_vertexPositionData( );

		virtual ::away3d::core::base::SubGeometry cloneWithSeperateBuffers( );
		Dynamic cloneWithSeperateBuffers_dyn();

		virtual Void invalidateBuffers( Array< bool > invalid);

		virtual Void disposeVertexBuffers( Array< ::Dynamic > buffers);

		virtual Void dispose( );

		virtual int get_secondaryUVOffset( );
		Dynamic get_secondaryUVOffset_dyn();

		virtual int get_UVOffset( );

		virtual int get_vertexTangentOffset( );

		virtual int get_vertexNormalOffset( );

		virtual int get_vertexOffset( );

		virtual int get_secondaryUVStride( );
		Dynamic get_secondaryUVStride_dyn();

		virtual int get_UVStride( );

		virtual int get_vertexTangentStride( );

		virtual int get_vertexNormalStride( );

		virtual int get_vertexStride( );

		virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV);

		virtual ::away3d::core::base::ISubGeometry clone( );
		Dynamic clone_dyn();

		virtual Void scale( Float scale);

		virtual Void applyTransformation( ::flash::geom::Matrix3D transform);

		virtual Array< Float > get_UVData( );

		virtual Array< Float > get_vertexTangentData( );

		virtual Array< Float > get_vertexNormalData( );

		virtual Array< Float > updateVertexTangents( Array< Float > target);

		virtual Array< Float > updateVertexNormals( Array< Float > target);

		virtual Array< Float > get_vertexData( );

		virtual Void updateActiveBuffer( int contextIndex);
		Dynamic updateActiveBuffer_dyn();

		virtual Void createBuffer( int contextIndex,::flash::display3D::Context3D context);
		Dynamic createBuffer_dyn();

		virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexTangentBuffer_dyn();

		virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexNormalBuffer_dyn();

		virtual Void uploadData( int contextIndex);
		Dynamic uploadData_dyn();

		virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateSecondaryUVBuffer_dyn();

		virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateUVBuffer_dyn();

		virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexBuffer_dyn();

		virtual Void updateData( Array< Float > data);
		Dynamic updateData_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		bool _isolatedVertexPositionDataDirty;
		Array< Float > _isolatedVertexPositionData;
		bool _activeDataInvalid;
		::flash::display3D::Context3D _activeContext;
		::flash::display3D::VertexBuffer3D _activeBuffer;
		int _contextIndex;
		int _numVertices;
		Array< ::Dynamic > _bufferContext;
		Array< ::Dynamic > _vertexBuffer;
		Array< bool > _vertexDataInvalid;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_CompactSubGeometry */ 
