#ifndef INCLUDED_away3d_bounds_BoundingSphere
#define INCLUDED_away3d_bounds_BoundingSphere

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/bounds/BoundingVolumeBase.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingSphere)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
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


class HXCPP_CLASS_ATTRIBUTES  BoundingSphere_obj : public ::away3d::bounds::BoundingVolumeBase_obj{
	public:
		typedef ::away3d::bounds::BoundingVolumeBase_obj super;
		typedef BoundingSphere_obj OBJ_;
		BoundingSphere_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BoundingSphere_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BoundingSphere_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoundingSphere"); }

		virtual Void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix);

		virtual int classifyToPlane( ::away3d::core::math::Plane3D plane);

		virtual ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable( );

		virtual Void updateBoundingRenderable( );

		virtual bool containsPoint( ::flash::geom::Vector3D position);

		virtual Float rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal);

		virtual ::away3d::bounds::BoundingVolumeBase clone( );

		virtual Void fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);

		virtual Void fromSphere( ::flash::geom::Vector3D center,Float radius);

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);

		virtual Void nullify( );

		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		Float _centerZ;
		Float _centerY;
		Float _centerX;
		Float _radius;
};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_BoundingSphere */ 
