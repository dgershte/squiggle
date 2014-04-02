#ifndef INCLUDED_away3d_core_traverse_RaycastCollector
#define INCLUDED_away3d_core_traverse_RaycastCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/traverse/EntityCollector.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,RaycastCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES  RaycastCollector_obj : public ::away3d::core::traverse::EntityCollector_obj{
	public:
		typedef ::away3d::core::traverse::EntityCollector_obj super;
		typedef RaycastCollector_obj OBJ_;
		RaycastCollector_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RaycastCollector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RaycastCollector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RaycastCollector"); }

		virtual Void applyUnknownLight( ::away3d::lights::LightBase light);

		virtual Void applyRenderable( ::away3d::core::base::IRenderable renderable);

		virtual Void applySkyBox( ::away3d::core::base::IRenderable renderable);

		virtual bool enterNode( ::away3d::core::partition::NodeBase node);

		virtual ::flash::geom::Vector3D set_rayDirection( ::flash::geom::Vector3D value);
		Dynamic set_rayDirection_dyn();

		virtual ::flash::geom::Vector3D get_rayDirection( );
		Dynamic get_rayDirection_dyn();

		virtual ::flash::geom::Vector3D set_rayPosition( ::flash::geom::Vector3D value);
		Dynamic set_rayPosition_dyn();

		virtual ::flash::geom::Vector3D get_rayPosition( );
		Dynamic get_rayPosition_dyn();

		::flash::geom::Vector3D _rayDirection;
		::flash::geom::Vector3D _rayPosition;
};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_RaycastCollector */ 
