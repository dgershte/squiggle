#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#include <away3d/cameras/lenses/FreeMatrixLens.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
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
namespace away3d{
namespace cameras{
namespace lenses{

Void FreeMatrixLens_obj::__construct()
{
HX_STACK_PUSH("FreeMatrixLens::new","away3d/cameras/lenses/FreeMatrixLens.hx",13);
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->_matrix->copyFrom(::away3d::cameras::lenses::PerspectiveLens_obj::__new(null())->get_matrix());
}
;
	return null();
}

FreeMatrixLens_obj::~FreeMatrixLens_obj() { }

Dynamic FreeMatrixLens_obj::__CreateEmpty() { return  new FreeMatrixLens_obj; }
hx::ObjectPtr< FreeMatrixLens_obj > FreeMatrixLens_obj::__new()
{  hx::ObjectPtr< FreeMatrixLens_obj > result = new FreeMatrixLens_obj();
	result->__construct();
	return result;}

Dynamic FreeMatrixLens_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FreeMatrixLens_obj > result = new FreeMatrixLens_obj();
	result->__construct();
	return result;}

Void FreeMatrixLens_obj::updateMatrix( ){
{
		HX_STACK_PUSH("FreeMatrixLens::updateMatrix","away3d/cameras/lenses/FreeMatrixLens.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(43)
		this->_matrixInvalid = false;
	}
return null();
}


::away3d::cameras::lenses::LensBase FreeMatrixLens_obj::clone( ){
	HX_STACK_PUSH("FreeMatrixLens::clone","away3d/cameras/lenses/FreeMatrixLens.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	::away3d::cameras::lenses::FreeMatrixLens clone = ::away3d::cameras::lenses::FreeMatrixLens_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(35)
	clone->_matrix->copyFrom(this->_matrix);
	HX_STACK_LINE(36)
	clone->_near = this->_near;
	HX_STACK_LINE(37)
	clone->_far = this->_far;
	HX_STACK_LINE(38)
	clone->_aspectRatio = this->_aspectRatio;
	HX_STACK_LINE(39)
	clone->invalidateMatrix();
	HX_STACK_LINE(40)
	return clone;
}


Float FreeMatrixLens_obj::set_aspectRatio( Float value){
	HX_STACK_PUSH("FreeMatrixLens::set_aspectRatio","away3d/cameras/lenses/FreeMatrixLens.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(29)
	this->_aspectRatio = value;
	HX_STACK_LINE(30)
	return value;
}


Float FreeMatrixLens_obj::set_far( Float value){
	HX_STACK_PUSH("FreeMatrixLens::set_far","away3d/cameras/lenses/FreeMatrixLens.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(24)
	this->_far = value;
	HX_STACK_LINE(25)
	return value;
}


Float FreeMatrixLens_obj::set_near( Float value){
	HX_STACK_PUSH("FreeMatrixLens::set_near","away3d/cameras/lenses/FreeMatrixLens.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(19)
	this->_near = value;
	HX_STACK_LINE(20)
	return value;
}



FreeMatrixLens_obj::FreeMatrixLens_obj()
{
}

void FreeMatrixLens_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeMatrixLens);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeMatrixLens_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FreeMatrixLens_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_far") ) { return set_far_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_near") ) { return set_near_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_aspectRatio") ) { return set_aspectRatio_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FreeMatrixLens_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FreeMatrixLens_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("clone"),
	HX_CSTRING("set_aspectRatio"),
	HX_CSTRING("set_far"),
	HX_CSTRING("set_near"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FreeMatrixLens_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FreeMatrixLens_obj::__mClass,"__mClass");
};

Class FreeMatrixLens_obj::__mClass;

void FreeMatrixLens_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.cameras.lenses.FreeMatrixLens"), hx::TCanCast< FreeMatrixLens_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FreeMatrixLens_obj::__boot()
{
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
