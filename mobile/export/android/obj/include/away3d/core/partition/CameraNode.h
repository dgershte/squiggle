#ifndef INCLUDED_away3d_core_partition_CameraNode
#define INCLUDED_away3d_core_partition_CameraNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/partition/EntityNode.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,CameraNode)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  CameraNode_obj : public ::away3d::core::partition::EntityNode_obj{
	public:
		typedef ::away3d::core::partition::EntityNode_obj super;
		typedef CameraNode_obj OBJ_;
		CameraNode_obj();
		Void __construct(::away3d::cameras::Camera3D camera);

	public:
		static hx::ObjectPtr< CameraNode_obj > __new(::away3d::cameras::Camera3D camera);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CameraNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CameraNode"); }

		virtual Void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_CameraNode */ 
