#ifndef INCLUDED_away3d_core_partition_NodeBase
#define INCLUDED_away3d_core_partition_NodeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  NodeBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NodeBase_obj OBJ_;
		NodeBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< NodeBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NodeBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NodeBase"); }

		virtual Void updateNumEntities( int value);
		Dynamic updateNumEntities_dyn();

		virtual int get_numEntities( );
		Dynamic get_numEntities_dyn();

		virtual ::away3d::primitives::WireframePrimitiveBase createDebugBounds( );
		Dynamic createDebugBounds_dyn();

		virtual Void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);
		Dynamic acceptTraverser_dyn();

		virtual ::away3d::core::partition::NodeBase findPartitionForEntity( ::away3d::entities::Entity entity);
		Dynamic findPartitionForEntity_dyn();

		virtual bool isIntersectingRay( ::flash::geom::Vector3D rayPosition,::flash::geom::Vector3D rayDirection);
		Dynamic isIntersectingRay_dyn();

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);
		Dynamic isInFrustum_dyn();

		virtual Void removeNode( ::away3d::core::partition::NodeBase node);
		Dynamic removeNode_dyn();

		virtual Void addNode( ::away3d::core::partition::NodeBase node);
		Dynamic addNode_dyn();

		virtual ::away3d::core::partition::NodeBase get_parent( );
		Dynamic get_parent_dyn();

		virtual bool set_showDebugBounds( bool value);
		Dynamic set_showDebugBounds_dyn();

		virtual bool get_showDebugBounds( );
		Dynamic get_showDebugBounds_dyn();

		int _collectionMark;
		int _numEntities;
		::away3d::primitives::WireframePrimitiveBase _debugPrimitive;
		int _numChildNodes;
		Array< ::Dynamic > _childNodes;
		::away3d::core::partition::NodeBase _parent;
};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_NodeBase */ 
