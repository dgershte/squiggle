#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_SingletonEnforcer
#include <away3d/core/managers/SingletonEnforcer.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace managers{

Void RTTBufferManager_obj::__construct(::away3d::core::managers::SingletonEnforcer se,::away3d::core::managers::Stage3DProxy stage3DProxy)
{
HX_STACK_PUSH("RTTBufferManager::new","away3d/core/managers/RTTBufferManager.hx",41);
{
	HX_STACK_LINE(42)
	this->_viewWidth = (int)-1;
	HX_STACK_LINE(43)
	this->_viewHeight = (int)-1;
	HX_STACK_LINE(44)
	this->_textureWidth = (int)-1;
	HX_STACK_LINE(45)
	this->_textureHeight = (int)-1;
	HX_STACK_LINE(46)
	this->_buffersInvalid = true;
	HX_STACK_LINE(47)
	if (((se == null()))){
		HX_STACK_LINE(47)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("No cheating the multiton!"),null()));
	}
	HX_STACK_LINE(48)
	this->_renderToTextureRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(49)
	this->_stage3DProxy = stage3DProxy;
	HX_STACK_LINE(50)
	super::__construct(null());
}
;
	return null();
}

RTTBufferManager_obj::~RTTBufferManager_obj() { }

Dynamic RTTBufferManager_obj::__CreateEmpty() { return  new RTTBufferManager_obj; }
hx::ObjectPtr< RTTBufferManager_obj > RTTBufferManager_obj::__new(::away3d::core::managers::SingletonEnforcer se,::away3d::core::managers::Stage3DProxy stage3DProxy)
{  hx::ObjectPtr< RTTBufferManager_obj > result = new RTTBufferManager_obj();
	result->__construct(se,stage3DProxy);
	return result;}

Dynamic RTTBufferManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RTTBufferManager_obj > result = new RTTBufferManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RTTBufferManager_obj::updateRTTBuffers( ){
{
		HX_STACK_PUSH("RTTBufferManager::updateRTTBuffers","away3d/core/managers/RTTBufferManager.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_LINE(164)
		::flash::display3D::Context3D context = this->_stage3DProxy->get_context3D();		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(165)
		Array< Float > textureVerts;		HX_STACK_VAR(textureVerts,"textureVerts");
		HX_STACK_LINE(166)
		Array< Float > screenVerts;		HX_STACK_VAR(screenVerts,"screenVerts");
		HX_STACK_LINE(167)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(168)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(169)
		if (((this->_renderToTextureVertexBuffer == null()))){
			HX_STACK_LINE(170)
			this->_renderToTextureVertexBuffer = context->createVertexBuffer((int)4,(int)5);
		}
		HX_STACK_LINE(171)
		if (((this->_renderToScreenVertexBuffer == null()))){
			HX_STACK_LINE(172)
			this->_renderToScreenVertexBuffer = context->createVertexBuffer((int)4,(int)5);
		}
		HX_STACK_LINE(173)
		if (((this->_indexBuffer == null()))){
			HX_STACK_LINE(174)
			this->_indexBuffer = context->createIndexBuffer((int)6);
			HX_STACK_LINE(175)
			Array< int > tmp_data = Array_obj< int >::__new().Add((int)2).Add((int)1).Add((int)0).Add((int)3).Add((int)2).Add((int)0);		HX_STACK_VAR(tmp_data,"tmp_data");
			HX_STACK_LINE(176)
			this->_indexBuffer->uploadFromVector(::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),tmp_data),(int)0,(int)6);
		}
		HX_STACK_LINE(178)
		this->_textureRatioX = x = ::Math_obj::min((Float(this->_viewWidth) / Float(this->_textureWidth)),(int)1);
		HX_STACK_LINE(179)
		this->_textureRatioY = y = ::Math_obj::min((Float(this->_viewHeight) / Float(this->_textureHeight)),(int)1);
		HX_STACK_LINE(180)
		Float u1 = ((((int)1 - x)) * .5);		HX_STACK_VAR(u1,"u1");
		HX_STACK_LINE(181)
		Float u2 = (((x + (int)1)) * .5);		HX_STACK_VAR(u2,"u2");
		HX_STACK_LINE(182)
		Float v1 = (((y + (int)1)) * .5);		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(183)
		Float v2 = ((((int)1 - y)) * .5);		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(185)
		textureVerts = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(-(x)).Add(-(y)).Add(u1).Add(v1).Add((int)0).Add(x).Add(-(y)).Add(u2).Add(v1).Add((int)1).Add(x).Add(y).Add(u2).Add(v2).Add((int)2).Add(-(x)).Add(y).Add(u1).Add(v2).Add((int)3)));
		HX_STACK_LINE(186)
		screenVerts = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add((int)-1).Add((int)-1).Add(u1).Add(v1).Add((int)0).Add((int)1).Add((int)-1).Add(u2).Add(v1).Add((int)1).Add((int)1).Add((int)1).Add(u2).Add(v2).Add((int)2).Add((int)-1).Add((int)1).Add(u1).Add(v2).Add((int)3)));
		HX_STACK_LINE(187)
		this->_renderToTextureVertexBuffer->uploadFromVector(textureVerts,(int)0,(int)4);
		HX_STACK_LINE(188)
		this->_renderToScreenVertexBuffer->uploadFromVector(screenVerts,(int)0,(int)4);
		HX_STACK_LINE(189)
		this->_buffersInvalid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,updateRTTBuffers,(void))

Void RTTBufferManager_obj::dispose( ){
{
		HX_STACK_PUSH("RTTBufferManager::dispose","away3d/core/managers/RTTBufferManager.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_LINE(148)
		::away3d::core::managers::RTTBufferManager_obj::_instances->__Internal->remove(::__hxcpp_obj_id(this->_stage3DProxy));
		HX_STACK_LINE(149)
		if (((this->_indexBuffer != null()))){
			HX_STACK_LINE(150)
			this->_indexBuffer->dispose();
			HX_STACK_LINE(151)
			this->_renderToScreenVertexBuffer->dispose();
			HX_STACK_LINE(152)
			this->_renderToTextureVertexBuffer->dispose();
			HX_STACK_LINE(153)
			this->_renderToScreenVertexBuffer = null();
			HX_STACK_LINE(154)
			this->_renderToTextureVertexBuffer = null();
			HX_STACK_LINE(155)
			this->_indexBuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,dispose,(void))

int RTTBufferManager_obj::get_textureHeight( ){
	HX_STACK_PUSH("RTTBufferManager::get_textureHeight","away3d/core/managers/RTTBufferManager.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->_textureHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureHeight,return )

int RTTBufferManager_obj::get_textureWidth( ){
	HX_STACK_PUSH("RTTBufferManager::get_textureWidth","away3d/core/managers/RTTBufferManager.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(139)
	return this->_textureWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureWidth,return )

::flash::geom::Rectangle RTTBufferManager_obj::get_renderToTextureRect( ){
	HX_STACK_PUSH("RTTBufferManager::get_renderToTextureRect","away3d/core/managers/RTTBufferManager.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	if ((this->_buffersInvalid)){
		HX_STACK_LINE(135)
		this->updateRTTBuffers();
	}
	HX_STACK_LINE(136)
	return this->_renderToTextureRect;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToTextureRect,return )

::flash::display3D::IndexBuffer3D RTTBufferManager_obj::get_indexBuffer( ){
	HX_STACK_PUSH("RTTBufferManager::get_indexBuffer","away3d/core/managers/RTTBufferManager.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	return this->_indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_indexBuffer,return )

::flash::display3D::VertexBuffer3D RTTBufferManager_obj::get_renderToScreenVertexBuffer( ){
	HX_STACK_PUSH("RTTBufferManager::get_renderToScreenVertexBuffer","away3d/core/managers/RTTBufferManager.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(126)
	if ((this->_buffersInvalid)){
		HX_STACK_LINE(126)
		this->updateRTTBuffers();
	}
	HX_STACK_LINE(127)
	return this->_renderToScreenVertexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToScreenVertexBuffer,return )

::flash::display3D::VertexBuffer3D RTTBufferManager_obj::get_renderToTextureVertexBuffer( ){
	HX_STACK_PUSH("RTTBufferManager::get_renderToTextureVertexBuffer","away3d/core/managers/RTTBufferManager.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(121)
	if ((this->_buffersInvalid)){
		HX_STACK_LINE(121)
		this->updateRTTBuffers();
	}
	HX_STACK_LINE(122)
	return this->_renderToTextureVertexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToTextureVertexBuffer,return )

int RTTBufferManager_obj::set_viewHeight( int value){
	HX_STACK_PUSH("RTTBufferManager::set_viewHeight","away3d/core/managers/RTTBufferManager.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(102)
	if (((value == this->_viewHeight))){
		HX_STACK_LINE(102)
		return value;
	}
	HX_STACK_LINE(103)
	this->_viewHeight = value;
	HX_STACK_LINE(104)
	this->_buffersInvalid = true;
	HX_STACK_LINE(105)
	this->_textureHeight = ::away3d::tools::utils::TextureUtils_obj::getBestPowerOf2(this->_viewHeight);
	HX_STACK_LINE(106)
	if (((this->_textureHeight > this->_viewHeight))){
		HX_STACK_LINE(107)
		this->_renderToTextureRect->y = ::Std_obj::_int((((this->_textureHeight - this->_viewHeight)) * .5));
		HX_STACK_LINE(108)
		this->_renderToTextureRect->height = this->_viewHeight;
	}
	else{
		HX_STACK_LINE(112)
		this->_renderToTextureRect->y = (int)0;
		HX_STACK_LINE(113)
		this->_renderToTextureRect->height = this->_textureHeight;
	}
	HX_STACK_LINE(116)
	this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::RESIZE,null(),null()));
	HX_STACK_LINE(117)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,set_viewHeight,return )

int RTTBufferManager_obj::get_viewHeight( ){
	HX_STACK_PUSH("RTTBufferManager::get_viewHeight","away3d/core/managers/RTTBufferManager.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_LINE(97)
	return this->_viewHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_viewHeight,return )

int RTTBufferManager_obj::set_viewWidth( int value){
	HX_STACK_PUSH("RTTBufferManager::set_viewWidth","away3d/core/managers/RTTBufferManager.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(79)
	if (((value == this->_viewWidth))){
		HX_STACK_LINE(79)
		return value;
	}
	HX_STACK_LINE(80)
	this->_viewWidth = value;
	HX_STACK_LINE(81)
	this->_buffersInvalid = true;
	HX_STACK_LINE(82)
	this->_textureWidth = ::away3d::tools::utils::TextureUtils_obj::getBestPowerOf2(this->_viewWidth);
	HX_STACK_LINE(83)
	if (((this->_textureWidth > this->_viewWidth))){
		HX_STACK_LINE(84)
		this->_renderToTextureRect->x = ::Std_obj::_int((((this->_textureWidth - this->_viewWidth)) * .5));
		HX_STACK_LINE(85)
		this->_renderToTextureRect->width = this->_viewWidth;
	}
	else{
		HX_STACK_LINE(89)
		this->_renderToTextureRect->x = (int)0;
		HX_STACK_LINE(90)
		this->_renderToTextureRect->width = this->_textureWidth;
	}
	HX_STACK_LINE(93)
	this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::RESIZE,null(),null()));
	HX_STACK_LINE(94)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,set_viewWidth,return )

int RTTBufferManager_obj::get_viewWidth( ){
	HX_STACK_PUSH("RTTBufferManager::get_viewWidth","away3d/core/managers/RTTBufferManager.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->_viewWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_viewWidth,return )

Float RTTBufferManager_obj::get_textureRatioY( ){
	HX_STACK_PUSH("RTTBufferManager::get_textureRatioY","away3d/core/managers/RTTBufferManager.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	if ((this->_buffersInvalid)){
		HX_STACK_LINE(70)
		this->updateRTTBuffers();
	}
	HX_STACK_LINE(71)
	return this->_textureRatioY;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureRatioY,return )

Float RTTBufferManager_obj::get_textureRatioX( ){
	HX_STACK_PUSH("RTTBufferManager::get_textureRatioX","away3d/core/managers/RTTBufferManager.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	if ((this->_buffersInvalid)){
		HX_STACK_LINE(65)
		this->updateRTTBuffers();
	}
	HX_STACK_LINE(66)
	return this->_textureRatioX;
}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureRatioX,return )

::haxe::ds::ObjectMap RTTBufferManager_obj::_instances;

::away3d::core::managers::RTTBufferManager RTTBufferManager_obj::getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("RTTBufferManager::getInstance","away3d/core/managers/RTTBufferManager.hx",53);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(54)
	if (((stage3DProxy == null()))){
		HX_STACK_LINE(54)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("stage3DProxy key cannot be null!"),null()));
	}
	HX_STACK_LINE(55)
	if (((::away3d::core::managers::RTTBufferManager_obj::_instances == null()))){
		HX_STACK_LINE(55)
		::away3d::core::managers::RTTBufferManager_obj::_instances = ::haxe::ds::ObjectMap_obj::__new();
	}
	HX_STACK_LINE(56)
	::away3d::core::managers::RTTBufferManager rttb = ::away3d::core::managers::RTTBufferManager_obj::_instances->get(stage3DProxy);		HX_STACK_VAR(rttb,"rttb");
	HX_STACK_LINE(57)
	if (((rttb == null()))){
		HX_STACK_LINE(58)
		rttb = ::away3d::core::managers::RTTBufferManager_obj::__new(::away3d::core::managers::SingletonEnforcer_obj::__new(),stage3DProxy);
		HX_STACK_LINE(59)
		::away3d::core::managers::RTTBufferManager_obj::_instances->__Internal->set(::__hxcpp_obj_id(stage3DProxy),rttb);
	}
	HX_STACK_LINE(61)
	return rttb;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,getInstance,return )


RTTBufferManager_obj::RTTBufferManager_obj()
{
}

void RTTBufferManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RTTBufferManager);
	HX_MARK_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_MARK_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_MARK_MEMBER_NAME(_buffersInvalid,"_buffersInvalid");
	HX_MARK_MEMBER_NAME(_renderToTextureRect,"_renderToTextureRect");
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_MARK_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_renderToScreenVertexBuffer,"_renderToScreenVertexBuffer");
	HX_MARK_MEMBER_NAME(_renderToTextureVertexBuffer,"_renderToTextureVertexBuffer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RTTBufferManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	HX_VISIT_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_VISIT_MEMBER_NAME(_buffersInvalid,"_buffersInvalid");
	HX_VISIT_MEMBER_NAME(_renderToTextureRect,"_renderToTextureRect");
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_VISIT_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_renderToScreenVertexBuffer,"_renderToScreenVertexBuffer");
	HX_VISIT_MEMBER_NAME(_renderToTextureVertexBuffer,"_renderToTextureVertexBuffer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RTTBufferManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { return get_viewWidth(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { return _instances; }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { return _viewWidth; }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { return get_viewHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { return _viewHeight; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return get_indexBuffer(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return _indexBuffer; }
		if (HX_FIELD_EQ(inName,"textureWidth") ) { return get_textureWidth(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_viewWidth") ) { return set_viewWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewWidth") ) { return get_viewWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return _textureWidth; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { return get_textureHeight(); }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { return get_textureRatioY(); }
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { return get_textureRatioX(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_viewHeight") ) { return set_viewHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewHeight") ) { return get_viewHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { return _textureRatioY; }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { return _textureRatioX; }
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return _textureHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_indexBuffer") ) { return get_indexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"_buffersInvalid") ) { return _buffersInvalid; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateRTTBuffers") ) { return updateRTTBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return get_textureWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return get_textureHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureRatioY") ) { return get_textureRatioY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureRatioX") ) { return get_textureRatioX_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderToTextureRect") ) { return get_renderToTextureRect(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderToTextureRect") ) { return _renderToTextureRect; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_renderToTextureRect") ) { return get_renderToTextureRect_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"renderToScreenVertexBuffer") ) { return get_renderToScreenVertexBuffer(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_renderToScreenVertexBuffer") ) { return _renderToScreenVertexBuffer; }
		if (HX_FIELD_EQ(inName,"renderToTextureVertexBuffer") ) { return get_renderToTextureVertexBuffer(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_renderToTextureVertexBuffer") ) { return _renderToTextureVertexBuffer; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_renderToScreenVertexBuffer") ) { return get_renderToScreenVertexBuffer_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_renderToTextureVertexBuffer") ) { return get_renderToTextureVertexBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RTTBufferManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { return set_viewWidth(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { _viewWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewHeight") ) { return set_viewHeight(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { _viewHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast< ::flash::display3D::IndexBuffer3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { _textureRatioY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { _textureRatioX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_buffersInvalid") ) { _buffersInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderToTextureRect") ) { _renderToTextureRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_renderToScreenVertexBuffer") ) { _renderToScreenVertexBuffer=inValue.Cast< ::flash::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_renderToTextureVertexBuffer") ) { _renderToTextureVertexBuffer=inValue.Cast< ::flash::display3D::VertexBuffer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RTTBufferManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textureRatioY"));
	outFields->push(HX_CSTRING("_textureRatioX"));
	outFields->push(HX_CSTRING("_buffersInvalid"));
	outFields->push(HX_CSTRING("_renderToTextureRect"));
	outFields->push(HX_CSTRING("_textureHeight"));
	outFields->push(HX_CSTRING("_textureWidth"));
	outFields->push(HX_CSTRING("_viewHeight"));
	outFields->push(HX_CSTRING("_viewWidth"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("_indexBuffer"));
	outFields->push(HX_CSTRING("_renderToScreenVertexBuffer"));
	outFields->push(HX_CSTRING("_renderToTextureVertexBuffer"));
	outFields->push(HX_CSTRING("textureHeight"));
	outFields->push(HX_CSTRING("textureWidth"));
	outFields->push(HX_CSTRING("renderToTextureRect"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("renderToScreenVertexBuffer"));
	outFields->push(HX_CSTRING("renderToTextureVertexBuffer"));
	outFields->push(HX_CSTRING("viewHeight"));
	outFields->push(HX_CSTRING("viewWidth"));
	outFields->push(HX_CSTRING("textureRatioY"));
	outFields->push(HX_CSTRING("textureRatioX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instances"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateRTTBuffers"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_textureHeight"),
	HX_CSTRING("get_textureWidth"),
	HX_CSTRING("get_renderToTextureRect"),
	HX_CSTRING("get_indexBuffer"),
	HX_CSTRING("get_renderToScreenVertexBuffer"),
	HX_CSTRING("get_renderToTextureVertexBuffer"),
	HX_CSTRING("set_viewHeight"),
	HX_CSTRING("get_viewHeight"),
	HX_CSTRING("set_viewWidth"),
	HX_CSTRING("get_viewWidth"),
	HX_CSTRING("get_textureRatioY"),
	HX_CSTRING("get_textureRatioX"),
	HX_CSTRING("_textureRatioY"),
	HX_CSTRING("_textureRatioX"),
	HX_CSTRING("_buffersInvalid"),
	HX_CSTRING("_renderToTextureRect"),
	HX_CSTRING("_textureHeight"),
	HX_CSTRING("_textureWidth"),
	HX_CSTRING("_viewHeight"),
	HX_CSTRING("_viewWidth"),
	HX_CSTRING("_stage3DProxy"),
	HX_CSTRING("_indexBuffer"),
	HX_CSTRING("_renderToScreenVertexBuffer"),
	HX_CSTRING("_renderToTextureVertexBuffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTTBufferManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RTTBufferManager_obj::_instances,"_instances");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTTBufferManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RTTBufferManager_obj::_instances,"_instances");
};

Class RTTBufferManager_obj::__mClass;

void RTTBufferManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.RTTBufferManager"), hx::TCanCast< RTTBufferManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RTTBufferManager_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
