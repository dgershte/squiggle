#ifndef INCLUDED_away3d_bounds_AxisAlignedBoundingBox
#define INCLUDED_away3d_bounds_AxisAlignedBoundingBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/bounds/BoundingVolumeBase.h>
HX_DECLARE_CLASS2(away3d,bounds,AxisAlignedBoundingBox)
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


class HXCPP_CLASS_ATTRIBUTES  AxisAlignedBoundingBox_obj : public ::away3d::bounds::BoundingVolumeBase_obj{
	public:
		typedef ::away3d::bounds::BoundingVolumeBase_obj super;
		typedef AxisAlignedBoundingBox_obj OBJ_;
		AxisAlignedBoundingBox_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AxisAlignedBoundingBox_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AxisAlignedBoundingBox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AxisAlignedBoundingBox"); }

		virtual Void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds,::flash::geom::Matrix3D matrix);

		virtual int classifyToPlane( ::away3d::core::math::Plane3D plane);

		virtual ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable( );

		virtual Void updateBoundingRenderable( );

		virtual ::flash::geom::Vector3D closestPointToPoint( ::flash::geom::Vector3D point,::flash::geom::Vector3D target);
		Dynamic closestPointToPoint_dyn();

		virtual Float get_halfExtentsZ( );
		Dynamic get_halfExtentsZ_dyn();

		virtual Float get_halfExtentsY( );
		Dynamic get_halfExtentsY_dyn();

		virtual Float get_halfExtentsX( );
		Dynamic get_halfExtentsX_dyn();

		virtual ::away3d::bounds::BoundingVolumeBase clone( );

		virtual Void fromExtremes( Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);

		virtual bool containsPoint( ::flash::geom::Vector3D position);

		virtual Float rayIntersection( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::flash::geom::Vector3D targetNormal);

		virtual bool isInFrustum( Array< ::Dynamic > planes,int numPlanes);

		virtual Void nullify( );

		Float _halfExtentsZ;
		Float _halfExtentsY;
		Float _halfExtentsX;
		Float _centerZ;
		Float _centerY;
		Float _centerX;
};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_AxisAlignedBoundingBox */ 
