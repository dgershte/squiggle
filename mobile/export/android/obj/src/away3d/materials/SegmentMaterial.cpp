#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SegmentMaterial
#include <away3d/materials/SegmentMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#include <away3d/materials/passes/SegmentPass.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{

Void SegmentMaterial_obj::__construct(hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("SegmentMaterial::new","away3d/materials/SegmentMaterial.hx",20);
Float thickness = __o_thickness.Default(1.25);
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->set_bothSides(true);
	HX_STACK_LINE(23)
	this->addPass(this->_screenPass = ::away3d::materials::passes::SegmentPass_obj::__new(thickness));
	HX_STACK_LINE(24)
	this->_screenPass->set_material(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

SegmentMaterial_obj::~SegmentMaterial_obj() { }

Dynamic SegmentMaterial_obj::__CreateEmpty() { return  new SegmentMaterial_obj; }
hx::ObjectPtr< SegmentMaterial_obj > SegmentMaterial_obj::__new(hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< SegmentMaterial_obj > result = new SegmentMaterial_obj();
	result->__construct(__o_thickness);
	return result;}

Dynamic SegmentMaterial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SegmentMaterial_obj > result = new SegmentMaterial_obj();
	result->__construct(inArgs[0]);
	return result;}


SegmentMaterial_obj::SegmentMaterial_obj()
{
}

void SegmentMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentMaterial);
	HX_MARK_MEMBER_NAME(_screenPass,"_screenPass");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_screenPass,"_screenPass");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SegmentMaterial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_screenPass") ) { return _screenPass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SegmentMaterial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_screenPass") ) { _screenPass=inValue.Cast< ::away3d::materials::passes::SegmentPass >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegmentMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_screenPass"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_screenPass"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegmentMaterial_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegmentMaterial_obj::__mClass,"__mClass");
};

Class SegmentMaterial_obj::__mClass;

void SegmentMaterial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.SegmentMaterial"), hx::TCanCast< SegmentMaterial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SegmentMaterial_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
