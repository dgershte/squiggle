#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace core{
namespace data{

Void RenderableListItem_obj::__construct()
{
HX_STACK_PUSH("RenderableListItem::new","away3d/core/data/RenderableListItem.hx",17);
{
}
;
	return null();
}

RenderableListItem_obj::~RenderableListItem_obj() { }

Dynamic RenderableListItem_obj::__CreateEmpty() { return  new RenderableListItem_obj; }
hx::ObjectPtr< RenderableListItem_obj > RenderableListItem_obj::__new()
{  hx::ObjectPtr< RenderableListItem_obj > result = new RenderableListItem_obj();
	result->__construct();
	return result;}

Dynamic RenderableListItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderableListItem_obj > result = new RenderableListItem_obj();
	result->__construct();
	return result;}


RenderableListItem_obj::RenderableListItem_obj()
{
}

void RenderableListItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableListItem);
	HX_MARK_MEMBER_NAME(cascaded,"cascaded");
	HX_MARK_MEMBER_NAME(renderSceneTransform,"renderSceneTransform");
	HX_MARK_MEMBER_NAME(zIndex,"zIndex");
	HX_MARK_MEMBER_NAME(renderOrderId,"renderOrderId");
	HX_MARK_MEMBER_NAME(materialId,"materialId");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void RenderableListItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cascaded,"cascaded");
	HX_VISIT_MEMBER_NAME(renderSceneTransform,"renderSceneTransform");
	HX_VISIT_MEMBER_NAME(zIndex,"zIndex");
	HX_VISIT_MEMBER_NAME(renderOrderId,"renderOrderId");
	HX_VISIT_MEMBER_NAME(materialId,"materialId");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic RenderableListItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zIndex") ) { return zIndex; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cascaded") ) { return cascaded; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"materialId") ) { return materialId; }
		if (HX_FIELD_EQ(inName,"renderable") ) { return renderable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderOrderId") ) { return renderOrderId; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"renderSceneTransform") ) { return renderSceneTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderableListItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::away3d::core::data::RenderableListItem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zIndex") ) { zIndex=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cascaded") ) { cascaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"materialId") ) { materialId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderOrderId") ) { renderOrderId=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"renderSceneTransform") ) { renderSceneTransform=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableListItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cascaded"));
	outFields->push(HX_CSTRING("renderSceneTransform"));
	outFields->push(HX_CSTRING("zIndex"));
	outFields->push(HX_CSTRING("renderOrderId"));
	outFields->push(HX_CSTRING("materialId"));
	outFields->push(HX_CSTRING("renderable"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cascaded"),
	HX_CSTRING("renderSceneTransform"),
	HX_CSTRING("zIndex"),
	HX_CSTRING("renderOrderId"),
	HX_CSTRING("materialId"),
	HX_CSTRING("renderable"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderableListItem_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderableListItem_obj::__mClass,"__mClass");
};

Class RenderableListItem_obj::__mClass;

void RenderableListItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.data.RenderableListItem"), hx::TCanCast< RenderableListItem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderableListItem_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace data
