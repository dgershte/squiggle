#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#define INCLUDED_away3d_materials_methods_BasicSpecularMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/LightingMethodBase.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  BasicSpecularMethod_obj : public ::away3d::materials::methods::LightingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::LightingMethodBase_obj super;
		typedef BasicSpecularMethod_obj OBJ_;
		BasicSpecularMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicSpecularMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicSpecularMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicSpecularMethod"); }

		virtual ::away3d::materials::compilation::ShaderRegisterElement set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement shadowReg);
		Dynamic set_shadowRegister_dyn();

		virtual Void updateSpecular( );
		Dynamic updateSpecular_dyn();

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual ::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);

		virtual ::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual Void cleanCompilationData( );

		virtual Void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		virtual ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		Dynamic set_texture_dyn();

		virtual ::away3d::textures::Texture2DBase get_texture( );
		Dynamic get_texture_dyn();

		virtual int set_specularColor( int value);
		Dynamic set_specularColor_dyn();

		virtual int get_specularColor( );
		Dynamic get_specularColor_dyn();

		virtual Float set_specular( Float value);
		Dynamic set_specular_dyn();

		virtual Float get_specular( );
		Dynamic get_specular_dyn();

		virtual Float set_gloss( Float value);
		Dynamic set_gloss_dyn();

		virtual Float get_gloss( );
		Dynamic get_gloss_dyn();

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);

		bool _isFirstLight;
		::away3d::materials::compilation::ShaderRegisterElement _shadowRegister;
		Float _specularB;
		Float _specularG;
		Float _specularR;
		int _specularColor;
		Float _specular;
		Float _gloss;
		::away3d::textures::Texture2DBase _texture;
		::away3d::materials::compilation::ShaderRegisterElement _specularDataRegister;
		::away3d::materials::compilation::ShaderRegisterElement _specularTexData;
		::away3d::materials::compilation::ShaderRegisterElement _specularTextureRegister;
		::away3d::materials::compilation::ShaderRegisterElement _totalLightColorReg;
		bool _useTexture;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicSpecularMethod */ 
