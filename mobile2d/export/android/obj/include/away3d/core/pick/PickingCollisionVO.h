#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#define INCLUDED_away3d_core_pick_PickingCollisionVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  PickingCollisionVO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PickingCollisionVO_obj OBJ_;
		PickingCollisionVO_obj();
		Void __construct(::away3d::entities::Entity entity);

	public:
		static hx::ObjectPtr< PickingCollisionVO_obj > __new(::away3d::entities::Entity entity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PickingCollisionVO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PickingCollisionVO"); }

		::away3d::core::base::IRenderable renderable;
		Float rayEntryDistance;
		bool rayOriginIsInsideBounds;
		::flash::geom::Vector3D rayDirection;
		::flash::geom::Vector3D rayPosition;
		::flash::geom::Vector3D localRayDirection;
		::flash::geom::Vector3D localRayPosition;
		int subGeometryIndex;
		int index;
		::flash::geom::Point uv;
		::flash::geom::Vector3D localNormal;
		::flash::geom::Vector3D localPosition;
		::away3d::entities::Entity entity;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_PickingCollisionVO */ 
