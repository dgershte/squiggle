#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
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
namespace cameras{
namespace lenses{

Void PerspectiveLens_obj::__construct(hx::Null< Float >  __o_fieldOfView)
{
HX_STACK_PUSH("PerspectiveLens::new","away3d/cameras/lenses/PerspectiveLens.hx",24);
Float fieldOfView = __o_fieldOfView.Default(60);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->set_fieldOfView(fieldOfView);
}
;
	return null();
}

PerspectiveLens_obj::~PerspectiveLens_obj() { }

Dynamic PerspectiveLens_obj::__CreateEmpty() { return  new PerspectiveLens_obj; }
hx::ObjectPtr< PerspectiveLens_obj > PerspectiveLens_obj::__new(hx::Null< Float >  __o_fieldOfView)
{  hx::ObjectPtr< PerspectiveLens_obj > result = new PerspectiveLens_obj();
	result->__construct(__o_fieldOfView);
	return result;}

Dynamic PerspectiveLens_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PerspectiveLens_obj > result = new PerspectiveLens_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PerspectiveLens_obj::updateMatrix( ){
{
		HX_STACK_PUSH("PerspectiveLens::updateMatrix","away3d/cameras/lenses/PerspectiveLens.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(96)
		this->_yMax = (this->_near * this->_focalLengthInv);
		HX_STACK_LINE(97)
		this->_xMax = (this->_yMax * this->_aspectRatio);
		HX_STACK_LINE(98)
		Float left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(99)
		Float right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(100)
		Float top;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(101)
		Float bottom;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(102)
		if (((bool((bool((bool((this->_scissorRect->x == (int)0)) && bool((this->_scissorRect->y == (int)0)))) && bool((this->_scissorRect->width == this->_viewPort->width)))) && bool((this->_scissorRect->height == this->_viewPort->height))))){
			HX_STACK_LINE(104)
			left = -(this->_xMax);
			HX_STACK_LINE(105)
			right = this->_xMax;
			HX_STACK_LINE(106)
			top = -(this->_yMax);
			HX_STACK_LINE(107)
			bottom = this->_yMax;
			HX_STACK_LINE(109)
			raw[(int)0] = (Float(this->_near) / Float(this->_xMax));
			HX_STACK_LINE(110)
			raw[(int)5] = (Float(this->_near) / Float(this->_yMax));
			HX_STACK_LINE(111)
			raw[(int)10] = (Float(this->_far) / Float(((this->_far - this->_near))));
			HX_STACK_LINE(112)
			raw[(int)11] = (int)1;
			HX_STACK_LINE(113)
			raw[(int)1] = raw[(int)2] = raw[(int)3] = raw[(int)4] = raw[(int)6] = raw[(int)7] = raw[(int)8] = raw[(int)9] = raw[(int)12] = raw[(int)13] = raw[(int)15] = (int)0;
			HX_STACK_LINE(114)
			raw[(int)14] = (-(this->_near) * raw->__get((int)10));
		}
		else{
			HX_STACK_LINE(119)
			Float xWidth = (this->_xMax * ((Float(this->_viewPort->width) / Float(this->_scissorRect->width))));		HX_STACK_VAR(xWidth,"xWidth");
			HX_STACK_LINE(120)
			Float yHgt = (this->_yMax * ((Float(this->_viewPort->height) / Float(this->_scissorRect->height))));		HX_STACK_VAR(yHgt,"yHgt");
			HX_STACK_LINE(121)
			Float center = ((Float((this->_xMax * (((this->_scissorRect->x * (int)2) - this->_viewPort->width)))) / Float(this->_scissorRect->width)) + this->_xMax);		HX_STACK_VAR(center,"center");
			HX_STACK_LINE(122)
			Float middle = ((Float((-(this->_yMax) * (((this->_scissorRect->y * (int)2) - this->_viewPort->height)))) / Float(this->_scissorRect->height)) - this->_yMax);		HX_STACK_VAR(middle,"middle");
			HX_STACK_LINE(123)
			left = (center - xWidth);
			HX_STACK_LINE(124)
			right = (center + xWidth);
			HX_STACK_LINE(125)
			top = (middle - yHgt);
			HX_STACK_LINE(126)
			bottom = (middle + yHgt);
			HX_STACK_LINE(127)
			raw[(int)0] = (Float(((int)2 * this->_near)) / Float(((right - left))));
			HX_STACK_LINE(128)
			raw[(int)5] = (Float(((int)2 * this->_near)) / Float(((bottom - top))));
			HX_STACK_LINE(129)
			raw[(int)8] = (Float(((right + left))) / Float(((right - left))));
			HX_STACK_LINE(130)
			raw[(int)9] = (Float(((bottom + top))) / Float(((bottom - top))));
			HX_STACK_LINE(131)
			raw[(int)10] = (Float(((this->_far + this->_near))) / Float(((this->_far - this->_near))));
			HX_STACK_LINE(132)
			raw[(int)11] = (int)1;
			HX_STACK_LINE(133)
			raw[(int)1] = raw[(int)2] = raw[(int)3] = raw[(int)4] = raw[(int)6] = raw[(int)7] = raw[(int)12] = raw[(int)13] = raw[(int)15] = (int)0;
			HX_STACK_LINE(134)
			raw[(int)14] = (Float((((int)-2 * this->_far) * this->_near)) / Float(((this->_far - this->_near))));
		}
		HX_STACK_LINE(137)
		this->_matrix->copyRawDataFrom(raw,null(),null());
		HX_STACK_LINE(138)
		Float yMaxFar = (this->_far * this->_focalLengthInv);		HX_STACK_VAR(yMaxFar,"yMaxFar");
		HX_STACK_LINE(139)
		Float xMaxFar = (yMaxFar * this->_aspectRatio);		HX_STACK_VAR(xMaxFar,"xMaxFar");
		HX_STACK_LINE(140)
		this->_frustumCorners[(int)0] = this->_frustumCorners[(int)9] = left;
		HX_STACK_LINE(141)
		this->_frustumCorners[(int)3] = this->_frustumCorners[(int)6] = right;
		HX_STACK_LINE(142)
		this->_frustumCorners[(int)1] = this->_frustumCorners[(int)4] = top;
		HX_STACK_LINE(143)
		this->_frustumCorners[(int)7] = this->_frustumCorners[(int)10] = bottom;
		HX_STACK_LINE(144)
		this->_frustumCorners[(int)12] = this->_frustumCorners[(int)21] = -(xMaxFar);
		HX_STACK_LINE(145)
		this->_frustumCorners[(int)15] = this->_frustumCorners[(int)18] = xMaxFar;
		HX_STACK_LINE(146)
		this->_frustumCorners[(int)13] = this->_frustumCorners[(int)16] = -(yMaxFar);
		HX_STACK_LINE(147)
		this->_frustumCorners[(int)19] = this->_frustumCorners[(int)22] = yMaxFar;
		HX_STACK_LINE(148)
		this->_frustumCorners[(int)2] = this->_frustumCorners[(int)5] = this->_frustumCorners[(int)8] = this->_frustumCorners[(int)11] = this->_near;
		HX_STACK_LINE(149)
		this->_frustumCorners[(int)14] = this->_frustumCorners[(int)17] = this->_frustumCorners[(int)20] = this->_frustumCorners[(int)23] = this->_far;
		HX_STACK_LINE(151)
		this->_matrixInvalid = false;
	}
return null();
}


::away3d::cameras::lenses::LensBase PerspectiveLens_obj::clone( ){
	HX_STACK_PUSH("PerspectiveLens::clone","away3d/cameras/lenses/PerspectiveLens.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	::away3d::cameras::lenses::PerspectiveLens clone = ::away3d::cameras::lenses::PerspectiveLens_obj::__new(this->_fieldOfView);		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(84)
	clone->_near = this->_near;
	HX_STACK_LINE(85)
	clone->_far = this->_far;
	HX_STACK_LINE(86)
	clone->_aspectRatio = this->_aspectRatio;
	HX_STACK_LINE(87)
	return clone;
}


::flash::geom::Vector3D PerspectiveLens_obj::unproject( Float nX,Float nY,Float sZ){
	HX_STACK_PUSH("PerspectiveLens::unproject","away3d/cameras/lenses/PerspectiveLens.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(nX,"nX");
	HX_STACK_ARG(nY,"nY");
	HX_STACK_ARG(sZ,"sZ");
	HX_STACK_LINE(73)
	::flash::geom::Vector3D v = ::flash::geom::Vector3D_obj::__new(nX,-(nY),sZ,1.0);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(74)
	hx::MultEq(v->x,sZ);
	HX_STACK_LINE(75)
	hx::MultEq(v->y,sZ);
	HX_STACK_LINE(76)
	v = this->get_unprojectionMatrix()->transformVector(v);
	HX_STACK_LINE(78)
	v->z = sZ;
	HX_STACK_LINE(79)
	return v;
}


Float PerspectiveLens_obj::set_focalLength( Float value){
	HX_STACK_PUSH("PerspectiveLens::set_focalLength","away3d/cameras/lenses/PerspectiveLens.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(55)
	if (((value == this->_focalLength))){
		HX_STACK_LINE(55)
		return value;
	}
	HX_STACK_LINE(56)
	this->_focalLength = value;
	HX_STACK_LINE(57)
	this->_focalLengthInv = (Float((int)1) / Float(this->_focalLength));
	HX_STACK_LINE(58)
	this->_fieldOfView = (Float((::Math_obj::atan(this->_focalLengthInv) * (int)360)) / Float(::Math_obj::PI));
	HX_STACK_LINE(59)
	this->invalidateMatrix();
	HX_STACK_LINE(60)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PerspectiveLens_obj,set_focalLength,return )

Float PerspectiveLens_obj::get_focalLength( ){
	HX_STACK_PUSH("PerspectiveLens::get_focalLength","away3d/cameras/lenses/PerspectiveLens.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->_focalLength;
}


HX_DEFINE_DYNAMIC_FUNC0(PerspectiveLens_obj,get_focalLength,return )

Float PerspectiveLens_obj::set_fieldOfView( Float value){
	HX_STACK_PUSH("PerspectiveLens::set_fieldOfView","away3d/cameras/lenses/PerspectiveLens.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(38)
	if (((value == this->_fieldOfView))){
		HX_STACK_LINE(38)
		return value;
	}
	HX_STACK_LINE(39)
	this->_fieldOfView = value;
	HX_STACK_LINE(40)
	this->_focalLengthInv = ::Math_obj::tan((Float((this->_fieldOfView * ::Math_obj::PI)) / Float((int)360)));
	HX_STACK_LINE(41)
	this->_focalLength = (Float((int)1) / Float(this->_focalLengthInv));
	HX_STACK_LINE(42)
	this->invalidateMatrix();
	HX_STACK_LINE(43)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PerspectiveLens_obj,set_fieldOfView,return )

Float PerspectiveLens_obj::get_fieldOfView( ){
	HX_STACK_PUSH("PerspectiveLens::get_fieldOfView","away3d/cameras/lenses/PerspectiveLens.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return this->_fieldOfView;
}


HX_DEFINE_DYNAMIC_FUNC0(PerspectiveLens_obj,get_fieldOfView,return )


PerspectiveLens_obj::PerspectiveLens_obj()
{
}

void PerspectiveLens_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerspectiveLens);
	HX_MARK_MEMBER_NAME(_xMax,"_xMax");
	HX_MARK_MEMBER_NAME(_yMax,"_yMax");
	HX_MARK_MEMBER_NAME(_focalLengthInv,"_focalLengthInv");
	HX_MARK_MEMBER_NAME(_focalLength,"_focalLength");
	HX_MARK_MEMBER_NAME(_fieldOfView,"_fieldOfView");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PerspectiveLens_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_xMax,"_xMax");
	HX_VISIT_MEMBER_NAME(_yMax,"_yMax");
	HX_VISIT_MEMBER_NAME(_focalLengthInv,"_focalLengthInv");
	HX_VISIT_MEMBER_NAME(_focalLength,"_focalLength");
	HX_VISIT_MEMBER_NAME(_fieldOfView,"_fieldOfView");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PerspectiveLens_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_xMax") ) { return _xMax; }
		if (HX_FIELD_EQ(inName,"_yMax") ) { return _yMax; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focalLength") ) { return get_focalLength(); }
		if (HX_FIELD_EQ(inName,"fieldOfView") ) { return get_fieldOfView(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"_focalLength") ) { return _focalLength; }
		if (HX_FIELD_EQ(inName,"_fieldOfView") ) { return _fieldOfView; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_focalLength") ) { return set_focalLength_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focalLength") ) { return get_focalLength_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldOfView") ) { return set_fieldOfView_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldOfView") ) { return get_fieldOfView_dyn(); }
		if (HX_FIELD_EQ(inName,"_focalLengthInv") ) { return _focalLengthInv; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PerspectiveLens_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_xMax") ) { _xMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yMax") ) { _yMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focalLength") ) { return set_focalLength(inValue); }
		if (HX_FIELD_EQ(inName,"fieldOfView") ) { return set_fieldOfView(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_focalLength") ) { _focalLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fieldOfView") ) { _fieldOfView=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_focalLengthInv") ) { _focalLengthInv=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PerspectiveLens_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_xMax"));
	outFields->push(HX_CSTRING("_yMax"));
	outFields->push(HX_CSTRING("_focalLengthInv"));
	outFields->push(HX_CSTRING("_focalLength"));
	outFields->push(HX_CSTRING("_fieldOfView"));
	outFields->push(HX_CSTRING("focalLength"));
	outFields->push(HX_CSTRING("fieldOfView"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("clone"),
	HX_CSTRING("unproject"),
	HX_CSTRING("set_focalLength"),
	HX_CSTRING("get_focalLength"),
	HX_CSTRING("set_fieldOfView"),
	HX_CSTRING("get_fieldOfView"),
	HX_CSTRING("_xMax"),
	HX_CSTRING("_yMax"),
	HX_CSTRING("_focalLengthInv"),
	HX_CSTRING("_focalLength"),
	HX_CSTRING("_fieldOfView"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerspectiveLens_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerspectiveLens_obj::__mClass,"__mClass");
};

Class PerspectiveLens_obj::__mClass;

void PerspectiveLens_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.cameras.lenses.PerspectiveLens"), hx::TCanCast< PerspectiveLens_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PerspectiveLens_obj::__boot()
{
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
