#ifndef INCLUDED_away3d_lights_LightBase
#define INCLUDED_away3d_lights_LightBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/Entity.h>
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
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES  LightBase_obj : public ::away3d::entities::Entity_obj{
	public:
		typedef ::away3d::entities::Entity_obj super;
		typedef LightBase_obj OBJ_;
		LightBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LightBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LightBase"); }

		virtual ::away3d::lights::shadowmaps::ShadowMapperBase set_shadowMapper( ::away3d::lights::shadowmaps::ShadowMapperBase value);
		Dynamic set_shadowMapper_dyn();

		virtual ::away3d::lights::shadowmaps::ShadowMapperBase get_shadowMapper( );
		Dynamic get_shadowMapper_dyn();

		virtual Void updateDiffuse( );
		Dynamic updateDiffuse_dyn();

		virtual Void updateSpecular( );
		Dynamic updateSpecular_dyn();

		virtual ::String get_assetType( );

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual ::flash::geom::Matrix3D getObjectProjectionMatrix( ::away3d::core::base::IRenderable renderable,::flash::geom::Matrix3D target);
		Dynamic getObjectProjectionMatrix_dyn();

		virtual Void updateAmbient( );
		Dynamic updateAmbient_dyn();

		virtual int set_ambientColor( int value);
		Dynamic set_ambientColor_dyn();

		virtual int get_ambientColor( );
		Dynamic get_ambientColor_dyn();

		virtual Float set_ambient( Float value);
		Dynamic set_ambient_dyn();

		virtual Float get_ambient( );
		Dynamic get_ambient_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Float set_diffuse( Float value);
		Dynamic set_diffuse_dyn();

		virtual Float get_diffuse( );
		Dynamic get_diffuse_dyn();

		virtual Float set_specular( Float value);
		Dynamic set_specular_dyn();

		virtual Float get_specular( );
		Dynamic get_specular_dyn();

		virtual ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper( );
		Dynamic createShadowMapper_dyn();

		virtual bool set_castsShadows( bool value);
		Dynamic set_castsShadows_dyn();

		virtual bool get_castsShadows( );
		Dynamic get_castsShadows_dyn();

		::away3d::lights::shadowmaps::ShadowMapperBase _shadowMapper;
		bool _castsShadows;
		Float _diffuseB;
		Float _diffuseG;
		Float _diffuseR;
		Float _diffuse;
		Float _specularB;
		Float _specularG;
		Float _specularR;
		Float _specular;
		Float _ambientB;
		Float _ambientG;
		Float _ambientR;
		Float _ambient;
		int _ambientColor;
		Float _colorB;
		Float _colorG;
		Float _colorR;
		int _color;
};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_LightBase */ 
