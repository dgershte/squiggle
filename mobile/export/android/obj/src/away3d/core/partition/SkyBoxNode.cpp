#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_SkyBoxNode
#include <away3d/core/partition/SkyBoxNode.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_SkyBox
#include <away3d/primitives/SkyBox.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace core{
namespace partition{

Void SkyBoxNode_obj::__construct(::away3d::primitives::SkyBox skyBox)
{
HX_STACK_PUSH("SkyBoxNode::new","away3d/core/partition/SkyBoxNode.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(skyBox);
	HX_STACK_LINE(21)
	this->_skyBox = skyBox;
}
;
	return null();
}

SkyBoxNode_obj::~SkyBoxNode_obj() { }

Dynamic SkyBoxNode_obj::__CreateEmpty() { return  new SkyBoxNode_obj; }
hx::ObjectPtr< SkyBoxNode_obj > SkyBoxNode_obj::__new(::away3d::primitives::SkyBox skyBox)
{  hx::ObjectPtr< SkyBoxNode_obj > result = new SkyBoxNode_obj();
	result->__construct(skyBox);
	return result;}

Dynamic SkyBoxNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkyBoxNode_obj > result = new SkyBoxNode_obj();
	result->__construct(inArgs[0]);
	return result;}

bool SkyBoxNode_obj::isInFrustum( Array< ::Dynamic > planes,int numPlanes){
	HX_STACK_PUSH("SkyBoxNode::isInFrustum","away3d/core/partition/SkyBoxNode.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(planes,"planes");
	HX_STACK_ARG(numPlanes,"numPlanes");
	HX_STACK_LINE(35)
	return true;
}


Void SkyBoxNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
{
		HX_STACK_PUSH("SkyBoxNode::acceptTraverser","away3d/core/partition/SkyBoxNode.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(traverser,"traverser");
		HX_STACK_LINE(28)
		if ((traverser->enterNode(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(30)
			this->super::acceptTraverser(traverser);
			HX_STACK_LINE(31)
			traverser->applySkyBox(this->_skyBox);
		}
	}
return null();
}



SkyBoxNode_obj::SkyBoxNode_obj()
{
}

void SkyBoxNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkyBoxNode);
	HX_MARK_MEMBER_NAME(_skyBox,"_skyBox");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkyBoxNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skyBox,"_skyBox");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkyBoxNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { return _skyBox; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return isInFrustum_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return acceptTraverser_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkyBoxNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { _skyBox=inValue.Cast< ::away3d::primitives::SkyBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkyBoxNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skyBox"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isInFrustum"),
	HX_CSTRING("acceptTraverser"),
	HX_CSTRING("_skyBox"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkyBoxNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkyBoxNode_obj::__mClass,"__mClass");
};

Class SkyBoxNode_obj::__mClass;

void SkyBoxNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.partition.SkyBoxNode"), hx::TCanCast< SkyBoxNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkyBoxNode_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
