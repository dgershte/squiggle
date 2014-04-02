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
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#include <away3d/core/render/Filter3DRenderer.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_filters_Filter3DBase
#include <away3d/filters/Filter3DBase.h>
#endif
#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#include <away3d/filters/tasks/Filter3DTaskBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace away3d{
namespace core{
namespace render{

Void Filter3DRenderer_obj::__construct(::away3d::core::managers::Stage3DProxy stage3DProxy)
{
HX_STACK_PUSH("Filter3DRenderer::new","away3d/core/render/Filter3DRenderer.hx",32);
{
	HX_STACK_LINE(33)
	this->_filterSizesInvalid = true;
	HX_STACK_LINE(34)
	this->_stage3DProxy = stage3DProxy;
	HX_STACK_LINE(35)
	this->_rttManager = ::away3d::core::managers::RTTBufferManager_obj::getInstance(stage3DProxy);
	HX_STACK_LINE(36)
	this->_rttManager->addEventListener(::flash::events::Event_obj::RESIZE,this->onRTTResize_dyn(),null(),null(),null());
}
;
	return null();
}

Filter3DRenderer_obj::~Filter3DRenderer_obj() { }

Dynamic Filter3DRenderer_obj::__CreateEmpty() { return  new Filter3DRenderer_obj; }
hx::ObjectPtr< Filter3DRenderer_obj > Filter3DRenderer_obj::__new(::away3d::core::managers::Stage3DProxy stage3DProxy)
{  hx::ObjectPtr< Filter3DRenderer_obj > result = new Filter3DRenderer_obj();
	result->__construct(stage3DProxy);
	return result;}

Dynamic Filter3DRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Filter3DRenderer_obj > result = new Filter3DRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Filter3DRenderer_obj::dispose( ){
{
		HX_STACK_PUSH("Filter3DRenderer::dispose","away3d/core/render/Filter3DRenderer.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_LINE(148)
		this->_rttManager->removeEventListener(::flash::events::Event_obj::RESIZE,this->onRTTResize_dyn(),null());
		HX_STACK_LINE(149)
		this->_rttManager = null();
		HX_STACK_LINE(150)
		this->_stage3DProxy = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,dispose,(void))

Void Filter3DRenderer_obj::updateFilterSizes( ){
{
		HX_STACK_PUSH("Filter3DRenderer::updateFilterSizes","away3d/core/render/Filter3DRenderer.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(139)
		while(((i < this->_filters->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(140)
			this->_filters->__GetItem(i)->__FieldRef(HX_CSTRING("textureWidth")) = this->_rttManager->get_textureWidth();
			HX_STACK_LINE(141)
			this->_filters->__GetItem(i)->__FieldRef(HX_CSTRING("textureHeight")) = this->_rttManager->get_textureHeight();
			HX_STACK_LINE(142)
			++(i);
		}
		HX_STACK_LINE(144)
		this->_filterSizesInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,updateFilterSizes,(void))

Void Filter3DRenderer_obj::render( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera3D,::flash::display3D::textures::Texture depthTexture){
{
		HX_STACK_PUSH("Filter3DRenderer::render","away3d/core/render/Filter3DRenderer.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera3D,"camera3D");
		HX_STACK_ARG(depthTexture,"depthTexture");
		HX_STACK_LINE(93)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(94)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(95)
		::away3d::filters::tasks::Filter3DTaskBase task;		HX_STACK_VAR(task,"task");
		HX_STACK_LINE(96)
		::flash::display3D::Context3D context = stage3DProxy->get_context3D();		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(97)
		::flash::display3D::IndexBuffer3D indexBuffer = this->_rttManager->get_indexBuffer();		HX_STACK_VAR(indexBuffer,"indexBuffer");
		HX_STACK_LINE(98)
		::flash::display3D::VertexBuffer3D vertexBuffer = this->_rttManager->get_renderToTextureVertexBuffer();		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
		HX_STACK_LINE(99)
		if (((this->_filters == null()))){
			HX_STACK_LINE(99)
			return null();
		}
		HX_STACK_LINE(100)
		if ((this->_filterSizesInvalid)){
			HX_STACK_LINE(100)
			this->updateFilterSizes();
		}
		HX_STACK_LINE(101)
		if ((this->_filterTasksInvalid)){
			HX_STACK_LINE(101)
			this->updateFilterTasks(stage3DProxy);
		}
		HX_STACK_LINE(102)
		len = this->_filters->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(103)
		i = (int)0;
		HX_STACK_LINE(104)
		while(((i < len))){
			HX_STACK_LINE(105)
			this->_filters->__GetItem(i)->__Field(HX_CSTRING("update"),true)(stage3DProxy,camera3D);
			HX_STACK_LINE(106)
			++(i);
		}
		HX_STACK_LINE(108)
		len = this->_tasks->__Field(HX_CSTRING("length"),true);
		HX_STACK_LINE(109)
		if (((len > (int)1))){
			HX_STACK_LINE(110)
			context->setVertexBufferAt((int)0,vertexBuffer,(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
			HX_STACK_LINE(111)
			context->setVertexBufferAt((int)1,vertexBuffer,(int)2,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
		}
		HX_STACK_LINE(113)
		i = (int)0;
		HX_STACK_LINE(114)
		while(((i < len))){
			HX_STACK_LINE(115)
			task = this->_tasks->__get(i).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >();
			HX_STACK_LINE(116)
			stage3DProxy->setRenderTarget(task->get_target(),null(),null());
			HX_STACK_LINE(117)
			context->setProgram(task->getProgram3D(stage3DProxy));
			HX_STACK_LINE(118)
			if (((task->get_target() == null()))){
				HX_STACK_LINE(119)
				stage3DProxy->set_scissorRect(null());
				HX_STACK_LINE(120)
				vertexBuffer = this->_rttManager->get_renderToScreenVertexBuffer();
				HX_STACK_LINE(121)
				context->setVertexBufferAt((int)0,vertexBuffer,(int)0,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
				HX_STACK_LINE(122)
				context->setVertexBufferAt((int)1,vertexBuffer,(int)2,::flash::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);
			}
			HX_STACK_LINE(124)
			context->setTextureAt((int)0,task->getMainInputTexture(stage3DProxy));
			HX_STACK_LINE(125)
			context->clear(0.0,0.0,0.0,0.0,null(),null(),null());
			HX_STACK_LINE(126)
			task->activate(stage3DProxy,camera3D,depthTexture);
			HX_STACK_LINE(127)
			context->setBlendFactors((int)1,(int)0);
			HX_STACK_LINE(128)
			context->drawTriangles(indexBuffer,(int)0,(int)2);
			HX_STACK_LINE(129)
			task->deactivate(stage3DProxy);
			HX_STACK_LINE(130)
			++(i);
		}
		HX_STACK_LINE(132)
		context->setTextureAt((int)0,null());
		HX_STACK_LINE(133)
		context->setVertexBufferAt((int)0,null(),null(),null());
		HX_STACK_LINE(134)
		context->setVertexBufferAt((int)1,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Filter3DRenderer_obj,render,(void))

Void Filter3DRenderer_obj::updateFilterTasks( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("Filter3DRenderer::updateFilterTasks","away3d/core/render/Filter3DRenderer.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(72)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(73)
		if ((this->_filterSizesInvalid)){
			HX_STACK_LINE(73)
			this->updateFilterSizes();
		}
		HX_STACK_LINE(74)
		if (((this->_filters == null()))){
			HX_STACK_LINE(75)
			this->_tasks = null();
			HX_STACK_LINE(76)
			return null();
		}
		HX_STACK_LINE(78)
		this->_tasks = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(79)
		len = (this->_filters->__Field(HX_CSTRING("length"),true) - (int)1);
		HX_STACK_LINE(80)
		::away3d::filters::Filter3DBase filter;		HX_STACK_VAR(filter,"filter");
		HX_STACK_LINE(81)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(82)
		while(((i <= len))){
			HX_STACK_LINE(84)
			filter = this->_filters->__GetItem(i);
			HX_STACK_LINE(85)
			filter->setRenderTargets((  (((i == len))) ? ::flash::display3D::textures::Texture(null()) : ::flash::display3D::textures::Texture((hx::TCast< away3d::filters::Filter3DBase >::cast(this->_filters->__GetItem((i + (int)1))))->getMainInputTexture(stage3DProxy)) ),stage3DProxy);
			HX_STACK_LINE(86)
			this->_tasks = ::flash::_Vector::Vector_Impl__obj::concat(this->_tasks,filter->get_tasks());
			HX_STACK_LINE(87)
			++(i);
		}
		HX_STACK_LINE(89)
		this->_mainInputTexture = this->_filters->__GetItem((int)0)->__Field(HX_CSTRING("getMainInputTexture"),true)(stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,updateFilterTasks,(void))

Dynamic Filter3DRenderer_obj::set_filters( Dynamic value){
	HX_STACK_PUSH("Filter3DRenderer::set_filters","away3d/core/render/Filter3DRenderer.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(57)
	this->_filters = value;
	HX_STACK_LINE(58)
	this->_filterTasksInvalid = true;
	HX_STACK_LINE(59)
	this->_requireDepthRender = false;
	HX_STACK_LINE(60)
	if (((this->_filters == null()))){
		HX_STACK_LINE(60)
		return null();
	}
	HX_STACK_LINE(61)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(62)
	while(((i < this->_filters->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(63)
		if ((!(this->_requireDepthRender))){
			HX_STACK_LINE(64)
			this->_requireDepthRender = hx::TCast< Bool >::cast((this->_filters->__GetItem(i)->__Field(HX_CSTRING("requireDepthRender"),true) != null()));
		}
		HX_STACK_LINE(65)
		++(i);
	}
	HX_STACK_LINE(67)
	this->_filterSizesInvalid = true;
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,set_filters,return )

Dynamic Filter3DRenderer_obj::get_filters( ){
	HX_STACK_PUSH("Filter3DRenderer::get_filters","away3d/core/render/Filter3DRenderer.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->_filters;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,get_filters,return )

::flash::display3D::textures::Texture Filter3DRenderer_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("Filter3DRenderer::getMainInputTexture","away3d/core/render/Filter3DRenderer.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(48)
	if ((this->_filterTasksInvalid)){
		HX_STACK_LINE(48)
		this->updateFilterTasks(stage3DProxy);
	}
	HX_STACK_LINE(49)
	return this->_mainInputTexture;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,getMainInputTexture,return )

bool Filter3DRenderer_obj::get_requireDepthRender( ){
	HX_STACK_PUSH("Filter3DRenderer::get_requireDepthRender","away3d/core/render/Filter3DRenderer.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return this->_requireDepthRender;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DRenderer_obj,get_requireDepthRender,return )

Void Filter3DRenderer_obj::onRTTResize( ::flash::events::Event event){
{
		HX_STACK_PUSH("Filter3DRenderer::onRTTResize","away3d/core/render/Filter3DRenderer.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(39)
		this->_filterSizesInvalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DRenderer_obj,onRTTResize,(void))


Filter3DRenderer_obj::Filter3DRenderer_obj()
{
}

void Filter3DRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DRenderer);
	HX_MARK_MEMBER_NAME(_filterSizesInvalid,"_filterSizesInvalid");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_rttManager,"_rttManager");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_MARK_MEMBER_NAME(_filterTasksInvalid,"_filterTasksInvalid");
	HX_MARK_MEMBER_NAME(_tasks,"_tasks");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_END_CLASS();
}

void Filter3DRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_filterSizesInvalid,"_filterSizesInvalid");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_rttManager,"_rttManager");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_VISIT_MEMBER_NAME(_filterTasksInvalid,"_filterTasksInvalid");
	HX_VISIT_MEMBER_NAME(_tasks,"_tasks");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
}

Dynamic Filter3DRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_tasks") ) { return _tasks; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"filters") ) { return get_filters(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"onRTTResize") ) { return onRTTResize_dyn(); }
		if (HX_FIELD_EQ(inName,"_rttManager") ) { return _rttManager; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateFilterSizes") ) { return updateFilterSizes_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFilterTasks") ) { return updateFilterTasks_dyn(); }
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { return _mainInputTexture; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { return get_requireDepthRender(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return getMainInputTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_filterSizesInvalid") ) { return _filterSizesInvalid; }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return _requireDepthRender; }
		if (HX_FIELD_EQ(inName,"_filterTasksInvalid") ) { return _filterTasksInvalid; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return get_requireDepthRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Filter3DRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { _tasks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return set_filters(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_rttManager") ) { _rttManager=inValue.Cast< ::away3d::core::managers::RTTBufferManager >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { _mainInputTexture=inValue.Cast< ::flash::display3D::textures::Texture >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_filterSizesInvalid") ) { _filterSizesInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filterTasksInvalid") ) { _filterTasksInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_filterSizesInvalid"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("_rttManager"));
	outFields->push(HX_CSTRING("_requireDepthRender"));
	outFields->push(HX_CSTRING("_mainInputTexture"));
	outFields->push(HX_CSTRING("_filterTasksInvalid"));
	outFields->push(HX_CSTRING("_tasks"));
	outFields->push(HX_CSTRING("_filters"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("requireDepthRender"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("updateFilterSizes"),
	HX_CSTRING("render"),
	HX_CSTRING("updateFilterTasks"),
	HX_CSTRING("set_filters"),
	HX_CSTRING("get_filters"),
	HX_CSTRING("getMainInputTexture"),
	HX_CSTRING("get_requireDepthRender"),
	HX_CSTRING("onRTTResize"),
	HX_CSTRING("_filterSizesInvalid"),
	HX_CSTRING("_stage3DProxy"),
	HX_CSTRING("_rttManager"),
	HX_CSTRING("_requireDepthRender"),
	HX_CSTRING("_mainInputTexture"),
	HX_CSTRING("_filterTasksInvalid"),
	HX_CSTRING("_tasks"),
	HX_CSTRING("_filters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Filter3DRenderer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Filter3DRenderer_obj::__mClass,"__mClass");
};

Class Filter3DRenderer_obj::__mClass;

void Filter3DRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.render.Filter3DRenderer"), hx::TCanCast< Filter3DRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Filter3DRenderer_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace render
