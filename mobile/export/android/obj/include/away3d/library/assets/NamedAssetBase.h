#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#define INCLUDED_away3d_library_assets_NamedAssetBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  NamedAssetBase_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef NamedAssetBase_obj OBJ_;
		NamedAssetBase_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< NamedAssetBase_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NamedAssetBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NamedAssetBase"); }

		virtual Void updateFullPath( );
		Dynamic updateFullPath_dyn();

		virtual Void resetAssetPath( ::String name,::String ns,hx::Null< bool >  overrideOriginal);
		Dynamic resetAssetPath_dyn();

		virtual bool assetPathEquals( ::String name,::String ns);
		Dynamic assetPathEquals_dyn();

		virtual Dynamic get_assetFullPath( );
		Dynamic get_assetFullPath_dyn();

		virtual ::String get_assetNamespace( );
		Dynamic get_assetNamespace_dyn();

		virtual ::String set_name( ::String val);
		Dynamic set_name_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_id( ::String newID);
		Dynamic set_id_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

		virtual ::String get_originalName( );
		Dynamic get_originalName_dyn();

		Dynamic _full_path;
		::String _id;
		::String _name;
		::String _namespace;
		::String _originalName;
		static ::String DEFAULT_NAMESPACE;
};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_NamedAssetBase */ 
