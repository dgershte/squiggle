#ifndef INCLUDED_away3d_containers_Scene3D
#define INCLUDED_away3d_containers_Scene3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  Scene3D_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef Scene3D_obj OBJ_;
		Scene3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Scene3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Scene3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene3D"); }

		virtual Void addPartitionUnique( ::away3d::core::partition::Partition3D partition);
		Dynamic addPartitionUnique_dyn();

		virtual Void unregisterPartition( ::away3d::entities::Entity entity);
		Dynamic unregisterPartition_dyn();

		virtual Void registerPartition( ::away3d::entities::Entity entity);
		Dynamic registerPartition_dyn();

		virtual Void invalidateEntityBounds( ::away3d::entities::Entity entity);
		Dynamic invalidateEntityBounds_dyn();

		virtual Void unregisterEntity( ::away3d::entities::Entity entity);
		Dynamic unregisterEntity_dyn();

		virtual Void registerEntity( ::away3d::entities::Entity entity);
		Dynamic registerEntity_dyn();

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		virtual ::away3d::containers::ObjectContainer3D getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual Void removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual Void removeChild( ::away3d::containers::ObjectContainer3D child);
		Dynamic removeChild_dyn();

		virtual ::away3d::containers::ObjectContainer3D addChild( ::away3d::containers::ObjectContainer3D child);
		Dynamic addChild_dyn();

		virtual bool contains( ::away3d::containers::ObjectContainer3D child);
		Dynamic contains_dyn();

		virtual ::away3d::core::partition::Partition3D set_partition( ::away3d::core::partition::Partition3D value);
		Dynamic set_partition_dyn();

		virtual ::away3d::core::partition::Partition3D get_partition( );
		Dynamic get_partition_dyn();

		virtual Void traversePartitions( ::away3d::core::traverse::PartitionTraverser traverser);
		Dynamic traversePartitions_dyn();

		Array< ::Dynamic > _partitions;
		::away3d::containers::ObjectContainer3D _sceneGraphRoot;
};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_Scene3D */ 
