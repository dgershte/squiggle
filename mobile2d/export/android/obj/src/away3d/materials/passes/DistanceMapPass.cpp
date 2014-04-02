#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#include <away3d/materials/passes/DistanceMapPass.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void DistanceMapPass_obj::__construct()
{
HX_STACK_PUSH("DistanceMapPass::new","away3d/materials/passes/DistanceMapPass.hx",33);
{
	HX_STACK_LINE(34)
	super::__construct(null());
	HX_STACK_LINE(35)
	this->_fragmentData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< Float >::__new().Add(1.0).Add(255.0).Add(65025.0).Add(16581375.0).Add((Float(1.0) / Float(255.0))).Add((Float(1.0) / Float(255.0))).Add((Float(1.0) / Float(255.0))).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0));
	HX_STACK_LINE(36)
	this->_vertexData = ::flash::_Vector::Vector_Impl__obj::_new((int)4,true);
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		Dynamic array = this->_vertexData;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(37)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(37)
		while((((c)++ < (int)4))){
			HX_STACK_LINE(37)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(37)
		array;
	}
	HX_STACK_LINE(38)
	this->_vertexData[(int)3] = (int)1;
	HX_STACK_LINE(39)
	this->_numUsedVertexConstants = (int)9;
}
;
	return null();
}

DistanceMapPass_obj::~DistanceMapPass_obj() { }

Dynamic DistanceMapPass_obj::__CreateEmpty() { return  new DistanceMapPass_obj; }
hx::ObjectPtr< DistanceMapPass_obj > DistanceMapPass_obj::__new()
{  hx::ObjectPtr< DistanceMapPass_obj > result = new DistanceMapPass_obj();
	result->__construct();
	return result;}

Dynamic DistanceMapPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DistanceMapPass_obj > result = new DistanceMapPass_obj();
	result->__construct();
	return result;}

Void DistanceMapPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("DistanceMapPass::activate","away3d/materials/passes/DistanceMapPass.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(155)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(156)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(157)
		Float f = camera->get_lens()->get_far();		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(158)
		f = (Float((int)1) / Float(((((int)2 * f) * f))));
		HX_STACK_LINE(160)
		this->_fragmentData[(int)0] = f;
		HX_STACK_LINE(161)
		this->_fragmentData[(int)1] = (255.0 * f);
		HX_STACK_LINE(162)
		this->_fragmentData[(int)2] = (65025.0 * f);
		HX_STACK_LINE(163)
		this->_fragmentData[(int)3] = (16581375.0 * f);
		HX_STACK_LINE(164)
		if (((this->_alphaThreshold > (int)0))){
			HX_STACK_LINE(165)
			context->setTextureAt((int)0,this->_alphaMask->getTextureForStage3D(stage3DProxy));
			HX_STACK_LINE(166)
			context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_fragmentData,(int)3);
		}
		else{
			HX_STACK_LINE(169)
			context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_fragmentData,(int)2);
		}
	}
return null();
}


Void DistanceMapPass_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("DistanceMapPass::render","away3d/materials/passes/DistanceMapPass.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(132)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(133)
		::flash::geom::Vector3D pos = camera->get_scenePosition();		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(134)
		this->_vertexData[(int)0] = pos->x;
		HX_STACK_LINE(135)
		this->_vertexData[(int)1] = pos->y;
		HX_STACK_LINE(136)
		this->_vertexData[(int)2] = pos->z;
		HX_STACK_LINE(137)
		this->_vertexData[(int)3] = (int)1;
		HX_STACK_LINE(138)
		::flash::geom::Matrix3D sceneTransform = renderable->getRenderSceneTransform(camera);		HX_STACK_VAR(sceneTransform,"sceneTransform");
		HX_STACK_LINE(139)
		context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)5,sceneTransform,true);
		HX_STACK_LINE(140)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)9,this->_vertexData,(int)1);
		HX_STACK_LINE(141)
		if (((this->_alphaThreshold > (int)0))){
			HX_STACK_LINE(141)
			renderable->activateUVBuffer((int)1,stage3DProxy);
		}
		HX_STACK_LINE(142)
		::flash::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(143)
		matrix->copyFrom(sceneTransform);
		HX_STACK_LINE(144)
		matrix->append(viewProjection);
		HX_STACK_LINE(145)
		context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,matrix,true);
		HX_STACK_LINE(146)
		renderable->activateVertexBuffer((int)0,stage3DProxy);
		HX_STACK_LINE(147)
		context->drawTriangles(renderable->getIndexBuffer(stage3DProxy),(int)0,renderable->get_numTriangles());
	}
return null();
}


::String DistanceMapPass_obj::getFragmentCode( ::String animationCode){
	HX_STACK_PUSH("DistanceMapPass::getFragmentCode","away3d/materials/passes/DistanceMapPass.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animationCode,"animationCode");
	HX_STACK_LINE(103)
	::String code;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(104)
	::String wrap = (  ((this->_repeat)) ? ::String(HX_CSTRING("wrap")) : ::String(HX_CSTRING("clamp")) );		HX_STACK_VAR(wrap,"wrap");
	HX_STACK_LINE(105)
	::String filter;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(106)
	if ((this->_smooth)){
		HX_STACK_LINE(106)
		filter = (  ((this->_mipmap)) ? ::String(HX_CSTRING("linear,miplinear")) : ::String(HX_CSTRING("linear")) );
	}
	else{
		HX_STACK_LINE(107)
		filter = (  ((this->_mipmap)) ? ::String(HX_CSTRING("nearest,mipnearest")) : ::String(HX_CSTRING("nearest")) );
	}
	HX_STACK_LINE(109)
	code = (((HX_CSTRING("dp3 ft2.z, v0.xyz, v0.xyz\t\n") + HX_CSTRING("mul ft0, fc0, ft2.z\t\n")) + HX_CSTRING("frc ft0, ft0\t\t\t\n")) + HX_CSTRING("mul ft1, ft0.yzww, fc1\t\n"));
	HX_STACK_LINE(110)
	if (((this->_alphaThreshold > (int)0))){
		HX_STACK_LINE(111)
		::String format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(112)
		::flash::display3D::Context3DTextureFormat _sw1_ = this->_alphaMask->get_format();		HX_STACK_VAR(_sw1_,"_sw1_");
		HX_STACK_LINE(113)
		{
			::flash::display3D::Context3DTextureFormat _switch_1 = (_sw1_);
			switch((_switch_1)->GetIndex()){
				case 1: {
					HX_STACK_LINE(114)
					format = HX_CSTRING("dxt1,");
				}
				;break;
				case 2: {
					HX_STACK_LINE(116)
					format = HX_CSTRING("dxt5,");
				}
				;break;
				default: {
					HX_STACK_LINE(118)
					format = HX_CSTRING("");
				}
			}
		}
		HX_STACK_LINE(121)
		hx::AddEq(code,(((((((HX_CSTRING("tex ft3, v1, fs0 <2d,") + filter) + HX_CSTRING(",")) + format) + wrap) + HX_CSTRING(">\n")) + HX_CSTRING("sub ft3.w, ft3.w, fc2.x\n")) + HX_CSTRING("kil ft3.w\n")));
	}
	HX_STACK_LINE(123)
	hx::AddEq(code,HX_CSTRING("sub oc, ft0, ft1\t\t\n"));
	HX_STACK_LINE(124)
	return code;
}


::String DistanceMapPass_obj::getVertexCode( ){
	HX_STACK_PUSH("DistanceMapPass::getVertexCode","away3d/materials/passes/DistanceMapPass.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	::String code;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(82)
	code = ((HX_CSTRING("m44 op, vt0, vc0\t\t\n") + HX_CSTRING("m44 vt1, vt0, vc5\t\t\n")) + HX_CSTRING("sub v0, vt1, vc9\t\t\n"));
	HX_STACK_LINE(83)
	if (((this->_alphaThreshold > (int)0))){
		HX_STACK_LINE(84)
		hx::AddEq(code,HX_CSTRING("mov v1, va1\n"));
		HX_STACK_LINE(85)
		this->_numUsedTextures = (int)1;
		HX_STACK_LINE(86)
		this->_numUsedStreams = (int)2;
	}
	else{
		HX_STACK_LINE(90)
		this->_numUsedTextures = (int)0;
		HX_STACK_LINE(91)
		this->_numUsedStreams = (int)1;
	}
	HX_STACK_LINE(94)
	return code;
}


::away3d::textures::Texture2DBase DistanceMapPass_obj::set_alphaMask( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("DistanceMapPass::set_alphaMask","away3d/materials/passes/DistanceMapPass.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(72)
	this->_alphaMask = value;
	HX_STACK_LINE(73)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceMapPass_obj,set_alphaMask,return )

::away3d::textures::Texture2DBase DistanceMapPass_obj::get_alphaMask( ){
	HX_STACK_PUSH("DistanceMapPass::get_alphaMask","away3d/materials/passes/DistanceMapPass.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return this->_alphaMask;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceMapPass_obj,get_alphaMask,return )

Float DistanceMapPass_obj::set_alphaThreshold( Float value){
	HX_STACK_PUSH("DistanceMapPass::set_alphaThreshold","away3d/materials/passes/DistanceMapPass.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(53)
	if (((value < (int)0))){
		HX_STACK_LINE(53)
		value = (int)0;
	}
	else{
		HX_STACK_LINE(54)
		if (((value > (int)1))){
			HX_STACK_LINE(54)
			value = (int)1;
		}
	}
	HX_STACK_LINE(55)
	if (((value == this->_alphaThreshold))){
		HX_STACK_LINE(55)
		return value;
	}
	HX_STACK_LINE(56)
	if (((bool((value == (int)0)) || bool((this->_alphaThreshold == (int)0))))){
		HX_STACK_LINE(56)
		this->invalidateShaderProgram(null());
	}
	HX_STACK_LINE(57)
	this->_alphaThreshold = value;
	HX_STACK_LINE(58)
	this->_fragmentData[(int)8] = this->_alphaThreshold;
	HX_STACK_LINE(59)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceMapPass_obj,set_alphaThreshold,return )

Float DistanceMapPass_obj::get_alphaThreshold( ){
	HX_STACK_PUSH("DistanceMapPass::get_alphaThreshold","away3d/materials/passes/DistanceMapPass.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_alphaThreshold;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceMapPass_obj,get_alphaThreshold,return )


DistanceMapPass_obj::DistanceMapPass_obj()
{
}

void DistanceMapPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistanceMapPass);
	HX_MARK_MEMBER_NAME(_alphaMask,"_alphaMask");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_MEMBER_NAME(_fragmentData,"_fragmentData");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DistanceMapPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alphaMask,"_alphaMask");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
	HX_VISIT_MEMBER_NAME(_fragmentData,"_fragmentData");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DistanceMapPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
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
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return _vertexData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaMask") ) { return set_alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaMask") ) { return get_alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"_fragmentData") ) { return _fragmentData; }
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

Dynamic DistanceMapPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return set_alphaMask(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { _alphaMask=inValue.Cast< ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fragmentData") ) { _fragmentData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return set_alphaThreshold(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DistanceMapPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_alphaMask"));
	outFields->push(HX_CSTRING("_alphaThreshold"));
	outFields->push(HX_CSTRING("_vertexData"));
	outFields->push(HX_CSTRING("_fragmentData"));
	outFields->push(HX_CSTRING("alphaMask"));
	outFields->push(HX_CSTRING("alphaThreshold"));
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
	HX_CSTRING("_vertexData"),
	HX_CSTRING("_fragmentData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DistanceMapPass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DistanceMapPass_obj::__mClass,"__mClass");
};

Class DistanceMapPass_obj::__mClass;

void DistanceMapPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.DistanceMapPass"), hx::TCanCast< DistanceMapPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DistanceMapPass_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
