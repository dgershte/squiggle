#ifndef INCLUDED_away3d_entities_Mesh
#define INCLUDED_away3d_entities_Mesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/Entity.h>
#include <away3d/library/assets/IAsset.h>
#include <away3d/core/base/IMaterialOwner.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS2(away3d,events,GeometryEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Mesh_obj : public ::away3d::entities::Entity_obj{
	public:
		typedef ::away3d::entities::Entity_obj super;
		typedef Mesh_obj OBJ_;
		Mesh_obj();
		Void __construct(::away3d::core::base::Geometry geometry,::away3d::materials::MaterialBase material);

	public:
		static hx::ObjectPtr< Mesh_obj > __new(::away3d::core::base::Geometry geometry,::away3d::materials::MaterialBase material);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mesh_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< Mesh_obj >(this); }
		inline operator ::away3d::core::base::IMaterialOwner_obj *()
			{ return new ::away3d::core::base::IMaterialOwner_delegate_< Mesh_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< Mesh_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Mesh"); }

		virtual bool collidesBefore( Float shortestCollisionDistance,bool findClosest);

		virtual ::away3d::core::base::SubMesh getSubMeshForSubGeometry( ::away3d::core::base::SubGeometry subGeometry);
		Dynamic getSubMeshForSubGeometry_dyn();

		virtual Void addSubMesh( ::away3d::core::base::ISubGeometry subGeometry);
		Dynamic addSubMesh_dyn();

		virtual Void onSubGeometryRemoved( ::away3d::events::GeometryEvent event);
		Dynamic onSubGeometryRemoved_dyn();

		virtual Void onSubGeometryAdded( ::away3d::events::GeometryEvent event);
		Dynamic onSubGeometryAdded_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual Void updateBounds( );

		virtual ::away3d::core::base::Object3D clone( );

		virtual Void disposeWithAnimatorAndChildren( );
		Dynamic disposeWithAnimatorAndChildren_dyn();

		virtual Void dispose( );

		virtual Void clearAnimationGeometry( );
		Dynamic clearAnimationGeometry_dyn();

		virtual bool set_shareAnimationGeometry( bool value);
		Dynamic set_shareAnimationGeometry_dyn();

		virtual bool get_shareAnimationGeometry( );
		Dynamic get_shareAnimationGeometry_dyn();

		virtual Array< ::Dynamic > get_subMeshes( );
		Dynamic get_subMeshes_dyn();

		virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		Dynamic set_material_dyn();

		virtual ::away3d::materials::MaterialBase get_material( );
		Dynamic get_material_dyn();

		virtual ::away3d::core::base::Geometry set_geometry( ::away3d::core::base::Geometry value);
		Dynamic set_geometry_dyn();

		virtual ::away3d::core::base::Geometry get_geometry( );
		Dynamic get_geometry_dyn();

		virtual ::away3d::animators::IAnimator set_animator( ::away3d::animators::IAnimator value);
		Dynamic set_animator_dyn();

		virtual ::away3d::animators::IAnimator get_animator( );
		Dynamic get_animator_dyn();

		virtual bool set_castsShadows( bool value);
		Dynamic set_castsShadows_dyn();

		virtual bool get_castsShadows( );
		Dynamic get_castsShadows_dyn();

		virtual Void onGeometryBoundsInvalid( ::away3d::events::GeometryEvent event);
		Dynamic onGeometryBoundsInvalid_dyn();

		virtual ::String get_assetType( );

		virtual Void bakeTransformations( );
		Dynamic bakeTransformations_dyn();

		bool _shareAnimationGeometry;
		bool _castsShadows;
		::away3d::animators::IAnimator _animator;
		::away3d::materials::MaterialBase _material;
		::away3d::core::base::Geometry _geometry;
		Array< ::Dynamic > _subMeshes;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_Mesh */ 
