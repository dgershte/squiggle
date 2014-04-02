#ifndef INCLUDED_away3d_core_partition_NullNode
#define INCLUDED_away3d_core_partition_NullNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/partition/NodeBase.h>
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,NullNode)
namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES  NullNode_obj : public ::away3d::core::partition::NodeBase_obj{
	public:
		typedef ::away3d::core::partition::NodeBase_obj super;
		typedef NullNode_obj OBJ_;
		NullNode_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< NullNode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NullNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NullNode"); }

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_NullNode */ 
