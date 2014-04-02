#ifndef INCLUDED_away3d_entities_Entity
#define INCLUDED_away3d_entities_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/containers/ObjectContainer3D.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPickingCollider)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::away3d::containers::ObjectContainer3D_obj{
	public:
		typedef ::away3d::containers::ObjectContainer3D_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Entity_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Entity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Entity"); }

		virtual Void internalUpdate( );
		Dynamic internalUpdate_dyn();

		virtual Void removeBounds( );
		Dynamic removeBounds_dyn();

		virtual Void addBounds( );
		Dynamic addBounds_dyn();

		virtual Void notifyPartitionUnassigned( );
		Dynamic notifyPartitionUnassigned_dyn();

		virtual Void notifyPartitionAssigned( );
		Dynamic notifyPartitionAssigned_dyn();

		virtual Void notifySceneBoundsInvalid( );
		Dynamic notifySceneBoundsInvalid_dyn();

		virtual Void updateMouseChildren( );

		virtual Void invalidateBounds( );
		Dynamic invalidateBounds_dyn();

		virtual Void invalidateSceneTransform( );

		virtual Void updateBounds( );
		Dynamic updateBounds_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );
		Dynamic getDefaultBoundingVolume_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );
		Dynamic createEntityPartitionNode_dyn();

		virtual bool isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection);
		Dynamic isIntersectingRay_dyn();

		virtual ::away3d::core::partition::EntityNode getEntityPartitionNode( );
		Dynamic getEntityPartitionNode_dyn();

		virtual ::away3d::core::pick::IPickingCollider set_pickingCollider( ::away3d::core::pick::IPickingCollider value);
		Dynamic set_pickingCollider_dyn();

		virtual ::away3d::core::pick::IPickingCollider get_pickingCollider( );
		Dynamic get_pickingCollider_dyn();

		virtual ::String get_assetType( );

		virtual ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D value);

		virtual ::away3d::core::partition::Partition3D set_implicitPartition( ::away3d::core::partition::Partition3D value);

		virtual Void updateWorldBounds( );
		Dynamic updateWorldBounds_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase get_worldBounds( );
		Dynamic get_worldBounds_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase set_bounds( ::away3d::bounds::BoundingVolumeBase value);
		Dynamic set_bounds_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase get_bounds( );
		Dynamic get_bounds_dyn();

		virtual Float get_maxZ( );

		virtual Float get_maxY( );

		virtual Float get_maxX( );

		virtual Float get_minZ( );

		virtual Float get_minY( );

		virtual Float get_minX( );

		virtual bool set_showBounds( bool value);
		Dynamic set_showBounds_dyn();

		virtual bool get_showBounds( );
		Dynamic get_showBounds_dyn();

		virtual bool collidesBefore( Float shortestCollisionDistance,bool findClosest);
		Dynamic collidesBefore_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO get_pickingCollisionVO( );
		Dynamic get_pickingCollisionVO_dyn();

		virtual bool set_staticNode( bool value);
		Dynamic set_staticNode_dyn();

		virtual bool get_staticNode( );
		Dynamic get_staticNode_dyn();

		virtual bool set_shaderPickingDetails( bool value);
		Dynamic set_shaderPickingDetails_dyn();

		virtual bool get_shaderPickingDetails( );
		Dynamic get_shaderPickingDetails_dyn();

		virtual bool set_ignoreTransform( bool value);

		bool _worldBoundsInvalid;
		::away3d::bounds::BoundingVolumeBase _worldBounds;
		bool _boundsInvalid;
		::away3d::bounds::BoundingVolumeBase _bounds;
		bool _staticNode;
		::away3d::core::pick::IPickingCollider _pickingCollider;
		::away3d::core::pick::PickingCollisionVO _pickingCollisionVO;
		bool _shaderPickingDetails;
		bool _boundsIsShown;
		::away3d::core::partition::EntityNode _partitionNode;
		bool _showBounds;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_Entity */ 
