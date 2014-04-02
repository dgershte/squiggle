#ifndef INCLUDED_away3d_core_base_SubMesh
#define INCLUDED_away3d_core_base_SubMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/IRenderable.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,data,AnimationSubGeometry)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  SubMesh_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SubMesh_obj OBJ_;
		SubMesh_obj();
		Void __construct(::away3d::core::base::ISubGeometry subGeometry,::away3d::entities::Mesh parentMesh,::away3d::materials::MaterialBase material);

	public:
		static hx::ObjectPtr< SubMesh_obj > __new(::away3d::core::base::ISubGeometry subGeometry,::away3d::entities::Mesh parentMesh,::away3d::materials::MaterialBase material);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SubMesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::base::IMaterialOwner_obj *()
			{ return new ::away3d::core::base::IMaterialOwner_delegate_< SubMesh_obj >(this); }
		inline operator ::away3d::core::base::IRenderable_obj *()
			{ return new ::away3d::core::base::IRenderable_delegate_< SubMesh_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SubMesh"); }

		virtual ::flash::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera);
		Dynamic getRenderSceneTransform_dyn();

		virtual int get_vertexTangentOffset( );
		Dynamic get_vertexTangentOffset_dyn();

		virtual int get_vertexNormalOffset( );
		Dynamic get_vertexNormalOffset_dyn();

		virtual int get_vertexOffset( );
		Dynamic get_vertexOffset_dyn();

		virtual int get_UVOffset( );
		Dynamic get_UVOffset_dyn();

		virtual Array< Float > get_vertexTangentData( );
		Dynamic get_vertexTangentData_dyn();

		virtual Array< Float > get_vertexNormalData( );
		Dynamic get_vertexNormalData_dyn();

		virtual int get_UVStride( );
		Dynamic get_UVStride_dyn();

		virtual int get_vertexStride( );
		Dynamic get_vertexStride_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase get_bounds( );
		Dynamic get_bounds_dyn();

		virtual Array< Float > get_UVData( );
		Dynamic get_UVData_dyn();

		virtual Array< int > get_indexData( );
		Dynamic get_indexData_dyn();

		virtual Array< Float > get_vertexData( );
		Dynamic get_vertexData_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void updateUVTransform( );
		Dynamic updateUVTransform_dyn();

		virtual ::flash::geom::Matrix get_uvTransform( );
		Dynamic get_uvTransform_dyn();

		virtual ::away3d::entities::Mesh set_parentMesh( ::away3d::entities::Mesh value);
		Dynamic set_parentMesh_dyn();

		virtual ::away3d::entities::Mesh get_parentMesh( );
		Dynamic get_parentMesh_dyn();

		virtual bool get_castsShadows( );
		Dynamic get_castsShadows_dyn();

		virtual bool get_mouseEnabled( );
		Dynamic get_mouseEnabled_dyn();

		virtual ::away3d::animators::IAnimator get_animator( );
		Dynamic get_animator_dyn();

		virtual int get_numTriangles( );
		Dynamic get_numTriangles_dyn();

		virtual ::flash::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getIndexBuffer_dyn();

		virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateSecondaryUVBuffer_dyn();

		virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateUVBuffer_dyn();

		virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexTangentBuffer_dyn();

		virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexNormalBuffer_dyn();

		virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexBuffer_dyn();

		virtual ::flash::geom::Matrix3D get_inverseSceneTransform( );
		Dynamic get_inverseSceneTransform_dyn();

		virtual ::flash::geom::Matrix3D get_sceneTransform( );
		Dynamic get_sceneTransform_dyn();

		virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		Dynamic set_material_dyn();

		virtual ::away3d::materials::MaterialBase get_material( );
		Dynamic get_material_dyn();

		virtual ::away3d::core::base::ISubGeometry set_subGeometry( ::away3d::core::base::ISubGeometry value);
		Dynamic set_subGeometry_dyn();

		virtual ::away3d::core::base::ISubGeometry get_subGeometry( );
		Dynamic get_subGeometry_dyn();

		virtual ::away3d::entities::Entity get_sourceEntity( );
		Dynamic get_sourceEntity_dyn();

		virtual Float set_uvRotation( Float value);
		Dynamic set_uvRotation_dyn();

		virtual Float get_uvRotation( );
		Dynamic get_uvRotation_dyn();

		virtual Float set_scaleV( Float value);
		Dynamic set_scaleV_dyn();

		virtual Float get_scaleV( );
		Dynamic get_scaleV_dyn();

		virtual Float set_scaleU( Float value);
		Dynamic set_scaleU_dyn();

		virtual Float get_scaleU( );
		Dynamic get_scaleU_dyn();

		virtual Float set_offsetV( Float value);
		Dynamic set_offsetV_dyn();

		virtual Float get_offsetV( );
		Dynamic get_offsetV_dyn();

		virtual Float set_offsetU( Float value);
		Dynamic set_offsetU_dyn();

		virtual Float get_offsetU( );
		Dynamic get_offsetU_dyn();

		virtual bool get_shaderPickingDetails( );
		Dynamic get_shaderPickingDetails_dyn();

		::away3d::animators::data::AnimationSubGeometry animatorSubGeometry;
		::away3d::animators::data::AnimationSubGeometry animationSubGeometry;
		Float _offsetV;
		Float _offsetU;
		Float _scaleV;
		Float _scaleU;
		Float _uvRotation;
		bool _uvTransformDirty;
		::flash::geom::Matrix _uvTransform;
		int _index;
		::away3d::core::base::ISubGeometry _subGeometry;
		::away3d::entities::Mesh _parentMesh;
		::away3d::materials::MaterialBase _material;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SubMesh */ 
