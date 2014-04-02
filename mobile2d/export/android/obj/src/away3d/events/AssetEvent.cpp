#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_AssetEvent
#include <away3d/events/AssetEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace events{

Void AssetEvent_obj::__construct(::String type,::away3d::library::assets::IAsset asset,::String prevName)
{
HX_STACK_PUSH("AssetEvent::new","away3d/events/AssetEvent.hx",41);
{
	HX_STACK_LINE(42)
	super::__construct(type,null(),null());
	HX_STACK_LINE(43)
	this->_asset = asset;
	HX_STACK_LINE(44)
	if (((prevName != null()))){
		HX_STACK_LINE(45)
		this->_prevName = prevName;
	}
	else{
		HX_STACK_LINE(47)
		this->_prevName = (  (((this->_asset != null()))) ? ::String(this->_asset->get_name()) : ::String(null()) );
	}
}
;
	return null();
}

AssetEvent_obj::~AssetEvent_obj() { }

Dynamic AssetEvent_obj::__CreateEmpty() { return  new AssetEvent_obj; }
hx::ObjectPtr< AssetEvent_obj > AssetEvent_obj::__new(::String type,::away3d::library::assets::IAsset asset,::String prevName)
{  hx::ObjectPtr< AssetEvent_obj > result = new AssetEvent_obj();
	result->__construct(type,asset,prevName);
	return result;}

Dynamic AssetEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetEvent_obj > result = new AssetEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::events::Event AssetEvent_obj::clone( ){
	HX_STACK_PUSH("AssetEvent::clone","away3d/events/AssetEvent.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return ::away3d::events::AssetEvent_obj::__new(this->get_type(),this->get_asset(),this->get_assetPrevName());
}


::String AssetEvent_obj::get_assetPrevName( ){
	HX_STACK_PUSH("AssetEvent::get_assetPrevName","away3d/events/AssetEvent.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->_prevName;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetEvent_obj,get_assetPrevName,return )

::away3d::library::assets::IAsset AssetEvent_obj::get_asset( ){
	HX_STACK_PUSH("AssetEvent::get_asset","away3d/events/AssetEvent.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->_asset;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetEvent_obj,get_asset,return )

::String AssetEvent_obj::ASSET_COMPLETE;

::String AssetEvent_obj::ENTITY_COMPLETE;

::String AssetEvent_obj::SKYBOX_COMPLETE;

::String AssetEvent_obj::CAMERA_COMPLETE;

::String AssetEvent_obj::MESH_COMPLETE;

::String AssetEvent_obj::GEOMETRY_COMPLETE;

::String AssetEvent_obj::SKELETON_COMPLETE;

::String AssetEvent_obj::SKELETON_POSE_COMPLETE;

::String AssetEvent_obj::CONTAINER_COMPLETE;

::String AssetEvent_obj::TEXTURE_COMPLETE;

::String AssetEvent_obj::TEXTURE_PROJECTOR_COMPLETE;

::String AssetEvent_obj::MATERIAL_COMPLETE;

::String AssetEvent_obj::ANIMATOR_COMPLETE;

::String AssetEvent_obj::ANIMATION_SET_COMPLETE;

::String AssetEvent_obj::ANIMATION_STATE_COMPLETE;

::String AssetEvent_obj::ANIMATION_NODE_COMPLETE;

::String AssetEvent_obj::STATE_TRANSITION_COMPLETE;

::String AssetEvent_obj::SEGMENT_SET_COMPLETE;

::String AssetEvent_obj::LIGHT_COMPLETE;

::String AssetEvent_obj::LIGHTPICKER_COMPLETE;

::String AssetEvent_obj::EFFECTMETHOD_COMPLETE;

::String AssetEvent_obj::SHADOWMAPMETHOD_COMPLETE;

::String AssetEvent_obj::ASSET_RENAME;

::String AssetEvent_obj::ASSET_CONFLICT_RESOLVED;

::String AssetEvent_obj::TEXTURE_SIZE_ERROR;


AssetEvent_obj::AssetEvent_obj()
{
}

void AssetEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetEvent);
	HX_MARK_MEMBER_NAME(_prevName,"_prevName");
	HX_MARK_MEMBER_NAME(_asset,"_asset");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_prevName,"_prevName");
	HX_VISIT_MEMBER_NAME(_asset,"_asset");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AssetEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"asset") ) { return get_asset(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_asset") ) { return _asset; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_asset") ) { return get_asset_dyn(); }
		if (HX_FIELD_EQ(inName,"_prevName") ) { return _prevName; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ASSET_RENAME") ) { return ASSET_RENAME; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MESH_COMPLETE") ) { return MESH_COMPLETE; }
		if (HX_FIELD_EQ(inName,"assetPrevName") ) { return get_assetPrevName(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ASSET_COMPLETE") ) { return ASSET_COMPLETE; }
		if (HX_FIELD_EQ(inName,"LIGHT_COMPLETE") ) { return LIGHT_COMPLETE; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ENTITY_COMPLETE") ) { return ENTITY_COMPLETE; }
		if (HX_FIELD_EQ(inName,"SKYBOX_COMPLETE") ) { return SKYBOX_COMPLETE; }
		if (HX_FIELD_EQ(inName,"CAMERA_COMPLETE") ) { return CAMERA_COMPLETE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPLETE") ) { return TEXTURE_COMPLETE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GEOMETRY_COMPLETE") ) { return GEOMETRY_COMPLETE; }
		if (HX_FIELD_EQ(inName,"SKELETON_COMPLETE") ) { return SKELETON_COMPLETE; }
		if (HX_FIELD_EQ(inName,"MATERIAL_COMPLETE") ) { return MATERIAL_COMPLETE; }
		if (HX_FIELD_EQ(inName,"ANIMATOR_COMPLETE") ) { return ANIMATOR_COMPLETE; }
		if (HX_FIELD_EQ(inName,"get_assetPrevName") ) { return get_assetPrevName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CONTAINER_COMPLETE") ) { return CONTAINER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"TEXTURE_SIZE_ERROR") ) { return TEXTURE_SIZE_ERROR; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SEGMENT_SET_COMPLETE") ) { return SEGMENT_SET_COMPLETE; }
		if (HX_FIELD_EQ(inName,"LIGHTPICKER_COMPLETE") ) { return LIGHTPICKER_COMPLETE; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"EFFECTMETHOD_COMPLETE") ) { return EFFECTMETHOD_COMPLETE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SKELETON_POSE_COMPLETE") ) { return SKELETON_POSE_COMPLETE; }
		if (HX_FIELD_EQ(inName,"ANIMATION_SET_COMPLETE") ) { return ANIMATION_SET_COMPLETE; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ANIMATION_NODE_COMPLETE") ) { return ANIMATION_NODE_COMPLETE; }
		if (HX_FIELD_EQ(inName,"ASSET_CONFLICT_RESOLVED") ) { return ASSET_CONFLICT_RESOLVED; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ANIMATION_STATE_COMPLETE") ) { return ANIMATION_STATE_COMPLETE; }
		if (HX_FIELD_EQ(inName,"SHADOWMAPMETHOD_COMPLETE") ) { return SHADOWMAPMETHOD_COMPLETE; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"STATE_TRANSITION_COMPLETE") ) { return STATE_TRANSITION_COMPLETE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_PROJECTOR_COMPLETE") ) { return TEXTURE_PROJECTOR_COMPLETE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_asset") ) { _asset=inValue.Cast< ::away3d::library::assets::IAsset >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_prevName") ) { _prevName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ASSET_RENAME") ) { ASSET_RENAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MESH_COMPLETE") ) { MESH_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ASSET_COMPLETE") ) { ASSET_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LIGHT_COMPLETE") ) { LIGHT_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ENTITY_COMPLETE") ) { ENTITY_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SKYBOX_COMPLETE") ) { SKYBOX_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CAMERA_COMPLETE") ) { CAMERA_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TEXTURE_COMPLETE") ) { TEXTURE_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GEOMETRY_COMPLETE") ) { GEOMETRY_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SKELETON_COMPLETE") ) { SKELETON_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MATERIAL_COMPLETE") ) { MATERIAL_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANIMATOR_COMPLETE") ) { ANIMATOR_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CONTAINER_COMPLETE") ) { CONTAINER_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_SIZE_ERROR") ) { TEXTURE_SIZE_ERROR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SEGMENT_SET_COMPLETE") ) { SEGMENT_SET_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LIGHTPICKER_COMPLETE") ) { LIGHTPICKER_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"EFFECTMETHOD_COMPLETE") ) { EFFECTMETHOD_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"SKELETON_POSE_COMPLETE") ) { SKELETON_POSE_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANIMATION_SET_COMPLETE") ) { ANIMATION_SET_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ANIMATION_NODE_COMPLETE") ) { ANIMATION_NODE_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASSET_CONFLICT_RESOLVED") ) { ASSET_CONFLICT_RESOLVED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ANIMATION_STATE_COMPLETE") ) { ANIMATION_STATE_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADOWMAPMETHOD_COMPLETE") ) { SHADOWMAPMETHOD_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"STATE_TRANSITION_COMPLETE") ) { STATE_TRANSITION_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_PROJECTOR_COMPLETE") ) { TEXTURE_PROJECTOR_COMPLETE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_prevName"));
	outFields->push(HX_CSTRING("_asset"));
	outFields->push(HX_CSTRING("assetPrevName"));
	outFields->push(HX_CSTRING("asset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASSET_COMPLETE"),
	HX_CSTRING("ENTITY_COMPLETE"),
	HX_CSTRING("SKYBOX_COMPLETE"),
	HX_CSTRING("CAMERA_COMPLETE"),
	HX_CSTRING("MESH_COMPLETE"),
	HX_CSTRING("GEOMETRY_COMPLETE"),
	HX_CSTRING("SKELETON_COMPLETE"),
	HX_CSTRING("SKELETON_POSE_COMPLETE"),
	HX_CSTRING("CONTAINER_COMPLETE"),
	HX_CSTRING("TEXTURE_COMPLETE"),
	HX_CSTRING("TEXTURE_PROJECTOR_COMPLETE"),
	HX_CSTRING("MATERIAL_COMPLETE"),
	HX_CSTRING("ANIMATOR_COMPLETE"),
	HX_CSTRING("ANIMATION_SET_COMPLETE"),
	HX_CSTRING("ANIMATION_STATE_COMPLETE"),
	HX_CSTRING("ANIMATION_NODE_COMPLETE"),
	HX_CSTRING("STATE_TRANSITION_COMPLETE"),
	HX_CSTRING("SEGMENT_SET_COMPLETE"),
	HX_CSTRING("LIGHT_COMPLETE"),
	HX_CSTRING("LIGHTPICKER_COMPLETE"),
	HX_CSTRING("EFFECTMETHOD_COMPLETE"),
	HX_CSTRING("SHADOWMAPMETHOD_COMPLETE"),
	HX_CSTRING("ASSET_RENAME"),
	HX_CSTRING("ASSET_CONFLICT_RESOLVED"),
	HX_CSTRING("TEXTURE_SIZE_ERROR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_assetPrevName"),
	HX_CSTRING("get_asset"),
	HX_CSTRING("_prevName"),
	HX_CSTRING("_asset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ASSET_COMPLETE,"ASSET_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ENTITY_COMPLETE,"ENTITY_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::SKYBOX_COMPLETE,"SKYBOX_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::CAMERA_COMPLETE,"CAMERA_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::MESH_COMPLETE,"MESH_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::GEOMETRY_COMPLETE,"GEOMETRY_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::SKELETON_COMPLETE,"SKELETON_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::SKELETON_POSE_COMPLETE,"SKELETON_POSE_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::CONTAINER_COMPLETE,"CONTAINER_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::TEXTURE_COMPLETE,"TEXTURE_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::TEXTURE_PROJECTOR_COMPLETE,"TEXTURE_PROJECTOR_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::MATERIAL_COMPLETE,"MATERIAL_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ANIMATOR_COMPLETE,"ANIMATOR_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ANIMATION_SET_COMPLETE,"ANIMATION_SET_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ANIMATION_STATE_COMPLETE,"ANIMATION_STATE_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ANIMATION_NODE_COMPLETE,"ANIMATION_NODE_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::STATE_TRANSITION_COMPLETE,"STATE_TRANSITION_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::SEGMENT_SET_COMPLETE,"SEGMENT_SET_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::LIGHT_COMPLETE,"LIGHT_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::LIGHTPICKER_COMPLETE,"LIGHTPICKER_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::EFFECTMETHOD_COMPLETE,"EFFECTMETHOD_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::SHADOWMAPMETHOD_COMPLETE,"SHADOWMAPMETHOD_COMPLETE");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ASSET_RENAME,"ASSET_RENAME");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::ASSET_CONFLICT_RESOLVED,"ASSET_CONFLICT_RESOLVED");
	HX_MARK_MEMBER_NAME(AssetEvent_obj::TEXTURE_SIZE_ERROR,"TEXTURE_SIZE_ERROR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ASSET_COMPLETE,"ASSET_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ENTITY_COMPLETE,"ENTITY_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::SKYBOX_COMPLETE,"SKYBOX_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::CAMERA_COMPLETE,"CAMERA_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::MESH_COMPLETE,"MESH_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::GEOMETRY_COMPLETE,"GEOMETRY_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::SKELETON_COMPLETE,"SKELETON_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::SKELETON_POSE_COMPLETE,"SKELETON_POSE_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::CONTAINER_COMPLETE,"CONTAINER_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::TEXTURE_COMPLETE,"TEXTURE_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::TEXTURE_PROJECTOR_COMPLETE,"TEXTURE_PROJECTOR_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::MATERIAL_COMPLETE,"MATERIAL_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ANIMATOR_COMPLETE,"ANIMATOR_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ANIMATION_SET_COMPLETE,"ANIMATION_SET_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ANIMATION_STATE_COMPLETE,"ANIMATION_STATE_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ANIMATION_NODE_COMPLETE,"ANIMATION_NODE_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::STATE_TRANSITION_COMPLETE,"STATE_TRANSITION_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::SEGMENT_SET_COMPLETE,"SEGMENT_SET_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::LIGHT_COMPLETE,"LIGHT_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::LIGHTPICKER_COMPLETE,"LIGHTPICKER_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::EFFECTMETHOD_COMPLETE,"EFFECTMETHOD_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::SHADOWMAPMETHOD_COMPLETE,"SHADOWMAPMETHOD_COMPLETE");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ASSET_RENAME,"ASSET_RENAME");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::ASSET_CONFLICT_RESOLVED,"ASSET_CONFLICT_RESOLVED");
	HX_VISIT_MEMBER_NAME(AssetEvent_obj::TEXTURE_SIZE_ERROR,"TEXTURE_SIZE_ERROR");
};

Class AssetEvent_obj::__mClass;

void AssetEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.events.AssetEvent"), hx::TCanCast< AssetEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetEvent_obj::__boot()
{
	ASSET_COMPLETE= HX_CSTRING("assetComplete");
	ENTITY_COMPLETE= HX_CSTRING("entityComplete");
	SKYBOX_COMPLETE= HX_CSTRING("skyboxComplete");
	CAMERA_COMPLETE= HX_CSTRING("cameraComplete");
	MESH_COMPLETE= HX_CSTRING("meshComplete");
	GEOMETRY_COMPLETE= HX_CSTRING("geometryComplete");
	SKELETON_COMPLETE= HX_CSTRING("skeletonComplete");
	SKELETON_POSE_COMPLETE= HX_CSTRING("skeletonPoseComplete");
	CONTAINER_COMPLETE= HX_CSTRING("containerComplete");
	TEXTURE_COMPLETE= HX_CSTRING("textureComplete");
	TEXTURE_PROJECTOR_COMPLETE= HX_CSTRING("textureProjectorComplete");
	MATERIAL_COMPLETE= HX_CSTRING("materialComplete");
	ANIMATOR_COMPLETE= HX_CSTRING("animatorComplete");
	ANIMATION_SET_COMPLETE= HX_CSTRING("animationSetComplete");
	ANIMATION_STATE_COMPLETE= HX_CSTRING("animationStateComplete");
	ANIMATION_NODE_COMPLETE= HX_CSTRING("animationNodeComplete");
	STATE_TRANSITION_COMPLETE= HX_CSTRING("stateTransitionComplete");
	SEGMENT_SET_COMPLETE= HX_CSTRING("segmentSetComplete");
	LIGHT_COMPLETE= HX_CSTRING("lightComplete");
	LIGHTPICKER_COMPLETE= HX_CSTRING("lightPickerComplete");
	EFFECTMETHOD_COMPLETE= HX_CSTRING("effectMethodComplete");
	SHADOWMAPMETHOD_COMPLETE= HX_CSTRING("shadowMapMethodComplete");
	ASSET_RENAME= HX_CSTRING("assetRename");
	ASSET_CONFLICT_RESOLVED= HX_CSTRING("assetConflictResolved");
	TEXTURE_SIZE_ERROR= HX_CSTRING("textureSizeError");
}

} // end namespace away3d
} // end namespace events
