#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#define INCLUDED_away3d_core_pick_RaycastPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/pick/IPicker.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS3(away3d,core,pick,RaycastPicker)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,RaycastCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  RaycastPicker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RaycastPicker_obj OBJ_;
		RaycastPicker_obj();
		Void __construct(bool findClosestCollision);

	public:
		static hx::ObjectPtr< RaycastPicker_obj > __new(bool findClosestCollision);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RaycastPicker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::pick::IPicker_obj *()
			{ return new ::away3d::core::pick::IPicker_delegate_< RaycastPicker_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RaycastPicker"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void updateLocalPosition( ::away3d::core::pick::PickingCollisionVO pickingCollisionVO);
		Dynamic updateLocalPosition_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getPickingCollisionVO( );
		Dynamic getPickingCollisionVO_dyn();

		virtual int sortOnNearT( ::away3d::entities::Entity entity1,::away3d::entities::Entity entity2);
		Dynamic sortOnNearT_dyn();

		virtual bool isIgnored( ::away3d::entities::Entity entity);
		Dynamic isIgnored_dyn();

		virtual Void setIgnoreList( Dynamic entities);
		Dynamic setIgnoreList_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getEntityCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,Array< ::Dynamic > entities);
		Dynamic getEntityCollision_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene);
		Dynamic getSceneCollision_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getViewCollision( Float x,Float y,::away3d::containers::View3D view);
		Dynamic getViewCollision_dyn();

		virtual bool set_onlyMouseEnabled( bool value);
		Dynamic set_onlyMouseEnabled_dyn();

		virtual bool get_onlyMouseEnabled( );
		Dynamic get_onlyMouseEnabled_dyn();

		bool _hasCollisions;
		int _numEntities;
		Array< ::Dynamic > _entities;
		bool _onlyMouseEnabled;
		Dynamic _ignoredEntities;
		::away3d::core::traverse::RaycastCollector _raycastCollector;
		bool _findClosestCollision;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_RaycastPicker */ 
