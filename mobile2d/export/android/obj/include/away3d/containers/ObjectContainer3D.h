#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#define INCLUDED_away3d_containers_ObjectContainer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/Object3D.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  ObjectContainer3D_obj : public ::away3d::core::base::Object3D_obj{
	public:
		typedef ::away3d::core::base::Object3D_obj super;
		typedef ObjectContainer3D_obj OBJ_;
		ObjectContainer3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ObjectContainer3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ObjectContainer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< ObjectContainer3D_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< ObjectContainer3D_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ObjectContainer3D"); }

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void updateImplicitVisibility( );
		Dynamic updateImplicitVisibility_dyn();

		virtual bool dispatchEvent( ::flash::events::Event event);

		virtual Void rotate( ::flash::geom::Vector3D axis,Float angle);

		virtual ::away3d::core::base::Object3D clone( );

		virtual Void disposeWithChildren( );
		Dynamic disposeWithChildren_dyn();

		virtual Void dispose( );

		virtual Void translateLocal( ::flash::geom::Vector3D axis,Float distance);

		virtual Void lookAt( ::flash::geom::Vector3D target,::flash::geom::Vector3D upAxis);

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		virtual ::away3d::containers::ObjectContainer3D getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual Void removeChildInternal( int childIndex,::away3d::containers::ObjectContainer3D child);
		Dynamic removeChildInternal_dyn();

		virtual Void removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual Void removeChild( ::away3d::containers::ObjectContainer3D child);
		Dynamic removeChild_dyn();

		virtual Void addChildren( Array< ::Dynamic > childarray);
		Dynamic addChildren_dyn();

		virtual ::away3d::containers::ObjectContainer3D addChild( ::away3d::containers::ObjectContainer3D child);
		Dynamic addChild_dyn();

		virtual bool contains( ::away3d::containers::ObjectContainer3D child);
		Dynamic contains_dyn();

		virtual ::away3d::containers::ObjectContainer3D get_parent( );
		Dynamic get_parent_dyn();

		virtual ::flash::geom::Matrix3D get_inverseSceneTransform( );
		Dynamic get_inverseSceneTransform_dyn();

		virtual ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D value);
		Dynamic set_scene_dyn();

		virtual ::away3d::containers::Scene3D get_scene( );
		Dynamic get_scene_dyn();

		virtual ::flash::geom::Matrix3D get_sceneTransform( );
		Dynamic get_sceneTransform_dyn();

		virtual ::away3d::core::partition::Partition3D set_partition( ::away3d::core::partition::Partition3D value);
		Dynamic set_partition_dyn();

		virtual ::away3d::core::partition::Partition3D get_partition( );
		Dynamic get_partition_dyn();

		virtual Float get_maxZ( );
		Dynamic get_maxZ_dyn();

		virtual Float get_maxY( );
		Dynamic get_maxY_dyn();

		virtual Float get_maxX( );
		Dynamic get_maxX_dyn();

		virtual Float get_minZ( );
		Dynamic get_minZ_dyn();

		virtual Float get_minY( );
		Dynamic get_minY_dyn();

		virtual Float get_minX( );
		Dynamic get_minX_dyn();

		virtual ::flash::geom::Vector3D get_scenePosition( );
		Dynamic get_scenePosition_dyn();

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_mouseChildren( bool value);
		Dynamic set_mouseChildren_dyn();

		virtual bool get_mouseChildren( );
		Dynamic get_mouseChildren_dyn();

		virtual Void updateSceneTransform( );
		Dynamic updateSceneTransform_dyn();

		virtual Void invalidateSceneTransform( );
		Dynamic invalidateSceneTransform_dyn();

		virtual Void invalidateTransform( );

		virtual bool set_mouseEnabled( bool value);
		Dynamic set_mouseEnabled_dyn();

		virtual bool get_mouseEnabled( );
		Dynamic get_mouseEnabled_dyn();

		virtual Void updateMouseChildren( );
		Dynamic updateMouseChildren_dyn();

		virtual Void notifySceneChange( );
		Dynamic notifySceneChange_dyn();

		virtual Void notifySceneTransformChange( );
		Dynamic notifySceneTransformChange_dyn();

		virtual Void setParent( ::away3d::containers::ObjectContainer3D value);
		Dynamic setParent_dyn();

		virtual bool get_isVisible( );
		Dynamic get_isVisible_dyn();

		virtual ::away3d::core::partition::Partition3D set_implicitPartition( ::away3d::core::partition::Partition3D value);
		Dynamic set_implicitPartition_dyn();

		virtual ::away3d::core::partition::Partition3D get_implicitPartition( );
		Dynamic get_implicitPartition_dyn();

		virtual bool set_ignoreTransform( bool value);
		Dynamic set_ignoreTransform_dyn();

		virtual bool get_ignoreTransform( );
		Dynamic get_ignoreTransform_dyn();

		bool _ignoreTransform;
		bool _listenToSceneChanged;
		bool _listenToSceneTransformChanged;
		bool _implicitVisibility;
		bool _explicitVisibility;
		bool _scenePositionDirty;
		::flash::geom::Vector3D _scenePosition;
		bool _inverseSceneTransformDirty;
		::flash::geom::Matrix3D _inverseSceneTransform;
		::away3d::containers::Scene3D _oldScene;
		bool _mouseChildren;
		Array< ::Dynamic > _children;
		::away3d::events::Object3DEvent _scenechanged;
		::away3d::events::Object3DEvent _sceneTransformChanged;
		bool _mouseEnabled;
		::away3d::core::partition::Partition3D _implicitPartition;
		::away3d::core::partition::Partition3D _explicitPartition;
		bool _sceneTransformDirty;
		::flash::geom::Matrix3D _sceneTransform;
		::away3d::containers::ObjectContainer3D _parent;
		::away3d::containers::Scene3D _scene;
		bool _isRoot;
		bool _ancestorsAllowMouseEnabled;
};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_ObjectContainer3D */ 
