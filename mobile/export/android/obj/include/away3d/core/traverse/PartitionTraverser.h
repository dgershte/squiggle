#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#define INCLUDED_away3d_core_traverse_PartitionTraverser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES  PartitionTraverser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartitionTraverser_obj OBJ_;
		PartitionTraverser_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PartitionTraverser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartitionTraverser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PartitionTraverser"); }

		virtual ::flash::geom::Vector3D get_entryPoint( );
		Dynamic get_entryPoint_dyn();

		virtual Void applyEntity( ::away3d::entities::Entity entity);
		Dynamic applyEntity_dyn();

		virtual Void applyLightProbe( ::away3d::lights::LightProbe light);
		Dynamic applyLightProbe_dyn();

		virtual Void applyPointLight( ::away3d::lights::PointLight light);
		Dynamic applyPointLight_dyn();

		virtual Void applyDirectionalLight( ::away3d::lights::DirectionalLight light);
		Dynamic applyDirectionalLight_dyn();

		virtual Void applyUnknownLight( ::away3d::lights::LightBase light);
		Dynamic applyUnknownLight_dyn();

		virtual Void applyRenderable( ::away3d::core::base::IRenderable renderable);
		Dynamic applyRenderable_dyn();

		virtual Void applySkyBox( ::away3d::core::base::IRenderable renderable);
		Dynamic applySkyBox_dyn();

		virtual bool enterNode( ::away3d::core::partition::NodeBase node);
		Dynamic enterNode_dyn();

		::flash::geom::Vector3D _entryPoint;
		::away3d::containers::Scene3D scene;
		static int _collectionMark;
};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_PartitionTraverser */ 
