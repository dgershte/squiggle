#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Quaternion
#include <away3d/core/math/Quaternion.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace math{

Void Matrix3DUtils_obj::__construct()
{
	return null();
}

Matrix3DUtils_obj::~Matrix3DUtils_obj() { }

Dynamic Matrix3DUtils_obj::__CreateEmpty() { return  new Matrix3DUtils_obj; }
hx::ObjectPtr< Matrix3DUtils_obj > Matrix3DUtils_obj::__new()
{  hx::ObjectPtr< Matrix3DUtils_obj > result = new Matrix3DUtils_obj();
	result->__construct();
	return result;}

Dynamic Matrix3DUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3DUtils_obj > result = new Matrix3DUtils_obj();
	result->__construct();
	return result;}

Array< Float > Matrix3DUtils_obj::RAW_DATA_CONTAINER;

::flash::geom::Matrix3D Matrix3DUtils_obj::CALCULATION_MATRIX;

::flash::geom::Matrix3D Matrix3DUtils_obj::quaternion2matrix( ::away3d::core::math::Quaternion quarternion,::flash::geom::Matrix3D m){
	HX_STACK_PUSH("Matrix3DUtils::quaternion2matrix","away3d/core/math/Matrix3DUtils.hx",24);
	HX_STACK_ARG(quarternion,"quarternion");
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(25)
	Float x = quarternion->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(26)
	Float y = quarternion->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(27)
	Float z = quarternion->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(28)
	Float w = quarternion->w;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(29)
	Float xx = (x * x);		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(30)
	Float xy = (x * y);		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(31)
	Float xz = (x * z);		HX_STACK_VAR(xz,"xz");
	HX_STACK_LINE(32)
	Float xw = (x * w);		HX_STACK_VAR(xw,"xw");
	HX_STACK_LINE(33)
	Float yy = (y * y);		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(34)
	Float yz = (y * z);		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(35)
	Float yw = (y * w);		HX_STACK_VAR(yw,"yw");
	HX_STACK_LINE(36)
	Float zz = (z * z);		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(37)
	Float zw = (z * w);		HX_STACK_VAR(zw,"zw");
	HX_STACK_LINE(38)
	Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(39)
	raw[(int)0] = ((int)1 - ((int)2 * ((yy + zz))));
	HX_STACK_LINE(40)
	raw[(int)1] = ((int)2 * ((xy + zw)));
	HX_STACK_LINE(41)
	raw[(int)2] = ((int)2 * ((xz - yw)));
	HX_STACK_LINE(42)
	raw[(int)4] = ((int)2 * ((xy - zw)));
	HX_STACK_LINE(43)
	raw[(int)5] = ((int)1 - ((int)2 * ((xx + zz))));
	HX_STACK_LINE(44)
	raw[(int)6] = ((int)2 * ((yz + xw)));
	HX_STACK_LINE(45)
	raw[(int)8] = ((int)2 * ((xz + yw)));
	HX_STACK_LINE(46)
	raw[(int)9] = ((int)2 * ((yz - xw)));
	HX_STACK_LINE(47)
	raw[(int)10] = ((int)1 - ((int)2 * ((xx + yy))));
	HX_STACK_LINE(48)
	raw[(int)3] = raw[(int)7] = raw[(int)11] = raw[(int)12] = raw[(int)13] = raw[(int)14] = (int)0;
	HX_STACK_LINE(49)
	raw[(int)15] = (int)1;
	HX_STACK_LINE(50)
	if (((m != null()))){
		HX_STACK_LINE(51)
		m->copyRawDataFrom(raw,null(),null());
		HX_STACK_LINE(52)
		return m;
	}
	else{
		HX_STACK_LINE(55)
		return ::flash::geom::Matrix3D_obj::__new(raw);
	}
	HX_STACK_LINE(50)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,quaternion2matrix,return )

::flash::geom::Vector3D Matrix3DUtils_obj::getForward( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3DUtils::getForward","away3d/core/math/Matrix3DUtils.hx",65);
	HX_STACK_ARG(m,"m");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(66)
	if (((v == null()))){
		HX_STACK_LINE(67)
		v = ::flash::geom::Vector3D_obj::__new(0.0,0.0,0.0,null());
	}
	HX_STACK_LINE(68)
	m->copyColumnTo((int)2,v);
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		Float l = ::Math_obj::sqrt((((v->x * v->x) + (v->y * v->y)) + (v->z * v->z)));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(69)
		if (((l != (int)0))){
			HX_STACK_LINE(69)
			hx::DivEq(v->x,l);
			HX_STACK_LINE(69)
			hx::DivEq(v->y,l);
			HX_STACK_LINE(69)
			hx::DivEq(v->z,l);
		}
		HX_STACK_LINE(69)
		l;
	}
	HX_STACK_LINE(70)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getForward,return )

::flash::geom::Vector3D Matrix3DUtils_obj::getUp( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3DUtils::getUp","away3d/core/math/Matrix3DUtils.hx",80);
	HX_STACK_ARG(m,"m");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(81)
	if (((v == null()))){
		HX_STACK_LINE(82)
		v = ::flash::geom::Vector3D_obj::__new(0.0,0.0,0.0,null());
	}
	HX_STACK_LINE(83)
	m->copyColumnTo((int)1,v);
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Float l = ::Math_obj::sqrt((((v->x * v->x) + (v->y * v->y)) + (v->z * v->z)));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(84)
		if (((l != (int)0))){
			HX_STACK_LINE(84)
			hx::DivEq(v->x,l);
			HX_STACK_LINE(84)
			hx::DivEq(v->y,l);
			HX_STACK_LINE(84)
			hx::DivEq(v->z,l);
		}
		HX_STACK_LINE(84)
		l;
	}
	HX_STACK_LINE(85)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getUp,return )

::flash::geom::Vector3D Matrix3DUtils_obj::getRight( ::flash::geom::Matrix3D m,::flash::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3DUtils::getRight","away3d/core/math/Matrix3DUtils.hx",95);
	HX_STACK_ARG(m,"m");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(96)
	if (((v == null()))){
		HX_STACK_LINE(97)
		v = ::flash::geom::Vector3D_obj::__new(0.0,0.0,0.0,null());
	}
	HX_STACK_LINE(98)
	m->copyColumnTo((int)0,v);
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float l = ::Math_obj::sqrt((((v->x * v->x) + (v->y * v->y)) + (v->z * v->z)));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(99)
		if (((l != (int)0))){
			HX_STACK_LINE(99)
			hx::DivEq(v->x,l);
			HX_STACK_LINE(99)
			hx::DivEq(v->y,l);
			HX_STACK_LINE(99)
			hx::DivEq(v->z,l);
		}
		HX_STACK_LINE(99)
		l;
	}
	HX_STACK_LINE(100)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,getRight,return )

bool Matrix3DUtils_obj::compare( ::flash::geom::Matrix3D m1,::flash::geom::Matrix3D m2){
	HX_STACK_PUSH("Matrix3DUtils::compare","away3d/core/math/Matrix3DUtils.hx",107);
	HX_STACK_ARG(m1,"m1");
	HX_STACK_ARG(m2,"m2");
	HX_STACK_LINE(108)
	Array< Float > r1 = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(109)
	Array< Float > r2 = m2->rawData;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(110)
	m1->copyRawDataTo(r1,null(),null());
	HX_STACK_LINE(111)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(112)
	while(((i < (int)16))){
		HX_STACK_LINE(113)
		if (((r1->__get(i) != r2->__get(i)))){
			HX_STACK_LINE(113)
			return false;
		}
		HX_STACK_LINE(114)
		++(i);
	}
	HX_STACK_LINE(116)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,compare,return )

Void Matrix3DUtils_obj::lookAt( ::flash::geom::Matrix3D matrix,::flash::geom::Vector3D pos,::flash::geom::Vector3D dir,::flash::geom::Vector3D up){
{
		HX_STACK_PUSH("Matrix3DUtils::lookAt","away3d/core/math/Matrix3DUtils.hx",119);
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(pos,"pos");
		HX_STACK_ARG(dir,"dir");
		HX_STACK_ARG(up,"up");
		HX_STACK_LINE(120)
		::flash::geom::Vector3D dirN;		HX_STACK_VAR(dirN,"dirN");
		HX_STACK_LINE(121)
		::flash::geom::Vector3D upN;		HX_STACK_VAR(upN,"upN");
		HX_STACK_LINE(122)
		::flash::geom::Vector3D lftN;		HX_STACK_VAR(lftN,"lftN");
		HX_STACK_LINE(123)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(124)
		lftN = ::flash::geom::Vector3D_obj::__new(((dir->y * up->z) - (dir->z * up->y)),((dir->z * up->x) - (dir->x * up->z)),((dir->x * up->y) - (dir->y * up->x)),(int)1);
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Float l = ::Math_obj::sqrt((((lftN->x * lftN->x) + (lftN->y * lftN->y)) + (lftN->z * lftN->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(125)
			if (((l != (int)0))){
				HX_STACK_LINE(125)
				hx::DivEq(lftN->x,l);
				HX_STACK_LINE(125)
				hx::DivEq(lftN->y,l);
				HX_STACK_LINE(125)
				hx::DivEq(lftN->z,l);
			}
			HX_STACK_LINE(125)
			l;
		}
		HX_STACK_LINE(126)
		upN = ::flash::geom::Vector3D_obj::__new(((lftN->y * dir->z) - (lftN->z * dir->y)),((lftN->z * dir->x) - (lftN->x * dir->z)),((lftN->x * dir->y) - (lftN->y * dir->x)),(int)1);
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			Float l = ::Math_obj::sqrt((((upN->x * upN->x) + (upN->y * upN->y)) + (upN->z * upN->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(127)
			if (((l != (int)0))){
				HX_STACK_LINE(127)
				hx::DivEq(upN->x,l);
				HX_STACK_LINE(127)
				hx::DivEq(upN->y,l);
				HX_STACK_LINE(127)
				hx::DivEq(upN->z,l);
			}
			HX_STACK_LINE(127)
			l;
		}
		HX_STACK_LINE(128)
		dirN = ::flash::geom::Vector3D_obj::__new(dir->x,dir->y,dir->z,dir->w);
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Float l = ::Math_obj::sqrt((((dirN->x * dirN->x) + (dirN->y * dirN->y)) + (dirN->z * dirN->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(129)
			if (((l != (int)0))){
				HX_STACK_LINE(129)
				hx::DivEq(dirN->x,l);
				HX_STACK_LINE(129)
				hx::DivEq(dirN->y,l);
				HX_STACK_LINE(129)
				hx::DivEq(dirN->z,l);
			}
			HX_STACK_LINE(129)
			l;
		}
		HX_STACK_LINE(130)
		raw[(int)0] = lftN->x;
		HX_STACK_LINE(131)
		raw[(int)1] = upN->x;
		HX_STACK_LINE(132)
		raw[(int)2] = -(dirN->x);
		HX_STACK_LINE(133)
		raw[(int)3] = 0.0;
		HX_STACK_LINE(134)
		raw[(int)4] = lftN->y;
		HX_STACK_LINE(135)
		raw[(int)5] = upN->y;
		HX_STACK_LINE(136)
		raw[(int)6] = -(dirN->y);
		HX_STACK_LINE(137)
		raw[(int)7] = 0.0;
		HX_STACK_LINE(138)
		raw[(int)8] = lftN->z;
		HX_STACK_LINE(139)
		raw[(int)9] = upN->z;
		HX_STACK_LINE(140)
		raw[(int)10] = -(dirN->z);
		HX_STACK_LINE(141)
		raw[(int)11] = 0.0;
		HX_STACK_LINE(142)
		raw[(int)12] = -(((((lftN->x * pos->x) + (lftN->y * pos->y)) + (lftN->z * pos->z))));
		HX_STACK_LINE(143)
		raw[(int)13] = -(((((upN->x * pos->x) + (upN->y * pos->y)) + (upN->z * pos->z))));
		HX_STACK_LINE(144)
		raw[(int)14] = (((dirN->x * pos->x) + (dirN->y * pos->y)) + (dirN->z * pos->z));
		HX_STACK_LINE(145)
		raw[(int)15] = 1.0;
		HX_STACK_LINE(146)
		matrix->copyRawDataFrom(raw,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3DUtils_obj,lookAt,(void))

::flash::geom::Matrix3D Matrix3DUtils_obj::reflection( ::away3d::core::math::Plane3D plane,::flash::geom::Matrix3D target){
	HX_STACK_PUSH("Matrix3DUtils::reflection","away3d/core/math/Matrix3DUtils.hx",149);
	HX_STACK_ARG(plane,"plane");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(150)
	if (((target == null()))){
		HX_STACK_LINE(151)
		target = ::flash::geom::Matrix3D_obj::__new(null());
	}
	HX_STACK_LINE(152)
	Float a = plane->a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(153)
	Float b = plane->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(154)
	Float c = plane->c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(155)
	Float d = plane->d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(156)
	Array< Float > rawData = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(rawData,"rawData");
	HX_STACK_LINE(157)
	Float ab2 = (((int)-2 * a) * b);		HX_STACK_VAR(ab2,"ab2");
	HX_STACK_LINE(158)
	Float ac2 = (((int)-2 * a) * c);		HX_STACK_VAR(ac2,"ac2");
	HX_STACK_LINE(159)
	Float bc2 = (((int)-2 * b) * c);		HX_STACK_VAR(bc2,"bc2");
	HX_STACK_LINE(161)
	rawData[(int)0] = ((int)1 - (((int)2 * a) * a));
	HX_STACK_LINE(162)
	rawData[(int)4] = ab2;
	HX_STACK_LINE(163)
	rawData[(int)8] = ac2;
	HX_STACK_LINE(164)
	rawData[(int)12] = (((int)-2 * a) * d);
	HX_STACK_LINE(165)
	rawData[(int)1] = ab2;
	HX_STACK_LINE(166)
	rawData[(int)5] = ((int)1 - (((int)2 * b) * b));
	HX_STACK_LINE(167)
	rawData[(int)9] = bc2;
	HX_STACK_LINE(168)
	rawData[(int)13] = (((int)-2 * b) * d);
	HX_STACK_LINE(169)
	rawData[(int)2] = ac2;
	HX_STACK_LINE(170)
	rawData[(int)6] = bc2;
	HX_STACK_LINE(171)
	rawData[(int)10] = ((int)1 - (((int)2 * c) * c));
	HX_STACK_LINE(172)
	rawData[(int)14] = (((int)-2 * c) * d);
	HX_STACK_LINE(173)
	rawData[(int)3] = (int)0;
	HX_STACK_LINE(174)
	rawData[(int)7] = (int)0;
	HX_STACK_LINE(175)
	rawData[(int)11] = (int)0;
	HX_STACK_LINE(176)
	rawData[(int)15] = (int)1;
	HX_STACK_LINE(177)
	target->copyRawDataFrom(rawData,null(),null());
	HX_STACK_LINE(178)
	return target;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix3DUtils_obj,reflection,return )


Matrix3DUtils_obj::Matrix3DUtils_obj()
{
}

void Matrix3DUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3DUtils);
	HX_MARK_END_CLASS();
}

void Matrix3DUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Matrix3DUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getUp") ) { return getUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lookAt") ) { return lookAt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRight") ) { return getRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getForward") ) { return getForward_dyn(); }
		if (HX_FIELD_EQ(inName,"reflection") ) { return reflection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"quaternion2matrix") ) { return quaternion2matrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RAW_DATA_CONTAINER") ) { return RAW_DATA_CONTAINER; }
		if (HX_FIELD_EQ(inName,"CALCULATION_MATRIX") ) { return CALCULATION_MATRIX; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3DUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RAW_DATA_CONTAINER") ) { RAW_DATA_CONTAINER=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CALCULATION_MATRIX") ) { CALCULATION_MATRIX=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3DUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RAW_DATA_CONTAINER"),
	HX_CSTRING("CALCULATION_MATRIX"),
	HX_CSTRING("quaternion2matrix"),
	HX_CSTRING("getForward"),
	HX_CSTRING("getUp"),
	HX_CSTRING("getRight"),
	HX_CSTRING("compare"),
	HX_CSTRING("lookAt"),
	HX_CSTRING("reflection"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::RAW_DATA_CONTAINER,"RAW_DATA_CONTAINER");
	HX_MARK_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_MATRIX,"CALCULATION_MATRIX");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::RAW_DATA_CONTAINER,"RAW_DATA_CONTAINER");
	HX_VISIT_MEMBER_NAME(Matrix3DUtils_obj::CALCULATION_MATRIX,"CALCULATION_MATRIX");
};

Class Matrix3DUtils_obj::__mClass;

void Matrix3DUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.math.Matrix3DUtils"), hx::TCanCast< Matrix3DUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix3DUtils_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_PUSH("*::closure","away3d/core/math/Matrix3DUtils.hx",16);
		{
			HX_STACK_LINE(16)
			Dynamic array = ::flash::_Vector::Vector_Impl__obj::_new((int)16,null());		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(16)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(16)
			while((((c)++ < (int)16))){
				HX_STACK_LINE(16)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(16)
			return array;
		}
		return null();
	}
};
	RAW_DATA_CONTAINER= _Function_0_1::Block();
	CALCULATION_MATRIX= ::flash::geom::Matrix3D_obj::__new(null());
}

} // end namespace away3d
} // end namespace core
} // end namespace math
