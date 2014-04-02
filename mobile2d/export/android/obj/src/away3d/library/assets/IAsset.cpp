#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace library{
namespace assets{

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,dispose,)

HX_DEFINE_DYNAMIC_FUNC3(IAsset_obj,resetAssetPath,)

HX_DEFINE_DYNAMIC_FUNC2(IAsset_obj,assetPathEquals,return )

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,get_assetFullPath,return )

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,get_assetType,return )

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,get_assetNamespace,return )

HX_DEFINE_DYNAMIC_FUNC1(IAsset_obj,set_id,return )

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,get_id,return )

HX_DEFINE_DYNAMIC_FUNC1(IAsset_obj,set_name,return )

HX_DEFINE_DYNAMIC_FUNC0(IAsset_obj,get_name,return )


static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("resetAssetPath"),
	HX_CSTRING("assetPathEquals"),
	HX_CSTRING("get_assetFullPath"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("get_assetNamespace"),
	HX_CSTRING("set_id"),
	HX_CSTRING("get_id"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAsset_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAsset_obj::__mClass,"__mClass");
};

Class IAsset_obj::__mClass;

void IAsset_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.library.assets.IAsset"), hx::TCanCast< IAsset_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IAsset_obj::__boot()
{
}

} // end namespace away3d
} // end namespace library
} // end namespace assets
