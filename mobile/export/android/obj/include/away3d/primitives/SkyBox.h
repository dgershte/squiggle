#ifndef INCLUDED_away3d_primitives_SkyBox
#define INCLUDED_away3d_primitives_SkyBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/Entity.h>
#include <away3d/core/base/IRenderable.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SkyBoxMaterial)
HX_DECLARE_CLASS2(away3d,primitives,SkyBox)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  SkyBox_obj : public ::away3d::entities::Entity_obj{
	public:
		typedef ::away3d::entities::Entity_obj super;
		typedef SkyBox_obj OBJ_;
		SkyBox_obj();
		Void __construct(::away3d::textures::CubeTextureBase cubeMap);

	public:
		static hx::ObjectPtr< SkyBox_obj > __new(::away3d::textures::CubeTextureBase cubeMap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkyBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::base::IMaterialOwner_obj *()
			{ return new ::away3d::core::base::IMaterialOwner_delegate_< SkyBox_obj >(this); }
		inline operator ::away3d::core::base::IRenderable_obj *()
			{ return new ::away3d::core::base::IRenderable_delegate_< SkyBox_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SkyBox"); }

		virtual ::flash::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera);
		Dynamic getRenderSceneTransform_dyn();

		virtual int get_vertexTangentOffset( );
		Dynamic get_vertexTangentOffset_dyn();

		virtual int get_vertexNormalOffset( );
		Dynamic get_vertexNormalOffset_dyn();

		virtual int get_vertexOffset( );
		Dynamic get_vertexOffset_dyn();

		virtual Array< Float > get_vertexTangentData( );
		Dynamic get_vertexTangentData_dyn();

		virtual Array< Float > get_vertexNormalData( );
		Dynamic get_vertexNormalData_dyn();

		virtual int get_vertexStride( );
		Dynamic get_vertexStride_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		virtual Array< Float > get_UVData( );
		Dynamic get_UVData_dyn();

		virtual Array< int > get_indexData( );
		Dynamic get_indexData_dyn();

		virtual Array< Float > get_vertexData( );
		Dynamic get_vertexData_dyn();

		virtual ::flash::geom::Matrix get_uvTransform( );
		Dynamic get_uvTransform_dyn();

		virtual bool get_castsShadows( );
		Dynamic get_castsShadows_dyn();

		virtual Void buildGeometry( ::away3d::core::base::SubGeometry target);
		Dynamic buildGeometry_dyn();

		virtual Void updateBounds( );

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual Void invalidateBounds( );

		virtual ::String get_assetType( );

		virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		Dynamic set_material_dyn();

		virtual ::away3d::materials::MaterialBase get_material( );
		Dynamic get_material_dyn();

		virtual ::away3d::entities::Entity get_sourceEntity( );
		Dynamic get_sourceEntity_dyn();

		virtual int get_numTriangles( );
		Dynamic get_numTriangles_dyn();

		virtual ::flash::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getIndexBuffer_dyn();

		virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateSecondaryUVBuffer_dyn();

		virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexTangentBuffer_dyn();

		virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexNormalBuffer_dyn();

		virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateUVBuffer_dyn();

		virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexBuffer_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		virtual ::away3d::animators::IAnimator get_animator( );
		Dynamic get_animator_dyn();

		::away3d::animators::IAnimator _animator;
		::flash::geom::Matrix _uvTransform;
		::away3d::materials::SkyBoxMaterial _material;
		::away3d::core::base::SubGeometry _geometry;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_SkyBox */ 
