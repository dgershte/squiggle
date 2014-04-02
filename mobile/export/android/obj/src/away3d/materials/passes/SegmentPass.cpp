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
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
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
#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#include <away3d/materials/passes/SegmentPass.h>
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
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void SegmentPass_obj::__construct(Float thickness)
{
HX_STACK_PUSH("SegmentPass::new","away3d/materials/passes/SegmentPass.hx",30);
{
	HX_STACK_LINE(31)
	this->_constants = ::flash::_Vector::Vector_Impl__obj::_new((int)4,true);
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		Dynamic array = this->_constants;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(32)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(32)
		while((((c)++ < (int)4))){
			HX_STACK_LINE(32)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(32)
		array;
	}
	HX_STACK_LINE(33)
	this->_calcMatrix = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(34)
	this->_thickness = thickness;
	HX_STACK_LINE(35)
	this->_constants[(int)1] = (Float((int)1) / Float((int)255));
	HX_STACK_LINE(36)
	super::__construct(null());
}
;
	return null();
}

SegmentPass_obj::~SegmentPass_obj() { }

Dynamic SegmentPass_obj::__CreateEmpty() { return  new SegmentPass_obj; }
hx::ObjectPtr< SegmentPass_obj > SegmentPass_obj::__new(Float thickness)
{  hx::ObjectPtr< SegmentPass_obj > result = new SegmentPass_obj();
	result->__construct(thickness);
	return result;}

Dynamic SegmentPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SegmentPass_obj > result = new SegmentPass_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SegmentPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SegmentPass::deactivate","away3d/materials/passes/SegmentPass.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(173)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(174)
		context->setVertexBufferAt((int)0,null(),null(),null());
		HX_STACK_LINE(175)
		context->setVertexBufferAt((int)1,null(),null(),null());
		HX_STACK_LINE(176)
		context->setVertexBufferAt((int)2,null(),null(),null());
		HX_STACK_LINE(177)
		context->setVertexBufferAt((int)3,null(),null(),null());
	}
return null();
}


Void SegmentPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("SegmentPass::activate","away3d/materials/passes/SegmentPass.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(155)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(156)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(157)
		if (((stage3DProxy->get_scissorRect() != null()))){
			HX_STACK_LINE(157)
			this->_constants[(int)0] = (Float(this->_thickness) / Float(::Math_obj::min(stage3DProxy->get_scissorRect()->width,stage3DProxy->get_scissorRect()->height)));
		}
		else{
			HX_STACK_LINE(158)
			this->_constants[(int)0] = (Float(this->_thickness) / Float(::Math_obj::min(stage3DProxy->get_width(),stage3DProxy->get_height())));
		}
		HX_STACK_LINE(160)
		this->_constants[(int)2] = camera->get_lens()->get_near();
		HX_STACK_LINE(161)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)5,::away3d::materials::passes::SegmentPass_obj::ONE_VECTOR,null());
		HX_STACK_LINE(162)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)6,::away3d::materials::passes::SegmentPass_obj::FRONT_VECTOR,null());
		HX_STACK_LINE(163)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)7,this->_constants,null());
		HX_STACK_LINE(165)
		context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,camera->get_lens()->get_matrix(),true);
	}
return null();
}


Void SegmentPass_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("SegmentPass::render","away3d/materials/passes/SegmentPass.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(135)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(136)
		this->_calcMatrix->copyFrom(renderable->get_sourceEntity()->get_sceneTransform());
		HX_STACK_LINE(137)
		this->_calcMatrix->append(camera->get_inverseSceneTransform());
		HX_STACK_LINE(138)
		int subSetCount = (hx::TCast< away3d::entities::SegmentSet >::cast(renderable))->get_subSetCount();		HX_STACK_VAR(subSetCount,"subSetCount");
		HX_STACK_LINE(139)
		if (((hx::TCast< away3d::entities::SegmentSet >::cast(renderable))->get_hasData())){
			HX_STACK_LINE(140)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(141)
			while(((i < subSetCount))){
				HX_STACK_LINE(142)
				renderable->activateVertexBuffer(i,stage3DProxy);
				HX_STACK_LINE(143)
				context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)8,this->_calcMatrix,true);
				HX_STACK_LINE(144)
				context->drawTriangles(renderable->getIndexBuffer(stage3DProxy),(int)0,renderable->get_numTriangles());
				HX_STACK_LINE(145)
				++(i);
			}
		}
	}
return null();
}


::String SegmentPass_obj::getFragmentCode( ::String animationCode){
	HX_STACK_PUSH("SegmentPass::getFragmentCode","away3d/materials/passes/SegmentPass.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animationCode,"animationCode");
	HX_STACK_LINE(125)
	return HX_CSTRING("mov oc, v0\n");
}


::String SegmentPass_obj::getVertexCode( ){
	HX_STACK_PUSH("SegmentPass::getVertexCode","away3d/materials/passes/SegmentPass.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return (((((((((((((((((((((((((((((HX_CSTRING("m44 vt0, va0, vc8\t\t\t\n") + HX_CSTRING("m44 vt1, va1, vc8\t\t\t\n")) + HX_CSTRING("sub vt2, vt1, vt0 \t\t\t\n")) + HX_CSTRING("slt vt5.x, vt0.z, vc7.z\t\t\t\n")) + HX_CSTRING("sub vt5.y, vc5.x, vt5.x\t\t\t\n")) + HX_CSTRING("add vt4.x, vt0.z, vc7.z\t\t\t\n")) + HX_CSTRING("sub vt4.y, vt0.z, vt1.z\t\t\t\n")) + HX_CSTRING("seq vt4.z, vt4.y vc6.x\t\t\t\n")) + HX_CSTRING("add vt4.y, vt4.y, vt4.z\t\t\t\n")) + HX_CSTRING("div vt4.z, vt4.x, vt4.y\t\t\t\n")) + HX_CSTRING("mul vt4.xyz, vt4.zzz, vt2.xyz\t\n")) + HX_CSTRING("add vt3.xyz, vt0.xyz, vt4.xyz\t\n")) + HX_CSTRING("mov vt3.w, vc5.x\t\t\t\n")) + HX_CSTRING("mul vt0, vt0, vt5.yyyy\t\t\t\n")) + HX_CSTRING("mul vt3, vt3, vt5.xxxx\t\t\t\n")) + HX_CSTRING("add vt0, vt0, vt3\t\t\t\t\n")) + HX_CSTRING("sub vt2, vt1, vt0 \t\t\t\n")) + HX_CSTRING("nrm vt2.xyz, vt2.xyz\t\t\t\n")) + HX_CSTRING("nrm vt5.xyz, vt0.xyz\t\t\t\n")) + HX_CSTRING("mov vt5.w, vc5.x\t\t\t\t\n")) + HX_CSTRING("crs vt3.xyz, vt2, vt5\t\t\t\n")) + HX_CSTRING("nrm vt3.xyz, vt3.xyz\t\t\t\n")) + HX_CSTRING("mul vt3.xyz, vt3.xyz, va2.xxx\t\n")) + HX_CSTRING("mov vt3.w, vc5.x\t\t\t\n")) + HX_CSTRING("dp3 vt4.x, vt0, vc6\t\t\t\n")) + HX_CSTRING("mul vt4.x, vt4.x, vc7.x\t\t\t\n")) + HX_CSTRING("mul vt3.xyz, vt3.xyz, vt4.xxx\t\n")) + HX_CSTRING("add vt0.xyz, vt0.xyz, vt3.xyz\t\n")) + HX_CSTRING("m44 op, vt0, vc0\t\t\t\n")) + HX_CSTRING("mov v0, va3\t\t\t\t\n"));
}


Array< Float > SegmentPass_obj::ONE_VECTOR;

Array< Float > SegmentPass_obj::FRONT_VECTOR;


SegmentPass_obj::SegmentPass_obj()
{
}

void SegmentPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentPass);
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	HX_MARK_MEMBER_NAME(_calcMatrix,"_calcMatrix");
	HX_MARK_MEMBER_NAME(_constants,"_constants");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	HX_VISIT_MEMBER_NAME(_calcMatrix,"_calcMatrix");
	HX_VISIT_MEMBER_NAME(_constants,"_constants");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SegmentPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ONE_VECTOR") ) { return ONE_VECTOR; }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return _thickness; }
		if (HX_FIELD_EQ(inName,"_constants") ) { return _constants; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_calcMatrix") ) { return _calcMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FRONT_VECTOR") ) { return FRONT_VECTOR; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SegmentPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ONE_VECTOR") ) { ONE_VECTOR=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_constants") ) { _constants=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_calcMatrix") ) { _calcMatrix=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FRONT_VECTOR") ) { FRONT_VECTOR=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegmentPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_thickness"));
	outFields->push(HX_CSTRING("_calcMatrix"));
	outFields->push(HX_CSTRING("_constants"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ONE_VECTOR"),
	HX_CSTRING("FRONT_VECTOR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("deactivate"),
	HX_CSTRING("activate"),
	HX_CSTRING("render"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("_thickness"),
	HX_CSTRING("_calcMatrix"),
	HX_CSTRING("_constants"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegmentPass_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SegmentPass_obj::ONE_VECTOR,"ONE_VECTOR");
	HX_MARK_MEMBER_NAME(SegmentPass_obj::FRONT_VECTOR,"FRONT_VECTOR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegmentPass_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SegmentPass_obj::ONE_VECTOR,"ONE_VECTOR");
	HX_VISIT_MEMBER_NAME(SegmentPass_obj::FRONT_VECTOR,"FRONT_VECTOR");
};

Class SegmentPass_obj::__mClass;

void SegmentPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.SegmentPass"), hx::TCanCast< SegmentPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SegmentPass_obj::__boot()
{
	ONE_VECTOR= ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1));
	FRONT_VECTOR= ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)-1).Add((int)0));
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
