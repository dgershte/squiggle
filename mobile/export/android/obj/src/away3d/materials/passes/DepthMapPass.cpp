#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
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
#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#include <away3d/materials/passes/DepthMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void DepthMapPass_obj::__construct()
{
HX_STACK_PUSH("DepthMapPass::new","away3d/materials/passes/DepthMapPass.hx",22);
{
	HX_STACK_LINE(25)
	this->_alphaThreshold = (int)0;
	HX_STACK_LINE(33)
	super::__construct(null());
	HX_STACK_LINE(34)
	this->_data = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(1.0).Add(255.0).Add(65025.0).Add(16581375.0).Add((Float(1.0) / Float(255.0))).Add((Float(1.0) / Float(255.0))).Add((Float(1.0) / Float(255.0))).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0)));
}
;
	return null();
}

DepthMapPass_obj::~DepthMapPass_obj() { }

Dynamic DepthMapPass_obj::__CreateEmpty() { return  new DepthMapPass_obj; }
hx::ObjectPtr< DepthMapPass_obj > DepthMapPass_obj::__new()
{  hx::ObjectPtr< DepthMapPass_obj > result = new DepthMapPass_obj();
	result->__construct();
	return result;}

Dynamic DepthMapPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DepthMapPass_obj > result = new DepthMapPass_obj();
	result->__construct();
	return result;}

Void DepthMapPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("DepthMapPass::activate","away3d/materials/passes/DepthMapPass.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(172)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(173)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(175)
		if (((this->_alphaThreshold > (int)0))){
			HX_STACK_LINE(176)
			context->setTextureAt((int)0,this->_alphaMask->getTextureForStage3D(stage3DProxy));
			HX_STACK_LINE(177)
			context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_data,(int)3);
		}
		else{
			HX_STACK_LINE(179)
			context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_data,(int)2);
		}
	}
return null();
}


Void DepthMapPass_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("DepthMapPass::render","away3d/materials/passes/DepthMapPass.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(155)
		if (((this->_alphaThreshold > (int)0))){
			HX_STACK_LINE(156)
			renderable->activateUVBuffer((int)1,stage3DProxy);
		}
		HX_STACK_LINE(158)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(159)
		::flash::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(160)
		matrix->copyFrom(renderable->getRenderSceneTransform(camera));
		HX_STACK_LINE(161)
		matrix->append(viewProjection);
		HX_STACK_LINE(162)
		context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,matrix,true);
		HX_STACK_LINE(163)
		renderable->activateVertexBuffer((int)0,stage3DProxy);
		HX_STACK_LINE(164)
		context->drawTriangles(renderable->getIndexBuffer(stage3DProxy),(int)0,renderable->get_numTriangles());
	}
return null();
}


::String DepthMapPass_obj::getFragmentCode( ::String code){
	HX_STACK_PUSH("DepthMapPass::getFragmentCode","away3d/materials/passes/DepthMapPass.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(code,"code");
	HX_STACK_LINE(114)
	::String wrap = (  ((this->_repeat)) ? ::String(HX_CSTRING("wrap")) : ::String(HX_CSTRING("clamp")) );		HX_STACK_VAR(wrap,"wrap");
	HX_STACK_LINE(115)
	::String filter;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(118)
	this->_mipmap = false;
	HX_STACK_LINE(119)
	if ((this->_smooth)){
		HX_STACK_LINE(120)
		filter = (  ((this->_mipmap)) ? ::String(HX_CSTRING("linear,miplinear")) : ::String(HX_CSTRING("linear")) );
	}
	else{
		HX_STACK_LINE(122)
		filter = (  ((this->_mipmap)) ? ::String(HX_CSTRING("nearest,mipnearest")) : ::String(HX_CSTRING("nearest")) );
	}
	HX_STACK_LINE(124)
	::String codeF = (((HX_CSTRING("div ft2, v0, v0.w\t\t\n") + HX_CSTRING("mul ft0, fc0, ft2.z\t\n")) + HX_CSTRING("frc ft0, ft0\t\t\t\n")) + HX_CSTRING("mul ft1, ft0.yzww, fc1\t\n"));		HX_STACK_VAR(codeF,"codeF");
	HX_STACK_LINE(130)
	if (((this->_alphaThreshold > (int)0))){
		HX_STACK_LINE(131)
		::String format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::flash::display3D::Context3DTextureFormat _g = this->_alphaMask->get_format();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			{
				::flash::display3D::Context3DTextureFormat _switch_1 = (_g);
				switch((_switch_1)->GetIndex()){
					case 1: {
						HX_STACK_LINE(133)
						format = HX_CSTRING("dxt1,");
					}
					;break;
					case 2: {
						HX_STACK_LINE(135)
						format = HX_CSTRING("dxt5,");
					}
					;break;
					default: {
						HX_STACK_LINE(137)
						format = HX_CSTRING("");
					}
				}
			}
		}
		HX_STACK_LINE(140)
		hx::AddEq(codeF,(((((((HX_CSTRING("tex ft3, v1, fs0 <2d,") + filter) + HX_CSTRING(",")) + format) + wrap) + HX_CSTRING(">\n")) + HX_CSTRING("sub ft3.w, ft3.w, fc2.x\n")) + HX_CSTRING("kil ft3.w\n")));
	}
	HX_STACK_LINE(145)
	hx::AddEq(codeF,HX_CSTRING("sub oc, ft0, ft1\t\t\n"));
	HX_STACK_LINE(147)
	return codeF;
}


::String DepthMapPass_obj::getVertexCode( ){
	HX_STACK_PUSH("DepthMapPass::getVertexCode","away3d/materials/passes/DepthMapPass.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(88)
	::String code;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(90)
	code = (HX_CSTRING("m44 vt1, vt0, vc0\t\t\n") + HX_CSTRING("mov op, vt1\t\n"));
	HX_STACK_LINE(93)
	if (((this->_alphaThreshold > (int)0))){
		HX_STACK_LINE(94)
		this->_numUsedTextures = (int)1;
		HX_STACK_LINE(95)
		this->_numUsedStreams = (int)2;
		HX_STACK_LINE(96)
		hx::AddEq(code,(HX_CSTRING("mov v0, vt1\n") + HX_CSTRING("mov v1, va1\n")));
	}
	else{
		HX_STACK_LINE(100)
		this->_numUsedTextures = (int)0;
		HX_STACK_LINE(101)
		this->_numUsedStreams = (int)1;
		HX_STACK_LINE(102)
		hx::AddEq(code,HX_CSTRING("mov v0, vt1\n"));
	}
	HX_STACK_LINE(105)
	return code;
}


::away3d::textures::Texture2DBase DepthMapPass_obj::set_alphaMask( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("DepthMapPass::set_alphaMask","away3d/materials/passes/DepthMapPass.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(79)
	this->_alphaMask = value;
	HX_STACK_LINE(80)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DepthMapPass_obj,set_alphaMask,return )

::away3d::textures::Texture2DBase DepthMapPass_obj::get_alphaMask( ){
	HX_STACK_PUSH("DepthMapPass::get_alphaMask","away3d/materials/passes/DepthMapPass.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->_alphaMask;
}


HX_DEFINE_DYNAMIC_FUNC0(DepthMapPass_obj,get_alphaMask,return )

Float DepthMapPass_obj::set_alphaThreshold( Float value){
	HX_STACK_PUSH("DepthMapPass::set_alphaThreshold","away3d/materials/passes/DepthMapPass.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(52)
	if (((value < (int)0))){
		HX_STACK_LINE(53)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(54)
		if (((value > (int)1))){
			HX_STACK_LINE(55)
			value = (int)1;
		}
	}
	HX_STACK_LINE(56)
	if (((value == this->_alphaThreshold))){
		HX_STACK_LINE(57)
		return value;
	}
	HX_STACK_LINE(59)
	if (((bool((value == (int)0)) || bool((this->_alphaThreshold == (int)0))))){
		HX_STACK_LINE(60)
		this->invalidateShaderProgram(null());
	}
	HX_STACK_LINE(62)
	this->_alphaThreshold = value;
	HX_STACK_LINE(63)
	this->_data[(int)8] = this->_alphaThreshold;
	HX_STACK_LINE(64)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DepthMapPass_obj,set_alphaThreshold,return )

Float DepthMapPass_obj::get_alphaThreshold( ){
	HX_STACK_PUSH("DepthMapPass::get_alphaThreshold","away3d/materials/passes/DepthMapPass.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_LINE(46)
	return this->_alphaThreshold;
}


HX_DEFINE_DYNAMIC_FUNC0(DepthMapPass_obj,get_alphaThreshold,return )


DepthMapPass_obj::DepthMapPass_obj()
{
}

void DepthMapPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DepthMapPass);
	HX_MARK_MEMBER_NAME(_alphaMask,"_alphaMask");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_data,"_data");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DepthMapPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alphaMask,"_alphaMask");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DepthMapPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return get_alphaMask(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { return _alphaMask; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaMask") ) { return set_alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaMask") ) { return get_alphaMask_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return get_alphaThreshold(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { return _alphaThreshold; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return set_alphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return get_alphaThreshold_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DepthMapPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return set_alphaMask(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { _alphaMask=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return set_alphaThreshold(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DepthMapPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alphaMask"));
	outFields->push(HX_CSTRING("alphaThreshold"));
	outFields->push(HX_CSTRING("_alphaMask"));
	outFields->push(HX_CSTRING("_alphaThreshold"));
	outFields->push(HX_CSTRING("_data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("activate"),
	HX_CSTRING("render"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("set_alphaMask"),
	HX_CSTRING("get_alphaMask"),
	HX_CSTRING("set_alphaThreshold"),
	HX_CSTRING("get_alphaThreshold"),
	HX_CSTRING("_alphaMask"),
	HX_CSTRING("_alphaThreshold"),
	HX_CSTRING("_data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DepthMapPass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DepthMapPass_obj::__mClass,"__mClass");
};

Class DepthMapPass_obj::__mClass;

void DepthMapPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.DepthMapPass"), hx::TCanCast< DepthMapPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DepthMapPass_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
