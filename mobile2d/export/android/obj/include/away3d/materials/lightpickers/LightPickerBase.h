#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#define INCLUDED_away3d_materials_lightpickers_LightPickerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace materials{
namespace lightpickers{


class HXCPP_CLASS_ATTRIBUTES  LightPickerBase_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef LightPickerBase_obj OBJ_;
		LightPickerBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LightPickerBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LightPickerBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< LightPickerBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< LightPickerBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("LightPickerBase"); }

		virtual Void updateProbeWeights( ::away3d::core::base::IRenderable renderable);
		Dynamic updateProbeWeights_dyn();

		virtual Void collectLights( ::away3d::core::base::IRenderable renderable,::away3d::core::traverse::EntityCollector entityCollector);
		Dynamic collectLights_dyn();

		virtual Array< ::Dynamic > get_allPickedLights( );
		Dynamic get_allPickedLights_dyn();

		virtual Array< Float > get_lightProbeWeights( );
		Dynamic get_lightProbeWeights_dyn();

		virtual Array< ::Dynamic > get_lightProbes( );
		Dynamic get_lightProbes_dyn();

		virtual Array< ::Dynamic > get_castingDirectionalLights( );
		Dynamic get_castingDirectionalLights_dyn();

		virtual Array< ::Dynamic > get_castingPointLights( );
		Dynamic get_castingPointLights_dyn();

		virtual Array< ::Dynamic > get_directionalLights( );
		Dynamic get_directionalLights_dyn();

		virtual Array< ::Dynamic > get_pointLights( );
		Dynamic get_pointLights_dyn();

		virtual int get_numLightProbes( );
		Dynamic get_numLightProbes_dyn();

		virtual int get_numCastingPointLights( );
		Dynamic get_numCastingPointLights_dyn();

		virtual int get_numCastingDirectionalLights( );
		Dynamic get_numCastingDirectionalLights_dyn();

		virtual int get_numPointLights( );
		Dynamic get_numPointLights_dyn();

		virtual int get_numDirectionalLights( );
		Dynamic get_numDirectionalLights_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		Array< Float > _lightProbeWeights;
		Array< ::Dynamic > _lightProbes;
		Array< ::Dynamic > _castingDirectionalLights;
		Array< ::Dynamic > _directionalLights;
		Array< ::Dynamic > _castingPointLights;
		Array< ::Dynamic > _pointLights;
		Array< ::Dynamic > _allPickedLights;
		int _numLightProbes;
		int _numCastingDirectionalLights;
		int _numCastingPointLights;
		int _numDirectionalLights;
		int _numPointLights;
};

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers

#endif /* INCLUDED_away3d_materials_lightpickers_LightPickerBase */ 
