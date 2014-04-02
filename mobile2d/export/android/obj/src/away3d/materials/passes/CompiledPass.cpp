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
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_LightSources
#include <away3d/materials/LightSources.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#include <away3d/materials/methods/BasicNormalMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#include <away3d/materials/methods/BasicSpecularMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#include <away3d/materials/methods/ColorTransformMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#include <away3d/materials/methods/MethodVOSet.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShaderMethodSetup
#include <away3d/materials/methods/ShaderMethodSetup.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
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
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void CompiledPass_obj::__construct(::away3d::materials::MaterialBase material)
{
HX_STACK_PUSH("CompiledPass::new","away3d/materials/passes/CompiledPass.hx",89);
{
	HX_STACK_LINE(90)
	this->_specularLightSources = (int)1;
	HX_STACK_LINE(91)
	this->_diffuseLightSources = (int)3;
	HX_STACK_LINE(92)
	this->_vertexConstantData = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(93)
	this->_fragmentConstantData = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(94)
	this->_preserveAlpha = true;
	HX_STACK_LINE(95)
	this->_enableLightFallOff = true;
	HX_STACK_LINE(96)
	this->_material = material;
	HX_STACK_LINE(97)
	this->init();
	HX_STACK_LINE(98)
	super::__construct(null());
}
;
	return null();
}

CompiledPass_obj::~CompiledPass_obj() { }

Dynamic CompiledPass_obj::__CreateEmpty() { return  new CompiledPass_obj; }
hx::ObjectPtr< CompiledPass_obj > CompiledPass_obj::__new(::away3d::materials::MaterialBase material)
{  hx::ObjectPtr< CompiledPass_obj > result = new CompiledPass_obj();
	result->__construct(material);
	return result;}

Dynamic CompiledPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompiledPass_obj > result = new CompiledPass_obj();
	result->__construct(inArgs[0]);
	return result;}

int CompiledPass_obj::set_diffuseLightSources( int value){
	HX_STACK_PUSH("CompiledPass::set_diffuseLightSources","away3d/materials/passes/CompiledPass.hx",698);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(699)
	this->_diffuseLightSources = value;
	HX_STACK_LINE(700)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_diffuseLightSources,return )

int CompiledPass_obj::get_diffuseLightSources( ){
	HX_STACK_PUSH("CompiledPass::get_diffuseLightSources","away3d/materials/passes/CompiledPass.hx",694);
	HX_STACK_THIS(this);
	HX_STACK_LINE(694)
	return this->_diffuseLightSources;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_diffuseLightSources,return )

int CompiledPass_obj::set_specularLightSources( int value){
	HX_STACK_PUSH("CompiledPass::set_specularLightSources","away3d/materials/passes/CompiledPass.hx",682);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(683)
	this->_specularLightSources = value;
	HX_STACK_LINE(684)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_specularLightSources,return )

int CompiledPass_obj::get_specularLightSources( ){
	HX_STACK_PUSH("CompiledPass::get_specularLightSources","away3d/materials/passes/CompiledPass.hx",678);
	HX_STACK_THIS(this);
	HX_STACK_LINE(678)
	return this->_specularLightSources;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_specularLightSources,return )

Void CompiledPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompiledPass::deactivate","away3d/materials/passes/CompiledPass.hx",662);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(663)
		this->super::deactivate(stage3DProxy);
		HX_STACK_LINE(664)
		if ((this->_usesNormals)){
			HX_STACK_LINE(664)
			this->_methodSetup->_normalMethod->deactivate(this->_methodSetup->_normalMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(665)
		this->_methodSetup->_ambientMethod->deactivate(this->_methodSetup->_ambientMethodVO,stage3DProxy);
		HX_STACK_LINE(666)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(666)
			this->_methodSetup->_shadowMethod->deactivate(this->_methodSetup->_shadowMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(667)
		this->_methodSetup->_diffuseMethod->deactivate(this->_methodSetup->_diffuseMethodVO,stage3DProxy);
		HX_STACK_LINE(668)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(668)
			this->_methodSetup->_specularMethod->deactivate(this->_methodSetup->_specularMethodVO,stage3DProxy);
		}
	}
return null();
}


bool CompiledPass_obj::usesLights( ){
	HX_STACK_PUSH("CompiledPass::usesLights","away3d/materials/passes/CompiledPass.hx",654);
	HX_STACK_THIS(this);
	HX_STACK_LINE(654)
	return (bool(((bool((this->_numPointLights > (int)0)) || bool((this->_numDirectionalLights > (int)0))))) && bool((((int(((int(this->_diffuseLightSources) | int(this->_specularLightSources)))) & int(::away3d::materials::LightSources_obj::LIGHTS))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,usesLights,return )

bool CompiledPass_obj::usesProbes( ){
	HX_STACK_PUSH("CompiledPass::usesProbes","away3d/materials/passes/CompiledPass.hx",646);
	HX_STACK_THIS(this);
	HX_STACK_LINE(646)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(((int(this->_diffuseLightSources) | int(this->_specularLightSources)))) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,usesProbes,return )

Void CompiledPass_obj::render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("CompiledPass::render","away3d/materials/passes/CompiledPass.hx",574);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(575)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(576)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(577)
		if (((this->_uvBufferIndex >= (int)0))){
			HX_STACK_LINE(577)
			renderable->activateUVBuffer(this->_uvBufferIndex,stage3DProxy);
		}
		HX_STACK_LINE(578)
		if (((this->_secondaryUVBufferIndex >= (int)0))){
			HX_STACK_LINE(578)
			renderable->activateSecondaryUVBuffer(this->_secondaryUVBufferIndex,stage3DProxy);
		}
		HX_STACK_LINE(579)
		if (((this->_normalBufferIndex >= (int)0))){
			HX_STACK_LINE(579)
			renderable->activateVertexNormalBuffer(this->_normalBufferIndex,stage3DProxy);
		}
		HX_STACK_LINE(580)
		if (((this->_tangentBufferIndex >= (int)0))){
			HX_STACK_LINE(580)
			renderable->activateVertexTangentBuffer(this->_tangentBufferIndex,stage3DProxy);
		}
		HX_STACK_LINE(581)
		if ((this->_animateUVs)){
			HX_STACK_LINE(582)
			::flash::geom::Matrix uvTransform = renderable->get_uvTransform();		HX_STACK_VAR(uvTransform,"uvTransform");
			HX_STACK_LINE(583)
			if (((uvTransform != null()))){
				HX_STACK_LINE(584)
				this->_vertexConstantData[this->_uvTransformIndex] = uvTransform->a;
				HX_STACK_LINE(585)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)1)] = uvTransform->b;
				HX_STACK_LINE(586)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)3)] = uvTransform->tx;
				HX_STACK_LINE(587)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)4)] = uvTransform->c;
				HX_STACK_LINE(588)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)5)] = uvTransform->d;
				HX_STACK_LINE(589)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)7)] = uvTransform->ty;
			}
			else{
				HX_STACK_LINE(593)
				this->_vertexConstantData[this->_uvTransformIndex] = (int)1;
				HX_STACK_LINE(594)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)1)] = (int)0;
				HX_STACK_LINE(595)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)3)] = (int)0;
				HX_STACK_LINE(596)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)4)] = (int)0;
				HX_STACK_LINE(597)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)5)] = (int)1;
				HX_STACK_LINE(598)
				this->_vertexConstantData[(this->_uvTransformIndex + (int)7)] = (int)0;
			}
		}
		HX_STACK_LINE(602)
		this->_ambientLightR = this->_ambientLightG = this->_ambientLightB = (int)0;
		HX_STACK_LINE(603)
		if ((this->usesLights())){
			HX_STACK_LINE(603)
			this->updateLightConstants();
		}
		HX_STACK_LINE(604)
		if ((this->usesProbes())){
			HX_STACK_LINE(604)
			this->updateProbes(stage3DProxy);
		}
		HX_STACK_LINE(605)
		if (((this->_sceneMatrixIndex >= (int)0))){
			HX_STACK_LINE(606)
			renderable->getRenderSceneTransform(camera)->copyRawDataTo(this->_vertexConstantData,this->_sceneMatrixIndex,true);
			HX_STACK_LINE(607)
			viewProjection->copyRawDataTo(this->_vertexConstantData,(int)0,true);
		}
		else{
			HX_STACK_LINE(611)
			::flash::geom::Matrix3D matrix3D = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;		HX_STACK_VAR(matrix3D,"matrix3D");
			HX_STACK_LINE(612)
			matrix3D->copyFrom(renderable->getRenderSceneTransform(camera));
			HX_STACK_LINE(613)
			matrix3D->append(viewProjection);
			HX_STACK_LINE(614)
			matrix3D->copyRawDataTo(this->_vertexConstantData,(int)0,true);
		}
		HX_STACK_LINE(617)
		if (((this->_sceneNormalMatrixIndex >= (int)0))){
			HX_STACK_LINE(617)
			renderable->get_inverseSceneTransform()->copyRawDataTo(this->_vertexConstantData,this->_sceneNormalMatrixIndex,false);
		}
		HX_STACK_LINE(618)
		if ((this->_usesNormals)){
			HX_STACK_LINE(618)
			this->_methodSetup->_normalMethod->setRenderState(this->_methodSetup->_normalMethodVO,renderable,stage3DProxy,camera);
		}
		HX_STACK_LINE(619)
		::away3d::materials::methods::BasicAmbientMethod ambientMethod = this->_methodSetup->_ambientMethod;		HX_STACK_VAR(ambientMethod,"ambientMethod");
		HX_STACK_LINE(620)
		ambientMethod->_lightAmbientR = this->_ambientLightR;
		HX_STACK_LINE(621)
		ambientMethod->_lightAmbientG = this->_ambientLightG;
		HX_STACK_LINE(622)
		ambientMethod->_lightAmbientB = this->_ambientLightB;
		HX_STACK_LINE(623)
		ambientMethod->setRenderState(this->_methodSetup->_ambientMethodVO,renderable,stage3DProxy,camera);
		HX_STACK_LINE(624)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(624)
			this->_methodSetup->_shadowMethod->setRenderState(this->_methodSetup->_shadowMethodVO,renderable,stage3DProxy,camera);
		}
		HX_STACK_LINE(625)
		this->_methodSetup->_diffuseMethod->setRenderState(this->_methodSetup->_diffuseMethodVO,renderable,stage3DProxy,camera);
		HX_STACK_LINE(626)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(626)
			this->_methodSetup->_specularMethod->setRenderState(this->_methodSetup->_specularMethodVO,renderable,stage3DProxy,camera);
		}
		HX_STACK_LINE(627)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(627)
			this->_methodSetup->_colorTransformMethod->setRenderState(this->_methodSetup->_colorTransformMethodVO,renderable,stage3DProxy,camera);
		}
		HX_STACK_LINE(628)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(629)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(630)
		i = (int)0;
		HX_STACK_LINE(631)
		while(((i < len))){
			HX_STACK_LINE(632)
			::away3d::materials::methods::MethodVOSet set = methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >();		HX_STACK_VAR(set,"set");
			HX_STACK_LINE(633)
			set->method->setRenderState(set->data,renderable,stage3DProxy,camera);
			HX_STACK_LINE(634)
			++(i);
		}
		HX_STACK_LINE(636)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,this->_vertexConstantData,this->_numUsedVertexConstants);
		HX_STACK_LINE(637)
		context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_fragmentConstantData,this->_numUsedFragmentConstants);
		HX_STACK_LINE(638)
		renderable->activateVertexBuffer((int)0,stage3DProxy);
		HX_STACK_LINE(639)
		context->drawTriangles(renderable->getIndexBuffer(stage3DProxy),(int)0,renderable->get_numTriangles());
	}
return null();
}


Void CompiledPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("CompiledPass::activate","away3d/materials/passes/CompiledPass.hx",561);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(562)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(563)
		if ((this->_usesNormals)){
			HX_STACK_LINE(563)
			this->_methodSetup->_normalMethod->activate(this->_methodSetup->_normalMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(564)
		this->_methodSetup->_ambientMethod->activate(this->_methodSetup->_ambientMethodVO,stage3DProxy);
		HX_STACK_LINE(565)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(565)
			this->_methodSetup->_shadowMethod->activate(this->_methodSetup->_shadowMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(566)
		this->_methodSetup->_diffuseMethod->activate(this->_methodSetup->_diffuseMethodVO,stage3DProxy);
		HX_STACK_LINE(567)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(567)
			this->_methodSetup->_specularMethod->activate(this->_methodSetup->_specularMethodVO,stage3DProxy);
		}
	}
return null();
}


::String CompiledPass_obj::getFragmentCode( ::String animatorCode){
	HX_STACK_PUSH("CompiledPass::getFragmentCode","away3d/materials/passes/CompiledPass.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animatorCode,"animatorCode");
	HX_STACK_LINE(552)
	return ((this->_fragmentLightCode + animatorCode) + this->_framentPostLightCode);
}


::String CompiledPass_obj::getVertexCode( ){
	HX_STACK_PUSH("CompiledPass::getVertexCode","away3d/materials/passes/CompiledPass.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_LINE(544)
	return this->_vertexCode;
}


Void CompiledPass_obj::onShaderInvalidated( ::away3d::events::ShadingMethodEvent event){
{
		HX_STACK_PUSH("CompiledPass::onShaderInvalidated","away3d/materials/passes/CompiledPass.hx",536);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(536)
		this->invalidateShaderProgram(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,onShaderInvalidated,(void))

Void CompiledPass_obj::updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompiledPass::updateProbes","away3d/materials/passes/CompiledPass.hx",529);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,updateProbes,(void))

Void CompiledPass_obj::updateLightConstants( ){
{
		HX_STACK_PUSH("CompiledPass::updateLightConstants","away3d/materials/passes/CompiledPass.hx",521);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateLightConstants,(void))

Void CompiledPass_obj::updateMethodConstants( ){
{
		HX_STACK_PUSH("CompiledPass::updateMethodConstants","away3d/materials/passes/CompiledPass.hx",509);
		HX_STACK_THIS(this);
		HX_STACK_LINE(510)
		if (((this->_methodSetup->_normalMethod != null()))){
			HX_STACK_LINE(510)
			this->_methodSetup->_normalMethod->initConstants(this->_methodSetup->_normalMethodVO);
		}
		HX_STACK_LINE(511)
		if (((this->_methodSetup->_diffuseMethod != null()))){
			HX_STACK_LINE(511)
			this->_methodSetup->_diffuseMethod->initConstants(this->_methodSetup->_diffuseMethodVO);
		}
		HX_STACK_LINE(512)
		if (((this->_methodSetup->_ambientMethod != null()))){
			HX_STACK_LINE(512)
			this->_methodSetup->_ambientMethod->initConstants(this->_methodSetup->_ambientMethodVO);
		}
		HX_STACK_LINE(513)
		if ((this->_usingSpecularMethod)){
			HX_STACK_LINE(513)
			this->_methodSetup->_specularMethod->initConstants(this->_methodSetup->_specularMethodVO);
		}
		HX_STACK_LINE(514)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(514)
			this->_methodSetup->_shadowMethod->initConstants(this->_methodSetup->_shadowMethodVO);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateMethodConstants,(void))

Void CompiledPass_obj::cleanUp( ){
{
		HX_STACK_PUSH("CompiledPass::cleanUp","away3d/materials/passes/CompiledPass.hx",500);
		HX_STACK_THIS(this);
		HX_STACK_LINE(501)
		this->_compiler->dispose();
		HX_STACK_LINE(502)
		this->_compiler = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,cleanUp,(void))

Void CompiledPass_obj::initCommonsData( ){
{
		HX_STACK_PUSH("CompiledPass::initCommonsData","away3d/materials/passes/CompiledPass.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_LINE(490)
		this->_fragmentConstantData[this->_commonsDataIndex] = .5;
		HX_STACK_LINE(491)
		this->_fragmentConstantData[(this->_commonsDataIndex + (int)1)] = (int)0;
		HX_STACK_LINE(492)
		this->_fragmentConstantData[(this->_commonsDataIndex + (int)2)] = (Float((int)1) / Float((int)255));
		HX_STACK_LINE(493)
		this->_fragmentConstantData[(this->_commonsDataIndex + (int)3)] = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initCommonsData,(void))

Void CompiledPass_obj::initUVTransformData( ){
{
		HX_STACK_PUSH("CompiledPass::initUVTransformData","away3d/materials/passes/CompiledPass.hx",474);
		HX_STACK_THIS(this);
		HX_STACK_LINE(475)
		this->_vertexConstantData[this->_uvTransformIndex] = (int)1;
		HX_STACK_LINE(476)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)1)] = (int)0;
		HX_STACK_LINE(477)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)2)] = (int)0;
		HX_STACK_LINE(478)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)3)] = (int)0;
		HX_STACK_LINE(479)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)4)] = (int)0;
		HX_STACK_LINE(480)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)5)] = (int)1;
		HX_STACK_LINE(481)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)6)] = (int)0;
		HX_STACK_LINE(482)
		this->_vertexConstantData[(this->_uvTransformIndex + (int)7)] = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initUVTransformData,(void))

Void CompiledPass_obj::addPasses( Array< ::Dynamic > passes){
{
		HX_STACK_PUSH("CompiledPass::addPasses","away3d/materials/passes/CompiledPass.hx",458);
		HX_STACK_THIS(this);
		HX_STACK_ARG(passes,"passes");
		HX_STACK_LINE(459)
		if (((passes == null()))){
			HX_STACK_LINE(459)
			return null();
		}
		HX_STACK_LINE(460)
		int len = passes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(461)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(462)
		while(((i < len))){
			HX_STACK_LINE(463)
			passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_material(this->get_material());
			HX_STACK_LINE(464)
			passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_lightPicker(this->_lightPicker);
			HX_STACK_LINE(465)
			this->_passes->__Field(HX_CSTRING("push"),true)(passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >());
			HX_STACK_LINE(466)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,addPasses,(void))

Void CompiledPass_obj::addPassesFromMethods( ){
{
		HX_STACK_PUSH("CompiledPass::addPassesFromMethods","away3d/materials/passes/CompiledPass.hx",444);
		HX_STACK_THIS(this);
		HX_STACK_LINE(445)
		if (((bool((this->_methodSetup->_normalMethod != null())) && bool(this->_methodSetup->_normalMethod->get_hasOutput())))){
			HX_STACK_LINE(445)
			this->addPasses(this->_methodSetup->_normalMethod->get_passes());
		}
		HX_STACK_LINE(446)
		if (((this->_methodSetup->_ambientMethod != null()))){
			HX_STACK_LINE(446)
			this->addPasses(this->_methodSetup->_ambientMethod->get_passes());
		}
		HX_STACK_LINE(447)
		if (((this->_methodSetup->_shadowMethod != null()))){
			HX_STACK_LINE(447)
			this->addPasses(this->_methodSetup->_shadowMethod->get_passes());
		}
		HX_STACK_LINE(448)
		if (((this->_methodSetup->_diffuseMethod != null()))){
			HX_STACK_LINE(448)
			this->addPasses(this->_methodSetup->_diffuseMethod->get_passes());
		}
		HX_STACK_LINE(449)
		if (((this->_methodSetup->_specularMethod != null()))){
			HX_STACK_LINE(449)
			this->addPasses(this->_methodSetup->_specularMethod->get_passes());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,addPassesFromMethods,(void))

Void CompiledPass_obj::invalidateShaderProgram( hx::Null< bool >  __o_updateMaterial){
bool updateMaterial = __o_updateMaterial.Default(true);
	HX_STACK_PUSH("CompiledPass::invalidateShaderProgram","away3d/materials/passes/CompiledPass.hx",421);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateMaterial,"updateMaterial");
{
		HX_STACK_LINE(422)
		Array< ::Dynamic > oldPasses = this->_passes;		HX_STACK_VAR(oldPasses,"oldPasses");
		HX_STACK_LINE(423)
		this->_passes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(424)
		if (((this->_methodSetup != null()))){
			HX_STACK_LINE(424)
			this->addPassesFromMethods();
		}
		HX_STACK_LINE(425)
		if (((bool((oldPasses == null())) || bool((this->_passes->__Field(HX_CSTRING("length"),true) != oldPasses->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(426)
			this->_passesDirty = true;
			HX_STACK_LINE(427)
			return null();
		}
		HX_STACK_LINE(429)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(430)
		while(((i < this->_passes->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(431)
			if (((this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >() != oldPasses->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()))){
				HX_STACK_LINE(432)
				this->_passesDirty = true;
				HX_STACK_LINE(433)
				return null();
			}
			HX_STACK_LINE(435)
			++(i);
		}
		HX_STACK_LINE(437)
		this->super::invalidateShaderProgram(updateMaterial);
	}
return null();
}


Void CompiledPass_obj::dispose( ){
{
		HX_STACK_PUSH("CompiledPass::dispose","away3d/materials/passes/CompiledPass.hx",410);
		HX_STACK_THIS(this);
		HX_STACK_LINE(411)
		this->super::dispose();
		HX_STACK_LINE(412)
		this->_methodSetup->removeEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null());
		HX_STACK_LINE(413)
		this->_methodSetup->dispose();
		HX_STACK_LINE(414)
		this->_methodSetup = null();
	}
return null();
}


Void CompiledPass_obj::init( ){
{
		HX_STACK_PUSH("CompiledPass::init","away3d/materials/passes/CompiledPass.hx",401);
		HX_STACK_THIS(this);
		HX_STACK_LINE(402)
		this->_methodSetup = ::away3d::materials::methods::ShaderMethodSetup_obj::__new();
		HX_STACK_LINE(403)
		this->_methodSetup->addEventListener(::away3d::events::ShadingMethodEvent_obj::SHADER_INVALIDATED,this->onShaderInvalidated_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,init,(void))

::away3d::materials::methods::BasicSpecularMethod CompiledPass_obj::set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value){
	HX_STACK_PUSH("CompiledPass::set_specularMethod","away3d/materials/passes/CompiledPass.hx",392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(393)
	this->_methodSetup->set_specularMethod(value);
	HX_STACK_LINE(394)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_specularMethod,return )

::away3d::materials::methods::BasicSpecularMethod CompiledPass_obj::get_specularMethod( ){
	HX_STACK_PUSH("CompiledPass::get_specularMethod","away3d/materials/passes/CompiledPass.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_LINE(388)
	return this->_methodSetup->get_specularMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_specularMethod,return )

::away3d::materials::methods::BasicDiffuseMethod CompiledPass_obj::set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value){
	HX_STACK_PUSH("CompiledPass::set_diffuseMethod","away3d/materials/passes/CompiledPass.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(380)
	this->_methodSetup->set_diffuseMethod(value);
	HX_STACK_LINE(381)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_diffuseMethod,return )

::away3d::materials::methods::BasicDiffuseMethod CompiledPass_obj::get_diffuseMethod( ){
	HX_STACK_PUSH("CompiledPass::get_diffuseMethod","away3d/materials/passes/CompiledPass.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_LINE(375)
	return this->_methodSetup->get_diffuseMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_diffuseMethod,return )

::away3d::materials::methods::ShadowMapMethodBase CompiledPass_obj::set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value){
	HX_STACK_PUSH("CompiledPass::set_shadowMethod","away3d/materials/passes/CompiledPass.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(367)
	this->_methodSetup->set_shadowMethod(value);
	HX_STACK_LINE(368)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_shadowMethod,return )

::away3d::materials::methods::ShadowMapMethodBase CompiledPass_obj::get_shadowMethod( ){
	HX_STACK_PUSH("CompiledPass::get_shadowMethod","away3d/materials/passes/CompiledPass.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_LINE(362)
	return this->_methodSetup->get_shadowMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_shadowMethod,return )

::away3d::materials::methods::BasicAmbientMethod CompiledPass_obj::set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value){
	HX_STACK_PUSH("CompiledPass::set_ambientMethod","away3d/materials/passes/CompiledPass.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(354)
	this->_methodSetup->set_ambientMethod(value);
	HX_STACK_LINE(355)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_ambientMethod,return )

::away3d::materials::methods::BasicAmbientMethod CompiledPass_obj::get_ambientMethod( ){
	HX_STACK_PUSH("CompiledPass::get_ambientMethod","away3d/materials/passes/CompiledPass.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(349)
	return this->_methodSetup->get_ambientMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_ambientMethod,return )

::away3d::materials::methods::BasicNormalMethod CompiledPass_obj::set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value){
	HX_STACK_PUSH("CompiledPass::set_normalMethod","away3d/materials/passes/CompiledPass.hx",340);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(341)
	this->_methodSetup->set_normalMethod(value);
	HX_STACK_LINE(342)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_normalMethod,return )

::away3d::materials::methods::BasicNormalMethod CompiledPass_obj::get_normalMethod( ){
	HX_STACK_PUSH("CompiledPass::get_normalMethod","away3d/materials/passes/CompiledPass.hx",336);
	HX_STACK_THIS(this);
	HX_STACK_LINE(336)
	return this->_methodSetup->get_normalMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_normalMethod,return )

::away3d::textures::Texture2DBase CompiledPass_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
	HX_STACK_PUSH("CompiledPass::set_normalMap","away3d/materials/passes/CompiledPass.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(328)
	this->_methodSetup->_normalMethod->set_normalMap(value);
	HX_STACK_LINE(329)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_normalMap,return )

::away3d::textures::Texture2DBase CompiledPass_obj::get_normalMap( ){
	HX_STACK_PUSH("CompiledPass::get_normalMap","away3d/materials/passes/CompiledPass.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(323)
	return this->_methodSetup->_normalMethod->get_normalMap();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_normalMap,return )

bool CompiledPass_obj::set_mipmap( bool value){
	HX_STACK_PUSH("CompiledPass::set_mipmap","away3d/materials/passes/CompiledPass.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(313)
	if (((this->_mipmap == value))){
		HX_STACK_LINE(313)
		return value;
	}
	HX_STACK_LINE(314)
	this->super::set_mipmap(value);
	HX_STACK_LINE(315)
	return value;
}


bool CompiledPass_obj::set_animateUVs( bool value){
	HX_STACK_PUSH("CompiledPass::set_animateUVs","away3d/materials/passes/CompiledPass.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(302)
	if (((this->_animateUVs == value))){
		HX_STACK_LINE(302)
		return value;
	}
	HX_STACK_LINE(303)
	this->_animateUVs = value;
	HX_STACK_LINE(304)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(305)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_animateUVs,return )

bool CompiledPass_obj::get_animateUVs( ){
	HX_STACK_PUSH("CompiledPass::get_animateUVs","away3d/materials/passes/CompiledPass.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(297)
	return this->_animateUVs;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_animateUVs,return )

bool CompiledPass_obj::set_preserveAlpha( bool value){
	HX_STACK_PUSH("CompiledPass::set_preserveAlpha","away3d/materials/passes/CompiledPass.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(287)
	if (((this->_preserveAlpha == value))){
		HX_STACK_LINE(287)
		return value;
	}
	HX_STACK_LINE(288)
	this->_preserveAlpha = value;
	HX_STACK_LINE(289)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(290)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_preserveAlpha,return )

bool CompiledPass_obj::get_preserveAlpha( ){
	HX_STACK_PUSH("CompiledPass::get_preserveAlpha","away3d/materials/passes/CompiledPass.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(282)
	return this->_preserveAlpha;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_preserveAlpha,return )

Void CompiledPass_obj::updateRegisterIndices( ){
{
		HX_STACK_PUSH("CompiledPass::updateRegisterIndices","away3d/materials/passes/CompiledPass.hx",262);
		HX_STACK_THIS(this);
		HX_STACK_LINE(263)
		this->_uvBufferIndex = this->_compiler->get_uvBufferIndex();
		HX_STACK_LINE(264)
		this->_uvTransformIndex = this->_compiler->get_uvTransformIndex();
		HX_STACK_LINE(265)
		this->_secondaryUVBufferIndex = this->_compiler->get_secondaryUVBufferIndex();
		HX_STACK_LINE(266)
		this->_normalBufferIndex = this->_compiler->get_normalBufferIndex();
		HX_STACK_LINE(267)
		this->_tangentBufferIndex = this->_compiler->get_tangentBufferIndex();
		HX_STACK_LINE(268)
		this->_lightFragmentConstantIndex = this->_compiler->get_lightFragmentConstantIndex();
		HX_STACK_LINE(269)
		this->_cameraPositionIndex = this->_compiler->get_cameraPositionIndex();
		HX_STACK_LINE(270)
		this->_commonsDataIndex = this->_compiler->get_commonsDataIndex();
		HX_STACK_LINE(271)
		this->_sceneMatrixIndex = this->_compiler->get_sceneMatrixIndex();
		HX_STACK_LINE(272)
		this->_sceneNormalMatrixIndex = this->_compiler->get_sceneNormalMatrixIndex();
		HX_STACK_LINE(273)
		this->_probeWeightsIndex = this->_compiler->get_probeWeightsIndex();
		HX_STACK_LINE(274)
		this->_lightProbeDiffuseIndices = this->_compiler->get_lightProbeDiffuseIndices();
		HX_STACK_LINE(275)
		this->_lightProbeSpecularIndices = this->_compiler->get_lightProbeSpecularIndices();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateRegisterIndices,(void))

Void CompiledPass_obj::updateShaderProperties( ){
{
		HX_STACK_PUSH("CompiledPass::updateShaderProperties","away3d/materials/passes/CompiledPass.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_LINE(243)
		this->_animatableAttributes = this->_compiler->get_animatableAttributes();
		HX_STACK_LINE(244)
		this->_animationTargetRegisters = this->_compiler->get_animationTargetRegisters();
		HX_STACK_LINE(245)
		this->_vertexCode = this->_compiler->get_vertexCode();
		HX_STACK_LINE(246)
		this->_fragmentLightCode = this->_compiler->get_fragmentLightCode();
		HX_STACK_LINE(247)
		this->_framentPostLightCode = this->_compiler->get_fragmentPostLightCode();
		HX_STACK_LINE(248)
		this->_shadedTarget = this->_compiler->get_shadedTarget();
		HX_STACK_LINE(249)
		this->_usingSpecularMethod = this->_compiler->get_usingSpecularMethod();
		HX_STACK_LINE(250)
		this->_usesNormals = this->_compiler->get_usesNormals();
		HX_STACK_LINE(251)
		this->_needUVAnimation = this->_compiler->get_needUVAnimation();
		HX_STACK_LINE(252)
		this->_UVSource = this->_compiler->get_UVSource();
		HX_STACK_LINE(253)
		this->_UVTarget = this->_compiler->get_UVTarget();
		HX_STACK_LINE(254)
		this->updateRegisterIndices();
		HX_STACK_LINE(255)
		this->updateUsedOffsets();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateShaderProperties,(void))

::away3d::materials::compilation::ShaderCompiler CompiledPass_obj::createCompiler( ::String profile){
	HX_STACK_PUSH("CompiledPass::createCompiler","away3d/materials/passes/CompiledPass.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(profile,"profile");
	HX_STACK_LINE(234)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(235)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,createCompiler,return )

Void CompiledPass_obj::initCompiler( ::String profile){
{
		HX_STACK_PUSH("CompiledPass::initCompiler","away3d/materials/passes/CompiledPass.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(profile,"profile");
		HX_STACK_LINE(211)
		this->_compiler = this->createCompiler(profile);
		HX_STACK_LINE(212)
		this->_compiler->set_forceSeperateMVP(this->_forceSeparateMVP);
		HX_STACK_LINE(213)
		this->_compiler->set_numPointLights(this->_numPointLights);
		HX_STACK_LINE(214)
		this->_compiler->set_numDirectionalLights(this->_numDirectionalLights);
		HX_STACK_LINE(215)
		this->_compiler->set_numLightProbes(this->_numLightProbes);
		HX_STACK_LINE(216)
		this->_compiler->set_methodSetup(this->_methodSetup);
		HX_STACK_LINE(217)
		this->_compiler->set_diffuseLightSources(this->_diffuseLightSources);
		HX_STACK_LINE(218)
		this->_compiler->set_specularLightSources(this->_specularLightSources);
		HX_STACK_LINE(219)
		this->_compiler->setTextureSampling(this->_smooth,this->_repeat,this->_mipmap);
		HX_STACK_LINE(220)
		this->_compiler->setConstantDataBuffers(this->_vertexConstantData,this->_fragmentConstantData);
		HX_STACK_LINE(221)
		this->_compiler->set_animateUVs(this->_animateUVs);
		HX_STACK_LINE(222)
		this->_compiler->set_alphaPremultiplied((bool(this->_alphaPremultiplied) && bool(this->_enableBlending)));
		HX_STACK_LINE(223)
		this->_compiler->set_preserveAlpha((bool(this->_preserveAlpha) && bool(this->_enableBlending)));
		HX_STACK_LINE(224)
		this->_compiler->set_enableLightFallOff(this->_enableLightFallOff);
		HX_STACK_LINE(225)
		this->_compiler->compile();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,initCompiler,(void))

Void CompiledPass_obj::initConstantData( ){
{
		HX_STACK_PUSH("CompiledPass::initConstantData","away3d/materials/passes/CompiledPass.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			Dynamic array = this->_vertexConstantData;		HX_STACK_VAR(array,"array");
			int count = (this->_numUsedVertexConstants * (int)4);		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(197)
			int c = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(197)
			while(((c < count))){
				HX_STACK_LINE(197)
				array->__Field(HX_CSTRING("push"),true)((int)0);
				HX_STACK_LINE(197)
				(c)++;
			}
			HX_STACK_LINE(197)
			while(((c > count))){
				HX_STACK_LINE(197)
				array->__Field(HX_CSTRING("pop"),true)();
				HX_STACK_LINE(197)
				(c)--;
			}
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(197)
				while(((_g1 < _g))){
					HX_STACK_LINE(197)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(197)
					hx::IndexRef((array).mPtr,i) = (int)0;
				}
			}
			HX_STACK_LINE(197)
			array;
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			Dynamic array = this->_fragmentConstantData;		HX_STACK_VAR(array,"array");
			int count = (this->_numUsedFragmentConstants * (int)4);		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(198)
			int c = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(198)
			while(((c < count))){
				HX_STACK_LINE(198)
				array->__Field(HX_CSTRING("push"),true)((int)0);
				HX_STACK_LINE(198)
				(c)++;
			}
			HX_STACK_LINE(198)
			while(((c > count))){
				HX_STACK_LINE(198)
				array->__Field(HX_CSTRING("pop"),true)();
				HX_STACK_LINE(198)
				(c)--;
			}
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				while(((_g1 < _g))){
					HX_STACK_LINE(198)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(198)
					hx::IndexRef((array).mPtr,i) = (int)0;
				}
			}
			HX_STACK_LINE(198)
			array;
		}
		HX_STACK_LINE(199)
		this->initCommonsData();
		HX_STACK_LINE(200)
		if (((this->_uvTransformIndex >= (int)0))){
			HX_STACK_LINE(200)
			this->initUVTransformData();
		}
		HX_STACK_LINE(201)
		if (((this->_cameraPositionIndex >= (int)0))){
			HX_STACK_LINE(201)
			this->_vertexConstantData[(this->_cameraPositionIndex + (int)3)] = (int)1;
		}
		HX_STACK_LINE(202)
		this->updateMethodConstants();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,initConstantData,(void))

Void CompiledPass_obj::updateUsedOffsets( ){
{
		HX_STACK_PUSH("CompiledPass::updateUsedOffsets","away3d/materials/passes/CompiledPass.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(182)
		this->_numUsedVertexConstants = this->_compiler->get_numUsedVertexConstants();
		HX_STACK_LINE(183)
		this->_numUsedFragmentConstants = this->_compiler->get_numUsedFragmentConstants();
		HX_STACK_LINE(184)
		this->_numUsedStreams = this->_compiler->get_numUsedStreams();
		HX_STACK_LINE(185)
		this->_numUsedTextures = this->_compiler->get_numUsedTextures();
		HX_STACK_LINE(186)
		this->_numUsedVaryings = this->_compiler->get_numUsedVaryings();
		HX_STACK_LINE(187)
		this->_numUsedFragmentConstants = this->_compiler->get_numUsedFragmentConstants();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,updateUsedOffsets,(void))

Void CompiledPass_obj::reset( ::String profile){
{
		HX_STACK_PUSH("CompiledPass::reset","away3d/materials/passes/CompiledPass.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_ARG(profile,"profile");
		HX_STACK_LINE(171)
		this->initCompiler(profile);
		HX_STACK_LINE(172)
		this->updateShaderProperties();
		HX_STACK_LINE(173)
		this->initConstantData();
		HX_STACK_LINE(174)
		this->cleanUp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,reset,(void))

Void CompiledPass_obj::updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("CompiledPass::updateProgram","away3d/materials/passes/CompiledPass.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(160)
		this->reset(stage3DProxy->get_profile());
		HX_STACK_LINE(161)
		this->super::updateProgram(stage3DProxy);
	}
return null();
}


int CompiledPass_obj::get_numLightProbes( ){
	HX_STACK_PUSH("CompiledPass::get_numLightProbes","away3d/materials/passes/CompiledPass.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	return this->_numLightProbes;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numLightProbes,return )

int CompiledPass_obj::get_numDirectionalLights( ){
	HX_STACK_PUSH("CompiledPass::get_numDirectionalLights","away3d/materials/passes/CompiledPass.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->_numDirectionalLights;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numDirectionalLights,return )

int CompiledPass_obj::get_numPointLights( ){
	HX_STACK_PUSH("CompiledPass::get_numPointLights","away3d/materials/passes/CompiledPass.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_numPointLights;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_numPointLights,return )

bool CompiledPass_obj::set_forceSeparateMVP( bool value){
	HX_STACK_PUSH("CompiledPass::set_forceSeparateMVP","away3d/materials/passes/CompiledPass.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(127)
	this->_forceSeparateMVP = value;
	HX_STACK_LINE(128)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_forceSeparateMVP,return )

bool CompiledPass_obj::get_forceSeparateMVP( ){
	HX_STACK_PUSH("CompiledPass::get_forceSeparateMVP","away3d/materials/passes/CompiledPass.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(122)
	return this->_forceSeparateMVP;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_forceSeparateMVP,return )

bool CompiledPass_obj::set_enableLightFallOff( bool value){
	HX_STACK_PUSH("CompiledPass::set_enableLightFallOff","away3d/materials/passes/CompiledPass.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(111)
	if (((value != this->_enableLightFallOff))){
		HX_STACK_LINE(111)
		this->invalidateShaderProgram(true);
	}
	HX_STACK_LINE(112)
	this->_enableLightFallOff = value;
	HX_STACK_LINE(113)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CompiledPass_obj,set_enableLightFallOff,return )

bool CompiledPass_obj::get_enableLightFallOff( ){
	HX_STACK_PUSH("CompiledPass::get_enableLightFallOff","away3d/materials/passes/CompiledPass.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_LINE(106)
	return this->_enableLightFallOff;
}


HX_DEFINE_DYNAMIC_FUNC0(CompiledPass_obj,get_enableLightFallOff,return )


CompiledPass_obj::CompiledPass_obj()
{
}

void CompiledPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompiledPass);
	HX_MARK_MEMBER_NAME(_forceSeparateMVP,"_forceSeparateMVP");
	HX_MARK_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_MARK_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_MARK_MEMBER_NAME(_usesNormals,"_usesNormals");
	HX_MARK_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_MARK_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_MARK_MEMBER_NAME(_compiler,"_compiler");
	HX_MARK_MEMBER_NAME(_ambientLightB,"_ambientLightB");
	HX_MARK_MEMBER_NAME(_ambientLightG,"_ambientLightG");
	HX_MARK_MEMBER_NAME(_ambientLightR,"_ambientLightR");
	HX_MARK_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_MARK_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_MARK_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_MARK_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_MARK_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_MARK_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_MARK_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_MARK_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_MARK_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_MARK_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_MARK_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_MARK_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_MARK_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_MARK_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_MARK_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_MARK_MEMBER_NAME(_framentPostLightCode,"_framentPostLightCode");
	HX_MARK_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_MARK_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_MARK_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_MARK_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_MARK_MEMBER_NAME(_passesDirty,"_passesDirty");
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompiledPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_forceSeparateMVP,"_forceSeparateMVP");
	HX_VISIT_MEMBER_NAME(_enableLightFallOff,"_enableLightFallOff");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_animateUVs,"_animateUVs");
	HX_VISIT_MEMBER_NAME(_preserveAlpha,"_preserveAlpha");
	HX_VISIT_MEMBER_NAME(_usesNormals,"_usesNormals");
	HX_VISIT_MEMBER_NAME(_usingSpecularMethod,"_usingSpecularMethod");
	HX_VISIT_MEMBER_NAME(_methodSetup,"_methodSetup");
	HX_VISIT_MEMBER_NAME(_compiler,"_compiler");
	HX_VISIT_MEMBER_NAME(_ambientLightB,"_ambientLightB");
	HX_VISIT_MEMBER_NAME(_ambientLightG,"_ambientLightG");
	HX_VISIT_MEMBER_NAME(_ambientLightR,"_ambientLightR");
	HX_VISIT_MEMBER_NAME(_lightProbeSpecularIndices,"_lightProbeSpecularIndices");
	HX_VISIT_MEMBER_NAME(_lightProbeDiffuseIndices,"_lightProbeDiffuseIndices");
	HX_VISIT_MEMBER_NAME(_uvTransformIndex,"_uvTransformIndex");
	HX_VISIT_MEMBER_NAME(_cameraPositionIndex,"_cameraPositionIndex");
	HX_VISIT_MEMBER_NAME(_lightFragmentConstantIndex,"_lightFragmentConstantIndex");
	HX_VISIT_MEMBER_NAME(_sceneNormalMatrixIndex,"_sceneNormalMatrixIndex");
	HX_VISIT_MEMBER_NAME(_sceneMatrixIndex,"_sceneMatrixIndex");
	HX_VISIT_MEMBER_NAME(_tangentBufferIndex,"_tangentBufferIndex");
	HX_VISIT_MEMBER_NAME(_normalBufferIndex,"_normalBufferIndex");
	HX_VISIT_MEMBER_NAME(_secondaryUVBufferIndex,"_secondaryUVBufferIndex");
	HX_VISIT_MEMBER_NAME(_uvBufferIndex,"_uvBufferIndex");
	HX_VISIT_MEMBER_NAME(_probeWeightsIndex,"_probeWeightsIndex");
	HX_VISIT_MEMBER_NAME(_commonsDataIndex,"_commonsDataIndex");
	HX_VISIT_MEMBER_NAME(_fragmentConstantData,"_fragmentConstantData");
	HX_VISIT_MEMBER_NAME(_vertexConstantData,"_vertexConstantData");
	HX_VISIT_MEMBER_NAME(_framentPostLightCode,"_framentPostLightCode");
	HX_VISIT_MEMBER_NAME(_fragmentLightCode,"_fragmentLightCode");
	HX_VISIT_MEMBER_NAME(_vertexCode,"_vertexCode");
	HX_VISIT_MEMBER_NAME(_diffuseLightSources,"_diffuseLightSources");
	HX_VISIT_MEMBER_NAME(_specularLightSources,"_specularLightSources");
	HX_VISIT_MEMBER_NAME(_passesDirty,"_passesDirty");
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CompiledPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanUp") ) { return cleanUp_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_passes") ) { return _passes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addPasses") ) { return addPasses_dyn(); }
		if (HX_FIELD_EQ(inName,"_compiler") ) { return _compiler; }
		if (HX_FIELD_EQ(inName,"normalMap") ) { return get_normalMap(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"usesLights") ) { return usesLights_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbes") ) { return usesProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return set_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return get_animateUVs(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { return _animateUVs; }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { return _vertexCode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateProbes") ) { return updateProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"initCompiler") ) { return initCompiler_dyn(); }
		if (HX_FIELD_EQ(inName,"_usesNormals") ) { return _usesNormals; }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { return _methodSetup; }
		if (HX_FIELD_EQ(inName,"_passesDirty") ) { return _passesDirty; }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return get_shadowMethod(); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return get_normalMethod(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return getVertexCode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return set_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return get_normalMap_dyn(); }
		if (HX_FIELD_EQ(inName,"updateProgram") ) { return updateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return get_diffuseMethod(); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return get_ambientMethod(); }
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { return get_preserveAlpha(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return set_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return get_animateUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"createCompiler") ) { return createCompiler_dyn(); }
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { return _preserveAlpha; }
		if (HX_FIELD_EQ(inName,"_ambientLightB") ) { return _ambientLightB; }
		if (HX_FIELD_EQ(inName,"_ambientLightG") ) { return _ambientLightG; }
		if (HX_FIELD_EQ(inName,"_ambientLightR") ) { return _ambientLightR; }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { return _uvBufferIndex; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return get_specularMethod(); }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { return get_numLightProbes(); }
		if (HX_FIELD_EQ(inName,"numPointLights") ) { return get_numPointLights(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return getFragmentCode_dyn(); }
		if (HX_FIELD_EQ(inName,"initCommonsData") ) { return initCommonsData_dyn(); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return _numLightProbes; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return _numPointLights; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_shadowMethod") ) { return set_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadowMethod") ) { return get_shadowMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_normalMethod") ) { return set_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalMethod") ) { return get_normalMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"initConstantData") ) { return initConstantData_dyn(); }
		if (HX_FIELD_EQ(inName,"forceSeparateMVP") ) { return get_forceSeparateMVP(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_diffuseMethod") ) { return set_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseMethod") ) { return get_diffuseMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ambientMethod") ) { return set_ambientMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ambientMethod") ) { return get_ambientMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_preserveAlpha") ) { return set_preserveAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_preserveAlpha") ) { return get_preserveAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"updateUsedOffsets") ) { return updateUsedOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_forceSeparateMVP") ) { return _forceSeparateMVP; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { return _uvTransformIndex; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { return _sceneMatrixIndex; }
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { return _commonsDataIndex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_specularMethod") ) { return set_specularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularMethod") ) { return get_specularMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return get_numLightProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return get_numPointLights_dyn(); }
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { return _normalBufferIndex; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { return _probeWeightsIndex; }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { return _fragmentLightCode; }
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return get_enableLightFallOff(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onShaderInvalidated") ) { return onShaderInvalidated_dyn(); }
		if (HX_FIELD_EQ(inName,"initUVTransformData") ) { return initUVTransformData_dyn(); }
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { return _enableLightFallOff; }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { return _tangentBufferIndex; }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { return _vertexConstantData; }
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return get_diffuseLightSources(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateLightConstants") ) { return updateLightConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"addPassesFromMethods") ) { return addPassesFromMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"set_forceSeparateMVP") ) { return set_forceSeparateMVP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_forceSeparateMVP") ) { return get_forceSeparateMVP_dyn(); }
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { return _usingSpecularMethod; }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { return _cameraPositionIndex; }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { return _diffuseLightSources; }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return get_specularLightSources(); }
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { return get_numDirectionalLights(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateMethodConstants") ) { return updateMethodConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRegisterIndices") ) { return updateRegisterIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return _numDirectionalLights; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { return _fragmentConstantData; }
		if (HX_FIELD_EQ(inName,"_framentPostLightCode") ) { return _framentPostLightCode; }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { return _specularLightSources; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateShaderProperties") ) { return updateShaderProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableLightFallOff") ) { return set_enableLightFallOff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enableLightFallOff") ) { return get_enableLightFallOff_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_diffuseLightSources") ) { return set_diffuseLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_diffuseLightSources") ) { return get_diffuseLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return invalidateShaderProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { return _sceneNormalMatrixIndex; }
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { return _secondaryUVBufferIndex; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_specularLightSources") ) { return set_specularLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_specularLightSources") ) { return get_specularLightSources_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return get_numDirectionalLights_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { return _lightProbeDiffuseIndices; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { return _lightProbeSpecularIndices; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { return _lightFragmentConstantIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompiledPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_compiler") ) { _compiler=inValue.Cast< ::away3d::materials::compilation::ShaderCompiler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalMap") ) { return set_normalMap(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { return set_animateUVs(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animateUVs") ) { _animateUVs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexCode") ) { _vertexCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_usesNormals") ) { _usesNormals=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_methodSetup") ) { _methodSetup=inValue.Cast< ::away3d::materials::methods::ShaderMethodSetup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_passesDirty") ) { _passesDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowMethod") ) { return set_shadowMethod(inValue); }
		if (HX_FIELD_EQ(inName,"normalMethod") ) { return set_normalMethod(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"diffuseMethod") ) { return set_diffuseMethod(inValue); }
		if (HX_FIELD_EQ(inName,"ambientMethod") ) { return set_ambientMethod(inValue); }
		if (HX_FIELD_EQ(inName,"preserveAlpha") ) { return set_preserveAlpha(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_preserveAlpha") ) { _preserveAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightB") ) { _ambientLightB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightG") ) { _ambientLightG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientLightR") ) { _ambientLightR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvBufferIndex") ) { _uvBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularMethod") ) { return set_specularMethod(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceSeparateMVP") ) { return set_forceSeparateMVP(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_forceSeparateMVP") ) { _forceSeparateMVP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uvTransformIndex") ) { _uvTransformIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneMatrixIndex") ) { _sceneMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_commonsDataIndex") ) { _commonsDataIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_normalBufferIndex") ) { _normalBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_probeWeightsIndex") ) { _probeWeightsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentLightCode") ) { _fragmentLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableLightFallOff") ) { return set_enableLightFallOff(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_enableLightFallOff") ) { _enableLightFallOff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentBufferIndex") ) { _tangentBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantData") ) { _vertexConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffuseLightSources") ) { return set_diffuseLightSources(inValue); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_usingSpecularMethod") ) { _usingSpecularMethod=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraPositionIndex") ) { _cameraPositionIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseLightSources") ) { _diffuseLightSources=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"specularLightSources") ) { return set_specularLightSources(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantData") ) { _fragmentConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_framentPostLightCode") ) { _framentPostLightCode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularLightSources") ) { _specularLightSources=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_sceneNormalMatrixIndex") ) { _sceneNormalMatrixIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_secondaryUVBufferIndex") ) { _secondaryUVBufferIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_lightProbeDiffuseIndices") ) { _lightProbeDiffuseIndices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_lightProbeSpecularIndices") ) { _lightProbeSpecularIndices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_lightFragmentConstantIndex") ) { _lightFragmentConstantIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompiledPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_forceSeparateMVP"));
	outFields->push(HX_CSTRING("_enableLightFallOff"));
	outFields->push(HX_CSTRING("_numLightProbes"));
	outFields->push(HX_CSTRING("_numDirectionalLights"));
	outFields->push(HX_CSTRING("_numPointLights"));
	outFields->push(HX_CSTRING("_animateUVs"));
	outFields->push(HX_CSTRING("_preserveAlpha"));
	outFields->push(HX_CSTRING("_usesNormals"));
	outFields->push(HX_CSTRING("_usingSpecularMethod"));
	outFields->push(HX_CSTRING("_methodSetup"));
	outFields->push(HX_CSTRING("_compiler"));
	outFields->push(HX_CSTRING("_ambientLightB"));
	outFields->push(HX_CSTRING("_ambientLightG"));
	outFields->push(HX_CSTRING("_ambientLightR"));
	outFields->push(HX_CSTRING("_lightProbeSpecularIndices"));
	outFields->push(HX_CSTRING("_lightProbeDiffuseIndices"));
	outFields->push(HX_CSTRING("_uvTransformIndex"));
	outFields->push(HX_CSTRING("_cameraPositionIndex"));
	outFields->push(HX_CSTRING("_lightFragmentConstantIndex"));
	outFields->push(HX_CSTRING("_sceneNormalMatrixIndex"));
	outFields->push(HX_CSTRING("_sceneMatrixIndex"));
	outFields->push(HX_CSTRING("_tangentBufferIndex"));
	outFields->push(HX_CSTRING("_normalBufferIndex"));
	outFields->push(HX_CSTRING("_secondaryUVBufferIndex"));
	outFields->push(HX_CSTRING("_uvBufferIndex"));
	outFields->push(HX_CSTRING("_probeWeightsIndex"));
	outFields->push(HX_CSTRING("_commonsDataIndex"));
	outFields->push(HX_CSTRING("_fragmentConstantData"));
	outFields->push(HX_CSTRING("_vertexConstantData"));
	outFields->push(HX_CSTRING("_framentPostLightCode"));
	outFields->push(HX_CSTRING("_fragmentLightCode"));
	outFields->push(HX_CSTRING("_vertexCode"));
	outFields->push(HX_CSTRING("_diffuseLightSources"));
	outFields->push(HX_CSTRING("_specularLightSources"));
	outFields->push(HX_CSTRING("_passesDirty"));
	outFields->push(HX_CSTRING("_passes"));
	outFields->push(HX_CSTRING("diffuseLightSources"));
	outFields->push(HX_CSTRING("specularLightSources"));
	outFields->push(HX_CSTRING("specularMethod"));
	outFields->push(HX_CSTRING("diffuseMethod"));
	outFields->push(HX_CSTRING("shadowMethod"));
	outFields->push(HX_CSTRING("ambientMethod"));
	outFields->push(HX_CSTRING("normalMethod"));
	outFields->push(HX_CSTRING("normalMap"));
	outFields->push(HX_CSTRING("animateUVs"));
	outFields->push(HX_CSTRING("preserveAlpha"));
	outFields->push(HX_CSTRING("numLightProbes"));
	outFields->push(HX_CSTRING("numDirectionalLights"));
	outFields->push(HX_CSTRING("numPointLights"));
	outFields->push(HX_CSTRING("forceSeparateMVP"));
	outFields->push(HX_CSTRING("enableLightFallOff"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_diffuseLightSources"),
	HX_CSTRING("get_diffuseLightSources"),
	HX_CSTRING("set_specularLightSources"),
	HX_CSTRING("get_specularLightSources"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("usesLights"),
	HX_CSTRING("usesProbes"),
	HX_CSTRING("render"),
	HX_CSTRING("activate"),
	HX_CSTRING("getFragmentCode"),
	HX_CSTRING("getVertexCode"),
	HX_CSTRING("onShaderInvalidated"),
	HX_CSTRING("updateProbes"),
	HX_CSTRING("updateLightConstants"),
	HX_CSTRING("updateMethodConstants"),
	HX_CSTRING("cleanUp"),
	HX_CSTRING("initCommonsData"),
	HX_CSTRING("initUVTransformData"),
	HX_CSTRING("addPasses"),
	HX_CSTRING("addPassesFromMethods"),
	HX_CSTRING("invalidateShaderProgram"),
	HX_CSTRING("dispose"),
	HX_CSTRING("init"),
	HX_CSTRING("set_specularMethod"),
	HX_CSTRING("get_specularMethod"),
	HX_CSTRING("set_diffuseMethod"),
	HX_CSTRING("get_diffuseMethod"),
	HX_CSTRING("set_shadowMethod"),
	HX_CSTRING("get_shadowMethod"),
	HX_CSTRING("set_ambientMethod"),
	HX_CSTRING("get_ambientMethod"),
	HX_CSTRING("set_normalMethod"),
	HX_CSTRING("get_normalMethod"),
	HX_CSTRING("set_normalMap"),
	HX_CSTRING("get_normalMap"),
	HX_CSTRING("set_mipmap"),
	HX_CSTRING("set_animateUVs"),
	HX_CSTRING("get_animateUVs"),
	HX_CSTRING("set_preserveAlpha"),
	HX_CSTRING("get_preserveAlpha"),
	HX_CSTRING("updateRegisterIndices"),
	HX_CSTRING("updateShaderProperties"),
	HX_CSTRING("createCompiler"),
	HX_CSTRING("initCompiler"),
	HX_CSTRING("initConstantData"),
	HX_CSTRING("updateUsedOffsets"),
	HX_CSTRING("reset"),
	HX_CSTRING("updateProgram"),
	HX_CSTRING("get_numLightProbes"),
	HX_CSTRING("get_numDirectionalLights"),
	HX_CSTRING("get_numPointLights"),
	HX_CSTRING("set_forceSeparateMVP"),
	HX_CSTRING("get_forceSeparateMVP"),
	HX_CSTRING("set_enableLightFallOff"),
	HX_CSTRING("get_enableLightFallOff"),
	HX_CSTRING("_forceSeparateMVP"),
	HX_CSTRING("_enableLightFallOff"),
	HX_CSTRING("_numLightProbes"),
	HX_CSTRING("_numDirectionalLights"),
	HX_CSTRING("_numPointLights"),
	HX_CSTRING("_animateUVs"),
	HX_CSTRING("_preserveAlpha"),
	HX_CSTRING("_usesNormals"),
	HX_CSTRING("_usingSpecularMethod"),
	HX_CSTRING("_methodSetup"),
	HX_CSTRING("_compiler"),
	HX_CSTRING("_ambientLightB"),
	HX_CSTRING("_ambientLightG"),
	HX_CSTRING("_ambientLightR"),
	HX_CSTRING("_lightProbeSpecularIndices"),
	HX_CSTRING("_lightProbeDiffuseIndices"),
	HX_CSTRING("_uvTransformIndex"),
	HX_CSTRING("_cameraPositionIndex"),
	HX_CSTRING("_lightFragmentConstantIndex"),
	HX_CSTRING("_sceneNormalMatrixIndex"),
	HX_CSTRING("_sceneMatrixIndex"),
	HX_CSTRING("_tangentBufferIndex"),
	HX_CSTRING("_normalBufferIndex"),
	HX_CSTRING("_secondaryUVBufferIndex"),
	HX_CSTRING("_uvBufferIndex"),
	HX_CSTRING("_probeWeightsIndex"),
	HX_CSTRING("_commonsDataIndex"),
	HX_CSTRING("_fragmentConstantData"),
	HX_CSTRING("_vertexConstantData"),
	HX_CSTRING("_framentPostLightCode"),
	HX_CSTRING("_fragmentLightCode"),
	HX_CSTRING("_vertexCode"),
	HX_CSTRING("_diffuseLightSources"),
	HX_CSTRING("_specularLightSources"),
	HX_CSTRING("_passesDirty"),
	HX_CSTRING("_passes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompiledPass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompiledPass_obj::__mClass,"__mClass");
};

Class CompiledPass_obj::__mClass;

void CompiledPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.CompiledPass"), hx::TCanCast< CompiledPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CompiledPass_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
