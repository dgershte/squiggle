#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
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
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace core{
namespace traverse{

Void PartitionTraverser_obj::__construct()
{
HX_STACK_PUSH("PartitionTraverser::new","away3d/core/traverse/PartitionTraverser.hx",33);
{
}
;
	return null();
}

PartitionTraverser_obj::~PartitionTraverser_obj() { }

Dynamic PartitionTraverser_obj::__CreateEmpty() { return  new PartitionTraverser_obj; }
hx::ObjectPtr< PartitionTraverser_obj > PartitionTraverser_obj::__new()
{  hx::ObjectPtr< PartitionTraverser_obj > result = new PartitionTraverser_obj();
	result->__construct();
	return result;}

Dynamic PartitionTraverser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartitionTraverser_obj > result = new PartitionTraverser_obj();
	result->__construct();
	return result;}

::flash::geom::Vector3D PartitionTraverser_obj::get_entryPoint( ){
	HX_STACK_PUSH("PartitionTraverser::get_entryPoint","away3d/core/traverse/PartitionTraverser.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_LINE(97)
	return this->_entryPoint;
}


HX_DEFINE_DYNAMIC_FUNC0(PartitionTraverser_obj,get_entryPoint,return )

Void PartitionTraverser_obj::applyEntity( ::away3d::entities::Entity entity){
{
		HX_STACK_PUSH("PartitionTraverser::applyEntity","away3d/core/traverse/PartitionTraverser.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entity,"entity");
		HX_STACK_LINE(87)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyEntity,(void))

Void PartitionTraverser_obj::applyLightProbe( ::away3d::lights::LightProbe light){
{
		HX_STACK_PUSH("PartitionTraverser::applyLightProbe","away3d/core/traverse/PartitionTraverser.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(79)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyLightProbe,(void))

Void PartitionTraverser_obj::applyPointLight( ::away3d::lights::PointLight light){
{
		HX_STACK_PUSH("PartitionTraverser::applyPointLight","away3d/core/traverse/PartitionTraverser.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(75)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyPointLight,(void))

Void PartitionTraverser_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
{
		HX_STACK_PUSH("PartitionTraverser::applyDirectionalLight","away3d/core/traverse/PartitionTraverser.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(71)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyDirectionalLight,(void))

Void PartitionTraverser_obj::applyUnknownLight( ::away3d::lights::LightBase light){
{
		HX_STACK_PUSH("PartitionTraverser::applyUnknownLight","away3d/core/traverse/PartitionTraverser.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(light,"light");
		HX_STACK_LINE(67)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyUnknownLight,(void))

Void PartitionTraverser_obj::applyRenderable( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("PartitionTraverser::applyRenderable","away3d/core/traverse/PartitionTraverser.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(59)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyRenderable,(void))

Void PartitionTraverser_obj::applySkyBox( ::away3d::core::base::IRenderable renderable){
{
		HX_STACK_PUSH("PartitionTraverser::applySkyBox","away3d/core/traverse/PartitionTraverser.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_LINE(51)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applySkyBox,(void))

bool PartitionTraverser_obj::enterNode( ::away3d::core::partition::NodeBase node){
	HX_STACK_PUSH("PartitionTraverser::enterNode","away3d/core/traverse/PartitionTraverser.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_LINE(42)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,enterNode,return )

int PartitionTraverser_obj::_collectionMark;


PartitionTraverser_obj::PartitionTraverser_obj()
{
}

void PartitionTraverser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartitionTraverser);
	HX_MARK_MEMBER_NAME(_entryPoint,"_entryPoint");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_END_CLASS();
}

void PartitionTraverser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_entryPoint,"_entryPoint");
	HX_VISIT_MEMBER_NAME(scene,"scene");
}

Dynamic PartitionTraverser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return enterNode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"entryPoint") ) { return get_entryPoint(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyEntity") ) { return applyEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return applySkyBox_dyn(); }
		if (HX_FIELD_EQ(inName,"_entryPoint") ) { return _entryPoint; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_entryPoint") ) { return get_entryPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { return _collectionMark; }
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return applyLightProbe_dyn(); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return applyPointLight_dyn(); }
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return applyRenderable_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return applyUnknownLight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return applyDirectionalLight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PartitionTraverser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::away3d::containers::Scene3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_entryPoint") ) { _entryPoint=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { _collectionMark=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PartitionTraverser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_entryPoint"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("entryPoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_collectionMark"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_entryPoint"),
	HX_CSTRING("applyEntity"),
	HX_CSTRING("applyLightProbe"),
	HX_CSTRING("applyPointLight"),
	HX_CSTRING("applyDirectionalLight"),
	HX_CSTRING("applyUnknownLight"),
	HX_CSTRING("applyRenderable"),
	HX_CSTRING("applySkyBox"),
	HX_CSTRING("enterNode"),
	HX_CSTRING("_entryPoint"),
	HX_CSTRING("scene"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PartitionTraverser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PartitionTraverser_obj::_collectionMark,"_collectionMark");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PartitionTraverser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PartitionTraverser_obj::_collectionMark,"_collectionMark");
};

Class PartitionTraverser_obj::__mClass;

void PartitionTraverser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.traverse.PartitionTraverser"), hx::TCanCast< PartitionTraverser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PartitionTraverser_obj::__boot()
{
	_collectionMark= (int)0;
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
