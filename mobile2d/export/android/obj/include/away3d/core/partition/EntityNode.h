#ifndef INCLUDED_away3d_core_partition_EntityNode
#define INCLUDED_away3d_core_partition_EntityNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/partition/NodeBase.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  EntityNode_obj : public ::away3d::core::partition::NodeBase_obj{
	public:
		typedef ::away3d::core::partition::NodeBase_obj super;
		typedef EntityNode_obj OBJ_;
		EntityNode_obj();
		Void __construct(::away3d::entities::Entity entity);

	public:
		static hx::ObjectPtr< EntityNode_obj > __new(::away3d::entities::Entity entity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EntityNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EntityNode"); }

		virtual bool isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection);

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);

		virtual Void removeFromParent( );
		Dynamic removeFromParent_dyn();

		virtual Void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

		virtual ::away3d::entities::Entity get_entity( );
		Dynamic get_entity_dyn();

		::away3d::core::partition::EntityNode _updateQueueNext;
		::away3d::entities::Entity _entity;
};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_EntityNode */ 
