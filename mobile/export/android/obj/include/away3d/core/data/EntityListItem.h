#ifndef INCLUDED_away3d_core_data_EntityListItem
#define INCLUDED_away3d_core_data_EntityListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  EntityListItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EntityListItem_obj OBJ_;
		EntityListItem_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EntityListItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EntityListItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EntityListItem"); }

		::away3d::core::data::EntityListItem next;
		::away3d::entities::Entity entity;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_EntityListItem */ 
