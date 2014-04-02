#ifndef INCLUDED_away3d_core_partition_Partition3D
#define INCLUDED_away3d_core_partition_Partition3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  Partition3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Partition3D_obj OBJ_;
		Partition3D_obj();
		Void __construct(::away3d::core::partition::NodeBase rootNode);

	public:
		static hx::ObjectPtr< Partition3D_obj > __new(::away3d::core::partition::NodeBase rootNode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Partition3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Partition3D"); }

		virtual Void updateEntities( );
		Dynamic updateEntities_dyn();

		virtual Void removeEntity( ::away3d::entities::Entity entity);
		Dynamic removeEntity_dyn();

		virtual Void markForUpdate( ::away3d::entities::Entity entity);
		Dynamic markForUpdate_dyn();

		virtual Void traverse( ::away3d::core::traverse::PartitionTraverser traverser);
		Dynamic traverse_dyn();

		virtual bool set_showDebugBounds( bool value);
		Dynamic set_showDebugBounds_dyn();

		virtual bool get_showDebugBounds( );
		Dynamic get_showDebugBounds_dyn();

		::away3d::core::partition::EntityNode _updateQueue;
		bool _updatesMade;
		::away3d::core::partition::NodeBase _rootNode;
};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_Partition3D */ 
