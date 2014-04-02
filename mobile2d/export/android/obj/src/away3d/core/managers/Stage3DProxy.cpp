#include <hxcpp.h>

#ifndef INCLUDED_OpenFLStage3D
#include <OpenFLStage3D.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#include <away3d/core/managers/Mouse3DManager.h>
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
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_flash_display_Stage3D
#include <flash/display/Stage3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DRenderMode
#include <flash/display3D/Context3DRenderMode.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void Stage3DProxy_obj::__construct(int stage3DIndex,::flash::display::Stage3D stage3D,::away3d::core::managers::Stage3DManager stage3DManager,hx::Null< bool >  __o_forceSoftware,::String __o_profile)
{
HX_STACK_PUSH("Stage3DProxy::new","away3d/core/managers/Stage3DProxy.hx",117);
bool forceSoftware = __o_forceSoftware.Default(false);
::String profile = __o_profile.Default(HX_CSTRING("baseline"));
{
	HX_STACK_LINE(118)
	this->_stage3DIndex = (int)-1;
	HX_STACK_LINE(119)
	this->_stage3DIndex = stage3DIndex;
	HX_STACK_LINE(120)
	this->_stage3D = stage3D;
	HX_STACK_LINE(121)
	this->_stage3D->x = (int)0;
	HX_STACK_LINE(122)
	this->_stage3D->y = (int)0;
	HX_STACK_LINE(123)
	this->_stage3D->visible = true;
	HX_STACK_LINE(124)
	this->_stage3DManager = stage3DManager;
	HX_STACK_LINE(125)
	this->_viewPort = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(126)
	this->_enableDepthAndStencil = true;
	HX_STACK_LINE(128)
	this->_stage3D->addEventListener(::flash::events::Event_obj::CONTEXT3D_CREATE,this->onContext3DUpdate_dyn(),false,(int)1000,false);
	HX_STACK_LINE(130)
	super::__construct(null());
	HX_STACK_LINE(131)
	this->forceSoftware = forceSoftware;
	HX_STACK_LINE(132)
	this->_profile = profile;
	HX_STACK_LINE(133)
	this->start();
}
;
	return null();
}

Stage3DProxy_obj::~Stage3DProxy_obj() { }

Dynamic Stage3DProxy_obj::__CreateEmpty() { return  new Stage3DProxy_obj; }
hx::ObjectPtr< Stage3DProxy_obj > Stage3DProxy_obj::__new(int stage3DIndex,::flash::display::Stage3D stage3D,::away3d::core::managers::Stage3DManager stage3DManager,hx::Null< bool >  __o_forceSoftware,::String __o_profile)
{  hx::ObjectPtr< Stage3DProxy_obj > result = new Stage3DProxy_obj();
	result->__construct(stage3DIndex,stage3D,stage3DManager,__o_forceSoftware,__o_profile);
	return result;}

Dynamic Stage3DProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3DProxy_obj > result = new Stage3DProxy_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Stage3DProxy_obj::clearDepthBuffer( ){
{
		HX_STACK_PUSH("Stage3DProxy::clearDepthBuffer","away3d/core/managers/Stage3DProxy.hx",584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(585)
		if (((this->_context3D == null()))){
			HX_STACK_LINE(585)
			return null();
		}
		HX_STACK_LINE(586)
		this->_context3D->clear((int)0,(int)0,(int)0,(int)1,(int)1,(int)0,(int)256);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,clearDepthBuffer,(void))

bool Stage3DProxy_obj::recoverFromDisposal( ){
	HX_STACK_PUSH("Stage3DProxy::recoverFromDisposal","away3d/core/managers/Stage3DProxy.hx",574);
	HX_STACK_THIS(this);
	HX_STACK_LINE(575)
	if (((this->_context3D == null()))){
		HX_STACK_LINE(575)
		return false;
	}
	HX_STACK_LINE(576)
	if (((this->_context3D->driverInfo == HX_CSTRING("Disposed")))){
		HX_STACK_LINE(577)
		this->_context3D = null();
		HX_STACK_LINE(578)
		this->dispatchEvent(::away3d::events::Stage3DEvent_obj::__new(::away3d::events::Stage3DEvent_obj::CONTEXT3D_DISPOSED,null(),null()));
		HX_STACK_LINE(579)
		return false;
	}
	HX_STACK_LINE(581)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,recoverFromDisposal,return )

Void Stage3DProxy_obj::onEnterFrame( ::flash::events::Event event){
{
		HX_STACK_PUSH("Stage3DProxy::onEnterFrame","away3d/core/managers/Stage3DProxy.hx",556);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(557)
		if (((this->_context3D == null()))){
			HX_STACK_LINE(557)
			return null();
		}
		HX_STACK_LINE(558)
		this->clear();
		HX_STACK_LINE(566)
		this->present();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,onEnterFrame,(void))

Void Stage3DProxy_obj::requestContext( hx::Null< bool >  __o_forceSoftware,::String __o_profile){
bool forceSoftware = __o_forceSoftware.Default(false);
::String profile = __o_profile.Default(HX_CSTRING("baseline"));
	HX_STACK_PUSH("Stage3DProxy::requestContext","away3d/core/managers/Stage3DProxy.hx",534);
	HX_STACK_THIS(this);
	HX_STACK_ARG(forceSoftware,"forceSoftware");
	HX_STACK_ARG(profile,"profile");
{
		HX_STACK_LINE(539)
		if ((!(this->_usesSoftwareRendering))){
			HX_STACK_LINE(540)
			this->_usesSoftwareRendering = forceSoftware;
		}
		HX_STACK_LINE(541)
		this->_profile = profile;
		HX_STACK_LINE(543)
		::flash::display3D::Context3DRenderMode renderMode = (  ((forceSoftware)) ? ::flash::display3D::Context3DRenderMode(::flash::display3D::Context3DRenderMode_obj::SOFTWARE) : ::flash::display3D::Context3DRenderMode(::flash::display3D::Context3DRenderMode_obj::AUTO) );		HX_STACK_VAR(renderMode,"renderMode");
		HX_STACK_LINE(544)
		::OpenFLStage3D_obj::requestAGLSLContext3D(this->_stage3D,::Std_obj::string(renderMode));
		HX_STACK_LINE(547)
		this->_contextRequested = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3DProxy_obj,requestContext,(void))

Void Stage3DProxy_obj::onContext3DUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("Stage3DProxy::onContext3DUpdate","away3d/core/managers/Stage3DProxy.hx",504);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(505)
		::haxe::Log_obj::trace(HX_CSTRING("lost"),hx::SourceInfo(HX_CSTRING("Stage3DProxy.hx"),505,HX_CSTRING("away3d.core.managers.Stage3DProxy"),HX_CSTRING("onContext3DUpdate")));
		HX_STACK_LINE(506)
		if (((this->_stage3D->context3D != null()))){
			HX_STACK_LINE(507)
			bool hadContext = (this->_context3D != null());		HX_STACK_VAR(hadContext,"hadContext");
			HX_STACK_LINE(508)
			this->_context3D = this->_stage3D->context3D;
			HX_STACK_LINE(509)
			this->_context3D->enableErrorChecking = ::away3d::debug::Debug_obj::active;
			HX_STACK_LINE(518)
			if (((bool((this->_backBufferWidth != (int)0)) && bool((this->_backBufferHeight != (int)0))))){
				HX_STACK_LINE(518)
				this->_context3D->configureBackBuffer(this->_backBufferWidth,this->_backBufferHeight,this->_antiAlias,this->_enableDepthAndStencil);
			}
			HX_STACK_LINE(522)
			this->setRenderCallback(this->_callbackMethod_dyn());
			HX_STACK_LINE(524)
			this->dispatchEvent(::away3d::events::Stage3DEvent_obj::__new((  ((hadContext)) ? ::String(::away3d::events::Stage3DEvent_obj::CONTEXT3D_RECREATED) : ::String(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED) ),null(),null()));
		}
		else{
			HX_STACK_LINE(527)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Rendering context lost!"),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,onContext3DUpdate,(void))

Void Stage3DProxy_obj::freeContext3D( ){
{
		HX_STACK_PUSH("Stage3DProxy::freeContext3D","away3d/core/managers/Stage3DProxy.hx",491);
		HX_STACK_THIS(this);
		HX_STACK_LINE(492)
		if (((this->_context3D != null()))){
			HX_STACK_LINE(493)
			this->_context3D->dispose();
			HX_STACK_LINE(494)
			this->dispatchEvent(::away3d::events::Stage3DEvent_obj::__new(::away3d::events::Stage3DEvent_obj::CONTEXT3D_DISPOSED,null(),null()));
		}
		HX_STACK_LINE(496)
		this->_context3D = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,freeContext3D,(void))

::away3d::core::managers::Touch3DManager Stage3DProxy_obj::set_touch3DManager( ::away3d::core::managers::Touch3DManager value){
	HX_STACK_PUSH("Stage3DProxy::set_touch3DManager","away3d/core/managers/Stage3DProxy.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(483)
	this->_touch3DManager = value;
	HX_STACK_LINE(484)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_touch3DManager,return )

::away3d::core::managers::Touch3DManager Stage3DProxy_obj::get_touch3DManager( ){
	HX_STACK_PUSH("Stage3DProxy::get_touch3DManager","away3d/core/managers/Stage3DProxy.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(478)
	return this->_touch3DManager;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_touch3DManager,return )

::away3d::core::managers::Mouse3DManager Stage3DProxy_obj::set_mouse3DManager( ::away3d::core::managers::Mouse3DManager value){
	HX_STACK_PUSH("Stage3DProxy::set_mouse3DManager","away3d/core/managers/Stage3DProxy.hx",473);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(474)
	this->_mouse3DManager = value;
	HX_STACK_LINE(475)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_mouse3DManager,return )

::away3d::core::managers::Mouse3DManager Stage3DProxy_obj::get_mouse3DManager( ){
	HX_STACK_PUSH("Stage3DProxy::get_mouse3DManager","away3d/core/managers/Stage3DProxy.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_LINE(469)
	return this->_mouse3DManager;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_mouse3DManager,return )

bool Stage3DProxy_obj::set_bufferClear( bool newBufferClear){
	HX_STACK_PUSH("Stage3DProxy::set_bufferClear","away3d/core/managers/Stage3DProxy.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_ARG(newBufferClear,"newBufferClear");
	HX_STACK_LINE(461)
	this->_bufferClear = newBufferClear;
	HX_STACK_LINE(462)
	return newBufferClear;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_bufferClear,return )

bool Stage3DProxy_obj::get_bufferClear( ){
	HX_STACK_PUSH("Stage3DProxy::get_bufferClear","away3d/core/managers/Stage3DProxy.hx",456);
	HX_STACK_THIS(this);
	HX_STACK_LINE(456)
	return this->_bufferClear;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_bufferClear,return )

bool Stage3DProxy_obj::set_visible( bool value){
	HX_STACK_PUSH("Stage3DProxy::set_visible","away3d/core/managers/Stage3DProxy.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(448)
	this->_stage3D->visible = value;
	HX_STACK_LINE(449)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_visible,return )

bool Stage3DProxy_obj::get_visible( ){
	HX_STACK_PUSH("Stage3DProxy::get_visible","away3d/core/managers/Stage3DProxy.hx",443);
	HX_STACK_THIS(this);
	HX_STACK_LINE(443)
	return this->_stage3D->visible;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_visible,return )

int Stage3DProxy_obj::set_color( int color){
	HX_STACK_PUSH("Stage3DProxy::set_color","away3d/core/managers/Stage3DProxy.hx",434);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(435)
	this->_color = color;
	HX_STACK_LINE(436)
	return color;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_color,return )

int Stage3DProxy_obj::get_color( ){
	HX_STACK_PUSH("Stage3DProxy::get_color","away3d/core/managers/Stage3DProxy.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_LINE(430)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_color,return )

::flash::geom::Rectangle Stage3DProxy_obj::get_viewPort( ){
	HX_STACK_PUSH("Stage3DProxy::get_viewPort","away3d/core/managers/Stage3DProxy.hx",421);
	HX_STACK_THIS(this);
	HX_STACK_LINE(422)
	this->_viewportDirty = false;
	HX_STACK_LINE(423)
	return this->_viewPort;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_viewPort,return )

int Stage3DProxy_obj::set_antiAlias( int antiAlias){
	HX_STACK_PUSH("Stage3DProxy::set_antiAlias","away3d/core/managers/Stage3DProxy.hx",411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(antiAlias,"antiAlias");
	HX_STACK_LINE(412)
	this->_antiAlias = antiAlias;
	HX_STACK_LINE(413)
	this->_backBufferDirty = true;
	HX_STACK_LINE(414)
	return antiAlias;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_antiAlias,return )

int Stage3DProxy_obj::get_antiAlias( ){
	HX_STACK_PUSH("Stage3DProxy::get_antiAlias","away3d/core/managers/Stage3DProxy.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_LINE(407)
	return this->_antiAlias;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_antiAlias,return )

int Stage3DProxy_obj::set_height( int height){
	HX_STACK_PUSH("Stage3DProxy::set_height","away3d/core/managers/Stage3DProxy.hx",395);
	HX_STACK_THIS(this);
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(396)
	if (((this->_viewPort->height == height))){
		HX_STACK_LINE(396)
		return height;
	}
	HX_STACK_LINE(397)
	this->_viewPort->height = this->_backBufferHeight = height;
	HX_STACK_LINE(398)
	this->_backBufferDirty = true;
	HX_STACK_LINE(399)
	this->notifyViewportUpdated();
	HX_STACK_LINE(400)
	return height;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_height,return )

int Stage3DProxy_obj::get_height( ){
	HX_STACK_PUSH("Stage3DProxy::get_height","away3d/core/managers/Stage3DProxy.hx",391);
	HX_STACK_THIS(this);
	HX_STACK_LINE(391)
	return this->_backBufferHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_height,return )

int Stage3DProxy_obj::set_width( int width){
	HX_STACK_PUSH("Stage3DProxy::set_width","away3d/core/managers/Stage3DProxy.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_LINE(380)
	if (((this->_viewPort->width == width))){
		HX_STACK_LINE(380)
		return width;
	}
	HX_STACK_LINE(381)
	this->_viewPort->width = this->_backBufferWidth = width;
	HX_STACK_LINE(382)
	this->_backBufferDirty = true;
	HX_STACK_LINE(383)
	this->notifyViewportUpdated();
	HX_STACK_LINE(384)
	return width;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_width,return )

int Stage3DProxy_obj::get_width( ){
	HX_STACK_PUSH("Stage3DProxy::get_width","away3d/core/managers/Stage3DProxy.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_LINE(375)
	return this->_backBufferWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_width,return )

Float Stage3DProxy_obj::set_y( Float value){
	HX_STACK_PUSH("Stage3DProxy::set_y","away3d/core/managers/Stage3DProxy.hx",364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(365)
	if (((this->_viewPort->y == value))){
		HX_STACK_LINE(365)
		return value;
	}
	HX_STACK_LINE(366)
	this->_stage3D->y = this->_viewPort->y = value;
	HX_STACK_LINE(367)
	this->notifyViewportUpdated();
	HX_STACK_LINE(368)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_y,return )

Float Stage3DProxy_obj::get_y( ){
	HX_STACK_PUSH("Stage3DProxy::get_y","away3d/core/managers/Stage3DProxy.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_LINE(360)
	return this->_stage3D->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_y,return )

Float Stage3DProxy_obj::set_x( Float value){
	HX_STACK_PUSH("Stage3DProxy::set_x","away3d/core/managers/Stage3DProxy.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(350)
	if (((this->_viewPort->x == value))){
		HX_STACK_LINE(350)
		return value;
	}
	HX_STACK_LINE(351)
	this->_stage3D->x = this->_viewPort->x = value;
	HX_STACK_LINE(352)
	this->notifyViewportUpdated();
	HX_STACK_LINE(353)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_x,return )

Float Stage3DProxy_obj::get_x( ){
	HX_STACK_PUSH("Stage3DProxy::get_x","away3d/core/managers/Stage3DProxy.hx",345);
	HX_STACK_THIS(this);
	HX_STACK_LINE(345)
	return this->_stage3D->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_x,return )

bool Stage3DProxy_obj::get_usesSoftwareRendering( ){
	HX_STACK_PUSH("Stage3DProxy::get_usesSoftwareRendering","away3d/core/managers/Stage3DProxy.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	return this->_usesSoftwareRendering;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_usesSoftwareRendering,return )

::String Stage3DProxy_obj::get_driverInfo( ){
	HX_STACK_PUSH("Stage3DProxy::get_driverInfo","away3d/core/managers/Stage3DProxy.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_LINE(327)
	return (  (((this->_context3D != null()))) ? ::String(this->_context3D->driverInfo) : ::String(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_driverInfo,return )

::flash::display3D::Context3D Stage3DProxy_obj::get_context3D( ){
	HX_STACK_PUSH("Stage3DProxy::get_context3D","away3d/core/managers/Stage3DProxy.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	return this->_context3D;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_context3D,return )

::flash::display::Stage3D Stage3DProxy_obj::get_stage3D( ){
	HX_STACK_PUSH("Stage3DProxy::get_stage3D","away3d/core/managers/Stage3DProxy.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_LINE(311)
	return this->_stage3D;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_stage3D,return )

int Stage3DProxy_obj::get_stage3DIndex( ){
	HX_STACK_PUSH("Stage3DProxy::get_stage3DIndex","away3d/core/managers/Stage3DProxy.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return this->_stage3DIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_stage3DIndex,return )

::flash::geom::Rectangle Stage3DProxy_obj::set_scissorRect( ::flash::geom::Rectangle value){
	HX_STACK_PUSH("Stage3DProxy::set_scissorRect","away3d/core/managers/Stage3DProxy.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(294)
	this->_scissorRect = value;
	HX_STACK_LINE(295)
	this->_context3D->setScissorRectangle(this->_scissorRect);
	HX_STACK_LINE(296)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_scissorRect,return )

::flash::geom::Rectangle Stage3DProxy_obj::get_scissorRect( ){
	HX_STACK_PUSH("Stage3DProxy::get_scissorRect","away3d/core/managers/Stage3DProxy.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_LINE(289)
	return this->_scissorRect;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_scissorRect,return )

Void Stage3DProxy_obj::present( ){
{
		HX_STACK_PUSH("Stage3DProxy::present","away3d/core/managers/Stage3DProxy.hx",244);
		HX_STACK_THIS(this);
		HX_STACK_LINE(245)
		if (((this->_context3D == null()))){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(246)
		::haxe::Log_obj::trace(HX_CSTRING("present2"),hx::SourceInfo(HX_CSTRING("Stage3DProxy.hx"),246,HX_CSTRING("away3d.core.managers.Stage3DProxy"),HX_CSTRING("present")));
		HX_STACK_LINE(247)
		this->_context3D->present();
		HX_STACK_LINE(248)
		this->_activeProgram3D = null();
		HX_STACK_LINE(249)
		if (((this->_mouse3DManager != null()))){
			HX_STACK_LINE(249)
			this->_mouse3DManager->fireMouseEvents();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,present,(void))

Void Stage3DProxy_obj::clear( ){
{
		HX_STACK_PUSH("Stage3DProxy::clear","away3d/core/managers/Stage3DProxy.hx",230);
		HX_STACK_THIS(this);
		HX_STACK_LINE(231)
		if (((this->_context3D == null()))){
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(232)
		if ((this->_backBufferDirty)){
			HX_STACK_LINE(233)
			this->configureBackBuffer(this->_backBufferWidth,this->_backBufferHeight,this->_antiAlias,this->_enableDepthAndStencil);
			HX_STACK_LINE(234)
			this->_backBufferDirty = false;
		}
		HX_STACK_LINE(236)
		this->_context3D->clear((Float(((int((int(this->_color) >> int((int)16))) & int((int)255)))) / Float(255.0)),(Float(((int((int(this->_color) >> int((int)8))) & int((int)255)))) / Float(255.0)),(Float(((int(this->_color) & int((int)255)))) / Float(255.0)),(Float(((int((int(this->_color) >> int((int)24))) & int((int)255)))) / Float(255.0)),null(),null(),null());
		HX_STACK_LINE(237)
		this->_bufferClear = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,clear,(void))

Void Stage3DProxy_obj::setRenderTarget( ::flash::display3D::textures::TextureBase target,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_PUSH("Stage3DProxy::setRenderTarget","away3d/core/managers/Stage3DProxy.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
	HX_STACK_ARG(surfaceSelector,"surfaceSelector");
{
		HX_STACK_LINE(218)
		if (((bool((bool((this->_renderTarget == target)) && bool((surfaceSelector == this->_renderSurfaceSelector)))) && bool((this->_enableDepthAndStencil == enableDepthAndStencil))))){
			HX_STACK_LINE(218)
			return null();
		}
		HX_STACK_LINE(219)
		this->_renderTarget = target;
		HX_STACK_LINE(220)
		this->_renderSurfaceSelector = surfaceSelector;
		HX_STACK_LINE(221)
		this->_enableDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(222)
		if (((target != null()))){
			HX_STACK_LINE(222)
			this->_context3D->setRenderToTexture(target,enableDepthAndStencil,this->_antiAlias,surfaceSelector);
		}
		else{
			HX_STACK_LINE(223)
			this->_context3D->setRenderToBackBuffer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage3DProxy_obj,setRenderTarget,(void))

int Stage3DProxy_obj::get_renderSurfaceSelector( ){
	HX_STACK_PUSH("Stage3DProxy::get_renderSurfaceSelector","away3d/core/managers/Stage3DProxy.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(213)
	return this->_renderSurfaceSelector;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_renderSurfaceSelector,return )

::flash::display3D::textures::TextureBase Stage3DProxy_obj::get_renderTarget( ){
	HX_STACK_PUSH("Stage3DProxy::get_renderTarget","away3d/core/managers/Stage3DProxy.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	return this->_renderTarget;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_renderTarget,return )

bool Stage3DProxy_obj::set_enableDepthAndStencil( bool enableDepthAndStencil){
	HX_STACK_PUSH("Stage3DProxy::set_enableDepthAndStencil","away3d/core/managers/Stage3DProxy.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
	HX_STACK_LINE(204)
	this->_enableDepthAndStencil = enableDepthAndStencil;
	HX_STACK_LINE(205)
	this->_backBufferDirty = true;
	HX_STACK_LINE(206)
	return enableDepthAndStencil;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,set_enableDepthAndStencil,return )

bool Stage3DProxy_obj::get_enableDepthAndStencil( ){
	HX_STACK_PUSH("Stage3DProxy::get_enableDepthAndStencil","away3d/core/managers/Stage3DProxy.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return this->_enableDepthAndStencil;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_enableDepthAndStencil,return )

Void Stage3DProxy_obj::configureBackBuffer( int backBufferWidth,int backBufferHeight,int antiAlias,bool enableDepthAndStencil){
{
		HX_STACK_PUSH("Stage3DProxy::configureBackBuffer","away3d/core/managers/Stage3DProxy.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_ARG(backBufferWidth,"backBufferWidth");
		HX_STACK_ARG(backBufferHeight,"backBufferHeight");
		HX_STACK_ARG(antiAlias,"antiAlias");
		HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil");
		HX_STACK_LINE(184)
		int oldWidth = this->_backBufferWidth;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(185)
		int oldHeight = this->_backBufferHeight;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(186)
		this->_viewPort->width = this->_backBufferWidth = backBufferWidth;
		HX_STACK_LINE(187)
		this->_viewPort->height = this->_backBufferHeight = backBufferHeight;
		HX_STACK_LINE(188)
		if (((bool((oldWidth != this->_backBufferWidth)) || bool((oldHeight != this->_backBufferHeight))))){
			HX_STACK_LINE(188)
			this->notifyViewportUpdated();
		}
		HX_STACK_LINE(189)
		this->_antiAlias = antiAlias;
		HX_STACK_LINE(190)
		this->_enableDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(191)
		if (((this->_context3D != null()))){
			HX_STACK_LINE(191)
			this->_context3D->configureBackBuffer(backBufferWidth,backBufferHeight,antiAlias,enableDepthAndStencil);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage3DProxy_obj,configureBackBuffer,(void))

Void Stage3DProxy_obj::setRenderCallback( Dynamic func){
{
		HX_STACK_PUSH("Stage3DProxy::setRenderCallback","away3d/core/managers/Stage3DProxy.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(163)
		if (((this->_context3D != null()))){
			HX_STACK_LINE(164)
			if (((this->_callbackMethod_dyn() != null()))){
				HX_STACK_LINE(165)
				this->_context3D->removeRenderMethod(func);
			}
			HX_STACK_LINE(167)
			if (((func != null()))){
				HX_STACK_LINE(168)
				this->_context3D->setRenderMethod(func);
			}
		}
		HX_STACK_LINE(171)
		this->_callbackMethod = func;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DProxy_obj,setRenderCallback,(void))

Void Stage3DProxy_obj::dispose( ){
{
		HX_STACK_PUSH("Stage3DProxy::dispose","away3d/core/managers/Stage3DProxy.hx",150);
		HX_STACK_THIS(this);
		HX_STACK_LINE(151)
		this->_stage3DManager->removeStage3DProxy(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(152)
		this->_stage3D->removeEventListener(::flash::events::Event_obj::CONTEXT3D_CREATE,this->onContext3DUpdate_dyn(),null());
		HX_STACK_LINE(153)
		this->freeContext3D();
		HX_STACK_LINE(154)
		this->_stage3D = null();
		HX_STACK_LINE(155)
		this->_stage3DManager = null();
		HX_STACK_LINE(156)
		this->_stage3DIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,dispose,(void))

::String Stage3DProxy_obj::get_profile( ){
	HX_STACK_PUSH("Stage3DProxy::get_profile","away3d/core/managers/Stage3DProxy.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_LINE(142)
	return this->_profile;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,get_profile,return )

Void Stage3DProxy_obj::start( ){
{
		HX_STACK_PUSH("Stage3DProxy::start","away3d/core/managers/Stage3DProxy.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		this->requestContext(this->forceSoftware,this->_profile);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,start,(void))

Void Stage3DProxy_obj::notifyViewportUpdated( ){
{
		HX_STACK_PUSH("Stage3DProxy::notifyViewportUpdated","away3d/core/managers/Stage3DProxy.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_LINE(86)
		if ((this->_viewportDirty)){
			HX_STACK_LINE(86)
			return null();
		}
		HX_STACK_LINE(87)
		this->_viewportDirty = true;
		HX_STACK_LINE(88)
		if ((!(this->hasEventListener(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED)))){
			HX_STACK_LINE(88)
			return null();
		}
		HX_STACK_LINE(89)
		this->_viewportUpdated = ::away3d::events::Stage3DEvent_obj::__new(::away3d::events::Stage3DEvent_obj::VIEWPORT_UPDATED,null(),null());
		HX_STACK_LINE(90)
		this->dispatchEvent(this->_viewportUpdated);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DProxy_obj,notifyViewportUpdated,(void))


Stage3DProxy_obj::Stage3DProxy_obj()
{
}

void Stage3DProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DProxy);
	HX_MARK_MEMBER_NAME(forceSoftware,"forceSoftware");
	HX_MARK_MEMBER_NAME(_callbackMethod,"_callbackMethod");
	HX_MARK_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_MARK_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_MARK_MEMBER_NAME(_bufferClear,"_bufferClear");
	HX_MARK_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_MARK_MEMBER_NAME(_viewportUpdated,"_viewportUpdated");
	HX_MARK_MEMBER_NAME(_exitFrame,"_exitFrame");
	HX_MARK_MEMBER_NAME(_enterFrame,"_enterFrame");
	HX_MARK_MEMBER_NAME(_viewPort,"_viewPort");
	HX_MARK_MEMBER_NAME(_backBufferDirty,"_backBufferDirty");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_renderSurfaceSelector,"_renderSurfaceSelector");
	HX_MARK_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_MARK_MEMBER_NAME(_contextRequested,"_contextRequested");
	HX_MARK_MEMBER_NAME(_enableDepthAndStencil,"_enableDepthAndStencil");
	HX_MARK_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_MARK_MEMBER_NAME(_backBufferHeight,"_backBufferHeight");
	HX_MARK_MEMBER_NAME(_backBufferWidth,"_backBufferWidth");
	HX_MARK_MEMBER_NAME(_stage3DManager,"_stage3DManager");
	HX_MARK_MEMBER_NAME(_activeProgram3D,"_activeProgram3D");
	HX_MARK_MEMBER_NAME(_stage3D,"_stage3D");
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_usesSoftwareRendering,"_usesSoftwareRendering");
	HX_MARK_MEMBER_NAME(_stage3DIndex,"_stage3DIndex");
	HX_MARK_MEMBER_NAME(_context3D,"_context3D");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3DProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forceSoftware,"forceSoftware");
	HX_VISIT_MEMBER_NAME(_callbackMethod,"_callbackMethod");
	HX_VISIT_MEMBER_NAME(_touch3DManager,"_touch3DManager");
	HX_VISIT_MEMBER_NAME(_mouse3DManager,"_mouse3DManager");
	HX_VISIT_MEMBER_NAME(_bufferClear,"_bufferClear");
	HX_VISIT_MEMBER_NAME(_viewportDirty,"_viewportDirty");
	HX_VISIT_MEMBER_NAME(_viewportUpdated,"_viewportUpdated");
	HX_VISIT_MEMBER_NAME(_exitFrame,"_exitFrame");
	HX_VISIT_MEMBER_NAME(_enterFrame,"_enterFrame");
	HX_VISIT_MEMBER_NAME(_viewPort,"_viewPort");
	HX_VISIT_MEMBER_NAME(_backBufferDirty,"_backBufferDirty");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_renderSurfaceSelector,"_renderSurfaceSelector");
	HX_VISIT_MEMBER_NAME(_renderTarget,"_renderTarget");
	HX_VISIT_MEMBER_NAME(_contextRequested,"_contextRequested");
	HX_VISIT_MEMBER_NAME(_enableDepthAndStencil,"_enableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(_antiAlias,"_antiAlias");
	HX_VISIT_MEMBER_NAME(_backBufferHeight,"_backBufferHeight");
	HX_VISIT_MEMBER_NAME(_backBufferWidth,"_backBufferWidth");
	HX_VISIT_MEMBER_NAME(_stage3DManager,"_stage3DManager");
	HX_VISIT_MEMBER_NAME(_activeProgram3D,"_activeProgram3D");
	HX_VISIT_MEMBER_NAME(_stage3D,"_stage3D");
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_usesSoftwareRendering,"_usesSoftwareRendering");
	HX_VISIT_MEMBER_NAME(_stage3DIndex,"_stage3DIndex");
	HX_VISIT_MEMBER_NAME(_context3D,"_context3D");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3DProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"stage3D") ) { return get_stage3D(); }
		if (HX_FIELD_EQ(inName,"profile") ) { return get_profile(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stage3D") ) { return _stage3D; }
		if (HX_FIELD_EQ(inName,"_profile") ) { return _profile; }
		if (HX_FIELD_EQ(inName,"viewPort") ) { return get_viewPort(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewPort") ) { return _viewPort; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return get_antiAlias(); }
		if (HX_FIELD_EQ(inName,"context3D") ) { return get_context3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_exitFrame") ) { return _exitFrame; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { return _antiAlias; }
		if (HX_FIELD_EQ(inName,"_context3D") ) { return _context3D; }
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return get_driverInfo(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage3D") ) { return get_stage3D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_profile") ) { return get_profile_dyn(); }
		if (HX_FIELD_EQ(inName,"_enterFrame") ) { return _enterFrame; }
		if (HX_FIELD_EQ(inName,"bufferClear") ) { return get_bufferClear(); }
		if (HX_FIELD_EQ(inName,"scissorRect") ) { return get_scissorRect(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewPort") ) { return get_viewPort_dyn(); }
		if (HX_FIELD_EQ(inName,"_bufferClear") ) { return _bufferClear; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return _scissorRect; }
		if (HX_FIELD_EQ(inName,"stage3DIndex") ) { return get_stage3DIndex(); }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { return get_renderTarget(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeContext3D") ) { return freeContext3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAlias") ) { return set_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAlias") ) { return get_antiAlias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_context3D") ) { return get_context3D_dyn(); }
		if (HX_FIELD_EQ(inName,"forceSoftware") ) { return forceSoftware; }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { return _renderTarget; }
		if (HX_FIELD_EQ(inName,"_stage3DIndex") ) { return _stage3DIndex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestContext") ) { return requestContext_dyn(); }
		if (HX_FIELD_EQ(inName,"get_driverInfo") ) { return get_driverInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { return _viewportDirty; }
		if (HX_FIELD_EQ(inName,"touch3DManager") ) { return get_touch3DManager(); }
		if (HX_FIELD_EQ(inName,"mouse3DManager") ) { return get_mouse3DManager(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_bufferClear") ) { return set_bufferClear_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bufferClear") ) { return get_bufferClear_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scissorRect") ) { return set_scissorRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scissorRect") ) { return get_scissorRect_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderTarget") ) { return setRenderTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_callbackMethod") ) { return _callbackMethod; }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { return _touch3DManager; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { return _mouse3DManager; }
		if (HX_FIELD_EQ(inName,"_stage3DManager") ) { return _stage3DManager; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearDepthBuffer") ) { return clearDepthBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage3DIndex") ) { return get_stage3DIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderTarget") ) { return get_renderTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewportUpdated") ) { return _viewportUpdated; }
		if (HX_FIELD_EQ(inName,"_backBufferDirty") ) { return _backBufferDirty; }
		if (HX_FIELD_EQ(inName,"_backBufferWidth") ) { return _backBufferWidth; }
		if (HX_FIELD_EQ(inName,"_activeProgram3D") ) { return _activeProgram3D; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContext3DUpdate") ) { return onContext3DUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderCallback") ) { return setRenderCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"_contextRequested") ) { return _contextRequested; }
		if (HX_FIELD_EQ(inName,"_backBufferHeight") ) { return _backBufferHeight; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_touch3DManager") ) { return set_touch3DManager_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touch3DManager") ) { return get_touch3DManager_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouse3DManager") ) { return set_mouse3DManager_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouse3DManager") ) { return get_mouse3DManager_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recoverFromDisposal") ) { return recoverFromDisposal_dyn(); }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"notifyViewportUpdated") ) { return notifyViewportUpdated_dyn(); }
		if (HX_FIELD_EQ(inName,"usesSoftwareRendering") ) { return get_usesSoftwareRendering(); }
		if (HX_FIELD_EQ(inName,"renderSurfaceSelector") ) { return get_renderSurfaceSelector(); }
		if (HX_FIELD_EQ(inName,"enableDepthAndStencil") ) { return get_enableDepthAndStencil(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_renderSurfaceSelector") ) { return _renderSurfaceSelector; }
		if (HX_FIELD_EQ(inName,"_enableDepthAndStencil") ) { return _enableDepthAndStencil; }
		if (HX_FIELD_EQ(inName,"_usesSoftwareRendering") ) { return _usesSoftwareRendering; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_usesSoftwareRendering") ) { return get_usesSoftwareRendering_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderSurfaceSelector") ) { return get_renderSurfaceSelector_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableDepthAndStencil") ) { return set_enableDepthAndStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enableDepthAndStencil") ) { return get_enableDepthAndStencil_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3DProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stage3D") ) { _stage3D=inValue.Cast< ::flash::display::Stage3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewPort") ) { _viewPort=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antiAlias") ) { return set_antiAlias(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_exitFrame") ) { _exitFrame=inValue.Cast< ::flash::events::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_antiAlias") ) { _antiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_context3D") ) { _context3D=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_enterFrame") ) { _enterFrame=inValue.Cast< ::flash::events::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferClear") ) { return set_bufferClear(inValue); }
		if (HX_FIELD_EQ(inName,"scissorRect") ) { return set_scissorRect(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bufferClear") ) { _bufferClear=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forceSoftware") ) { forceSoftware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTarget") ) { _renderTarget=inValue.Cast< ::flash::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DIndex") ) { _stage3DIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_viewportDirty") ) { _viewportDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch3DManager") ) { return set_touch3DManager(inValue); }
		if (HX_FIELD_EQ(inName,"mouse3DManager") ) { return set_mouse3DManager(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_callbackMethod") ) { _callbackMethod=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touch3DManager") ) { _touch3DManager=inValue.Cast< ::away3d::core::managers::Touch3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse3DManager") ) { _mouse3DManager=inValue.Cast< ::away3d::core::managers::Mouse3DManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DManager") ) { _stage3DManager=inValue.Cast< ::away3d::core::managers::Stage3DManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_viewportUpdated") ) { _viewportUpdated=inValue.Cast< ::away3d::events::Stage3DEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backBufferDirty") ) { _backBufferDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backBufferWidth") ) { _backBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeProgram3D") ) { _activeProgram3D=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_contextRequested") ) { _contextRequested=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backBufferHeight") ) { _backBufferHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableDepthAndStencil") ) { return set_enableDepthAndStencil(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_renderSurfaceSelector") ) { _renderSurfaceSelector=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableDepthAndStencil") ) { _enableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usesSoftwareRendering") ) { _usesSoftwareRendering=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3DProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forceSoftware"));
	outFields->push(HX_CSTRING("_touch3DManager"));
	outFields->push(HX_CSTRING("_mouse3DManager"));
	outFields->push(HX_CSTRING("_bufferClear"));
	outFields->push(HX_CSTRING("_viewportDirty"));
	outFields->push(HX_CSTRING("_viewportUpdated"));
	outFields->push(HX_CSTRING("_exitFrame"));
	outFields->push(HX_CSTRING("_enterFrame"));
	outFields->push(HX_CSTRING("_viewPort"));
	outFields->push(HX_CSTRING("_backBufferDirty"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_scissorRect"));
	outFields->push(HX_CSTRING("_renderSurfaceSelector"));
	outFields->push(HX_CSTRING("_renderTarget"));
	outFields->push(HX_CSTRING("_contextRequested"));
	outFields->push(HX_CSTRING("_enableDepthAndStencil"));
	outFields->push(HX_CSTRING("_antiAlias"));
	outFields->push(HX_CSTRING("_backBufferHeight"));
	outFields->push(HX_CSTRING("_backBufferWidth"));
	outFields->push(HX_CSTRING("_stage3DManager"));
	outFields->push(HX_CSTRING("_activeProgram3D"));
	outFields->push(HX_CSTRING("_stage3D"));
	outFields->push(HX_CSTRING("_profile"));
	outFields->push(HX_CSTRING("_usesSoftwareRendering"));
	outFields->push(HX_CSTRING("_stage3DIndex"));
	outFields->push(HX_CSTRING("_context3D"));
	outFields->push(HX_CSTRING("touch3DManager"));
	outFields->push(HX_CSTRING("mouse3DManager"));
	outFields->push(HX_CSTRING("bufferClear"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("viewPort"));
	outFields->push(HX_CSTRING("antiAlias"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("usesSoftwareRendering"));
	outFields->push(HX_CSTRING("driverInfo"));
	outFields->push(HX_CSTRING("context3D"));
	outFields->push(HX_CSTRING("stage3D"));
	outFields->push(HX_CSTRING("stage3DIndex"));
	outFields->push(HX_CSTRING("scissorRect"));
	outFields->push(HX_CSTRING("renderSurfaceSelector"));
	outFields->push(HX_CSTRING("renderTarget"));
	outFields->push(HX_CSTRING("enableDepthAndStencil"));
	outFields->push(HX_CSTRING("profile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clearDepthBuffer"),
	HX_CSTRING("recoverFromDisposal"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("requestContext"),
	HX_CSTRING("onContext3DUpdate"),
	HX_CSTRING("freeContext3D"),
	HX_CSTRING("set_touch3DManager"),
	HX_CSTRING("get_touch3DManager"),
	HX_CSTRING("set_mouse3DManager"),
	HX_CSTRING("get_mouse3DManager"),
	HX_CSTRING("set_bufferClear"),
	HX_CSTRING("get_bufferClear"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("get_viewPort"),
	HX_CSTRING("set_antiAlias"),
	HX_CSTRING("get_antiAlias"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("get_usesSoftwareRendering"),
	HX_CSTRING("get_driverInfo"),
	HX_CSTRING("get_context3D"),
	HX_CSTRING("get_stage3D"),
	HX_CSTRING("get_stage3DIndex"),
	HX_CSTRING("set_scissorRect"),
	HX_CSTRING("get_scissorRect"),
	HX_CSTRING("present"),
	HX_CSTRING("clear"),
	HX_CSTRING("setRenderTarget"),
	HX_CSTRING("get_renderSurfaceSelector"),
	HX_CSTRING("get_renderTarget"),
	HX_CSTRING("set_enableDepthAndStencil"),
	HX_CSTRING("get_enableDepthAndStencil"),
	HX_CSTRING("configureBackBuffer"),
	HX_CSTRING("setRenderCallback"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_profile"),
	HX_CSTRING("start"),
	HX_CSTRING("forceSoftware"),
	HX_CSTRING("notifyViewportUpdated"),
	HX_CSTRING("_callbackMethod"),
	HX_CSTRING("_touch3DManager"),
	HX_CSTRING("_mouse3DManager"),
	HX_CSTRING("_bufferClear"),
	HX_CSTRING("_viewportDirty"),
	HX_CSTRING("_viewportUpdated"),
	HX_CSTRING("_exitFrame"),
	HX_CSTRING("_enterFrame"),
	HX_CSTRING("_viewPort"),
	HX_CSTRING("_backBufferDirty"),
	HX_CSTRING("_color"),
	HX_CSTRING("_scissorRect"),
	HX_CSTRING("_renderSurfaceSelector"),
	HX_CSTRING("_renderTarget"),
	HX_CSTRING("_contextRequested"),
	HX_CSTRING("_enableDepthAndStencil"),
	HX_CSTRING("_antiAlias"),
	HX_CSTRING("_backBufferHeight"),
	HX_CSTRING("_backBufferWidth"),
	HX_CSTRING("_stage3DManager"),
	HX_CSTRING("_activeProgram3D"),
	HX_CSTRING("_stage3D"),
	HX_CSTRING("_profile"),
	HX_CSTRING("_usesSoftwareRendering"),
	HX_CSTRING("_stage3DIndex"),
	HX_CSTRING("_context3D"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DProxy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DProxy_obj::__mClass,"__mClass");
};

Class Stage3DProxy_obj::__mClass;

void Stage3DProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.Stage3DProxy"), hx::TCanCast< Stage3DProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage3DProxy_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
