#ifndef INCLUDED_away3d_library_assets_AssetType
#define INCLUDED_away3d_library_assets_AssetType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,AssetType)
namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetType_obj OBJ_;
		AssetType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AssetType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AssetType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetType"); }

		static ::String ENTITY;
		static ::String SKYBOX;
		static ::String CAMERA;
		static ::String SEGMENT_SET;
		static ::String MESH;
		static ::String GEOMETRY;
		static ::String SKELETON;
		static ::String SKELETON_POSE;
		static ::String CONTAINER;
		static ::String TEXTURE;
		static ::String TEXTURE_PROJECTOR;
		static ::String MATERIAL;
		static ::String ANIMATION_SET;
		static ::String ANIMATION_STATE;
		static ::String ANIMATION_NODE;
		static ::String ANIMATOR;
		static ::String STATE_TRANSITION;
		static ::String LIGHT;
		static ::String LIGHT_PICKER;
		static ::String SHADOW_MAP_METHOD;
		static ::String EFFECTS_METHOD;
};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_AssetType */ 
