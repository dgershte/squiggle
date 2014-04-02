#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
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
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
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
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace away3d{
namespace core{
namespace render{

Void DepthRenderer_obj::__construct(hx::Null< bool >  __o_renderBlended,hx::Null< bool >  __o_distanceBased)
{
HX_STACK_PUSH("DepthRenderer::new","away3d/core/render/DepthRenderer.hx",33);
bool renderBlended = __o_renderBlended.Default(false);
bool distanceBased = __o_distanceBased.Default(false);
{
	HX_STACK_LINE(34)
	super::__construct(null());
	HX_STACK_LINE(35)
	this->_renderBlended = renderBlended;
	HX_STACK_LINE(36)
	this->_distanceBased = distanceBased;
	HX_STACK_LINE(37)
	this->_backgroundR = (int)1;
	HX_STACK_LINE(38)
	this->_backgroundG = (int)1;
	HX_STACK_LINE(39)
	this->_backgroundB = (int)1;
}
;
	return null();
}

DepthRenderer_obj::~DepthRenderer_obj() { }

Dynamic DepthRenderer_obj::__CreateEmpty() { return  new DepthRenderer_obj; }
hx::ObjectPtr< DepthRenderer_obj > DepthRenderer_obj::__new(hx::Null< bool >  __o_renderBlended,hx::Null< bool >  __o_distanceBased)
{  hx::ObjectPtr< DepthRenderer_obj > result = new DepthRenderer_obj();
	result->__construct(__o_renderBlended,__o_distanceBased);
	return result;}

Dynamic DepthRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DepthRenderer_obj > result = new DepthRenderer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void DepthRenderer_obj::drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("DepthRenderer::drawRenderables","away3d/core/render/DepthRenderer.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(136)
		::away3d::cameras::Camera3D camera = entityCollector->get_camera();		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(137)
		::away3d::core::data::RenderableListItem item2;		HX_STACK_VAR(item2,"item2");
		HX_STACK_LINE(138)
		while(((item != null()))){
			HX_STACK_LINE(139)
			this->_activeMaterial = item->renderable->__Field(HX_CSTRING("get_material"),true)();
			HX_STACK_LINE(141)
			if (((bool(this->_disableColor) && bool(this->_activeMaterial->hasDepthAlphaThreshold())))){
				HX_STACK_LINE(142)
				item2 = item;
				HX_STACK_LINE(144)
				do{
					HX_STACK_LINE(144)
					item2 = item2->next;
				}
while(((bool((item2 != null())) && bool((item2->renderable->__Field(HX_CSTRING("get_material"),true)() == this->_activeMaterial)))));
			}
			else{
				HX_STACK_LINE(151)
				this->_activeMaterial->activateForDepth(this->_stage3DProxy,camera,this->_distanceBased);
				HX_STACK_LINE(152)
				item2 = item;
				HX_STACK_LINE(153)
				do{
					HX_STACK_LINE(154)
					this->_activeMaterial->renderDepth(item2->renderable,this->_stage3DProxy,camera,this->_rttViewProjectionMatrix);
					HX_STACK_LINE(155)
					item2 = item2->next;
				}
while(((bool((item2 != null())) && bool((item2->renderable->__Field(HX_CSTRING("get_material"),true)() == this->_activeMaterial)))));
				HX_STACK_LINE(158)
				this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
			}
			HX_STACK_LINE(161)
			item = item2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DepthRenderer_obj,drawRenderables,(void))

Void DepthRenderer_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target){
{
		HX_STACK_PUSH("DepthRenderer::draw","away3d/core/render/DepthRenderer.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(119)
		this->_context->setBlendFactors((int)1,(int)0);
		HX_STACK_LINE(120)
		this->_context->setDepthTest(true,(int)513);
		HX_STACK_LINE(121)
		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),entityCollector);
		HX_STACK_LINE(122)
		if ((this->_disableColor)){
			HX_STACK_LINE(122)
			this->_context->setColorMask(false,false,false,false);
		}
		HX_STACK_LINE(123)
		if ((this->_renderBlended)){
			HX_STACK_LINE(123)
			this->drawRenderables(entityCollector->get_blendedRenderableHead(),entityCollector);
		}
		HX_STACK_LINE(124)
		if (((this->_activeMaterial != null()))){
			HX_STACK_LINE(124)
			this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
		}
		HX_STACK_LINE(125)
		if ((this->_disableColor)){
			HX_STACK_LINE(125)
			this->_context->setColorMask(true,true,true,true);
		}
		HX_STACK_LINE(126)
		this->_activeMaterial = null();
	}
return null();
}


Void DepthRenderer_obj::drawCascadeRenderables( ::away3d::core::data::RenderableListItem item,::away3d::cameras::Camera3D camera,Array< ::Dynamic > cullPlanes){
{
		HX_STACK_PUSH("DepthRenderer::drawCascadeRenderables","away3d/core/render/DepthRenderer.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(cullPlanes,"cullPlanes");
		HX_STACK_LINE(88)
		::away3d::materials::MaterialBase material;		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(89)
		while(((item != null()))){
			HX_STACK_LINE(90)
			if ((item->cascaded)){
				HX_STACK_LINE(91)
				item = item->next;
				HX_STACK_LINE(92)
				continue;
			}
			HX_STACK_LINE(94)
			::away3d::core::base::IRenderable renderable = item->renderable;		HX_STACK_VAR(renderable,"renderable");
			HX_STACK_LINE(95)
			::away3d::entities::Entity entity = renderable->get_sourceEntity();		HX_STACK_VAR(entity,"entity");
			HX_STACK_LINE(98)
			if (((bool((cullPlanes == null())) || bool(entity->get_worldBounds()->isInFrustum(cullPlanes,(int)4))))){
				HX_STACK_LINE(99)
				material = renderable->__Field(HX_CSTRING("get_material"),true)();
				HX_STACK_LINE(100)
				if (((this->_activeMaterial != material))){
					HX_STACK_LINE(101)
					if (((this->_activeMaterial != null()))){
						HX_STACK_LINE(101)
						this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
					}
					HX_STACK_LINE(102)
					this->_activeMaterial = material;
					HX_STACK_LINE(103)
					this->_activeMaterial->activateForDepth(this->_stage3DProxy,camera,false);
				}
				HX_STACK_LINE(105)
				this->_activeMaterial->renderDepth(renderable,this->_stage3DProxy,camera,camera->get_viewProjection());
			}
			else{
				HX_STACK_LINE(108)
				item->cascaded = true;
			}
			HX_STACK_LINE(109)
			item = item->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DepthRenderer_obj,drawCascadeRenderables,(void))

Void DepthRenderer_obj::renderCascades( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,int numCascades,Array< ::Dynamic > scissorRects,Array< ::Dynamic > cameras){
{
		HX_STACK_PUSH("DepthRenderer::renderCascades","away3d/core/render/DepthRenderer.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(numCascades,"numCascades");
		HX_STACK_ARG(scissorRects,"scissorRects");
		HX_STACK_ARG(cameras,"cameras");
		HX_STACK_LINE(64)
		this->_renderTarget = target;
		HX_STACK_LINE(65)
		this->_renderTargetSurface = (int)0;
		HX_STACK_LINE(66)
		this->_renderableSorter->sort(entityCollector);
		HX_STACK_LINE(67)
		this->_stage3DProxy->setRenderTarget(target,true,(int)0);
		HX_STACK_LINE(68)
		this->_context->clear((int)1,(int)1,(int)1,(int)1,(int)1,(int)0,null());
		HX_STACK_LINE(69)
		this->_context->setBlendFactors((int)1,(int)0);
		HX_STACK_LINE(70)
		this->_context->setDepthTest(true,(int)513);
		HX_STACK_LINE(71)
		::away3d::core::data::RenderableListItem head = entityCollector->get_opaqueRenderableHead();		HX_STACK_VAR(head,"head");
		HX_STACK_LINE(72)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(73)
		int i = (numCascades - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(74)
		while(((i >= (int)0))){
			HX_STACK_LINE(75)
			this->_stage3DProxy->set_scissorRect(scissorRects->__get(i).StaticCast< ::flash::geom::Rectangle >());
			HX_STACK_LINE(76)
			this->drawCascadeRenderables(head,cameras->__get(i).StaticCast< ::away3d::cameras::Camera3D >(),(  ((first)) ? Array< ::Dynamic >(null()) : Array< ::Dynamic >(cameras->__get(i).StaticCast< ::away3d::cameras::Camera3D >()->get_frustumPlanes()) ));
			HX_STACK_LINE(77)
			first = false;
			HX_STACK_LINE(78)
			--(i);
		}
		HX_STACK_LINE(80)
		if (((this->_activeMaterial != null()))){
			HX_STACK_LINE(80)
			this->_activeMaterial->deactivateForDepth(this->_stage3DProxy);
		}
		HX_STACK_LINE(81)
		this->_activeMaterial = null();
		HX_STACK_LINE(83)
		this->_context->setDepthTest(false,(int)515);
		HX_STACK_LINE(84)
		this->_stage3DProxy->set_scissorRect(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DepthRenderer_obj,renderCascades,(void))

Float DepthRenderer_obj::set_backgroundB( Float value){
	HX_STACK_PUSH("DepthRenderer::set_backgroundB","away3d/core/render/DepthRenderer.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(59)
	return value;
}


Float DepthRenderer_obj::set_backgroundG( Float value){
	HX_STACK_PUSH("DepthRenderer::set_backgroundG","away3d/core/render/DepthRenderer.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(55)
	return value;
}


Float DepthRenderer_obj::set_backgroundR( Float value){
	HX_STACK_PUSH("DepthRenderer::set_backgroundR","away3d/core/render/DepthRenderer.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(51)
	return value;
}


bool DepthRenderer_obj::set_disableColor( bool value){
	HX_STACK_PUSH("DepthRenderer::set_disableColor","away3d/core/render/DepthRenderer.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(47)
	this->_disableColor = value;
	HX_STACK_LINE(48)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DepthRenderer_obj,set_disableColor,return )

bool DepthRenderer_obj::get_disableColor( ){
	HX_STACK_PUSH("DepthRenderer::get_disableColor","away3d/core/render/DepthRenderer.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->_disableColor;
}


HX_DEFINE_DYNAMIC_FUNC0(DepthRenderer_obj,get_disableColor,return )


DepthRenderer_obj::DepthRenderer_obj()
{
}

void DepthRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthRenderer);
	HX_MARK_MEMBER_NAME(_disableColor,"_disableColor");
	HX_MARK_MEMBER_NAME(_distanceBased,"_distanceBased");
	HX_MARK_MEMBER_NAME(_renderBlended,"_renderBlended");
	HX_MARK_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DepthRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_disableColor,"_disableColor");
	HX_VISIT_MEMBER_NAME(_distanceBased,"_distanceBased");
	HX_VISIT_MEMBER_NAME(_renderBlended,"_renderBlended");
	HX_VISIT_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DepthRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"disableColor") ) { return get_disableColor(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_disableColor") ) { return _disableColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderCascades") ) { return renderCascades_dyn(); }
		if (HX_FIELD_EQ(inName,"_distanceBased") ) { return _distanceBased; }
		if (HX_FIELD_EQ(inName,"_renderBlended") ) { return _renderBlended; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return drawRenderables_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundB") ) { return set_backgroundB_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundG") ) { return set_backgroundG_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundR") ) { return set_backgroundR_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { return _activeMaterial; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_disableColor") ) { return set_disableColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_disableColor") ) { return get_disableColor_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"drawCascadeRenderables") ) { return drawCascadeRenderables_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DepthRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"disableColor") ) { return set_disableColor(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_disableColor") ) { _disableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_distanceBased") ) { _distanceBased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderBlended") ) { _renderBlended=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { _activeMaterial=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_disableColor"));
	outFields->push(HX_CSTRING("_distanceBased"));
	outFields->push(HX_CSTRING("_renderBlended"));
	outFields->push(HX_CSTRING("_activeMaterial"));
	outFields->push(HX_CSTRING("disableColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawRenderables"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawCascadeRenderables"),
	HX_CSTRING("renderCascades"),
	HX_CSTRING("set_backgroundB"),
	HX_CSTRING("set_backgroundG"),
	HX_CSTRING("set_backgroundR"),
	HX_CSTRING("set_disableColor"),
	HX_CSTRING("get_disableColor"),
	HX_CSTRING("_disableColor"),
	HX_CSTRING("_distanceBased"),
	HX_CSTRING("_renderBlended"),
	HX_CSTRING("_activeMaterial"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DepthRenderer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DepthRenderer_obj::__mClass,"__mClass");
};

Class DepthRenderer_obj::__mClass;

void DepthRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.render.DepthRenderer"), hx::TCanCast< DepthRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DepthRenderer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace render
