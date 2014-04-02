#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
namespace away3d{
namespace materials{
namespace methods{

Void MethodVO_obj::__construct()
{
HX_STACK_PUSH("MethodVO::new","away3d/materials/methods/MethodVO.hx",40);
{
	HX_STACK_LINE(40)
	this->useLightFallOff = true;
}
;
	return null();
}

MethodVO_obj::~MethodVO_obj() { }

Dynamic MethodVO_obj::__CreateEmpty() { return  new MethodVO_obj; }
hx::ObjectPtr< MethodVO_obj > MethodVO_obj::__new()
{  hx::ObjectPtr< MethodVO_obj > result = new MethodVO_obj();
	result->__construct();
	return result;}

Dynamic MethodVO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodVO_obj > result = new MethodVO_obj();
	result->__construct();
	return result;}

Void MethodVO_obj::reset( ){
{
		HX_STACK_PUSH("MethodVO::reset","away3d/materials/methods/MethodVO.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		this->texturesIndex = (int)-1;
		HX_STACK_LINE(50)
		this->vertexConstantsIndex = (int)-1;
		HX_STACK_LINE(51)
		this->fragmentConstantsIndex = (int)-1;
		HX_STACK_LINE(52)
		this->useMipmapping = true;
		HX_STACK_LINE(53)
		this->useSmoothTextures = true;
		HX_STACK_LINE(54)
		this->repeatTextures = false;
		HX_STACK_LINE(55)
		this->needsProjection = false;
		HX_STACK_LINE(56)
		this->needsView = false;
		HX_STACK_LINE(57)
		this->needsNormals = false;
		HX_STACK_LINE(58)
		this->needsTangents = false;
		HX_STACK_LINE(59)
		this->needsUV = false;
		HX_STACK_LINE(60)
		this->needsSecondaryUV = false;
		HX_STACK_LINE(61)
		this->needsGlobalVertexPos = false;
		HX_STACK_LINE(62)
		this->needsGlobalFragmentPos = false;
		HX_STACK_LINE(63)
		this->numLights = (int)0;
		HX_STACK_LINE(64)
		this->useLightFallOff = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MethodVO_obj,reset,(void))


MethodVO_obj::MethodVO_obj()
{
}

void MethodVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodVO);
	HX_MARK_MEMBER_NAME(useLightFallOff,"useLightFallOff");
	HX_MARK_MEMBER_NAME(numLights,"numLights");
	HX_MARK_MEMBER_NAME(needsGlobalFragmentPos,"needsGlobalFragmentPos");
	HX_MARK_MEMBER_NAME(needsGlobalVertexPos,"needsGlobalVertexPos");
	HX_MARK_MEMBER_NAME(needsSecondaryUV,"needsSecondaryUV");
	HX_MARK_MEMBER_NAME(needsUV,"needsUV");
	HX_MARK_MEMBER_NAME(needsTangents,"needsTangents");
	HX_MARK_MEMBER_NAME(needsNormals,"needsNormals");
	HX_MARK_MEMBER_NAME(needsView,"needsView");
	HX_MARK_MEMBER_NAME(needsProjection,"needsProjection");
	HX_MARK_MEMBER_NAME(repeatTextures,"repeatTextures");
	HX_MARK_MEMBER_NAME(useSmoothTextures,"useSmoothTextures");
	HX_MARK_MEMBER_NAME(useMipmapping,"useMipmapping");
	HX_MARK_MEMBER_NAME(secondaryFragmentConstantsIndex,"secondaryFragmentConstantsIndex");
	HX_MARK_MEMBER_NAME(fragmentConstantsIndex,"fragmentConstantsIndex");
	HX_MARK_MEMBER_NAME(secondaryVertexConstantsIndex,"secondaryVertexConstantsIndex");
	HX_MARK_MEMBER_NAME(vertexConstantsIndex,"vertexConstantsIndex");
	HX_MARK_MEMBER_NAME(secondaryTexturesIndex,"secondaryTexturesIndex");
	HX_MARK_MEMBER_NAME(texturesIndex,"texturesIndex");
	HX_MARK_MEMBER_NAME(fragmentData,"fragmentData");
	HX_MARK_MEMBER_NAME(vertexData,"vertexData");
	HX_MARK_END_CLASS();
}

void MethodVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useLightFallOff,"useLightFallOff");
	HX_VISIT_MEMBER_NAME(numLights,"numLights");
	HX_VISIT_MEMBER_NAME(needsGlobalFragmentPos,"needsGlobalFragmentPos");
	HX_VISIT_MEMBER_NAME(needsGlobalVertexPos,"needsGlobalVertexPos");
	HX_VISIT_MEMBER_NAME(needsSecondaryUV,"needsSecondaryUV");
	HX_VISIT_MEMBER_NAME(needsUV,"needsUV");
	HX_VISIT_MEMBER_NAME(needsTangents,"needsTangents");
	HX_VISIT_MEMBER_NAME(needsNormals,"needsNormals");
	HX_VISIT_MEMBER_NAME(needsView,"needsView");
	HX_VISIT_MEMBER_NAME(needsProjection,"needsProjection");
	HX_VISIT_MEMBER_NAME(repeatTextures,"repeatTextures");
	HX_VISIT_MEMBER_NAME(useSmoothTextures,"useSmoothTextures");
	HX_VISIT_MEMBER_NAME(useMipmapping,"useMipmapping");
	HX_VISIT_MEMBER_NAME(secondaryFragmentConstantsIndex,"secondaryFragmentConstantsIndex");
	HX_VISIT_MEMBER_NAME(fragmentConstantsIndex,"fragmentConstantsIndex");
	HX_VISIT_MEMBER_NAME(secondaryVertexConstantsIndex,"secondaryVertexConstantsIndex");
	HX_VISIT_MEMBER_NAME(vertexConstantsIndex,"vertexConstantsIndex");
	HX_VISIT_MEMBER_NAME(secondaryTexturesIndex,"secondaryTexturesIndex");
	HX_VISIT_MEMBER_NAME(texturesIndex,"texturesIndex");
	HX_VISIT_MEMBER_NAME(fragmentData,"fragmentData");
	HX_VISIT_MEMBER_NAME(vertexData,"vertexData");
}

Dynamic MethodVO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"needsUV") ) { return needsUV; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numLights") ) { return numLights; }
		if (HX_FIELD_EQ(inName,"needsView") ) { return needsView; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { return vertexData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsNormals") ) { return needsNormals; }
		if (HX_FIELD_EQ(inName,"fragmentData") ) { return fragmentData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"needsTangents") ) { return needsTangents; }
		if (HX_FIELD_EQ(inName,"useMipmapping") ) { return useMipmapping; }
		if (HX_FIELD_EQ(inName,"texturesIndex") ) { return texturesIndex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatTextures") ) { return repeatTextures; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useLightFallOff") ) { return useLightFallOff; }
		if (HX_FIELD_EQ(inName,"needsProjection") ) { return needsProjection; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needsSecondaryUV") ) { return needsSecondaryUV; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useSmoothTextures") ) { return useSmoothTextures; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"needsGlobalVertexPos") ) { return needsGlobalVertexPos; }
		if (HX_FIELD_EQ(inName,"vertexConstantsIndex") ) { return vertexConstantsIndex; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"needsGlobalFragmentPos") ) { return needsGlobalFragmentPos; }
		if (HX_FIELD_EQ(inName,"fragmentConstantsIndex") ) { return fragmentConstantsIndex; }
		if (HX_FIELD_EQ(inName,"secondaryTexturesIndex") ) { return secondaryTexturesIndex; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondaryVertexConstantsIndex") ) { return secondaryVertexConstantsIndex; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"secondaryFragmentConstantsIndex") ) { return secondaryFragmentConstantsIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodVO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needsUV") ) { needsUV=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numLights") ) { numLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsView") ) { needsView=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { vertexData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"needsNormals") ) { needsNormals=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentData") ) { fragmentData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"needsTangents") ) { needsTangents=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useMipmapping") ) { useMipmapping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturesIndex") ) { texturesIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatTextures") ) { repeatTextures=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useLightFallOff") ) { useLightFallOff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsProjection") ) { needsProjection=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needsSecondaryUV") ) { needsSecondaryUV=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useSmoothTextures") ) { useSmoothTextures=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"needsGlobalVertexPos") ) { needsGlobalVertexPos=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexConstantsIndex") ) { vertexConstantsIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"needsGlobalFragmentPos") ) { needsGlobalFragmentPos=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentConstantsIndex") ) { fragmentConstantsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secondaryTexturesIndex") ) { secondaryTexturesIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondaryVertexConstantsIndex") ) { secondaryVertexConstantsIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"secondaryFragmentConstantsIndex") ) { secondaryFragmentConstantsIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useLightFallOff"));
	outFields->push(HX_CSTRING("numLights"));
	outFields->push(HX_CSTRING("needsGlobalFragmentPos"));
	outFields->push(HX_CSTRING("needsGlobalVertexPos"));
	outFields->push(HX_CSTRING("needsSecondaryUV"));
	outFields->push(HX_CSTRING("needsUV"));
	outFields->push(HX_CSTRING("needsTangents"));
	outFields->push(HX_CSTRING("needsNormals"));
	outFields->push(HX_CSTRING("needsView"));
	outFields->push(HX_CSTRING("needsProjection"));
	outFields->push(HX_CSTRING("repeatTextures"));
	outFields->push(HX_CSTRING("useSmoothTextures"));
	outFields->push(HX_CSTRING("useMipmapping"));
	outFields->push(HX_CSTRING("secondaryFragmentConstantsIndex"));
	outFields->push(HX_CSTRING("fragmentConstantsIndex"));
	outFields->push(HX_CSTRING("secondaryVertexConstantsIndex"));
	outFields->push(HX_CSTRING("vertexConstantsIndex"));
	outFields->push(HX_CSTRING("secondaryTexturesIndex"));
	outFields->push(HX_CSTRING("texturesIndex"));
	outFields->push(HX_CSTRING("fragmentData"));
	outFields->push(HX_CSTRING("vertexData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("useLightFallOff"),
	HX_CSTRING("numLights"),
	HX_CSTRING("needsGlobalFragmentPos"),
	HX_CSTRING("needsGlobalVertexPos"),
	HX_CSTRING("needsSecondaryUV"),
	HX_CSTRING("needsUV"),
	HX_CSTRING("needsTangents"),
	HX_CSTRING("needsNormals"),
	HX_CSTRING("needsView"),
	HX_CSTRING("needsProjection"),
	HX_CSTRING("repeatTextures"),
	HX_CSTRING("useSmoothTextures"),
	HX_CSTRING("useMipmapping"),
	HX_CSTRING("secondaryFragmentConstantsIndex"),
	HX_CSTRING("fragmentConstantsIndex"),
	HX_CSTRING("secondaryVertexConstantsIndex"),
	HX_CSTRING("vertexConstantsIndex"),
	HX_CSTRING("secondaryTexturesIndex"),
	HX_CSTRING("texturesIndex"),
	HX_CSTRING("fragmentData"),
	HX_CSTRING("vertexData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodVO_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodVO_obj::__mClass,"__mClass");
};

Class MethodVO_obj::__mClass;

void MethodVO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.MethodVO"), hx::TCanCast< MethodVO_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MethodVO_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
