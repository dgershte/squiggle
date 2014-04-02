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
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
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
namespace away3d{
namespace filters{

Void Filter3DBase_obj::__construct()
{
HX_STACK_PUSH("Filter3DBase::new","away3d/filters/Filter3DBase.hx",20);
{
	HX_STACK_LINE(20)
	this->_tasks = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

Filter3DBase_obj::~Filter3DBase_obj() { }

Dynamic Filter3DBase_obj::__CreateEmpty() { return  new Filter3DBase_obj; }
hx::ObjectPtr< Filter3DBase_obj > Filter3DBase_obj::__new()
{  hx::ObjectPtr< Filter3DBase_obj > result = new Filter3DBase_obj();
	result->__construct();
	return result;}

Dynamic Filter3DBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Filter3DBase_obj > result = new Filter3DBase_obj();
	result->__construct();
	return result;}

Void Filter3DBase_obj::update( ::away3d::core::managers::Stage3DProxy stage,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("Filter3DBase::update","away3d/filters/Filter3DBase.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage,"stage");
		HX_STACK_ARG(camera,"camera");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Filter3DBase_obj,update,(void))

Void Filter3DBase_obj::dispose( ){
{
		HX_STACK_PUSH("Filter3DBase::dispose","away3d/filters/Filter3DBase.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(78)
		while(((i < this->_tasks->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(79)
			this->_tasks->__get(i).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >()->dispose();
			HX_STACK_LINE(80)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,dispose,(void))

Void Filter3DBase_obj::setRenderTargets( ::flash::display3D::textures::Texture mainTarget,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("Filter3DBase::setRenderTargets","away3d/filters/Filter3DBase.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mainTarget,"mainTarget");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(72)
		this->_tasks->__get((this->_tasks->__Field(HX_CSTRING("length"),true) - (int)1)).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >()->set_target(mainTarget);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Filter3DBase_obj,setRenderTargets,(void))

int Filter3DBase_obj::set_textureHeight( int value){
	HX_STACK_PUSH("Filter3DBase::set_textureHeight","away3d/filters/Filter3DBase.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(61)
	this->_textureHeight = value;
	HX_STACK_LINE(62)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(63)
	while(((i < this->_tasks->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(64)
		this->_tasks->__get(i).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >()->set_textureHeight(value);
		HX_STACK_LINE(65)
		++(i);
	}
	HX_STACK_LINE(67)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,set_textureHeight,return )

int Filter3DBase_obj::get_textureHeight( ){
	HX_STACK_PUSH("Filter3DBase::get_textureHeight","away3d/filters/Filter3DBase.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->_textureHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_textureHeight,return )

int Filter3DBase_obj::set_textureWidth( int value){
	HX_STACK_PUSH("Filter3DBase::set_textureWidth","away3d/filters/Filter3DBase.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(47)
	this->_textureWidth = value;
	HX_STACK_LINE(48)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(49)
	while(((i < this->_tasks->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(50)
		this->_tasks->__get(i).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >()->set_textureWidth(value);
		HX_STACK_LINE(51)
		++(i);
	}
	HX_STACK_LINE(53)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,set_textureWidth,return )

int Filter3DBase_obj::get_textureWidth( ){
	HX_STACK_PUSH("Filter3DBase::get_textureWidth","away3d/filters/Filter3DBase.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->_textureWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_textureWidth,return )

::flash::display3D::textures::Texture Filter3DBase_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("Filter3DBase::getMainInputTexture","away3d/filters/Filter3DBase.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(38)
	return this->_tasks->__get((int)0).StaticCast< ::away3d::filters::tasks::Filter3DTaskBase >()->getMainInputTexture(stage3DProxy);
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,getMainInputTexture,return )

Array< ::Dynamic > Filter3DBase_obj::get_tasks( ){
	HX_STACK_PUSH("Filter3DBase::get_tasks","away3d/filters/Filter3DBase.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return this->_tasks;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_tasks,return )

Void Filter3DBase_obj::addTask( ::away3d::filters::tasks::Filter3DTaskBase filter){
{
		HX_STACK_PUSH("Filter3DBase::addTask","away3d/filters/Filter3DBase.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(29)
		this->_tasks->__Field(HX_CSTRING("push"),true)(filter);
		HX_STACK_LINE(30)
		if ((!(this->_requireDepthRender))){
			HX_STACK_LINE(31)
			this->_requireDepthRender = filter->get_requireDepthRender();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,addTask,(void))

bool Filter3DBase_obj::get_requireDepthRender( ){
	HX_STACK_PUSH("Filter3DBase::get_requireDepthRender","away3d/filters/Filter3DBase.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->_requireDepthRender;
}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_requireDepthRender,return )


Filter3DBase_obj::Filter3DBase_obj()
{
}

void Filter3DBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DBase);
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_tasks,"_tasks");
	HX_MARK_END_CLASS();
}

void Filter3DBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_tasks,"_tasks");
}

Dynamic Filter3DBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tasks") ) { return get_tasks(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_tasks") ) { return _tasks; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"addTask") ) { return addTask_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_tasks") ) { return get_tasks_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { return get_textureWidth(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return _textureWidth; }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { return get_textureHeight(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return _textureHeight; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setRenderTargets") ) { return setRenderTargets_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textureWidth") ) { return set_textureWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return get_textureWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_textureHeight") ) { return set_textureHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return get_textureHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { return get_requireDepthRender(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return getMainInputTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return _requireDepthRender; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return get_requireDepthRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Filter3DBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { _tasks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { return set_textureWidth(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { return set_textureHeight(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textureHeight"));
	outFields->push(HX_CSTRING("_textureWidth"));
	outFields->push(HX_CSTRING("_requireDepthRender"));
	outFields->push(HX_CSTRING("_tasks"));
	outFields->push(HX_CSTRING("textureHeight"));
	outFields->push(HX_CSTRING("textureWidth"));
	outFields->push(HX_CSTRING("tasks"));
	outFields->push(HX_CSTRING("requireDepthRender"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("dispose"),
	HX_CSTRING("setRenderTargets"),
	HX_CSTRING("set_textureHeight"),
	HX_CSTRING("get_textureHeight"),
	HX_CSTRING("set_textureWidth"),
	HX_CSTRING("get_textureWidth"),
	HX_CSTRING("getMainInputTexture"),
	HX_CSTRING("get_tasks"),
	HX_CSTRING("addTask"),
	HX_CSTRING("get_requireDepthRender"),
	HX_CSTRING("_textureHeight"),
	HX_CSTRING("_textureWidth"),
	HX_CSTRING("_requireDepthRender"),
	HX_CSTRING("_tasks"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Filter3DBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Filter3DBase_obj::__mClass,"__mClass");
};

Class Filter3DBase_obj::__mClass;

void Filter3DBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.filters.Filter3DBase"), hx::TCanCast< Filter3DBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Filter3DBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace filters
