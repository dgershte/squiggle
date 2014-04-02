#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframeSphere
#include <away3d/primitives/WireframeSphere.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace primitives{

Void WireframeSphere_obj::__construct(hx::Null< Float >  __o_radius,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{
HX_STACK_PUSH("WireframeSphere::new","away3d/primitives/WireframeSphere.hx",23);
Float radius = __o_radius.Default(50);
int segmentsW = __o_segmentsW.Default(16);
int segmentsH = __o_segmentsH.Default(12);
int color = __o_color.Default(16777215);
Float thickness = __o_thickness.Default(1);
{
	HX_STACK_LINE(24)
	super::__construct(color,thickness);
	HX_STACK_LINE(25)
	this->_radius = radius;
	HX_STACK_LINE(26)
	this->_segmentsW = segmentsW;
	HX_STACK_LINE(27)
	this->_segmentsH = segmentsH;
}
;
	return null();
}

WireframeSphere_obj::~WireframeSphere_obj() { }

Dynamic WireframeSphere_obj::__CreateEmpty() { return  new WireframeSphere_obj; }
hx::ObjectPtr< WireframeSphere_obj > WireframeSphere_obj::__new(hx::Null< Float >  __o_radius,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness)
{  hx::ObjectPtr< WireframeSphere_obj > result = new WireframeSphere_obj();
	result->__construct(__o_radius,__o_segmentsW,__o_segmentsH,__o_color,__o_thickness);
	return result;}

Dynamic WireframeSphere_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WireframeSphere_obj > result = new WireframeSphere_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void WireframeSphere_obj::buildGeometry( ){
{
		HX_STACK_PUSH("WireframeSphere::buildGeometry","away3d/primitives/WireframeSphere.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		Array< Float > vertices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(36)
		::flash::geom::Vector3D v0 = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(37)
		::flash::geom::Vector3D v1 = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(38)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(39)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(40)
		int numVerts = (int)0;		HX_STACK_VAR(numVerts,"numVerts");
		HX_STACK_LINE(41)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(42)
		j = (int)0;
		HX_STACK_LINE(43)
		while(((j <= this->_segmentsH))){
			HX_STACK_LINE(44)
			Float horangle = (Float((::Math_obj::PI * j)) / Float(this->_segmentsH));		HX_STACK_VAR(horangle,"horangle");
			HX_STACK_LINE(45)
			Float z = (-(this->_radius) * ::Math_obj::cos(horangle));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(46)
			Float ringradius = (this->_radius * ::Math_obj::sin(horangle));		HX_STACK_VAR(ringradius,"ringradius");
			HX_STACK_LINE(47)
			i = (int)0;
			HX_STACK_LINE(48)
			while(((i <= this->_segmentsW))){
				HX_STACK_LINE(49)
				Float verangle = (Float((((int)2 * ::Math_obj::PI) * i)) / Float(this->_segmentsW));		HX_STACK_VAR(verangle,"verangle");
				HX_STACK_LINE(50)
				Float x = (ringradius * ::Math_obj::cos(verangle));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(51)
				Float y = (ringradius * ::Math_obj::sin(verangle));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(52)
				vertices[(numVerts)++] = x;
				HX_STACK_LINE(53)
				vertices[(numVerts)++] = -(z);
				HX_STACK_LINE(54)
				vertices[(numVerts)++] = y;
				HX_STACK_LINE(55)
				++(i);
			}
			HX_STACK_LINE(57)
			++(j);
		}
		HX_STACK_LINE(59)
		j = (int)1;
		HX_STACK_LINE(60)
		while(((j <= this->_segmentsH))){
			HX_STACK_LINE(61)
			i = (int)1;
			HX_STACK_LINE(62)
			while(((i <= this->_segmentsW))){
				HX_STACK_LINE(63)
				int a = ((((((this->_segmentsW + (int)1)) * j) + i)) * (int)3);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(64)
				int b = (((((((this->_segmentsW + (int)1)) * j) + i) - (int)1)) * (int)3);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(65)
				int c = (((((((this->_segmentsW + (int)1)) * ((j - (int)1))) + i) - (int)1)) * (int)3);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(66)
				int d = ((((((this->_segmentsW + (int)1)) * ((j - (int)1))) + i)) * (int)3);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(67)
				if (((j == this->_segmentsH))){
					HX_STACK_LINE(68)
					v0->x = vertices->__get(c);
					HX_STACK_LINE(69)
					v0->y = vertices->__get((c + (int)1));
					HX_STACK_LINE(70)
					v0->z = vertices->__get((c + (int)2));
					HX_STACK_LINE(71)
					v1->x = vertices->__get(d);
					HX_STACK_LINE(72)
					v1->y = vertices->__get((d + (int)1));
					HX_STACK_LINE(73)
					v1->z = vertices->__get((d + (int)2));
					HX_STACK_LINE(74)
					this->updateOrAddSegment((index)++,v0,v1);
					HX_STACK_LINE(75)
					v0->x = vertices->__get(a);
					HX_STACK_LINE(76)
					v0->y = vertices->__get((a + (int)1));
					HX_STACK_LINE(77)
					v0->z = vertices->__get((a + (int)2));
					HX_STACK_LINE(78)
					this->updateOrAddSegment((index)++,v0,v1);
				}
				else{
					HX_STACK_LINE(81)
					if (((j == (int)1))){
						HX_STACK_LINE(82)
						v1->x = vertices->__get(b);
						HX_STACK_LINE(83)
						v1->y = vertices->__get((b + (int)1));
						HX_STACK_LINE(84)
						v1->z = vertices->__get((b + (int)2));
						HX_STACK_LINE(85)
						v0->x = vertices->__get(c);
						HX_STACK_LINE(86)
						v0->y = vertices->__get((c + (int)1));
						HX_STACK_LINE(87)
						v0->z = vertices->__get((c + (int)2));
						HX_STACK_LINE(88)
						this->updateOrAddSegment((index)++,v0,v1);
					}
					else{
						HX_STACK_LINE(92)
						v1->x = vertices->__get(b);
						HX_STACK_LINE(93)
						v1->y = vertices->__get((b + (int)1));
						HX_STACK_LINE(94)
						v1->z = vertices->__get((b + (int)2));
						HX_STACK_LINE(95)
						v0->x = vertices->__get(c);
						HX_STACK_LINE(96)
						v0->y = vertices->__get((c + (int)1));
						HX_STACK_LINE(97)
						v0->z = vertices->__get((c + (int)2));
						HX_STACK_LINE(98)
						this->updateOrAddSegment((index)++,v0,v1);
						HX_STACK_LINE(99)
						v1->x = vertices->__get(d);
						HX_STACK_LINE(100)
						v1->y = vertices->__get((d + (int)1));
						HX_STACK_LINE(101)
						v1->z = vertices->__get((d + (int)2));
						HX_STACK_LINE(102)
						this->updateOrAddSegment((index)++,v0,v1);
					}
				}
				HX_STACK_LINE(105)
				++(i);
			}
			HX_STACK_LINE(107)
			++(j);
		}
	}
return null();
}



WireframeSphere_obj::WireframeSphere_obj()
{
}

void WireframeSphere_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WireframeSphere);
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_segmentsH,"_segmentsH");
	HX_MARK_MEMBER_NAME(_segmentsW,"_segmentsW");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WireframeSphere_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_segmentsH,"_segmentsH");
	HX_VISIT_MEMBER_NAME(_segmentsW,"_segmentsW");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WireframeSphere_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { return _segmentsH; }
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { return _segmentsW; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return buildGeometry_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WireframeSphere_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { _segmentsH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { _segmentsW=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframeSphere_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_segmentsH"));
	outFields->push(HX_CSTRING("_segmentsW"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("buildGeometry"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_segmentsH"),
	HX_CSTRING("_segmentsW"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WireframeSphere_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WireframeSphere_obj::__mClass,"__mClass");
};

Class WireframeSphere_obj::__mClass;

void WireframeSphere_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.WireframeSphere"), hx::TCanCast< WireframeSphere_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WireframeSphere_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
