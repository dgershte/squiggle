#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NullNode
#include <away3d/core/partition/NullNode.h>
#endif
namespace away3d{
namespace core{
namespace partition{

Void NullNode_obj::__construct()
{
HX_STACK_PUSH("NullNode::new","away3d/core/partition/NullNode.hx",13);
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

NullNode_obj::~NullNode_obj() { }

Dynamic NullNode_obj::__CreateEmpty() { return  new NullNode_obj; }
hx::ObjectPtr< NullNode_obj > NullNode_obj::__new()
{  hx::ObjectPtr< NullNode_obj > result = new NullNode_obj();
	result->__construct();
	return result;}

Dynamic NullNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NullNode_obj > result = new NullNode_obj();
	result->__construct();
	return result;}


NullNode_obj::NullNode_obj()
{
}

void NullNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NullNode);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NullNode_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic NullNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic NullNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NullNode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NullNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NullNode_obj::__mClass,"__mClass");
};

Class NullNode_obj::__mClass;

void NullNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.NullNode"), hx::TCanCast< NullNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NullNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
