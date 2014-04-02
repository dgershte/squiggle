#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_FogMethod
#include <away3d/materials/methods/FogMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace materials{
namespace methods{

Void FogMethod_obj::__construct(Float minDistance,Float maxDistance,hx::Null< int >  __o_fogColor)
{
HX_STACK_PUSH("FogMethod::new","away3d/materials/methods/FogMethod.hx",30);
int fogColor = __o_fogColor.Default(8421504);
{
	HX_STACK_LINE(31)
	this->_minDistance = (int)0;
	HX_STACK_LINE(32)
	this->_maxDistance = (int)1000;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->set_minDistance(minDistance);
	HX_STACK_LINE(35)
	this->set_maxDistance(maxDistance);
	HX_STACK_LINE(36)
	this->set_fogColor(fogColor);
}
;
	return null();
}

FogMethod_obj::~FogMethod_obj() { }

Dynamic FogMethod_obj::__CreateEmpty() { return  new FogMethod_obj; }
hx::ObjectPtr< FogMethod_obj > FogMethod_obj::__new(Float minDistance,Float maxDistance,hx::Null< int >  __o_fogColor)
{  hx::ObjectPtr< FogMethod_obj > result = new FogMethod_obj();
	result->__construct(minDistance,maxDistance,__o_fogColor);
	return result;}

Dynamic FogMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FogMethod_obj > result = new FogMethod_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String FogMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("FogMethod::getFragmentCode","away3d/materials/methods/FogMethod.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(120)
	::away3d::materials::compilation::ShaderRegisterElement fogColor = regCache->getFreeFragmentConstant();		HX_STACK_VAR(fogColor,"fogColor");
	HX_STACK_LINE(121)
	::away3d::materials::compilation::ShaderRegisterElement fogData = regCache->getFreeFragmentConstant();		HX_STACK_VAR(fogData,"fogData");
	HX_STACK_LINE(122)
	::away3d::materials::compilation::ShaderRegisterElement temp = regCache->getFreeFragmentVectorTemp();		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(123)
	regCache->addFragmentTempUsages(temp,(int)1);
	HX_STACK_LINE(124)
	::away3d::materials::compilation::ShaderRegisterElement temp2 = regCache->getFreeFragmentVectorTemp();		HX_STACK_VAR(temp2,"temp2");
	HX_STACK_LINE(125)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(126)
	vo->fragmentConstantsIndex = (fogColor->get_index() * (int)4);
	HX_STACK_LINE(127)
	hx::AddEq(code,(((((((((((((((((((((((((((((((((((((((HX_CSTRING("sub ") + ::Std_obj::string(temp2)) + HX_CSTRING(".w, ")) + ::Std_obj::string(this->_sharedRegisters->projectionFragment)) + HX_CSTRING(".z, ")) + ::Std_obj::string(fogData)) + HX_CSTRING(".x          \n")) + HX_CSTRING("mul ")) + ::Std_obj::string(temp2)) + HX_CSTRING(".w, ")) + ::Std_obj::string(temp2)) + HX_CSTRING(".w, ")) + ::Std_obj::string(fogData)) + HX_CSTRING(".y\t\t\t\t\t\n")) + HX_CSTRING("sat ")) + ::Std_obj::string(temp2)) + HX_CSTRING(".w, ")) + ::Std_obj::string(temp2)) + HX_CSTRING(".w\t\t\t\t\t\t\t\t\t\t\n")) + HX_CSTRING("sub ")) + ::Std_obj::string(temp)) + HX_CSTRING(", ")) + ::Std_obj::string(fogColor)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING("\n")) + HX_CSTRING("mul ")) + ::Std_obj::string(temp)) + HX_CSTRING(", ")) + ::Std_obj::string(temp)) + HX_CSTRING(", ")) + ::Std_obj::string(temp2)) + HX_CSTRING(".w\t\t\t\t\t\n")) + HX_CSTRING("add ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(temp)) + HX_CSTRING("\n")));
	HX_STACK_LINE(133)
	regCache->removeFragmentTempUsage(temp);
	HX_STACK_LINE(134)
	return code;
}


Void FogMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("FogMethod::activate","away3d/materials/methods/FogMethod.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(106)
		Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(107)
		int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(108)
		data[index] = this->_fogR;
		HX_STACK_LINE(109)
		data[(index + (int)1)] = this->_fogG;
		HX_STACK_LINE(110)
		data[(index + (int)2)] = this->_fogB;
		HX_STACK_LINE(111)
		data[(index + (int)4)] = this->_minDistance;
		HX_STACK_LINE(112)
		data[(index + (int)5)] = (Float((int)1) / Float(((this->_maxDistance - this->_minDistance))));
	}
return null();
}


int FogMethod_obj::set_fogColor( int value){
	HX_STACK_PUSH("FogMethod::set_fogColor","away3d/materials/methods/FogMethod.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(94)
	this->_fogColor = value;
	HX_STACK_LINE(95)
	this->_fogR = (Float(((int((int(value) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(96)
	this->_fogG = (Float(((int((int(value) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(97)
	this->_fogB = (Float(((int(value) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(98)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FogMethod_obj,set_fogColor,return )

int FogMethod_obj::get_fogColor( ){
	HX_STACK_PUSH("FogMethod::get_fogColor","away3d/materials/methods/FogMethod.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->_fogColor;
}


HX_DEFINE_DYNAMIC_FUNC0(FogMethod_obj,get_fogColor,return )

Float FogMethod_obj::set_maxDistance( Float value){
	HX_STACK_PUSH("FogMethod::set_maxDistance","away3d/materials/methods/FogMethod.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(81)
	this->_maxDistance = value;
	HX_STACK_LINE(82)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FogMethod_obj,set_maxDistance,return )

Float FogMethod_obj::get_maxDistance( ){
	HX_STACK_PUSH("FogMethod::get_maxDistance","away3d/materials/methods/FogMethod.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->_maxDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(FogMethod_obj,get_maxDistance,return )

Float FogMethod_obj::set_minDistance( Float value){
	HX_STACK_PUSH("FogMethod::set_minDistance","away3d/materials/methods/FogMethod.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(68)
	this->_minDistance = value;
	HX_STACK_LINE(69)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FogMethod_obj,set_minDistance,return )

Float FogMethod_obj::get_minDistance( ){
	HX_STACK_PUSH("FogMethod::get_minDistance","away3d/materials/methods/FogMethod.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return this->_minDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(FogMethod_obj,get_minDistance,return )

Void FogMethod_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("FogMethod::initConstants","away3d/materials/methods/FogMethod.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(52)
		Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(53)
		int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(54)
		data[(index + (int)3)] = (int)1;
		HX_STACK_LINE(55)
		data[(index + (int)6)] = (int)0;
		HX_STACK_LINE(56)
		data[(index + (int)7)] = (int)0;
	}
return null();
}


Void FogMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("FogMethod::initVO","away3d/materials/methods/FogMethod.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(43)
		vo->needsProjection = true;
	}
return null();
}



FogMethod_obj::FogMethod_obj()
{
}

void FogMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FogMethod);
	HX_MARK_MEMBER_NAME(_fogB,"_fogB");
	HX_MARK_MEMBER_NAME(_fogG,"_fogG");
	HX_MARK_MEMBER_NAME(_fogR,"_fogR");
	HX_MARK_MEMBER_NAME(_fogColor,"_fogColor");
	HX_MARK_MEMBER_NAME(_maxDistance,"_maxDistance");
	HX_MARK_MEMBER_NAME(_minDistance,"_minDistance");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FogMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fogB,"_fogB");
	HX_VISIT_MEMBER_NAME(_fogG,"_fogG");
	HX_VISIT_MEMBER_NAME(_fogR,"_fogR");
	HX_VISIT_MEMBER_NAME(_fogColor,"_fogColor");
	HX_VISIT_MEMBER_NAME(_maxDistance,"_maxDistance");
	HX_VISIT_MEMBER_NAME(_minDistance,"_minDistance");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FogMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_fogB") ) { return _fogB; }
		if (HX_FIELD_EQ(inName,"_fogG") ) { return _fogG; }
		if (HX_FIELD_EQ(inName,"_fogR") ) { return _fogR; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"fogColor") ) { return get_fogColor(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fogColor") ) { return _fogColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxDistance") ) { return get_maxDistance(); }
		if (HX_FIELD_EQ(inName,"minDistance") ) { return get_minDistance(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_fogColor") ) { return set_fogColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fogColor") ) { return get_fogColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_maxDistance") ) { return _maxDistance; }
		if (HX_FIELD_EQ(inName,"_minDistance") ) { return _minDistance; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initConstants") ) { return initConstants_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxDistance") ) { return set_maxDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxDistance") ) { return get_maxDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minDistance") ) { return set_minDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minDistance") ) { return get_minDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FogMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_fogB") ) { _fogB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fogG") ) { _fogG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fogR") ) { _fogR=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fogColor") ) { return set_fogColor(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fogColor") ) { _fogColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxDistance") ) { return set_maxDistance(inValue); }
		if (HX_FIELD_EQ(inName,"minDistance") ) { return set_minDistance(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxDistance") ) { _maxDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minDistance") ) { _minDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FogMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_fogB"));
	outFields->push(HX_CSTRING("_fogG"));
	outFields->push(HX_CSTRING("_fogR"));
	outFields->push(HX_CSTRING("_fogColor"));
	outFields->push(HX_CSTRING("_maxDistance"));
	outFields->push(HX_CSTRING("_minDistance"));
	outFields->push(HX_CSTRING("fogColor"));
	outFields->push(HX_CSTRING("maxDistance"));
	outFields->push(HX_CSTRING("minDistance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("activate"),
	HX_CSTRING("set_fogColor"),
	HX_CSTRING("get_fogColor"),
	HX_CSTRING("set_maxDistance"),
	HX_CSTRING("get_maxDistance"),
	HX_CSTRING("set_minDistance"),
	HX_CSTRING("get_minDistance"),
	HX_CSTRING("initConstants"),
	HX_CSTRING("initVO"),
	HX_CSTRING("_fogB"),
	HX_CSTRING("_fogG"),
	HX_CSTRING("_fogR"),
	HX_CSTRING("_fogColor"),
	HX_CSTRING("_maxDistance"),
	HX_CSTRING("_minDistance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FogMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FogMethod_obj::__mClass,"__mClass");
};

Class FogMethod_obj::__mClass;

void FogMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.FogMethod"), hx::TCanCast< FogMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FogMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
