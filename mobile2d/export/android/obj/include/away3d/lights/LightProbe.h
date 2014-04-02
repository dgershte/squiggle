#ifndef INCLUDED_away3d_lights_LightProbe
#define INCLUDED_away3d_lights_LightProbe

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
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  LightProbe_obj : public ::away3d::lights::LightBase_obj{
	public:
		typedef ::away3d::lights::LightBase_obj super;
		typedef LightProbe_obj OBJ_;
		LightProbe_obj();
		Void __construct(::away3d::textures::CubeTextureBase diffuseMap,::away3d::textures::CubeTextureBase specularMap);

	public:
		static hx::ObjectPtr< LightProbe_obj > __new(::away3d::textures::CubeTextureBase diffuseMap,::away3d::textures::CubeTextureBase specularMap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightProbe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightProbe"); }

		virtual ::flash::geom::Matrix3D getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target);

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		virtual Void updateBounds( );

		virtual ::away3d::textures::CubeTextureBase set_specularMap( ::away3d::textures::CubeTextureBase value);
		Dynamic set_specularMap_dyn();

		virtual ::away3d::textures::CubeTextureBase get_specularMap( );
		Dynamic get_specularMap_dyn();

		virtual ::away3d::textures::CubeTextureBase set_diffuseMap( ::away3d::textures::CubeTextureBase value);
		Dynamic set_diffuseMap_dyn();

		virtual ::away3d::textures::CubeTextureBase get_diffuseMap( );
		Dynamic get_diffuseMap_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		::away3d::textures::CubeTextureBase _specularMap;
		::away3d::textures::CubeTextureBase _diffuseMap;
};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_LightProbe */ 
