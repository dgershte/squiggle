#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#include <away3d/animators/data/AnimationRegisterCache.h>
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
#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#include <away3d/core/managers/AGALProgram3DCache.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DVertexBufferFormat
#include <flash/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void MaterialPassBase_obj::__construct(hx::Null< bool >  __o_renderToTexture)
{
HX_STACK_PUSH("MaterialPassBase::new","away3d/materials/passes/MaterialPassBase.hx",96);
bool renderToTexture = __o_renderToTexture.Default(false);
{
	HX_STACK_LINE(97)
	super::__construct(null());
	HX_STACK_LINE(100)
	this->_program3Ds = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		Dynamic array = this->_program3Ds;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(101)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(101)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(101)
			array->__Field(HX_CSTRING("push"),true)(null());
		}
		HX_STACK_LINE(101)
		array;
	}
	HX_STACK_LINE(102)
	this->_program3Dids = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1)));
	HX_STACK_LINE(103)
	this->_context3Ds = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		Dynamic array = this->_context3Ds;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(104)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(104)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(104)
			array->__Field(HX_CSTRING("push"),true)(null());
		}
		HX_STACK_LINE(104)
		array;
	}
	HX_STACK_LINE(105)
	this->_smooth = true;
	HX_STACK_LINE(106)
	this->_repeat = false;
	HX_STACK_LINE(107)
	this->_mipmap = true;
	HX_STACK_LINE(108)
	this->_depthCompareMode = (int)515;
	HX_STACK_LINE(110)
	this->_blendFactorSource = (int)1;
	HX_STACK_LINE(111)
	this->_blendFactorDest = (int)0;
	HX_STACK_LINE(113)
	this->_animatableAttributes = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("va0"))));
	HX_STACK_LINE(114)
	this->_animationTargetRegisters = ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("vt0"))));
	HX_STACK_LINE(115)
	this->_shadedTarget = HX_CSTRING("ft0");
	HX_STACK_LINE(117)
	this->_defaultCulling = (int)1028;
	HX_STACK_LINE(119)
	this->_writeDepth = true;
	HX_STACK_LINE(121)
	this->_renderToTexture = renderToTexture;
	HX_STACK_LINE(122)
	this->_numUsedStreams = (int)1;
	HX_STACK_LINE(123)
	this->_numUsedVertexConstants = (int)5;
}
;
	return null();
}

MaterialPassBase_obj::~MaterialPassBase_obj() { }

Dynamic MaterialPassBase_obj::__CreateEmpty() { return  new MaterialPassBase_obj; }
hx::ObjectPtr< MaterialPassBase_obj > MaterialPassBase_obj::__new(hx::Null< bool >  __o_renderToTexture)
{  hx::ObjectPtr< MaterialPassBase_obj > result = new MaterialPassBase_obj();
	result->__construct(__o_renderToTexture);
	return result;}

Dynamic MaterialPassBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialPassBase_obj > result = new MaterialPassBase_obj();
	result->__construct(inArgs[0]);
	return result;}

bool MaterialPassBase_obj::set_alphaPremultiplied( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_alphaPremultiplied","away3d/materials/passes/MaterialPassBase.hx",583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(584)
	this->_alphaPremultiplied = value;
	HX_STACK_LINE(585)
	this->invalidateShaderProgram(false);
	HX_STACK_LINE(586)
	return this->_alphaPremultiplied;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_alphaPremultiplied,return )

bool MaterialPassBase_obj::get_alphaPremultiplied( ){
	HX_STACK_PUSH("MaterialPassBase::get_alphaPremultiplied","away3d/materials/passes/MaterialPassBase.hx",578);
	HX_STACK_THIS(this);
	HX_STACK_LINE(578)
	return this->_alphaPremultiplied;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_alphaPremultiplied,return )

Void MaterialPassBase_obj::updateLights( ){
{
		HX_STACK_PUSH("MaterialPassBase::updateLights","away3d/materials/passes/MaterialPassBase.hx",568);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,updateLights,(void))

Void MaterialPassBase_obj::onLightsChange( ::flash::events::Event event){
{
		HX_STACK_PUSH("MaterialPassBase::onLightsChange","away3d/materials/passes/MaterialPassBase.hx",560);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(560)
		this->updateLights();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,onLightsChange,(void))

::away3d::materials::lightpickers::LightPickerBase MaterialPassBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
	HX_STACK_PUSH("MaterialPassBase::set_lightPicker","away3d/materials/passes/MaterialPassBase.hx",546);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(547)
	if (((this->_lightPicker != null()))){
		HX_STACK_LINE(548)
		this->_lightPicker->removeEventListener(::flash::events::Event_obj::CHANGE,this->onLightsChange_dyn(),null());
	}
	HX_STACK_LINE(549)
	this->_lightPicker = value;
	HX_STACK_LINE(550)
	if (((this->_lightPicker != null()))){
		HX_STACK_LINE(551)
		this->_lightPicker->addEventListener(::flash::events::Event_obj::CHANGE,this->onLightsChange_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(552)
	this->updateLights();
	HX_STACK_LINE(553)
	return this->_lightPicker;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_lightPicker,return )

::away3d::materials::lightpickers::LightPickerBase MaterialPassBase_obj::get_lightPicker( ){
	HX_STACK_PUSH("MaterialPassBase::get_lightPicker","away3d/materials/passes/MaterialPassBase.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_LINE(541)
	return this->_lightPicker;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_lightPicker,return )

Void MaterialPassBase_obj::updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("MaterialPassBase::updateProgram","away3d/materials/passes/MaterialPassBase.hx",495);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(496)
		::String animatorCode = HX_CSTRING("");		HX_STACK_VAR(animatorCode,"animatorCode");
		HX_STACK_LINE(497)
		::String UVAnimatorCode = HX_CSTRING("");		HX_STACK_VAR(UVAnimatorCode,"UVAnimatorCode");
		HX_STACK_LINE(498)
		::String fragmentAnimatorCode = HX_CSTRING("");		HX_STACK_VAR(fragmentAnimatorCode,"fragmentAnimatorCode");
		HX_STACK_LINE(499)
		::String vertexCode = this->getVertexCode();		HX_STACK_VAR(vertexCode,"vertexCode");
		HX_STACK_LINE(501)
		if (((bool((this->_animationSet != null())) && bool(!(this->_animationSet->get_usesCPU()))))){
			HX_STACK_LINE(502)
			animatorCode = this->_animationSet->getAGALVertexCode(hx::ObjectPtr<OBJ_>(this),this->_animatableAttributes,this->_animationTargetRegisters,stage3DProxy->get_profile());
			HX_STACK_LINE(503)
			if ((this->_needFragmentAnimation)){
				HX_STACK_LINE(504)
				fragmentAnimatorCode = this->_animationSet->getAGALFragmentCode(hx::ObjectPtr<OBJ_>(this),this->_shadedTarget,stage3DProxy->get_profile());
			}
			HX_STACK_LINE(505)
			if ((this->_needUVAnimation)){
				HX_STACK_LINE(506)
				UVAnimatorCode = this->_animationSet->getAGALUVCode(hx::ObjectPtr<OBJ_>(this),this->_UVSource,this->_UVTarget);
			}
			HX_STACK_LINE(507)
			this->_animationSet->doneAGALCode(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(509)
			int len = this->_animatableAttributes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(514)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(515)
				while(((_g < len))){
					HX_STACK_LINE(515)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(516)
					hx::AddEq(animatorCode,((((HX_CSTRING("mov ") + this->_animationTargetRegisters->__get(i1)) + HX_CSTRING(", ")) + this->_animatableAttributes->__get(i1)) + HX_CSTRING("\n")));
				}
			}
			HX_STACK_LINE(517)
			if ((this->_needUVAnimation)){
				HX_STACK_LINE(518)
				UVAnimatorCode = ((((HX_CSTRING("mov ") + this->_UVTarget) + HX_CSTRING(",")) + this->_UVSource) + HX_CSTRING("\n"));
			}
		}
		HX_STACK_LINE(521)
		vertexCode = ((animatorCode + UVAnimatorCode) + vertexCode);
		HX_STACK_LINE(523)
		::String fragmentCode = this->getFragmentCode(fragmentAnimatorCode);		HX_STACK_VAR(fragmentCode,"fragmentCode");
		HX_STACK_LINE(524)
		if ((::away3d::debug::Debug_obj::active)){
			HX_STACK_LINE(525)
			::haxe::Log_obj::trace(HX_CSTRING("Compiling AGAL Code:"),hx::SourceInfo(HX_CSTRING("MaterialPassBase.hx"),525,HX_CSTRING("away3d.materials.passes.MaterialPassBase"),HX_CSTRING("updateProgram")));
			HX_STACK_LINE(526)
			::haxe::Log_obj::trace(HX_CSTRING("--------------------"),hx::SourceInfo(HX_CSTRING("MaterialPassBase.hx"),526,HX_CSTRING("away3d.materials.passes.MaterialPassBase"),HX_CSTRING("updateProgram")));
			HX_STACK_LINE(527)
			::haxe::Log_obj::trace(vertexCode,hx::SourceInfo(HX_CSTRING("MaterialPassBase.hx"),527,HX_CSTRING("away3d.materials.passes.MaterialPassBase"),HX_CSTRING("updateProgram")));
			HX_STACK_LINE(528)
			::haxe::Log_obj::trace(HX_CSTRING("--------------------"),hx::SourceInfo(HX_CSTRING("MaterialPassBase.hx"),528,HX_CSTRING("away3d.materials.passes.MaterialPassBase"),HX_CSTRING("updateProgram")));
			HX_STACK_LINE(529)
			::haxe::Log_obj::trace(fragmentCode,hx::SourceInfo(HX_CSTRING("MaterialPassBase.hx"),529,HX_CSTRING("away3d.materials.passes.MaterialPassBase"),HX_CSTRING("updateProgram")));
		}
		HX_STACK_LINE(531)
		::away3d::core::managers::AGALProgram3DCache_obj::getInstance(stage3DProxy)->setProgram3D(hx::ObjectPtr<OBJ_>(this),vertexCode,fragmentCode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,updateProgram,(void))

Void MaterialPassBase_obj::invalidateShaderProgram( hx::Null< bool >  __o_updateMaterial){
bool updateMaterial = __o_updateMaterial.Default(true);
	HX_STACK_PUSH("MaterialPassBase::invalidateShaderProgram","away3d/materials/passes/MaterialPassBase.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateMaterial,"updateMaterial");
{
		HX_STACK_LINE(482)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(483)
			while(((_g < (int)8))){
				HX_STACK_LINE(483)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(484)
				this->_program3Ds[i1] = null();
			}
		}
		HX_STACK_LINE(486)
		if (((bool((this->_material != null())) && bool(updateMaterial)))){
			HX_STACK_LINE(487)
			this->_material->invalidatePasses(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,invalidateShaderProgram,(void))

Void MaterialPassBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("MaterialPassBase::deactivate","away3d/materials/passes/MaterialPassBase.hx",457);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(458)
		int index = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(459)
		::away3d::materials::passes::MaterialPassBase_obj::_previousUsedStreams[index] = this->_numUsedStreams;
		HX_STACK_LINE(460)
		::away3d::materials::passes::MaterialPassBase_obj::_previousUsedTexs[index] = this->_numUsedTextures;
		HX_STACK_LINE(462)
		if (((bool((this->_animationSet != null())) && bool(!(this->_animationSet->get_usesCPU()))))){
			HX_STACK_LINE(463)
			this->_animationSet->deactivate(stage3DProxy,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(465)
		if ((this->_renderToTexture)){
			HX_STACK_LINE(467)
			stage3DProxy->setRenderTarget(this->_oldTarget,this->_oldDepthStencil,this->_oldSurface);
			HX_STACK_LINE(468)
			stage3DProxy->set_scissorRect(this->_oldRect);
		}
		HX_STACK_LINE(471)
		stage3DProxy->_context3D->setDepthTest(true,(int)515);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,deactivate,(void))

Void MaterialPassBase_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("MaterialPassBase::activate","away3d/materials/passes/MaterialPassBase.hx",411);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(412)
		int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
		HX_STACK_LINE(413)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(415)
		context->setDepthTest((bool(this->_writeDepth) && bool(!(this->_enableBlending))),this->_depthCompareMode);
		HX_STACK_LINE(416)
		if ((this->_enableBlending)){
			HX_STACK_LINE(417)
			context->setBlendFactors(this->_blendFactorSource,this->_blendFactorDest);
		}
		HX_STACK_LINE(419)
		if (((bool((this->_context3Ds->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context)) || bool((this->_program3Ds->__get(contextIndex).StaticCast< ::flash::display3D::Program3D >() == null()))))){
			HX_STACK_LINE(420)
			this->_context3Ds[contextIndex] = context;
			HX_STACK_LINE(421)
			this->updateProgram(stage3DProxy);
			HX_STACK_LINE(422)
			this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null()));
		}
		HX_STACK_LINE(425)
		int prevUsed = ::away3d::materials::passes::MaterialPassBase_obj::_previousUsedStreams->__get(contextIndex);		HX_STACK_VAR(prevUsed,"prevUsed");
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g = this->_numUsedStreams;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			while(((_g < prevUsed))){
				HX_STACK_LINE(427)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(428)
				context->setVertexBufferAt(i,null(),null(),null());
			}
		}
		HX_STACK_LINE(430)
		prevUsed = ::away3d::materials::passes::MaterialPassBase_obj::_previousUsedTexs->__get(contextIndex);
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			int _g = this->_numUsedTextures;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(432)
			while(((_g < prevUsed))){
				HX_STACK_LINE(432)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(433)
				context->setTextureAt(i,null());
			}
		}
		HX_STACK_LINE(435)
		if (((bool((this->_animationSet != null())) && bool(!(this->_animationSet->get_usesCPU()))))){
			HX_STACK_LINE(436)
			this->_animationSet->activate(stage3DProxy,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(438)
		context->setProgram(this->_program3Ds->__get(contextIndex).StaticCast< ::flash::display3D::Program3D >());
		HX_STACK_LINE(440)
		context->setCulling((int)0);
		HX_STACK_LINE(442)
		if ((this->_renderToTexture)){
			HX_STACK_LINE(443)
			this->_oldTarget = stage3DProxy->get_renderTarget();
			HX_STACK_LINE(444)
			this->_oldSurface = stage3DProxy->get_renderSurfaceSelector();
			HX_STACK_LINE(445)
			this->_oldDepthStencil = stage3DProxy->get_enableDepthAndStencil();
			HX_STACK_LINE(446)
			this->_oldRect = stage3DProxy->get_scissorRect();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialPassBase_obj,activate,(void))

Void MaterialPassBase_obj::setBlendMode( ::flash::display::BlendMode value){
{
		HX_STACK_PUSH("MaterialPassBase::setBlendMode","away3d/materials/passes/MaterialPassBase.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(376)
		{
			::flash::display::BlendMode _switch_1 = (value);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_STACK_LINE(379)
					this->_blendFactorSource = (int)1;
					HX_STACK_LINE(380)
					this->_blendFactorDest = (int)0;
					HX_STACK_LINE(381)
					this->_enableBlending = false;
				}
				;break;
				case 1: {
					HX_STACK_LINE(383)
					this->_blendFactorSource = (int)770;
					HX_STACK_LINE(384)
					this->_blendFactorDest = (int)771;
					HX_STACK_LINE(385)
					this->_enableBlending = true;
				}
				;break;
				case 2: {
					HX_STACK_LINE(387)
					this->_blendFactorSource = (int)0;
					HX_STACK_LINE(388)
					this->_blendFactorDest = (int)768;
					HX_STACK_LINE(389)
					this->_enableBlending = true;
				}
				;break;
				case 7: {
					HX_STACK_LINE(391)
					this->_blendFactorSource = (int)770;
					HX_STACK_LINE(392)
					this->_blendFactorDest = (int)1;
					HX_STACK_LINE(393)
					this->_enableBlending = true;
				}
				;break;
				case 10: {
					HX_STACK_LINE(395)
					this->_blendFactorSource = (int)0;
					HX_STACK_LINE(396)
					this->_blendFactorDest = (int)770;
					HX_STACK_LINE(397)
					this->_enableBlending = true;
				}
				;break;
				default: {
					HX_STACK_LINE(398)
					hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Unsupported blend mode!"),null()));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,setBlendMode,(void))

::String MaterialPassBase_obj::getFragmentCode( ::String fragmentAnimatorCode){
	HX_STACK_PUSH("MaterialPassBase::getFragmentCode","away3d/materials/passes/MaterialPassBase.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fragmentAnimatorCode,"fragmentAnimatorCode");
	HX_STACK_LINE(361)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(362)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,getFragmentCode,return )

::String MaterialPassBase_obj::getVertexCode( ){
	HX_STACK_PUSH("MaterialPassBase::getVertexCode","away3d/materials/passes/MaterialPassBase.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(352)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(353)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,getVertexCode,return )

Void MaterialPassBase_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("MaterialPassBase::render","away3d/materials/passes/MaterialPassBase.hx",343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(343)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialPassBase_obj,render,(void))

Void MaterialPassBase_obj::updateAnimationState( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("MaterialPassBase::updateAnimationState","away3d/materials/passes/MaterialPassBase.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(333)
		renderable->__Field(HX_CSTRING("get_animator"),true)()->__Field(HX_CSTRING("setRenderState"),true)(stage3DProxy,renderable,this->_numUsedVertexConstants,this->_numUsedStreams,camera);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialPassBase_obj,updateAnimationState,(void))

bool MaterialPassBase_obj::get_needUVAnimation( ){
	HX_STACK_PUSH("MaterialPassBase::get_needUVAnimation","away3d/materials/passes/MaterialPassBase.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(323)
	return this->_needUVAnimation;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_needUVAnimation,return )

bool MaterialPassBase_obj::get_needFragmentAnimation( ){
	HX_STACK_PUSH("MaterialPassBase::get_needFragmentAnimation","away3d/materials/passes/MaterialPassBase.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_LINE(315)
	return this->_needFragmentAnimation;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_needFragmentAnimation,return )

int MaterialPassBase_obj::get_numUsedFragmentConstants( ){
	HX_STACK_PUSH("MaterialPassBase::get_numUsedFragmentConstants","away3d/materials/passes/MaterialPassBase.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->_numUsedFragmentConstants;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedFragmentConstants,return )

int MaterialPassBase_obj::get_numUsedVaryings( ){
	HX_STACK_PUSH("MaterialPassBase::get_numUsedVaryings","away3d/materials/passes/MaterialPassBase.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_LINE(301)
	return this->_numUsedVaryings;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedVaryings,return )

int MaterialPassBase_obj::get_numUsedVertexConstants( ){
	HX_STACK_PUSH("MaterialPassBase::get_numUsedVertexConstants","away3d/materials/passes/MaterialPassBase.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_LINE(295)
	return this->_numUsedVertexConstants;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedVertexConstants,return )

int MaterialPassBase_obj::get_numUsedStreams( ){
	HX_STACK_PUSH("MaterialPassBase::get_numUsedStreams","away3d/materials/passes/MaterialPassBase.hx",287);
	HX_STACK_THIS(this);
	HX_STACK_LINE(287)
	return this->_numUsedStreams;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedStreams,return )

Void MaterialPassBase_obj::dispose( ){
{
		HX_STACK_PUSH("MaterialPassBase::dispose","away3d/materials/passes/MaterialPassBase.hx",267);
		HX_STACK_THIS(this);
		HX_STACK_LINE(268)
		if (((this->_lightPicker != null()))){
			HX_STACK_LINE(269)
			this->_lightPicker->removeEventListener(::flash::events::Event_obj::CHANGE,this->onLightsChange_dyn(),null());
		}
		HX_STACK_LINE(273)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(275)
			while(((_g < (int)8))){
				HX_STACK_LINE(275)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(276)
				if (((this->_program3Ds->__get(i1).StaticCast< ::flash::display3D::Program3D >() != null()))){
					HX_STACK_LINE(277)
					::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(i1)->freeProgram3D(this->_program3Dids->__get(i1));
					HX_STACK_LINE(278)
					this->_program3Ds[i1] = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,dispose,(void))

bool MaterialPassBase_obj::get_renderToTexture( ){
	HX_STACK_PUSH("MaterialPassBase::get_renderToTexture","away3d/materials/passes/MaterialPassBase.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	return this->_renderToTexture;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_renderToTexture,return )

::away3d::animators::IAnimationSet MaterialPassBase_obj::set_animationSet( ::away3d::animators::IAnimationSet value){
	HX_STACK_PUSH("MaterialPassBase::set_animationSet","away3d/materials/passes/MaterialPassBase.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(245)
	if (((this->_animationSet == value))){
		HX_STACK_LINE(246)
		return this->_animationSet;
	}
	HX_STACK_LINE(248)
	this->_animationSet = value;
	HX_STACK_LINE(250)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(251)
	return this->_animationSet;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_animationSet,return )

::away3d::animators::IAnimationSet MaterialPassBase_obj::get_animationSet( ){
	HX_STACK_PUSH("MaterialPassBase::get_animationSet","away3d/materials/passes/MaterialPassBase.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_LINE(239)
	return this->_animationSet;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_animationSet,return )

int MaterialPassBase_obj::set_depthCompareMode( int value){
	HX_STACK_PUSH("MaterialPassBase::set_depthCompareMode","away3d/materials/passes/MaterialPassBase.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(231)
	this->_depthCompareMode = value;
	HX_STACK_LINE(232)
	return this->_depthCompareMode;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_depthCompareMode,return )

int MaterialPassBase_obj::get_depthCompareMode( ){
	HX_STACK_PUSH("MaterialPassBase::get_depthCompareMode","away3d/materials/passes/MaterialPassBase.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_LINE(225)
	return this->_depthCompareMode;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_depthCompareMode,return )

bool MaterialPassBase_obj::set_bothSides( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_bothSides","away3d/materials/passes/MaterialPassBase.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(215)
	this->_bothSides = value;
	HX_STACK_LINE(216)
	return this->_bothSides;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_bothSides,return )

bool MaterialPassBase_obj::get_bothSides( ){
	HX_STACK_PUSH("MaterialPassBase::get_bothSides","away3d/materials/passes/MaterialPassBase.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	return this->_bothSides;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_bothSides,return )

bool MaterialPassBase_obj::set_repeat( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_repeat","away3d/materials/passes/MaterialPassBase.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(198)
	if (((this->_repeat == value))){
		HX_STACK_LINE(199)
		return this->_repeat;
	}
	HX_STACK_LINE(200)
	this->_repeat = value;
	HX_STACK_LINE(201)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(202)
	return this->_repeat;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_repeat,return )

bool MaterialPassBase_obj::get_repeat( ){
	HX_STACK_PUSH("MaterialPassBase::get_repeat","away3d/materials/passes/MaterialPassBase.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	return this->_repeat;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_repeat,return )

bool MaterialPassBase_obj::set_smooth( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_smooth","away3d/materials/passes/MaterialPassBase.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(181)
	if (((this->_smooth == value))){
		HX_STACK_LINE(182)
		return this->_smooth;
	}
	HX_STACK_LINE(183)
	this->_smooth = value;
	HX_STACK_LINE(184)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(185)
	return this->_smooth;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_smooth,return )

bool MaterialPassBase_obj::get_smooth( ){
	HX_STACK_PUSH("MaterialPassBase::get_smooth","away3d/materials/passes/MaterialPassBase.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return this->_smooth;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_smooth,return )

bool MaterialPassBase_obj::set_mipmap( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_mipmap","away3d/materials/passes/MaterialPassBase.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(164)
	if (((this->_mipmap == value))){
		HX_STACK_LINE(165)
		return this->_mipmap;
	}
	HX_STACK_LINE(166)
	this->_mipmap = value;
	HX_STACK_LINE(167)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(168)
	return this->_mipmap;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_mipmap,return )

bool MaterialPassBase_obj::get_mipmap( ){
	HX_STACK_PUSH("MaterialPassBase::get_mipmap","away3d/materials/passes/MaterialPassBase.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return this->_mipmap;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_mipmap,return )

bool MaterialPassBase_obj::set_writeDepth( bool value){
	HX_STACK_PUSH("MaterialPassBase::set_writeDepth","away3d/materials/passes/MaterialPassBase.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(150)
	this->_writeDepth = value;
	HX_STACK_LINE(151)
	return this->_writeDepth;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_writeDepth,return )

bool MaterialPassBase_obj::get_writeDepth( ){
	HX_STACK_PUSH("MaterialPassBase::get_writeDepth","away3d/materials/passes/MaterialPassBase.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->_writeDepth;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_writeDepth,return )

::away3d::materials::MaterialBase MaterialPassBase_obj::set_material( ::away3d::materials::MaterialBase value){
	HX_STACK_PUSH("MaterialPassBase::set_material","away3d/materials/passes/MaterialPassBase.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(136)
	this->_material = value;
	HX_STACK_LINE(137)
	return this->_material;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_material,return )

::away3d::materials::MaterialBase MaterialPassBase_obj::get_material( ){
	HX_STACK_PUSH("MaterialPassBase::get_material","away3d/materials/passes/MaterialPassBase.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	return this->_material;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_material,return )

Array< int > MaterialPassBase_obj::_previousUsedStreams;

Array< int > MaterialPassBase_obj::_previousUsedTexs;


MaterialPassBase_obj::MaterialPassBase_obj()
{
}

void MaterialPassBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialPassBase);
	HX_MARK_MEMBER_NAME(animationRegisterCache,"animationRegisterCache");
	HX_MARK_MEMBER_NAME(_writeDepth,"_writeDepth");
	HX_MARK_MEMBER_NAME(_UVSource,"_UVSource");
	HX_MARK_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_MARK_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_MARK_MEMBER_NAME(_needFragmentAnimation,"_needFragmentAnimation");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_oldRect,"_oldRect");
	HX_MARK_MEMBER_NAME(_oldDepthStencil,"_oldDepthStencil");
	HX_MARK_MEMBER_NAME(_oldSurface,"_oldSurface");
	HX_MARK_MEMBER_NAME(_oldTarget,"_oldTarget");
	HX_MARK_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_MARK_MEMBER_NAME(_defaultCulling,"_defaultCulling");
	HX_MARK_MEMBER_NAME(_shadedTarget,"_shadedTarget");
	HX_MARK_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_MARK_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_MARK_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_MARK_MEMBER_NAME(_bothSides,"_bothSides");
	HX_MARK_MEMBER_NAME(_enableBlending,"_enableBlending");
	HX_MARK_MEMBER_NAME(_blendFactorDest,"_blendFactorDest");
	HX_MARK_MEMBER_NAME(_blendFactorSource,"_blendFactorSource");
	HX_MARK_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_MARK_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_MARK_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_MARK_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_MARK_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_MARK_MEMBER_NAME(_context3Ds,"_context3Ds");
	HX_MARK_MEMBER_NAME(_program3Dids,"_program3Dids");
	HX_MARK_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_MARK_MEMBER_NAME(_animationSet,"_animationSet");
	HX_MARK_MEMBER_NAME(_material,"_material");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MaterialPassBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationRegisterCache,"animationRegisterCache");
	HX_VISIT_MEMBER_NAME(_writeDepth,"_writeDepth");
	HX_VISIT_MEMBER_NAME(_UVSource,"_UVSource");
	HX_VISIT_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_VISIT_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_VISIT_MEMBER_NAME(_needFragmentAnimation,"_needFragmentAnimation");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_oldRect,"_oldRect");
	HX_VISIT_MEMBER_NAME(_oldDepthStencil,"_oldDepthStencil");
	HX_VISIT_MEMBER_NAME(_oldSurface,"_oldSurface");
	HX_VISIT_MEMBER_NAME(_oldTarget,"_oldTarget");
	HX_VISIT_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_VISIT_MEMBER_NAME(_defaultCulling,"_defaultCulling");
	HX_VISIT_MEMBER_NAME(_shadedTarget,"_shadedTarget");
	HX_VISIT_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_VISIT_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_VISIT_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_VISIT_MEMBER_NAME(_bothSides,"_bothSides");
	HX_VISIT_MEMBER_NAME(_enableBlending,"_enableBlending");
	HX_VISIT_MEMBER_NAME(_blendFactorDest,"_blendFactorDest");
	HX_VISIT_MEMBER_NAME(_blendFactorSource,"_blendFactorSource");
	HX_VISIT_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_VISIT_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_VISIT_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_VISIT_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_VISIT_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_VISIT_MEMBER_NAME(_context3Ds,"_context3Ds");
	HX_VISIT_MEMBER_NAME(_program3Dids,"_program3Dids");
	HX_VISIT_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_VISIT_MEMBER_NAME(_animationSet,"_animationSet");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MaterialPassBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return get_repeat(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return get_smooth(); }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return get_mipmap(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return _mipmap; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"_oldRect") ) { return _oldRect; }
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVSource") ) { return _UVSource; }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { return _UVTarget; }
		if (HX_FIELD_EQ(inName,"_material") ) { return _material; }
		if (HX_FIELD_EQ(inName,"bothSides") ) { return get_bothSides(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_repeat") ) { return set_repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { return get_repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smooth") ) { return set_smooth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { return get_smooth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return set_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mipmap") ) { return get_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_oldTarget") ) { return _oldTarget; }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { return _bothSides; }
		if (HX_FIELD_EQ(inName,"writeDepth") ) { return get_writeDepth(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_writeDepth") ) { return _writeDepth; }
		if (HX_FIELD_EQ(inName,"_oldSurface") ) { return _oldSurface; }
		if (HX_FIELD_EQ(inName,"_context3Ds") ) { return _context3Ds; }
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { return _program3Ds; }
		if (HX_FIELD_EQ(inName,"lightPicker") ) { return get_lightPicker(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLights") ) { return updateLights_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { return _lightPicker; }
		if (HX_FIELD_EQ(inName,"animationSet") ) { return get_animationSet(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateProgram") ) { return updateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bothSides") ) { return set_bothSides_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bothSides") ) { return get_bothSides_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadedTarget") ) { return _shadedTarget; }
		if (HX_FIELD_EQ(inName,"_program3Dids") ) { return _program3Dids; }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { return _animationSet; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onLightsChange") ) { return onLightsChange_dyn(); }
		if (HX_FIELD_EQ(inName,"set_writeDepth") ) { return set_writeDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_writeDepth") ) { return get_writeDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { return get_numUsedStreams(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return set_lightPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lightPicker") ) { return get_lightPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_defaultCulling") ) { return _defaultCulling; }
		if (HX_FIELD_EQ(inName,"_enableBlending") ) { return _enableBlending; }
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { return _numUsedStreams; }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { return get_needUVAnimation(); }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { return get_numUsedVaryings(); }
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return get_renderToTexture(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_animationSet") ) { return set_animationSet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animationSet") ) { return get_animationSet_dyn(); }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { return _needUVAnimation; }
		if (HX_FIELD_EQ(inName,"_oldDepthStencil") ) { return _oldDepthStencil; }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { return _renderToTexture; }
		if (HX_FIELD_EQ(inName,"_blendFactorDest") ) { return _blendFactorDest; }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { return _numUsedVaryings; }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { return _numUsedTextures; }
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return get_depthCompareMode(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_previousUsedTexs") ) { return _previousUsedTexs; }
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { return _depthCompareMode; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return get_numUsedStreams_dyn(); }
		if (HX_FIELD_EQ(inName,"_blendFactorSource") ) { return _blendFactorSource; }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return get_alphaPremultiplied(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_needUVAnimation") ) { return get_needUVAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return get_numUsedVaryings_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderToTexture") ) { return get_renderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return _alphaPremultiplied; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_previousUsedStreams") ) { return _previousUsedStreams; }
		if (HX_FIELD_EQ(inName,"updateAnimationState") ) { return updateAnimationState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return set_depthCompareMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depthCompareMode") ) { return get_depthCompareMode_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { return _animatableAttributes; }
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { return get_needFragmentAnimation(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return set_alphaPremultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return get_alphaPremultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"animationRegisterCache") ) { return animationRegisterCache; }
		if (HX_FIELD_EQ(inName,"_needFragmentAnimation") ) { return _needFragmentAnimation; }
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { return get_numUsedVertexConstants(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return invalidateShaderProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { return _numUsedVertexConstants; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { return get_numUsedFragmentConstants(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_needFragmentAnimation") ) { return get_needFragmentAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { return _animationTargetRegisters; }
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { return _numUsedFragmentConstants; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return get_numUsedVertexConstants_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return get_numUsedFragmentConstants_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialPassBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return set_repeat(inValue); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return set_smooth(inValue); }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return set_mipmap(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_oldRect") ) { _oldRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_UVSource") ) { _UVSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { _UVTarget=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast< ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bothSides") ) { return set_bothSides(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_oldTarget") ) { _oldTarget=inValue.Cast< ::flash::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { _bothSides=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"writeDepth") ) { return set_writeDepth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_writeDepth") ) { _writeDepth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldSurface") ) { _oldSurface=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_context3Ds") ) { _context3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { _program3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lightPicker") ) { return set_lightPicker(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { _lightPicker=inValue.Cast< ::away3d::materials::lightpickers::LightPickerBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationSet") ) { return set_animationSet(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shadedTarget") ) { _shadedTarget=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program3Dids") ) { _program3Dids=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { _animationSet=inValue.Cast< ::away3d::animators::IAnimationSet >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultCulling") ) { _defaultCulling=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableBlending") ) { _enableBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { _numUsedStreams=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { _needUVAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldDepthStencil") ) { _oldDepthStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { _renderToTexture=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendFactorDest") ) { _blendFactorDest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { _numUsedVaryings=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { _numUsedTextures=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return set_depthCompareMode(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_previousUsedTexs") ) { _previousUsedTexs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { _depthCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_blendFactorSource") ) { _blendFactorSource=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return set_alphaPremultiplied(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_previousUsedStreams") ) { _previousUsedStreams=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { _animatableAttributes=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"animationRegisterCache") ) { animationRegisterCache=inValue.Cast< ::away3d::animators::data::AnimationRegisterCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_needFragmentAnimation") ) { _needFragmentAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { _numUsedVertexConstants=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { _animationTargetRegisters=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { _numUsedFragmentConstants=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialPassBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animationRegisterCache"));
	outFields->push(HX_CSTRING("_writeDepth"));
	outFields->push(HX_CSTRING("_UVSource"));
	outFields->push(HX_CSTRING("_UVTarget"));
	outFields->push(HX_CSTRING("_needUVAnimation"));
	outFields->push(HX_CSTRING("_needFragmentAnimation"));
	outFields->push(HX_CSTRING("_alphaPremultiplied"));
	outFields->push(HX_CSTRING("_oldRect"));
	outFields->push(HX_CSTRING("_oldDepthStencil"));
	outFields->push(HX_CSTRING("_oldSurface"));
	outFields->push(HX_CSTRING("_oldTarget"));
	outFields->push(HX_CSTRING("_renderToTexture"));
	outFields->push(HX_CSTRING("_defaultCulling"));
	outFields->push(HX_CSTRING("_shadedTarget"));
	outFields->push(HX_CSTRING("_animationTargetRegisters"));
	outFields->push(HX_CSTRING("_animatableAttributes"));
	outFields->push(HX_CSTRING("_lightPicker"));
	outFields->push(HX_CSTRING("_bothSides"));
	outFields->push(HX_CSTRING("_enableBlending"));
	outFields->push(HX_CSTRING("_blendFactorDest"));
	outFields->push(HX_CSTRING("_blendFactorSource"));
	outFields->push(HX_CSTRING("_depthCompareMode"));
	outFields->push(HX_CSTRING("_mipmap"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_smooth"));
	outFields->push(HX_CSTRING("_numUsedVaryings"));
	outFields->push(HX_CSTRING("_numUsedFragmentConstants"));
	outFields->push(HX_CSTRING("_numUsedVertexConstants"));
	outFields->push(HX_CSTRING("_numUsedTextures"));
	outFields->push(HX_CSTRING("_numUsedStreams"));
	outFields->push(HX_CSTRING("_context3Ds"));
	outFields->push(HX_CSTRING("_program3Dids"));
	outFields->push(HX_CSTRING("_program3Ds"));
	outFields->push(HX_CSTRING("_animationSet"));
	outFields->push(HX_CSTRING("_material"));
	outFields->push(HX_CSTRING("alphaPremultiplied"));
	outFields->push(HX_CSTRING("lightPicker"));
	outFields->push(HX_CSTRING("needUVAnimation"));
	outFields->push(HX_CSTRING("needFragmentAnimation"));
	outFields->push(HX_CSTRING("numUsedFragmentConstants"));
	outFields->push(HX_CSTRING("numUsedVaryings"));
	outFields->push(HX_CSTRING("numUsedVertexConstants"));
	outFields->push(HX_CSTRING("numUsedStreams"));
	outFields->push(HX_CSTRING("renderToTexture"));
	outFields->push(HX_CSTRING("animationSet"));
	outFields->push(HX_CSTRING("depthCompareMode"));
	outFields->push(HX_CSTRING("bothSides"));
	outFields->push(HX_CSTRING("repeat"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("mipmap"));
	outFields->push(HX_CSTRING("writeDepth"));
	outFields->push(HX_CSTRING("material"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_previousUsedStreams"),
	HX_CSTRING("_previousUsedTexs"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_alphaPremultiplied"),
	HX_CSTRING("get_alphaPremultiplied"),
	HX_CSTRING("updateLights"),
	HX_CSTRING("onLightsChange"),
	HX_CSTRING("set_lightPicker"),
	HX_CSTRING("get_lightPicker"),
	HX_CSTRING("updateProgram"),
	HX_CSTRING("invalidateShaderProgram"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("activate"),
	HX_CSTRING("setBlendMode"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("render"),
	HX_CSTRING("updateAnimationState"),
	HX_CSTRING("get_needUVAnimation"),
	HX_CSTRING("get_needFragmentAnimation"),
	HX_CSTRING("get_numUsedFragmentConstants"),
	HX_CSTRING("get_numUsedVaryings"),
	HX_CSTRING("get_numUsedVertexConstants"),
	HX_CSTRING("get_numUsedStreams"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_renderToTexture"),
	HX_CSTRING("set_animationSet"),
	HX_CSTRING("get_animationSet"),
	HX_CSTRING("set_depthCompareMode"),
	HX_CSTRING("get_depthCompareMode"),
	HX_CSTRING("set_bothSides"),
	HX_CSTRING("get_bothSides"),
	HX_CSTRING("set_repeat"),
	HX_CSTRING("get_repeat"),
	HX_CSTRING("set_smooth"),
	HX_CSTRING("get_smooth"),
	HX_CSTRING("set_mipmap"),
	HX_CSTRING("get_mipmap"),
	HX_CSTRING("set_writeDepth"),
	HX_CSTRING("get_writeDepth"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	HX_CSTRING("animationRegisterCache"),
	HX_CSTRING("_writeDepth"),
	HX_CSTRING("_UVSource"),
	HX_CSTRING("_UVTarget"),
	HX_CSTRING("_needUVAnimation"),
	HX_CSTRING("_needFragmentAnimation"),
	HX_CSTRING("_alphaPremultiplied"),
	HX_CSTRING("_oldRect"),
	HX_CSTRING("_oldDepthStencil"),
	HX_CSTRING("_oldSurface"),
	HX_CSTRING("_oldTarget"),
	HX_CSTRING("_renderToTexture"),
	HX_CSTRING("_defaultCulling"),
	HX_CSTRING("_shadedTarget"),
	HX_CSTRING("_animationTargetRegisters"),
	HX_CSTRING("_animatableAttributes"),
	HX_CSTRING("_lightPicker"),
	HX_CSTRING("_bothSides"),
	HX_CSTRING("_enableBlending"),
	HX_CSTRING("_blendFactorDest"),
	HX_CSTRING("_blendFactorSource"),
	HX_CSTRING("_depthCompareMode"),
	HX_CSTRING("_mipmap"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_smooth"),
	HX_CSTRING("_numUsedVaryings"),
	HX_CSTRING("_numUsedFragmentConstants"),
	HX_CSTRING("_numUsedVertexConstants"),
	HX_CSTRING("_numUsedTextures"),
	HX_CSTRING("_numUsedStreams"),
	HX_CSTRING("_context3Ds"),
	HX_CSTRING("_program3Dids"),
	HX_CSTRING("_program3Ds"),
	HX_CSTRING("_animationSet"),
	HX_CSTRING("_material"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialPassBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MaterialPassBase_obj::_previousUsedStreams,"_previousUsedStreams");
	HX_MARK_MEMBER_NAME(MaterialPassBase_obj::_previousUsedTexs,"_previousUsedTexs");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialPassBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MaterialPassBase_obj::_previousUsedStreams,"_previousUsedStreams");
	HX_VISIT_MEMBER_NAME(MaterialPassBase_obj::_previousUsedTexs,"_previousUsedTexs");
};

Class MaterialPassBase_obj::__mClass;

void MaterialPassBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.MaterialPassBase"), hx::TCanCast< MaterialPassBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MaterialPassBase_obj::__boot()
{
	_previousUsedStreams= ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0));
	_previousUsedTexs= ::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0));
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
