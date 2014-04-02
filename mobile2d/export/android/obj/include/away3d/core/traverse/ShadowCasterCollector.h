#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#define INCLUDED_away3d_core_traverse_ShadowCasterCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/traverse/EntityCollector.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,ShadowCasterCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES  ShadowCasterCollector_obj : public ::away3d::core::traverse::EntityCollector_obj{
	public:
		typedef ::away3d::core::traverse::EntityCollector_obj super;
		typedef ShadowCasterCollector_obj OBJ_;
		ShadowCasterCollector_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShadowCasterCollector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShadowCasterCollector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShadowCasterCollector"); }

		virtual Void applySkyBox( ::away3d::core::base::IRenderable renderable);

		virtual Void applyLightProbe( ::away3d::lights::LightProbe light);

		virtual Void applyPointLight( ::away3d::lights::PointLight light);

		virtual Void applyDirectionalLight( ::away3d::lights::DirectionalLight light);

		virtual Void applyUnknownLight( ::away3d::lights::LightBase light);

		virtual Void applyRenderable( ::away3d::core::base::IRenderable renderable);

};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_ShadowCasterCollector */ 
