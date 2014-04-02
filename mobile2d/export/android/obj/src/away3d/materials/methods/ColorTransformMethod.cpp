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
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#include <away3d/materials/methods/ColorTransformMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
namespace away3d{
namespace materials{
namespace methods{

Void ColorTransformMethod_obj::__construct()
{
HX_STACK_PUSH("ColorTransformMethod::new","away3d/materials/methods/ColorTransformMethod.hx",22);
{
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

ColorTransformMethod_obj::~ColorTransformMethod_obj() { }

Dynamic ColorTransformMethod_obj::__CreateEmpty() { return  new ColorTransformMethod_obj; }
hx::ObjectPtr< ColorTransformMethod_obj > ColorTransformMethod_obj::__new()
{  hx::ObjectPtr< ColorTransformMethod_obj > result = new ColorTransformMethod_obj();
	result->__construct();
	return result;}

Dynamic ColorTransformMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransformMethod_obj > result = new ColorTransformMethod_obj();
	result->__construct();
	return result;}

Void ColorTransformMethod_obj::activate( ::away3d::materials::methods::MethodVO vo,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("ColorTransformMethod::activate","away3d/materials/methods/ColorTransformMethod.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vo,"vo");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(57)
		Float inv = (Float((int)1) / Float((int)255));		HX_STACK_VAR(inv,"inv");
		HX_STACK_LINE(58)
		int index = vo->fragmentConstantsIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(59)
		Array< Float > data = vo->fragmentData;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(60)
		data[index] = this->_colorTransform->redMultiplier;
		HX_STACK_LINE(61)
		data[(index + (int)1)] = this->_colorTransform->greenMultiplier;
		HX_STACK_LINE(62)
		data[(index + (int)2)] = this->_colorTransform->blueMultiplier;
		HX_STACK_LINE(63)
		data[(index + (int)3)] = this->_colorTransform->alphaMultiplier;
		HX_STACK_LINE(64)
		data[(index + (int)4)] = (this->_colorTransform->redOffset * inv);
		HX_STACK_LINE(65)
		data[(index + (int)5)] = (this->_colorTransform->greenOffset * inv);
		HX_STACK_LINE(66)
		data[(index + (int)6)] = (this->_colorTransform->blueOffset * inv);
		HX_STACK_LINE(67)
		data[(index + (int)7)] = (this->_colorTransform->alphaOffset * inv);
	}
return null();
}


::String ColorTransformMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo,::away3d::materials::compilation::ShaderRegisterCache regCache,::away3d::materials::compilation::ShaderRegisterElement targetReg){
	HX_STACK_PUSH("ColorTransformMethod::getFragmentCode","away3d/materials/methods/ColorTransformMethod.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vo,"vo");
	HX_STACK_ARG(regCache,"regCache");
	HX_STACK_ARG(targetReg,"targetReg");
	HX_STACK_LINE(44)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(45)
	::away3d::materials::compilation::ShaderRegisterElement colorMultReg = regCache->getFreeFragmentConstant();		HX_STACK_VAR(colorMultReg,"colorMultReg");
	HX_STACK_LINE(46)
	::away3d::materials::compilation::ShaderRegisterElement colorOffsReg = regCache->getFreeFragmentConstant();		HX_STACK_VAR(colorOffsReg,"colorOffsReg");
	HX_STACK_LINE(47)
	vo->fragmentConstantsIndex = (colorMultReg->get_index() * (int)4);
	HX_STACK_LINE(48)
	hx::AddEq(code,(((((((((((((HX_CSTRING("mul ") + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + targetReg->toString()) + HX_CSTRING(", ")) + ::Std_obj::string(colorMultReg)) + HX_CSTRING("\n")) + HX_CSTRING("add ")) + ::Std_obj::string(targetReg)) + HX_CSTRING(", ")) + targetReg->toString()) + HX_CSTRING(", ")) + ::Std_obj::string(colorOffsReg)) + HX_CSTRING("\n")));
	HX_STACK_LINE(49)
	return code;
}


::flash::geom::ColorTransform ColorTransformMethod_obj::set_colorTransform( ::flash::geom::ColorTransform value){
	HX_STACK_PUSH("ColorTransformMethod::set_colorTransform","away3d/materials/methods/ColorTransformMethod.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(35)
	this->_colorTransform = value;
	HX_STACK_LINE(36)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransformMethod_obj,set_colorTransform,return )

::flash::geom::ColorTransform ColorTransformMethod_obj::get_colorTransform( ){
	HX_STACK_PUSH("ColorTransformMethod::get_colorTransform","away3d/materials/methods/ColorTransformMethod.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return this->_colorTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransformMethod_obj,get_colorTransform,return )


ColorTransformMethod_obj::ColorTransformMethod_obj()
{
}

void ColorTransformMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTransformMethod);
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTransformMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTransformMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransformMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransformMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("colorTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("activate"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("_colorTransform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransformMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransformMethod_obj::__mClass,"__mClass");
};

Class ColorTransformMethod_obj::__mClass;

void ColorTransformMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.methods.ColorTransformMethod"), hx::TCanCast< ColorTransformMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorTransformMethod_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
