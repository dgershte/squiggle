#ifndef INCLUDED_away3d_lights_PointLight
#define INCLUDED_away3d_lights_PointLight

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
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  PointLight_obj : public ::away3d::lights::LightBase_obj{
	public:
		typedef ::away3d::lights::LightBase_obj super;
		typedef PointLight_obj OBJ_;
		PointLight_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PointLight_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PointLight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PointLight"); }

		virtual ::flash::geom::Matrix3D getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target);

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		virtual Void updateBounds( );

		virtual Float set_fallOff( Float value);
		Dynamic set_fallOff_dyn();

		virtual Float get_fallOff( );
		Dynamic get_fallOff_dyn();

		virtual Float fallOffFactor( );
		Dynamic fallOffFactor_dyn();

		virtual Float set_radius( Float value);
		Dynamic set_radius_dyn();

		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper( );

		Float _fallOffFactor;
		Float _fallOff;
		Float _radius;
};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_PointLight */ 
