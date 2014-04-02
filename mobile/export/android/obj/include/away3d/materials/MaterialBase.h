#ifndef INCLUDED_away3d_materials_MaterialBase
#define INCLUDED_away3d_materials_MaterialBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,passes,DepthMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,DistanceMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES  MaterialBase_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef MaterialBase_obj OBJ_;
		MaterialBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MaterialBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MaterialBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< MaterialBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< MaterialBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("MaterialBase"); }

		virtual Void onDepthPassChange( ::flash::events::Event event);
		Dynamic onDepthPassChange_dyn();

		virtual Void onDistancePassChange( ::flash::events::Event event);
		Dynamic onDistancePassChange_dyn();

		virtual Void onPassChange( ::flash::events::Event event);
		Dynamic onPassChange_dyn();

		virtual Void addPass( ::away3d::materials::passes::MaterialPassBase pass);
		Dynamic addPass_dyn();

		virtual Void clearPasses( );
		Dynamic clearPasses_dyn();

		virtual Void removePass( ::away3d::materials::passes::MaterialPassBase pass);
		Dynamic removePass_dyn();

		virtual Void invalidatePasses( ::away3d::materials::passes::MaterialPassBase triggerPass);
		Dynamic invalidatePasses_dyn();

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivate_dyn();

		virtual Void updateMaterial( ::flash::display3D::Context3D context);
		Dynamic updateMaterial_dyn();

		virtual Array< ::Dynamic > get_owners( );
		Dynamic get_owners_dyn();

		virtual Void removeOwner( ::away3d::core::base::IMaterialOwner owner);
		Dynamic removeOwner_dyn();

		virtual Void addOwner( ::away3d::core::base::IMaterialOwner owner);
		Dynamic addOwner_dyn();

		virtual Void renderPass( int index,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::traverse::EntityCollector entityCollector,::flash::geom::Matrix3D viewProjection);
		Dynamic renderPass_dyn();

		virtual Void deactivatePass( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivatePass_dyn();

		virtual Void activatePass( int index,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);
		Dynamic activatePass_dyn();

		virtual bool passRendersToTexture( int index);
		Dynamic passRendersToTexture_dyn();

		virtual Void renderDepth( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);
		Dynamic renderDepth_dyn();

		virtual Void deactivateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivateForDepth_dyn();

		virtual Void activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,hx::Null< bool >  distanceBased);
		Dynamic activateForDepth_dyn();

		virtual bool hasDepthAlphaThreshold( );
		Dynamic hasDepthAlphaThreshold_dyn();

		virtual int get_numPasses( );
		Dynamic get_numPasses_dyn();

		virtual int get_uniqueId( );
		Dynamic get_uniqueId_dyn();

		virtual bool get_requiresBlending( );
		Dynamic get_requiresBlending_dyn();

		virtual bool set_alphaPremultiplied( bool value);
		Dynamic set_alphaPremultiplied_dyn();

		virtual bool get_alphaPremultiplied( );
		Dynamic get_alphaPremultiplied_dyn();

		virtual ::flash::display::BlendMode set_blendMode( ::flash::display::BlendMode value);
		Dynamic set_blendMode_dyn();

		virtual ::flash::display::BlendMode get_blendMode( );
		Dynamic get_blendMode_dyn();

		virtual bool set_bothSides( bool value);
		Dynamic set_bothSides_dyn();

		virtual bool get_bothSides( );
		Dynamic get_bothSides_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual bool set_repeat( bool value);
		Dynamic set_repeat_dyn();

		virtual bool get_repeat( );
		Dynamic get_repeat_dyn();

		virtual int set_depthCompareMode( int value);
		Dynamic set_depthCompareMode_dyn();

		virtual int get_depthCompareMode( );
		Dynamic get_depthCompareMode_dyn();

		virtual bool set_smooth( bool value);
		Dynamic set_smooth_dyn();

		virtual bool get_smooth( );
		Dynamic get_smooth_dyn();

		virtual bool set_mipmap( bool value);
		Dynamic set_mipmap_dyn();

		virtual bool get_mipmap( );
		Dynamic get_mipmap_dyn();

		virtual ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);
		Dynamic set_lightPicker_dyn();

		virtual ::away3d::materials::lightpickers::LightPickerBase get_lightPicker( );
		Dynamic get_lightPicker_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		int _depthCompareMode;
		bool _distanceBasedDepthRender;
		::away3d::materials::lightpickers::LightPickerBase _lightPicker;
		::away3d::materials::passes::DistanceMapPass _distancePass;
		::away3d::materials::passes::DepthMapPass _depthPass;
		bool _repeat;
		bool _smooth;
		bool _mipmap;
		Array< ::Dynamic > _passes;
		int _numPasses;
		::flash::display::BlendMode _blendMode;
		bool _alphaPremultiplied;
		Array< ::Dynamic > _owners;
		::away3d::animators::IAnimationSet _animationSet;
		bool _bothSides;
		int _depthPassId;
		int _renderOrderId;
		int _uniqueId;
		::String _classification;
		Dynamic extra;
		static int MATERIAL_ID_COUNT;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_MaterialBase */ 
