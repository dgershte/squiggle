#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace cameras{
namespace lenses{

Void LensBase_obj::__construct()
{
HX_STACK_PUSH("LensBase::new","away3d/cameras/lenses/LensBase.hx",38);
{
	HX_STACK_LINE(39)
	super::__construct(null());
	HX_STACK_LINE(40)
	this->_scissorRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(41)
	this->_viewPort = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(42)
	this->_near = (int)20;
	HX_STACK_LINE(43)
	this->_far = (int)3000;
	HX_STACK_LINE(44)
	this->_aspectRatio = (int)1;
	HX_STACK_LINE(45)
	this->_matrixInvalid = true;
	HX_STACK_LINE(46)
	this->_frustumCorners = ::flash::_Vector::Vector_Impl__obj::_new((int)24,true);
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Dynamic array = this->_frustumCorners;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(47)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(47)
		while((((c)++ < (int)24))){
			HX_STACK_LINE(47)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(47)
		array;
	}
	HX_STACK_LINE(48)
	this->_unprojectionInvalid = true;
	HX_STACK_LINE(49)
	this->_matrix = ::flash::geom::Matrix3D_obj::__new(null());
}
;
	return null();
}

LensBase_obj::~LensBase_obj() { }

Dynamic LensBase_obj::__CreateEmpty() { return  new LensBase_obj; }
hx::ObjectPtr< LensBase_obj > LensBase_obj::__new()
{  hx::ObjectPtr< LensBase_obj > result = new LensBase_obj();
	result->__construct();
	return result;}

Dynamic LensBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LensBase_obj > result = new LensBase_obj();
	result->__construct();
	return result;}

Void LensBase_obj::updateViewport( Float x,Float y,Float width,Float height){
{
		HX_STACK_PUSH("LensBase::updateViewport","away3d/cameras/lenses/LensBase.hx",211);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(212)
		this->_viewPort->x = x;
		HX_STACK_LINE(213)
		this->_viewPort->y = y;
		HX_STACK_LINE(214)
		this->_viewPort->width = width;
		HX_STACK_LINE(215)
		this->_viewPort->height = height;
		HX_STACK_LINE(216)
		this->invalidateMatrix();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(LensBase_obj,updateViewport,(void))

Void LensBase_obj::updateScissorRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_PUSH("LensBase::updateScissorRect","away3d/cameras/lenses/LensBase.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(204)
		this->_scissorRect->x = x;
		HX_STACK_LINE(205)
		this->_scissorRect->y = y;
		HX_STACK_LINE(206)
		this->_scissorRect->width = width;
		HX_STACK_LINE(207)
		this->_scissorRect->height = height;
		HX_STACK_LINE(208)
		this->invalidateMatrix();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(LensBase_obj,updateScissorRect,(void))

Void LensBase_obj::updateMatrix( ){
{
		HX_STACK_PUSH("LensBase::updateMatrix","away3d/cameras/lenses/LensBase.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,updateMatrix,(void))

Void LensBase_obj::invalidateMatrix( ){
{
		HX_STACK_PUSH("LensBase::invalidateMatrix","away3d/cameras/lenses/LensBase.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_LINE(187)
		this->_matrixInvalid = true;
		HX_STACK_LINE(188)
		this->_unprojectionInvalid = true;
		HX_STACK_LINE(192)
		this->dispatchEvent(::away3d::events::LensEvent_obj::__new(::away3d::events::LensEvent_obj::MATRIX_CHANGED,hx::ObjectPtr<OBJ_>(this),null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,invalidateMatrix,(void))

Float LensBase_obj::set_aspectRatio( Float value){
	HX_STACK_PUSH("LensBase::set_aspectRatio","away3d/cameras/lenses/LensBase.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(175)
	if (((bool((this->_aspectRatio == value)) || bool(((value * (int)0) != (int)0))))){
		HX_STACK_LINE(175)
		return value;
	}
	HX_STACK_LINE(176)
	this->_aspectRatio = value;
	HX_STACK_LINE(178)
	this->invalidateMatrix();
	HX_STACK_LINE(179)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_aspectRatio,return )

Float LensBase_obj::get_aspectRatio( ){
	HX_STACK_PUSH("LensBase::get_aspectRatio","away3d/cameras/lenses/LensBase.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return this->_aspectRatio;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_aspectRatio,return )

::away3d::cameras::lenses::LensBase LensBase_obj::clone( ){
	HX_STACK_PUSH("LensBase::clone","away3d/cameras/lenses/LensBase.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(161)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,clone,return )

::flash::geom::Vector3D LensBase_obj::unproject( Float nX,Float nY,Float sZ){
	HX_STACK_PUSH("LensBase::unproject","away3d/cameras/lenses/LensBase.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(nX,"nX");
	HX_STACK_ARG(nY,"nY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(151)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(LensBase_obj,unproject,return )

::flash::geom::Matrix3D LensBase_obj::get_unprojectionMatrix( ){
	HX_STACK_PUSH("LensBase::get_unprojectionMatrix","away3d/cameras/lenses/LensBase.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	if ((this->_unprojectionInvalid)){
		HX_STACK_LINE(131)
		if (((this->_unprojection == null()))){
			HX_STACK_LINE(132)
			this->_unprojection = ::flash::geom::Matrix3D_obj::__new(null());
		}
		HX_STACK_LINE(133)
		this->_unprojection->copyFrom(this->get_matrix());
		HX_STACK_LINE(134)
		this->_unprojection->invert();
		HX_STACK_LINE(135)
		this->_unprojectionInvalid = false;
	}
	HX_STACK_LINE(137)
	return this->_unprojection;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_unprojectionMatrix,return )

::flash::geom::Vector3D LensBase_obj::project( ::flash::geom::Vector3D point3d){
	HX_STACK_PUSH("LensBase::project","away3d/cameras/lenses/LensBase.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point3d,"point3d");
	HX_STACK_LINE(121)
	::flash::geom::Vector3D v = this->get_matrix()->transformVector(point3d);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(122)
	v->x = (Float(v->x) / Float(v->w));
	HX_STACK_LINE(123)
	v->y = (Float(-(v->y)) / Float(v->w));
	HX_STACK_LINE(125)
	v->z = point3d->z;
	HX_STACK_LINE(126)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,project,return )

Float LensBase_obj::set_far( Float value){
	HX_STACK_PUSH("LensBase::set_far","away3d/cameras/lenses/LensBase.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(107)
	if (((value == this->_far))){
		HX_STACK_LINE(107)
		return value;
	}
	HX_STACK_LINE(108)
	this->_far = value;
	HX_STACK_LINE(109)
	this->invalidateMatrix();
	HX_STACK_LINE(110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_far,return )

Float LensBase_obj::get_far( ){
	HX_STACK_PUSH("LensBase::get_far","away3d/cameras/lenses/LensBase.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->_far;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_far,return )

Float LensBase_obj::set_near( Float value){
	HX_STACK_PUSH("LensBase::set_near","away3d/cameras/lenses/LensBase.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(92)
	if (((value == this->_near))){
		HX_STACK_LINE(92)
		return value;
	}
	HX_STACK_LINE(93)
	this->_near = value;
	HX_STACK_LINE(94)
	this->invalidateMatrix();
	HX_STACK_LINE(95)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_near,return )

Float LensBase_obj::get_near( ){
	HX_STACK_PUSH("LensBase::get_near","away3d/cameras/lenses/LensBase.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->_near;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_near,return )

::flash::geom::Matrix3D LensBase_obj::set_matrix( ::flash::geom::Matrix3D value){
	HX_STACK_PUSH("LensBase::set_matrix","away3d/cameras/lenses/LensBase.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(78)
	this->_matrix = value;
	HX_STACK_LINE(79)
	this->invalidateMatrix();
	HX_STACK_LINE(80)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_matrix,return )

::flash::geom::Matrix3D LensBase_obj::get_matrix( ){
	HX_STACK_PUSH("LensBase::get_matrix","away3d/cameras/lenses/LensBase.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	if ((this->_matrixInvalid)){
		HX_STACK_LINE(71)
		this->updateMatrix();
		HX_STACK_LINE(72)
		this->_matrixInvalid = false;
	}
	HX_STACK_LINE(74)
	return this->_matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_matrix,return )

Array< Float > LensBase_obj::set_frustumCorners( Array< Float > frustumCorners){
	HX_STACK_PUSH("LensBase::set_frustumCorners","away3d/cameras/lenses/LensBase.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frustumCorners,"frustumCorners");
	HX_STACK_LINE(61)
	this->_frustumCorners = frustumCorners;
	HX_STACK_LINE(62)
	return frustumCorners;
}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_frustumCorners,return )

Array< Float > LensBase_obj::get_frustumCorners( ){
	HX_STACK_PUSH("LensBase::get_frustumCorners","away3d/cameras/lenses/LensBase.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->_frustumCorners;
}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_frustumCorners,return )


LensBase_obj::LensBase_obj()
{
}

void LensBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensBase);
	HX_MARK_MEMBER_NAME(_unprojectionInvalid,"_unprojectionInvalid");
	HX_MARK_MEMBER_NAME(_unprojection,"_unprojection");
	HX_MARK_MEMBER_NAME(_frustumCorners,"_frustumCorners");
	HX_MARK_MEMBER_NAME(_matrixInvalid,"_matrixInvalid");
	HX_MARK_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_MARK_MEMBER_NAME(_far,"_far");
	HX_MARK_MEMBER_NAME(_near,"_near");
	HX_MARK_MEMBER_NAME(_viewPort,"_viewPort");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LensBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_unprojectionInvalid,"_unprojectionInvalid");
	HX_VISIT_MEMBER_NAME(_unprojection,"_unprojection");
	HX_VISIT_MEMBER_NAME(_frustumCorners,"_frustumCorners");
	HX_VISIT_MEMBER_NAME(_matrixInvalid,"_matrixInvalid");
	HX_VISIT_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_VISIT_MEMBER_NAME(_far,"_far");
	HX_VISIT_MEMBER_NAME(_near,"_near");
	HX_VISIT_MEMBER_NAME(_viewPort,"_viewPort");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LensBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { return get_far(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_far") ) { return _far; }
		if (HX_FIELD_EQ(inName,"near") ) { return get_near(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_near") ) { return _near; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return get_matrix(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"set_far") ) { return set_far_dyn(); }
		if (HX_FIELD_EQ(inName,"get_far") ) { return get_far_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_near") ) { return set_near_dyn(); }
		if (HX_FIELD_EQ(inName,"get_near") ) { return get_near_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		if (HX_FIELD_EQ(inName,"_viewPort") ) { return _viewPort; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { return get_aspectRatio(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { return _aspectRatio; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return _scissorRect; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_unprojection") ) { return _unprojection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return updateViewport_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrixInvalid") ) { return _matrixInvalid; }
		if (HX_FIELD_EQ(inName,"frustumCorners") ) { return get_frustumCorners(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_aspectRatio") ) { return set_aspectRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"get_aspectRatio") ) { return get_aspectRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"_frustumCorners") ) { return _frustumCorners; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateMatrix") ) { return invalidateMatrix_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScissorRect") ) { return updateScissorRect_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_frustumCorners") ) { return set_frustumCorners_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frustumCorners") ) { return get_frustumCorners_dyn(); }
		if (HX_FIELD_EQ(inName,"unprojectionMatrix") ) { return get_unprojectionMatrix(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_unprojectionInvalid") ) { return _unprojectionInvalid; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_unprojectionMatrix") ) { return get_unprojectionMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LensBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { return set_far(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_far") ) { _far=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"near") ) { return set_near(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_near") ) { _near=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return set_matrix(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewPort") ) { _viewPort=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { return set_aspectRatio(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { _aspectRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_unprojection") ) { _unprojection=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_matrixInvalid") ) { _matrixInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frustumCorners") ) { return set_frustumCorners(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_frustumCorners") ) { _frustumCorners=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_unprojectionInvalid") ) { _unprojectionInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_unprojectionInvalid"));
	outFields->push(HX_CSTRING("_unprojection"));
	outFields->push(HX_CSTRING("_frustumCorners"));
	outFields->push(HX_CSTRING("_matrixInvalid"));
	outFields->push(HX_CSTRING("_aspectRatio"));
	outFields->push(HX_CSTRING("_far"));
	outFields->push(HX_CSTRING("_near"));
	outFields->push(HX_CSTRING("_viewPort"));
	outFields->push(HX_CSTRING("_scissorRect"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("aspectRatio"));
	outFields->push(HX_CSTRING("unprojectionMatrix"));
	outFields->push(HX_CSTRING("far"));
	outFields->push(HX_CSTRING("near"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("frustumCorners"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateViewport"),
	HX_CSTRING("updateScissorRect"),
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("invalidateMatrix"),
	HX_CSTRING("set_aspectRatio"),
	HX_CSTRING("get_aspectRatio"),
	HX_CSTRING("clone"),
	HX_CSTRING("unproject"),
	HX_CSTRING("get_unprojectionMatrix"),
	HX_CSTRING("project"),
	HX_CSTRING("set_far"),
	HX_CSTRING("get_far"),
	HX_CSTRING("set_near"),
	HX_CSTRING("get_near"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_frustumCorners"),
	HX_CSTRING("get_frustumCorners"),
	HX_CSTRING("_unprojectionInvalid"),
	HX_CSTRING("_unprojection"),
	HX_CSTRING("_frustumCorners"),
	HX_CSTRING("_matrixInvalid"),
	HX_CSTRING("_aspectRatio"),
	HX_CSTRING("_far"),
	HX_CSTRING("_near"),
	HX_CSTRING("_viewPort"),
	HX_CSTRING("_scissorRect"),
	HX_CSTRING("_matrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LensBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LensBase_obj::__mClass,"__mClass");
};

Class LensBase_obj::__mClass;

void LensBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.cameras.lenses.LensBase"), hx::TCanCast< LensBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LensBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
