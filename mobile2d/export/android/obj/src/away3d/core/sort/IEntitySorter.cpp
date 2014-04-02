#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
namespace away3d{
namespace core{
namespace sort{

HX_DEFINE_DYNAMIC_FUNC1(IEntitySorter_obj,sort,)


static ::String sMemberFields[] = {
	HX_CSTRING("sort"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEntitySorter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEntitySorter_obj::__mClass,"__mClass");
};

Class IEntitySorter_obj::__mClass;

void IEntitySorter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.sort.IEntitySorter"), hx::TCanCast< IEntitySorter_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IEntitySorter_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace sort
