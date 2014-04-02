#ifndef INCLUDED_away3d_bounds_NullBounds
#define INCLUDED_away3d_bounds_NullBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/bounds/BoundingVolumeBase.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,bounds,NullBounds)
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


class HXCPP_CLASS_ATTRIBUTES  NullBounds_obj : public ::away3d::bounds::BoundingVolumeBase_obj{
	public:
		typedef ::away3d::bounds::BoundingVolumeBase_obj super;
		typedef NullBounds_obj OBJ_;
		NullBounds_obj();
		Void __construct(hx::Null< bool >  __o_alwaysIn,::away3d::primitives::WireframePrimitiveBase renderable);

	public:
		static hx::ObjectPtr< NullBounds_obj > __new(hx::Null< bool >  __o_alwaysIn,::away3d::primitives::WireframePrimitiveBase renderable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NullBounds_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NullBounds"); }

		virtual Void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix);

		virtual int classifyToPlane( ::away3d::core::math::Plane3D plane);

		virtual Void fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);

		virtual Void fromSphere( ::flash::geom::Vector3D center,Float radius);

		virtual Void fromGeometry( ::away3d::core::base::Geometry geometry);

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);

		virtual ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable( );

		virtual ::away3d::bounds::BoundingVolumeBase clone( );

		::away3d::primitives::WireframePrimitiveBase _renderable;
		bool _alwaysIn;
};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_NullBounds */ 
