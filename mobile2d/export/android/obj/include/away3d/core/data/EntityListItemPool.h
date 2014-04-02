#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#define INCLUDED_away3d_core_data_EntityListItemPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItemPool)
namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  EntityListItemPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EntityListItemPool_obj OBJ_;
		EntityListItemPool_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EntityListItemPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EntityListItemPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EntityListItemPool"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void freeAll( );
		Dynamic freeAll_dyn();

		virtual ::away3d::core::data::EntityListItem getItem( );
		Dynamic getItem_dyn();

		int _poolSize;
		int _index;
		Array< ::Dynamic > _pool;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_EntityListItemPool */ 
