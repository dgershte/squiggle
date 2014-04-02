#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
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
namespace flash{
namespace geom{

Void Matrix3D_obj::__construct(Array< Float > v)
{
HX_STACK_PUSH("Matrix3D::new","flash/geom/Matrix3D.hx",58);
{
	HX_STACK_LINE(58)
	if (((bool((v != null())) && bool((v->length == (int)16))))){
		HX_STACK_LINE(61)
		this->rawData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),v);
	}
	else{
		HX_STACK_LINE(65)
		this->rawData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(1.).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)));
	}
}
;
	return null();
}

Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(Array< Float > v)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(v);
	return result;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::geom::Matrix3D Matrix3D_obj::set_flashMatrix3D( ::flash::geom::Matrix3D mat){
	HX_STACK_PUSH("Matrix3D::set_flashMatrix3D","flash/geom/Matrix3D.hx",799);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mat,"mat");
	HX_STACK_LINE(800)
	Array< Float > raw = mat->rawData;		HX_STACK_VAR(raw,"raw");
	HX_STACK_LINE(801)
	this->rawData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(raw->__get((int)0)).Add(raw->__get((int)4)).Add(raw->__get((int)8)).Add(raw->__get((int)12)).Add(raw->__get((int)1)).Add(raw->__get((int)5)).Add(raw->__get((int)9)).Add(raw->__get((int)13)).Add(raw->__get((int)2)).Add(raw->__get((int)6)).Add(raw->__get((int)10)).Add(raw->__get((int)14)).Add(raw->__get((int)3)).Add(raw->__get((int)7)).Add(raw->__get((int)11)).Add(raw->__get((int)15))));
	HX_STACK_LINE(807)
	return mat;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_flashMatrix3D,return )

::flash::geom::Matrix3D Matrix3D_obj::get_flashMatrix3D( ){
	HX_STACK_PUSH("Matrix3D::get_flashMatrix3D","flash/geom/Matrix3D.hx",790);
	HX_STACK_THIS(this);
	HX_STACK_LINE(790)
	return ::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(this->rawData->__get((int)0)).Add(this->rawData->__get((int)4)).Add(this->rawData->__get((int)8)).Add(this->rawData->__get((int)12)).Add(this->rawData->__get((int)1)).Add(this->rawData->__get((int)5)).Add(this->rawData->__get((int)9)).Add(this->rawData->__get((int)13)).Add(this->rawData->__get((int)2)).Add(this->rawData->__get((int)6)).Add(this->rawData->__get((int)10)).Add(this->rawData->__get((int)14)).Add(this->rawData->__get((int)3)).Add(this->rawData->__get((int)7)).Add(this->rawData->__get((int)11)).Add(this->rawData->__get((int)15)));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_flashMatrix3D,return )

::flash::geom::Vector3D Matrix3D_obj::set_position( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("Matrix3D::set_position","flash/geom/Matrix3D.hx",774);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(778)
	this->rawData[(int)12] = value->x;
	HX_STACK_LINE(779)
	this->rawData[(int)13] = value->y;
	HX_STACK_LINE(780)
	this->rawData[(int)14] = value->z;
	HX_STACK_LINE(782)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::flash::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_PUSH("Matrix3D::get_position","flash/geom/Matrix3D.hx",766);
	HX_STACK_THIS(this);
	HX_STACK_LINE(766)
	return ::flash::geom::Vector3D_obj::__new(this->rawData->__get((int)12),this->rawData->__get((int)13),this->rawData->__get((int)14),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_PUSH("Matrix3D::get_determinant","flash/geom/Matrix3D.hx",748);
	HX_STACK_THIS(this);
	HX_STACK_LINE(748)
	return (((((((((this->rawData->__get((int)0) * this->rawData->__get((int)5)) - (this->rawData->__get((int)4) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)10) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)11))))) - ((((this->rawData->__get((int)0) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)0) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)4) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)3)))))) - ((((this->rawData->__get((int)4) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)3)))))) + ((((this->rawData->__get((int)8) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)9)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)7)) - (this->rawData->__get((int)6) * this->rawData->__get((int)3))))));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_PUSH("Matrix3D::transpose","flash/geom/Matrix3D.hx",690);
		HX_STACK_THIS(this);
		HX_STACK_LINE(694)
		Array< Float > oRawData = ::flash::_Vector::Vector_Impl__obj::copy(this->rawData);		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(696)
		this->rawData[(int)1] = oRawData->__get((int)4);
		HX_STACK_LINE(697)
		this->rawData[(int)2] = oRawData->__get((int)8);
		HX_STACK_LINE(698)
		this->rawData[(int)3] = oRawData->__get((int)12);
		HX_STACK_LINE(699)
		this->rawData[(int)4] = oRawData->__get((int)1);
		HX_STACK_LINE(700)
		this->rawData[(int)6] = oRawData->__get((int)9);
		HX_STACK_LINE(701)
		this->rawData[(int)7] = oRawData->__get((int)13);
		HX_STACK_LINE(702)
		this->rawData[(int)8] = oRawData->__get((int)2);
		HX_STACK_LINE(703)
		this->rawData[(int)9] = oRawData->__get((int)6);
		HX_STACK_LINE(704)
		this->rawData[(int)11] = oRawData->__get((int)14);
		HX_STACK_LINE(705)
		this->rawData[(int)12] = oRawData->__get((int)3);
		HX_STACK_LINE(706)
		this->rawData[(int)13] = oRawData->__get((int)7);
		HX_STACK_LINE(707)
		this->rawData[(int)14] = oRawData->__get((int)11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Void Matrix3D_obj::transformVectors( Array< Float > vin,Array< Float > vout){
{
		HX_STACK_PUSH("Matrix3D::transformVectors","flash/geom/Matrix3D.hx",667);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vin,"vin");
		HX_STACK_ARG(vout,"vout");
		HX_STACK_LINE(671)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(672)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		Float z = (int)0;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(674)
		while((((i + (int)3) <= vin->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(676)
			x = vin->__get(i);
			HX_STACK_LINE(677)
			y = vin->__get((i + (int)1));
			HX_STACK_LINE(678)
			z = vin->__get((i + (int)2));
			HX_STACK_LINE(679)
			vout[i] = ((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12));
			HX_STACK_LINE(680)
			vout[(i + (int)1)] = ((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13));
			HX_STACK_LINE(681)
			vout[(i + (int)2)] = ((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14));
			HX_STACK_LINE(682)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

::flash::geom::Vector3D Matrix3D_obj::transformVector( ::flash::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3D::transformVector","flash/geom/Matrix3D.hx",648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(652)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(653)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(654)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(655)
	return ::flash::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12)),((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13)),((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14)),((((x * this->rawData->__get((int)3)) + (y * this->rawData->__get((int)7))) + (z * this->rawData->__get((int)11))) + this->rawData->__get((int)15)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

bool Matrix3D_obj::recompose( Array< ::Dynamic > components){
	HX_STACK_PUSH("Matrix3D::recompose","flash/geom/Matrix3D.hx",622);
	HX_STACK_THIS(this);
	HX_STACK_ARG(components,"components");
	HX_STACK_LINE(626)
	if (((components->__Field(HX_CSTRING("length"),true) < (int)3))){
		HX_STACK_LINE(626)
		return false;
	}
	HX_STACK_LINE(630)
	this->identity();
	HX_STACK_LINE(631)
	this->appendScale(components->__get((int)2).StaticCast< ::flash::geom::Vector3D >()->x,components->__get((int)2).StaticCast< ::flash::geom::Vector3D >()->y,components->__get((int)2).StaticCast< ::flash::geom::Vector3D >()->z);
	HX_STACK_LINE(633)
	Float angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(634)
	angle = -(components->__get((int)1).StaticCast< ::flash::geom::Vector3D >()->x);
	HX_STACK_LINE(635)
	this->append(::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(::Math_obj::cos(angle)).Add(-(::Math_obj::sin(angle))).Add((int)0).Add((int)0).Add(::Math_obj::sin(angle)).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(636)
	angle = -(components->__get((int)1).StaticCast< ::flash::geom::Vector3D >()->y);
	HX_STACK_LINE(637)
	this->append(::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(::Math_obj::cos(angle)).Add((int)0).Add(::Math_obj::sin(angle)).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add(-(::Math_obj::sin(angle))).Add((int)0).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(638)
	angle = -(components->__get((int)1).StaticCast< ::flash::geom::Vector3D >()->z);
	HX_STACK_LINE(639)
	this->append(::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(::Math_obj::cos(angle)).Add(-(::Math_obj::sin(angle))).Add((int)0).Add((int)0).Add(::Math_obj::sin(angle)).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(641)
	this->set_position(components->__get((int)0).StaticCast< ::flash::geom::Vector3D >());
	HX_STACK_LINE(642)
	this->rawData[(int)15] = (int)1;
	HX_STACK_LINE(644)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,recompose,return )

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_PUSH("Matrix3D::prependTranslation","flash/geom/Matrix3D.hx",608);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(612)
		::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(613)
		m->set_position(::flash::geom::Vector3D_obj::__new(x,y,z,null()));
		HX_STACK_LINE(614)
		this->prepend(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_PUSH("Matrix3D::prependScale","flash/geom/Matrix3D.hx",597);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xScale,"xScale");
		HX_STACK_ARG(yScale,"yScale");
		HX_STACK_ARG(zScale,"zScale");
		HX_STACK_LINE(597)
		this->prepend(::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(yScale).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(zScale).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::flash::geom::Vector3D axis){
{
		HX_STACK_PUSH("Matrix3D::prependRotation","flash/geom/Matrix3D.hx",577);
		HX_STACK_THIS(this);
		HX_STACK_ARG(degrees,"degrees");
		HX_STACK_ARG(axis,"axis");
		HX_STACK_LINE(581)
		::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(590)
		this->prepend(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prepend( ::flash::geom::Matrix3D rhs){
{
		HX_STACK_PUSH("Matrix3D::prepend","flash/geom/Matrix3D.hx",539);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rhs,"rhs");
		HX_STACK_LINE(543)
		Float m111 = rhs->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		Float m121 = rhs->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		Float m131 = rhs->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		Float m141 = rhs->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		Float m112 = rhs->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		Float m122 = rhs->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		Float m132 = rhs->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		Float m142 = rhs->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		Float m113 = rhs->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		Float m123 = rhs->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		Float m133 = rhs->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		Float m143 = rhs->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		Float m114 = rhs->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		Float m124 = rhs->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		Float m134 = rhs->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		Float m144 = rhs->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(552)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(553)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(554)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(555)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(557)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(558)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(559)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(560)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(562)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(563)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(564)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(565)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(567)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(568)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(569)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(570)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_PUSH("Matrix3D::invert","flash/geom/Matrix3D.hx",494);
	HX_STACK_THIS(this);
	HX_STACK_LINE(498)
	Float d = this->get_determinant();		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(499)
	bool invertable = (::Math_obj::abs(d) > 0.00000000001);		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(501)
	if ((invertable)){
		HX_STACK_LINE(503)
		d = (Float((int)1) / Float(d));
		HX_STACK_LINE(504)
		Float m11 = this->rawData->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(504)
		Float m21 = this->rawData->__get((int)4);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(504)
		Float m31 = this->rawData->__get((int)8);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(504)
		Float m41 = this->rawData->__get((int)12);		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(505)
		Float m12 = this->rawData->__get((int)1);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(505)
		Float m22 = this->rawData->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(505)
		Float m32 = this->rawData->__get((int)9);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(505)
		Float m42 = this->rawData->__get((int)13);		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(506)
		Float m13 = this->rawData->__get((int)2);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(506)
		Float m23 = this->rawData->__get((int)6);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(506)
		Float m33 = this->rawData->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(506)
		Float m43 = this->rawData->__get((int)14);		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(507)
		Float m14 = this->rawData->__get((int)3);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(507)
		Float m24 = this->rawData->__get((int)7);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(507)
		Float m34 = this->rawData->__get((int)11);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(507)
		Float m44 = this->rawData->__get((int)15);		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(509)
		this->rawData[(int)0] = (d * ((((m22 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m23 * m44) - (m43 * m24))))) + (m42 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(510)
		this->rawData[(int)1] = (-(d) * ((((m12 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(511)
		this->rawData[(int)2] = (d * ((((m12 * (((m23 * m44) - (m43 * m24)))) - (m22 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(512)
		this->rawData[(int)3] = (-(d) * ((((m12 * (((m23 * m34) - (m33 * m24)))) - (m22 * (((m13 * m34) - (m33 * m14))))) + (m32 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(513)
		this->rawData[(int)4] = (-(d) * ((((m21 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m23 * m44) - (m43 * m24))))) + (m41 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(514)
		this->rawData[(int)5] = (d * ((((m11 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(515)
		this->rawData[(int)6] = (-(d) * ((((m11 * (((m23 * m44) - (m43 * m24)))) - (m21 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(516)
		this->rawData[(int)7] = (d * ((((m11 * (((m23 * m34) - (m33 * m24)))) - (m21 * (((m13 * m34) - (m33 * m14))))) + (m31 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(517)
		this->rawData[(int)8] = (d * ((((m21 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m22 * m44) - (m42 * m24))))) + (m41 * (((m22 * m34) - (m32 * m24)))))));
		HX_STACK_LINE(518)
		this->rawData[(int)9] = (-(d) * ((((m11 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m34) - (m32 * m14)))))));
		HX_STACK_LINE(519)
		this->rawData[(int)10] = (d * ((((m11 * (((m22 * m44) - (m42 * m24)))) - (m21 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(520)
		this->rawData[(int)11] = (-(d) * ((((m11 * (((m22 * m34) - (m32 * m24)))) - (m21 * (((m12 * m34) - (m32 * m14))))) + (m31 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(521)
		this->rawData[(int)12] = (-(d) * ((((m21 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m22 * m43) - (m42 * m23))))) + (m41 * (((m22 * m33) - (m32 * m23)))))));
		HX_STACK_LINE(522)
		this->rawData[(int)13] = (d * ((((m11 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m33) - (m32 * m13)))))));
		HX_STACK_LINE(523)
		this->rawData[(int)14] = (-(d) * ((((m11 * (((m22 * m43) - (m42 * m23)))) - (m21 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m23) - (m22 * m13)))))));
		HX_STACK_LINE(524)
		this->rawData[(int)15] = (d * ((((m11 * (((m22 * m33) - (m32 * m23)))) - (m21 * (((m12 * m33) - (m32 * m13))))) + (m31 * (((m12 * m23) - (m22 * m13)))))));
	}
	HX_STACK_LINE(526)
	return invertable;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::interpolateTo( ::flash::geom::Matrix3D toMat,int percent){
{
		HX_STACK_PUSH("Matrix3D::interpolateTo","flash/geom/Matrix3D.hx",483);
		HX_STACK_THIS(this);
		HX_STACK_ARG(toMat,"toMat");
		HX_STACK_ARG(percent,"percent");
		HX_STACK_LINE(484)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(484)
		while(((_g < (int)16))){
			HX_STACK_LINE(484)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(486)
			this->rawData[i] = (this->rawData->__get(i) + (((toMat->rawData->__get(i) - this->rawData->__get(i))) * percent));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

Void Matrix3D_obj::identity( ){
{
		HX_STACK_PUSH("Matrix3D::identity","flash/geom/Matrix3D.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_LINE(462)
		this->rawData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

::flash::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::flash::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3D::deltaTransformVector","flash/geom/Matrix3D.hx",449);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(450)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	Float y = v->y;		HX_STACK_VAR(y,"y");
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(451)
	return ::flash::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)1))) + (z * this->rawData->__get((int)2))) + this->rawData->__get((int)3)),((((x * this->rawData->__get((int)4)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)6))) + this->rawData->__get((int)7)),((((x * this->rawData->__get((int)8)) + (y * this->rawData->__get((int)9))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)11)),(int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Array< ::Dynamic > Matrix3D_obj::decompose( ){
	HX_STACK_PUSH("Matrix3D::decompose","flash/geom/Matrix3D.hx",387);
	HX_STACK_THIS(this);
	HX_STACK_LINE(391)
	Array< ::Dynamic > vec = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(392)
	::flash::geom::Matrix3D m = this->clone();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(393)
	Array< Float > mr = ::flash::_Vector::Vector_Impl__obj::copy(m->rawData);		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(395)
	::flash::geom::Vector3D pos = ::flash::geom::Vector3D_obj::__new(mr->__get((int)12),mr->__get((int)13),mr->__get((int)14),null());		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(396)
	mr[(int)12] = (int)0;
	HX_STACK_LINE(397)
	mr[(int)13] = (int)0;
	HX_STACK_LINE(398)
	mr[(int)14] = (int)0;
	HX_STACK_LINE(400)
	::flash::geom::Vector3D scale = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(402)
	scale->x = ::Math_obj::sqrt((((mr->__get((int)0) * mr->__get((int)0)) + (mr->__get((int)1) * mr->__get((int)1))) + (mr->__get((int)2) * mr->__get((int)2))));
	HX_STACK_LINE(403)
	scale->y = ::Math_obj::sqrt((((mr->__get((int)4) * mr->__get((int)4)) + (mr->__get((int)5) * mr->__get((int)5))) + (mr->__get((int)6) * mr->__get((int)6))));
	HX_STACK_LINE(404)
	scale->z = ::Math_obj::sqrt((((mr->__get((int)8) * mr->__get((int)8)) + (mr->__get((int)9) * mr->__get((int)9))) + (mr->__get((int)10) * mr->__get((int)10))));
	HX_STACK_LINE(406)
	if ((((((mr->__get((int)0) * (((mr->__get((int)5) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)9))))) - (mr->__get((int)1) * (((mr->__get((int)4) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)8)))))) + (mr->__get((int)2) * (((mr->__get((int)4) * mr->__get((int)9)) - (mr->__get((int)5) * mr->__get((int)8)))))) < (int)0))){
		HX_STACK_LINE(407)
		scale->z = -(scale->z);
	}
	HX_STACK_LINE(411)
	hx::DivEq(mr[(int)0],scale->x);
	HX_STACK_LINE(412)
	hx::DivEq(mr[(int)1],scale->x);
	HX_STACK_LINE(413)
	hx::DivEq(mr[(int)2],scale->x);
	HX_STACK_LINE(414)
	hx::DivEq(mr[(int)4],scale->y);
	HX_STACK_LINE(415)
	hx::DivEq(mr[(int)5],scale->y);
	HX_STACK_LINE(416)
	hx::DivEq(mr[(int)6],scale->y);
	HX_STACK_LINE(417)
	hx::DivEq(mr[(int)8],scale->z);
	HX_STACK_LINE(418)
	hx::DivEq(mr[(int)9],scale->z);
	HX_STACK_LINE(419)
	hx::DivEq(mr[(int)10],scale->z);
	HX_STACK_LINE(421)
	::flash::geom::Vector3D rot = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(422)
	rot->y = ::Math_obj::asin(-(mr->__get((int)2)));
	HX_STACK_LINE(426)
	if (((bool((mr->__get((int)2) != (int)1)) && bool((mr->__get((int)2) != (int)-1))))){
		HX_STACK_LINE(428)
		rot->x = ::Math_obj::atan2(mr->__get((int)6),mr->__get((int)10));
		HX_STACK_LINE(429)
		rot->z = ::Math_obj::atan2(mr->__get((int)1),mr->__get((int)0));
	}
	else{
		HX_STACK_LINE(433)
		rot->z = (int)0;
		HX_STACK_LINE(434)
		rot->x = ::Math_obj::atan2(mr->__get((int)4),mr->__get((int)5));
	}
	HX_STACK_LINE(437)
	vec->__Field(HX_CSTRING("push"),true)(pos);
	HX_STACK_LINE(438)
	vec->__Field(HX_CSTRING("push"),true)(rot);
	HX_STACK_LINE(439)
	vec->__Field(HX_CSTRING("push"),true)(scale);
	HX_STACK_LINE(441)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,decompose,return )

Void Matrix3D_obj::copyToMatrix3D( ::flash::geom::Matrix3D dest){
{
		HX_STACK_PUSH("Matrix3D::copyToMatrix3D","flash/geom/Matrix3D.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dest,"dest");
		HX_STACK_LINE(375)
		dest->rawData = ::flash::_Vector::Vector_Impl__obj::copy(this->rawData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

Void Matrix3D_obj::copyRowTo( int row,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix3D::copyRowTo","flash/geom/Matrix3D.hx",340);
		HX_STACK_THIS(this);
		HX_STACK_ARG(row,"row");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(340)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(347)
				vector3D->x = this->rawData->__get((int)0);
				HX_STACK_LINE(348)
				vector3D->y = this->rawData->__get((int)4);
				HX_STACK_LINE(349)
				vector3D->z = this->rawData->__get((int)8);
				HX_STACK_LINE(350)
				vector3D->w = this->rawData->__get((int)12);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(352)
				vector3D->x = this->rawData->__get((int)1);
				HX_STACK_LINE(353)
				vector3D->y = this->rawData->__get((int)5);
				HX_STACK_LINE(354)
				vector3D->z = this->rawData->__get((int)9);
				HX_STACK_LINE(355)
				vector3D->w = this->rawData->__get((int)13);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(357)
				vector3D->x = this->rawData->__get((int)2);
				HX_STACK_LINE(358)
				vector3D->y = this->rawData->__get((int)6);
				HX_STACK_LINE(359)
				vector3D->z = this->rawData->__get((int)10);
				HX_STACK_LINE(360)
				vector3D->w = this->rawData->__get((int)14);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(362)
				vector3D->x = this->rawData->__get((int)3);
				HX_STACK_LINE(363)
				vector3D->y = this->rawData->__get((int)7);
				HX_STACK_LINE(364)
				vector3D->z = this->rawData->__get((int)11);
				HX_STACK_LINE(365)
				vector3D->w = this->rawData->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(366)
				hx::Throw (::flash::errors::Error_obj::__new(((HX_CSTRING("Error, Row ") + row) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix3D::copyRowFrom","flash/geom/Matrix3D.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(row,"row");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(305)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(312)
				this->rawData[(int)0] = vector3D->x;
				HX_STACK_LINE(313)
				this->rawData[(int)4] = vector3D->y;
				HX_STACK_LINE(314)
				this->rawData[(int)8] = vector3D->z;
				HX_STACK_LINE(315)
				this->rawData[(int)12] = vector3D->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(317)
				this->rawData[(int)1] = vector3D->x;
				HX_STACK_LINE(318)
				this->rawData[(int)5] = vector3D->y;
				HX_STACK_LINE(319)
				this->rawData[(int)9] = vector3D->z;
				HX_STACK_LINE(320)
				this->rawData[(int)13] = vector3D->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(322)
				this->rawData[(int)2] = vector3D->x;
				HX_STACK_LINE(323)
				this->rawData[(int)6] = vector3D->y;
				HX_STACK_LINE(324)
				this->rawData[(int)10] = vector3D->z;
				HX_STACK_LINE(325)
				this->rawData[(int)14] = vector3D->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(327)
				this->rawData[(int)3] = vector3D->x;
				HX_STACK_LINE(328)
				this->rawData[(int)7] = vector3D->y;
				HX_STACK_LINE(329)
				this->rawData[(int)11] = vector3D->z;
				HX_STACK_LINE(330)
				this->rawData[(int)15] = vector3D->w;
			}
			;break;
			default: {
				HX_STACK_LINE(331)
				hx::Throw (::flash::errors::Error_obj::__new(((HX_CSTRING("Error, Row ") + row) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRawDataTo( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_PUSH("Matrix3D::copyRawDataTo","flash/geom/Matrix3D.hx",277);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(transpose,"transpose");
{
		HX_STACK_LINE(282)
		if ((transpose)){
			HX_STACK_LINE(283)
			this->transpose();
		}
		HX_STACK_LINE(287)
		int l = this->rawData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			while(((_g < l))){
				HX_STACK_LINE(288)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(291)
				vector[(c + index)] = this->rawData->__get(c);
			}
		}
		HX_STACK_LINE(294)
		if ((transpose)){
			HX_STACK_LINE(295)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRawDataFrom( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_PUSH("Matrix3D::copyRawDataFrom","flash/geom/Matrix3D.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(transpose,"transpose");
{
		HX_STACK_LINE(259)
		if ((transpose)){
			HX_STACK_LINE(260)
			this->transpose();
		}
		HX_STACK_LINE(264)
		int l = (vector->__Field(HX_CSTRING("length"),true) - index);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while(((_g < l))){
				HX_STACK_LINE(265)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(267)
				this->rawData[c] = vector->__get((c + index));
			}
		}
		HX_STACK_LINE(270)
		if ((transpose)){
			HX_STACK_LINE(271)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyFrom( ::flash::geom::Matrix3D sourceMatrix3D){
{
		HX_STACK_PUSH("Matrix3D::copyFrom","flash/geom/Matrix3D.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceMatrix3D,"sourceMatrix3D");
		HX_STACK_LINE(246)
		int l = sourceMatrix3D->rawData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(248)
			while(((_g < l))){
				HX_STACK_LINE(248)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(250)
				this->rawData[c] = sourceMatrix3D->rawData->__get(c);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix3D::copyColumnTo","flash/geom/Matrix3D.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(column,"column");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(207)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(214)
				vector3D->x = this->rawData->__get((int)0);
				HX_STACK_LINE(215)
				vector3D->y = this->rawData->__get((int)1);
				HX_STACK_LINE(216)
				vector3D->z = this->rawData->__get((int)2);
				HX_STACK_LINE(217)
				vector3D->w = this->rawData->__get((int)3);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(219)
				vector3D->x = this->rawData->__get((int)4);
				HX_STACK_LINE(220)
				vector3D->y = this->rawData->__get((int)5);
				HX_STACK_LINE(221)
				vector3D->z = this->rawData->__get((int)6);
				HX_STACK_LINE(222)
				vector3D->w = this->rawData->__get((int)7);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(224)
				vector3D->x = this->rawData->__get((int)8);
				HX_STACK_LINE(225)
				vector3D->y = this->rawData->__get((int)9);
				HX_STACK_LINE(226)
				vector3D->z = this->rawData->__get((int)10);
				HX_STACK_LINE(227)
				vector3D->w = this->rawData->__get((int)11);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(229)
				vector3D->x = this->rawData->__get((int)12);
				HX_STACK_LINE(230)
				vector3D->y = this->rawData->__get((int)13);
				HX_STACK_LINE(231)
				vector3D->z = this->rawData->__get((int)14);
				HX_STACK_LINE(232)
				vector3D->w = this->rawData->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(233)
				hx::Throw (::flash::errors::Error_obj::__new(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyColumnFrom( int column,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix3D::copyColumnFrom","flash/geom/Matrix3D.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(column,"column");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(171)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(178)
				this->rawData[(int)0] = vector3D->x;
				HX_STACK_LINE(179)
				this->rawData[(int)1] = vector3D->y;
				HX_STACK_LINE(180)
				this->rawData[(int)2] = vector3D->z;
				HX_STACK_LINE(181)
				this->rawData[(int)3] = vector3D->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(183)
				this->rawData[(int)4] = vector3D->x;
				HX_STACK_LINE(184)
				this->rawData[(int)5] = vector3D->y;
				HX_STACK_LINE(185)
				this->rawData[(int)6] = vector3D->z;
				HX_STACK_LINE(186)
				this->rawData[(int)7] = vector3D->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(188)
				this->rawData[(int)8] = vector3D->x;
				HX_STACK_LINE(189)
				this->rawData[(int)9] = vector3D->y;
				HX_STACK_LINE(190)
				this->rawData[(int)10] = vector3D->z;
				HX_STACK_LINE(191)
				this->rawData[(int)11] = vector3D->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(193)
				this->rawData[(int)12] = vector3D->x;
				HX_STACK_LINE(194)
				this->rawData[(int)13] = vector3D->y;
				HX_STACK_LINE(195)
				this->rawData[(int)14] = vector3D->z;
				HX_STACK_LINE(196)
				this->rawData[(int)15] = vector3D->w;
			}
			;break;
			default: {
				HX_STACK_LINE(197)
				hx::Throw (::flash::errors::Error_obj::__new(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

::flash::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_PUSH("Matrix3D::clone","flash/geom/Matrix3D.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	::flash::geom::Matrix3D mtr = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(mtr,"mtr");
	HX_STACK_LINE(163)
	this->copyToMatrix3D(mtr);
	HX_STACK_LINE(164)
	return mtr;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_PUSH("Matrix3D::appendTranslation","flash/geom/Matrix3D.hx",146);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(150)
		hx::AddEq(this->rawData[(int)12],x);
		HX_STACK_LINE(151)
		hx::AddEq(this->rawData[(int)13],y);
		HX_STACK_LINE(152)
		hx::AddEq(this->rawData[(int)14],z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_PUSH("Matrix3D::appendScale","flash/geom/Matrix3D.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xScale,"xScale");
		HX_STACK_ARG(yScale,"yScale");
		HX_STACK_ARG(zScale,"zScale");
		HX_STACK_LINE(135)
		this->append(::flash::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::flash::geom::Vector3D axis){
{
		HX_STACK_PUSH("Matrix3D::appendRotation","flash/geom/Matrix3D.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(degrees,"degrees");
		HX_STACK_ARG(axis,"axis");
		HX_STACK_LINE(119)
		::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(128)
		this->append(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::append( ::flash::geom::Matrix3D lhs){
{
		HX_STACK_PUSH("Matrix3D::append","flash/geom/Matrix3D.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lhs,"lhs");
		HX_STACK_LINE(81)
		Float m111 = this->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		Float m121 = this->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		Float m131 = this->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		Float m141 = this->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		Float m112 = this->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		Float m122 = this->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		Float m132 = this->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		Float m142 = this->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		Float m113 = this->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		Float m123 = this->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		Float m133 = this->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		Float m143 = this->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		Float m114 = this->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		Float m124 = this->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		Float m134 = this->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		Float m144 = this->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		Float m211 = lhs->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		Float m221 = lhs->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		Float m231 = lhs->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		Float m241 = lhs->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		Float m212 = lhs->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		Float m222 = lhs->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		Float m232 = lhs->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		Float m242 = lhs->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		Float m213 = lhs->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		Float m223 = lhs->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		Float m233 = lhs->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		Float m243 = lhs->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		Float m214 = lhs->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		Float m224 = lhs->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		Float m234 = lhs->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		Float m244 = lhs->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(90)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(91)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(92)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(93)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(95)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(96)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(97)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(98)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(100)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(101)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(102)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(103)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(105)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(106)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(107)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(108)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

::flash::geom::Matrix3D Matrix3D_obj::interpolate( ::flash::geom::Matrix3D thisMat,::flash::geom::Matrix3D toMat,Float percent){
	HX_STACK_PUSH("Matrix3D::interpolate","flash/geom/Matrix3D.hx",470);
	HX_STACK_ARG(thisMat,"thisMat");
	HX_STACK_ARG(toMat,"toMat");
	HX_STACK_ARG(percent,"percent");
	HX_STACK_LINE(471)
	::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(472)
		while(((_g < (int)16))){
			HX_STACK_LINE(472)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(474)
			m->rawData[i] = (thisMat->rawData->__get(i) + (((toMat->rawData->__get(i) - thisMat->rawData->__get(i))) * percent));
		}
	}
	HX_STACK_LINE(476)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::flash::geom::Matrix3D Matrix3D_obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_PUSH("Matrix3D::getAxisRotation","flash/geom/Matrix3D.hx",711);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(z,"z");
	HX_STACK_ARG(degrees,"degrees");
	HX_STACK_LINE(715)
	::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(717)
	::flash::geom::Vector3D a1 = ::flash::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(718)
	Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(719)
	Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(720)
	Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(721)
	Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(723)
	m->rawData[(int)0] = (c + ((a1->x * a1->x) * t));
	HX_STACK_LINE(724)
	m->rawData[(int)5] = (c + ((a1->y * a1->y) * t));
	HX_STACK_LINE(725)
	m->rawData[(int)10] = (c + ((a1->z * a1->z) * t));
	HX_STACK_LINE(727)
	Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(728)
	Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(729)
	m->rawData[(int)4] = (tmp1 + tmp2);
	HX_STACK_LINE(730)
	m->rawData[(int)1] = (tmp1 - tmp2);
	HX_STACK_LINE(731)
	tmp1 = ((a1->x * a1->z) * t);
	HX_STACK_LINE(732)
	tmp2 = (a1->y * s);
	HX_STACK_LINE(733)
	m->rawData[(int)8] = (tmp1 - tmp2);
	HX_STACK_LINE(734)
	m->rawData[(int)2] = (tmp1 + tmp2);
	HX_STACK_LINE(735)
	tmp1 = ((a1->y * a1->z) * t);
	HX_STACK_LINE(736)
	tmp2 = (a1->x * s);
	HX_STACK_LINE(737)
	m->rawData[(int)9] = (tmp1 + tmp2);
	HX_STACK_LINE(738)
	m->rawData[(int)6] = (tmp1 - tmp2);
	HX_STACK_LINE(740)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(determinant,"determinant");
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(determinant,"determinant");
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return inCallProp ? get_determinant() : determinant; }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flashMatrix3D") ) { return get_flashMatrix3D(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { return getAxisRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_flashMatrix3D") ) { return set_flashMatrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flashMatrix3D") ) { return get_flashMatrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { determinant=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flashMatrix3D") ) { return set_flashMatrix3D(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flashMatrix3D"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("determinant"));
	outFields->push(HX_CSTRING("rawData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("interpolate"),
	HX_CSTRING("getAxisRotation"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_flashMatrix3D"),
	HX_CSTRING("get_flashMatrix3D"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_determinant"),
	HX_CSTRING("determinant"),
	HX_CSTRING("transpose"),
	HX_CSTRING("transformVectors"),
	HX_CSTRING("transformVector"),
	HX_CSTRING("recompose"),
	HX_CSTRING("prependTranslation"),
	HX_CSTRING("prependScale"),
	HX_CSTRING("prependRotation"),
	HX_CSTRING("prepend"),
	HX_CSTRING("invert"),
	HX_CSTRING("interpolateTo"),
	HX_CSTRING("identity"),
	HX_CSTRING("deltaTransformVector"),
	HX_CSTRING("decompose"),
	HX_CSTRING("copyToMatrix3D"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyRawDataTo"),
	HX_CSTRING("copyRawDataFrom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("clone"),
	HX_CSTRING("appendTranslation"),
	HX_CSTRING("appendScale"),
	HX_CSTRING("appendRotation"),
	HX_CSTRING("append"),
	HX_CSTRING("rawData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

Class Matrix3D_obj::__mClass;

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.geom.Matrix3D"), hx::TCanCast< Matrix3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix3D_obj::__boot()
{
}

} // end namespace flash
} // end namespace geom
