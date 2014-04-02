#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#include <away3d/core/render/BackgroundImageRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#include <away3d/core/sort/RenderableMergeSort.h>
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
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
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
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
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
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace away3d{
namespace core{
namespace render{

Void RendererBase_obj::__construct(hx::Null< bool >  __o_renderToTexture)
{
HX_STACK_PUSH("RendererBase::new","away3d/core/render/RendererBase.hx",68);
bool renderToTexture = __o_renderToTexture.Default(false);
{
	HX_STACK_LINE(69)
	this->_backgroundR = (int)0;
	HX_STACK_LINE(70)
	this->_backgroundG = (int)0;
	HX_STACK_LINE(71)
	this->_backgroundB = (int)0;
	HX_STACK_LINE(72)
	this->_backgroundAlpha = (int)1;
	HX_STACK_LINE(73)
	this->_shareContext = false;
	HX_STACK_LINE(74)
	this->_textureRatioX = (int)1;
	HX_STACK_LINE(75)
	this->_textureRatioY = (int)1;
	HX_STACK_LINE(76)
	this->_clearOnRender = true;
	HX_STACK_LINE(77)
	this->_rttViewProjectionMatrix = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(78)
	this->_renderableSorter = ::away3d::core::sort::RenderableMergeSort_obj::__new();
	HX_STACK_LINE(79)
	this->_renderToTexture = renderToTexture;
}
;
	return null();
}

RendererBase_obj::~RendererBase_obj() { }

Dynamic RendererBase_obj::__CreateEmpty() { return  new RendererBase_obj; }
hx::ObjectPtr< RendererBase_obj > RendererBase_obj::__new(hx::Null< bool >  __o_renderToTexture)
{  hx::ObjectPtr< RendererBase_obj > result = new RendererBase_obj();
	result->__construct(__o_renderToTexture);
	return result;}

Dynamic RendererBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RendererBase_obj > result = new RendererBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Float RendererBase_obj::set_textureRatioY( Float value){
	HX_STACK_PUSH("RendererBase::set_textureRatioY","away3d/core/render/RendererBase.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(374)
	this->_textureRatioY = value;
	HX_STACK_LINE(375)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_textureRatioY,return )

Float RendererBase_obj::get_textureRatioY( ){
	HX_STACK_PUSH("RendererBase::get_textureRatioY","away3d/core/render/RendererBase.hx",369);
	HX_STACK_THIS(this);
	HX_STACK_LINE(369)
	return this->_textureRatioY;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_textureRatioY,return )

Float RendererBase_obj::set_textureRatioX( Float value){
	HX_STACK_PUSH("RendererBase::set_textureRatioX","away3d/core/render/RendererBase.hx",364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(365)
	this->_textureRatioX = value;
	HX_STACK_LINE(366)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_textureRatioX,return )

Float RendererBase_obj::get_textureRatioX( ){
	HX_STACK_PUSH("RendererBase::get_textureRatioX","away3d/core/render/RendererBase.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_LINE(360)
	return this->_textureRatioX;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_textureRatioX,return )

int RendererBase_obj::set_antiAlias( int antiAlias){
	HX_STACK_PUSH("RendererBase::set_antiAlias","away3d/core/render/RendererBase.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_LINE(356)
	this->_antiAlias = antiAlias;
	HX_STACK_LINE(357)
	return antiAlias;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_antiAlias,return )

int RendererBase_obj::get_antiAlias( ){
	HX_STACK_PUSH("RendererBase::get_antiAlias","away3d/core/render/RendererBase.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(351)
	return this->_antiAlias;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_antiAlias,return )

::away3d::core::render::BackgroundImageRenderer RendererBase_obj::get_backgroundImageRenderer( ){
	HX_STACK_PUSH("RendererBase::get_backgroundImageRenderer","away3d/core/render/RendererBase.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_LINE(347)
	return this->_backgroundImageRenderer;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundImageRenderer,return )

::away3d::textures::Texture2DBase RendererBase_obj::set_background( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("RendererBase::set_background","away3d/core/render/RendererBase.hx",336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(337)
	if (((bool((this->_backgroundImageRenderer != null())) && bool((value == null()))))){
		HX_STACK_LINE(338)
		this->_backgroundImageRenderer->dispose();
		HX_STACK_LINE(339)
		this->_backgroundImageRenderer = null();
	}
	HX_STACK_LINE(341)
	if (((bool((this->_backgroundImageRenderer == null())) && bool((value != null()))))){
		HX_STACK_LINE(341)
		this->_backgroundImageRenderer = ::away3d::core::render::BackgroundImageRenderer_obj::__new(this->_stage3DProxy);
	}
	HX_STACK_LINE(342)
	this->_background = value;
	HX_STACK_LINE(343)
	if (((this->_backgroundImageRenderer != null()))){
		HX_STACK_LINE(343)
		this->_backgroundImageRenderer->set_texture(value);
	}
	HX_STACK_LINE(344)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_background,return )

::away3d::textures::Texture2DBase RendererBase_obj::get_background( ){
	HX_STACK_PUSH("RendererBase::get_background","away3d/core/render/RendererBase.hx",332);
	HX_STACK_THIS(this);
	HX_STACK_LINE(332)
	return this->_background;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_background,return )

Float RendererBase_obj::set_backgroundAlpha( Float value){
	HX_STACK_PUSH("RendererBase::set_backgroundAlpha","away3d/core/render/RendererBase.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(328)
	this->_backgroundAlpha = value;
	HX_STACK_LINE(329)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundAlpha,return )

Float RendererBase_obj::get_backgroundAlpha( ){
	HX_STACK_PUSH("RendererBase::get_backgroundAlpha","away3d/core/render/RendererBase.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(323)
	return this->_backgroundAlpha;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundAlpha,return )

Void RendererBase_obj::onContextUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("RendererBase::onContextUpdate","away3d/core/render/RendererBase.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(319)
		this->_context = this->_stage3DProxy->get_context3D();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,onContextUpdate,(void))

Void RendererBase_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target){
{
		HX_STACK_PUSH("RendererBase::draw","away3d/core/render/RendererBase.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(311)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RendererBase_obj,draw,(void))

Void RendererBase_obj::executeRenderToTexturePass( ::away3d::core::traverse::EntityCollector entityCollector){
{
		HX_STACK_PUSH("RendererBase::executeRenderToTexturePass","away3d/core/render/RendererBase.hx",302);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_LINE(302)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,executeRenderToTexturePass,(void))

Void RendererBase_obj::queueSnapshot( ::flash::display::BitmapData bmd){
{
		HX_STACK_PUSH("RendererBase::queueSnapshot","away3d/core/render/RendererBase.hx",297);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bmd,"bmd");
		HX_STACK_LINE(298)
		this->_snapshotRequired = true;
		HX_STACK_LINE(299)
		this->_snapshotBitmapData = bmd;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,queueSnapshot,(void))

Void RendererBase_obj::executeRender( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  __o_surfaceSelector){
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("RendererBase::executeRender","away3d/core/render/RendererBase.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entityCollector,"entityCollector");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(scissorRect,"scissorRect");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(266)
		this->_renderTarget = target;
		HX_STACK_LINE(267)
		this->_renderTargetSurface = surfaceSelector;
		HX_STACK_LINE(270)
		if (((this->_renderableSorter != null()))){
			HX_STACK_LINE(270)
			this->_renderableSorter->sort(entityCollector);
		}
		HX_STACK_LINE(272)
		if ((this->_renderToTexture)){
			HX_STACK_LINE(272)
			this->executeRenderToTexturePass(entityCollector);
		}
		HX_STACK_LINE(273)
		this->_stage3DProxy->setRenderTarget(target,true,surfaceSelector);
		HX_STACK_LINE(274)
		if (((bool(((bool((target != null())) || bool(!(this->_shareContext))))) && bool(this->_clearOnRender)))){
			HX_STACK_LINE(274)
			this->_context->clear(this->_backgroundR,this->_backgroundG,this->_backgroundB,this->_backgroundAlpha,(int)1,(int)0,null());
		}
		HX_STACK_LINE(275)
		this->_context->setDepthTest(false,(int)519);
		HX_STACK_LINE(277)
		this->_stage3DProxy->set_scissorRect(scissorRect);
		HX_STACK_LINE(278)
		if (((this->_backgroundImageRenderer != null()))){
			HX_STACK_LINE(278)
			this->_backgroundImageRenderer->render();
		}
		HX_STACK_LINE(281)
		this->draw(entityCollector,target);
		HX_STACK_LINE(283)
		this->_context->setDepthTest(false,(int)515);
		HX_STACK_LINE(284)
		if ((!(this->_shareContext))){
			HX_STACK_LINE(284)
			if (((bool(this->_snapshotRequired) && bool((this->_snapshotBitmapData != null()))))){
				HX_STACK_LINE(286)
				this->_context->drawToBitmapData(this->_snapshotBitmapData);
				HX_STACK_LINE(287)
				this->_snapshotRequired = false;
			}
		}
		HX_STACK_LINE(290)
		this->_stage3DProxy->set_scissorRect(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RendererBase_obj,executeRender,(void))

Void RendererBase_obj::render( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target,::flash::geom::Rectangle scissorRect,hx::Null< int >  __o_surfaceSelector){
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("RendererBase::render","away3d/core/render/RendererBase.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_ARG(entityCollector,"entityCollector");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(scissorRect,"scissorRect");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(239)
		if (((bool((this->_stage3DProxy == null())) || bool((this->_context == null()))))){
			HX_STACK_LINE(239)
			return null();
		}
		HX_STACK_LINE(240)
		this->_rttViewProjectionMatrix->copyFrom(entityCollector->get_camera()->get_viewProjection());
		HX_STACK_LINE(241)
		this->_rttViewProjectionMatrix->appendScale(this->_textureRatioX,this->_textureRatioY,(int)1);
		HX_STACK_LINE(243)
		this->executeRender(entityCollector,target,scissorRect,surfaceSelector);
		HX_STACK_LINE(247)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(248)
		while(((i < (int)8))){
			HX_STACK_LINE(250)
			this->_context->setVertexBufferAt(i,null(),null(),null());
			HX_STACK_LINE(251)
			this->_context->setTextureAt(i,null());
			HX_STACK_LINE(252)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RendererBase_obj,render,(void))

Void RendererBase_obj::dispose( ){
{
		HX_STACK_PUSH("RendererBase::dispose","away3d/core/render/RendererBase.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_LINE(223)
		this->set_stage3DProxy(null());
		HX_STACK_LINE(224)
		if (((this->_backgroundImageRenderer != null()))){
			HX_STACK_LINE(225)
			this->_backgroundImageRenderer->dispose();
			HX_STACK_LINE(226)
			this->_backgroundImageRenderer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,dispose,(void))

bool RendererBase_obj::set_shareContext( bool value){
	HX_STACK_PUSH("RendererBase::set_shareContext","away3d/core/render/RendererBase.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(212)
	this->_shareContext = value;
	HX_STACK_LINE(213)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_shareContext,return )

bool RendererBase_obj::get_shareContext( ){
	HX_STACK_PUSH("RendererBase::get_shareContext","away3d/core/render/RendererBase.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->_shareContext;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_shareContext,return )

::away3d::core::managers::Stage3DProxy RendererBase_obj::set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value){
	HX_STACK_PUSH("RendererBase::set_stage3DProxy","away3d/core/render/RendererBase.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(182)
	if (((value == this->_stage3DProxy))){
		HX_STACK_LINE(182)
		return value;
	}
	HX_STACK_LINE(183)
	if (((value == null()))){
		HX_STACK_LINE(184)
		if (((this->_stage3DProxy != null()))){
			HX_STACK_LINE(185)
			this->_stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,this->onContextUpdate_dyn(),null());
			HX_STACK_LINE(186)
			this->_stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_RECREATED,this->onContextUpdate_dyn(),null());
		}
		HX_STACK_LINE(188)
		this->_stage3DProxy = null();
		HX_STACK_LINE(189)
		this->_context = null();
		HX_STACK_LINE(190)
		return null();
	}
	HX_STACK_LINE(192)
	this->_stage3DProxy = value;
	HX_STACK_LINE(193)
	this->_stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,this->onContextUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(194)
	this->_stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_RECREATED,this->onContextUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(195)
	if (((this->_backgroundImageRenderer != null()))){
		HX_STACK_LINE(195)
		this->_backgroundImageRenderer->set_stage3DProxy(value);
	}
	HX_STACK_LINE(196)
	if (((value->get_context3D() != null()))){
		HX_STACK_LINE(196)
		this->_context = value->get_context3D();
	}
	HX_STACK_LINE(197)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_stage3DProxy,return )

::away3d::core::managers::Stage3DProxy RendererBase_obj::get_stage3DProxy( ){
	HX_STACK_PUSH("RendererBase::get_stage3DProxy","away3d/core/render/RendererBase.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return this->_stage3DProxy;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_stage3DProxy,return )

Float RendererBase_obj::set_backgroundB( Float value){
	HX_STACK_PUSH("RendererBase::set_backgroundB","away3d/core/render/RendererBase.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(167)
	this->_backgroundB = value;
	HX_STACK_LINE(168)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundB,return )

Float RendererBase_obj::get_backgroundB( ){
	HX_STACK_PUSH("RendererBase::get_backgroundB","away3d/core/render/RendererBase.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return this->_backgroundB;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundB,return )

Float RendererBase_obj::set_backgroundG( Float value){
	HX_STACK_PUSH("RendererBase::set_backgroundG","away3d/core/render/RendererBase.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(152)
	this->_backgroundG = value;
	HX_STACK_LINE(153)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundG,return )

Float RendererBase_obj::get_backgroundG( ){
	HX_STACK_PUSH("RendererBase::get_backgroundG","away3d/core/render/RendererBase.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(147)
	return this->_backgroundG;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundG,return )

Float RendererBase_obj::set_backgroundR( Float value){
	HX_STACK_PUSH("RendererBase::set_backgroundR","away3d/core/render/RendererBase.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(137)
	this->_backgroundR = value;
	HX_STACK_LINE(138)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_backgroundR,return )

Float RendererBase_obj::get_backgroundR( ){
	HX_STACK_PUSH("RendererBase::get_backgroundR","away3d/core/render/RendererBase.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->_backgroundR;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_backgroundR,return )

bool RendererBase_obj::set_clearOnRender( bool value){
	HX_STACK_PUSH("RendererBase::set_clearOnRender","away3d/core/render/RendererBase.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(122)
	this->_clearOnRender = value;
	HX_STACK_LINE(123)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_clearOnRender,return )

bool RendererBase_obj::get_clearOnRender( ){
	HX_STACK_PUSH("RendererBase::get_clearOnRender","away3d/core/render/RendererBase.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->_clearOnRender;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_clearOnRender,return )

::away3d::core::sort::IEntitySorter RendererBase_obj::set_renderableSorter( ::away3d::core::sort::IEntitySorter value){
	HX_STACK_PUSH("RendererBase::set_renderableSorter","away3d/core/render/RendererBase.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(113)
	this->_renderableSorter = value;
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_renderableSorter,return )

::away3d::core::sort::IEntitySorter RendererBase_obj::get_renderableSorter( ){
	HX_STACK_PUSH("RendererBase::get_renderableSorter","away3d/core/render/RendererBase.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	return this->_renderableSorter;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_renderableSorter,return )

bool RendererBase_obj::get_renderToTexture( ){
	HX_STACK_PUSH("RendererBase::get_renderToTexture","away3d/core/render/RendererBase.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_LINE(104)
	return this->_renderToTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_renderToTexture,return )

Float RendererBase_obj::set_viewHeight( Float value){
	HX_STACK_PUSH("RendererBase::set_viewHeight","away3d/core/render/RendererBase.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(100)
	this->_viewHeight = value;
	HX_STACK_LINE(101)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_viewHeight,return )

Float RendererBase_obj::get_viewHeight( ){
	HX_STACK_PUSH("RendererBase::get_viewHeight","away3d/core/render/RendererBase.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->_viewHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_viewHeight,return )

Float RendererBase_obj::set_viewWidth( Float value){
	HX_STACK_PUSH("RendererBase::set_viewWidth","away3d/core/render/RendererBase.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(91)
	this->_viewWidth = value;
	HX_STACK_LINE(92)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RendererBase_obj,set_viewWidth,return )

Float RendererBase_obj::get_viewWidth( ){
	HX_STACK_PUSH("RendererBase::get_viewWidth","away3d/core/render/RendererBase.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_viewWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,get_viewWidth,return )

::away3d::core::traverse::EntityCollector RendererBase_obj::createEntityCollector( ){
	HX_STACK_PUSH("RendererBase::createEntityCollector","away3d/core/render/RendererBase.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return ::away3d::core::traverse::EntityCollector_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererBase_obj,createEntityCollector,return )


RendererBase_obj::RendererBase_obj()
{
}

void RendererBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RendererBase);
	HX_MARK_MEMBER_NAME(_rttViewProjectionMatrix,"_rttViewProjectionMatrix");
	HX_MARK_MEMBER_NAME(_clearOnRender,"_clearOnRender");
	HX_MARK_MEMBER_NAME(_snapshotRequired,"_snapshotRequired");
	HX_MARK_MEMBER_NAME(_snapshotBitmapData,"_snapshotBitmapData");
	HX_MARK_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_MARK_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_backgroundImageRenderer,"_backgroundImageRenderer");
	HX_MARK_MEMBER_NAME(_renderableSorter,"_renderableSorter");
	HX_MARK_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_MARK_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_MARK_MEMBER_NAME(_renderTargetSurface,"_renderTargetSurface");
	HX_MARK_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_MARK_MEMBER_NAME(_shareContext,"_shareContext");
	HX_MARK_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_MARK_MEMBER_NAME(_backgroundB,"_backgroundB");
	HX_MARK_MEMBER_NAME(_backgroundG,"_backgroundG");
	HX_MARK_MEMBER_NAME(_backgroundR,"_backgroundR");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_END_CLASS();
}

void RendererBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rttViewProjectionMatrix,"_rttViewProjectionMatrix");
	HX_VISIT_MEMBER_NAME(_clearOnRender,"_clearOnRender");
	HX_VISIT_MEMBER_NAME(_snapshotRequired,"_snapshotRequired");
	HX_VISIT_MEMBER_NAME(_snapshotBitmapData,"_snapshotBitmapData");
	HX_VISIT_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_VISIT_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_backgroundImageRenderer,"_backgroundImageRenderer");
	HX_VISIT_MEMBER_NAME(_renderableSorter,"_renderableSorter");
	HX_VISIT_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_VISIT_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_VISIT_MEMBER_NAME(_renderTargetSurface,"_renderTargetSurface");
	HX_VISIT_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_VISIT_MEMBER_NAME(_shareContext,"_shareContext");
	HX_VISIT_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_VISIT_MEMBER_NAME(_backgroundB,"_backgroundB");
	HX_VISIT_MEMBER_NAME(_backgroundG,"_backgroundG");
	HX_VISIT_MEMBER_NAME(_backgroundR,"_backgroundR");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_context,"_context");
}

Dynamic RendererBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return _context; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return get_antiAlias(); }
		if (HX_FIELD_EQ(inName,"viewWidth") ) { return get_viewWidth(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return _antiAlias; }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { return _viewWidth; }
		if (HX_FIELD_EQ(inName,"background") ) { return get_background(); }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { return get_viewHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { return _viewHeight; }
		if (HX_FIELD_EQ(inName,"backgroundB") ) { return get_backgroundB(); }
		if (HX_FIELD_EQ(inName,"backgroundG") ) { return get_backgroundG(); }
		if (HX_FIELD_EQ(inName,"backgroundR") ) { return get_backgroundR(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_backgroundB") ) { return _backgroundB; }
		if (HX_FIELD_EQ(inName,"_backgroundG") ) { return _backgroundG; }
		if (HX_FIELD_EQ(inName,"_backgroundR") ) { return _backgroundR; }
		if (HX_FIELD_EQ(inName,"shareContext") ) { return get_shareContext(); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return get_stage3DProxy(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return set_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return get_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"queueSnapshot") ) { return queueSnapshot_dyn(); }
		if (HX_FIELD_EQ(inName,"executeRender") ) { return executeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewWidth") ) { return set_viewWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewWidth") ) { return get_viewWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { return _renderTarget; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { return _shareContext; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { return get_textureRatioY(); }
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { return get_textureRatioX(); }
		if (HX_FIELD_EQ(inName,"clearOnRender") ) { return get_clearOnRender(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewHeight") ) { return set_viewHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewHeight") ) { return get_viewHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_clearOnRender") ) { return _clearOnRender; }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { return _textureRatioY; }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { return _textureRatioX; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onContextUpdate") ) { return onContextUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundB") ) { return set_backgroundB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundB") ) { return get_backgroundB_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundG") ) { return set_backgroundG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundG") ) { return get_backgroundG_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundR") ) { return set_backgroundR_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundR") ) { return get_backgroundR_dyn(); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { return get_backgroundAlpha(); }
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return get_renderToTexture(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_shareContext") ) { return set_shareContext_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shareContext") ) { return get_shareContext_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stage3DProxy") ) { return set_stage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage3DProxy") ) { return get_stage3DProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { return _renderToTexture; }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { return _backgroundAlpha; }
		if (HX_FIELD_EQ(inName,"renderableSorter") ) { return get_renderableSorter(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_textureRatioY") ) { return set_textureRatioY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureRatioY") ) { return get_textureRatioY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textureRatioX") ) { return set_textureRatioX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureRatioX") ) { return get_textureRatioX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clearOnRender") ) { return set_clearOnRender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clearOnRender") ) { return get_clearOnRender_dyn(); }
		if (HX_FIELD_EQ(inName,"_snapshotRequired") ) { return _snapshotRequired; }
		if (HX_FIELD_EQ(inName,"_renderableSorter") ) { return _renderableSorter; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_backgroundAlpha") ) { return set_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundAlpha") ) { return get_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderToTexture") ) { return get_renderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_snapshotBitmapData") ) { return _snapshotBitmapData; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_renderableSorter") ) { return set_renderableSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderableSorter") ) { return get_renderableSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderTargetSurface") ) { return _renderTargetSurface; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createEntityCollector") ) { return createEntityCollector_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"backgroundImageRenderer") ) { return get_backgroundImageRenderer(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_rttViewProjectionMatrix") ) { return _rttViewProjectionMatrix; }
		if (HX_FIELD_EQ(inName,"_backgroundImageRenderer") ) { return _backgroundImageRenderer; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"executeRenderToTexturePass") ) { return executeRenderToTexturePass_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_backgroundImageRenderer") ) { return get_backgroundImageRenderer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RendererBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return set_antiAlias(inValue); }
		if (HX_FIELD_EQ(inName,"viewWidth") ) { return set_viewWidth(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { _viewWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { return set_viewHeight(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { _viewHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundB") ) { return set_backgroundB(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundG") ) { return set_backgroundG(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundR") ) { return set_backgroundR(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_backgroundB") ) { _backgroundB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundG") ) { _backgroundG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundR") ) { _backgroundR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shareContext") ) { return set_shareContext(inValue); }
		if (HX_FIELD_EQ(inName,"stage3DProxy") ) { return set_stage3DProxy(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { _renderTarget=inValue.Cast< ::flash::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shareContext") ) { _shareContext=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { return set_textureRatioY(inValue); }
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { return set_textureRatioX(inValue); }
		if (HX_FIELD_EQ(inName,"clearOnRender") ) { return set_clearOnRender(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_clearOnRender") ) { _clearOnRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { _textureRatioY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { _textureRatioX=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { return set_backgroundAlpha(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { _renderToTexture=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { _backgroundAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderableSorter") ) { return set_renderableSorter(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_snapshotRequired") ) { _snapshotRequired=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderableSorter") ) { _renderableSorter=inValue.Cast< ::away3d::core::sort::IEntitySorter >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_snapshotBitmapData") ) { _snapshotBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderTargetSurface") ) { _renderTargetSurface=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_rttViewProjectionMatrix") ) { _rttViewProjectionMatrix=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundImageRenderer") ) { _backgroundImageRenderer=inValue.Cast< ::away3d::core::render::BackgroundImageRenderer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RendererBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rttViewProjectionMatrix"));
	outFields->push(HX_CSTRING("_clearOnRender"));
	outFields->push(HX_CSTRING("_snapshotRequired"));
	outFields->push(HX_CSTRING("_snapshotBitmapData"));
	outFields->push(HX_CSTRING("_textureRatioY"));
	outFields->push(HX_CSTRING("_textureRatioX"));
	outFields->push(HX_CSTRING("_antiAlias"));
	outFields->push(HX_CSTRING("_renderToTexture"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_backgroundImageRenderer"));
	outFields->push(HX_CSTRING("_renderableSorter"));
	outFields->push(HX_CSTRING("_viewHeight"));
	outFields->push(HX_CSTRING("_viewWidth"));
	outFields->push(HX_CSTRING("_renderTargetSurface"));
	outFields->push(HX_CSTRING("_renderTarget"));
	outFields->push(HX_CSTRING("_shareContext"));
	outFields->push(HX_CSTRING("_backgroundAlpha"));
	outFields->push(HX_CSTRING("_backgroundB"));
	outFields->push(HX_CSTRING("_backgroundG"));
	outFields->push(HX_CSTRING("_backgroundR"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("_context"));
	outFields->push(HX_CSTRING("textureRatioY"));
	outFields->push(HX_CSTRING("textureRatioX"));
	outFields->push(HX_CSTRING("antiAlias"));
	outFields->push(HX_CSTRING("backgroundImageRenderer"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("backgroundAlpha"));
	outFields->push(HX_CSTRING("shareContext"));
	outFields->push(HX_CSTRING("stage3DProxy"));
	outFields->push(HX_CSTRING("backgroundB"));
	outFields->push(HX_CSTRING("backgroundG"));
	outFields->push(HX_CSTRING("backgroundR"));
	outFields->push(HX_CSTRING("clearOnRender"));
	outFields->push(HX_CSTRING("renderableSorter"));
	outFields->push(HX_CSTRING("renderToTexture"));
	outFields->push(HX_CSTRING("viewHeight"));
	outFields->push(HX_CSTRING("viewWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_textureRatioY"),
	HX_CSTRING("get_textureRatioY"),
	HX_CSTRING("set_textureRatioX"),
	HX_CSTRING("get_textureRatioX"),
	HX_CSTRING("set_antiAlias"),
	HX_CSTRING("get_antiAlias"),
	HX_CSTRING("get_backgroundImageRenderer"),
	HX_CSTRING("set_background"),
	HX_CSTRING("get_background"),
	HX_CSTRING("set_backgroundAlpha"),
	HX_CSTRING("get_backgroundAlpha"),
	HX_CSTRING("onContextUpdate"),
	HX_CSTRING("draw"),
	HX_CSTRING("executeRenderToTexturePass"),
	HX_CSTRING("queueSnapshot"),
	HX_CSTRING("executeRender"),
	HX_CSTRING("render"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_shareContext"),
	HX_CSTRING("get_shareContext"),
	HX_CSTRING("set_stage3DProxy"),
	HX_CSTRING("get_stage3DProxy"),
	HX_CSTRING("set_backgroundB"),
	HX_CSTRING("get_backgroundB"),
	HX_CSTRING("set_backgroundG"),
	HX_CSTRING("get_backgroundG"),
	HX_CSTRING("set_backgroundR"),
	HX_CSTRING("get_backgroundR"),
	HX_CSTRING("set_clearOnRender"),
	HX_CSTRING("get_clearOnRender"),
	HX_CSTRING("set_renderableSorter"),
	HX_CSTRING("get_renderableSorter"),
	HX_CSTRING("get_renderToTexture"),
	HX_CSTRING("set_viewHeight"),
	HX_CSTRING("get_viewHeight"),
	HX_CSTRING("set_viewWidth"),
	HX_CSTRING("get_viewWidth"),
	HX_CSTRING("createEntityCollector"),
	HX_CSTRING("_rttViewProjectionMatrix"),
	HX_CSTRING("_clearOnRender"),
	HX_CSTRING("_snapshotRequired"),
	HX_CSTRING("_snapshotBitmapData"),
	HX_CSTRING("_textureRatioY"),
	HX_CSTRING("_textureRatioX"),
	HX_CSTRING("_antiAlias"),
	HX_CSTRING("_renderToTexture"),
	HX_CSTRING("_background"),
	HX_CSTRING("_backgroundImageRenderer"),
	HX_CSTRING("_renderableSorter"),
	HX_CSTRING("_viewHeight"),
	HX_CSTRING("_viewWidth"),
	HX_CSTRING("_renderTargetSurface"),
	HX_CSTRING("_renderTarget"),
	HX_CSTRING("_shareContext"),
	HX_CSTRING("_backgroundAlpha"),
	HX_CSTRING("_backgroundB"),
	HX_CSTRING("_backgroundG"),
	HX_CSTRING("_backgroundR"),
	HX_CSTRING("_stage3DProxy"),
	HX_CSTRING("_context"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererBase_obj::__mClass,"__mClass");
};

Class RendererBase_obj::__mClass;

void RendererBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.render.RendererBase"), hx::TCanCast< RendererBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RendererBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace render
