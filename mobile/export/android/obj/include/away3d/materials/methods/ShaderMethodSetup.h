#ifndef INCLUDED_away3d_materials_methods_ShaderMethodSetup
#define INCLUDED_away3d_materials_methods_ShaderMethodSetup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVOSet)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  ShaderMethodSetup_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef ShaderMethodSetup_obj OBJ_;
		ShaderMethodSetup_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShaderMethodSetup_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderMethodSetup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderMethodSetup"); }

		virtual ::away3d::materials::methods::MethodVOSet getMethodSetForMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic getMethodSetForMethod_dyn();

		virtual Void removeMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic removeMethod_dyn();

		virtual int get_numMethods( );
		Dynamic get_numMethods_dyn();

		virtual ::away3d::materials::methods::EffectMethodBase getMethodAt( int index);
		Dynamic getMethodAt_dyn();

		virtual Void addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index);
		Dynamic addMethodAt_dyn();

		virtual bool hasMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic hasMethod_dyn();

		virtual Void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		Dynamic addMethod_dyn();

		virtual Void clearListeners( ::away3d::materials::methods::ShadingMethodBase method);
		Dynamic clearListeners_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::away3d::materials::methods::ColorTransformMethod set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value);
		Dynamic set_colorTransformMethod_dyn();

		virtual ::away3d::materials::methods::ColorTransformMethod get_colorTransformMethod( );
		Dynamic get_colorTransformMethod_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		Dynamic set_specularMethod_dyn();

		virtual ::away3d::materials::methods::BasicSpecularMethod get_specularMethod( );
		Dynamic get_specularMethod_dyn();

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

		virtual ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		Dynamic set_normalMethod_dyn();

		virtual ::away3d::materials::methods::BasicNormalMethod get_normalMethod( );
		Dynamic get_normalMethod_dyn();

		virtual Void invalidateShaderProgram( );
		Dynamic invalidateShaderProgram_dyn();

		virtual Void onShaderInvalidated( ::away3d::events::ShadingMethodEvent event);
		Dynamic onShaderInvalidated_dyn();

		Array< ::Dynamic > _methods;
		::away3d::materials::methods::MethodVO _specularMethodVO;
		::away3d::materials::methods::BasicSpecularMethod _specularMethod;
		::away3d::materials::methods::MethodVO _diffuseMethodVO;
		::away3d::materials::methods::BasicDiffuseMethod _diffuseMethod;
		::away3d::materials::methods::MethodVO _shadowMethodVO;
		::away3d::materials::methods::ShadowMapMethodBase _shadowMethod;
		::away3d::materials::methods::MethodVO _ambientMethodVO;
		::away3d::materials::methods::BasicAmbientMethod _ambientMethod;
		::away3d::materials::methods::MethodVO _normalMethodVO;
		::away3d::materials::methods::BasicNormalMethod _normalMethod;
		::away3d::materials::methods::MethodVO _colorTransformMethodVO;
		::away3d::materials::methods::ColorTransformMethod _colorTransformMethod;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShaderMethodSetup */ 
