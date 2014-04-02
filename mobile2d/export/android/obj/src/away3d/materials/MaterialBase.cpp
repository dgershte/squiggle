#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
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
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_AssetType
#include <away3d/library/assets/AssetType.h>
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
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DepthMapPass
#include <away3d/materials/passes/DepthMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#include <away3d/materials/passes/DistanceMapPass.h>
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
namespace away3d{
namespace materials{

Void MaterialBase_obj::__construct()
{
HX_STACK_PUSH("MaterialBase::new","away3d/materials/MaterialBase.hx",108);
{
	HX_STACK_LINE(109)
	this->_blendMode = ::flash::display::BlendMode_obj::NORMAL;
	HX_STACK_LINE(110)
	this->_mipmap = true;
	HX_STACK_LINE(111)
	this->_smooth = true;
	HX_STACK_LINE(112)
	this->_depthCompareMode = (int)515;
	HX_STACK_LINE(113)
	this->_owners = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(114)
	this->_passes = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(115)
	this->_depthPass = ::away3d::materials::passes::DepthMapPass_obj::__new();
	HX_STACK_LINE(116)
	this->_distancePass = ::away3d::materials::passes::DistanceMapPass_obj::__new();
	HX_STACK_LINE(117)
	this->_depthPass->addEventListener(::flash::events::Event_obj::CHANGE,this->onDepthPassChange_dyn(),null(),null(),null());
	HX_STACK_LINE(118)
	this->_distancePass->addEventListener(::flash::events::Event_obj::CHANGE,this->onDistancePassChange_dyn(),null(),null(),null());
	HX_STACK_LINE(120)
	this->set_alphaPremultiplied(true);
	HX_STACK_LINE(121)
	this->_uniqueId = (::away3d::materials::MaterialBase_obj::MATERIAL_ID_COUNT)++;
	HX_STACK_LINE(122)
	this->_depthPassId = (int)0;
	HX_STACK_LINE(123)
	this->_numPasses = (int)0;
	HX_STACK_LINE(124)
	super::__construct(null());
}
;
	return null();
}

MaterialBase_obj::~MaterialBase_obj() { }

Dynamic MaterialBase_obj::__CreateEmpty() { return  new MaterialBase_obj; }
hx::ObjectPtr< MaterialBase_obj > MaterialBase_obj::__new()
{  hx::ObjectPtr< MaterialBase_obj > result = new MaterialBase_obj();
	result->__construct();
	return result;}

Dynamic MaterialBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaterialBase_obj > result = new MaterialBase_obj();
	result->__construct();
	return result;}

hx::Object *MaterialBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

Void MaterialBase_obj::onDepthPassChange( ::flash::events::Event event){
{
		HX_STACK_PUSH("MaterialBase::onDepthPassChange","away3d/materials/MaterialBase.hx",679);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(680)
		Array< int > ids = this->_depthPass->_program3Dids;		HX_STACK_VAR(ids,"ids");
		HX_STACK_LINE(681)
		int len = ids->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(682)
		this->_depthPassId = (int)0;
		HX_STACK_LINE(683)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(684)
		while(((j < len))){
			HX_STACK_LINE(685)
			if (((ids->__get(j) != (int)-1))){
				HX_STACK_LINE(686)
				hx::AddEq(this->_depthPassId,ids->__get(j));
				HX_STACK_LINE(687)
				j = len;
			}
			HX_STACK_LINE(689)
			++(j);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onDepthPassChange,(void))

Void MaterialBase_obj::onDistancePassChange( ::flash::events::Event event){
{
		HX_STACK_PUSH("MaterialBase::onDistancePassChange","away3d/materials/MaterialBase.hx",661);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(662)
		Array< int > ids = this->_distancePass->_program3Dids;		HX_STACK_VAR(ids,"ids");
		HX_STACK_LINE(663)
		int len = ids->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(664)
		this->_depthPassId = (int)0;
		HX_STACK_LINE(665)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(666)
		while(((j < len))){
			HX_STACK_LINE(667)
			if (((ids->__get(j) != (int)-1))){
				HX_STACK_LINE(668)
				hx::AddEq(this->_depthPassId,ids->__get(j));
				HX_STACK_LINE(669)
				j = len;
			}
			HX_STACK_LINE(671)
			++(j);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onDistancePassChange,(void))

Void MaterialBase_obj::onPassChange( ::flash::events::Event event){
{
		HX_STACK_PUSH("MaterialBase::onPassChange","away3d/materials/MaterialBase.hx",635);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(636)
		Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
		HX_STACK_LINE(637)
		Array< int > ids;		HX_STACK_VAR(ids,"ids");
		HX_STACK_LINE(638)
		int len;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(639)
		this->_renderOrderId = (int)0;
		HX_STACK_LINE(640)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(641)
		while(((i < this->_numPasses))){
			HX_STACK_LINE(642)
			ids = this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->_program3Dids;
			HX_STACK_LINE(643)
			len = ids->__Field(HX_CSTRING("length"),true);
			HX_STACK_LINE(644)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(645)
			while(((j < len))){
				HX_STACK_LINE(646)
				if (((ids->__get(j) != (int)-1))){
					HX_STACK_LINE(647)
					hx::AddEq(this->_renderOrderId,::Std_obj::_int((mult * ids->__get(j))));
					HX_STACK_LINE(648)
					j = len;
				}
				HX_STACK_LINE(650)
				++(j);
			}
			HX_STACK_LINE(652)
			hx::MultEq(mult,(int)1000);
			HX_STACK_LINE(653)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,onPassChange,(void))

Void MaterialBase_obj::addPass( ::away3d::materials::passes::MaterialPassBase pass){
{
		HX_STACK_PUSH("MaterialBase::addPass","away3d/materials/MaterialBase.hx",618);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pass,"pass");
		HX_STACK_LINE(619)
		this->_passes[(this->_numPasses)++] = pass;
		HX_STACK_LINE(620)
		pass->set_animationSet(this->_animationSet);
		HX_STACK_LINE(621)
		pass->set_alphaPremultiplied(this->_alphaPremultiplied);
		HX_STACK_LINE(622)
		pass->set_mipmap(this->_mipmap);
		HX_STACK_LINE(623)
		pass->set_smooth(this->_smooth);
		HX_STACK_LINE(624)
		pass->set_repeat(this->_repeat);
		HX_STACK_LINE(625)
		pass->set_lightPicker(this->_lightPicker);
		HX_STACK_LINE(626)
		pass->set_bothSides(this->_bothSides);
		HX_STACK_LINE(627)
		pass->addEventListener(::flash::events::Event_obj::CHANGE,this->onPassChange_dyn(),null(),null(),null());
		HX_STACK_LINE(628)
		this->invalidatePasses(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,addPass,(void))

Void MaterialBase_obj::clearPasses( ){
{
		HX_STACK_PUSH("MaterialBase::clearPasses","away3d/materials/MaterialBase.hx",603);
		HX_STACK_THIS(this);
		HX_STACK_LINE(604)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(605)
		while(((i < this->_numPasses))){
			HX_STACK_LINE(606)
			this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->removeEventListener(::flash::events::Event_obj::CHANGE,this->onPassChange_dyn(),null());
			HX_STACK_LINE(607)
			++(i);
		}
		HX_STACK_LINE(610)
		this->_numPasses = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,clearPasses,(void))

Void MaterialBase_obj::removePass( ::away3d::materials::passes::MaterialPassBase pass){
{
		HX_STACK_PUSH("MaterialBase::removePass","away3d/materials/MaterialBase.hx",594);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pass,"pass");
		HX_STACK_LINE(595)
		::flash::_Vector::Vector_Impl__obj::splice(this->_passes,::flash::_Vector::Vector_Impl__obj::indexOf(this->_passes,pass,null()),(int)1);
		HX_STACK_LINE(596)
		--(this->_numPasses);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,removePass,(void))

Void MaterialBase_obj::invalidatePasses( ::away3d::materials::passes::MaterialPassBase triggerPass){
{
		HX_STACK_PUSH("MaterialBase::invalidatePasses","away3d/materials/MaterialBase.hx",546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triggerPass,"triggerPass");
		HX_STACK_LINE(546)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(547)
		::away3d::core::base::IMaterialOwner owner;		HX_STACK_VAR(owner,"owner");
		HX_STACK_LINE(549)
		this->_depthPass->invalidateShaderProgram(null());
		HX_STACK_LINE(550)
		this->_distancePass->invalidateShaderProgram(null());
		HX_STACK_LINE(555)
		if (((this->_animationSet != null()))){
			HX_STACK_LINE(556)
			this->_animationSet->resetGPUCompatibility();

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			bool run(::away3d::core::base::IMaterialOwner owner1){
				HX_STACK_PUSH("*::_Function_2_1","away3d/materials/MaterialBase.hx",557);
				HX_STACK_ARG(owner1,"owner1");
				{
					HX_STACK_LINE(558)
					if (((owner1->get_animator() != null()))){
						HX_STACK_LINE(559)
						owner1->get_animator()->testGPUCompatibility(_g->__get((int)0).StaticCast< ::away3d::materials::MaterialBase >()->_depthPass);
						HX_STACK_LINE(560)
						owner1->get_animator()->testGPUCompatibility(_g->__get((int)0).StaticCast< ::away3d::materials::MaterialBase >()->_distancePass);
					}
					HX_STACK_LINE(562)
					return true;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(557)
			::Lambda_obj::foreach(this->_owners, Dynamic(new _Function_2_1(_g)));
		}
		HX_STACK_LINE(568)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g2 = this->_numPasses;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(570)
			while(((_g1 < _g2))){
				HX_STACK_LINE(570)
				Array< int > i1 = Array_obj< int >::__new().Add((_g1)++);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(572)
				if (((this->_passes->__get(i1->__get((int)0)).StaticCast< ::away3d::materials::passes::MaterialPassBase >() != triggerPass))){
					HX_STACK_LINE(573)
					this->_passes->__get(i1->__get((int)0)).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->invalidateShaderProgram(false);
				}
				HX_STACK_LINE(579)
				if (((this->_animationSet != null()))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Array< int >,i1,Array< ::Dynamic >,_g)
					bool run(::away3d::core::base::IMaterialOwner owner1){
						HX_STACK_PUSH("*::_Function_4_1","away3d/materials/MaterialBase.hx",580);
						HX_STACK_ARG(owner1,"owner1");
						{
							HX_STACK_LINE(581)
							if (((owner1->get_animator() != null()))){
								HX_STACK_LINE(582)
								owner1->get_animator()->testGPUCompatibility(_g->__get((int)0).StaticCast< ::away3d::materials::MaterialBase >()->_passes->__get(i1->__get((int)0)).StaticCast< ::away3d::materials::passes::MaterialPassBase >());
							}
							HX_STACK_LINE(583)
							return true;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(579)
					::Lambda_obj::foreach(this->_owners, Dynamic(new _Function_4_1(i1,_g)));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,invalidatePasses,(void))

Void MaterialBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("MaterialBase::deactivate","away3d/materials/MaterialBase.hx",534);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(534)
		this->_passes->__get((this->_numPasses - (int)1)).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->deactivate(stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,deactivate,(void))

Void MaterialBase_obj::updateMaterial( ::flash::display3D::Context3D context){
{
		HX_STACK_PUSH("MaterialBase::updateMaterial","away3d/materials/MaterialBase.hx",525);
		HX_STACK_THIS(this);
		HX_STACK_ARG(context,"context");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,updateMaterial,(void))

Array< ::Dynamic > MaterialBase_obj::get_owners( ){
	HX_STACK_PUSH("MaterialBase::get_owners","away3d/materials/MaterialBase.hx",515);
	HX_STACK_THIS(this);
	HX_STACK_LINE(515)
	return this->_owners;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_owners,return )

Void MaterialBase_obj::removeOwner( ::away3d::core::base::IMaterialOwner owner){
{
		HX_STACK_PUSH("MaterialBase::removeOwner","away3d/materials/MaterialBase.hx",494);
		HX_STACK_THIS(this);
		HX_STACK_ARG(owner,"owner");
		HX_STACK_LINE(495)
		this->_owners->splice(::Lambda_obj::indexOf(this->_owners,owner),(int)1);
		HX_STACK_LINE(496)
		if (((this->_owners->length == (int)0))){
			HX_STACK_LINE(497)
			this->_animationSet = null();
			HX_STACK_LINE(498)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(499)
			while(((i < this->_numPasses))){
				HX_STACK_LINE(500)
				this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_animationSet(this->_animationSet);
				HX_STACK_LINE(501)
				++(i);
			}
			HX_STACK_LINE(503)
			this->_depthPass->set_animationSet(this->_animationSet);
			HX_STACK_LINE(504)
			this->_distancePass->set_animationSet(this->_animationSet);
			HX_STACK_LINE(505)
			this->invalidatePasses(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,removeOwner,(void))

Void MaterialBase_obj::addOwner( ::away3d::core::base::IMaterialOwner owner){
{
		HX_STACK_PUSH("MaterialBase::addOwner","away3d/materials/MaterialBase.hx",467);
		HX_STACK_THIS(this);
		HX_STACK_ARG(owner,"owner");
		HX_STACK_LINE(468)
		this->_owners->push(owner);
		HX_STACK_LINE(469)
		if (((owner->get_animator() != null()))){
			HX_STACK_LINE(469)
			if (((bool((this->_animationSet != null())) && bool((owner->get_animator()->get_animationSet() != this->_animationSet))))){
				HX_STACK_LINE(470)
				hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("A Material instance cannot be shared across renderables with different animator libraries"),null()));
			}
			else{
				HX_STACK_LINE(471)
				if (((this->_animationSet != owner->get_animator()->get_animationSet()))){
					HX_STACK_LINE(473)
					this->_animationSet = owner->get_animator()->get_animationSet();
					HX_STACK_LINE(474)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(475)
					while(((i < this->_numPasses))){
						HX_STACK_LINE(476)
						this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_animationSet(this->_animationSet);
						HX_STACK_LINE(477)
						++(i);
					}
					HX_STACK_LINE(479)
					this->_depthPass->set_animationSet(this->_animationSet);
					HX_STACK_LINE(480)
					this->_distancePass->set_animationSet(this->_animationSet);
					HX_STACK_LINE(481)
					this->invalidatePasses(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,addOwner,(void))

Void MaterialBase_obj::renderPass( int index,::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::traverse::EntityCollector entityCollector,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("MaterialBase::renderPass","away3d/materials/MaterialBase.hx",447);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(448)
		if (((this->_lightPicker != null()))){
			HX_STACK_LINE(448)
			this->_lightPicker->collectLights(renderable,entityCollector);
		}
		HX_STACK_LINE(449)
		::away3d::materials::passes::MaterialPassBase pass = this->_passes->__get(index).StaticCast< ::away3d::materials::passes::MaterialPassBase >();		HX_STACK_VAR(pass,"pass");
		HX_STACK_LINE(450)
		if (((renderable->__Field(HX_CSTRING("get_animator"),true)() != null()))){
			HX_STACK_LINE(450)
			pass->updateAnimationState(renderable,stage3DProxy,entityCollector->get_camera());
		}
		HX_STACK_LINE(451)
		pass->render(renderable,stage3DProxy,entityCollector->get_camera(),viewProjection);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(MaterialBase_obj,renderPass,(void))

Void MaterialBase_obj::deactivatePass( int index,::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("MaterialBase::deactivatePass","away3d/materials/MaterialBase.hx",433);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(433)
		this->_passes->__get(index).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->deactivate(stage3DProxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaterialBase_obj,deactivatePass,(void))

Void MaterialBase_obj::activatePass( int index,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("MaterialBase::activatePass","away3d/materials/MaterialBase.hx",421);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(421)
		this->_passes->__get(index).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->activate(stage3DProxy,camera);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialBase_obj,activatePass,(void))

bool MaterialBase_obj::passRendersToTexture( int index){
	HX_STACK_PUSH("MaterialBase::passRendersToTexture","away3d/materials/MaterialBase.hx",408);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(408)
	return this->_passes->__get(index).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->get_renderToTexture();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,passRendersToTexture,return )

Void MaterialBase_obj::renderDepth( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection){
{
		HX_STACK_PUSH("MaterialBase::renderDepth","away3d/materials/MaterialBase.hx",387);
		HX_STACK_THIS(this);
		HX_STACK_ARG(renderable,"renderable");
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(viewProjection,"viewProjection");
		HX_STACK_LINE(387)
		if ((this->_distanceBasedDepthRender)){
			HX_STACK_LINE(389)
			if (((renderable->__Field(HX_CSTRING("get_animator"),true)() != null()))){
				HX_STACK_LINE(389)
				this->_distancePass->updateAnimationState(renderable,stage3DProxy,camera);
			}
			HX_STACK_LINE(390)
			this->_distancePass->render(renderable,stage3DProxy,camera,viewProjection);
		}
		else{
			HX_STACK_LINE(394)
			if (((renderable->__Field(HX_CSTRING("get_animator"),true)() != null()))){
				HX_STACK_LINE(394)
				this->_depthPass->updateAnimationState(renderable,stage3DProxy,camera);
			}
			HX_STACK_LINE(395)
			this->_depthPass->render(renderable,stage3DProxy,camera,viewProjection);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MaterialBase_obj,renderDepth,(void))

Void MaterialBase_obj::deactivateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy){
{
		HX_STACK_PUSH("MaterialBase::deactivateForDepth","away3d/materials/MaterialBase.hx",370);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(370)
		if ((this->_distanceBasedDepthRender)){
			HX_STACK_LINE(371)
			this->_distancePass->deactivate(stage3DProxy);
		}
		else{
			HX_STACK_LINE(372)
			this->_depthPass->deactivate(stage3DProxy);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,deactivateForDepth,(void))

Void MaterialBase_obj::activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,hx::Null< bool >  __o_distanceBased){
bool distanceBased = __o_distanceBased.Default(false);
	HX_STACK_PUSH("MaterialBase::activateForDepth","away3d/materials/MaterialBase.hx",356);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_ARG(camera,"camera");
	HX_STACK_ARG(distanceBased,"distanceBased");
{
		HX_STACK_LINE(357)
		this->_distanceBasedDepthRender = distanceBased;
		HX_STACK_LINE(358)
		if ((distanceBased)){
			HX_STACK_LINE(358)
			this->_distancePass->activate(stage3DProxy,camera);
		}
		else{
			HX_STACK_LINE(359)
			this->_depthPass->activate(stage3DProxy,camera);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(MaterialBase_obj,activateForDepth,(void))

bool MaterialBase_obj::hasDepthAlphaThreshold( ){
	HX_STACK_PUSH("MaterialBase::hasDepthAlphaThreshold","away3d/materials/MaterialBase.hx",340);
	HX_STACK_THIS(this);
	HX_STACK_LINE(340)
	return (this->_depthPass->get_alphaThreshold() > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,hasDepthAlphaThreshold,return )

int MaterialBase_obj::get_numPasses( ){
	HX_STACK_PUSH("MaterialBase::get_numPasses","away3d/materials/MaterialBase.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_LINE(330)
	return this->_numPasses;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_numPasses,return )

int MaterialBase_obj::get_uniqueId( ){
	HX_STACK_PUSH("MaterialBase::get_uniqueId","away3d/materials/MaterialBase.hx",320);
	HX_STACK_THIS(this);
	HX_STACK_LINE(320)
	return this->_uniqueId;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_uniqueId,return )

bool MaterialBase_obj::get_requiresBlending( ){
	HX_STACK_PUSH("MaterialBase::get_requiresBlending","away3d/materials/MaterialBase.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_LINE(311)
	return (this->_blendMode != ::flash::display::BlendMode_obj::NORMAL);
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_requiresBlending,return )

bool MaterialBase_obj::set_alphaPremultiplied( bool value){
	HX_STACK_PUSH("MaterialBase::set_alphaPremultiplied","away3d/materials/MaterialBase.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(298)
	this->_alphaPremultiplied = value;
	HX_STACK_LINE(299)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(300)
	while(((i < this->_numPasses))){
		HX_STACK_LINE(301)
		this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_alphaPremultiplied(value);
		HX_STACK_LINE(302)
		++(i);
	}
	HX_STACK_LINE(304)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_alphaPremultiplied,return )

bool MaterialBase_obj::get_alphaPremultiplied( ){
	HX_STACK_PUSH("MaterialBase::get_alphaPremultiplied","away3d/materials/MaterialBase.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return this->_alphaPremultiplied;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_alphaPremultiplied,return )

::flash::display::BlendMode MaterialBase_obj::set_blendMode( ::flash::display::BlendMode value){
	HX_STACK_PUSH("MaterialBase::set_blendMode","away3d/materials/MaterialBase.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(283)
	this->_blendMode = value;
	HX_STACK_LINE(284)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_blendMode,return )

::flash::display::BlendMode MaterialBase_obj::get_blendMode( ){
	HX_STACK_PUSH("MaterialBase::get_blendMode","away3d/materials/MaterialBase.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	return this->_blendMode;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_blendMode,return )

bool MaterialBase_obj::set_bothSides( bool value){
	HX_STACK_PUSH("MaterialBase::set_bothSides","away3d/materials/MaterialBase.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(256)
	this->_bothSides = value;
	HX_STACK_LINE(257)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(258)
	while(((i < this->_numPasses))){
		HX_STACK_LINE(259)
		this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_bothSides(value);
		HX_STACK_LINE(260)
		++(i);
	}
	HX_STACK_LINE(262)
	this->_depthPass->set_bothSides(value);
	HX_STACK_LINE(263)
	this->_distancePass->set_bothSides(value);
	HX_STACK_LINE(264)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_bothSides,return )

bool MaterialBase_obj::get_bothSides( ){
	HX_STACK_PUSH("MaterialBase::get_bothSides","away3d/materials/MaterialBase.hx",251);
	HX_STACK_THIS(this);
	HX_STACK_LINE(251)
	return this->_bothSides;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_bothSides,return )

Void MaterialBase_obj::dispose( ){
{
		HX_STACK_PUSH("MaterialBase::dispose","away3d/materials/MaterialBase.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(235)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(236)
		i = (int)0;
		HX_STACK_LINE(237)
		while(((i < this->_numPasses))){
			HX_STACK_LINE(238)
			this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->dispose();
			HX_STACK_LINE(239)
			++(i);
		}
		HX_STACK_LINE(241)
		this->_depthPass->dispose();
		HX_STACK_LINE(242)
		this->_distancePass->dispose();
		HX_STACK_LINE(243)
		this->_depthPass->removeEventListener(::flash::events::Event_obj::CHANGE,this->onDepthPassChange_dyn(),null());
		HX_STACK_LINE(244)
		this->_distancePass->removeEventListener(::flash::events::Event_obj::CHANGE,this->onDistancePassChange_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,dispose,(void))

bool MaterialBase_obj::set_repeat( bool value){
	HX_STACK_PUSH("MaterialBase::set_repeat","away3d/materials/MaterialBase.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(220)
	this->_repeat = value;
	HX_STACK_LINE(221)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(222)
	while(((i < this->_numPasses))){
		HX_STACK_LINE(223)
		this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_repeat(value);
		HX_STACK_LINE(224)
		++(i);
	}
	HX_STACK_LINE(226)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_repeat,return )

bool MaterialBase_obj::get_repeat( ){
	HX_STACK_PUSH("MaterialBase::get_repeat","away3d/materials/MaterialBase.hx",215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(215)
	return this->_repeat;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_repeat,return )

int MaterialBase_obj::set_depthCompareMode( int value){
	HX_STACK_PUSH("MaterialBase::set_depthCompareMode","away3d/materials/MaterialBase.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(206)
	this->_depthCompareMode = value;
	HX_STACK_LINE(207)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_depthCompareMode,return )

int MaterialBase_obj::get_depthCompareMode( ){
	HX_STACK_PUSH("MaterialBase::get_depthCompareMode","away3d/materials/MaterialBase.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	return this->_depthCompareMode;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_depthCompareMode,return )

bool MaterialBase_obj::set_smooth( bool value){
	HX_STACK_PUSH("MaterialBase::set_smooth","away3d/materials/MaterialBase.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(186)
	this->_smooth = value;
	HX_STACK_LINE(187)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(188)
	while(((i < this->_numPasses))){
		HX_STACK_LINE(189)
		this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_smooth(value);
		HX_STACK_LINE(190)
		++(i);
	}
	HX_STACK_LINE(192)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_smooth,return )

bool MaterialBase_obj::get_smooth( ){
	HX_STACK_PUSH("MaterialBase::get_smooth","away3d/materials/MaterialBase.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_LINE(181)
	return this->_smooth;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_smooth,return )

bool MaterialBase_obj::set_mipmap( bool value){
	HX_STACK_PUSH("MaterialBase::set_mipmap","away3d/materials/MaterialBase.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(168)
	this->_mipmap = value;
	HX_STACK_LINE(169)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(170)
	while(((i < this->_numPasses))){
		HX_STACK_LINE(171)
		this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_mipmap(value);
		HX_STACK_LINE(172)
		++(i);
	}
	HX_STACK_LINE(174)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_mipmap,return )

bool MaterialBase_obj::get_mipmap( ){
	HX_STACK_PUSH("MaterialBase::get_mipmap","away3d/materials/MaterialBase.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(163)
	return this->_mipmap;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_mipmap,return )

::away3d::materials::lightpickers::LightPickerBase MaterialBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
	HX_STACK_PUSH("MaterialBase::set_lightPicker","away3d/materials/MaterialBase.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(147)
	if (((value != this->_lightPicker))){
		HX_STACK_LINE(148)
		this->_lightPicker = value;
		HX_STACK_LINE(149)
		int len = this->_passes->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(150)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(151)
		while(((i < len))){
			HX_STACK_LINE(152)
			this->_passes->__get(i).StaticCast< ::away3d::materials::passes::MaterialPassBase >()->set_lightPicker(this->_lightPicker);
			HX_STACK_LINE(153)
			++(i);
		}
	}
	HX_STACK_LINE(156)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(MaterialBase_obj,set_lightPicker,return )

::away3d::materials::lightpickers::LightPickerBase MaterialBase_obj::get_lightPicker( ){
	HX_STACK_PUSH("MaterialBase::get_lightPicker","away3d/materials/MaterialBase.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_LINE(142)
	return this->_lightPicker;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_lightPicker,return )

::String MaterialBase_obj::get_assetType( ){
	HX_STACK_PUSH("MaterialBase::get_assetType","away3d/materials/MaterialBase.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return ::away3d::library::assets::AssetType_obj::MATERIAL;
}


HX_DEFINE_DYNAMIC_FUNC0(MaterialBase_obj,get_assetType,return )

int MaterialBase_obj::MATERIAL_ID_COUNT;


MaterialBase_obj::MaterialBase_obj()
{
}

void MaterialBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialBase);
	HX_MARK_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_MARK_MEMBER_NAME(_distanceBasedDepthRender,"_distanceBasedDepthRender");
	HX_MARK_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_MARK_MEMBER_NAME(_distancePass,"_distancePass");
	HX_MARK_MEMBER_NAME(_depthPass,"_depthPass");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	HX_MARK_MEMBER_NAME(_numPasses,"_numPasses");
	HX_MARK_MEMBER_NAME(_blendMode,"_blendMode");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_owners,"_owners");
	HX_MARK_MEMBER_NAME(_animationSet,"_animationSet");
	HX_MARK_MEMBER_NAME(_bothSides,"_bothSides");
	HX_MARK_MEMBER_NAME(_depthPassId,"_depthPassId");
	HX_MARK_MEMBER_NAME(_renderOrderId,"_renderOrderId");
	HX_MARK_MEMBER_NAME(_uniqueId,"_uniqueId");
	HX_MARK_MEMBER_NAME(_classification,"_classification");
	HX_MARK_MEMBER_NAME(extra,"extra");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MaterialBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_VISIT_MEMBER_NAME(_distanceBasedDepthRender,"_distanceBasedDepthRender");
	HX_VISIT_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_VISIT_MEMBER_NAME(_distancePass,"_distancePass");
	HX_VISIT_MEMBER_NAME(_depthPass,"_depthPass");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	HX_VISIT_MEMBER_NAME(_numPasses,"_numPasses");
	HX_VISIT_MEMBER_NAME(_blendMode,"_blendMode");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_owners,"_owners");
	HX_VISIT_MEMBER_NAME(_animationSet,"_animationSet");
	HX_VISIT_MEMBER_NAME(_bothSides,"_bothSides");
	HX_VISIT_MEMBER_NAME(_depthPassId,"_depthPassId");
	HX_VISIT_MEMBER_NAME(_renderOrderId,"_renderOrderId");
	HX_VISIT_MEMBER_NAME(_uniqueId,"_uniqueId");
	HX_VISIT_MEMBER_NAME(_classification,"_classification");
	HX_VISIT_MEMBER_NAME(extra,"extra");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MaterialBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { return extra; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"owners") ) { return get_owners(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return get_repeat(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return get_smooth(); }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return get_mipmap(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return _mipmap; }
		if (HX_FIELD_EQ(inName,"_passes") ) { return _passes; }
		if (HX_FIELD_EQ(inName,"_owners") ) { return _owners; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addOwner") ) { return addOwner_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueId") ) { return get_uniqueId(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { return _uniqueId; }
		if (HX_FIELD_EQ(inName,"numPasses") ) { return get_numPasses(); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return get_blendMode(); }
		if (HX_FIELD_EQ(inName,"bothSides") ) { return get_bothSides(); }
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removePass") ) { return removePass_dyn(); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_owners") ) { return get_owners_dyn(); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return renderPass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_repeat") ) { return set_repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { return get_repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smooth") ) { return set_smooth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { return get_smooth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return set_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mipmap") ) { return get_mipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_depthPass") ) { return _depthPass; }
		if (HX_FIELD_EQ(inName,"_numPasses") ) { return _numPasses; }
		if (HX_FIELD_EQ(inName,"_blendMode") ) { return _blendMode; }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { return _bothSides; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearPasses") ) { return clearPasses_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOwner") ) { return removeOwner_dyn(); }
		if (HX_FIELD_EQ(inName,"renderDepth") ) { return renderDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"lightPicker") ) { return get_lightPicker(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onPassChange") ) { return onPassChange_dyn(); }
		if (HX_FIELD_EQ(inName,"activatePass") ) { return activatePass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueId") ) { return get_uniqueId_dyn(); }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { return _lightPicker; }
		if (HX_FIELD_EQ(inName,"_depthPassId") ) { return _depthPassId; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_numPasses") ) { return get_numPasses_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bothSides") ) { return set_bothSides_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bothSides") ) { return get_bothSides_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"_distancePass") ) { return _distancePass; }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { return _animationSet; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMaterial") ) { return updateMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"deactivatePass") ) { return deactivatePass_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderOrderId") ) { return _renderOrderId; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return set_lightPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lightPicker") ) { return get_lightPicker_dyn(); }
		if (HX_FIELD_EQ(inName,"_classification") ) { return _classification; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidatePasses") ) { return invalidatePasses_dyn(); }
		if (HX_FIELD_EQ(inName,"activateForDepth") ) { return activateForDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"requiresBlending") ) { return get_requiresBlending(); }
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return get_depthCompareMode(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MATERIAL_ID_COUNT") ) { return MATERIAL_ID_COUNT; }
		if (HX_FIELD_EQ(inName,"onDepthPassChange") ) { return onDepthPassChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { return _depthCompareMode; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deactivateForDepth") ) { return deactivateForDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return get_alphaPremultiplied(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return _alphaPremultiplied; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onDistancePassChange") ) { return onDistancePassChange_dyn(); }
		if (HX_FIELD_EQ(inName,"passRendersToTexture") ) { return passRendersToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_requiresBlending") ) { return get_requiresBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return set_depthCompareMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depthCompareMode") ) { return get_depthCompareMode_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hasDepthAlphaThreshold") ) { return hasDepthAlphaThreshold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return set_alphaPremultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return get_alphaPremultiplied_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_distanceBasedDepthRender") ) { return _distanceBasedDepthRender; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaterialBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return set_repeat(inValue); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return set_smooth(inValue); }
		if (HX_FIELD_EQ(inName,"mipmap") ) { return set_mipmap(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_owners") ) { _owners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { _uniqueId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return set_blendMode(inValue); }
		if (HX_FIELD_EQ(inName,"bothSides") ) { return set_bothSides(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_depthPass") ) { _depthPass=inValue.Cast< ::away3d::materials::passes::DepthMapPass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPasses") ) { _numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendMode") ) { _blendMode=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { _bothSides=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPicker") ) { return set_lightPicker(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { _lightPicker=inValue.Cast< ::away3d::materials::lightpickers::LightPickerBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthPassId") ) { _depthPassId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_distancePass") ) { _distancePass=inValue.Cast< ::away3d::materials::passes::DistanceMapPass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { _animationSet=inValue.Cast< ::away3d::animators::IAnimationSet >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_renderOrderId") ) { _renderOrderId=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_classification") ) { _classification=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return set_depthCompareMode(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MATERIAL_ID_COUNT") ) { MATERIAL_ID_COUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { _depthCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { return set_alphaPremultiplied(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_distanceBasedDepthRender") ) { _distanceBasedDepthRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_depthCompareMode"));
	outFields->push(HX_CSTRING("_distanceBasedDepthRender"));
	outFields->push(HX_CSTRING("_lightPicker"));
	outFields->push(HX_CSTRING("_distancePass"));
	outFields->push(HX_CSTRING("_depthPass"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_smooth"));
	outFields->push(HX_CSTRING("_mipmap"));
	outFields->push(HX_CSTRING("_passes"));
	outFields->push(HX_CSTRING("_numPasses"));
	outFields->push(HX_CSTRING("_blendMode"));
	outFields->push(HX_CSTRING("_alphaPremultiplied"));
	outFields->push(HX_CSTRING("_owners"));
	outFields->push(HX_CSTRING("_animationSet"));
	outFields->push(HX_CSTRING("_bothSides"));
	outFields->push(HX_CSTRING("_depthPassId"));
	outFields->push(HX_CSTRING("_renderOrderId"));
	outFields->push(HX_CSTRING("_uniqueId"));
	outFields->push(HX_CSTRING("_classification"));
	outFields->push(HX_CSTRING("extra"));
	outFields->push(HX_CSTRING("owners"));
	outFields->push(HX_CSTRING("numPasses"));
	outFields->push(HX_CSTRING("uniqueId"));
	outFields->push(HX_CSTRING("requiresBlending"));
	outFields->push(HX_CSTRING("alphaPremultiplied"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("bothSides"));
	outFields->push(HX_CSTRING("repeat"));
	outFields->push(HX_CSTRING("depthCompareMode"));
	outFields->push(HX_CSTRING("smooth"));
	outFields->push(HX_CSTRING("mipmap"));
	outFields->push(HX_CSTRING("lightPicker"));
	outFields->push(HX_CSTRING("assetType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MATERIAL_ID_COUNT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onDepthPassChange"),
	HX_CSTRING("onDistancePassChange"),
	HX_CSTRING("onPassChange"),
	HX_CSTRING("addPass"),
	HX_CSTRING("clearPasses"),
	HX_CSTRING("removePass"),
	HX_CSTRING("invalidatePasses"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("updateMaterial"),
	HX_CSTRING("get_owners"),
	HX_CSTRING("removeOwner"),
	HX_CSTRING("addOwner"),
	HX_CSTRING("renderPass"),
	HX_CSTRING("deactivatePass"),
	HX_CSTRING("activatePass"),
	HX_CSTRING("passRendersToTexture"),
	HX_CSTRING("renderDepth"),
	HX_CSTRING("deactivateForDepth"),
	HX_CSTRING("activateForDepth"),
	HX_CSTRING("hasDepthAlphaThreshold"),
	HX_CSTRING("get_numPasses"),
	HX_CSTRING("get_uniqueId"),
	HX_CSTRING("get_requiresBlending"),
	HX_CSTRING("set_alphaPremultiplied"),
	HX_CSTRING("get_alphaPremultiplied"),
	HX_CSTRING("set_blendMode"),
	HX_CSTRING("get_blendMode"),
	HX_CSTRING("set_bothSides"),
	HX_CSTRING("get_bothSides"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_repeat"),
	HX_CSTRING("get_repeat"),
	HX_CSTRING("set_depthCompareMode"),
	HX_CSTRING("get_depthCompareMode"),
	HX_CSTRING("set_smooth"),
	HX_CSTRING("get_smooth"),
	HX_CSTRING("set_mipmap"),
	HX_CSTRING("get_mipmap"),
	HX_CSTRING("set_lightPicker"),
	HX_CSTRING("get_lightPicker"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("_depthCompareMode"),
	HX_CSTRING("_distanceBasedDepthRender"),
	HX_CSTRING("_lightPicker"),
	HX_CSTRING("_distancePass"),
	HX_CSTRING("_depthPass"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_smooth"),
	HX_CSTRING("_mipmap"),
	HX_CSTRING("_passes"),
	HX_CSTRING("_numPasses"),
	HX_CSTRING("_blendMode"),
	HX_CSTRING("_alphaPremultiplied"),
	HX_CSTRING("_owners"),
	HX_CSTRING("_animationSet"),
	HX_CSTRING("_bothSides"),
	HX_CSTRING("_depthPassId"),
	HX_CSTRING("_renderOrderId"),
	HX_CSTRING("_uniqueId"),
	HX_CSTRING("_classification"),
	HX_CSTRING("extra"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MaterialBase_obj::MATERIAL_ID_COUNT,"MATERIAL_ID_COUNT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MaterialBase_obj::MATERIAL_ID_COUNT,"MATERIAL_ID_COUNT");
};

Class MaterialBase_obj::__mClass;

void MaterialBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.MaterialBase"), hx::TCanCast< MaterialBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MaterialBase_obj::__boot()
{
	MATERIAL_ID_COUNT= (int)0;
}

} // end namespace away3d
} // end namespace materials
