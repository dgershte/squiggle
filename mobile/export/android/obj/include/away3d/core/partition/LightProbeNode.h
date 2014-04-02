#ifndef INCLUDED_away3d_core_partition_LightProbeNode
#define INCLUDED_away3d_core_partition_LightProbeNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/partition/EntityNode.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,LightProbeNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  LightProbeNode_obj : public ::away3d::core::partition::EntityNode_obj{
	public:
		typedef ::away3d::core::partition::EntityNode_obj super;
		typedef LightProbeNode_obj OBJ_;
		LightProbeNode_obj();
		Void __construct(::away3d::lights::LightProbe light);

	public:
		static hx::ObjectPtr< LightProbeNode_obj > __new(::away3d::lights::LightProbe light);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightProbeNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightProbeNode"); }

		virtual Void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

		virtual ::away3d::lights::LightProbe get_light( );
		Dynamic get_light_dyn();

		::away3d::lights::LightProbe _light;
};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_LightProbeNode */ 
