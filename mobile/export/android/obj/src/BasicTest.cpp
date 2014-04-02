#include <hxcpp.h>

#ifndef INCLUDED_Anim
#include <Anim.h>
#endif
#ifndef INCLUDED_BasicTest
#include <BasicTest.h>
#endif
#ifndef INCLUDED_EnvNegX
#include <EnvNegX.h>
#endif
#ifndef INCLUDED_EnvNegY
#include <EnvNegY.h>
#endif
#ifndef INCLUDED_EnvNegZ
#include <EnvNegZ.h>
#endif
#ifndef INCLUDED_EnvPosX
#include <EnvPosX.h>
#endif
#ifndef INCLUDED_EnvPosY
#include <EnvPosY.h>
#endif
#ifndef INCLUDED_EnvPosZ
#include <EnvPosZ.h>
#endif
#ifndef INCLUDED_Spritesheet
#include <Spritesheet.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TextureParser
#include <TextureParser.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
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
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_ColorMaterial
#include <away3d/materials/ColorMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_FogMethod
#include <away3d/materials/methods/FogMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_PlaneGeometry
#include <away3d/primitives/PlaneGeometry.h>
#endif
#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#include <away3d/primitives/PrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_SkyBox
#include <away3d/primitives/SkyBox.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapCubeTexture
#include <away3d/textures/BitmapCubeTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapTexture
#include <away3d/textures/BitmapTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_away3d_utils_Cast
#include <away3d/utils/Cast.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif

Void BasicTest_obj::__construct()
{
HX_STACK_PUSH("BasicTest::new","BasicTest.hx",120);
{
	HX_STACK_LINE(140)
	this->mousey = (int)0;
	HX_STACK_LINE(139)
	this->mousex = (int)0;
	HX_STACK_LINE(138)
	this->mouse = false;
	HX_STACK_LINE(136)
	this->currFrame = (int)0;
	HX_STACK_LINE(124)
	this->deac = false;
	HX_STACK_LINE(144)
	super::__construct();
	HX_STACK_LINE(146)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ACTIVATE,this->stage_onActivate_dyn(),null(),null(),null());
	HX_STACK_LINE(147)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->stage_onDeactivate_dyn(),null(),null(),null());
	HX_STACK_LINE(148)
	this->pos = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(149)
	this->animation = ::TextureParser_obj::parse(HX_CSTRING("assets/char.xml"));
	HX_STACK_LINE(150)
	this->frames = this->animation->__Field(HX_CSTRING("length"),true);
	HX_STACK_LINE(152)
	this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
	HX_STACK_LINE(153)
	this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
	HX_STACK_LINE(157)
	::away3d::textures::BitmapCubeTexture cubeTexture = ::away3d::textures::BitmapCubeTexture_obj::__new(::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvPosX >()),::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvNegX >()),::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvPosY >()),::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvNegY >()),::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvPosZ >()),::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::EnvNegZ >()));		HX_STACK_VAR(cubeTexture,"cubeTexture");
	HX_STACK_LINE(161)
	::away3d::materials::ColorMaterial material = ::away3d::materials::ColorMaterial_obj::__new((int)16711935,(int)1);		HX_STACK_VAR(material,"material");
	HX_STACK_LINE(162)
	material->set_specular(0.5);
	HX_STACK_LINE(163)
	material->set_ambient(0.25);
	HX_STACK_LINE(164)
	material->set_ambientColor((int)1118617);
	HX_STACK_LINE(165)
	material->set_ambient((int)1);
	HX_STACK_LINE(166)
	this->_world = ::away3d::containers::ObjectContainer3D_obj::__new();
	HX_STACK_LINE(167)
	this->_plane = ::away3d::containers::ObjectContainer3D_obj::__new();
	HX_STACK_LINE(168)
	this->_world->addChild(this->_plane);
	HX_STACK_LINE(169)
	this->objs = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(171)
	::Xml xml = ::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/trees.xml")));		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(172)
	::haxe::xml::Fast elem = ::haxe::xml::Fast_obj::__new(xml->firstElement());		HX_STACK_VAR(elem,"elem");
	HX_STACK_LINE(173)
	::haxe::xml::Fast e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(174)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(elem->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e1 = __it->next();
		{
			HX_STACK_LINE(175)
			int x = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(176)
			int y = ::Std_obj::parseInt(e1->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(177)
			::String name = e1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(178)
			::flash::display::BitmapData bitmap = ::away3d::utils::Cast_obj::bitmapData(::openfl::Assets_obj::getBitmapData(name,null()));		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(179)
			::away3d::textures::BitmapTexture texture = ::away3d::textures::BitmapTexture_obj::__new(bitmap,null());		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(180)
			::away3d::materials::TextureMaterial tex = ::away3d::materials::TextureMaterial_obj::__new(texture,null(),null(),null());		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(181)
			tex->addMethod(::away3d::materials::methods::FogMethod_obj::__new((int)600,(int)1200,(int)16777215));
			HX_STACK_LINE(182)
			tex->set_alphaThreshold(.1);
			HX_STACK_LINE(183)
			tex->set_repeat(true);
			HX_STACK_LINE(184)
			tex->set_mipmap(false);
			HX_STACK_LINE(185)
			::away3d::entities::Mesh obj = ::away3d::entities::Mesh_obj::__new(::away3d::primitives::PlaneGeometry_obj::__new((int)300,(int)300,null(),null(),null(),null()),tex);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(186)
			obj->set_rotationX((int)-90);
			HX_STACK_LINE(187)
			obj->translate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),x);
			HX_STACK_LINE(188)
			obj->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),y);
			HX_STACK_LINE(189)
			obj->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null()),(int)150);
			HX_STACK_LINE(191)
			this->objs->__Field(HX_CSTRING("push"),true)(obj);
			HX_STACK_LINE(192)
			this->_plane->addChild(obj);
		}
;
	}
	HX_STACK_LINE(195)
	::flash::display::BitmapData bitmap = ::away3d::utils::Cast_obj::bitmapData(hx::ClassOf< ::Spritesheet >());		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(196)
	::away3d::textures::BitmapTexture texture = ::away3d::textures::BitmapTexture_obj::__new(bitmap,null());		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(197)
	::away3d::materials::TextureMaterial tex = ::away3d::materials::TextureMaterial_obj::__new(texture,null(),null(),null());		HX_STACK_VAR(tex,"tex");
	HX_STACK_LINE(198)
	tex->set_animateUVs(true);
	HX_STACK_LINE(199)
	tex->addMethod(::away3d::materials::methods::FogMethod_obj::__new((int)600,(int)1200,(int)16777215));
	HX_STACK_LINE(200)
	tex->set_alphaThreshold(.1);
	HX_STACK_LINE(201)
	tex->set_repeat(true);
	HX_STACK_LINE(202)
	tex->set_mipmap(false);
	HX_STACK_LINE(205)
	this->_charmesh = ::away3d::entities::Mesh_obj::__new(::away3d::primitives::PlaneGeometry_obj::__new((int)60,(int)100,null(),null(),null(),null()),tex);
	HX_STACK_LINE(206)
	this->_charmesh->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null()),(int)50);
	HX_STACK_LINE(207)
	this->objs->__Field(HX_CSTRING("push"),true)(this->_charmesh);
	HX_STACK_LINE(208)
	this->_plane->addChild(this->_charmesh);
	HX_STACK_LINE(210)
	this->_skyBox = ::away3d::primitives::SkyBox_obj::__new(cubeTexture);
	HX_STACK_LINE(213)
	this->_view = ::away3d::containers::View3D_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(216)
	this->_view->get_camera()->set_z((int)-600);
	HX_STACK_LINE(217)
	this->_view->get_camera()->set_y((int)0);
	HX_STACK_LINE(218)
	this->_view->get_camera()->lookAt(::flash::geom::Vector3D_obj::__new(null(),null(),null(),null()),null());
	HX_STACK_LINE(219)
	this->_view->get_camera()->set_lens(::away3d::cameras::lenses::PerspectiveLens_obj::__new((int)90));
	HX_STACK_LINE(220)
	this->_view->get_scene()->addChild(this->_world);
	HX_STACK_LINE(221)
	this->_view->get_scene()->addChild(this->_skyBox);
	HX_STACK_LINE(222)
	this->_view->get_stage3DProxy()->setRenderCallback(this->_onEnterFrame_dyn());
	HX_STACK_LINE(223)
	this->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	HX_STACK_LINE(224)
	this->onResize(null());
	HX_STACK_LINE(226)
	::openfl::display::FPS fps = ::openfl::display::FPS_obj::__new((int)0,(int)0,(int)16777215);		HX_STACK_VAR(fps,"fps");
	HX_STACK_LINE(227)
	fps->set_scaleX(fps->set_scaleY((int)3));
	HX_STACK_LINE(228)
	this->addChild(fps);
	HX_STACK_LINE(230)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mouseEventDown_dyn(),null(),null(),null());
	HX_STACK_LINE(231)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseEventUp_dyn(),null(),null(),null());
	HX_STACK_LINE(232)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->mouseEventMove_dyn(),null(),null(),null());
}
;
	return null();
}

BasicTest_obj::~BasicTest_obj() { }

Dynamic BasicTest_obj::__CreateEmpty() { return  new BasicTest_obj; }
hx::ObjectPtr< BasicTest_obj > BasicTest_obj::__new()
{  hx::ObjectPtr< BasicTest_obj > result = new BasicTest_obj();
	result->__construct();
	return result;}

Dynamic BasicTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicTest_obj > result = new BasicTest_obj();
	result->__construct();
	return result;}

Void BasicTest_obj::stage_onDeactivate( ::flash::events::Event event){
{
		HX_STACK_PUSH("BasicTest::stage_onDeactivate","BasicTest.hx",330);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(330)
		this->deac = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,stage_onDeactivate,(void))

Void BasicTest_obj::stage_onActivate( ::flash::events::Event event){
{
		HX_STACK_PUSH("BasicTest::stage_onActivate","BasicTest.hx",305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(306)
		if ((!(this->deac))){
			HX_STACK_LINE(306)
			return null();
		}
		HX_STACK_LINE(309)
		this->deac = false;
		struct _Function_1_1{
			inline static Dynamic Block( ::BasicTest_obj *__this){
				HX_STACK_PUSH("*::closure","BasicTest.hx",310);
				{
					HX_STACK_LINE(310)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->objs);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","BasicTest.hx",310);
						{
							HX_STACK_LINE(310)
							return ::flash::_Vector::Vector_Impl__obj::iterator(_e->__get((int)0).StaticCast< Array< ::Dynamic > >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(310)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(310)
		for(::cpp::FastIterator_obj< ::away3d::entities::Mesh > *__it = ::cpp::CreateFastIterator< ::away3d::entities::Mesh >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::away3d::entities::Mesh obj = __it->next();
			{
				HX_STACK_LINE(311)
				obj->get_material()->set_smooth(!(obj->get_material()->get_smooth()));
				HX_STACK_LINE(312)
				obj->get_material()->set_smooth(!(obj->get_material()->get_smooth()));
			}
;
		}
		HX_STACK_LINE(314)
		this->_skyBox->get_material()->set_smooth(!(this->_skyBox->get_material()->get_smooth()));
		HX_STACK_LINE(315)
		this->_skyBox->get_material()->set_smooth(!(this->_skyBox->get_material()->get_smooth()));
		HX_STACK_LINE(316)
		this->_view->get_stage3DProxy()->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::CONTEXT3D_CREATE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,stage_onActivate,(void))

Void BasicTest_obj::onResize( ::flash::events::Event event){
{
		HX_STACK_PUSH("BasicTest::onResize","BasicTest.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(300)
		this->_view->set_width(this->get_stage()->get_stageWidth());
		HX_STACK_LINE(301)
		this->_view->set_height(this->get_stage()->get_stageHeight());
		HX_STACK_LINE(302)
		if (((this->_view->get_stage3DProxy() != null()))){
			HX_STACK_LINE(303)
			this->_view->render();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,onResize,(void))

Void BasicTest_obj::_onEnterFrame( ::flash::events::Event e){
{
		HX_STACK_PUSH("BasicTest::_onEnterFrame","BasicTest.hx",251);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(252)
		if ((this->mouse)){
			HX_STACK_LINE(253)
			Float spd = (int)5;		HX_STACK_VAR(spd,"spd");
			HX_STACK_LINE(254)
			if (((this->mousex < (Float(this->_view->get_width()) / Float((int)3))))){
				HX_STACK_LINE(255)
				::away3d::containers::ObjectContainer3D _g = this->_world;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				_g->set_rotationY((_g->get_rotationY() + (int)5));
			}
			else{
				HX_STACK_LINE(256)
				if (((this->mousex > (Float((this->_view->get_width() * (int)2)) / Float((int)3))))){
					HX_STACK_LINE(257)
					::away3d::containers::ObjectContainer3D _g = this->_world;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(257)
					_g->set_rotationY((_g->get_rotationY() - (int)5));
				}
			}
			HX_STACK_LINE(259)
			Float rad = (Float(::Math_obj::PI) / Float((int)180));		HX_STACK_VAR(rad,"rad");
			HX_STACK_LINE(260)
			if (((this->mousey < (Float(this->_view->get_height()) / Float((int)3))))){
				HX_STACK_LINE(261)
				Float xd = (::Math_obj::sin((this->_world->get_rotationY() * rad)) * spd);		HX_STACK_VAR(xd,"xd");
				HX_STACK_LINE(262)
				Float yd = (-(::Math_obj::cos((this->_world->get_rotationY() * rad))) * spd);		HX_STACK_VAR(yd,"yd");
				HX_STACK_LINE(263)
				this->_charmesh->translate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),-(xd));
				HX_STACK_LINE(264)
				this->_charmesh->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),-(yd));
				HX_STACK_LINE(265)
				this->_plane->translate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),xd);
				HX_STACK_LINE(266)
				this->_plane->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),yd);
			}
			else{
				HX_STACK_LINE(267)
				if (((this->mousey > (Float((this->_view->get_height() * (int)2)) / Float((int)3))))){
					HX_STACK_LINE(268)
					Float xd = (::Math_obj::sin((this->_world->get_rotationY() * rad)) * spd);		HX_STACK_VAR(xd,"xd");
					HX_STACK_LINE(269)
					Float yd = (-(::Math_obj::cos((this->_world->get_rotationY() * rad))) * spd);		HX_STACK_VAR(yd,"yd");
					HX_STACK_LINE(270)
					this->_charmesh->translate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),xd);
					HX_STACK_LINE(271)
					this->_charmesh->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),yd);
					HX_STACK_LINE(272)
					this->_plane->translate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),-(xd));
					HX_STACK_LINE(273)
					this->_plane->translate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),-(yd));
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::BasicTest_obj *__this){
				HX_STACK_PUSH("*::closure","BasicTest.hx",276);
				{
					HX_STACK_LINE(276)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->objs);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","BasicTest.hx",276);
						{
							HX_STACK_LINE(276)
							return ::flash::_Vector::Vector_Impl__obj::iterator(_e->__get((int)0).StaticCast< Array< ::Dynamic > >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(276)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(276)
		for(::cpp::FastIterator_obj< ::away3d::entities::Mesh > *__it = ::cpp::CreateFastIterator< ::away3d::entities::Mesh >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::away3d::entities::Mesh obj = __it->next();
			obj->set_rotationY(-(this->_world->get_rotationY()));
		}
		HX_STACK_LINE(279)
		this->_charmesh->set_rotationX((int)-90);
		HX_STACK_LINE(280)
		this->currFrame = hx::Mod(((this->currFrame + (int)1)),this->frames);
		HX_STACK_LINE(281)
		::Anim anim = this->animation->__get(this->currFrame).StaticCast< ::Anim >();		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(282)
		this->_charmesh->get_subMeshes()->__get((int)0).StaticCast< ::away3d::core::base::SubMesh >()->set_offsetU(anim->getOffsetU());
		HX_STACK_LINE(283)
		this->_charmesh->get_subMeshes()->__get((int)0).StaticCast< ::away3d::core::base::SubMesh >()->set_offsetV(anim->getOffsetV());
		HX_STACK_LINE(284)
		this->_charmesh->get_subMeshes()->__get((int)0).StaticCast< ::away3d::core::base::SubMesh >()->set_scaleU(anim->getScaleU());
		HX_STACK_LINE(285)
		this->_charmesh->get_subMeshes()->__get((int)0).StaticCast< ::away3d::core::base::SubMesh >()->set_scaleV(anim->getScaleV());
		HX_STACK_LINE(287)
		this->_view->get_camera()->set_position(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)300,null()));
		HX_STACK_LINE(288)
		this->_view->get_camera()->set_rotationX((int)25);
		HX_STACK_LINE(290)
		this->_view->get_camera()->moveBackward((int)600);
		HX_STACK_LINE(292)
		this->_view->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,_onEnterFrame,(void))

Void BasicTest_obj::mouseEventUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("BasicTest::mouseEventUp","BasicTest.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(246)
		this->mouse = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,mouseEventUp,(void))

Void BasicTest_obj::mouseEventMove( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("BasicTest::mouseEventMove","BasicTest.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(242)
		this->mousex = e->stageX;
		HX_STACK_LINE(243)
		this->mousey = e->stageY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,mouseEventMove,(void))

Void BasicTest_obj::mouseEventDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("BasicTest::mouseEventDown","BasicTest.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(236)
		this->mouse = true;
		HX_STACK_LINE(237)
		this->mousex = e->stageX;
		HX_STACK_LINE(238)
		this->mousey = e->stageY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicTest_obj,mouseEventDown,(void))


BasicTest_obj::BasicTest_obj()
{
}

void BasicTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicTest);
	HX_MARK_MEMBER_NAME(mousey,"mousey");
	HX_MARK_MEMBER_NAME(mousex,"mousex");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(currFrame,"currFrame");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(objs,"objs");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(_charmesh,"_charmesh");
	HX_MARK_MEMBER_NAME(_plane,"_plane");
	HX_MARK_MEMBER_NAME(_world,"_world");
	HX_MARK_MEMBER_NAME(_skyBox,"_skyBox");
	HX_MARK_MEMBER_NAME(deac,"deac");
	HX_MARK_MEMBER_NAME(_view,"_view");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mousey,"mousey");
	HX_VISIT_MEMBER_NAME(mousex,"mousex");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(currFrame,"currFrame");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(objs,"objs");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(_charmesh,"_charmesh");
	HX_VISIT_MEMBER_NAME(_plane,"_plane");
	HX_VISIT_MEMBER_NAME(_world,"_world");
	HX_VISIT_MEMBER_NAME(_skyBox,"_skyBox");
	HX_VISIT_MEMBER_NAME(deac,"deac");
	HX_VISIT_MEMBER_NAME(_view,"_view");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BasicTest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"objs") ) { return objs; }
		if (HX_FIELD_EQ(inName,"deac") ) { return deac; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"_view") ) { return _view; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mousey") ) { return mousey; }
		if (HX_FIELD_EQ(inName,"mousex") ) { return mousex; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"_plane") ) { return _plane; }
		if (HX_FIELD_EQ(inName,"_world") ) { return _world; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { return _skyBox; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { return currFrame; }
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"_charmesh") ) { return _charmesh; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEventUp") ) { return mouseEventUp_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onEnterFrame") ) { return _onEnterFrame_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseEventMove") ) { return mouseEventMove_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseEventDown") ) { return mouseEventDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stage_onActivate") ) { return stage_onActivate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onDeactivate") ) { return stage_onDeactivate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"objs") ) { objs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deac") ) { deac=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast< ::away3d::containers::View3D >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mousey") ) { mousey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mousex") ) { mousex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_plane") ) { _plane=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_world") ) { _world=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { _skyBox=inValue.Cast< ::away3d::primitives::SkyBox >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { currFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charmesh") ) { _charmesh=inValue.Cast< ::away3d::entities::Mesh >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mousey"));
	outFields->push(HX_CSTRING("mousex"));
	outFields->push(HX_CSTRING("mouse"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("currFrame"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("objs"));
	outFields->push(HX_CSTRING("animation"));
	outFields->push(HX_CSTRING("_charmesh"));
	outFields->push(HX_CSTRING("_plane"));
	outFields->push(HX_CSTRING("_world"));
	outFields->push(HX_CSTRING("_skyBox"));
	outFields->push(HX_CSTRING("deac"));
	outFields->push(HX_CSTRING("_view"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stage_onDeactivate"),
	HX_CSTRING("stage_onActivate"),
	HX_CSTRING("onResize"),
	HX_CSTRING("_onEnterFrame"),
	HX_CSTRING("mouseEventUp"),
	HX_CSTRING("mouseEventMove"),
	HX_CSTRING("mouseEventDown"),
	HX_CSTRING("mousey"),
	HX_CSTRING("mousex"),
	HX_CSTRING("mouse"),
	HX_CSTRING("pos"),
	HX_CSTRING("currFrame"),
	HX_CSTRING("frames"),
	HX_CSTRING("objs"),
	HX_CSTRING("animation"),
	HX_CSTRING("_charmesh"),
	HX_CSTRING("_plane"),
	HX_CSTRING("_world"),
	HX_CSTRING("_skyBox"),
	HX_CSTRING("deac"),
	HX_CSTRING("_view"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicTest_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicTest_obj::__mClass,"__mClass");
};

Class BasicTest_obj::__mClass;

void BasicTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BasicTest"), hx::TCanCast< BasicTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicTest_obj::__boot()
{
}

