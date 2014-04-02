#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
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
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
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
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
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

Void BasicAmbientMethod_obj::__construct()
{
HX_STACK_PUSH("BasicAmbientMethod::new","away3d/materials/methods/BasicAmbientMethod.hx",35);
{
	HX_STACK_LINE(36)
	this->_ambientColor = (int)16777215;
	HX_STACK_LINE(37)
	this->_ambientR = (int)0;
	HX_STACK_LINE(38)
	this->_ambientG = (int)0;
	HX_STACK_LINE(39)
	this->_ambientB = (int)0;
	HX_STACK_LINE(40)
	this->_ambient = (int)1;
	HX_STACK_LINE(41)
	this->_lightAmbientR = (int)0;
	HX_STACK_LINE(42)
	this->_lightAmbientG = (int)0;
	HX_STACK_LINE(43)
	this->_lightAmbientB = (int)0;
	HX_STACK_LINE(44)
	super::__construct();
}
;
	return null();
}

BasicAmbientMethod_obj::~BasicAmbientMethod_obj() { }

Dynamic BasicAmbientMethod_obj::__CreateEmpty() { return  new BasicAmbientMethod_obj; }
hx::ObjectPtr< BasicAmbientMethod_obj > BasicAmbientMethod_obj::__new()
{  hx::ObjectPtr< BasicAmbientMethod_obj > result = new BasicAmbientMethod_obj();
	result->__construct();
	return result;}

Dynamic BasicAmbientMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicAmbientMethod_obj > result = new BasicAmbientMethod_obj();
	result->__construct();
	return result;}

Void BasicAmbientMethod_obj::setRenderState( ::away3d::materials::methods::MethodVO vo,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("BasicAmbientMethod::setRenderState","away3d/materials/methods/BasicAmbientMethod.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(171)
		this->updateAmbient();
		HX_STACK_LINE(172)
		if ((!(this->_useTexture))){
			HX_STACK_LINE(173)
			int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(174)
			Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(175)
			data[index] = this->_ambientR;
			HX_STACK_LINE(176)
			data[(index + (int)1)] = this->_ambientG;
			HX_STACK_LINE(177)
			data[(index + (int)2)] = this->_ambientB;
		}
	}
return null();
}


Void BasicAmbientMethod_obj::updateAmbient( ){
{
		HX_STACK_PUSH("BasicAmbientMethod::updateAmbient","away3d/materials/methods/BasicAmbientMethod.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_LINE(161)
		this->_ambientR = (((Float(((int((int(this->_ambientColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) * this->_ambient) * this->_lightAmbientR);
		HX_STACK_LINE(162)
		this->_ambientG = (((Float(((int((int(this->_ambientColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) * this->_ambient) * this->_lightAmbientG);
		HX_STACK_LINE(163)
		this->_ambientB = (((Float(((int(this->_ambientColor) & int((int)255)))) / Float((int)255)) * this->_ambient) * this->_lightAmbientB);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,updateAmbient,(void))

Void BasicAmbientMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("BasicAmbientMethod::activate","away3d/materials/methods/BasicAmbientMethod.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(152)
		if ((this->_useTexture)){
			HX_STACK_LINE(153)
			stage3DProxy->_context3D->setTextureAt(vo->texturesIndex,this->_texture->getTextureForStage3D(stage3DProxy));
		}
	}
return null();
}


::String BasicAmbientMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("BasicAmbientMethod::getFragmentCode","away3d/materials/methods/BasicAmbientMethod.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(130)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(131)
	if ((this->_useTexture)){
		HX_STACK_LINE(132)
		this->_ambientInputRegister = regCache->getFreeTextureReg();
		HX_STACK_LINE(133)
		vo->texturesIndex = this->_ambientInputRegister->get_index();
		HX_STACK_LINE(134)
		hx::AddEq(code,(((((((this->getTex2DSampleCode(vo,targetReg,this->_ambientInputRegister,this->_texture,null(),null()) + HX_CSTRING("div ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".w\n")));
	}
	else{
		HX_STACK_LINE(140)
		this->_ambientInputRegister = regCache->getFreeFragmentConstant();
		HX_STACK_LINE(141)
		vo->fragmentConstantsIndex = (this->_ambientInputRegister->get_index() * (int)4);
		HX_STACK_LINE(142)
		hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + ::Std_obj::string(this->_ambientInputRegister)) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(145)
	return code;
}


HX_DEFINE_DYNAMIC_FUNC3(BasicAmbientMethod_obj,getFragmentCode,return )

Void BasicAmbientMethod_obj::cleanCompilationData( ){
{
		HX_STACK_PUSH("BasicAmbientMethod::cleanCompilationData","away3d/materials/methods/BasicAmbientMethod.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->super::cleanCompilationData();
		HX_STACK_LINE(122)
		this->_ambientInputRegister = null();
	}
return null();
}


Void BasicAmbientMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("BasicAmbientMethod::copyFrom","away3d/materials/methods/BasicAmbientMethod.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(111)
		::away3d::materials::methods::BasicAmbientMethod diff = hx::TCast< away3d::materials::methods::BasicAmbientMethod >::cast(method);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(112)
		this->set_ambient(diff->get_ambient());
		HX_STACK_LINE(113)
		this->set_ambientColor(diff->get_ambientColor());
	}
return null();
}


::away3d::textures::Texture2DBase BasicAmbientMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("BasicAmbientMethod::set_texture","away3d/materials/methods/BasicAmbientMethod.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(98)
	if (((bool((hx::TCast< Bool >::cast((value != null())) != this->_useTexture)) || bool((bool((bool((value != null())) && bool((this->_texture != null())))) && bool(((bool((value->get_hasMipMaps() != this->_texture->get_hasMipMaps())) || bool((value->get_format() != this->_texture->get_format())))))))))){
		HX_STACK_LINE(98)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(101)
	this->_useTexture = hx::TCast< Bool >::cast(value);
	HX_STACK_LINE(102)
	this->_texture = value;
	HX_STACK_LINE(103)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_texture,return )

::away3d::textures::Texture2DBase BasicAmbientMethod_obj::get_texture( ){
	HX_STACK_PUSH("BasicAmbientMethod::get_texture","away3d/materials/methods/BasicAmbientMethod.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_texture,return )

int BasicAmbientMethod_obj::set_ambientColor( int value){
	HX_STACK_PUSH("BasicAmbientMethod::set_ambientColor","away3d/materials/methods/BasicAmbientMethod.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(85)
	this->_ambientColor = value;
	HX_STACK_LINE(86)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_ambientColor,return )

int BasicAmbientMethod_obj::get_ambientColor( ){
	HX_STACK_PUSH("BasicAmbientMethod::get_ambientColor","away3d/materials/methods/BasicAmbientMethod.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return this->_ambientColor;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_ambientColor,return )

Float BasicAmbientMethod_obj::set_ambient( Float value){
	HX_STACK_PUSH("BasicAmbientMethod::set_ambient","away3d/materials/methods/BasicAmbientMethod.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(72)
	this->_ambient = value;
	HX_STACK_LINE(73)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_ambient,return )

Float BasicAmbientMethod_obj::get_ambient( ){
	HX_STACK_PUSH("BasicAmbientMethod::get_ambient","away3d/materials/methods/BasicAmbientMethod.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return this->_ambient;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_ambient,return )

Void BasicAmbientMethod_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("BasicAmbientMethod::initConstants","away3d/materials/methods/BasicAmbientMethod.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(59)
		vo->fragmentData[(vo->fragmentConstantsIndex + (int)3)] = (int)1;
	}
return null();
}


Void BasicAmbientMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("BasicAmbientMethod::initVO","away3d/materials/methods/BasicAmbientMethod.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(51)
		vo->needsUV = this->_useTexture;
	}
return null();
}



BasicAmbientMethod_obj::BasicAmbientMethod_obj()
{
}

void BasicAmbientMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicAmbientMethod);
	HX_MARK_MEMBER_NAME(_lightAmbientB,"_lightAmbientB");
	HX_MARK_MEMBER_NAME(_lightAmbientG,"_lightAmbientG");
	HX_MARK_MEMBER_NAME(_lightAmbientR,"_lightAmbientR");
	HX_MARK_MEMBER_NAME(_ambient,"_ambient");
	HX_MARK_MEMBER_NAME(_ambientB,"_ambientB");
	HX_MARK_MEMBER_NAME(_ambientG,"_ambientG");
	HX_MARK_MEMBER_NAME(_ambientR,"_ambientR");
	HX_MARK_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_MARK_MEMBER_NAME(_ambientInputRegister,"_ambientInputRegister");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicAmbientMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lightAmbientB,"_lightAmbientB");
	HX_VISIT_MEMBER_NAME(_lightAmbientG,"_lightAmbientG");
	HX_VISIT_MEMBER_NAME(_lightAmbientR,"_lightAmbientR");
	HX_VISIT_MEMBER_NAME(_ambient,"_ambient");
	HX_VISIT_MEMBER_NAME(_ambientB,"_ambientB");
	HX_VISIT_MEMBER_NAME(_ambientG,"_ambientG");
	HX_VISIT_MEMBER_NAME(_ambientR,"_ambientR");
	HX_VISIT_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_VISIT_MEMBER_NAME(_ambientInputRegister,"_ambientInputRegister");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BasicAmbientMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return get_texture(); }
		if (HX_FIELD_EQ(inName,"ambient") ) { return get_ambient(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"_ambient") ) { return _ambient; }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientB") ) { return _ambientB; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { return _ambientG; }
		if (HX_FIELD_EQ(inName,"_ambientR") ) { return _ambientR; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return set_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return get_ambient_dyn(); }
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return _useTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return get_ambientColor(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateAmbient") ) { return updateAmbient_dyn(); }
		if (HX_FIELD_EQ(inName,"initConstants") ) { return initConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { return _ambientColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRenderState") ) { return setRenderState_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightAmbientB") ) { return _lightAmbientB; }
		if (HX_FIELD_EQ(inName,"_lightAmbientG") ) { return _lightAmbientG; }
		if (HX_FIELD_EQ(inName,"_lightAmbientR") ) { return _lightAmbientR; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return set_ambientColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return get_ambientColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return cleanCompilationData_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ambientInputRegister") ) { return _ambientInputRegister; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicAmbientMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return set_texture(inValue); }
		if (HX_FIELD_EQ(inName,"ambient") ) { return set_ambient(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ambient") ) { _ambient=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientB") ) { _ambientB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { _ambientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientR") ) { _ambientR=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { return set_ambientColor(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { _ambientColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lightAmbientB") ) { _lightAmbientB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightAmbientG") ) { _lightAmbientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightAmbientR") ) { _lightAmbientR=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ambientInputRegister") ) { _ambientInputRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicAmbientMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lightAmbientB"));
	outFields->push(HX_CSTRING("_lightAmbientG"));
	outFields->push(HX_CSTRING("_lightAmbientR"));
	outFields->push(HX_CSTRING("_ambient"));
	outFields->push(HX_CSTRING("_ambientB"));
	outFields->push(HX_CSTRING("_ambientG"));
	outFields->push(HX_CSTRING("_ambientR"));
	outFields->push(HX_CSTRING("_ambientColor"));
	outFields->push(HX_CSTRING("_ambientInputRegister"));
	outFields->push(HX_CSTRING("_texture"));
	outFields->push(HX_CSTRING("_useTexture"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("ambientColor"));
	outFields->push(HX_CSTRING("ambient"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setRenderState"),
	HX_CSTRING("updateAmbient"),
	HX_CSTRING("activate"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("cleanCompilationData"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set_texture"),
	HX_CSTRING("get_texture"),
	HX_CSTRING("set_ambientColor"),
	HX_CSTRING("get_ambientColor"),
	HX_CSTRING("set_ambient"),
	HX_CSTRING("get_ambient"),
	HX_CSTRING("initConstants"),
	HX_CSTRING("initVO"),
	HX_CSTRING("_lightAmbientB"),
	HX_CSTRING("_lightAmbientG"),
	HX_CSTRING("_lightAmbientR"),
	HX_CSTRING("_ambient"),
	HX_CSTRING("_ambientB"),
	HX_CSTRING("_ambientG"),
	HX_CSTRING("_ambientR"),
	HX_CSTRING("_ambientColor"),
	HX_CSTRING("_ambientInputRegister"),
	HX_CSTRING("_texture"),
	HX_CSTRING("_useTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicAmbientMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicAmbientMethod_obj::__mClass,"__mClass");
};

Class BasicAmbientMethod_obj::__mClass;

void BasicAmbientMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.BasicAmbientMethod"), hx::TCanCast< BasicAmbientMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicAmbientMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
