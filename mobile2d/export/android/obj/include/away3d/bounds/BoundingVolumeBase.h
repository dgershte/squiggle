#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#define INCLUDED_away3d_bounds_BoundingVolumeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace bounds{


class HXCPP_CLASS_ATTRIBUTES  BoundingVolumeBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoundingVolumeBase_obj OBJ_;
		BoundingVolumeBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BoundingVolumeBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BoundingVolumeBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoundingVolumeBase"); }

		virtual Void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix);
		Dynamic transformFrom_dyn();

		virtual int classifyToPlane( ::away3d::core::math::Plane3D plane);
		Dynamic classifyToPlane_dyn();

		virtual ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable( );
		Dynamic createBoundingRenderable_dyn();

		virtual Void updateBoundingRenderable( );
		Dynamic updateBoundingRenderable_dyn();

		virtual Void updateAABBPoints( );
		Dynamic updateAABBPoints_dyn();

		virtual bool containsPoint( ::flash::geom::Vector3D position);
		Dynamic containsPoint_dyn();

		virtual Float rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal);
		Dynamic rayIntersection_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase clone( );
		Dynamic clone_dyn();

		virtual bool overlaps( ::away3d::bounds::BoundingVolumeBase bounds);
		Dynamic overlaps_dyn();

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);
		Dynamic isInFrustum_dyn();

		virtual Void fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);
		Dynamic fromExtremes_dyn();

		virtual Void fromSphere( ::flash::geom::Vector3D center,Float radius);
		Dynamic fromSphere_dyn();

		virtual Void fromGeometry( ::away3d::core::base::Geometry geometry);
		Dynamic fromGeometry_dyn();

		virtual Void fromVertices( Array< Float > vertices);
		Dynamic fromVertices_dyn();

		virtual Void disposeRenderable( );
		Dynamic disposeRenderable_dyn();

		virtual Void nullify( );
		Dynamic nullify_dyn();

		virtual ::away3d::primitives::WireframePrimitiveBase get_boundingRenderable( );
		Dynamic get_boundingRenderable_dyn();

		virtual Array< Float > get_aabbPoints( );
		Dynamic get_aabbPoints_dyn();

		virtual ::flash::geom::Vector3D get_min( );
		Dynamic get_min_dyn();

		virtual ::flash::geom::Vector3D get_max( );
		Dynamic get_max_dyn();

		::away3d::primitives::WireframePrimitiveBase _boundingRenderable;
		bool _aabbPointsDirty;
		Array< Float > _aabbPoints;
		::flash::geom::Vector3D _max;
		::flash::geom::Vector3D _min;
};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_BoundingVolumeBase */ 
