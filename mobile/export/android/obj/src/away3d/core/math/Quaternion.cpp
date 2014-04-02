#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_math_Quaternion
#include <away3d/core/math/Quaternion.h>
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

Void Quaternion_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_PUSH("Quaternion::new","away3d/core/math/Quaternion.hx",36);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(1);
{
	HX_STACK_LINE(37)
	x = (int)0;
	HX_STACK_LINE(38)
	y = (int)0;
	HX_STACK_LINE(39)
	z = (int)0;
	HX_STACK_LINE(40)
	w = (int)1;
	HX_STACK_LINE(41)
	this->x = x;
	HX_STACK_LINE(42)
	this->y = y;
	HX_STACK_LINE(43)
	this->z = z;
	HX_STACK_LINE(44)
	this->w = w;
}
;
	return null();
}

Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(__o_x,__o_y,__o_z,__o_w);
	return result;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Quaternion_obj::copyFrom( ::away3d::core::math::Quaternion q){
{
		HX_STACK_PUSH("Quaternion::copyFrom","away3d/core/math/Quaternion.hx",389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(390)
		this->x = q->x;
		HX_STACK_LINE(391)
		this->y = q->y;
		HX_STACK_LINE(392)
		this->z = q->z;
		HX_STACK_LINE(393)
		this->w = q->w;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,copyFrom,(void))

::flash::geom::Vector3D Quaternion_obj::rotatePoint( ::flash::geom::Vector3D vector,::flash::geom::Vector3D target){
	HX_STACK_PUSH("Quaternion::rotatePoint","away3d/core/math/Quaternion.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(364)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(365)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(366)
	Float z1;		HX_STACK_VAR(z1,"z1");
	HX_STACK_LINE(367)
	Float w1;		HX_STACK_VAR(w1,"w1");
	HX_STACK_LINE(368)
	Float x2 = vector->x;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(369)
	Float y2 = vector->y;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(370)
	Float z2 = vector->z;		HX_STACK_VAR(z2,"z2");
	HX_STACK_LINE(371)
	if (((target == null()))){
		HX_STACK_LINE(372)
		target = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(374)
	w1 = (((-(this->x) * x2) - (this->y * y2)) - (this->z * z2));
	HX_STACK_LINE(375)
	x1 = (((this->w * x2) + (this->y * z2)) - (this->z * y2));
	HX_STACK_LINE(376)
	y1 = (((this->w * y2) - (this->x * z2)) + (this->z * x2));
	HX_STACK_LINE(377)
	z1 = (((this->w * z2) + (this->x * y2)) - (this->y * x2));
	HX_STACK_LINE(378)
	target->x = ((((-(w1) * this->x) + (x1 * this->w)) - (y1 * this->z)) + (z1 * this->y));
	HX_STACK_LINE(379)
	target->y = ((((-(w1) * this->y) + (x1 * this->z)) + (y1 * this->w)) - (z1 * this->x));
	HX_STACK_LINE(380)
	target->z = ((((-(w1) * this->z) - (x1 * this->y)) + (y1 * this->x)) + (z1 * this->w));
	HX_STACK_LINE(381)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,rotatePoint,return )

::away3d::core::math::Quaternion Quaternion_obj::clone( ){
	HX_STACK_PUSH("Quaternion::clone","away3d/core/math/Quaternion.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_LINE(352)
	return ::away3d::core::math::Quaternion_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,clone,return )

Void Quaternion_obj::toRawData( Array< Float > target,hx::Null< bool >  __o_exclude4thRow){
bool exclude4thRow = __o_exclude4thRow.Default(false);
	HX_STACK_PUSH("Quaternion::toRawData","away3d/core/math/Quaternion.hx",320);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(exclude4thRow,"exclude4thRow");
{
		HX_STACK_LINE(321)
		Float xy2 = ((2.0 * this->x) * this->y);		HX_STACK_VAR(xy2,"xy2");
		HX_STACK_LINE(322)
		Float xz2 = ((2.0 * this->x) * this->z);		HX_STACK_VAR(xz2,"xz2");
		HX_STACK_LINE(323)
		Float xw2 = ((2.0 * this->x) * this->w);		HX_STACK_VAR(xw2,"xw2");
		HX_STACK_LINE(324)
		Float yz2 = ((2.0 * this->y) * this->z);		HX_STACK_VAR(yz2,"yz2");
		HX_STACK_LINE(325)
		Float yw2 = ((2.0 * this->y) * this->w);		HX_STACK_VAR(yw2,"yw2");
		HX_STACK_LINE(326)
		Float zw2 = ((2.0 * this->z) * this->w);		HX_STACK_VAR(zw2,"zw2");
		HX_STACK_LINE(327)
		Float xx = (this->x * this->x);		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(328)
		Float yy = (this->y * this->y);		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(329)
		Float zz = (this->z * this->z);		HX_STACK_VAR(zz,"zz");
		HX_STACK_LINE(330)
		Float ww = (this->w * this->w);		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(331)
		target[(int)0] = (((xx - yy) - zz) + ww);
		HX_STACK_LINE(332)
		target[(int)1] = (xy2 - zw2);
		HX_STACK_LINE(333)
		target[(int)2] = (xz2 + yw2);
		HX_STACK_LINE(334)
		target[(int)4] = (xy2 + zw2);
		HX_STACK_LINE(335)
		target[(int)5] = (((-(xx) + yy) - zz) + ww);
		HX_STACK_LINE(336)
		target[(int)6] = (yz2 - xw2);
		HX_STACK_LINE(337)
		target[(int)8] = (xz2 - yw2);
		HX_STACK_LINE(338)
		target[(int)9] = (yz2 + xw2);
		HX_STACK_LINE(339)
		target[(int)10] = (((-(xx) - yy) + zz) + ww);
		HX_STACK_LINE(340)
		target[(int)3] = target[(int)7] = target[(int)11] = (int)0;
		HX_STACK_LINE(341)
		if ((!(exclude4thRow))){
			HX_STACK_LINE(342)
			target[(int)12] = target[(int)13] = target[(int)14] = (int)0;
			HX_STACK_LINE(343)
			target[(int)15] = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,toRawData,(void))

Void Quaternion_obj::fromMatrix( ::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("Quaternion::fromMatrix","away3d/core/math/Quaternion.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(300)
		Array< ::Dynamic > tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		tmp = matrix->decompose();
		HX_STACK_LINE(307)
		::flash::geom::Vector3D v = tmp->__get((int)1).StaticCast< ::flash::geom::Vector3D >();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(308)
		this->x = v->x;
		HX_STACK_LINE(309)
		this->y = v->y;
		HX_STACK_LINE(310)
		this->z = v->z;
		HX_STACK_LINE(311)
		this->w = v->w;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,fromMatrix,(void))

::flash::geom::Matrix3D Quaternion_obj::toMatrix3D( ::flash::geom::Matrix3D target){
	HX_STACK_PUSH("Quaternion::toMatrix3D","away3d/core/math/Quaternion.hx",261);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(262)
	Array< Float > rawData = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(rawData,"rawData");
	HX_STACK_LINE(263)
	Float xy2 = ((2.0 * this->x) * this->y);		HX_STACK_VAR(xy2,"xy2");
	HX_STACK_LINE(264)
	Float xz2 = ((2.0 * this->x) * this->z);		HX_STACK_VAR(xz2,"xz2");
	HX_STACK_LINE(265)
	Float xw2 = ((2.0 * this->x) * this->w);		HX_STACK_VAR(xw2,"xw2");
	HX_STACK_LINE(266)
	Float yz2 = ((2.0 * this->y) * this->z);		HX_STACK_VAR(yz2,"yz2");
	HX_STACK_LINE(267)
	Float yw2 = ((2.0 * this->y) * this->w);		HX_STACK_VAR(yw2,"yw2");
	HX_STACK_LINE(268)
	Float zw2 = ((2.0 * this->z) * this->w);		HX_STACK_VAR(zw2,"zw2");
	HX_STACK_LINE(269)
	Float xx = (this->x * this->x);		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(270)
	Float yy = (this->y * this->y);		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(271)
	Float zz = (this->z * this->z);		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(272)
	Float ww = (this->w * this->w);		HX_STACK_VAR(ww,"ww");
	HX_STACK_LINE(273)
	rawData[(int)0] = (((xx - yy) - zz) + ww);
	HX_STACK_LINE(274)
	rawData[(int)4] = (xy2 - zw2);
	HX_STACK_LINE(275)
	rawData[(int)8] = (xz2 + yw2);
	HX_STACK_LINE(276)
	rawData[(int)12] = (int)0;
	HX_STACK_LINE(277)
	rawData[(int)1] = (xy2 + zw2);
	HX_STACK_LINE(278)
	rawData[(int)5] = (((-(xx) + yy) - zz) + ww);
	HX_STACK_LINE(279)
	rawData[(int)9] = (yz2 - xw2);
	HX_STACK_LINE(280)
	rawData[(int)13] = (int)0;
	HX_STACK_LINE(281)
	rawData[(int)2] = (xz2 - yw2);
	HX_STACK_LINE(282)
	rawData[(int)6] = (yz2 + xw2);
	HX_STACK_LINE(283)
	rawData[(int)10] = (((-(xx) - yy) + zz) + ww);
	HX_STACK_LINE(284)
	rawData[(int)14] = (int)0;
	HX_STACK_LINE(285)
	rawData[(int)3] = 0.0;
	HX_STACK_LINE(286)
	rawData[(int)7] = 0.0;
	HX_STACK_LINE(287)
	rawData[(int)11] = (int)0;
	HX_STACK_LINE(288)
	rawData[(int)15] = (int)1;
	HX_STACK_LINE(289)
	if (((target == null()))){
		HX_STACK_LINE(289)
		return ::flash::geom::Matrix3D_obj::__new(rawData);
	}
	HX_STACK_LINE(290)
	target->copyRawDataFrom(rawData,null(),null());
	HX_STACK_LINE(291)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toMatrix3D,return )

::String Quaternion_obj::toString( ){
	HX_STACK_PUSH("Quaternion::toString","away3d/core/math/Quaternion.hx",251);
	HX_STACK_THIS(this);
	HX_STACK_LINE(251)
	return ((((((((HX_CSTRING("{x:") + this->x) + HX_CSTRING(" y:")) + this->y) + HX_CSTRING(" z:")) + this->z) + HX_CSTRING(" w:")) + this->w) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toString,return )

Void Quaternion_obj::normalize( hx::Null< Float >  __o_val){
Float val = __o_val.Default(1);
	HX_STACK_PUSH("Quaternion::normalize","away3d/core/math/Quaternion.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
{
		HX_STACK_LINE(238)
		Float mag = (Float(val) / Float(::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)))));		HX_STACK_VAR(mag,"mag");
		HX_STACK_LINE(239)
		hx::MultEq(this->x,mag);
		HX_STACK_LINE(240)
		hx::MultEq(this->y,mag);
		HX_STACK_LINE(241)
		hx::MultEq(this->z,mag);
		HX_STACK_LINE(242)
		hx::MultEq(this->w,mag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,normalize,(void))

::flash::geom::Vector3D Quaternion_obj::toEulerAngles( ::flash::geom::Vector3D target){
	HX_STACK_PUSH("Quaternion::toEulerAngles","away3d/core/math/Quaternion.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(225)
	if (((target == null()))){
		HX_STACK_LINE(226)
		target = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(227)
	target->x = ::Math_obj::atan2(((int)2 * (((this->w * this->x) + (this->y * this->z)))),((int)1 - ((int)2 * (((this->x * this->x) + (this->y * this->y))))));
	HX_STACK_LINE(228)
	target->y = ::Math_obj::asin(((int)2 * (((this->w * this->y) - (this->z * this->x)))));
	HX_STACK_LINE(229)
	target->z = ::Math_obj::atan2(((int)2 * (((this->w * this->z) + (this->x * this->y)))),((int)1 - ((int)2 * (((this->y * this->y) + (this->z * this->z))))));
	HX_STACK_LINE(230)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,toEulerAngles,return )

Void Quaternion_obj::fromEulerAngles( Float ax,Float ay,Float az){
{
		HX_STACK_PUSH("Quaternion::fromEulerAngles","away3d/core/math/Quaternion.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ax,"ax");
		HX_STACK_ARG(ay,"ay");
		HX_STACK_ARG(az,"az");
		HX_STACK_LINE(203)
		Float halfX = (ax * .5);		HX_STACK_VAR(halfX,"halfX");
		HX_STACK_LINE(204)
		Float halfY = (ay * .5);		HX_STACK_VAR(halfY,"halfY");
		HX_STACK_LINE(205)
		Float halfZ = (az * .5);		HX_STACK_VAR(halfZ,"halfZ");
		HX_STACK_LINE(206)
		Float cosX = ::Math_obj::cos(halfX);		HX_STACK_VAR(cosX,"cosX");
		HX_STACK_LINE(207)
		Float sinX = ::Math_obj::sin(halfX);		HX_STACK_VAR(sinX,"sinX");
		HX_STACK_LINE(208)
		Float cosY = ::Math_obj::cos(halfY);		HX_STACK_VAR(cosY,"cosY");
		HX_STACK_LINE(209)
		Float sinY = ::Math_obj::sin(halfY);		HX_STACK_VAR(sinY,"sinY");
		HX_STACK_LINE(210)
		Float cosZ = ::Math_obj::cos(halfZ);		HX_STACK_VAR(cosZ,"cosZ");
		HX_STACK_LINE(211)
		Float sinZ = ::Math_obj::sin(halfZ);		HX_STACK_VAR(sinZ,"sinZ");
		HX_STACK_LINE(212)
		this->w = (((cosX * cosY) * cosZ) + ((sinX * sinY) * sinZ));
		HX_STACK_LINE(213)
		this->x = (((sinX * cosY) * cosZ) - ((cosX * sinY) * sinZ));
		HX_STACK_LINE(214)
		this->y = (((cosX * sinY) * cosZ) + ((sinX * cosY) * sinZ));
		HX_STACK_LINE(215)
		this->z = (((cosX * cosY) * sinZ) - ((sinX * sinY) * cosZ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,fromEulerAngles,(void))

Void Quaternion_obj::lerp( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb,Float t){
{
		HX_STACK_PUSH("Quaternion::lerp","away3d/core/math/Quaternion.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_ARG(qa,"qa");
		HX_STACK_ARG(qb,"qb");
		HX_STACK_ARG(t,"t");
		HX_STACK_LINE(167)
		Float w1 = qa->w;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(168)
		Float x1 = qa->x;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(169)
		Float y1 = qa->y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(170)
		Float z1 = qa->z;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(171)
		Float w2 = qb->w;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(172)
		Float x2 = qb->x;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(173)
		Float y2 = qb->y;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(174)
		Float z2 = qb->z;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(175)
		Float len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(177)
		if (((((((w1 * w2) + (x1 * x2)) + (y1 * y2)) + (z1 * z2)) < (int)0))){
			HX_STACK_LINE(178)
			w2 = -(w2);
			HX_STACK_LINE(179)
			x2 = -(x2);
			HX_STACK_LINE(180)
			y2 = -(y2);
			HX_STACK_LINE(181)
			z2 = -(z2);
		}
		HX_STACK_LINE(183)
		this->w = (w1 + (t * ((w2 - w1))));
		HX_STACK_LINE(184)
		this->x = (x1 + (t * ((x2 - x1))));
		HX_STACK_LINE(185)
		this->y = (y1 + (t * ((y2 - y1))));
		HX_STACK_LINE(186)
		this->z = (z1 + (t * ((z2 - z1))));
		HX_STACK_LINE(187)
		len = (Float(1.0) / Float(::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z)))));
		HX_STACK_LINE(188)
		hx::MultEq(this->w,len);
		HX_STACK_LINE(189)
		hx::MultEq(this->x,len);
		HX_STACK_LINE(190)
		hx::MultEq(this->y,len);
		HX_STACK_LINE(191)
		hx::MultEq(this->z,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,lerp,(void))

Void Quaternion_obj::slerp( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb,Float t){
{
		HX_STACK_PUSH("Quaternion::slerp","away3d/core/math/Quaternion.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(qa,"qa");
		HX_STACK_ARG(qb,"qb");
		HX_STACK_ARG(t,"t");
		HX_STACK_LINE(115)
		Float w1 = qa->w;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(116)
		Float x1 = qa->x;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(117)
		Float y1 = qa->y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(118)
		Float z1 = qa->z;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(119)
		Float w2 = qb->w;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(120)
		Float x2 = qb->x;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(121)
		Float y2 = qb->y;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(122)
		Float z2 = qb->z;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(123)
		Float dot = ((((w1 * w2) + (x1 * x2)) + (y1 * y2)) + (z1 * z2));		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(125)
		if (((dot < (int)0))){
			HX_STACK_LINE(126)
			dot = -(dot);
			HX_STACK_LINE(127)
			w2 = -(w2);
			HX_STACK_LINE(128)
			x2 = -(x2);
			HX_STACK_LINE(129)
			y2 = -(y2);
			HX_STACK_LINE(130)
			z2 = -(z2);
		}
		HX_STACK_LINE(132)
		if (((dot < 0.95))){
			HX_STACK_LINE(134)
			Float angle = ::Math_obj::acos(dot);		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(135)
			Float s = (Float((int)1) / Float(::Math_obj::sin(angle)));		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(136)
			Float s1 = (::Math_obj::sin((angle * (((int)1 - t)))) * s);		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(137)
			Float s2 = (::Math_obj::sin((angle * t)) * s);		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(138)
			this->w = ((w1 * s1) + (w2 * s2));
			HX_STACK_LINE(139)
			this->x = ((x1 * s1) + (x2 * s2));
			HX_STACK_LINE(140)
			this->y = ((y1 * s1) + (y2 * s2));
			HX_STACK_LINE(141)
			this->z = ((z1 * s1) + (z2 * s2));
		}
		else{
			HX_STACK_LINE(146)
			this->w = (w1 + (t * ((w2 - w1))));
			HX_STACK_LINE(147)
			this->x = (x1 + (t * ((x2 - x1))));
			HX_STACK_LINE(148)
			this->y = (y1 + (t * ((y2 - y1))));
			HX_STACK_LINE(149)
			this->z = (z1 + (t * ((z2 - z1))));
			HX_STACK_LINE(150)
			Float len = (Float(1.0) / Float(::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z)))));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(151)
			hx::MultEq(this->w,len);
			HX_STACK_LINE(152)
			hx::MultEq(this->x,len);
			HX_STACK_LINE(153)
			hx::MultEq(this->y,len);
			HX_STACK_LINE(154)
			hx::MultEq(this->z,len);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,slerp,(void))

Void Quaternion_obj::fromAxisAngle( ::flash::geom::Vector3D axis,Float angle){
{
		HX_STACK_PUSH("Quaternion::fromAxisAngle","away3d/core/math/Quaternion.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(98)
		Float sin_a = ::Math_obj::sin((Float(angle) / Float((int)2)));		HX_STACK_VAR(sin_a,"sin_a");
		HX_STACK_LINE(99)
		Float cos_a = ::Math_obj::cos((Float(angle) / Float((int)2)));		HX_STACK_VAR(cos_a,"cos_a");
		HX_STACK_LINE(100)
		this->x = (axis->x * sin_a);
		HX_STACK_LINE(101)
		this->y = (axis->y * sin_a);
		HX_STACK_LINE(102)
		this->z = (axis->z * sin_a);
		HX_STACK_LINE(103)
		this->w = cos_a;
		HX_STACK_LINE(104)
		this->normalize(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,fromAxisAngle,(void))

::away3d::core::math::Quaternion Quaternion_obj::multiplyVector( ::flash::geom::Vector3D vector,::away3d::core::math::Quaternion target){
	HX_STACK_PUSH("Quaternion::multiplyVector","away3d/core/math/Quaternion.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(78)
	if (((target == null()))){
		HX_STACK_LINE(79)
		target = ::away3d::core::math::Quaternion_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(80)
	Float x2 = vector->x;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(81)
	Float y2 = vector->y;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(82)
	Float z2 = vector->z;		HX_STACK_VAR(z2,"z2");
	HX_STACK_LINE(83)
	target->w = (((-(this->x) * x2) - (this->y * y2)) - (this->z * z2));
	HX_STACK_LINE(84)
	target->x = (((this->w * x2) + (this->y * z2)) - (this->z * y2));
	HX_STACK_LINE(85)
	target->y = (((this->w * y2) - (this->x * z2)) + (this->z * x2));
	HX_STACK_LINE(86)
	target->z = (((this->w * z2) + (this->x * y2)) - (this->y * x2));
	HX_STACK_LINE(87)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiplyVector,return )

Void Quaternion_obj::multiply( ::away3d::core::math::Quaternion qa,::away3d::core::math::Quaternion qb){
{
		HX_STACK_PUSH("Quaternion::multiply","away3d/core/math/Quaternion.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(qa,"qa");
		HX_STACK_ARG(qb,"qb");
		HX_STACK_LINE(63)
		Float w1 = qa->w;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(64)
		Float x1 = qa->x;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(65)
		Float y1 = qa->y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(66)
		Float z1 = qa->z;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(67)
		Float w2 = qb->w;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(68)
		Float x2 = qb->x;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(69)
		Float y2 = qb->y;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(70)
		Float z2 = qb->z;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(71)
		this->w = ((((w1 * w2) - (x1 * x2)) - (y1 * y2)) - (z1 * z2));
		HX_STACK_LINE(72)
		this->x = ((((w1 * x2) + (x1 * w2)) + (y1 * z2)) - (z1 * y2));
		HX_STACK_LINE(73)
		this->y = ((((w1 * y2) - (x1 * z2)) + (y1 * w2)) + (z1 * x2));
		HX_STACK_LINE(74)
		this->z = ((((w1 * z2) + (x1 * y2)) - (y1 * x2)) + (z1 * w2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiply,(void))

Float Quaternion_obj::get_magnitude( ){
	HX_STACK_PUSH("Quaternion::get_magnitude","away3d/core/math/Quaternion.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return ::Math_obj::sqrt(((((this->w * this->w) + (this->x * this->x)) + (this->y * this->y)) + (this->z * this->z)));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_magnitude,return )


Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Quaternion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"slerp") ) { return slerp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toRawData") ) { return toRawData_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"magnitude") ) { return get_magnitude(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { return fromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"toMatrix3D") ) { return toMatrix3D_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { return rotatePoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toEulerAngles") ) { return toEulerAngles_dyn(); }
		if (HX_FIELD_EQ(inName,"fromAxisAngle") ) { return fromAxisAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_magnitude") ) { return get_magnitude_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiplyVector") ) { return multiplyVector_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromEulerAngles") ) { return fromEulerAngles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("magnitude"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copyFrom"),
	HX_CSTRING("rotatePoint"),
	HX_CSTRING("clone"),
	HX_CSTRING("toRawData"),
	HX_CSTRING("fromMatrix"),
	HX_CSTRING("toMatrix3D"),
	HX_CSTRING("toString"),
	HX_CSTRING("normalize"),
	HX_CSTRING("toEulerAngles"),
	HX_CSTRING("fromEulerAngles"),
	HX_CSTRING("lerp"),
	HX_CSTRING("slerp"),
	HX_CSTRING("fromAxisAngle"),
	HX_CSTRING("multiplyVector"),
	HX_CSTRING("multiply"),
	HX_CSTRING("get_magnitude"),
	HX_CSTRING("w"),
	HX_CSTRING("z"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

Class Quaternion_obj::__mClass;

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.math.Quaternion"), hx::TCanCast< Quaternion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Quaternion_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace math
