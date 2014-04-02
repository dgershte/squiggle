#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#define INCLUDED_away3d_materials_methods_BasicAmbientMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/ShadingMethodBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  BasicAmbientMethod_obj : public ::away3d::materials::methods::ShadingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef BasicAmbientMethod_obj OBJ_;
		BasicAmbientMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicAmbientMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicAmbientMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicAmbientMethod"); }

		virtual Void setRenderState( ::away3d::materials::methods::MethodVO vo,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual Void updateAmbient( );
		Dynamic updateAmbient_dyn();

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);
		Dynamic getFragmentCode_dyn();

		virtual Void cleanCompilationData( );

		virtual Void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		virtual ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		Dynamic set_texture_dyn();

		virtual ::away3d::textures::Texture2DBase get_texture( );
		Dynamic get_texture_dyn();

		virtual int set_ambientColor( int value);
		Dynamic set_ambientColor_dyn();

		virtual int get_ambientColor( );
		Dynamic get_ambientColor_dyn();

		virtual Float set_ambient( Float value);
		Dynamic set_ambient_dyn();

		virtual Float get_ambient( );
		Dynamic get_ambient_dyn();

		virtual Void initConstants( ::away3d::materials::methods::MethodVO vo);

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);

		Float _lightAmbientB;
		Float _lightAmbientG;
		Float _lightAmbientR;
		Float _ambient;
		Float _ambientB;
		Float _ambientG;
		Float _ambientR;
		int _ambientColor;
		::away3d::materials::compilation::ShaderRegisterElement _ambientInputRegister;
		::away3d::textures::Texture2DBase _texture;
		bool _useTexture;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicAmbientMethod */ 
