#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
#endif
namespace away3d{
namespace library{
namespace assets{

Void AssetType_obj::__construct()
{
	return null();
}

AssetType_obj::~AssetType_obj() { }

Dynamic AssetType_obj::__CreateEmpty() { return  new AssetType_obj; }
hx::ObjectPtr< AssetType_obj > AssetType_obj::__new()
{  hx::ObjectPtr< AssetType_obj > result = new AssetType_obj();
	result->__construct();
	return result;}

Dynamic AssetType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetType_obj > result = new AssetType_obj();
	result->__construct();
	return result;}

::String AssetType_obj::ENTITY;

::String AssetType_obj::SKYBOX;

::String AssetType_obj::CAMERA;

::String AssetType_obj::SEGMENT_SET;

::String AssetType_obj::MESH;

::String AssetType_obj::GEOMETRY;

::String AssetType_obj::SKELETON;

::String AssetType_obj::SKELETON_POSE;

::String AssetType_obj::CONTAINER;

::String AssetType_obj::TEXTURE;

::String AssetType_obj::TEXTURE_PROJECTOR;

::String AssetType_obj::MATERIAL;

::String AssetType_obj::ANIMATION_SET;

::String AssetType_obj::ANIMATION_STATE;

::String AssetType_obj::ANIMATION_NODE;

::String AssetType_obj::ANIMATOR;

::String AssetType_obj::STATE_TRANSITION;

::String AssetType_obj::LIGHT;

::String AssetType_obj::LIGHT_PICKER;

::String AssetType_obj::SHADOW_MAP_METHOD;

::String AssetType_obj::EFFECTS_METHOD;


AssetType_obj::AssetType_obj()
{
}

void AssetType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetType);
	HX_MARK_END_CLASS();
}

void AssetType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"MESH") ) { return MESH; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { return LIGHT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ENTITY") ) { return ENTITY; }
		if (HX_FIELD_EQ(inName,"SKYBOX") ) { return SKYBOX; }
		if (HX_FIELD_EQ(inName,"CAMERA") ) { return CAMERA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GEOMETRY") ) { return GEOMETRY; }
		if (HX_FIELD_EQ(inName,"SKELETON") ) { return SKELETON; }
		if (HX_FIELD_EQ(inName,"MATERIAL") ) { return MATERIAL; }
		if (HX_FIELD_EQ(inName,"ANIMATOR") ) { return ANIMATOR; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CONTAINER") ) { return CONTAINER; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SEGMENT_SET") ) { return SEGMENT_SET; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LIGHT_PICKER") ) { return LIGHT_PICKER; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SKELETON_POSE") ) { return SKELETON_POSE; }
		if (HX_FIELD_EQ(inName,"ANIMATION_SET") ) { return ANIMATION_SET; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANIMATION_NODE") ) { return ANIMATION_NODE; }
		if (HX_FIELD_EQ(inName,"EFFECTS_METHOD") ) { return EFFECTS_METHOD; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ANIMATION_STATE") ) { return ANIMATION_STATE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STATE_TRANSITION") ) { return STATE_TRANSITION; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_PROJECTOR") ) { return TEXTURE_PROJECTOR; }
		if (HX_FIELD_EQ(inName,"SHADOW_MAP_METHOD") ) { return SHADOW_MAP_METHOD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"MESH") ) { MESH=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { LIGHT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ENTITY") ) { ENTITY=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SKYBOX") ) { SKYBOX=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CAMERA") ) { CAMERA=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GEOMETRY") ) { GEOMETRY=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SKELETON") ) { SKELETON=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MATERIAL") ) { MATERIAL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANIMATOR") ) { ANIMATOR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CONTAINER") ) { CONTAINER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SEGMENT_SET") ) { SEGMENT_SET=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LIGHT_PICKER") ) { LIGHT_PICKER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SKELETON_POSE") ) { SKELETON_POSE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ANIMATION_SET") ) { ANIMATION_SET=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANIMATION_NODE") ) { ANIMATION_NODE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EFFECTS_METHOD") ) { EFFECTS_METHOD=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ANIMATION_STATE") ) { ANIMATION_STATE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STATE_TRANSITION") ) { STATE_TRANSITION=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"TEXTURE_PROJECTOR") ) { TEXTURE_PROJECTOR=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADOW_MAP_METHOD") ) { SHADOW_MAP_METHOD=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ENTITY"),
	HX_CSTRING("SKYBOX"),
	HX_CSTRING("CAMERA"),
	HX_CSTRING("SEGMENT_SET"),
	HX_CSTRING("MESH"),
	HX_CSTRING("GEOMETRY"),
	HX_CSTRING("SKELETON"),
	HX_CSTRING("SKELETON_POSE"),
	HX_CSTRING("CONTAINER"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_PROJECTOR"),
	HX_CSTRING("MATERIAL"),
	HX_CSTRING("ANIMATION_SET"),
	HX_CSTRING("ANIMATION_STATE"),
	HX_CSTRING("ANIMATION_NODE"),
	HX_CSTRING("ANIMATOR"),
	HX_CSTRING("STATE_TRANSITION"),
	HX_CSTRING("LIGHT"),
	HX_CSTRING("LIGHT_PICKER"),
	HX_CSTRING("SHADOW_MAP_METHOD"),
	HX_CSTRING("EFFECTS_METHOD"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetType_obj::ENTITY,"ENTITY");
	HX_MARK_MEMBER_NAME(AssetType_obj::SKYBOX,"SKYBOX");
	HX_MARK_MEMBER_NAME(AssetType_obj::CAMERA,"CAMERA");
	HX_MARK_MEMBER_NAME(AssetType_obj::SEGMENT_SET,"SEGMENT_SET");
	HX_MARK_MEMBER_NAME(AssetType_obj::MESH,"MESH");
	HX_MARK_MEMBER_NAME(AssetType_obj::GEOMETRY,"GEOMETRY");
	HX_MARK_MEMBER_NAME(AssetType_obj::SKELETON,"SKELETON");
	HX_MARK_MEMBER_NAME(AssetType_obj::SKELETON_POSE,"SKELETON_POSE");
	HX_MARK_MEMBER_NAME(AssetType_obj::CONTAINER,"CONTAINER");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEXTURE_PROJECTOR,"TEXTURE_PROJECTOR");
	HX_MARK_MEMBER_NAME(AssetType_obj::MATERIAL,"MATERIAL");
	HX_MARK_MEMBER_NAME(AssetType_obj::ANIMATION_SET,"ANIMATION_SET");
	HX_MARK_MEMBER_NAME(AssetType_obj::ANIMATION_STATE,"ANIMATION_STATE");
	HX_MARK_MEMBER_NAME(AssetType_obj::ANIMATION_NODE,"ANIMATION_NODE");
	HX_MARK_MEMBER_NAME(AssetType_obj::ANIMATOR,"ANIMATOR");
	HX_MARK_MEMBER_NAME(AssetType_obj::STATE_TRANSITION,"STATE_TRANSITION");
	HX_MARK_MEMBER_NAME(AssetType_obj::LIGHT,"LIGHT");
	HX_MARK_MEMBER_NAME(AssetType_obj::LIGHT_PICKER,"LIGHT_PICKER");
	HX_MARK_MEMBER_NAME(AssetType_obj::SHADOW_MAP_METHOD,"SHADOW_MAP_METHOD");
	HX_MARK_MEMBER_NAME(AssetType_obj::EFFECTS_METHOD,"EFFECTS_METHOD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_obj::ENTITY,"ENTITY");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SKYBOX,"SKYBOX");
	HX_VISIT_MEMBER_NAME(AssetType_obj::CAMERA,"CAMERA");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SEGMENT_SET,"SEGMENT_SET");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MESH,"MESH");
	HX_VISIT_MEMBER_NAME(AssetType_obj::GEOMETRY,"GEOMETRY");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SKELETON,"SKELETON");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SKELETON_POSE,"SKELETON_POSE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::CONTAINER,"CONTAINER");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEXTURE_PROJECTOR,"TEXTURE_PROJECTOR");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MATERIAL,"MATERIAL");
	HX_VISIT_MEMBER_NAME(AssetType_obj::ANIMATION_SET,"ANIMATION_SET");
	HX_VISIT_MEMBER_NAME(AssetType_obj::ANIMATION_STATE,"ANIMATION_STATE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::ANIMATION_NODE,"ANIMATION_NODE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::ANIMATOR,"ANIMATOR");
	HX_VISIT_MEMBER_NAME(AssetType_obj::STATE_TRANSITION,"STATE_TRANSITION");
	HX_VISIT_MEMBER_NAME(AssetType_obj::LIGHT,"LIGHT");
	HX_VISIT_MEMBER_NAME(AssetType_obj::LIGHT_PICKER,"LIGHT_PICKER");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SHADOW_MAP_METHOD,"SHADOW_MAP_METHOD");
	HX_VISIT_MEMBER_NAME(AssetType_obj::EFFECTS_METHOD,"EFFECTS_METHOD");
};

Class AssetType_obj::__mClass;

void AssetType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.library.assets.AssetType"), hx::TCanCast< AssetType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetType_obj::__boot()
{
	ENTITY= HX_CSTRING("entity");
	SKYBOX= HX_CSTRING("skybox");
	CAMERA= HX_CSTRING("camera");
	SEGMENT_SET= HX_CSTRING("segmentSet");
	MESH= HX_CSTRING("mesh");
	GEOMETRY= HX_CSTRING("geometry");
	SKELETON= HX_CSTRING("skeleton");
	SKELETON_POSE= HX_CSTRING("skeletonPose");
	CONTAINER= HX_CSTRING("container");
	TEXTURE= HX_CSTRING("texture");
	TEXTURE_PROJECTOR= HX_CSTRING("textureProjector");
	MATERIAL= HX_CSTRING("material");
	ANIMATION_SET= HX_CSTRING("animationSet");
	ANIMATION_STATE= HX_CSTRING("animationState");
	ANIMATION_NODE= HX_CSTRING("animationNode");
	ANIMATOR= HX_CSTRING("animator");
	STATE_TRANSITION= HX_CSTRING("stateTransition");
	LIGHT= HX_CSTRING("light");
	LIGHT_PICKER= HX_CSTRING("lightPicker");
	SHADOW_MAP_METHOD= HX_CSTRING("shadowMapMethod");
	EFFECTS_METHOD= HX_CSTRING("effectsMethod");
}

} // end namespace away3d
} // end namespace library
} // end namespace assets
