#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_PlaneClassification
#include <away3d/core/math/PlaneClassification.h>
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

Void Plane3D_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d)
{
HX_STACK_PUSH("Plane3D::new","away3d/core/math/Plane3D.hx",34);
Float a = __o_a.Default(0);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(0);
{
	HX_STACK_LINE(35)
	this->a = a;
	HX_STACK_LINE(36)
	this->b = b;
	HX_STACK_LINE(37)
	this->c = c;
	HX_STACK_LINE(38)
	this->d = d;
	HX_STACK_LINE(39)
	if (((bool((a == (int)0)) && bool((b == (int)0))))){
		HX_STACK_LINE(39)
		this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XY_AXIS;
	}
	else{
		HX_STACK_LINE(40)
		if (((bool((b == (int)0)) && bool((c == (int)0))))){
			HX_STACK_LINE(40)
			this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_YZ_AXIS;
		}
		else{
			HX_STACK_LINE(41)
			if (((bool((a == (int)0)) && bool((c == (int)0))))){
				HX_STACK_LINE(41)
				this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XZ_AXIS;
			}
			else{
				HX_STACK_LINE(42)
				this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_ANY;
			}
		}
	}
}
;
	return null();
}

Plane3D_obj::~Plane3D_obj() { }

Dynamic Plane3D_obj::__CreateEmpty() { return  new Plane3D_obj; }
hx::ObjectPtr< Plane3D_obj > Plane3D_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d)
{  hx::ObjectPtr< Plane3D_obj > result = new Plane3D_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d);
	return result;}

Dynamic Plane3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Plane3D_obj > result = new Plane3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String Plane3D_obj::toString( ){
	HX_STACK_PUSH("Plane3D::toString","away3d/core/math/Plane3D.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	return ((((((((HX_CSTRING("Plane3D [a:") + this->a) + HX_CSTRING(", b:")) + this->b) + HX_CSTRING(", c:")) + this->c) + HX_CSTRING(", d:")) + this->d) + HX_CSTRING("]."));
}


HX_DEFINE_DYNAMIC_FUNC0(Plane3D_obj,toString,return )

int Plane3D_obj::classifyPoint( ::flash::geom::Vector3D p,hx::Null< Float >  __o_epsilon){
Float epsilon = __o_epsilon.Default(0.01);
	HX_STACK_PUSH("Plane3D::classifyPoint","away3d/core/math/Plane3D.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(epsilon,"epsilon");
{
		HX_STACK_LINE(122)
		if (((this->d != this->d))){
			HX_STACK_LINE(122)
			return ::away3d::core::math::PlaneClassification_obj::FRONT;
		}
		HX_STACK_LINE(123)
		Float len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(124)
		if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_YZ_AXIS))){
			HX_STACK_LINE(124)
			len = ((this->a * p->x) - this->d);
		}
		else{
			HX_STACK_LINE(125)
			if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_XZ_AXIS))){
				HX_STACK_LINE(125)
				len = ((this->b * p->y) - this->d);
			}
			else{
				HX_STACK_LINE(126)
				if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_XY_AXIS))){
					HX_STACK_LINE(126)
					len = ((this->c * p->z) - this->d);
				}
				else{
					HX_STACK_LINE(127)
					len = ((((this->a * p->x) + (this->b * p->y)) + (this->c * p->z)) - this->d);
				}
			}
		}
		HX_STACK_LINE(128)
		if (((len < -(epsilon)))){
			HX_STACK_LINE(128)
			return ::away3d::core::math::PlaneClassification_obj::BACK;
		}
		else{
			HX_STACK_LINE(129)
			if (((len > epsilon))){
				HX_STACK_LINE(129)
				return ::away3d::core::math::PlaneClassification_obj::FRONT;
			}
			else{
				HX_STACK_LINE(130)
				return ::away3d::core::math::PlaneClassification_obj::INTERSECT;
			}
		}
		HX_STACK_LINE(128)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Plane3D_obj,classifyPoint,return )

Float Plane3D_obj::distance( ::flash::geom::Vector3D p){
	HX_STACK_PUSH("Plane3D::distance","away3d/core/math/Plane3D.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(107)
	if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_YZ_AXIS))){
		HX_STACK_LINE(108)
		return ((this->a * p->x) - this->d);
	}
	else{
		HX_STACK_LINE(109)
		if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_XZ_AXIS))){
			HX_STACK_LINE(109)
			return ((this->b * p->y) - this->d);
		}
		else{
			HX_STACK_LINE(110)
			if (((this->_alignment == ::away3d::core::math::Plane3D_obj::ALIGN_XY_AXIS))){
				HX_STACK_LINE(110)
				return ((this->c * p->z) - this->d);
			}
			else{
				HX_STACK_LINE(111)
				return ((((this->a * p->x) + (this->b * p->y)) + (this->c * p->z)) - this->d);
			}
		}
	}
	HX_STACK_LINE(107)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Plane3D_obj,distance,return )

::away3d::core::math::Plane3D Plane3D_obj::normalize( ){
	HX_STACK_PUSH("Plane3D::normalize","away3d/core/math/Plane3D.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	Float len = (Float((int)1) / Float(::Math_obj::sqrt((((this->a * this->a) + (this->b * this->b)) + (this->c * this->c)))));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(94)
	hx::MultEq(this->a,len);
	HX_STACK_LINE(95)
	hx::MultEq(this->b,len);
	HX_STACK_LINE(96)
	hx::MultEq(this->c,len);
	HX_STACK_LINE(97)
	hx::MultEq(this->d,len);
	HX_STACK_LINE(98)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Plane3D_obj,normalize,return )

Void Plane3D_obj::fromNormalAndPoint( ::flash::geom::Vector3D normal,::flash::geom::Vector3D point){
{
		HX_STACK_PUSH("Plane3D::fromNormalAndPoint","away3d/core/math/Plane3D.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(normal,"normal");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(77)
		this->a = normal->x;
		HX_STACK_LINE(78)
		this->b = normal->y;
		HX_STACK_LINE(79)
		this->c = normal->z;
		HX_STACK_LINE(80)
		this->d = (((this->a * point->x) + (this->b * point->y)) + (this->c * point->z));
		HX_STACK_LINE(81)
		if (((bool((this->a == (int)0)) && bool((this->b == (int)0))))){
			HX_STACK_LINE(81)
			this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XY_AXIS;
		}
		else{
			HX_STACK_LINE(82)
			if (((bool((this->b == (int)0)) && bool((this->c == (int)0))))){
				HX_STACK_LINE(82)
				this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_YZ_AXIS;
			}
			else{
				HX_STACK_LINE(83)
				if (((bool((this->a == (int)0)) && bool((this->c == (int)0))))){
					HX_STACK_LINE(83)
					this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XZ_AXIS;
				}
				else{
					HX_STACK_LINE(84)
					this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_ANY;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Plane3D_obj,fromNormalAndPoint,(void))

Void Plane3D_obj::fromPoints( ::flash::geom::Vector3D p0,::flash::geom::Vector3D p1,::flash::geom::Vector3D p2){
{
		HX_STACK_PUSH("Plane3D::fromPoints","away3d/core/math/Plane3D.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p0,"p0");
		HX_STACK_ARG(p1,"p1");
		HX_STACK_ARG(p2,"p2");
		HX_STACK_LINE(53)
		Float d1x = (p1->x - p0->x);		HX_STACK_VAR(d1x,"d1x");
		HX_STACK_LINE(54)
		Float d1y = (p1->y - p0->y);		HX_STACK_VAR(d1y,"d1y");
		HX_STACK_LINE(55)
		Float d1z = (p1->z - p0->z);		HX_STACK_VAR(d1z,"d1z");
		HX_STACK_LINE(56)
		Float d2x = (p2->x - p0->x);		HX_STACK_VAR(d2x,"d2x");
		HX_STACK_LINE(57)
		Float d2y = (p2->y - p0->y);		HX_STACK_VAR(d2y,"d2y");
		HX_STACK_LINE(58)
		Float d2z = (p2->z - p0->z);		HX_STACK_VAR(d2z,"d2z");
		HX_STACK_LINE(59)
		this->a = ((d1y * d2z) - (d1z * d2y));
		HX_STACK_LINE(60)
		this->b = ((d1z * d2x) - (d1x * d2z));
		HX_STACK_LINE(61)
		this->c = ((d1x * d2y) - (d1y * d2x));
		HX_STACK_LINE(62)
		this->d = (((this->a * p0->x) + (this->b * p0->y)) + (this->c * p0->z));
		HX_STACK_LINE(64)
		if (((bool((this->a == (int)0)) && bool((this->b == (int)0))))){
			HX_STACK_LINE(64)
			this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XY_AXIS;
		}
		else{
			HX_STACK_LINE(65)
			if (((bool((this->b == (int)0)) && bool((this->c == (int)0))))){
				HX_STACK_LINE(65)
				this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_YZ_AXIS;
			}
			else{
				HX_STACK_LINE(66)
				if (((bool((this->a == (int)0)) && bool((this->c == (int)0))))){
					HX_STACK_LINE(66)
					this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_XZ_AXIS;
				}
				else{
					HX_STACK_LINE(67)
					this->_alignment = ::away3d::core::math::Plane3D_obj::ALIGN_ANY;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Plane3D_obj,fromPoints,(void))

int Plane3D_obj::ALIGN_ANY;

int Plane3D_obj::ALIGN_XY_AXIS;

int Plane3D_obj::ALIGN_YZ_AXIS;

int Plane3D_obj::ALIGN_XZ_AXIS;


Plane3D_obj::Plane3D_obj()
{
}

void Plane3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Plane3D);
	HX_MARK_MEMBER_NAME(_alignment,"_alignment");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void Plane3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alignment,"_alignment");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic Plane3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_ANY") ) { return ALIGN_ANY; }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromPoints") ) { return fromPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"_alignment") ) { return _alignment; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALIGN_XY_AXIS") ) { return ALIGN_XY_AXIS; }
		if (HX_FIELD_EQ(inName,"ALIGN_YZ_AXIS") ) { return ALIGN_YZ_AXIS; }
		if (HX_FIELD_EQ(inName,"ALIGN_XZ_AXIS") ) { return ALIGN_XZ_AXIS; }
		if (HX_FIELD_EQ(inName,"classifyPoint") ) { return classifyPoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fromNormalAndPoint") ) { return fromNormalAndPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Plane3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALIGN_ANY") ) { ALIGN_ANY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alignment") ) { _alignment=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALIGN_XY_AXIS") ) { ALIGN_XY_AXIS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIGN_YZ_AXIS") ) { ALIGN_YZ_AXIS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIGN_XZ_AXIS") ) { ALIGN_XZ_AXIS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plane3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_alignment"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALIGN_ANY"),
	HX_CSTRING("ALIGN_XY_AXIS"),
	HX_CSTRING("ALIGN_YZ_AXIS"),
	HX_CSTRING("ALIGN_XZ_AXIS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("classifyPoint"),
	HX_CSTRING("distance"),
	HX_CSTRING("normalize"),
	HX_CSTRING("fromNormalAndPoint"),
	HX_CSTRING("fromPoints"),
	HX_CSTRING("_alignment"),
	HX_CSTRING("d"),
	HX_CSTRING("c"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Plane3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_ANY,"ALIGN_ANY");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_XY_AXIS,"ALIGN_XY_AXIS");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_YZ_AXIS,"ALIGN_YZ_AXIS");
	HX_MARK_MEMBER_NAME(Plane3D_obj::ALIGN_XZ_AXIS,"ALIGN_XZ_AXIS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Plane3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_ANY,"ALIGN_ANY");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_XY_AXIS,"ALIGN_XY_AXIS");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_YZ_AXIS,"ALIGN_YZ_AXIS");
	HX_VISIT_MEMBER_NAME(Plane3D_obj::ALIGN_XZ_AXIS,"ALIGN_XZ_AXIS");
};

Class Plane3D_obj::__mClass;

void Plane3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.math.Plane3D"), hx::TCanCast< Plane3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Plane3D_obj::__boot()
{
	ALIGN_ANY= (int)0;
	ALIGN_XY_AXIS= (int)1;
	ALIGN_YZ_AXIS= (int)2;
	ALIGN_XZ_AXIS= (int)3;
}

} // end namespace away3d
} // end namespace core
} // end namespace math
