#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#define INCLUDED_away3d_core_sort_RenderableMergeSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/sort/IEntitySorter.h>
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,sort,RenderableMergeSort)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
namespace away3d{
namespace core{
namespace sort{


class HXCPP_CLASS_ATTRIBUTES  RenderableMergeSort_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderableMergeSort_obj OBJ_;
		RenderableMergeSort_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RenderableMergeSort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderableMergeSort_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::sort::IEntitySorter_obj *()
			{ return new ::away3d::core::sort::IEntitySorter_delegate_< RenderableMergeSort_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RenderableMergeSort"); }

		virtual ::away3d::core::data::RenderableListItem mergeSortByMaterial( ::away3d::core::data::RenderableListItem head);
		Dynamic mergeSortByMaterial_dyn();

		virtual ::away3d::core::data::RenderableListItem mergeSortByDepth( ::away3d::core::data::RenderableListItem head);
		Dynamic mergeSortByDepth_dyn();

		virtual Void sort( ::away3d::core::traverse::EntityCollector collector);
		Dynamic sort_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace sort

#endif /* INCLUDED_away3d_core_sort_RenderableMergeSort */ 
