#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#define INCLUDED_away3d_materials_SinglePassMaterialBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/MaterialBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SuperShaderPass)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  SinglePassMaterialBase_obj : public ::away3d::materials::MaterialBase_obj{
	public:
		typedef ::away3d::materials::MaterialBase_obj super;
		typedef SinglePassMaterialBase_obj OBJ_;
		SinglePassMaterialBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SinglePassMaterialBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SinglePassMaterialBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SinglePassMaterialBase"); }

		virtual ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);

		virtual Void updateMaterial( ::flash::display3D::Context3D context);

		virtual bool set_alphaBlending( bool value);
		Dynamic set_alphaBlending_dyn();

		virtual bool get_alphaBlending( );
		Dynamic get_alphaBlending_dyn();

		virtual int set_specularColor( int value);
		Dynamic set_specularColor_dyn();

		virtual int get_specularColor( );
		Dynamic get_specularColor_dyn();

		virtual int set_ambientColor( int value);
		Dynamic set_ambientColor_dyn();

		virtual int get_ambientColor( );
		Dynamic get_ambientColor_dyn();

		virtual Float set_specular( Float value);
		Dynamic set_specular_dyn();

		virtual Float get_specular( );
		Dynamic get_specular_dyn();

		virtual Float set_ambient( Float value);
		Dynamic set_ambient_dyn();

		virtual Float get_ambient( );
		Dynamic get_ambient_dyn();

		virtual Float set_gloss( Float value);
		Dynamic set_gloss_dyn();

		virtual Float get_gloss( );
		Dynamic get_gloss_dyn();

		virtual ::away3d::textures::Texture2DBase set_specularMap( ::away3d::textures::Texture2DBase value);
		Dynamic set_specularMap_dyn();

		virtual ::away3d::textures::Texture2DBase get_specularMap( );
		Dynamic get_specularMap_dyn();

		virtual ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		Dynamic set_normalMap_dyn();

		virtual ::away3d::textures::Texture2DBase get_normalMap( );
		Dynamic get_normalMap_dyn();

		virtual bool set_mipmap( bool value);

		virtual Void removeMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic removeMethod_dyn();

		virtual Void addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index);
		Dynamic addMethodAt_dyn();

		virtual ::away3d::materials::methods::EffectMethodBase getMethodAt( int index);
		Dynamic getMethodAt_dyn();

		virtual bool hasMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic hasMethod_dyn();

		virtual int get_numMethods( );
		Dynamic get_numMethods_dyn();

		virtual Void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic addMethod_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		Dynamic set_specularMethod_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod get_specularMethod( );
		Dynamic get_specularMethod_dyn();

		virtual ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		Dynamic set_normalMethod_dyn();

		virtual ::away3d::materials::methods::BasicNormalMethod get_normalMethod( );
		Dynamic get_normalMethod_dyn();

		virtual ::away3d::materials::methods::BasicDiffuseMethod set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value);
		Dynamic set_diffuseMethod_dyn();

		virtual ::away3d::materials::methods::BasicDiffuseMethod get_diffuseMethod( );
		Dynamic get_diffuseMethod_dyn();

		virtual ::away3d::materials::methods::ShadowMapMethodBase set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value);
		Dynamic set_shadowMethod_dyn();

		virtual ::away3d::materials::methods::ShadowMapMethodBase get_shadowMethod( );
		Dynamic get_shadowMethod_dyn();

		virtual ::away3d::materials::methods::BasicAmbientMethod set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value);
		Dynamic set_ambientMethod_dyn();

		virtual ::away3d::materials::methods::BasicAmbientMethod get_ambientMethod( );
		Dynamic get_ambientMethod_dyn();

		virtual ::flash::geom::ColorTransform set_colorTransform( ::flash::geom::ColorTransform value);
		Dynamic set_colorTransform_dyn();

		virtual ::flash::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual bool get_requiresBlending( );

		virtual int set_diffuseLightSources( int value);
		Dynamic set_diffuseLightSources_dyn();

		virtual int get_diffuseLightSources( );
		Dynamic get_diffuseLightSources_dyn();

		virtual int set_specularLightSources( int value);
		Dynamic set_specularLightSources_dyn();

		virtual int get_specularLightSources( );
		Dynamic get_specularLightSources_dyn();

		virtual Void activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,hx::Null< bool >  distanceBased);

		virtual int set_depthCompareMode( int value);

		virtual ::flash::display::BlendMode set_blendMode( ::flash::display::BlendMode value);

		virtual Float set_alphaThreshold( Float value);
		Dynamic set_alphaThreshold_dyn();

		virtual Float get_alphaThreshold( );
		Dynamic get_alphaThreshold_dyn();

		virtual bool set_enableLightFallOff( bool value);
		Dynamic set_enableLightFallOff_dyn();

		virtual bool get_enableLightFallOff( );
		Dynamic get_enableLightFallOff_dyn();

		bool _alphaBlending;
		::away3d::materials::passes::SuperShaderPass _screenPass;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_SinglePassMaterialBase */ 
