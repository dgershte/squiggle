#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#define INCLUDED_away3d_core_data_RenderableListItemPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItemPool)
namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  RenderableListItemPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderableListItemPool_obj OBJ_;
		RenderableListItemPool_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RenderableListItemPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderableListItemPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderableListItemPool"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void freeAll( );
		Dynamic freeAll_dyn();

		virtual ::away3d::core::data::RenderableListItem getItem( );
		Dynamic getItem_dyn();

		int _poolSize;
		int _index;
		Array< ::Dynamic > _pool;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_RenderableListItemPool */ 
