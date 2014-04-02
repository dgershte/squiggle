#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#include <away3d/core/render/DefaultRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace render{

Void DefaultRenderer_obj::__construct()
{
HX_STACK_PUSH("DefaultRenderer::new","away3d/core/render/DefaultRenderer.hx",40);
{
	HX_STACK_LINE(41)
	this->_skyboxProjection = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(42)
	super::__construct(null());
	HX_STACK_LINE(43)
	this->_depthRenderer = ::away3d::core::render::DepthRenderer_obj::__new(null(),null());
	HX_STACK_LINE(44)
	this->_distanceRenderer = ::away3d::core::render::DepthRenderer_obj::__new(false,true);
}
;
	return null();
}

DefaultRenderer_obj::~DefaultRenderer_obj() { }

Dynamic DefaultRenderer_obj::__CreateEmpty() { return  new DefaultRenderer_obj; }
hx::ObjectPtr< DefaultRenderer_obj > DefaultRenderer_obj::__new()
{  hx::ObjectPtr< DefaultRenderer_obj > result = new DefaultRenderer_obj();
	result->__construct();
	return result;}

Dynamic DefaultRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultRenderer_obj > result = new DefaultRenderer_obj();
	result->__construct();
	return result;}

Void DefaultRenderer_obj::dispose( ){
{
		HX_STACK_PUSH("DefaultRenderer::dispose","away3d/core/render/DefaultRenderer.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_LINE(190)
		this->super::dispose();
		HX_STACK_LINE(191)
		this->_depthRenderer->dispose();
		HX_STACK_LINE(192)
		this->_distanceRenderer->dispose();
		HX_STACK_LINE(193)
		this->_depthRenderer = null();
		HX_STACK_LINE(194)
		this->_distanceRenderer = null();
	}
return null();
}


Void DefaultRenderer_obj::drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::core::traverse::EntityCollector entityCollector,int which){
{
		HX_STACK_PUSH("DefaultRenderer::drawRenderables","away3d/core/render/DefaultRenderer.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(which,"which");
		HX_STACK_LINE(153)
		int numPasses;		HX_STACK_VAR(numPasses,"numPasses");
		HX_STACK_LINE(154)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(155)
		::away3d::cameras::Camera3D camera = entityCollector->get_camera();		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(156)
		::away3d::core::data::RenderableListItem item2;		HX_STACK_VAR(item2,"item2");
		HX_STACK_LINE(157)
		while(((item != null()))){
			HX_STACK_LINE(158)
			this->_activeMaterial = item->renderable->__Field(HX_CSTRING("get_material"),true)();
			HX_STACK_LINE(159)
			this->_activeMaterial->updateMaterial(this->_context);
			HX_STACK_LINE(160)
			numPasses = this->_activeMaterial->get_numPasses();
			HX_STACK_LINE(161)
			j = (int)0;
			HX_STACK_LINE(162)
			do{
				HX_STACK_LINE(163)
				item2 = item;
				HX_STACK_LINE(164)
				int rttMask = (  ((this->_activeMaterial->passRendersToTexture(j))) ? int((int)1) : int((int)2) );		HX_STACK_VAR(rttMask,"rttMask");
				HX_STACK_LINE(165)
				if (((((int(rttMask) & int(which))) != (int)0))){
					HX_STACK_LINE(166)
					this->_activeMaterial->activatePass(j,this->_stage3DProxy,camera);
					HX_STACK_LINE(167)
					do{
						HX_STACK_LINE(168)
						this->_activeMaterial->renderPass(j,item2->renderable,this->_stage3DProxy,entityCollector,this->_rttViewProjectionMatrix);
						HX_STACK_LINE(169)
						item2 = item2->next;
					}
while(((bool((item2 != null())) && bool((item2->renderable->__Field(HX_CSTRING("get_material"),true)() == this->_activeMaterial)))));
					HX_STACK_LINE(172)
					this->_activeMaterial->deactivatePass(j,this->_stage3DProxy);
				}
				else{
					HX_STACK_LINE(175)
					do{
						HX_STACK_LINE(176)
						item2 = item2->next;
					}
while(((bool((item2 != null())) && bool((item2->renderable->__Field(HX_CSTRING("get_material"),true)() == this->_activeMaterial)))));
				}
			}
while(((++(j) < numPasses)));
			HX_STACK_LINE(184)
			item = item2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DefaultRenderer_obj,drawRenderables,(void))

Void DefaultRenderer_obj::updateSkyBoxProjection( ::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("DefaultRenderer::updateSkyBoxProjection","away3d/core/render/DefaultRenderer.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(127)
		::flash::geom::Vector3D near = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(128)
		this->_skyboxProjection->copyFrom(this->_rttViewProjectionMatrix);
		HX_STACK_LINE(129)
		this->_skyboxProjection->copyRowTo((int)2,near);
		HX_STACK_LINE(130)
		::flash::geom::Vector3D camPos = camera->get_scenePosition();		HX_STACK_VAR(camPos,"camPos");
		HX_STACK_LINE(131)
		Float cx = near->x;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(132)
		Float cy = near->y;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(133)
		Float cz = near->z;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(134)
		Float cw = -((((((near->x * camPos->x) + (near->y * camPos->y)) + (near->z * camPos->z)) + ::Math_obj::sqrt((((cx * cx) + (cy * cy)) + (cz * cz))))));		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(135)
		Float signX = (  (((cx >= (int)0))) ? Float((int)1) : Float((int)-1) );		HX_STACK_VAR(signX,"signX");
		HX_STACK_LINE(136)
		Float signY = (  (((cy >= (int)0))) ? Float((int)1) : Float((int)-1) );		HX_STACK_VAR(signY,"signY");
		HX_STACK_LINE(137)
		::flash::geom::Vector3D p = ::flash::geom::Vector3D_obj::__new(signX,signY,(int)1,(int)1);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(138)
		::flash::geom::Matrix3D inverse = this->_skyboxProjection->clone();		HX_STACK_VAR(inverse,"inverse");
		HX_STACK_LINE(139)
		inverse->invert();
		HX_STACK_LINE(140)
		::flash::geom::Vector3D q = inverse->transformVector(p);		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(141)
		this->_skyboxProjection->copyRowTo((int)3,p);
		HX_STACK_LINE(142)
		Float a = (Float((((((q->x * p->x) + (q->y * p->y)) + (q->z * p->z)) + (q->w * p->w)))) / Float((((((cx * q->x) + (cy * q->y)) + (cz * q->z)) + (cw * q->w)))));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(143)
		this->_skyboxProjection->copyRowFrom((int)2,::flash::geom::Vector3D_obj::__new((cx * a),(cy * a),(cz * a),(cw * a)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,updateSkyBoxProjection,(void))

Void DefaultRenderer_obj::drawSkyBox( ::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("DefaultRenderer::drawSkyBox","away3d/core/render/DefaultRenderer.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(117)
		::away3d::core::base::IRenderable skyBox = entityCollector->get_skyBox();		HX_STACK_VAR(skyBox,"skyBox");
		HX_STACK_LINE(118)
		::away3d::materials::MaterialBase material = skyBox->__Field(HX_CSTRING("get_material"),true)();		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(119)
		::away3d::cameras::Camera3D camera = entityCollector->get_camera();		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(120)
		this->updateSkyBoxProjection(camera);
		HX_STACK_LINE(121)
		material->activatePass((int)0,this->_stage3DProxy,camera);
		HX_STACK_LINE(122)
		material->renderPass((int)0,skyBox,this->_stage3DProxy,entityCollector,this->_skyboxProjection);
		HX_STACK_LINE(123)
		material->deactivatePass((int)0,this->_stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,drawSkyBox,(void))

Void DefaultRenderer_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target){
{
		HX_STACK_PUSH("DefaultRenderer::draw","away3d/core/render/DefaultRenderer.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(94)
		this->_context->setBlendFactors((int)1,(int)0);
		HX_STACK_LINE(95)
		if (((entityCollector->get_skyBox() != null()))){
			HX_STACK_LINE(96)
			if (((this->_activeMaterial != null()))){
				HX_STACK_LINE(96)
				this->_activeMaterial->deactivate(this->_stage3DProxy);
			}
			HX_STACK_LINE(97)
			this->_activeMaterial = null();
			HX_STACK_LINE(98)
			this->_context->setDepthTest(false,(int)519);
			HX_STACK_LINE(99)
			this->drawSkyBox(entityCollector);
		}
		HX_STACK_LINE(102)
		this->_context->setDepthTest(true,(int)515);
		HX_STACK_LINE(103)
		int which = (  (((target != null()))) ? int(::away3d::core::render::DefaultRenderer_obj::SCREEN_PASSES) : int(::away3d::core::render::DefaultRenderer_obj::ALL_PASSES) );		HX_STACK_VAR(which,"which");
		HX_STACK_LINE(104)
		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),entityCollector,which);
		HX_STACK_LINE(105)
		this->drawRenderables(entityCollector->get_blendedRenderableHead(),entityCollector,which);
		HX_STACK_LINE(106)
		this->_context->setDepthTest(false,(int)515);
		HX_STACK_LINE(107)
		if (((this->_activeMaterial != null()))){
			HX_STACK_LINE(107)
			this->_activeMaterial->deactivate(this->_stage3DProxy);
		}
		HX_STACK_LINE(108)
		this->_activeMaterial = null();
	}
return null();
}


Void DefaultRenderer_obj::updateLights( ::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("DefaultRenderer::updateLights","away3d/core/render/DefaultRenderer.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(64)
		Array< ::Dynamic > dirLights = entityCollector->get_directionalLights();		HX_STACK_VAR(dirLights,"dirLights");
		HX_STACK_LINE(65)
		Array< ::Dynamic > pointLights = entityCollector->get_pointLights();		HX_STACK_VAR(pointLights,"pointLights");
		HX_STACK_LINE(66)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(67)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(68)
		::away3d::lights::LightBase light;		HX_STACK_VAR(light,"light");
		HX_STACK_LINE(69)
		::away3d::lights::shadowmaps::ShadowMapperBase shadowMapper;		HX_STACK_VAR(shadowMapper,"shadowMapper");
		HX_STACK_LINE(70)
		len = dirLights->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(71)
		i = (int)0;
		HX_STACK_LINE(72)
		while(((i < len))){
			HX_STACK_LINE(73)
			light = dirLights->__get(i).StaticCast< ::away3d::lights::DirectionalLight >();
			HX_STACK_LINE(74)
			shadowMapper = light->get_shadowMapper();
			HX_STACK_LINE(75)
			if (((bool(light->get_castsShadows()) && bool(((bool(shadowMapper->get_autoUpdateShadows()) || bool(shadowMapper->_shadowsInvalid))))))){
				HX_STACK_LINE(75)
				shadowMapper->renderDepthMap(this->_stage3DProxy,entityCollector,this->_depthRenderer);
			}
			HX_STACK_LINE(76)
			++(i);
		}
		HX_STACK_LINE(78)
		len = pointLights->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(79)
		i = (int)0;
		HX_STACK_LINE(80)
		while(((i < len))){
			HX_STACK_LINE(81)
			light = pointLights->__get(i).StaticCast< ::away3d::lights::PointLight >();
			HX_STACK_LINE(82)
			shadowMapper = light->get_shadowMapper();
			HX_STACK_LINE(83)
			if (((bool(light->get_castsShadows()) && bool(((bool(shadowMapper->get_autoUpdateShadows()) || bool(shadowMapper->_shadowsInvalid))))))){
				HX_STACK_LINE(83)
				shadowMapper->renderDepthMap(this->_stage3DProxy,entityCollector,this->_distanceRenderer);
			}
			HX_STACK_LINE(84)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultRenderer_obj,updateLights,(void))

Void DefaultRenderer_obj::executeRender( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  __o_surfaceSelector){
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("DefaultRenderer::executeRender","away3d/core/render/DefaultRenderer.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entityCollector,"entityCollector");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(scissorRect,"scissorRect");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(54)
		this->updateLights(entityCollector);
		HX_STACK_LINE(56)
		if (((target != null()))){
			HX_STACK_LINE(57)
			this->drawRenderables(entityCollector->get_opaqueRenderableHead(),entityCollector,::away3d::core::render::DefaultRenderer_obj::RTT_PASSES);
			HX_STACK_LINE(58)
			this->drawRenderables(entityCollector->get_blendedRenderableHead(),entityCollector,::away3d::core::render::DefaultRenderer_obj::RTT_PASSES);
		}
		HX_STACK_LINE(60)
		this->super::executeRender(entityCollector,target,scissorRect,surfaceSelector);
	}
return null();
}


::away3d::core::managers::Stage3DProxy DefaultRenderer_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
	HX_STACK_PUSH("DefaultRenderer::set_stage3DProxy","away3d/core/render/DefaultRenderer.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(48)
	this->super::set_stage3DProxy(value);
	HX_STACK_LINE(49)
	this->_distanceRenderer->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(value));
	HX_STACK_LINE(50)
	return value;
}


int DefaultRenderer_obj::RTT_PASSES;

int DefaultRenderer_obj::SCREEN_PASSES;

int DefaultRenderer_obj::ALL_PASSES;


DefaultRenderer_obj::DefaultRenderer_obj()
{
}

void DefaultRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultRenderer);
	HX_MARK_MEMBER_NAME(_skyboxProjection,"_skyboxProjection");
	HX_MARK_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_MARK_MEMBER_NAME(_distanceRenderer,"_distanceRenderer");
	HX_MARK_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skyboxProjection,"_skyboxProjection");
	HX_VISIT_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_VISIT_MEMBER_NAME(_distanceRenderer,"_distanceRenderer");
	HX_VISIT_MEMBER_NAME(_activeMaterial,"_activeMaterial");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RTT_PASSES") ) { return RTT_PASSES; }
		if (HX_FIELD_EQ(inName,"ALL_PASSES") ) { return ALL_PASSES; }
		if (HX_FIELD_EQ(inName,"drawSkyBox") ) { return drawSkyBox_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLights") ) { return updateLights_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_PASSES") ) { return SCREEN_PASSES; }
		if (HX_FIELD_EQ(inName,"executeRender") ) { return executeRender_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { return _depthRenderer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return drawRenderables_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { return _activeMaterial; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return set_stage3DProxy_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_skyboxProjection") ) { return _skyboxProjection; }
		if (HX_FIELD_EQ(inName,"_distanceRenderer") ) { return _distanceRenderer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateSkyBoxProjection") ) { return updateSkyBoxProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"RTT_PASSES") ) { RTT_PASSES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_PASSES") ) { ALL_PASSES=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_PASSES") ) { SCREEN_PASSES=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { _depthRenderer=inValue.Cast< ::away3d::core::render::DepthRenderer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeMaterial") ) { _activeMaterial=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_skyboxProjection") ) { _skyboxProjection=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distanceRenderer") ) { _distanceRenderer=inValue.Cast< ::away3d::core::render::DepthRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skyboxProjection"));
	outFields->push(HX_CSTRING("_depthRenderer"));
	outFields->push(HX_CSTRING("_distanceRenderer"));
	outFields->push(HX_CSTRING("_activeMaterial"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RTT_PASSES"),
	HX_CSTRING("SCREEN_PASSES"),
	HX_CSTRING("ALL_PASSES"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("drawRenderables"),
	HX_CSTRING("updateSkyBoxProjection"),
	HX_CSTRING("drawSkyBox"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateLights"),
	HX_CSTRING("executeRender"),
	HX_CSTRING("set_stage3DProxy"),
	HX_CSTRING("_skyboxProjection"),
	HX_CSTRING("_depthRenderer"),
	HX_CSTRING("_distanceRenderer"),
	HX_CSTRING("_activeMaterial"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::RTT_PASSES,"RTT_PASSES");
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::SCREEN_PASSES,"SCREEN_PASSES");
	HX_MARK_MEMBER_NAME(DefaultRenderer_obj::ALL_PASSES,"ALL_PASSES");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::RTT_PASSES,"RTT_PASSES");
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::SCREEN_PASSES,"SCREEN_PASSES");
	HX_VISIT_MEMBER_NAME(DefaultRenderer_obj::ALL_PASSES,"ALL_PASSES");
};

Class DefaultRenderer_obj::__mClass;

void DefaultRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.render.DefaultRenderer"), hx::TCanCast< DefaultRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DefaultRenderer_obj::__boot()
{
	RTT_PASSES= (int)1;
	SCREEN_PASSES= (int)2;
	ALL_PASSES= (int)3;
}

} // end namespace away3d
} // end namespace core
} // end namespace render
