#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_data_ParticleData
#include <away3d/core/base/data/ParticleData.h>
#endif
namespace away3d{
namespace core{
namespace base{
namespace data{

Void ParticleData_obj::__construct()
{
HX_STACK_PUSH("ParticleData::new","away3d/core/base/data/ParticleData.hx",12);
{
}
;
	return null();
}

ParticleData_obj::~ParticleData_obj() { }

Dynamic ParticleData_obj::__CreateEmpty() { return  new ParticleData_obj; }
hx::ObjectPtr< ParticleData_obj > ParticleData_obj::__new()
{  hx::ObjectPtr< ParticleData_obj > result = new ParticleData_obj();
	result->__construct();
	return result;}

Dynamic ParticleData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleData_obj > result = new ParticleData_obj();
	result->__construct();
	return result;}


ParticleData_obj::ParticleData_obj()
{
}

void ParticleData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleData);
	HX_MARK_MEMBER_NAME(subGeometry,"subGeometry");
	HX_MARK_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(particleIndex,"particleIndex");
	HX_MARK_END_CLASS();
}

void ParticleData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(subGeometry,"subGeometry");
	HX_VISIT_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(particleIndex,"particleIndex");
}

Dynamic ParticleData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"subGeometry") ) { return subGeometry; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleIndex") ) { return particleIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { return startVertexIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParticleData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"subGeometry") ) { subGeometry=inValue.Cast< ::away3d::core::base::CompactSubGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleIndex") ) { particleIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { startVertexIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("subGeometry"));
	outFields->push(HX_CSTRING("startVertexIndex"));
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("particleIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("subGeometry"),
	HX_CSTRING("startVertexIndex"),
	HX_CSTRING("numVertices"),
	HX_CSTRING("particleIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleData_obj::__mClass,"__mClass");
};

Class ParticleData_obj::__mClass;

void ParticleData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.data.ParticleData"), hx::TCanCast< ParticleData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ParticleData_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
} // end namespace data
