#ifndef INCLUDED_away3d_cameras_Camera3D
#define INCLUDED_away3d_cameras_Camera3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/Entity.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,LensEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace cameras{


class HXCPP_CLASS_ATTRIBUTES  Camera3D_obj : public ::away3d::entities::Entity_obj{
	public:
		typedef ::away3d::entities::Entity_obj super;
		typedef Camera3D_obj OBJ_;
		Camera3D_obj();
		Void __construct(::away3d::cameras::lenses::LensBase lens);

	public:
		static hx::ObjectPtr< Camera3D_obj > __new(::away3d::cameras::lenses::LensBase lens);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Camera3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Camera3D"); }

		virtual ::flash::geom::Vector3D project( ::flash::geom::Vector3D point3d);
		Dynamic project_dyn();

		virtual ::flash::geom::Vector3D getRay( Float nX,Float nY,Float sZ);
		Dynamic getRay_dyn();

		virtual ::flash::geom::Vector3D unproject( Float nX,Float nY,Float sZ);
		Dynamic unproject_dyn();

		virtual ::flash::geom::Matrix3D get_viewProjection( );
		Dynamic get_viewProjection_dyn();

		virtual ::away3d::cameras::lenses::LensBase set_lens( ::away3d::cameras::lenses::LensBase value);
		Dynamic set_lens_dyn();

		virtual ::away3d::cameras::lenses::LensBase get_lens( );
		Dynamic get_lens_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual Void updateBounds( );

		virtual Void invalidateSceneTransform( );

		virtual Void updateFrustum( );
		Dynamic updateFrustum_dyn();

		virtual Array< ::Dynamic > get_frustumPlanes( );
		Dynamic get_frustumPlanes_dyn();

		virtual Void onLensMatrixChanged( ::away3d::events::LensEvent event);
		Dynamic onLensMatrixChanged_dyn();

		virtual ::String get_assetType( );

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		bool _frustumPlanesDirty;
		Array< ::Dynamic > _frustumPlanes;
		::away3d::cameras::lenses::LensBase _lens;
		bool _viewProjectionDirty;
		::flash::geom::Matrix3D _viewProjection;
};

} // end namespace away3d
} // end namespace cameras

#endif /* INCLUDED_away3d_cameras_Camera3D */ 
