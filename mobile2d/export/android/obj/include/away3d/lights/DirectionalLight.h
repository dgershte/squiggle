#ifndef INCLUDED_away3d_lights_DirectionalLight
#define INCLUDED_away3d_lights_DirectionalLight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/lights/LightBase.h>
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  DirectionalLight_obj : public ::away3d::lights::LightBase_obj{
	public:
		typedef ::away3d::lights::LightBase_obj super;
		typedef DirectionalLight_obj OBJ_;
		DirectionalLight_obj();
		Void __construct(hx::Null< Float >  __o_xDir,hx::Null< Float >  __o_yDir,hx::Null< Float >  __o_zDir);

	public:
		static hx::ObjectPtr< DirectionalLight_obj > __new(hx::Null< Float >  __o_xDir,hx::Null< Float >  __o_yDir,hx::Null< Float >  __o_zDir);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DirectionalLight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DirectionalLight"); }

		virtual ::flash::geom::Matrix3D getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target);

		virtual ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper( );

		virtual Void updateSceneTransform( );

		virtual Void updateBounds( );

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		virtual ::flash::geom::Vector3D set_direction( ::flash::geom::Vector3D value);
		Dynamic set_direction_dyn();

		virtual ::flash::geom::Vector3D get_direction( );
		Dynamic get_direction_dyn();

		virtual ::flash::geom::Vector3D get_sceneDirection( );
		Dynamic get_sceneDirection_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		Array< Float > _projAABBPoints;
		::flash::geom::Vector3D _sceneDirection;
		::flash::geom::Vector3D _tmpLookAt;
		::flash::geom::Vector3D _direction;
};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_DirectionalLight */ 
