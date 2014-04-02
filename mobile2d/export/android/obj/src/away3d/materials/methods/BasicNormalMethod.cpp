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
#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#include <away3d/materials/methods/BasicNormalMethod.h>
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

Void BasicNormalMethod_obj::__construct()
{
HX_STACK_PUSH("BasicNormalMethod::new","away3d/materials/methods/BasicNormalMethod.hx",24);
{
	HX_STACK_LINE(24)
	super::__construct();
}
;
	return null();
}

BasicNormalMethod_obj::~BasicNormalMethod_obj() { }

Dynamic BasicNormalMethod_obj::__CreateEmpty() { return  new BasicNormalMethod_obj; }
hx::ObjectPtr< BasicNormalMethod_obj > BasicNormalMethod_obj::__new()
{  hx::ObjectPtr< BasicNormalMethod_obj > result = new BasicNormalMethod_obj();
	result->__construct();
	return result;}

Dynamic BasicNormalMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicNormalMethod_obj > result = new BasicNormalMethod_obj();
	result->__construct();
	return result;}

::String BasicNormalMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("BasicNormalMethod::getFragmentCode","away3d/materials/methods/BasicNormalMethod.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(108)
	this->_normalTextureRegister = regCache->getFreeTextureReg();
	HX_STACK_LINE(109)
	vo->texturesIndex = this->_normalTextureRegister->get_index();
	HX_STACK_LINE(110)
	return ((((((((((((this->getTex2DSampleCode(vo,targetReg,this->_normalTextureRegister,this->_texture,null(),null()) + HX_CSTRING("sub ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_CSTRING(".xxx\t\n")) + HX_CSTRING("nrm ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz, ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(".xyz\t\t\t\t\t\t\t\n"));
}


HX_DEFINE_DYNAMIC_FUNC3(BasicNormalMethod_obj,getFragmentCode,return )

Void BasicNormalMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("BasicNormalMethod::activate","away3d/materials/methods/BasicNormalMethod.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(99)
		if (((vo->texturesIndex >= (int)0))){
			HX_STACK_LINE(100)
			stage3DProxy->_context3D->setTextureAt(vo->texturesIndex,this->_texture->getTextureForStage3D(stage3DProxy));
		}
	}
return null();
}


Void BasicNormalMethod_obj::dispose( ){
{
		HX_STACK_PUSH("BasicNormalMethod::dispose","away3d/materials/methods/BasicNormalMethod.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		if (((this->_texture != null()))){
			HX_STACK_LINE(92)
			this->_texture = null();
		}
	}
return null();
}


Void BasicNormalMethod_obj::cleanCompilationData( ){
{
		HX_STACK_PUSH("BasicNormalMethod::cleanCompilationData","away3d/materials/methods/BasicNormalMethod.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		this->super::cleanCompilationData();
		HX_STACK_LINE(84)
		this->_normalTextureRegister = null();
	}
return null();
}


::away3d::textures::Texture2DBase BasicNormalMethod_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("BasicNormalMethod::set_normalMap","away3d/materials/methods/BasicNormalMethod.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(70)
	if (((bool((hx::TCast< Bool >::cast((value != null())) != this->_useTexture)) || bool((bool((bool((value != null())) && bool((this->_texture != null())))) && bool(((bool((value->get_hasMipMaps() != this->_texture->get_hasMipMaps())) || bool((value->get_format() != this->_texture->get_format())))))))))){
		HX_STACK_LINE(70)
		this->invalidateShaderProgram();
	}
	HX_STACK_LINE(73)
	this->_useTexture = hx::TCast< Bool >::cast((value != null()));
	HX_STACK_LINE(74)
	this->_texture = value;
	HX_STACK_LINE(75)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicNormalMethod_obj,set_normalMap,return )

::away3d::textures::Texture2DBase BasicNormalMethod_obj::get_normalMap( ){
	HX_STACK_PUSH("BasicNormalMethod::get_normalMap","away3d/materials/methods/BasicNormalMethod.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_LINE(65)
	return this->_texture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_normalMap,return )

Void BasicNormalMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
{
		HX_STACK_PUSH("BasicNormalMethod::copyFrom","away3d/materials/methods/BasicNormalMethod.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(57)
		this->set_normalMap((hx::TCast< away3d::materials::methods::BasicNormalMethod >::cast(method))->get_normalMap());
	}
return null();
}


bool BasicNormalMethod_obj::get_hasOutput( ){
	HX_STACK_PUSH("BasicNormalMethod::get_hasOutput","away3d/materials/methods/BasicNormalMethod.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->_useTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_hasOutput,return )

bool BasicNormalMethod_obj::get_tangentSpace( ){
	HX_STACK_PUSH("BasicNormalMethod::get_tangentSpace","away3d/materials/methods/BasicNormalMethod.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_tangentSpace,return )

Void BasicNormalMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
{
		HX_STACK_PUSH("BasicNormalMethod::initVO","away3d/materials/methods/BasicNormalMethod.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_LINE(32)
		vo->needsUV = hx::TCast< Bool >::cast((this->_texture != null()));
	}
return null();
}



BasicNormalMethod_obj::BasicNormalMethod_obj()
{
}

void BasicNormalMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicNormalMethod);
	HX_MARK_MEMBER_NAME(_normalTextureRegister,"_normalTextureRegister");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicNormalMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_normalTextureRegister,"_normalTextureRegister");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BasicNormalMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return initVO_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"_texture") ) { return _texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { return get_normalMap(); }
		if (HX_FIELD_EQ(inName,"hasOutput") ) { return get_hasOutput(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return _useTexture; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tangentSpace") ) { return get_tangentSpace(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return set_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return get_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasOutput") ) { return get_hasOutput_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_tangentSpace") ) { return get_tangentSpace_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return cleanCompilationData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_normalTextureRegister") ) { return _normalTextureRegister; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicNormalMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { return set_normalMap(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_normalTextureRegister") ) { _normalTextureRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicNormalMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_normalTextureRegister"));
	outFields->push(HX_CSTRING("_useTexture"));
	outFields->push(HX_CSTRING("_texture"));
	outFields->push(HX_CSTRING("normalMap"));
	outFields->push(HX_CSTRING("hasOutput"));
	outFields->push(HX_CSTRING("tangentSpace"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("activate"),
	HX_CSTRING("dispose"),
	HX_CSTRING("cleanCompilationData"),
	HX_CSTRING("set_normalMap"),
	HX_CSTRING("get_normalMap"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("get_hasOutput"),
	HX_CSTRING("get_tangentSpace"),
	HX_CSTRING("initVO"),
	HX_CSTRING("_normalTextureRegister"),
	HX_CSTRING("_useTexture"),
	HX_CSTRING("_texture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicNormalMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicNormalMethod_obj::__mClass,"__mClass");
};

Class BasicNormalMethod_obj::__mClass;

void BasicNormalMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.BasicNormalMethod"), hx::TCanCast< BasicNormalMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicNormalMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
