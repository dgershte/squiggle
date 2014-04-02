#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#define INCLUDED_away3d_core_sort_IEntitySorter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
namespace away3d{
namespace core{
namespace sort{


class HXCPP_CLASS_ATTRIBUTES  IEntitySorter_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEntitySorter_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void sort( ::away3d::core::traverse::EntityCollector collector)=0;
		Dynamic sort_dyn();
};

#define DELEGATE_away3d_core_sort_IEntitySorter \
virtual Void sort( ::away3d::core::traverse::EntityCollector collector) { return mDelegate->sort(collector);}  \
virtual Dynamic sort_dyn() { return mDelegate->sort_dyn();}  \


template<typename IMPL>
class IEntitySorter_delegate_ : public IEntitySorter_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEntitySorter_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_sort_IEntitySorter
};

} // end namespace away3d
} // end namespace core
} // end namespace sort

#endif /* INCLUDED_away3d_core_sort_IEntitySorter */ 
