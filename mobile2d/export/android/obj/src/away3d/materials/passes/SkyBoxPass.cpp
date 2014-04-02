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
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SkyBoxPass
#include <away3d/materials/passes/SkyBoxPass.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void SkyBoxPass_obj::__construct()
{
HX_STACK_PUSH("SkyBoxPass::new","away3d/materials/passes/SkyBoxPass.hx",29);
{
	HX_STACK_LINE(30)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->set_mipmap(false);
	HX_STACK_LINE(32)
	this->_numUsedTextures = (int)1;
	HX_STACK_LINE(33)
	Array< Float > tmp = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->_vertexData = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),tmp);
}
;
	return null();
}

SkyBoxPass_obj::~SkyBoxPass_obj() { }

Dynamic SkyBoxPass_obj::__CreateEmpty() { return  new SkyBoxPass_obj; }
hx::ObjectPtr< SkyBoxPass_obj > SkyBoxPass_obj::__new()
{  hx::ObjectPtr< SkyBoxPass_obj > result = new SkyBoxPass_obj();
	result->__construct();
	return result;}

Dynamic SkyBoxPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkyBoxPass_obj > result = new SkyBoxPass_obj();
	result->__construct();
	return result;}

Void SkyBoxPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("SkyBoxPass::activate","away3d/materials/passes/SkyBoxPass.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(100)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(101)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(102)
		context->setDepthTest(false,(int)513);
		HX_STACK_LINE(103)
		context->setTextureAt((int)0,this->_cubeTexture->getTextureForStage3D(stage3DProxy));
	}
return null();
}


Void SkyBoxPass_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("SkyBoxPass::render","away3d/materials/passes/SkyBoxPass.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(83)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(84)
		::flash::geom::Vector3D pos = camera->get_scenePosition();		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(85)
		this->_vertexData[(int)0] = pos->x;
		HX_STACK_LINE(86)
		this->_vertexData[(int)1] = pos->y;
		HX_STACK_LINE(87)
		this->_vertexData[(int)2] = pos->z;
		HX_STACK_LINE(88)
		this->_vertexData[(int)4] = this->_vertexData[(int)5] = this->_vertexData[(int)6] = (Float(camera->get_lens()->get_far()) / Float(::Math_obj::sqrt((int)3)));
		HX_STACK_LINE(89)
		context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,viewProjection,true);
		HX_STACK_LINE(90)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)4,this->_vertexData,(int)2);
		HX_STACK_LINE(91)
		renderable->activateVertexBuffer((int)0,stage3DProxy);
		HX_STACK_LINE(92)
		context->drawTriangles(renderable->getIndexBuffer(stage3DProxy),(int)0,renderable->get_numTriangles());
	}
return null();
}


::String SkyBoxPass_obj::getFragmentCode( ::String animationCode){
	HX_STACK_PUSH("SkyBoxPass::getFragmentCode","away3d/materials/passes/SkyBoxPass.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animationCode,"animationCode");
	HX_STACK_LINE(63)
	::String format;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(64)
	::flash::display3D::Context3DTextureFormat _sw2_ = this->_cubeTexture->get_format();		HX_STACK_VAR(_sw2_,"_sw2_");
	HX_STACK_LINE(65)
	{
		::flash::display3D::Context3DTextureFormat _switch_1 = (_sw2_);
		switch((_switch_1)->GetIndex()){
			case 1: {
				HX_STACK_LINE(66)
				format = HX_CSTRING("dxt1,");
			}
			;break;
			case 2: {
				HX_STACK_LINE(68)
				format = HX_CSTRING("dxt5,");
			}
			;break;
			default: {
				HX_STACK_LINE(70)
				format = HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(73)
	::String mip = HX_CSTRING(",mipnone");		HX_STACK_VAR(mip,"mip");
	HX_STACK_LINE(74)
	if ((this->_cubeTexture->get_hasMipMaps())){
		HX_STACK_LINE(74)
		mip = HX_CSTRING(",miplinear");
	}
	HX_STACK_LINE(75)
	return (((((HX_CSTRING("tex ft0, v0, fs0 <cube,") + format) + HX_CSTRING("linear,clamp")) + mip) + HX_CSTRING(">\t\n")) + HX_CSTRING("mov oc, ft0\t\t\t\t\t\t\t\n"));
}


::String SkyBoxPass_obj::getVertexCode( ){
	HX_STACK_PUSH("SkyBoxPass::getVertexCode","away3d/materials/passes/SkyBoxPass.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return (((HX_CSTRING("mul vt0, va0, vc5\t\t\n") + HX_CSTRING("add vt0, vt0, vc4\t\t\n")) + HX_CSTRING("m44 op, vt0, vc0\t\t\n")) + HX_CSTRING("mov v0, va0\n"));
}


::away3d::textures::CubeTextureBase SkyBoxPass_obj::set_cubeTexture( ::away3d::textures::CubeTextureBase value){
	HX_STACK_PUSH("SkyBoxPass::set_cubeTexture","away3d/materials/passes/SkyBoxPass.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(46)
	this->_cubeTexture = value;
	HX_STACK_LINE(47)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SkyBoxPass_obj,set_cubeTexture,return )

::away3d::textures::CubeTextureBase SkyBoxPass_obj::get_cubeTexture( ){
	HX_STACK_PUSH("SkyBoxPass::get_cubeTexture","away3d/materials/passes/SkyBoxPass.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return this->_cubeTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(SkyBoxPass_obj,get_cubeTexture,return )


SkyBoxPass_obj::SkyBoxPass_obj()
{
}

void SkyBoxPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkyBoxPass);
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_MEMBER_NAME(_cubeTexture,"_cubeTexture");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkyBoxPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
	HX_VISIT_MEMBER_NAME(_cubeTexture,"_cubeTexture");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkyBoxPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return _vertexData; }
		if (HX_FIELD_EQ(inName,"cubeTexture") ) { return get_cubeTexture(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cubeTexture") ) { return _cubeTexture; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cubeTexture") ) { return set_cubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cubeTexture") ) { return get_cubeTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkyBoxPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cubeTexture") ) { return set_cubeTexture(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cubeTexture") ) { _cubeTexture=inValue.Cast< ::away3d::textures::CubeTextureBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkyBoxPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_vertexData"));
	outFields->push(HX_CSTRING("_cubeTexture"));
	outFields->push(HX_CSTRING("cubeTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("activate"),
	HX_CSTRING("render"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("set_cubeTexture"),
	HX_CSTRING("get_cubeTexture"),
	HX_CSTRING("_vertexData"),
	HX_CSTRING("_cubeTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkyBoxPass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkyBoxPass_obj::__mClass,"__mClass");
};

Class SkyBoxPass_obj::__mClass;

void SkyBoxPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.SkyBoxPass"), hx::TCanCast< SkyBoxPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkyBoxPass_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
