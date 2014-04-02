#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#define INCLUDED_away3d_materials_passes_MaterialPassBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS3(away3d,animators,data,AnimationRegisterCache)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  MaterialPassBase_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef MaterialPassBase_obj OBJ_;
		MaterialPassBase_obj();
		Void __construct(hx::Null< bool >  __o_renderToTexture);

	public:
		static hx::ObjectPtr< MaterialPassBase_obj > __new(hx::Null< bool >  __o_renderToTexture);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MaterialPassBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MaterialPassBase"); }

		virtual bool set_alphaPremultiplied( bool value);
		Dynamic set_alphaPremultiplied_dyn();

		virtual bool get_alphaPremultiplied( );
		Dynamic get_alphaPremultiplied_dyn();

		virtual Void updateLights( );
		Dynamic updateLights_dyn();

		virtual Void onLightsChange( ::flash::events::Event event);
		Dynamic onLightsChange_dyn();

		virtual ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);
		Dynamic set_lightPicker_dyn();

		virtual ::away3d::materials::lightpickers::LightPickerBase get_lightPicker( );
		Dynamic get_lightPicker_dyn();

		virtual Void updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic updateProgram_dyn();

		virtual Void invalidateShaderProgram( hx::Null< bool >  updateMaterial);
		Dynamic invalidateShaderProgram_dyn();

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivate_dyn();

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);
		Dynamic activate_dyn();

		virtual Void setBlendMode( ::flash::display::BlendMode value);
		Dynamic setBlendMode_dyn();

		virtual ::String getFragmentCode( ::String fragmentAnimatorCode);
		Dynamic getFragmentCode_dyn();

		virtual ::String getVertexCode( );
		Dynamic getVertexCode_dyn();

		virtual Void render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);
		Dynamic render_dyn();

		virtual Void updateAnimationState( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);
		Dynamic updateAnimationState_dyn();

		virtual bool get_needUVAnimation( );
		Dynamic get_needUVAnimation_dyn();

		virtual bool get_needFragmentAnimation( );
		Dynamic get_needFragmentAnimation_dyn();

		virtual int get_numUsedFragmentConstants( );
		Dynamic get_numUsedFragmentConstants_dyn();

		virtual int get_numUsedVaryings( );
		Dynamic get_numUsedVaryings_dyn();

		virtual int get_numUsedVertexConstants( );
		Dynamic get_numUsedVertexConstants_dyn();

		virtual int get_numUsedStreams( );
		Dynamic get_numUsedStreams_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual bool get_renderToTexture( );
		Dynamic get_renderToTexture_dyn();

		virtual ::away3d::animators::IAnimationSet set_animationSet( ::away3d::animators::IAnimationSet value);
		Dynamic set_animationSet_dyn();

		virtual ::away3d::animators::IAnimationSet get_animationSet( );
		Dynamic get_animationSet_dyn();

		virtual int set_depthCompareMode( int value);
		Dynamic set_depthCompareMode_dyn();

		virtual int get_depthCompareMode( );
		Dynamic get_depthCompareMode_dyn();

		virtual bool set_bothSides( bool value);
		Dynamic set_bothSides_dyn();

		virtual bool get_bothSides( );
		Dynamic get_bothSides_dyn();

		virtual bool set_repeat( bool value);
		Dynamic set_repeat_dyn();

		virtual bool get_repeat( );
		Dynamic get_repeat_dyn();

		virtual bool set_smooth( bool value);
		Dynamic set_smooth_dyn();

		virtual bool get_smooth( );
		Dynamic get_smooth_dyn();

		virtual bool set_mipmap( bool value);
		Dynamic set_mipmap_dyn();

		virtual bool get_mipmap( );
		Dynamic get_mipmap_dyn();

		virtual bool set_writeDepth( bool value);
		Dynamic set_writeDepth_dyn();

		virtual bool get_writeDepth( );
		Dynamic get_writeDepth_dyn();

		virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		Dynamic set_material_dyn();

		virtual ::away3d::materials::MaterialBase get_material( );
		Dynamic get_material_dyn();

		::away3d::animators::data::AnimationRegisterCache animationRegisterCache;
		bool _writeDepth;
		::String _UVSource;
		::String _UVTarget;
		bool _needUVAnimation;
		bool _needFragmentAnimation;
		bool _alphaPremultiplied;
		::flash::geom::Rectangle _oldRect;
		bool _oldDepthStencil;
		int _oldSurface;
		::flash::display3D::textures::TextureBase _oldTarget;
		bool _renderToTexture;
		int _defaultCulling;
		::String _shadedTarget;
		Array< ::String > _animationTargetRegisters;
		Array< ::String > _animatableAttributes;
		::away3d::materials::lightpickers::LightPickerBase _lightPicker;
		bool _bothSides;
		bool _enableBlending;
		int _blendFactorDest;
		int _blendFactorSource;
		int _depthCompareMode;
		bool _mipmap;
		bool _repeat;
		bool _smooth;
		int _numUsedVaryings;
		int _numUsedFragmentConstants;
		int _numUsedVertexConstants;
		int _numUsedTextures;
		int _numUsedStreams;
		Array< ::Dynamic > _context3Ds;
		Array< int > _program3Dids;
		Array< ::Dynamic > _program3Ds;
		::away3d::animators::IAnimationSet _animationSet;
		::away3d::materials::MaterialBase _material;
		static Array< int > _previousUsedStreams;
		static Array< int > _previousUsedTexs;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_MaterialPassBase */ 
