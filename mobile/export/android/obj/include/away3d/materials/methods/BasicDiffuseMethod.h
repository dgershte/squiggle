#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#define INCLUDED_away3d_materials_methods_BasicDiffuseMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/LightingMethodBase.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
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


class HXCPP_CLASS_ATTRIBUTES  BasicDiffuseMethod_obj : public ::away3d::materials::methods::LightingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::LightingMethodBase_obj super;
		typedef BasicDiffuseMethod_obj OBJ_;
		BasicDiffuseMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicDiffuseMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicDiffuseMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicDiffuseMethod"); }

		virtual ::away3d::materials::compilation::ShaderRegisterElement set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value);
		Dynamic set_shadowRegister_dyn();

		virtual Void updateDiffuse( );
		Dynamic updateDiffuse_dyn();

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual ::String applyShadow( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache);
		Dynamic applyShadow_dyn();

		virtual ::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);

		virtual ::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement lightDirReg,::away3d::materials::compilation::ShaderRegisterElement lightColReg,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual ::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache);

		virtual Void cleanCompilationData( );

		virtual Void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		virtual Void dispose( );

		virtual Float set_alphaThreshold( Float value);
		Dynamic set_alphaThreshold_dyn();

		virtual Float get_alphaThreshold( );
		Dynamic get_alphaThreshold_dyn();

		virtual ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		Dynamic set_texture_dyn();

		virtual ::away3d::textures::Texture2DBase get_texture( );
		Dynamic get_texture_dyn();

		virtual int set_diffuseColor( int diffuseColor);
		Dynamic set_diffuseColor_dyn();

		virtual int get_diffuseColor( );
		Dynamic get_diffuseColor_dyn();

		virtual Float set_diffuseAlpha( Float value);
		Dynamic set_diffuseAlpha_dyn();

		virtual Float get_diffuseAlpha( );
		Dynamic get_diffuseAlpha_dyn();

		virtual Void generateMip( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic generateMip_dyn();

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);

		virtual bool set_useAmbientTexture( bool value);
		Dynamic set_useAmbientTexture_dyn();

		virtual bool get_useAmbientTexture( );
		Dynamic get_useAmbientTexture_dyn();

		bool _isFirstLight;
		Float _alphaThreshold;
		::away3d::materials::compilation::ShaderRegisterElement _shadowRegister;
		Float _diffuseA;
		Float _diffuseB;
		Float _diffuseG;
		Float _diffuseR;
		int _diffuseColor;
		::away3d::textures::Texture2DBase _texture;
		::away3d::materials::compilation::ShaderRegisterElement _diffuseInputRegister;
		::away3d::materials::compilation::ShaderRegisterElement _totalLightColorReg;
		bool _useTexture;
		bool _useAmbientTexture;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicDiffuseMethod */ 
