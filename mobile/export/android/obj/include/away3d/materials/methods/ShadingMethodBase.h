#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#define INCLUDED_away3d_materials_methods_ShadingMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
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
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  ShadingMethodBase_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef ShadingMethodBase_obj OBJ_;
		ShadingMethodBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShadingMethodBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShadingMethodBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShadingMethodBase"); }

		virtual Void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);
		Dynamic copyFrom_dyn();

		virtual Void invalidateShaderProgram( );
		Dynamic invalidateShaderProgram_dyn();

		virtual ::String getFormatStringForTexture( ::away3d::textures::TextureProxyBase texture);
		Dynamic getFormatStringForTexture_dyn();

		virtual ::String getTexCubeSampleCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement targetReg,::away3d::materials::compilation::ShaderRegisterElement inputReg,::away3d::textures::TextureProxyBase texture,::away3d::materials::compilation::ShaderRegisterElement uvReg);
		Dynamic getTexCubeSampleCode_dyn();

		virtual ::String getTex2DSampleCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterElement targetReg,::away3d::materials::compilation::ShaderRegisterElement inputReg,::away3d::textures::TextureProxyBase texture,::away3d::materials::compilation::ShaderRegisterElement uvReg,::String forceWrap);
		Dynamic getTex2DSampleCode_dyn();

		virtual Void deactivate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivate_dyn();

		virtual Void setRenderState( ::away3d::materials::methods::MethodVO vo,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);
		Dynamic setRenderState_dyn();

		virtual Void activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activate_dyn();

		virtual ::String getVertexCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache);
		Dynamic getVertexCode_dyn();

		virtual Void cleanCompilationData( );
		Dynamic cleanCompilationData_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::away3d::materials::methods::MethodVO createMethodVO( );
		Dynamic createMethodVO_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Array< ::Dynamic > get_passes( );
		Dynamic get_passes_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterData set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value);
		Dynamic set_sharedRegisters_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterData get_sharedRegisters( );
		Dynamic get_sharedRegisters_dyn();

		virtual Void initConstants( ::away3d::materials::methods::MethodVO vo);
		Dynamic initConstants_dyn();

		virtual Void initVO( ::away3d::materials::methods::MethodVO vo);
		Dynamic initVO_dyn();

		Array< ::Dynamic > _passes;
		::away3d::materials::compilation::ShaderRegisterData _sharedRegisters;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShadingMethodBase */ 
