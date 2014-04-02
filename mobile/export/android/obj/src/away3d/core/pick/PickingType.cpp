#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingType
#include <away3d/core/pick/PickingType.h>
#endif
#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#include <away3d/core/pick/RaycastPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#include <away3d/core/pick/ShaderPicker.h>
#endif
namespace away3d{
namespace core{
namespace pick{

Void PickingType_obj::__construct()
{
	return null();
}

PickingType_obj::~PickingType_obj() { }

Dynamic PickingType_obj::__CreateEmpty() { return  new PickingType_obj; }
hx::ObjectPtr< PickingType_obj > PickingType_obj::__new()
{  hx::ObjectPtr< PickingType_obj > result = new PickingType_obj();
	result->__construct();
	return result;}

Dynamic PickingType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PickingType_obj > result = new PickingType_obj();
	result->__construct();
	return result;}

::away3d::core::pick::IPicker PickingType_obj::SHADER;

::away3d::core::pick::IPicker PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;

::away3d::core::pick::IPicker PickingType_obj::RAYCAST_BEST_HIT;


PickingType_obj::PickingType_obj()
{
}

void PickingType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PickingType);
	HX_MARK_END_CLASS();
}

void PickingType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic PickingType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SHADER") ) { return SHADER; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RAYCAST_BEST_HIT") ) { return RAYCAST_BEST_HIT; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RAYCAST_FIRST_ENCOUNTERED") ) { return RAYCAST_FIRST_ENCOUNTERED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PickingType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SHADER") ) { SHADER=inValue.Cast< ::away3d::core::pick::IPicker >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RAYCAST_BEST_HIT") ) { RAYCAST_BEST_HIT=inValue.Cast< ::away3d::core::pick::IPicker >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RAYCAST_FIRST_ENCOUNTERED") ) { RAYCAST_FIRST_ENCOUNTERED=inValue.Cast< ::away3d::core::pick::IPicker >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PickingType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SHADER"),
	HX_CSTRING("RAYCAST_FIRST_ENCOUNTERED"),
	HX_CSTRING("RAYCAST_BEST_HIT"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PickingType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PickingType_obj::SHADER,"SHADER");
	HX_MARK_MEMBER_NAME(PickingType_obj::RAYCAST_FIRST_ENCOUNTERED,"RAYCAST_FIRST_ENCOUNTERED");
	HX_MARK_MEMBER_NAME(PickingType_obj::RAYCAST_BEST_HIT,"RAYCAST_BEST_HIT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PickingType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PickingType_obj::SHADER,"SHADER");
	HX_VISIT_MEMBER_NAME(PickingType_obj::RAYCAST_FIRST_ENCOUNTERED,"RAYCAST_FIRST_ENCOUNTERED");
	HX_VISIT_MEMBER_NAME(PickingType_obj::RAYCAST_BEST_HIT,"RAYCAST_BEST_HIT");
};

Class PickingType_obj::__mClass;

void PickingType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.PickingType"), hx::TCanCast< PickingType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PickingType_obj::__boot()
{
	SHADER= ::away3d::core::pick::ShaderPicker_obj::__new();
	RAYCAST_FIRST_ENCOUNTERED= ::away3d::core::pick::RaycastPicker_obj::__new(false);
	RAYCAST_BEST_HIT= ::away3d::core::pick::RaycastPicker_obj::__new(true);
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
