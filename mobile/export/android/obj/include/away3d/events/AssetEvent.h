#ifndef INCLUDED_away3d_events_AssetEvent
#define INCLUDED_away3d_events_AssetEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS2(away3d,events,AssetEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  AssetEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef AssetEvent_obj OBJ_;
		AssetEvent_obj();
		Void __construct(::String type,::away3d::library::assets::IAsset asset,::String prevName);

	public:
		static hx::ObjectPtr< AssetEvent_obj > __new(::String type,::away3d::library::assets::IAsset asset,::String prevName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AssetEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetEvent"); }

		virtual ::flash::events::Event clone( );

		virtual ::String get_assetPrevName( );
		Dynamic get_assetPrevName_dyn();

		virtual ::away3d::library::assets::IAsset get_asset( );
		Dynamic get_asset_dyn();

		::String _prevName;
		::away3d::library::assets::IAsset _asset;
		static ::String ASSET_COMPLETE;
		static ::String ENTITY_COMPLETE;
		static ::String SKYBOX_COMPLETE;
		static ::String CAMERA_COMPLETE;
		static ::String MESH_COMPLETE;
		static ::String GEOMETRY_COMPLETE;
		static ::String SKELETON_COMPLETE;
		static ::String SKELETON_POSE_COMPLETE;
		static ::String CONTAINER_COMPLETE;
		static ::String TEXTURE_COMPLETE;
		static ::String TEXTURE_PROJECTOR_COMPLETE;
		static ::String MATERIAL_COMPLETE;
		static ::String ANIMATOR_COMPLETE;
		static ::String ANIMATION_SET_COMPLETE;
		static ::String ANIMATION_STATE_COMPLETE;
		static ::String ANIMATION_NODE_COMPLETE;
		static ::String STATE_TRANSITION_COMPLETE;
		static ::String SEGMENT_SET_COMPLETE;
		static ::String LIGHT_COMPLETE;
		static ::String LIGHTPICKER_COMPLETE;
		static ::String EFFECTMETHOD_COMPLETE;
		static ::String SHADOWMAPMETHOD_COMPLETE;
		static ::String ASSET_RENAME;
		static ::String ASSET_CONFLICT_RESOLVED;
		static ::String TEXTURE_SIZE_ERROR;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_AssetEvent */ 
