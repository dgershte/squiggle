#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#define INCLUDED_away3d_materials_methods_BasicNormalMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/methods/ShadingMethodBase.h>
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  BasicNormalMethod_obj : public ::away3d::materials::methods::ShadingMethodBase_obj{
	public:
		typedef ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef BasicNormalMethod_obj OBJ_;
		BasicNormalMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicNormalMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicNormalMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicNormalMethod"); }

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg);
		Dynamic getFragmentCode_dyn();

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual Void dispose( );

		virtual Void cleanCompilationData( );

		virtual ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		Dynamic set_normalMap_dyn();

		virtual ::away3d::textures::Texture2DBase get_normalMap( );
		Dynamic get_normalMap_dyn();

		virtual Void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		virtual bool get_hasOutput( );
		Dynamic get_hasOutput_dyn();

		virtual bool get_tangentSpace( );
		Dynamic get_tangentSpace_dyn();

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);

		::away3d::materials::compilation::ShaderRegisterElement _normalTextureRegister;
		bool _useTexture;
		::away3d::textures::Texture2DBase _texture;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicNormalMethod */ 
