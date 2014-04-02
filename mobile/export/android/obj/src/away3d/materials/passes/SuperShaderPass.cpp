#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
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
#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#include <away3d/materials/compilation/SuperShaderCompiler.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
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
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#include <away3d/materials/passes/SuperShaderPass.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
namespace away3d{
namespace materials{
namespace passes{

Void SuperShaderPass_obj::__construct(::away3d::materials::MaterialBase material)
{
HX_STACK_PUSH("SuperShaderPass::new","away3d/materials/passes/SuperShaderPass.hx",31);
{
	HX_STACK_LINE(33)
	this->_includeCasters = true;
	HX_STACK_LINE(43)
	super::__construct(material);
	HX_STACK_LINE(44)
	this->_needFragmentAnimation = true;
}
;
	return null();
}

SuperShaderPass_obj::~SuperShaderPass_obj() { }

Dynamic SuperShaderPass_obj::__CreateEmpty() { return  new SuperShaderPass_obj; }
hx::ObjectPtr< SuperShaderPass_obj > SuperShaderPass_obj::__new(::away3d::materials::MaterialBase material)
{  hx::ObjectPtr< SuperShaderPass_obj > result = new SuperShaderPass_obj();
	result->__construct(material);
	return result;}

Dynamic SuperShaderPass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SuperShaderPass_obj > result = new SuperShaderPass_obj();
	result->__construct(inArgs[0]);
	return result;}

bool SuperShaderPass_obj::set_ignoreLights( bool ignoreLights){
	HX_STACK_PUSH("SuperShaderPass::set_ignoreLights","away3d/materials/passes/SuperShaderPass.hx",436);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ignoreLights,"ignoreLights");
	HX_STACK_LINE(437)
	this->_ignoreLights = ignoreLights;
	HX_STACK_LINE(438)
	return this->_ignoreLights;
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_ignoreLights,return )

bool SuperShaderPass_obj::get_ignoreLights( ){
	HX_STACK_PUSH("SuperShaderPass::get_ignoreLights","away3d/materials/passes/SuperShaderPass.hx",431);
	HX_STACK_THIS(this);
	HX_STACK_LINE(431)
	return this->_ignoreLights;
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_ignoreLights,return )

Void SuperShaderPass_obj::updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SuperShaderPass::updateProbes","away3d/materials/passes/SuperShaderPass.hx",393);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(394)
		::away3d::lights::LightProbe probe;		HX_STACK_VAR(probe,"probe");
		HX_STACK_LINE(395)
		Array< ::Dynamic > lightProbes = this->_lightPicker->get_lightProbes();		HX_STACK_VAR(lightProbes,"lightProbes");
		HX_STACK_LINE(396)
		Array< Float > weights = this->_lightPicker->get_lightProbeWeights();		HX_STACK_VAR(weights,"weights");
		HX_STACK_LINE(397)
		int len = lightProbes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(398)
		bool addDiff = this->usesProbesForDiffuse();		HX_STACK_VAR(addDiff,"addDiff");
		HX_STACK_LINE(399)
		bool addSpec = (bool((this->_methodSetup->_specularMethod != null())) && bool(this->usesProbesForSpecular()));		HX_STACK_VAR(addSpec,"addSpec");
		HX_STACK_LINE(400)
		::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(402)
		if ((!(((bool(addDiff) || bool(addSpec)))))){
			HX_STACK_LINE(403)
			return null();
		}
		HX_STACK_LINE(407)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(409)
		{
			HX_STACK_LINE(409)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(409)
			while(((_g < len))){
				HX_STACK_LINE(409)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(410)
				probe = lightProbes->__get(i1).StaticCast< ::away3d::lights::LightProbe >();
				HX_STACK_LINE(412)
				if ((addDiff)){
					HX_STACK_LINE(413)
					context->setTextureAt(this->_lightProbeDiffuseIndices->__get(i1),probe->get_diffuseMap()->getTextureForStage3D(stage3DProxy));
				}
				HX_STACK_LINE(414)
				if ((addSpec)){
					HX_STACK_LINE(415)
					context->setTextureAt(this->_lightProbeSpecularIndices->__get(i1),probe->get_specularMap()->getTextureForStage3D(stage3DProxy));
				}
			}
		}
		HX_STACK_LINE(418)
		this->_fragmentConstantData[this->_probeWeightsIndex] = weights->__get((int)0);
		HX_STACK_LINE(419)
		this->_fragmentConstantData[(this->_probeWeightsIndex + (int)1)] = weights->__get((int)1);
		HX_STACK_LINE(420)
		this->_fragmentConstantData[(this->_probeWeightsIndex + (int)2)] = weights->__get((int)2);
		HX_STACK_LINE(421)
		this->_fragmentConstantData[(this->_probeWeightsIndex + (int)3)] = weights->__get((int)3);
	}
return null();
}


Void SuperShaderPass_obj::updateLightConstants( ){
{
		HX_STACK_PUSH("SuperShaderPass::updateLightConstants","away3d/materials/passes/SuperShaderPass.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_LINE(297)
		::away3d::lights::DirectionalLight dirLight;		HX_STACK_VAR(dirLight,"dirLight");
		HX_STACK_LINE(298)
		::away3d::lights::PointLight pointLight;		HX_STACK_VAR(pointLight,"pointLight");
		HX_STACK_LINE(299)
		int i;		HX_STACK_VAR(i,"i");
		int k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(300)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(301)
		::flash::geom::Vector3D dirPos;		HX_STACK_VAR(dirPos,"dirPos");
		HX_STACK_LINE(302)
		int total = (int)0;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(303)
		int numLightTypes = (  ((this->_includeCasters)) ? int((int)2) : int((int)1) );		HX_STACK_VAR(numLightTypes,"numLightTypes");
		HX_STACK_LINE(305)
		k = this->_lightFragmentConstantIndex;
		HX_STACK_LINE(309)
		int castVal;		HX_STACK_VAR(castVal,"castVal");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			while(((_g < numLightTypes))){
				HX_STACK_LINE(311)
				int castVal1 = (_g)++;		HX_STACK_VAR(castVal1,"castVal1");
				HX_STACK_LINE(312)
				Array< ::Dynamic > dirLights = (  (((castVal1 != (int)0))) ? Array< ::Dynamic >(this->_lightPicker->get_castingDirectionalLights()) : Array< ::Dynamic >(this->_lightPicker->get_directionalLights()) );		HX_STACK_VAR(dirLights,"dirLights");
				HX_STACK_LINE(313)
				len = dirLights->__Field(HX_CSTRING("length"),true);
				HX_STACK_LINE(314)
				hx::AddEq(total,len);
				HX_STACK_LINE(318)
				{
					HX_STACK_LINE(318)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(318)
					while(((_g1 < len))){
						HX_STACK_LINE(318)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(319)
						dirLight = dirLights->__get(i1).StaticCast< ::away3d::lights::DirectionalLight >();
						HX_STACK_LINE(320)
						dirPos = dirLight->get_sceneDirection();
						HX_STACK_LINE(322)
						hx::AddEq(this->_ambientLightR,dirLight->_ambientR);
						HX_STACK_LINE(323)
						hx::AddEq(this->_ambientLightG,dirLight->_ambientG);
						HX_STACK_LINE(324)
						hx::AddEq(this->_ambientLightB,dirLight->_ambientB);
						HX_STACK_LINE(326)
						this->_fragmentConstantData[(k)++] = -(dirPos->x);
						HX_STACK_LINE(327)
						this->_fragmentConstantData[(k)++] = -(dirPos->y);
						HX_STACK_LINE(328)
						this->_fragmentConstantData[(k)++] = -(dirPos->z);
						HX_STACK_LINE(329)
						this->_fragmentConstantData[(k)++] = (int)1;
						HX_STACK_LINE(331)
						this->_fragmentConstantData[(k)++] = dirLight->_diffuseR;
						HX_STACK_LINE(332)
						this->_fragmentConstantData[(k)++] = dirLight->_diffuseG;
						HX_STACK_LINE(333)
						this->_fragmentConstantData[(k)++] = dirLight->_diffuseB;
						HX_STACK_LINE(334)
						this->_fragmentConstantData[(k)++] = (int)1;
						HX_STACK_LINE(336)
						this->_fragmentConstantData[(k)++] = dirLight->_specularR;
						HX_STACK_LINE(337)
						this->_fragmentConstantData[(k)++] = dirLight->_specularG;
						HX_STACK_LINE(338)
						this->_fragmentConstantData[(k)++] = dirLight->_specularB;
						HX_STACK_LINE(339)
						this->_fragmentConstantData[(k)++] = (int)1;
					}
				}
			}
		}
		HX_STACK_LINE(344)
		if (((this->_numDirectionalLights > total))){
			HX_STACK_LINE(345)
			i = (k + (((this->_numDirectionalLights - total)) * (int)12));
			HX_STACK_LINE(346)
			while(((k < i))){
				HX_STACK_LINE(347)
				this->_fragmentConstantData[(k)++] = (int)0;
			}
		}
		HX_STACK_LINE(350)
		total = (int)0;
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			while(((_g < numLightTypes))){
				HX_STACK_LINE(352)
				int castVal1 = (_g)++;		HX_STACK_VAR(castVal1,"castVal1");
				HX_STACK_LINE(353)
				Array< ::Dynamic > pointLights = (  (((castVal1 != (int)0))) ? Array< ::Dynamic >(this->_lightPicker->get_castingPointLights()) : Array< ::Dynamic >(this->_lightPicker->get_pointLights()) );		HX_STACK_VAR(pointLights,"pointLights");
				HX_STACK_LINE(354)
				len = pointLights->__Field(HX_CSTRING("length"),true);
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(356)
					while(((_g1 < len))){
						HX_STACK_LINE(356)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(357)
						pointLight = pointLights->__get(i1).StaticCast< ::away3d::lights::PointLight >();
						HX_STACK_LINE(358)
						dirPos = pointLight->get_scenePosition();
						HX_STACK_LINE(360)
						hx::AddEq(this->_ambientLightR,pointLight->_ambientR);
						HX_STACK_LINE(361)
						hx::AddEq(this->_ambientLightG,pointLight->_ambientG);
						HX_STACK_LINE(362)
						hx::AddEq(this->_ambientLightB,pointLight->_ambientB);
						HX_STACK_LINE(364)
						this->_fragmentConstantData[(k)++] = dirPos->x;
						HX_STACK_LINE(365)
						this->_fragmentConstantData[(k)++] = dirPos->y;
						HX_STACK_LINE(366)
						this->_fragmentConstantData[(k)++] = dirPos->z;
						HX_STACK_LINE(367)
						this->_fragmentConstantData[(k)++] = (int)1;
						HX_STACK_LINE(369)
						this->_fragmentConstantData[(k)++] = pointLight->_diffuseR;
						HX_STACK_LINE(370)
						this->_fragmentConstantData[(k)++] = pointLight->_diffuseG;
						HX_STACK_LINE(371)
						this->_fragmentConstantData[(k)++] = pointLight->_diffuseB;
						HX_STACK_LINE(372)
						this->_fragmentConstantData[(k)++] = (pointLight->_radius * pointLight->_radius);
						HX_STACK_LINE(374)
						this->_fragmentConstantData[(k)++] = pointLight->_specularR;
						HX_STACK_LINE(375)
						this->_fragmentConstantData[(k)++] = pointLight->_specularG;
						HX_STACK_LINE(376)
						this->_fragmentConstantData[(k)++] = pointLight->_specularB;
						HX_STACK_LINE(377)
						this->_fragmentConstantData[(k)++] = pointLight->_fallOffFactor;
					}
				}
			}
		}
		HX_STACK_LINE(382)
		if (((this->_numPointLights > total))){
			HX_STACK_LINE(383)
			i = (k + (((total - this->_numPointLights)) * (int)12));
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				int _g = k;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(384)
				while(((_g < i))){
					HX_STACK_LINE(384)
					int k1 = (_g)++;		HX_STACK_VAR(k1,"k1");
					HX_STACK_LINE(385)
					this->_fragmentConstantData[k1] = (int)0;
				}
			}
		}
	}
return null();
}


Void SuperShaderPass_obj::updateMethodConstants( ){
{
		HX_STACK_PUSH("SuperShaderPass::updateMethodConstants","away3d/materials/passes/SuperShaderPass.hx",278);
		HX_STACK_THIS(this);
		HX_STACK_LINE(279)
		this->super::updateMethodConstants();
		HX_STACK_LINE(280)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(281)
			this->_methodSetup->_colorTransformMethod->initConstants(this->_methodSetup->_colorTransformMethodVO);
		}
		HX_STACK_LINE(283)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(284)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(286)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(287)
			while(((_g < len))){
				HX_STACK_LINE(287)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(288)
				methods->__get(i1).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method->initConstants(methods->__get(i1).StaticCast< ::away3d::materials::methods::MethodVOSet >()->data);
			}
		}
	}
return null();
}


bool SuperShaderPass_obj::usesProbesForDiffuse( ){
	HX_STACK_PUSH("SuperShaderPass::usesProbesForDiffuse","away3d/materials/passes/SuperShaderPass.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_LINE(270)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(this->_diffuseLightSources) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,usesProbesForDiffuse,return )

bool SuperShaderPass_obj::usesProbesForSpecular( ){
	HX_STACK_PUSH("SuperShaderPass::usesProbesForSpecular","away3d/materials/passes/SuperShaderPass.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_LINE(262)
	return (bool((this->_numLightProbes > (int)0)) && bool((((int(this->_specularLightSources) & int(::away3d::materials::LightSources_obj::PROBES))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,usesProbesForSpecular,return )

Void SuperShaderPass_obj::addPassesFromMethods( ){
{
		HX_STACK_PUSH("SuperShaderPass::addPassesFromMethods","away3d/materials/passes/SuperShaderPass.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_LINE(246)
		this->super::addPassesFromMethods();
		HX_STACK_LINE(248)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(249)
			this->addPasses(this->_methodSetup->_colorTransformMethod->get_passes());
		}
		HX_STACK_LINE(251)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(253)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = methods->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			while(((_g1 < _g))){
				HX_STACK_LINE(254)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(255)
				this->addPasses(methods->__get(i1).StaticCast< ::away3d::materials::methods::MethodVOSet >()->method->get_passes());
			}
		}
	}
return null();
}


Void SuperShaderPass_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("SuperShaderPass::deactivate","away3d/materials/passes/SuperShaderPass.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(225)
		this->super::deactivate(stage3DProxy);
		HX_STACK_LINE(227)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(228)
			this->_methodSetup->_colorTransformMethod->deactivate(this->_methodSetup->_colorTransformMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(230)
		::away3d::materials::methods::MethodVOSet set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(231)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(232)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(234)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while(((_g < len))){
				HX_STACK_LINE(235)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(236)
				set = methods->__get(i1).StaticCast< ::away3d::materials::methods::MethodVOSet >();
				HX_STACK_LINE(237)
				set->method->deactivate(set->data,stage3DProxy);
			}
		}
	}
return null();
}


Void SuperShaderPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("SuperShaderPass::activate","away3d/materials/passes/SuperShaderPass.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(198)
		this->super::activate(stage3DProxy,camera);
		HX_STACK_LINE(200)
		if (((this->_methodSetup->_colorTransformMethod != null()))){
			HX_STACK_LINE(201)
			this->_methodSetup->_colorTransformMethod->activate(this->_methodSetup->_colorTransformMethodVO,stage3DProxy);
		}
		HX_STACK_LINE(203)
		Array< ::Dynamic > methods = this->_methodSetup->_methods;		HX_STACK_VAR(methods,"methods");
		HX_STACK_LINE(204)
		int len = methods->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(207)
			while(((_g < len))){
				HX_STACK_LINE(207)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(208)
				::away3d::materials::methods::MethodVOSet set = methods->__get(i).StaticCast< ::away3d::materials::methods::MethodVOSet >();		HX_STACK_VAR(set,"set");
				HX_STACK_LINE(209)
				set->method->activate(set->data,stage3DProxy);
			}
		}
		HX_STACK_LINE(212)
		if (((this->_cameraPositionIndex >= (int)0))){
			HX_STACK_LINE(213)
			::flash::geom::Vector3D pos = camera->get_scenePosition();		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(214)
			this->_vertexConstantData[this->_cameraPositionIndex] = pos->x;
			HX_STACK_LINE(215)
			this->_vertexConstantData[(this->_cameraPositionIndex + (int)1)] = pos->y;
			HX_STACK_LINE(216)
			this->_vertexConstantData[(this->_cameraPositionIndex + (int)2)] = pos->z;
		}
	}
return null();
}


Void SuperShaderPass_obj::updateLights( ){
{
		HX_STACK_PUSH("SuperShaderPass::updateLights","away3d/materials/passes/SuperShaderPass.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_LINE(174)
		this->super::updateLights();
		HX_STACK_LINE(175)
		if (((bool((this->_lightPicker != null())) && bool(!(this->_ignoreLights))))){
			HX_STACK_LINE(176)
			this->_numPointLights = this->_lightPicker->get_numPointLights();
			HX_STACK_LINE(177)
			this->_numDirectionalLights = this->_lightPicker->get_numDirectionalLights();
			HX_STACK_LINE(178)
			this->_numLightProbes = this->_lightPicker->get_numLightProbes();
			HX_STACK_LINE(180)
			if ((this->_includeCasters)){
				HX_STACK_LINE(181)
				hx::AddEq(this->_numPointLights,this->_lightPicker->get_numCastingPointLights());
				HX_STACK_LINE(182)
				hx::AddEq(this->_numDirectionalLights,this->_lightPicker->get_numCastingDirectionalLights());
			}
		}
		else{
			HX_STACK_LINE(185)
			this->_numPointLights = (int)0;
			HX_STACK_LINE(186)
			this->_numDirectionalLights = (int)0;
			HX_STACK_LINE(187)
			this->_numLightProbes = (int)0;
		}
		HX_STACK_LINE(190)
		this->invalidateShaderProgram(null());
	}
return null();
}


Void SuperShaderPass_obj::removeMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("SuperShaderPass::removeMethod","away3d/materials/passes/SuperShaderPass.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(165)
		this->_methodSetup->removeMethod(method);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,removeMethod,(void))

Void SuperShaderPass_obj::addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index){
{
		HX_STACK_PUSH("SuperShaderPass::addMethodAt","away3d/materials/passes/SuperShaderPass.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(156)
		this->_methodSetup->addMethodAt(method,index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SuperShaderPass_obj,addMethodAt,(void))

::away3d::materials::methods::EffectMethodBase SuperShaderPass_obj::getMethodAt( int index){
	HX_STACK_PUSH("SuperShaderPass::getMethodAt","away3d/materials/passes/SuperShaderPass.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(146)
	return this->_methodSetup->getMethodAt(index);
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,getMethodAt,return )

bool SuperShaderPass_obj::hasMethod( ::away3d::materials::methods::EffectMethodBase method){
	HX_STACK_PUSH("SuperShaderPass::hasMethod","away3d/materials/passes/SuperShaderPass.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(method,"method");
	HX_STACK_LINE(136)
	return this->_methodSetup->hasMethod(method);
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,hasMethod,return )

int SuperShaderPass_obj::get_numMethods( ){
	HX_STACK_PUSH("SuperShaderPass::get_numMethods","away3d/materials/passes/SuperShaderPass.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(125)
	return this->_methodSetup->get_numMethods();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_numMethods,return )

Void SuperShaderPass_obj::addMethod( ::away3d::materials::methods::EffectMethodBase method){
{
		HX_STACK_PUSH("SuperShaderPass::addMethod","away3d/materials/passes/SuperShaderPass.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(method,"method");
		HX_STACK_LINE(116)
		this->_methodSetup->addMethod(method);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,addMethod,(void))

::away3d::materials::methods::ColorTransformMethod SuperShaderPass_obj::set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value){
	HX_STACK_PUSH("SuperShaderPass::set_colorTransformMethod","away3d/materials/passes/SuperShaderPass.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(106)
	this->_methodSetup->set_colorTransformMethod(value);
	HX_STACK_LINE(107)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_colorTransformMethod,return )

::away3d::materials::methods::ColorTransformMethod SuperShaderPass_obj::get_colorTransformMethod( ){
	HX_STACK_PUSH("SuperShaderPass::get_colorTransformMethod","away3d/materials/passes/SuperShaderPass.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(100)
	return this->_methodSetup->get_colorTransformMethod();
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_colorTransformMethod,return )

::flash::geom::ColorTransform SuperShaderPass_obj::set_colorTransform( ::flash::geom::ColorTransform value){
	HX_STACK_PUSH("SuperShaderPass::set_colorTransform","away3d/materials/passes/SuperShaderPass.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(84)
	if (((value != null()))){
		HX_STACK_LINE(85)
		if (((this->get_colorTransformMethod() == null()))){
			HX_STACK_LINE(85)
			this->set_colorTransformMethod(::away3d::materials::methods::ColorTransformMethod_obj::__new());
		}
		HX_STACK_LINE(86)
		this->_methodSetup->_colorTransformMethod->set_colorTransform(value);
	}
	else{
		HX_STACK_LINE(87)
		if (((value == null()))){
			HX_STACK_LINE(88)
			if (((this->_methodSetup->_colorTransformMethod != null()))){
				HX_STACK_LINE(89)
				this->set_colorTransformMethod(null());
			}
			HX_STACK_LINE(90)
			this->set_colorTransformMethod(this->_methodSetup->_colorTransformMethod = null());
		}
	}
	HX_STACK_LINE(92)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_colorTransform,return )

::flash::geom::ColorTransform SuperShaderPass_obj::get_colorTransform( ){
	HX_STACK_PUSH("SuperShaderPass::get_colorTransform","away3d/materials/passes/SuperShaderPass.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return (  (((this->_methodSetup->get_colorTransformMethod() != null()))) ? ::flash::geom::ColorTransform(this->_methodSetup->_colorTransformMethod->get_colorTransform()) : ::flash::geom::ColorTransform(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_colorTransform,return )

bool SuperShaderPass_obj::set_includeCasters( bool value){
	HX_STACK_PUSH("SuperShaderPass::set_includeCasters","away3d/materials/passes/SuperShaderPass.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(66)
	if (((this->_includeCasters == value))){
		HX_STACK_LINE(67)
		return this->_includeCasters;
	}
	HX_STACK_LINE(68)
	this->_includeCasters = value;
	HX_STACK_LINE(69)
	this->invalidateShaderProgram(null());
	HX_STACK_LINE(70)
	return this->_includeCasters;
}


HX_DEFINE_DYNAMIC_FUNC1(SuperShaderPass_obj,set_includeCasters,return )

bool SuperShaderPass_obj::get_includeCasters( ){
	HX_STACK_PUSH("SuperShaderPass::get_includeCasters","away3d/materials/passes/SuperShaderPass.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->_includeCasters;
}


HX_DEFINE_DYNAMIC_FUNC0(SuperShaderPass_obj,get_includeCasters,return )

::away3d::materials::compilation::ShaderCompiler SuperShaderPass_obj::createCompiler( ::String profile){
	HX_STACK_PUSH("SuperShaderPass::createCompiler","away3d/materials/passes/SuperShaderPass.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(profile,"profile");
	HX_STACK_LINE(51)
	return ::away3d::materials::compilation::SuperShaderCompiler_obj::__new(profile);
}



SuperShaderPass_obj::SuperShaderPass_obj()
{
}

void SuperShaderPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuperShaderPass);
	HX_MARK_MEMBER_NAME(numMethods,"numMethods");
	HX_MARK_MEMBER_NAME(_ignoreLights,"_ignoreLights");
	HX_MARK_MEMBER_NAME(_includeCasters,"_includeCasters");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SuperShaderPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numMethods,"numMethods");
	HX_VISIT_MEMBER_NAME(_ignoreLights,"_ignoreLights");
	HX_VISIT_MEMBER_NAME(_includeCasters,"_includeCasters");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SuperShaderPass_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasMethod") ) { return hasMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"addMethod") ) { return addMethod_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"numMethods") ) { return inCallProp ? get_numMethods() : numMethods; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMethodAt") ) { return addMethodAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getMethodAt") ) { return getMethodAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoreLights") ) { return get_ignoreLights(); }
		if (HX_FIELD_EQ(inName,"updateProbes") ) { return updateProbes_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLights") ) { return updateLights_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMethod") ) { return removeMethod_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ignoreLights") ) { return _ignoreLights; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numMethods") ) { return get_numMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		if (HX_FIELD_EQ(inName,"includeCasters") ) { return get_includeCasters(); }
		if (HX_FIELD_EQ(inName,"createCompiler") ) { return createCompiler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_includeCasters") ) { return _includeCasters; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_ignoreLights") ) { return set_ignoreLights_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignoreLights") ) { return get_ignoreLights_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_includeCasters") ) { return set_includeCasters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_includeCasters") ) { return get_includeCasters_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateLightConstants") ) { return updateLightConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbesForDiffuse") ) { return usesProbesForDiffuse_dyn(); }
		if (HX_FIELD_EQ(inName,"addPassesFromMethods") ) { return addPassesFromMethods_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { return get_colorTransformMethod(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateMethodConstants") ) { return updateMethodConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"usesProbesForSpecular") ) { return usesProbesForSpecular_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_colorTransformMethod") ) { return set_colorTransformMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransformMethod") ) { return get_colorTransformMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SuperShaderPass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"numMethods") ) { numMethods=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoreLights") ) { return set_ignoreLights(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ignoreLights") ) { _ignoreLights=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		if (HX_FIELD_EQ(inName,"includeCasters") ) { return set_includeCasters(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_includeCasters") ) { _includeCasters=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"colorTransformMethod") ) { return set_colorTransformMethod(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SuperShaderPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ignoreLights"));
	outFields->push(HX_CSTRING("numMethods"));
	outFields->push(HX_CSTRING("colorTransformMethod"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("includeCasters"));
	outFields->push(HX_CSTRING("_ignoreLights"));
	outFields->push(HX_CSTRING("_includeCasters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_ignoreLights"),
	HX_CSTRING("get_ignoreLights"),
	HX_CSTRING("updateProbes"),
	HX_CSTRING("updateLightConstants"),
	HX_CSTRING("updateMethodConstants"),
	HX_CSTRING("usesProbesForDiffuse"),
	HX_CSTRING("usesProbesForSpecular"),
	HX_CSTRING("addPassesFromMethods"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("activate"),
	HX_CSTRING("updateLights"),
	HX_CSTRING("removeMethod"),
	HX_CSTRING("addMethodAt"),
	HX_CSTRING("getMethodAt"),
	HX_CSTRING("hasMethod"),
	HX_CSTRING("get_numMethods"),
	HX_CSTRING("numMethods"),
	HX_CSTRING("addMethod"),
	HX_CSTRING("set_colorTransformMethod"),
	HX_CSTRING("get_colorTransformMethod"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("set_includeCasters"),
	HX_CSTRING("get_includeCasters"),
	HX_CSTRING("createCompiler"),
	HX_CSTRING("_ignoreLights"),
	HX_CSTRING("_includeCasters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperShaderPass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SuperShaderPass_obj::__mClass,"__mClass");
};

Class SuperShaderPass_obj::__mClass;

void SuperShaderPass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.passes.SuperShaderPass"), hx::TCanCast< SuperShaderPass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SuperShaderPass_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
