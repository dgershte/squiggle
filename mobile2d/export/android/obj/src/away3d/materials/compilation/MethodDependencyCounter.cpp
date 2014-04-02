#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_LightSources
#include <away3d/materials/LightSources.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#include <away3d/materials/compilation/MethodDependencyCounter.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void MethodDependencyCounter_obj::__construct()
{
HX_STACK_PUSH("MethodDependencyCounter::new","away3d/materials/compilation/MethodDependencyCounter.hx",38);
{
	HX_STACK_LINE(38)
	this->_usesGlobalPosFragment = false;
}
;
	return null();
}

MethodDependencyCounter_obj::~MethodDependencyCounter_obj() { }

Dynamic MethodDependencyCounter_obj::__CreateEmpty() { return  new MethodDependencyCounter_obj; }
hx::ObjectPtr< MethodDependencyCounter_obj > MethodDependencyCounter_obj::__new()
{  hx::ObjectPtr< MethodDependencyCounter_obj > result = new MethodDependencyCounter_obj();
	result->__construct();
	return result;}

Dynamic MethodDependencyCounter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodDependencyCounter_obj > result = new MethodDependencyCounter_obj();
	result->__construct();
	return result;}

Void MethodDependencyCounter_obj::addWorldSpaceDependencies( bool fragmentLights){
{
		HX_STACK_PUSH("MethodDependencyCounter::addWorldSpaceDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fragmentLights,"fragmentLights");
		HX_STACK_LINE(161)
		if (((this->_viewDirDependencies > (int)0))){
			HX_STACK_LINE(161)
			++(this->_globalPosDependencies);
		}
		HX_STACK_LINE(162)
		if (((bool((this->_numPointLights > (int)0)) && bool((((int(this->_lightSourceMask) & int(::away3d::materials::LightSources_obj::LIGHTS))) == (int)1))))){
			HX_STACK_LINE(163)
			++(this->_globalPosDependencies);
			HX_STACK_LINE(164)
			if ((fragmentLights)){
				HX_STACK_LINE(164)
				this->_usesGlobalPosFragment = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MethodDependencyCounter_obj,addWorldSpaceDependencies,(void))

int MethodDependencyCounter_obj::get_globalPosDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_globalPosDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return this->_globalPosDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_globalPosDependencies,return )

int MethodDependencyCounter_obj::get_secondaryUVDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_secondaryUVDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->_secondaryUVDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_secondaryUVDependencies,return )

int MethodDependencyCounter_obj::get_uvDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_uvDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_uvDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_uvDependencies,return )

int MethodDependencyCounter_obj::get_viewDirDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_viewDirDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(127)
	return this->_viewDirDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_viewDirDependencies,return )

int MethodDependencyCounter_obj::get_normalDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_normalDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_LINE(119)
	return this->_normalDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_normalDependencies,return )

int MethodDependencyCounter_obj::get_projectionDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_projectionDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_LINE(111)
	return this->_projectionDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_projectionDependencies,return )

bool MethodDependencyCounter_obj::get_usesGlobalPosFragment( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_usesGlobalPosFragment","away3d/materials/compilation/MethodDependencyCounter.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->_usesGlobalPosFragment;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_usesGlobalPosFragment,return )

int MethodDependencyCounter_obj::get_tangentDependencies( ){
	HX_STACK_PUSH("MethodDependencyCounter::get_tangentDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->_tangentDependencies;
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_tangentDependencies,return )

Void MethodDependencyCounter_obj::includeMethodVO( ::away3d::materials::methods::MethodVO methodVO){
{
		HX_STACK_PUSH("MethodDependencyCounter::includeMethodVO","away3d/materials/compilation/MethodDependencyCounter.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(methodVO,"methodVO");
		HX_STACK_LINE(74)
		if ((methodVO->needsProjection)){
			HX_STACK_LINE(74)
			++(this->_projectionDependencies);
		}
		HX_STACK_LINE(75)
		if ((methodVO->needsGlobalVertexPos)){
			HX_STACK_LINE(76)
			++(this->_globalPosDependencies);
			HX_STACK_LINE(77)
			if ((methodVO->needsGlobalFragmentPos)){
				HX_STACK_LINE(77)
				this->_usesGlobalPosFragment = true;
			}
		}
		else{
			HX_STACK_LINE(80)
			if ((methodVO->needsGlobalFragmentPos)){
				HX_STACK_LINE(81)
				++(this->_globalPosDependencies);
				HX_STACK_LINE(82)
				this->_usesGlobalPosFragment = true;
			}
		}
		HX_STACK_LINE(84)
		if ((methodVO->needsNormals)){
			HX_STACK_LINE(84)
			++(this->_normalDependencies);
		}
		HX_STACK_LINE(85)
		if ((methodVO->needsTangents)){
			HX_STACK_LINE(85)
			++(this->_tangentDependencies);
		}
		HX_STACK_LINE(86)
		if ((methodVO->needsView)){
			HX_STACK_LINE(86)
			++(this->_viewDirDependencies);
		}
		HX_STACK_LINE(87)
		if ((methodVO->needsUV)){
			HX_STACK_LINE(87)
			++(this->_uvDependencies);
		}
		HX_STACK_LINE(88)
		if ((methodVO->needsSecondaryUV)){
			HX_STACK_LINE(88)
			++(this->_secondaryUVDependencies);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MethodDependencyCounter_obj,includeMethodVO,(void))

Void MethodDependencyCounter_obj::setPositionedLights( int numPointLights,int lightSourceMask){
{
		HX_STACK_PUSH("MethodDependencyCounter::setPositionedLights","away3d/materials/compilation/MethodDependencyCounter.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(numPointLights,"numPointLights");
		HX_STACK_ARG(lightSourceMask,"lightSourceMask");
		HX_STACK_LINE(64)
		this->_numPointLights = numPointLights;
		HX_STACK_LINE(65)
		this->_lightSourceMask = lightSourceMask;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MethodDependencyCounter_obj,setPositionedLights,(void))

Void MethodDependencyCounter_obj::reset( ){
{
		HX_STACK_PUSH("MethodDependencyCounter::reset","away3d/materials/compilation/MethodDependencyCounter.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		this->_projectionDependencies = (int)0;
		HX_STACK_LINE(48)
		this->_normalDependencies = (int)0;
		HX_STACK_LINE(49)
		this->_viewDirDependencies = (int)0;
		HX_STACK_LINE(50)
		this->_uvDependencies = (int)0;
		HX_STACK_LINE(51)
		this->_secondaryUVDependencies = (int)0;
		HX_STACK_LINE(52)
		this->_globalPosDependencies = (int)0;
		HX_STACK_LINE(53)
		this->_tangentDependencies = (int)0;
		HX_STACK_LINE(54)
		this->_usesGlobalPosFragment = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,reset,(void))


MethodDependencyCounter_obj::MethodDependencyCounter_obj()
{
}

void MethodDependencyCounter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodDependencyCounter);
	HX_MARK_MEMBER_NAME(_lightSourceMask,"_lightSourceMask");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_usesGlobalPosFragment,"_usesGlobalPosFragment");
	HX_MARK_MEMBER_NAME(_tangentDependencies,"_tangentDependencies");
	HX_MARK_MEMBER_NAME(_globalPosDependencies,"_globalPosDependencies");
	HX_MARK_MEMBER_NAME(_secondaryUVDependencies,"_secondaryUVDependencies");
	HX_MARK_MEMBER_NAME(_uvDependencies,"_uvDependencies");
	HX_MARK_MEMBER_NAME(_viewDirDependencies,"_viewDirDependencies");
	HX_MARK_MEMBER_NAME(_normalDependencies,"_normalDependencies");
	HX_MARK_MEMBER_NAME(_projectionDependencies,"_projectionDependencies");
	HX_MARK_END_CLASS();
}

void MethodDependencyCounter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lightSourceMask,"_lightSourceMask");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_usesGlobalPosFragment,"_usesGlobalPosFragment");
	HX_VISIT_MEMBER_NAME(_tangentDependencies,"_tangentDependencies");
	HX_VISIT_MEMBER_NAME(_globalPosDependencies,"_globalPosDependencies");
	HX_VISIT_MEMBER_NAME(_secondaryUVDependencies,"_secondaryUVDependencies");
	HX_VISIT_MEMBER_NAME(_uvDependencies,"_uvDependencies");
	HX_VISIT_MEMBER_NAME(_viewDirDependencies,"_viewDirDependencies");
	HX_VISIT_MEMBER_NAME(_normalDependencies,"_normalDependencies");
	HX_VISIT_MEMBER_NAME(_projectionDependencies,"_projectionDependencies");
}

Dynamic MethodDependencyCounter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uvDependencies") ) { return get_uvDependencies(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeMethodVO") ) { return includeMethodVO_dyn(); }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return _numPointLights; }
		if (HX_FIELD_EQ(inName,"_uvDependencies") ) { return _uvDependencies; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lightSourceMask") ) { return _lightSourceMask; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_uvDependencies") ) { return get_uvDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"normalDependencies") ) { return get_normalDependencies(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setPositionedLights") ) { return setPositionedLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_normalDependencies") ) { return _normalDependencies; }
		if (HX_FIELD_EQ(inName,"viewDirDependencies") ) { return get_viewDirDependencies(); }
		if (HX_FIELD_EQ(inName,"tangentDependencies") ) { return get_tangentDependencies(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_tangentDependencies") ) { return _tangentDependencies; }
		if (HX_FIELD_EQ(inName,"_viewDirDependencies") ) { return _viewDirDependencies; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"globalPosDependencies") ) { return get_globalPosDependencies(); }
		if (HX_FIELD_EQ(inName,"usesGlobalPosFragment") ) { return get_usesGlobalPosFragment(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_normalDependencies") ) { return get_normalDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"_usesGlobalPosFragment") ) { return _usesGlobalPosFragment; }
		if (HX_FIELD_EQ(inName,"_globalPosDependencies") ) { return _globalPosDependencies; }
		if (HX_FIELD_EQ(inName,"projectionDependencies") ) { return get_projectionDependencies(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_viewDirDependencies") ) { return get_viewDirDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tangentDependencies") ) { return get_tangentDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"_projectionDependencies") ) { return _projectionDependencies; }
		if (HX_FIELD_EQ(inName,"secondaryUVDependencies") ) { return get_secondaryUVDependencies(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_secondaryUVDependencies") ) { return _secondaryUVDependencies; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"addWorldSpaceDependencies") ) { return addWorldSpaceDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_globalPosDependencies") ) { return get_globalPosDependencies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_usesGlobalPosFragment") ) { return get_usesGlobalPosFragment_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_projectionDependencies") ) { return get_projectionDependencies_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_secondaryUVDependencies") ) { return get_secondaryUVDependencies_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodDependencyCounter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvDependencies") ) { _uvDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lightSourceMask") ) { _lightSourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_normalDependencies") ) { _normalDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_tangentDependencies") ) { _tangentDependencies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewDirDependencies") ) { _viewDirDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_usesGlobalPosFragment") ) { _usesGlobalPosFragment=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalPosDependencies") ) { _globalPosDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_projectionDependencies") ) { _projectionDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_secondaryUVDependencies") ) { _secondaryUVDependencies=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodDependencyCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lightSourceMask"));
	outFields->push(HX_CSTRING("_numPointLights"));
	outFields->push(HX_CSTRING("_usesGlobalPosFragment"));
	outFields->push(HX_CSTRING("_tangentDependencies"));
	outFields->push(HX_CSTRING("_globalPosDependencies"));
	outFields->push(HX_CSTRING("_secondaryUVDependencies"));
	outFields->push(HX_CSTRING("_uvDependencies"));
	outFields->push(HX_CSTRING("_viewDirDependencies"));
	outFields->push(HX_CSTRING("_normalDependencies"));
	outFields->push(HX_CSTRING("_projectionDependencies"));
	outFields->push(HX_CSTRING("globalPosDependencies"));
	outFields->push(HX_CSTRING("secondaryUVDependencies"));
	outFields->push(HX_CSTRING("uvDependencies"));
	outFields->push(HX_CSTRING("viewDirDependencies"));
	outFields->push(HX_CSTRING("normalDependencies"));
	outFields->push(HX_CSTRING("projectionDependencies"));
	outFields->push(HX_CSTRING("usesGlobalPosFragment"));
	outFields->push(HX_CSTRING("tangentDependencies"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addWorldSpaceDependencies"),
	HX_CSTRING("get_globalPosDependencies"),
	HX_CSTRING("get_secondaryUVDependencies"),
	HX_CSTRING("get_uvDependencies"),
	HX_CSTRING("get_viewDirDependencies"),
	HX_CSTRING("get_normalDependencies"),
	HX_CSTRING("get_projectionDependencies"),
	HX_CSTRING("get_usesGlobalPosFragment"),
	HX_CSTRING("get_tangentDependencies"),
	HX_CSTRING("includeMethodVO"),
	HX_CSTRING("setPositionedLights"),
	HX_CSTRING("reset"),
	HX_CSTRING("_lightSourceMask"),
	HX_CSTRING("_numPointLights"),
	HX_CSTRING("_usesGlobalPosFragment"),
	HX_CSTRING("_tangentDependencies"),
	HX_CSTRING("_globalPosDependencies"),
	HX_CSTRING("_secondaryUVDependencies"),
	HX_CSTRING("_uvDependencies"),
	HX_CSTRING("_viewDirDependencies"),
	HX_CSTRING("_normalDependencies"),
	HX_CSTRING("_projectionDependencies"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodDependencyCounter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodDependencyCounter_obj::__mClass,"__mClass");
};

Class MethodDependencyCounter_obj::__mClass;

void MethodDependencyCounter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.MethodDependencyCounter"), hx::TCanCast< MethodDependencyCounter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MethodDependencyCounter_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
