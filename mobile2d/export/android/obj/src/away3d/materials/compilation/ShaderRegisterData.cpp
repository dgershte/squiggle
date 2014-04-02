#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void ShaderRegisterData_obj::__construct()
{
HX_STACK_PUSH("ShaderRegisterData::new","away3d/materials/compilation/ShaderRegisterData.hx",28);
{
}
;
	return null();
}

ShaderRegisterData_obj::~ShaderRegisterData_obj() { }

Dynamic ShaderRegisterData_obj::__CreateEmpty() { return  new ShaderRegisterData_obj; }
hx::ObjectPtr< ShaderRegisterData_obj > ShaderRegisterData_obj::__new()
{  hx::ObjectPtr< ShaderRegisterData_obj > result = new ShaderRegisterData_obj();
	result->__construct();
	return result;}

Dynamic ShaderRegisterData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderRegisterData_obj > result = new ShaderRegisterData_obj();
	result->__construct();
	return result;}


ShaderRegisterData_obj::ShaderRegisterData_obj()
{
}

void ShaderRegisterData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterData);
	HX_MARK_MEMBER_NAME(bitangent,"bitangent");
	HX_MARK_MEMBER_NAME(viewDirFragment,"viewDirFragment");
	HX_MARK_MEMBER_NAME(normalFragment,"normalFragment");
	HX_MARK_MEMBER_NAME(projectionFragment,"projectionFragment");
	HX_MARK_MEMBER_NAME(commons,"commons");
	HX_MARK_MEMBER_NAME(animatedTangent,"animatedTangent");
	HX_MARK_MEMBER_NAME(animatedNormal,"animatedNormal");
	HX_MARK_MEMBER_NAME(tangentInput,"tangentInput");
	HX_MARK_MEMBER_NAME(normalInput,"normalInput");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(globalPositionVarying,"globalPositionVarying");
	HX_MARK_MEMBER_NAME(globalPositionVertex,"globalPositionVertex");
	HX_MARK_MEMBER_NAME(shadedTarget,"shadedTarget");
	HX_MARK_MEMBER_NAME(viewDirVarying,"viewDirVarying");
	HX_MARK_MEMBER_NAME(secondaryUVVarying,"secondaryUVVarying");
	HX_MARK_MEMBER_NAME(uvVarying,"uvVarying");
	HX_MARK_MEMBER_NAME(bitangentVarying,"bitangentVarying");
	HX_MARK_MEMBER_NAME(tangentVarying,"tangentVarying");
	HX_MARK_MEMBER_NAME(normalVarying,"normalVarying");
	HX_MARK_END_CLASS();
}

void ShaderRegisterData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitangent,"bitangent");
	HX_VISIT_MEMBER_NAME(viewDirFragment,"viewDirFragment");
	HX_VISIT_MEMBER_NAME(normalFragment,"normalFragment");
	HX_VISIT_MEMBER_NAME(projectionFragment,"projectionFragment");
	HX_VISIT_MEMBER_NAME(commons,"commons");
	HX_VISIT_MEMBER_NAME(animatedTangent,"animatedTangent");
	HX_VISIT_MEMBER_NAME(animatedNormal,"animatedNormal");
	HX_VISIT_MEMBER_NAME(tangentInput,"tangentInput");
	HX_VISIT_MEMBER_NAME(normalInput,"normalInput");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(globalPositionVarying,"globalPositionVarying");
	HX_VISIT_MEMBER_NAME(globalPositionVertex,"globalPositionVertex");
	HX_VISIT_MEMBER_NAME(shadedTarget,"shadedTarget");
	HX_VISIT_MEMBER_NAME(viewDirVarying,"viewDirVarying");
	HX_VISIT_MEMBER_NAME(secondaryUVVarying,"secondaryUVVarying");
	HX_VISIT_MEMBER_NAME(uvVarying,"uvVarying");
	HX_VISIT_MEMBER_NAME(bitangentVarying,"bitangentVarying");
	HX_VISIT_MEMBER_NAME(tangentVarying,"tangentVarying");
	HX_VISIT_MEMBER_NAME(normalVarying,"normalVarying");
}

Dynamic ShaderRegisterData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"commons") ) { return commons; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitangent") ) { return bitangent; }
		if (HX_FIELD_EQ(inName,"uvVarying") ) { return uvVarying; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"normalInput") ) { return normalInput; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tangentInput") ) { return tangentInput; }
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { return shadedTarget; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { return localPosition; }
		if (HX_FIELD_EQ(inName,"normalVarying") ) { return normalVarying; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"normalFragment") ) { return normalFragment; }
		if (HX_FIELD_EQ(inName,"animatedNormal") ) { return animatedNormal; }
		if (HX_FIELD_EQ(inName,"viewDirVarying") ) { return viewDirVarying; }
		if (HX_FIELD_EQ(inName,"tangentVarying") ) { return tangentVarying; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"viewDirFragment") ) { return viewDirFragment; }
		if (HX_FIELD_EQ(inName,"animatedTangent") ) { return animatedTangent; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitangentVarying") ) { return bitangentVarying; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionFragment") ) { return projectionFragment; }
		if (HX_FIELD_EQ(inName,"secondaryUVVarying") ) { return secondaryUVVarying; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"globalPositionVertex") ) { return globalPositionVertex; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"globalPositionVarying") ) { return globalPositionVarying; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderRegisterData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"commons") ) { commons=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitangent") ) { bitangent=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvVarying") ) { uvVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"normalInput") ) { normalInput=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tangentInput") ) { tangentInput=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { shadedTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalVarying") ) { normalVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"normalFragment") ) { normalFragment=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animatedNormal") ) { animatedNormal=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewDirVarying") ) { viewDirVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tangentVarying") ) { tangentVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"viewDirFragment") ) { viewDirFragment=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animatedTangent") ) { animatedTangent=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitangentVarying") ) { bitangentVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionFragment") ) { projectionFragment=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secondaryUVVarying") ) { secondaryUVVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"globalPositionVertex") ) { globalPositionVertex=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"globalPositionVarying") ) { globalPositionVarying=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderRegisterData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitangent"));
	outFields->push(HX_CSTRING("viewDirFragment"));
	outFields->push(HX_CSTRING("normalFragment"));
	outFields->push(HX_CSTRING("projectionFragment"));
	outFields->push(HX_CSTRING("commons"));
	outFields->push(HX_CSTRING("animatedTangent"));
	outFields->push(HX_CSTRING("animatedNormal"));
	outFields->push(HX_CSTRING("tangentInput"));
	outFields->push(HX_CSTRING("normalInput"));
	outFields->push(HX_CSTRING("localPosition"));
	outFields->push(HX_CSTRING("globalPositionVarying"));
	outFields->push(HX_CSTRING("globalPositionVertex"));
	outFields->push(HX_CSTRING("shadedTarget"));
	outFields->push(HX_CSTRING("viewDirVarying"));
	outFields->push(HX_CSTRING("secondaryUVVarying"));
	outFields->push(HX_CSTRING("uvVarying"));
	outFields->push(HX_CSTRING("bitangentVarying"));
	outFields->push(HX_CSTRING("tangentVarying"));
	outFields->push(HX_CSTRING("normalVarying"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("bitangent"),
	HX_CSTRING("viewDirFragment"),
	HX_CSTRING("normalFragment"),
	HX_CSTRING("projectionFragment"),
	HX_CSTRING("commons"),
	HX_CSTRING("animatedTangent"),
	HX_CSTRING("animatedNormal"),
	HX_CSTRING("tangentInput"),
	HX_CSTRING("normalInput"),
	HX_CSTRING("localPosition"),
	HX_CSTRING("globalPositionVarying"),
	HX_CSTRING("globalPositionVertex"),
	HX_CSTRING("shadedTarget"),
	HX_CSTRING("viewDirVarying"),
	HX_CSTRING("secondaryUVVarying"),
	HX_CSTRING("uvVarying"),
	HX_CSTRING("bitangentVarying"),
	HX_CSTRING("tangentVarying"),
	HX_CSTRING("normalVarying"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderRegisterData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderRegisterData_obj::__mClass,"__mClass");
};

Class ShaderRegisterData_obj::__mClass;

void ShaderRegisterData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.ShaderRegisterData"), hx::TCanCast< ShaderRegisterData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderRegisterData_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
