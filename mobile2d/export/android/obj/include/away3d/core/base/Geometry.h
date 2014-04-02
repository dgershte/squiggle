#ifndef INCLUDED_away3d_core_base_Geometry
#define INCLUDED_away3d_core_base_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  Geometry_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Geometry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Geometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< Geometry_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< Geometry_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Geometry"); }

		virtual Void invalidateBounds( ::away3d::core::base::ISubGeometry subGeom);
		Dynamic invalidateBounds_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void convertToSeparateBuffers( );
		Dynamic convertToSeparateBuffers_dyn();

		virtual Void scaleUV( hx::Null< Float >  scaleU,hx::Null< Float >  scaleV);
		Dynamic scaleUV_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void scale( Float scale);
		Dynamic scale_dyn();

		virtual ::away3d::core::base::Geometry clone( );
		Dynamic clone_dyn();

		virtual Void removeSubGeometry( ::away3d::core::base::ISubGeometry subGeometry);
		Dynamic removeSubGeometry_dyn();

		virtual Void addSubGeometry( ::away3d::core::base::ISubGeometry subGeometry);
		Dynamic addSubGeometry_dyn();

		virtual Void applyTransformation( ::flash::geom::Matrix3D transform);
		Dynamic applyTransformation_dyn();

		virtual Array< ::Dynamic > get_subGeometries( );
		Dynamic get_subGeometries_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		Array< ::Dynamic > _subGeometries;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_Geometry */ 
