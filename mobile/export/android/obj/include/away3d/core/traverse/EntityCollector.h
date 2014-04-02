#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#define INCLUDED_away3d_core_traverse_EntityCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/traverse/PartitionTraverser.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItemPool)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItemPool)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
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


class HXCPP_CLASS_ATTRIBUTES  EntityCollector_obj : public ::away3d::core::traverse::PartitionTraverser_obj{
	public:
		typedef ::away3d::core::traverse::PartitionTraverser_obj super;
		typedef EntityCollector_obj OBJ_;
		EntityCollector_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EntityCollector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EntityCollector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EntityCollector"); }

		virtual Void cleanUp( );
		Dynamic cleanUp_dyn();

		virtual int get_numTriangles( );
		Dynamic get_numTriangles_dyn();

		virtual Void applyLightProbe( ::away3d::lights::LightProbe light);

		virtual Void applyPointLight( ::away3d::lights::PointLight light);

		virtual Void applyDirectionalLight( ::away3d::lights::DirectionalLight light);

		virtual Void applyUnknownLight( ::away3d::lights::LightBase light);

		virtual Void applyEntity( ::away3d::entities::Entity entity);

		virtual Void applyRenderable( ::away3d::core::base::IRenderable renderable);

		virtual Void applySkyBox( ::away3d::core::base::IRenderable renderable);

		virtual bool enterNode( ::away3d::core::partition::NodeBase node);

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Array< ::Dynamic > get_lightProbes( );
		Dynamic get_lightProbes_dyn();

		virtual Array< ::Dynamic > get_pointLights( );
		Dynamic get_pointLights_dyn();

		virtual Array< ::Dynamic > get_directionalLights( );
		Dynamic get_directionalLights_dyn();

		virtual Array< ::Dynamic > get_lights( );
		Dynamic get_lights_dyn();

		virtual ::away3d::core::data::EntityListItem get_entityHead( );
		Dynamic get_entityHead_dyn();

		virtual ::away3d::core::data::RenderableListItem set_blendedRenderableHead( ::away3d::core::data::RenderableListItem value);
		Dynamic set_blendedRenderableHead_dyn();

		virtual ::away3d::core::data::RenderableListItem get_blendedRenderableHead( );
		Dynamic get_blendedRenderableHead_dyn();

		virtual ::away3d::core::data::RenderableListItem set_opaqueRenderableHead( ::away3d::core::data::RenderableListItem value);
		Dynamic set_opaqueRenderableHead_dyn();

		virtual ::away3d::core::data::RenderableListItem get_opaqueRenderableHead( );
		Dynamic get_opaqueRenderableHead_dyn();

		virtual ::away3d::core::base::IRenderable get_skyBox( );
		Dynamic get_skyBox_dyn();

		virtual int get_numMouseEnableds( );
		Dynamic get_numMouseEnableds_dyn();

		virtual Array< ::Dynamic > set_cullPlanes( Array< ::Dynamic > value);
		Dynamic set_cullPlanes_dyn();

		virtual Array< ::Dynamic > get_cullPlanes( );
		Dynamic get_cullPlanes_dyn();

		virtual ::away3d::cameras::Camera3D set_camera( ::away3d::cameras::Camera3D value);
		Dynamic set_camera_dyn();

		virtual ::away3d::cameras::Camera3D get_camera( );
		Dynamic get_camera_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		int _numCullPlanes;
		Array< ::Dynamic > _cullPlanes;
		Array< ::Dynamic > _customCullPlanes;
		::flash::geom::Vector3D _cameraForward;
		int _numLightProbes;
		int _numPointLights;
		int _numDirectionalLights;
		::away3d::cameras::Camera3D _camera;
		int _numMouseEnableds;
		int _numTriangles;
		int _numLights;
		int _numEntities;
		Array< ::Dynamic > _lightProbes;
		Array< ::Dynamic > _pointLights;
		Array< ::Dynamic > _directionalLights;
		Array< ::Dynamic > _lights;
		::away3d::core::data::EntityListItemPool _entityListItemPool;
		::away3d::core::data::RenderableListItemPool _renderableListItemPool;
		::away3d::core::data::EntityListItem _entityHead;
		::away3d::core::data::RenderableListItem _blendedRenderableHead;
		::away3d::core::data::RenderableListItem _opaqueRenderableHead;
		::away3d::core::base::IRenderable _skyBox;
};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_EntityCollector */ 
