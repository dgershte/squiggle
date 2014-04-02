#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#include <away3d/animators/data/ParticleAnimationData.h>
#endif
#ifndef INCLUDED_away3d_core_base_data_ParticleData
#include <away3d/core/base/data/ParticleData.h>
#endif
namespace away3d{
namespace animators{
namespace data{

Void ParticleAnimationData_obj::__construct(int index,Float startTime,Float duration,Float delay,::away3d::core::base::data::ParticleData particle)
{
HX_STACK_PUSH("ParticleAnimationData::new","away3d/animators/data/ParticleAnimationData.hx",18);
{
	HX_STACK_LINE(19)
	this->index = index;
	HX_STACK_LINE(20)
	this->startTime = startTime;
	HX_STACK_LINE(21)
	this->totalTime = (duration + delay);
	HX_STACK_LINE(22)
	this->duration = duration;
	HX_STACK_LINE(23)
	this->delay = delay;
	HX_STACK_LINE(24)
	this->startVertexIndex = particle->startVertexIndex;
	HX_STACK_LINE(25)
	this->numVertices = particle->numVertices;
}
;
	return null();
}

ParticleAnimationData_obj::~ParticleAnimationData_obj() { }

Dynamic ParticleAnimationData_obj::__CreateEmpty() { return  new ParticleAnimationData_obj; }
hx::ObjectPtr< ParticleAnimationData_obj > ParticleAnimationData_obj::__new(int index,Float startTime,Float duration,Float delay,::away3d::core::base::data::ParticleData particle)
{  hx::ObjectPtr< ParticleAnimationData_obj > result = new ParticleAnimationData_obj();
	result->__construct(index,startTime,duration,delay,particle);
	return result;}

Dynamic ParticleAnimationData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleAnimationData_obj > result = new ParticleAnimationData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


ParticleAnimationData_obj::ParticleAnimationData_obj()
{
}

void ParticleAnimationData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleAnimationData);
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(totalTime,"totalTime");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void ParticleAnimationData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(totalTime,"totalTime");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic ParticleAnimationData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"totalTime") ) { return totalTime; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { return startVertexIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParticleAnimationData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"totalTime") ) { totalTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { startVertexIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleAnimationData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numVertices"));
	outFields->push(HX_CSTRING("startVertexIndex"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("totalTime"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("numVertices"),
	HX_CSTRING("startVertexIndex"),
	HX_CSTRING("delay"),
	HX_CSTRING("duration"),
	HX_CSTRING("totalTime"),
	HX_CSTRING("startTime"),
	HX_CSTRING("index"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleAnimationData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleAnimationData_obj::__mClass,"__mClass");
};

Class ParticleAnimationData_obj::__mClass;

void ParticleAnimationData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.data.ParticleAnimationData"), hx::TCanCast< ParticleAnimationData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ParticleAnimationData_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
