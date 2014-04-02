#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#include <away3d/core/managers/Stage3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#include <away3d/core/managers/Touch3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#include <away3d/core/render/DefaultRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#include <away3d/core/render/Filter3DRenderer.h>
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
#ifndef INCLUDED_away3d_events_CameraEvent
#include <away3d/events/CameraEvent.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace away3d{
namespace containers{

Void View3D_obj::__construct(::away3d::containers::Scene3D scene,::away3d::cameras::Camera3D camera,::away3d::core::render::RendererBase renderer,hx::Null< bool >  __o_forceSoftware,::String __o_profile)
{
HX_STACK_PUSH("View3D::new","away3d/containers/View3D.hx",113);
bool forceSoftware = __o_forceSoftware.Default(false);
::String profile = __o_profile.Default(HX_CSTRING("baseline"));
{
	HX_STACK_LINE(114)
	this->_width = (int)0;
	HX_STACK_LINE(115)
	this->_height = (int)0;
	HX_STACK_LINE(116)
	this->_x = (int)0;
	HX_STACK_LINE(117)
	this->_y = (int)0;
	HX_STACK_LINE(118)
	this->_localPos = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(119)
	this->_globalPos = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(120)
	this->_time = (int)0;
	HX_STACK_LINE(121)
	this->_backgroundColor = (int)0;
	HX_STACK_LINE(122)
	this->_backgroundAlpha = (int)1;
	HX_STACK_LINE(123)
	this->_depthTextureInvalid = true;
	HX_STACK_LINE(124)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(125)
	this->_rightClickMenuEnabled = true;
	HX_STACK_LINE(126)
	this->_shareContext = false;
	HX_STACK_LINE(127)
	this->_scissorRectDirty = true;
	HX_STACK_LINE(128)
	this->_viewportDirty = true;
	HX_STACK_LINE(129)
	this->_layeredView = false;
	HX_STACK_LINE(130)
	super::__construct(null());
	HX_STACK_LINE(131)
	this->_profile = profile;
	HX_STACK_LINE(132)
	this->_scene = scene;
	HX_STACK_LINE(134)
	if (((this->_scene == null()))){
		HX_STACK_LINE(134)
		this->_scene = ::away3d::containers::Scene3D_obj::__new();
	}
	HX_STACK_LINE(137)
	this->_scene->addEventListener(::away3d::events::Scene3DEvent_obj::PARTITION_CHANGED,this->onScenePartitionChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(138)
	this->_camera = camera;
	HX_STACK_LINE(139)
	if (((this->_camera == null()))){
		HX_STACK_LINE(139)
		this->_camera = ::away3d::cameras::Camera3D_obj::__new(null());
	}
	HX_STACK_LINE(140)
	this->_renderer = renderer;
	HX_STACK_LINE(141)
	if (((this->_renderer == null()))){
		HX_STACK_LINE(141)
		this->_renderer = ::away3d::core::render::DefaultRenderer_obj::__new();
	}
	HX_STACK_LINE(142)
	this->_depthRenderer = ::away3d::core::render::DepthRenderer_obj::__new(null(),null());
	HX_STACK_LINE(143)
	this->_forceSoftware = forceSoftware;
	HX_STACK_LINE(145)
	this->_entityCollector = this->_renderer->createEntityCollector();
	HX_STACK_LINE(146)
	this->_entityCollector->set_camera(this->_camera);
	HX_STACK_LINE(147)
	this->_scissorRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(149)
	this->_mouse3DManager = ::away3d::core::managers::Mouse3DManager_obj::__new();
	HX_STACK_LINE(150)
	this->_mouse3DManager->enableMouseListeners(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(151)
	this->_touch3DManager = ::away3d::core::managers::Touch3DManager_obj::__new();
	HX_STACK_LINE(152)
	this->_touch3DManager->set_view(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(153)
	this->_touch3DManager->enableTouchListeners(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(154)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),false,(int)0,true);
	HX_STACK_LINE(155)
	this->addEventListener(::flash::events::Event_obj::ADDED,this->onAdded_dyn(),false,(int)0,true);
	HX_STACK_LINE(156)
	this->_camera->addEventListener(::away3d::events::CameraEvent_obj::LENS_CHANGED,this->onLensChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(157)
	this->_camera->set_partition(this->_scene->get_partition());
	HX_STACK_LINE(158)
	this->init();
}
;
	return null();
}

View3D_obj::~View3D_obj() { }

Dynamic View3D_obj::__CreateEmpty() { return  new View3D_obj; }
hx::ObjectPtr< View3D_obj > View3D_obj::__new(::away3d::containers::Scene3D scene,::away3d::cameras::Camera3D camera,::away3d::core::render::RendererBase renderer,hx::Null< bool >  __o_forceSoftware,::String __o_profile)
{  hx::ObjectPtr< View3D_obj > result = new View3D_obj();
	result->__construct(scene,camera,renderer,__o_forceSoftware,__o_profile);
	return result;}

Dynamic View3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< View3D_obj > result = new View3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void View3D_obj::onViewportUpdated( ::away3d::events::Stage3DEvent event){
{
		HX_STACK_PUSH("View3D::onViewportUpdated","away3d/containers/View3D.hx",870);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(871)
		if ((this->_shareContext)){
			HX_STACK_LINE(872)
			this->_scissorRect->x = (this->_globalPos->x - this->_stage3DProxy->get_x());
			HX_STACK_LINE(873)
			this->_scissorRect->y = (this->_globalPos->y - this->_stage3DProxy->get_y());
			HX_STACK_LINE(874)
			this->_scissorRectDirty = true;
		}
		HX_STACK_LINE(876)
		this->_viewportDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onViewportUpdated,(void))

Void View3D_obj::onAdded( ::flash::events::Event event){
{
		HX_STACK_PUSH("View3D::onAdded","away3d/containers/View3D.hx",864);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(865)
		this->_parentIsStage = (this->get_parent() == this->get_stage());
		HX_STACK_LINE(866)
		this->_globalPos = this->get_parent()->localToGlobal(this->_localPos);
		HX_STACK_LINE(867)
		this->_globalPosDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onAdded,(void))

Void View3D_obj::onAddedToStage( ::flash::events::Event event){
{
		HX_STACK_PUSH("View3D::onAddedToStage","away3d/containers/View3D.hx",843);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(844)
		if ((this->_addedToStage)){
			HX_STACK_LINE(844)
			return null();
		}
		HX_STACK_LINE(847)
		this->_addedToStage = true;
		HX_STACK_LINE(848)
		if (((this->_stage3DProxy == null()))){
			HX_STACK_LINE(849)
			this->_stage3DProxy = ::away3d::core::managers::Stage3DManager_obj::getInstance(this->get_stage())->getFreeStage3DProxy(this->_forceSoftware,this->_profile);
			HX_STACK_LINE(850)
			this->_stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED,this->onViewportUpdated_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(852)
		this->_globalPosDirty = true;
		HX_STACK_LINE(853)
		this->_rttBufferManager = ::away3d::core::managers::RTTBufferManager_obj::getInstance(this->_stage3DProxy);
		HX_STACK_LINE(854)
		this->_renderer->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(this->_stage3DProxy));
		HX_STACK_LINE(856)
		if (((this->_width == (int)0))){
			HX_STACK_LINE(856)
			this->set_width(this->get_stage()->get_stageWidth());
		}
		else{
			HX_STACK_LINE(857)
			this->_rttBufferManager->set_viewWidth(::Std_obj::_int(this->_width));
		}
		HX_STACK_LINE(858)
		if (((this->_height == (int)0))){
			HX_STACK_LINE(858)
			this->set_height(this->get_stage()->get_stageHeight());
		}
		else{
			HX_STACK_LINE(859)
			this->_rttBufferManager->set_viewHeight(::Std_obj::_int(this->_height));
		}
		HX_STACK_LINE(860)
		if ((this->_shareContext)){
			HX_STACK_LINE(860)
			this->_mouse3DManager->addViewLayer(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onAddedToStage,(void))

Void View3D_obj::onLensChanged( ::away3d::events::CameraEvent event){
{
		HX_STACK_PUSH("View3D::onLensChanged","away3d/containers/View3D.hx",834);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(835)
		this->_scissorRectDirty = true;
		HX_STACK_LINE(836)
		this->_viewportDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onLensChanged,(void))

::away3d::core::traverse::EntityCollector View3D_obj::get_entityCollector( ){
	HX_STACK_PUSH("View3D::get_entityCollector","away3d/containers/View3D.hx",830);
	HX_STACK_THIS(this);
	HX_STACK_LINE(830)
	return this->_entityCollector;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_entityCollector,return )

::away3d::core::pick::IPicker View3D_obj::set_touchPicker( ::away3d::core::pick::IPicker value){
	HX_STACK_PUSH("View3D::set_touchPicker","away3d/containers/View3D.hx",818);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(819)
	this->_touch3DManager->set_touchPicker(value);
	HX_STACK_LINE(820)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_touchPicker,return )

::away3d::core::pick::IPicker View3D_obj::get_touchPicker( ){
	HX_STACK_PUSH("View3D::get_touchPicker","away3d/containers/View3D.hx",814);
	HX_STACK_THIS(this);
	HX_STACK_LINE(814)
	return this->_touch3DManager->get_touchPicker();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_touchPicker,return )

::away3d::core::pick::IPicker View3D_obj::set_mousePicker( ::away3d::core::pick::IPicker value){
	HX_STACK_PUSH("View3D::set_mousePicker","away3d/containers/View3D.hx",809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(810)
	this->_mouse3DManager->set_mousePicker(value);
	HX_STACK_LINE(811)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_mousePicker,return )

::away3d::core::pick::IPicker View3D_obj::get_mousePicker( ){
	HX_STACK_PUSH("View3D::get_mousePicker","away3d/containers/View3D.hx",805);
	HX_STACK_THIS(this);
	HX_STACK_LINE(805)
	return this->_mouse3DManager->get_mousePicker();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_mousePicker,return )

::flash::geom::Vector3D View3D_obj::getRay( Float sX,Float sY,Float sZ){
	HX_STACK_PUSH("View3D::getRay","away3d/containers/View3D.hx",801);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sX,"sX");
	HX_STACK_ARG(sY,"sY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(801)
	return this->_camera->getRay((Float((((sX * (int)2) - this->_width))) / Float(this->_width)),(Float((((sY * (int)2) - this->_height))) / Float(this->_height)),sZ);
}


HX_DEFINE_DYNAMIC_FUNC3(View3D_obj,getRay,return )

::flash::geom::Vector3D View3D_obj::unproject( Float sX,Float sY,Float sZ){
	HX_STACK_PUSH("View3D::unproject","away3d/containers/View3D.hx",786);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sX,"sX");
	HX_STACK_ARG(sY,"sY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(786)
	return this->_camera->unproject((Float((((sX * (int)2) - this->_width))) / Float(this->_stage3DProxy->get_width())),(Float((((sY * (int)2) - this->_height))) / Float(this->_stage3DProxy->get_height())),sZ);
}


HX_DEFINE_DYNAMIC_FUNC3(View3D_obj,unproject,return )

::flash::geom::Vector3D View3D_obj::project( ::flash::geom::Vector3D point3d){
	HX_STACK_PUSH("View3D::project","away3d/containers/View3D.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point3d,"point3d");
	HX_STACK_LINE(769)
	::flash::geom::Vector3D v = this->_camera->project(point3d);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(770)
	v->x = (Float((((v->x + 1.0)) * this->_width)) / Float(2.0));
	HX_STACK_LINE(771)
	v->y = (Float((((v->y + 1.0)) * this->_height)) / Float(2.0));
	HX_STACK_LINE(772)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,project,return )

Void View3D_obj::dispose( ){
{
		HX_STACK_PUSH("View3D::dispose","away3d/containers/View3D.hx",741);
		HX_STACK_THIS(this);
		HX_STACK_LINE(742)
		this->_stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED,this->onViewportUpdated_dyn(),null());
		HX_STACK_LINE(743)
		if ((!(this->get_shareContext()))){
			HX_STACK_LINE(743)
			this->_stage3DProxy->dispose();
		}
		HX_STACK_LINE(744)
		this->_renderer->dispose();
		HX_STACK_LINE(745)
		if (((this->_depthRender != null()))){
			HX_STACK_LINE(745)
			this->_depthRender->dispose();
		}
		HX_STACK_LINE(746)
		if (((this->_rttBufferManager != null()))){
			HX_STACK_LINE(746)
			this->_rttBufferManager->dispose();
		}
		HX_STACK_LINE(747)
		this->_mouse3DManager->disableMouseListeners(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(748)
		this->_mouse3DManager->dispose();
		HX_STACK_LINE(749)
		this->_touch3DManager->disableTouchListeners(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(750)
		this->_touch3DManager->dispose();
		HX_STACK_LINE(751)
		this->_rttBufferManager = null();
		HX_STACK_LINE(752)
		this->_depthRender = null();
		HX_STACK_LINE(753)
		this->_mouse3DManager = null();
		HX_STACK_LINE(754)
		this->_touch3DManager = null();
		HX_STACK_LINE(755)
		this->_depthRenderer = null();
		HX_STACK_LINE(756)
		this->_stage3DProxy = null();
		HX_STACK_LINE(757)
		this->_renderer = null();
		HX_STACK_LINE(758)
		this->_entityCollector = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,dispose,(void))

Void View3D_obj::initDepthTexture( ::flash::display3D::Context3D context){
{
		HX_STACK_PUSH("View3D::initDepthTexture","away3d/containers/View3D.hx",731);
		HX_STACK_THIS(this);
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(732)
		this->_depthTextureInvalid = false;
		HX_STACK_LINE(733)
		if (((this->_depthRender != null()))){
			HX_STACK_LINE(733)
			this->_depthRender->dispose();
		}
		HX_STACK_LINE(734)
		this->_depthRender = context->createTexture(this->_rttBufferManager->get_textureWidth(),this->_rttBufferManager->get_textureHeight(),::flash::display3D::Context3DTextureFormat_obj::BGRA,true,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,initDepthTexture,(void))

Void View3D_obj::renderSceneDepthToTexture( ::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("View3D::renderSceneDepthToTexture","away3d/containers/View3D.hx",724);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(725)
		if (((bool(this->_depthTextureInvalid) || bool((this->_depthRender == null()))))){
			HX_STACK_LINE(725)
			this->initDepthTexture(this->_stage3DProxy->_context3D);
		}
		HX_STACK_LINE(726)
		this->_depthRenderer->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
		HX_STACK_LINE(727)
		this->_depthRenderer->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
		HX_STACK_LINE(728)
		this->_depthRenderer->render(entityCollector,this->_depthRender,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,renderSceneDepthToTexture,(void))

Void View3D_obj::renderDepthPrepass( ::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("View3D::renderDepthPrepass","away3d/containers/View3D.hx",707);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(708)
		this->_depthRenderer->set_disableColor(true);
		HX_STACK_LINE(709)
		if (((bool((this->_filter3DRenderer != null())) || bool(this->_renderer->get_renderToTexture())))){
			HX_STACK_LINE(710)
			this->_depthRenderer->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
			HX_STACK_LINE(711)
			this->_depthRenderer->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
			HX_STACK_LINE(712)
			this->_depthRenderer->render(entityCollector,this->_filter3DRenderer->getMainInputTexture(this->_stage3DProxy),this->_rttBufferManager->get_renderToTextureRect(),null());
		}
		else{
			HX_STACK_LINE(716)
			this->_depthRenderer->set_textureRatioX((int)1);
			HX_STACK_LINE(717)
			this->_depthRenderer->set_textureRatioY((int)1);
			HX_STACK_LINE(718)
			this->_depthRenderer->render(entityCollector,null(),null(),null());
		}
		HX_STACK_LINE(721)
		this->_depthRenderer->set_disableColor(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,renderDepthPrepass,(void))

Void View3D_obj::updateViewSizeData( ){
{
		HX_STACK_PUSH("View3D::updateViewSizeData","away3d/containers/View3D.hx",685);
		HX_STACK_THIS(this);
		HX_STACK_LINE(686)
		this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
		HX_STACK_LINE(687)
		if ((this->_scissorRectDirty)){
			HX_STACK_LINE(688)
			this->_scissorRectDirty = false;
			HX_STACK_LINE(689)
			this->_camera->get_lens()->updateScissorRect(this->_scissorRect->x,this->_scissorRect->y,this->_scissorRect->width,this->_scissorRect->height);
		}
		HX_STACK_LINE(691)
		if ((this->_viewportDirty)){
			HX_STACK_LINE(692)
			this->_viewportDirty = false;
			HX_STACK_LINE(693)
			this->_camera->get_lens()->updateViewport(this->_stage3DProxy->get_viewPort()->x,this->_stage3DProxy->get_viewPort()->y,this->_stage3DProxy->get_viewPort()->width,this->_stage3DProxy->get_viewPort()->height);
		}
		HX_STACK_LINE(695)
		if (((bool((this->_filter3DRenderer != null())) || bool(this->_renderer->get_renderToTexture())))){
			HX_STACK_LINE(696)
			this->_renderer->set_textureRatioX(this->_rttBufferManager->get_textureRatioX());
			HX_STACK_LINE(697)
			this->_renderer->set_textureRatioY(this->_rttBufferManager->get_textureRatioY());
		}
		else{
			HX_STACK_LINE(701)
			this->_renderer->set_textureRatioX((int)1);
			HX_STACK_LINE(702)
			this->_renderer->set_textureRatioY((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateViewSizeData,(void))

Void View3D_obj::updateTime( ){
{
		HX_STACK_PUSH("View3D::updateTime","away3d/containers/View3D.hx",678);
		HX_STACK_THIS(this);
		HX_STACK_LINE(679)
		Float time = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(680)
		if (((this->_time == (int)0))){
			HX_STACK_LINE(680)
			this->_time = time;
		}
		HX_STACK_LINE(681)
		this->_deltaTime = ::Std_obj::_int((time - this->_time));
		HX_STACK_LINE(682)
		this->_time = time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateTime,(void))

Void View3D_obj::updateGlobalPos( ){
{
		HX_STACK_PUSH("View3D::updateGlobalPos","away3d/containers/View3D.hx",660);
		HX_STACK_THIS(this);
		HX_STACK_LINE(661)
		this->_globalPosDirty = false;
		HX_STACK_LINE(662)
		if (((this->_stage3DProxy == null()))){
			HX_STACK_LINE(662)
			return null();
		}
		HX_STACK_LINE(663)
		if ((this->_shareContext)){
			HX_STACK_LINE(664)
			this->_scissorRect->x = (this->_globalPos->x - this->_stage3DProxy->get_x());
			HX_STACK_LINE(665)
			this->_scissorRect->y = (this->_globalPos->y - this->_stage3DProxy->get_y());
		}
		else{
			HX_STACK_LINE(669)
			this->_scissorRect->x = (int)0;
			HX_STACK_LINE(670)
			this->_scissorRect->y = (int)0;
			HX_STACK_LINE(671)
			this->_stage3DProxy->set_x(this->_globalPos->x);
			HX_STACK_LINE(672)
			this->_stage3DProxy->set_y(this->_globalPos->y);
		}
		HX_STACK_LINE(675)
		this->_scissorRectDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateGlobalPos,(void))

Void View3D_obj::render( ){
{
		HX_STACK_PUSH("View3D::render","away3d/containers/View3D.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_LINE(600)
		::haxe::Log_obj::trace(HX_CSTRING("render"),hx::SourceInfo(HX_CSTRING("View3D.hx"),600,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		HX_STACK_LINE(601)
		if ((!(this->get_stage3DProxy()->recoverFromDisposal()))){
			HX_STACK_LINE(602)
			this->_backBufferInvalid = true;
			HX_STACK_LINE(603)
			return null();
		}
		HX_STACK_LINE(605)
		::haxe::Log_obj::trace(HX_CSTRING("render2"),hx::SourceInfo(HX_CSTRING("View3D.hx"),605,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		HX_STACK_LINE(606)
		if ((this->_backBufferInvalid)){
			HX_STACK_LINE(606)
			this->updateBackBuffer();
		}
		HX_STACK_LINE(607)
		if (((bool(this->_shareContext) && bool(this->_layeredView)))){
			HX_STACK_LINE(607)
			this->get_stage3DProxy()->clearDepthBuffer();
		}
		HX_STACK_LINE(608)
		if ((!(this->_parentIsStage))){
			HX_STACK_LINE(609)
			::flash::geom::Point globalPos = this->get_parent()->localToGlobal(this->_localPos);		HX_STACK_VAR(globalPos,"globalPos");
			HX_STACK_LINE(610)
			if (((bool((this->_globalPos->x != globalPos->x)) || bool((this->_globalPos->y != globalPos->y))))){
				HX_STACK_LINE(611)
				this->_globalPos = globalPos;
				HX_STACK_LINE(612)
				this->_globalPosDirty = true;
			}
		}
		HX_STACK_LINE(615)
		if ((this->_globalPosDirty)){
			HX_STACK_LINE(615)
			this->updateGlobalPos();
		}
		HX_STACK_LINE(616)
		this->updateTime();
		HX_STACK_LINE(617)
		this->updateViewSizeData();
		HX_STACK_LINE(618)
		this->_entityCollector->clear();
		HX_STACK_LINE(620)
		this->_scene->traversePartitions(this->_entityCollector);
		HX_STACK_LINE(621)
		::haxe::Log_obj::trace(HX_CSTRING("render3"),hx::SourceInfo(HX_CSTRING("View3D.hx"),621,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		HX_STACK_LINE(624)
		this->_mouse3DManager->updateCollider(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(625)
		this->_touch3DManager->updateCollider();
		HX_STACK_LINE(626)
		if ((this->_requireDepthRender)){
			HX_STACK_LINE(626)
			this->renderSceneDepthToTexture(this->_entityCollector);
		}
		HX_STACK_LINE(627)
		if ((this->_depthPrepass)){
			HX_STACK_LINE(627)
			this->renderDepthPrepass(this->_entityCollector);
		}
		HX_STACK_LINE(628)
		this->_renderer->set_clearOnRender(!(this->_depthPrepass));
		HX_STACK_LINE(629)
		::haxe::Log_obj::trace(HX_CSTRING("render4"),hx::SourceInfo(HX_CSTRING("View3D.hx"),629,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		HX_STACK_LINE(630)
		if (((bool((this->_filter3DRenderer != null())) && bool((this->_stage3DProxy->_context3D != null()))))){
			HX_STACK_LINE(631)
			this->_renderer->render(this->_entityCollector,this->_filter3DRenderer->getMainInputTexture(this->_stage3DProxy),this->_rttBufferManager->get_renderToTextureRect(),null());
			HX_STACK_LINE(632)
			this->_filter3DRenderer->render(this->_stage3DProxy,this->get_camera(),this->_depthRender);
			HX_STACK_LINE(633)
			::haxe::Log_obj::trace(HX_CSTRING("render5"),hx::SourceInfo(HX_CSTRING("View3D.hx"),633,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		}
		else{
			HX_STACK_LINE(637)
			::haxe::Log_obj::trace(HX_CSTRING("render6"),hx::SourceInfo(HX_CSTRING("View3D.hx"),637,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
			HX_STACK_LINE(638)
			this->_renderer->set_shareContext(this->_shareContext);
			HX_STACK_LINE(639)
			if ((this->_shareContext)){
				HX_STACK_LINE(639)
				this->_renderer->render(this->_entityCollector,null(),this->_scissorRect,null());
				HX_STACK_LINE(640)
				::haxe::Log_obj::trace(HX_CSTRING("share"),hx::SourceInfo(HX_CSTRING("View3D.hx"),640,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
			}
			else{
				HX_STACK_LINE(642)
				this->_renderer->render(this->_entityCollector,null(),null(),null());
				HX_STACK_LINE(643)
				::haxe::Log_obj::trace(HX_CSTRING("share2"),hx::SourceInfo(HX_CSTRING("View3D.hx"),643,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
			}
		}
		HX_STACK_LINE(647)
		if ((!(this->_shareContext))){
			HX_STACK_LINE(648)
			::haxe::Log_obj::trace(HX_CSTRING("present"),hx::SourceInfo(HX_CSTRING("View3D.hx"),648,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
			HX_STACK_LINE(649)
			this->get_stage3DProxy()->present();
			HX_STACK_LINE(651)
			this->_mouse3DManager->fireMouseEvents();
			HX_STACK_LINE(652)
			this->_touch3DManager->fireTouchEvents();
		}
		HX_STACK_LINE(654)
		this->_entityCollector->cleanUp();
		HX_STACK_LINE(656)
		::haxe::Log_obj::trace(HX_CSTRING("buffclear"),hx::SourceInfo(HX_CSTRING("View3D.hx"),656,HX_CSTRING("away3d.containers.View3D"),HX_CSTRING("render")));
		HX_STACK_LINE(657)
		this->get_stage3DProxy()->set_bufferClear(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,render,(void))

Void View3D_obj::addSourceURL( ::String url){
{
		HX_STACK_PUSH("View3D::addSourceURL","away3d/containers/View3D.hx",590);
		HX_STACK_THIS(this);
		HX_STACK_ARG(url,"url");
		HX_STACK_LINE(590)
		this->_sourceURL = url;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,addSourceURL,(void))

Void View3D_obj::updateBackBuffer( ){
{
		HX_STACK_PUSH("View3D::updateBackBuffer","away3d/containers/View3D.hx",550);
		HX_STACK_THIS(this);
		HX_STACK_LINE(550)
		if (((bool((this->_stage3DProxy->get_context3D() != null())) && bool(!(this->_shareContext))))){
			HX_STACK_LINE(554)
			if (((bool((this->_width > (int)0)) && bool((this->_height > (int)0))))){
				HX_STACK_LINE(562)
				if ((this->_stage3DProxy->get_usesSoftwareRendering())){
					HX_STACK_LINE(567)
					if (((this->_width > (int)2048))){
						HX_STACK_LINE(567)
						this->_width = (int)2048;
					}
					HX_STACK_LINE(568)
					if (((this->_height > (int)2048))){
						HX_STACK_LINE(568)
						this->_height = (int)2048;
					}
				}
				HX_STACK_LINE(570)
				this->_stage3DProxy->configureBackBuffer(::Std_obj::_int(this->_width),::Std_obj::_int(this->_height),this->_antiAlias,true);
				HX_STACK_LINE(571)
				this->_backBufferInvalid = false;
			}
			else{
				HX_STACK_LINE(575)
				this->set_width(this->get_stage()->get_stageWidth());
				HX_STACK_LINE(576)
				this->set_height(this->get_stage()->get_stageHeight());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,updateBackBuffer,(void))

bool View3D_obj::set_shareContext( bool value){
	HX_STACK_PUSH("View3D::set_shareContext","away3d/containers/View3D.hx",539);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(540)
	if (((this->_shareContext == value))){
		HX_STACK_LINE(540)
		return value;
	}
	HX_STACK_LINE(541)
	this->_shareContext = value;
	HX_STACK_LINE(542)
	this->_globalPosDirty = true;
	HX_STACK_LINE(543)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_shareContext,return )

bool View3D_obj::get_shareContext( ){
	HX_STACK_PUSH("View3D::get_shareContext","away3d/containers/View3D.hx",535);
	HX_STACK_THIS(this);
	HX_STACK_LINE(535)
	return this->_shareContext;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_shareContext,return )

int View3D_obj::get_renderedFacesCount( ){
	HX_STACK_PUSH("View3D::get_renderedFacesCount","away3d/containers/View3D.hx",526);
	HX_STACK_THIS(this);
	HX_STACK_LINE(526)
	return this->_entityCollector->get_numTriangles();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_renderedFacesCount,return )

int View3D_obj::set_antiAlias( int value){
	HX_STACK_PUSH("View3D::set_antiAlias","away3d/containers/View3D.hx",515);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(516)
	this->_antiAlias = value;
	HX_STACK_LINE(517)
	this->_renderer->set_antiAlias(value);
	HX_STACK_LINE(518)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(519)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_antiAlias,return )

int View3D_obj::get_antiAlias( ){
	HX_STACK_PUSH("View3D::get_antiAlias","away3d/containers/View3D.hx",511);
	HX_STACK_THIS(this);
	HX_STACK_LINE(511)
	return this->_antiAlias;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_antiAlias,return )

::flash::display::Stage View3D_obj::get_parent( ){
	HX_STACK_PUSH("View3D::get_parent","away3d/containers/View3D.hx",496);
	HX_STACK_THIS(this);
	HX_STACK_LINE(496)
	return this->get_stage();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_parent,return )

::flash::display::Stage View3D_obj::get_stage( ){
	HX_STACK_PUSH("View3D::get_stage","away3d/containers/View3D.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(493)
	return ::flash::Lib_obj::get_current()->get_stage();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_stage,return )

Float View3D_obj::get_mouseY( ){
	HX_STACK_PUSH("View3D::get_mouseY","away3d/containers/View3D.hx",490);
	HX_STACK_THIS(this);
	HX_STACK_LINE(490)
	return this->get_stage()->get_mouseY();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_mouseY,return )

Float View3D_obj::get_mouseX( ){
	HX_STACK_PUSH("View3D::get_mouseX","away3d/containers/View3D.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_LINE(487)
	return this->get_stage()->get_mouseX();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_mouseX,return )

Float View3D_obj::get_x( ){
	HX_STACK_PUSH("View3D::get_x","away3d/containers/View3D.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_LINE(484)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_x,return )

Float View3D_obj::get_y( ){
	HX_STACK_PUSH("View3D::get_y","away3d/containers/View3D.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(481)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_y,return )

Void View3D_obj::set_visible( bool value){
{
		HX_STACK_PUSH("View3D::set_visible","away3d/containers/View3D.hx",476);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(476)
		if (((bool((this->_stage3DProxy != null())) && bool(!(this->_shareContext))))){
			HX_STACK_LINE(479)
			this->_stage3DProxy->set_visible(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_visible,(void))

Float View3D_obj::set_y( Float value){
	HX_STACK_PUSH("View3D::set_y","away3d/containers/View3D.hx",463);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(465)
	if (((this->get_y() == value))){
		HX_STACK_LINE(466)
		return value;
	}
	HX_STACK_LINE(468)
	this->_y = value;
	HX_STACK_LINE(469)
	this->_localPos->y = value;
	HX_STACK_LINE(471)
	this->_globalPos->y = (  (((this->get_parent() != null()))) ? Float(this->get_parent()->localToGlobal(this->_localPos)->y) : Float(value) );
	HX_STACK_LINE(472)
	this->_globalPosDirty = true;
	HX_STACK_LINE(474)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_y,return )

Float View3D_obj::set_x( Float value){
	HX_STACK_PUSH("View3D::set_x","away3d/containers/View3D.hx",450);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(452)
	if (((this->get_x() == value))){
		HX_STACK_LINE(453)
		return value;
	}
	HX_STACK_LINE(455)
	this->_x = value;
	HX_STACK_LINE(456)
	this->_localPos->x = value;
	HX_STACK_LINE(458)
	this->_globalPos->x = (  (((this->get_parent() != null()))) ? Float(this->get_parent()->localToGlobal(this->_localPos)->x) : Float(value) );
	HX_STACK_LINE(459)
	this->_globalPosDirty = true;
	HX_STACK_LINE(461)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_x,return )

Float View3D_obj::set_height( Float value){
	HX_STACK_PUSH("View3D::set_height","away3d/containers/View3D.hx",422);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(426)
	if (((bool((bool((this->_stage3DProxy != null())) && bool(this->_stage3DProxy->get_usesSoftwareRendering()))) && bool((value > (int)2048))))){
		HX_STACK_LINE(427)
		value = (int)2048;
	}
	HX_STACK_LINE(429)
	if (((this->_height == value))){
		HX_STACK_LINE(430)
		return value;
	}
	HX_STACK_LINE(432)
	if (((this->_rttBufferManager != null()))){
		HX_STACK_LINE(433)
		this->_rttBufferManager->set_viewHeight(::Std_obj::_int(value));
	}
	HX_STACK_LINE(436)
	this->_height = value;
	HX_STACK_LINE(437)
	this->_aspectRatio = (Float(this->_width) / Float(this->_height));
	HX_STACK_LINE(438)
	this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
	HX_STACK_LINE(439)
	this->_depthTextureInvalid = true;
	HX_STACK_LINE(441)
	this->_renderer->set_viewHeight(value);
	HX_STACK_LINE(443)
	this->_scissorRect->height = value;
	HX_STACK_LINE(445)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(446)
	this->_scissorRectDirty = true;
	HX_STACK_LINE(447)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_height,return )

Float View3D_obj::get_height( ){
	HX_STACK_PUSH("View3D::get_height","away3d/containers/View3D.hx",417);
	HX_STACK_THIS(this);
	HX_STACK_LINE(417)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_height,return )

Float View3D_obj::set_width( Float value){
	HX_STACK_PUSH("View3D::set_width","away3d/containers/View3D.hx",385);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(388)
	if (((bool((bool((this->_stage3DProxy != null())) && bool(this->_stage3DProxy->get_usesSoftwareRendering()))) && bool((value > (int)2048))))){
		HX_STACK_LINE(389)
		value = (int)2048;
	}
	HX_STACK_LINE(391)
	if (((this->_width == value))){
		HX_STACK_LINE(392)
		return value;
	}
	HX_STACK_LINE(394)
	if (((this->_rttBufferManager != null()))){
		HX_STACK_LINE(395)
		this->_rttBufferManager->set_viewWidth(::Std_obj::_int(value));
	}
	HX_STACK_LINE(397)
	this->_width = value;
	HX_STACK_LINE(400)
	this->_renderer->set_viewWidth(value);
	HX_STACK_LINE(402)
	this->_scissorRect->width = value;
	HX_STACK_LINE(405)
	this->_aspectRatio = (Float(this->_width) / Float(this->_height));
	HX_STACK_LINE(406)
	this->_camera->get_lens()->set_aspectRatio(this->_aspectRatio);
	HX_STACK_LINE(407)
	this->_depthTextureInvalid = true;
	HX_STACK_LINE(408)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(409)
	this->_scissorRectDirty = true;
	HX_STACK_LINE(410)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_width,return )

Float View3D_obj::get_width( ){
	HX_STACK_PUSH("View3D::get_width","away3d/containers/View3D.hx",381);
	HX_STACK_THIS(this);
	HX_STACK_LINE(381)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_width,return )

int View3D_obj::get_deltaTime( ){
	HX_STACK_PUSH("View3D::get_deltaTime","away3d/containers/View3D.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_LINE(366)
	return this->_deltaTime;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_deltaTime,return )

::away3d::containers::Scene3D View3D_obj::set_scene( ::away3d::containers::Scene3D scene){
	HX_STACK_PUSH("View3D::set_scene","away3d/containers/View3D.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scene,"scene");
	HX_STACK_LINE(354)
	this->_scene->removeEventListener(::away3d::events::Scene3DEvent_obj::PARTITION_CHANGED,this->onScenePartitionChanged_dyn(),null());
	HX_STACK_LINE(355)
	this->_scene = scene;
	HX_STACK_LINE(356)
	this->_scene->addEventListener(::away3d::events::Scene3DEvent_obj::PARTITION_CHANGED,this->onScenePartitionChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(357)
	if (((this->_camera != null()))){
		HX_STACK_LINE(357)
		this->_camera->set_partition(this->_scene->get_partition());
	}
	HX_STACK_LINE(358)
	return scene;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_scene,return )

::away3d::containers::Scene3D View3D_obj::get_scene( ){
	HX_STACK_PUSH("View3D::get_scene","away3d/containers/View3D.hx",345);
	HX_STACK_THIS(this);
	HX_STACK_LINE(345)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_scene,return )

::away3d::cameras::Camera3D View3D_obj::set_camera( ::away3d::cameras::Camera3D camera){
	HX_STACK_PUSH("View3D::set_camera","away3d/containers/View3D.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(camera,"camera");
	HX_STACK_LINE(331)
	this->_camera->removeEventListener(::away3d::events::CameraEvent_obj::LENS_CHANGED,this->onLensChanged_dyn(),null());
	HX_STACK_LINE(332)
	this->_camera = camera;
	HX_STACK_LINE(333)
	this->_entityCollector->set_camera(this->_camera);
	HX_STACK_LINE(334)
	if (((this->_scene != null()))){
		HX_STACK_LINE(334)
		this->_camera->set_partition(this->_scene->get_partition());
	}
	HX_STACK_LINE(335)
	this->_camera->addEventListener(::away3d::events::CameraEvent_obj::LENS_CHANGED,this->onLensChanged_dyn(),null(),null(),null());
	HX_STACK_LINE(336)
	this->_scissorRectDirty = true;
	HX_STACK_LINE(337)
	this->_viewportDirty = true;
	HX_STACK_LINE(338)
	return camera;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_camera,return )

::away3d::cameras::Camera3D View3D_obj::get_camera( ){
	HX_STACK_PUSH("View3D::get_camera","away3d/containers/View3D.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	return this->_camera;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_camera,return )

Float View3D_obj::set_backgroundAlpha( Float value){
	HX_STACK_PUSH("View3D::set_backgroundAlpha","away3d/containers/View3D.hx",310);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(311)
	if (((value > (int)1))){
		HX_STACK_LINE(311)
		value = (int)1;
	}
	else{
		HX_STACK_LINE(312)
		if (((value < (int)0))){
			HX_STACK_LINE(312)
			value = (int)0;
		}
	}
	HX_STACK_LINE(313)
	this->_renderer->set_backgroundAlpha(value);
	HX_STACK_LINE(314)
	this->_backgroundAlpha = value;
	HX_STACK_LINE(315)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_backgroundAlpha,return )

Float View3D_obj::get_backgroundAlpha( ){
	HX_STACK_PUSH("View3D::get_backgroundAlpha","away3d/containers/View3D.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_LINE(306)
	return this->_backgroundAlpha;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_backgroundAlpha,return )

int View3D_obj::set_backgroundColor( int value){
	HX_STACK_PUSH("View3D::set_backgroundColor","away3d/containers/View3D.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(299)
	this->_backgroundColor = value;
	HX_STACK_LINE(300)
	this->_renderer->set_backgroundR((Float(((int((int(value) >> int((int)16))) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(301)
	this->_renderer->set_backgroundG((Float(((int((int(value) >> int((int)8))) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(302)
	this->_renderer->set_backgroundB((Float(((int(value) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(303)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_backgroundColor,return )

int View3D_obj::get_backgroundColor( ){
	HX_STACK_PUSH("View3D::get_backgroundColor","away3d/containers/View3D.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	return this->_backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_backgroundColor,return )

::away3d::core::render::RendererBase View3D_obj::set_renderer( ::away3d::core::render::RendererBase value){
	HX_STACK_PUSH("View3D::set_renderer","away3d/containers/View3D.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(274)
	this->_renderer->dispose();
	HX_STACK_LINE(275)
	this->_renderer = value;
	HX_STACK_LINE(276)
	this->_entityCollector = this->_renderer->createEntityCollector();
	HX_STACK_LINE(277)
	this->_entityCollector->set_camera(this->_camera);
	HX_STACK_LINE(278)
	this->_renderer->set_stage3DProxy(this->_stage3DProxy);
	HX_STACK_LINE(279)
	this->_renderer->set_antiAlias(this->_antiAlias);
	HX_STACK_LINE(280)
	this->_renderer->set_backgroundR((Float(((int((int(this->_backgroundColor) >> int((int)16))) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(281)
	this->_renderer->set_backgroundG((Float(((int((int(this->_backgroundColor) >> int((int)8))) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(282)
	this->_renderer->set_backgroundB((Float(((int(this->_backgroundColor) & int((int)255)))) / Float((int)255)));
	HX_STACK_LINE(283)
	this->_renderer->set_backgroundAlpha(this->_backgroundAlpha);
	HX_STACK_LINE(284)
	this->_renderer->set_viewWidth(this->_width);
	HX_STACK_LINE(285)
	this->_renderer->set_viewHeight(this->_height);
	HX_STACK_LINE(286)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(287)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_renderer,return )

::away3d::core::render::RendererBase View3D_obj::get_renderer( ){
	HX_STACK_PUSH("View3D::get_renderer","away3d/containers/View3D.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(269)
	return this->_renderer;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_renderer,return )

Dynamic View3D_obj::set_filters3d( Dynamic value){
	HX_STACK_PUSH("View3D::set_filters3d","away3d/containers/View3D.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(239)
	if (((bool((value != null())) && bool((value->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(239)
		value = null();
	}
	HX_STACK_LINE(240)
	if (((bool((this->_filter3DRenderer != null())) && bool((value == null()))))){
		HX_STACK_LINE(241)
		this->_filter3DRenderer->dispose();
		HX_STACK_LINE(242)
		this->_filter3DRenderer = null();
	}
	else{
		HX_STACK_LINE(245)
		if (((bool((this->_filter3DRenderer == null())) && bool((value != null()))))){
			HX_STACK_LINE(246)
			this->_filter3DRenderer = ::away3d::core::render::Filter3DRenderer_obj::__new(this->get_stage3DProxy());
			HX_STACK_LINE(247)
			this->_filter3DRenderer->set_filters(value);
		}
	}
	HX_STACK_LINE(249)
	if (((this->_filter3DRenderer != null()))){
		HX_STACK_LINE(250)
		this->_filter3DRenderer->set_filters(value);
		HX_STACK_LINE(251)
		this->_requireDepthRender = this->_filter3DRenderer->get_requireDepthRender();
	}
	else{
		HX_STACK_LINE(255)
		this->_requireDepthRender = false;
		HX_STACK_LINE(256)
		if (((this->_depthRender != null()))){
			HX_STACK_LINE(257)
			this->_depthRender->dispose();
			HX_STACK_LINE(258)
			this->_depthRender = null();
		}
	}
	HX_STACK_LINE(262)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_filters3d,return )

Dynamic View3D_obj::get_filters3d( ){
	HX_STACK_PUSH("View3D::get_filters3d","away3d/containers/View3D.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_LINE(234)
	return (  (((this->_filter3DRenderer != null()))) ? Dynamic(this->_filter3DRenderer->get_filters()) : Dynamic(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_filters3d,return )

bool View3D_obj::set_layeredView( bool value){
	HX_STACK_PUSH("View3D::set_layeredView","away3d/containers/View3D.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(229)
	this->_layeredView = value;
	HX_STACK_LINE(230)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_layeredView,return )

bool View3D_obj::get_layeredView( ){
	HX_STACK_PUSH("View3D::get_layeredView","away3d/containers/View3D.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return this->_layeredView;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_layeredView,return )

::away3d::textures::Texture2DBase View3D_obj::set_background( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("View3D::set_background","away3d/containers/View3D.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(212)
	this->_background = value;
	HX_STACK_LINE(213)
	this->_renderer->set_background(this->_background);
	HX_STACK_LINE(214)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_background,return )

::away3d::textures::Texture2DBase View3D_obj::get_background( ){
	HX_STACK_PUSH("View3D::get_background","away3d/containers/View3D.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->_background;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_background,return )

bool View3D_obj::set_forceMouseMove( bool value){
	HX_STACK_PUSH("View3D::set_forceMouseMove","away3d/containers/View3D.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(202)
	this->_mouse3DManager->set_forceMouseMove(value);
	HX_STACK_LINE(203)
	this->_touch3DManager->set_forceTouchMove(value);
	HX_STACK_LINE(204)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_forceMouseMove,return )

bool View3D_obj::get_forceMouseMove( ){
	HX_STACK_PUSH("View3D::get_forceMouseMove","away3d/containers/View3D.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_LINE(197)
	return this->_mouse3DManager->get_forceMouseMove();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_forceMouseMove,return )

::away3d::core::managers::Stage3DProxy View3D_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("View3D::set_stage3DProxy","away3d/containers/View3D.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(183)
	if (((this->_stage3DProxy != null()))){
		HX_STACK_LINE(183)
		this->_stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED,this->onViewportUpdated_dyn(),null());
	}
	HX_STACK_LINE(184)
	this->_stage3DProxy = stage3DProxy;
	HX_STACK_LINE(185)
	this->_stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED,this->onViewportUpdated_dyn(),null(),null(),null());
	HX_STACK_LINE(186)
	this->_renderer->set_stage3DProxy(this->_depthRenderer->set_stage3DProxy(this->_stage3DProxy));
	HX_STACK_LINE(187)
	this->_globalPosDirty = true;
	HX_STACK_LINE(188)
	this->_backBufferInvalid = true;
	HX_STACK_LINE(189)
	return stage3DProxy;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_stage3DProxy,return )

::away3d::core::managers::Stage3DProxy View3D_obj::get_stage3DProxy( ){
	HX_STACK_PUSH("View3D::get_stage3DProxy","away3d/containers/View3D.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	return this->_stage3DProxy;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_stage3DProxy,return )

bool View3D_obj::set_rightClickMenuEnabled( bool val){
	HX_STACK_PUSH("View3D::set_rightClickMenuEnabled","away3d/containers/View3D.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(174)
	this->_rightClickMenuEnabled = val;
	HX_STACK_LINE(175)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_rightClickMenuEnabled,return )

bool View3D_obj::get_rightClickMenuEnabled( ){
	HX_STACK_PUSH("View3D::get_rightClickMenuEnabled","away3d/containers/View3D.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return this->_rightClickMenuEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_rightClickMenuEnabled,return )

Void View3D_obj::onScenePartitionChanged( ::away3d::events::Scene3DEvent event){
{
		HX_STACK_PUSH("View3D::onScenePartitionChanged","away3d/containers/View3D.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(165)
		if (((this->_camera != null()))){
			HX_STACK_LINE(166)
			this->_camera->set_partition(this->get_scene()->get_partition());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,onScenePartitionChanged,(void))

Void View3D_obj::init( ){
{
		HX_STACK_PUSH("View3D::init","away3d/containers/View3D.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		this->onAddedToStage(null());
		HX_STACK_LINE(163)
		this->onAdded(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,init,(void))

bool View3D_obj::set_depthPrepass( bool value){
	HX_STACK_PUSH("View3D::set_depthPrepass","away3d/containers/View3D.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(104)
	this->_depthPrepass = value;
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(View3D_obj,set_depthPrepass,return )

bool View3D_obj::get_depthPrepass( ){
	HX_STACK_PUSH("View3D::get_depthPrepass","away3d/containers/View3D.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_LINE(99)
	return this->_depthPrepass;
}


HX_DEFINE_DYNAMIC_FUNC0(View3D_obj,get_depthPrepass,return )


View3D_obj::View3D_obj()
{
}

void View3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(View3D);
	HX_MARK_MEMBER_NAME(_layeredView,"_layeredView");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_depthPrepass,"_depthPrepass");
	HX_MARK_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_MARK_MEMBER_NAME(_scissorRectDirty,"_scissorRectDirty");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_shareContext,"_shareContext");
	HX_MARK_MEMBER_NAME(_sourceURL,"_sourceURL");
	HX_MARK_MEMBER_NAME(_rightClickMenuEnabled,"_rightClickMenuEnabled");
	HX_MARK_MEMBER_NAME(_rttBufferManager,"_rttBufferManager");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_backBufferInvalid,"_backBufferInvalid");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_parentIsStage,"_parentIsStage");
	HX_MARK_MEMBER_NAME(_depthTextureInvalid,"_depthTextureInvalid");
	HX_MARK_MEMBER_NAME(_depthRender,"_depthRender");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_filter3DRenderer,"_filter3DRenderer");
	HX_MARK_MEMBER_NAME(_forceSoftware,"_forceSoftware");
	HX_MARK_MEMBER_NAME(_addedToStage,"_addedToStage");
	HX_MARK_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_MARK_MEMBER_NAME(_renderer,"_renderer");
	HX_MARK_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_MARK_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_MARK_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_deltaTime,"_deltaTime");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_MARK_MEMBER_NAME(_entityCollector,"_entityCollector");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_globalPosDirty,"_globalPosDirty");
	HX_MARK_MEMBER_NAME(_globalPos,"_globalPos");
	HX_MARK_MEMBER_NAME(_localPos,"_localPos");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void View3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layeredView,"_layeredView");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_depthPrepass,"_depthPrepass");
	HX_VISIT_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_VISIT_MEMBER_NAME(_scissorRectDirty,"_scissorRectDirty");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_shareContext,"_shareContext");
	HX_VISIT_MEMBER_NAME(_sourceURL,"_sourceURL");
	HX_VISIT_MEMBER_NAME(_rightClickMenuEnabled,"_rightClickMenuEnabled");
	HX_VISIT_MEMBER_NAME(_rttBufferManager,"_rttBufferManager");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_backBufferInvalid,"_backBufferInvalid");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_parentIsStage,"_parentIsStage");
	HX_VISIT_MEMBER_NAME(_depthTextureInvalid,"_depthTextureInvalid");
	HX_VISIT_MEMBER_NAME(_depthRender,"_depthRender");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_filter3DRenderer,"_filter3DRenderer");
	HX_VISIT_MEMBER_NAME(_forceSoftware,"_forceSoftware");
	HX_VISIT_MEMBER_NAME(_addedToStage,"_addedToStage");
	HX_VISIT_MEMBER_NAME(_depthRenderer,"_depthRenderer");
	HX_VISIT_MEMBER_NAME(_renderer,"_renderer");
	HX_VISIT_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_VISIT_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_VISIT_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_deltaTime,"_deltaTime");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_VISIT_MEMBER_NAME(_entityCollector,"_entityCollector");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_globalPosDirty,"_globalPosDirty");
	HX_VISIT_MEMBER_NAME(_globalPos,"_globalPos");
	HX_VISIT_MEMBER_NAME(_localPos,"_localPos");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic View3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return get_stage(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getRay") ) { return getRay_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return get_parent(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"camera") ) { return get_camera(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onAdded") ) { return onAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return _profile; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return get_renderer(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderer") ) { return _renderer; }
		if (HX_FIELD_EQ(inName,"_localPos") ) { return _localPos; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return get_antiAlias(); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return get_deltaTime(); }
		if (HX_FIELD_EQ(inName,"filters3d") ) { return get_filters3d(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"_sourceURL") ) { return _sourceURL; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return _antiAlias; }
		if (HX_FIELD_EQ(inName,"_deltaTime") ) { return _deltaTime; }
		if (HX_FIELD_EQ(inName,"_globalPos") ) { return _globalPos; }
		if (HX_FIELD_EQ(inName,"background") ) { return get_background(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { return get_touchPicker(); }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { return get_mousePicker(); }
		if (HX_FIELD_EQ(inName,"layeredView") ) { return get_layeredView(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addSourceURL") ) { return addSourceURL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_renderer") ) { return set_renderer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		if (HX_FIELD_EQ(inName,"_layeredView") ) { return _layeredView; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return _scissorRect; }
		if (HX_FIELD_EQ(inName,"_depthRender") ) { return _depthRender; }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { return _aspectRatio; }
		if (HX_FIELD_EQ(inName,"shareContext") ) { return get_shareContext(); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return get_stage3DProxy(); }
		if (HX_FIELD_EQ(inName,"depthPrepass") ) { return get_depthPrepass(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onLensChanged") ) { return onLensChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return set_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return get_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_deltaTime") ) { return get_deltaTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters3d") ) { return set_filters3d_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters3d") ) { return get_filters3d_dyn(); }
		if (HX_FIELD_EQ(inName,"_depthPrepass") ) { return _depthPrepass; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { return _shareContext; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		if (HX_FIELD_EQ(inName,"_addedToStage") ) { return _addedToStage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { return _viewportDirty; }
		if (HX_FIELD_EQ(inName,"_parentIsStage") ) { return _parentIsStage; }
		if (HX_FIELD_EQ(inName,"_forceSoftware") ) { return _forceSoftware; }
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { return _depthRenderer; }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { return get_forceMouseMove(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_touchPicker") ) { return set_touchPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touchPicker") ) { return get_touchPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mousePicker") ) { return set_mousePicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mousePicker") ) { return get_mousePicker_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGlobalPos") ) { return updateGlobalPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layeredView") ) { return set_layeredView_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layeredView") ) { return get_layeredView_dyn(); }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { return _touch3DManager; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { return _mouse3DManager; }
		if (HX_FIELD_EQ(inName,"_globalPosDirty") ) { return _globalPosDirty; }
		if (HX_FIELD_EQ(inName,"entityCollector") ) { return get_entityCollector(); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { return get_backgroundAlpha(); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return get_backgroundColor(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initDepthTexture") ) { return initDepthTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBackBuffer") ) { return updateBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shareContext") ) { return set_shareContext_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shareContext") ) { return get_shareContext_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return set_stage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return get_stage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depthPrepass") ) { return set_depthPrepass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depthPrepass") ) { return get_depthPrepass_dyn(); }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { return _backgroundAlpha; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return _backgroundColor; }
		if (HX_FIELD_EQ(inName,"_entityCollector") ) { return _entityCollector; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onViewportUpdated") ) { return onViewportUpdated_dyn(); }
		if (HX_FIELD_EQ(inName,"_scissorRectDirty") ) { return _scissorRectDirty; }
		if (HX_FIELD_EQ(inName,"_rttBufferManager") ) { return _rttBufferManager; }
		if (HX_FIELD_EQ(inName,"_filter3DRenderer") ) { return _filter3DRenderer; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDepthPrepass") ) { return renderDepthPrepass_dyn(); }
		if (HX_FIELD_EQ(inName,"updateViewSizeData") ) { return updateViewSizeData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_forceMouseMove") ) { return set_forceMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"get_forceMouseMove") ) { return get_forceMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_backBufferInvalid") ) { return _backBufferInvalid; }
		if (HX_FIELD_EQ(inName,"renderedFacesCount") ) { return get_renderedFacesCount(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_entityCollector") ) { return get_entityCollector_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundAlpha") ) { return set_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundAlpha") ) { return get_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return _requireDepthRender; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_depthTextureInvalid") ) { return _depthTextureInvalid; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"rightClickMenuEnabled") ) { return get_rightClickMenuEnabled(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_renderedFacesCount") ) { return get_renderedFacesCount_dyn(); }
		if (HX_FIELD_EQ(inName,"_rightClickMenuEnabled") ) { return _rightClickMenuEnabled; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onScenePartitionChanged") ) { return onScenePartitionChanged_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"renderSceneDepthToTexture") ) { return renderSceneDepthToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rightClickMenuEnabled") ) { return set_rightClickMenuEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightClickMenuEnabled") ) { return get_rightClickMenuEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic View3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::away3d::containers::Scene3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { return set_camera(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::away3d::cameras::Camera3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return set_renderer(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_renderer") ) { _renderer=inValue.Cast< ::away3d::core::render::RendererBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localPos") ) { _localPos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return set_antiAlias(inValue); }
		if (HX_FIELD_EQ(inName,"filters3d") ) { return set_filters3d(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sourceURL") ) { _sourceURL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deltaTime") ) { _deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalPos") ) { _globalPos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { return set_background(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchPicker") ) { return set_touchPicker(inValue); }
		if (HX_FIELD_EQ(inName,"mousePicker") ) { return set_mousePicker(inValue); }
		if (HX_FIELD_EQ(inName,"layeredView") ) { return set_layeredView(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_layeredView") ) { _layeredView=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthRender") ) { _depthRender=inValue.Cast< ::flash::display3D::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { _aspectRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shareContext") ) { return set_shareContext(inValue); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return set_stage3DProxy(inValue); }
		if (HX_FIELD_EQ(inName,"depthPrepass") ) { return set_depthPrepass(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthPrepass") ) { _depthPrepass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { _shareContext=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_addedToStage") ) { _addedToStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { _viewportDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentIsStage") ) { _parentIsStage=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceSoftware") ) { _forceSoftware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthRenderer") ) { _depthRenderer=inValue.Cast< ::away3d::core::render::DepthRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceMouseMove") ) { return set_forceMouseMove(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { _touch3DManager=inValue.Cast< ::away3d::core::managers::Touch3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { _mouse3DManager=inValue.Cast< ::away3d::core::managers::Mouse3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalPosDirty") ) { _globalPosDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { return set_backgroundAlpha(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { _backgroundAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entityCollector") ) { _entityCollector=inValue.Cast< ::away3d::core::traverse::EntityCollector >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scissorRectDirty") ) { _scissorRectDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rttBufferManager") ) { _rttBufferManager=inValue.Cast< ::away3d::core::managers::RTTBufferManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filter3DRenderer") ) { _filter3DRenderer=inValue.Cast< ::away3d::core::render::Filter3DRenderer >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_backBufferInvalid") ) { _backBufferInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_depthTextureInvalid") ) { _depthTextureInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"rightClickMenuEnabled") ) { return set_rightClickMenuEnabled(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_rightClickMenuEnabled") ) { _rightClickMenuEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void View3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("stage"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("_layeredView"));
	outFields->push(HX_CSTRING("_profile"));
	outFields->push(HX_CSTRING("_depthPrepass"));
	outFields->push(HX_CSTRING("_viewportDirty"));
	outFields->push(HX_CSTRING("_scissorRectDirty"));
	outFields->push(HX_CSTRING("_scissorRect"));
	outFields->push(HX_CSTRING("_shareContext"));
	outFields->push(HX_CSTRING("_sourceURL"));
	outFields->push(HX_CSTRING("_rightClickMenuEnabled"));
	outFields->push(HX_CSTRING("_rttBufferManager"));
	outFields->push(HX_CSTRING("_antiAlias"));
	outFields->push(HX_CSTRING("_backBufferInvalid"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_parentIsStage"));
	outFields->push(HX_CSTRING("_depthTextureInvalid"));
	outFields->push(HX_CSTRING("_depthRender"));
	outFields->push(HX_CSTRING("_requireDepthRender"));
	outFields->push(HX_CSTRING("_filter3DRenderer"));
	outFields->push(HX_CSTRING("_forceSoftware"));
	outFields->push(HX_CSTRING("_addedToStage"));
	outFields->push(HX_CSTRING("_depthRenderer"));
	outFields->push(HX_CSTRING("_renderer"));
	outFields->push(HX_CSTRING("_touch3DManager"));
	outFields->push(HX_CSTRING("_mouse3DManager"));
	outFields->push(HX_CSTRING("_backgroundAlpha"));
	outFields->push(HX_CSTRING("_backgroundColor"));
	outFields->push(HX_CSTRING("_deltaTime"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_aspectRatio"));
	outFields->push(HX_CSTRING("_entityCollector"));
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_globalPosDirty"));
	outFields->push(HX_CSTRING("_globalPos"));
	outFields->push(HX_CSTRING("_localPos"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("entityCollector"));
	outFields->push(HX_CSTRING("touchPicker"));
	outFields->push(HX_CSTRING("mousePicker"));
	outFields->push(HX_CSTRING("shareContext"));
	outFields->push(HX_CSTRING("renderedFacesCount"));
	outFields->push(HX_CSTRING("antiAlias"));
	outFields->push(HX_CSTRING("deltaTime"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("backgroundAlpha"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("filters3d"));
	outFields->push(HX_CSTRING("layeredView"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("forceMouseMove"));
	outFields->push(HX_CSTRING("stage3DProxy"));
	outFields->push(HX_CSTRING("rightClickMenuEnabled"));
	outFields->push(HX_CSTRING("depthPrepass"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onViewportUpdated"),
	HX_CSTRING("onAdded"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("onLensChanged"),
	HX_CSTRING("get_entityCollector"),
	HX_CSTRING("set_touchPicker"),
	HX_CSTRING("get_touchPicker"),
	HX_CSTRING("set_mousePicker"),
	HX_CSTRING("get_mousePicker"),
	HX_CSTRING("getRay"),
	HX_CSTRING("unproject"),
	HX_CSTRING("project"),
	HX_CSTRING("dispose"),
	HX_CSTRING("initDepthTexture"),
	HX_CSTRING("renderSceneDepthToTexture"),
	HX_CSTRING("renderDepthPrepass"),
	HX_CSTRING("updateViewSizeData"),
	HX_CSTRING("updateTime"),
	HX_CSTRING("updateGlobalPos"),
	HX_CSTRING("render"),
	HX_CSTRING("addSourceURL"),
	HX_CSTRING("updateBackBuffer"),
	HX_CSTRING("set_shareContext"),
	HX_CSTRING("get_shareContext"),
	HX_CSTRING("get_renderedFacesCount"),
	HX_CSTRING("set_antiAlias"),
	HX_CSTRING("get_antiAlias"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_deltaTime"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_camera"),
	HX_CSTRING("get_camera"),
	HX_CSTRING("set_backgroundAlpha"),
	HX_CSTRING("get_backgroundAlpha"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("get_backgroundColor"),
	HX_CSTRING("set_renderer"),
	HX_CSTRING("get_renderer"),
	HX_CSTRING("set_filters3d"),
	HX_CSTRING("get_filters3d"),
	HX_CSTRING("set_layeredView"),
	HX_CSTRING("get_layeredView"),
	HX_CSTRING("set_background"),
	HX_CSTRING("get_background"),
	HX_CSTRING("set_forceMouseMove"),
	HX_CSTRING("get_forceMouseMove"),
	HX_CSTRING("set_stage3DProxy"),
	HX_CSTRING("get_stage3DProxy"),
	HX_CSTRING("set_rightClickMenuEnabled"),
	HX_CSTRING("get_rightClickMenuEnabled"),
	HX_CSTRING("onScenePartitionChanged"),
	HX_CSTRING("init"),
	HX_CSTRING("set_depthPrepass"),
	HX_CSTRING("get_depthPrepass"),
	HX_CSTRING("_layeredView"),
	HX_CSTRING("_profile"),
	HX_CSTRING("_depthPrepass"),
	HX_CSTRING("_viewportDirty"),
	HX_CSTRING("_scissorRectDirty"),
	HX_CSTRING("_scissorRect"),
	HX_CSTRING("_shareContext"),
	HX_CSTRING("_sourceURL"),
	HX_CSTRING("_rightClickMenuEnabled"),
	HX_CSTRING("_rttBufferManager"),
	HX_CSTRING("_antiAlias"),
	HX_CSTRING("_backBufferInvalid"),
	HX_CSTRING("_stage3DProxy"),
	HX_CSTRING("_background"),
	HX_CSTRING("_parentIsStage"),
	HX_CSTRING("_depthTextureInvalid"),
	HX_CSTRING("_depthRender"),
	HX_CSTRING("_requireDepthRender"),
	HX_CSTRING("_filter3DRenderer"),
	HX_CSTRING("_forceSoftware"),
	HX_CSTRING("_addedToStage"),
	HX_CSTRING("_depthRenderer"),
	HX_CSTRING("_renderer"),
	HX_CSTRING("_touch3DManager"),
	HX_CSTRING("_mouse3DManager"),
	HX_CSTRING("_backgroundAlpha"),
	HX_CSTRING("_backgroundColor"),
	HX_CSTRING("_deltaTime"),
	HX_CSTRING("_time"),
	HX_CSTRING("_aspectRatio"),
	HX_CSTRING("_entityCollector"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_globalPosDirty"),
	HX_CSTRING("_globalPos"),
	HX_CSTRING("_localPos"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(View3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(View3D_obj::__mClass,"__mClass");
};

Class View3D_obj::__mClass;

void View3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.containers.View3D"), hx::TCanCast< View3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void View3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace containers
