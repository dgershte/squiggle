#include <hxcpp.h>

#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
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
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#include <away3d/core/pick/ShaderPicker.h>
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
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#include <away3d/tools/utils/GeomUtil.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#include <flash/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
namespace away3d{
namespace core{
namespace pick{

Void ShaderPicker_obj::__construct()
{
HX_STACK_PUSH("ShaderPicker::new","away3d/core/pick/ShaderPicker.hx",86);
{
	HX_STACK_LINE(87)
	this->_onlyMouseEnabled = true;
	HX_STACK_LINE(88)
	this->_interactives = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(89)
	this->_localHitPosition = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(90)
	this->_hitUV = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(91)
	this->_localHitNormal = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(92)
	this->_rayPos = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(93)
	this->_rayDir = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(94)
	this->_id = ::flash::_Vector::Vector_Impl__obj::_new((int)4,true);
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		Dynamic array = this->_id;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(95)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(95)
		while((((c)++ < (int)4))){
			HX_STACK_LINE(95)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(95)
		array;
	}
	HX_STACK_LINE(96)
	this->_viewportData = ::flash::_Vector::Vector_Impl__obj::_new((int)4,true);
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Dynamic array = this->_viewportData;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(97)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(97)
		while((((c)++ < (int)4))){
			HX_STACK_LINE(97)
			array->__Field(HX_CSTRING("push"),true)((int)0);
		}
		HX_STACK_LINE(97)
		array;
	}
	HX_STACK_LINE(99)
	this->_boundOffsetScale = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		Dynamic array = this->_boundOffsetScale;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(100)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(100)
		while((((c)++ < (int)8))){
			HX_STACK_LINE(100)
			array->__Field(HX_CSTRING("push"),true)(false);
		}
		HX_STACK_LINE(100)
		array;
	}
	HX_STACK_LINE(102)
	this->_boundOffsetScale[(int)3] = (int)0;
	HX_STACK_LINE(103)
	this->_boundOffsetScale[(int)7] = (int)1;
}
;
	return null();
}

ShaderPicker_obj::~ShaderPicker_obj() { }

Dynamic ShaderPicker_obj::__CreateEmpty() { return  new ShaderPicker_obj; }
hx::ObjectPtr< ShaderPicker_obj > ShaderPicker_obj::__new()
{  hx::ObjectPtr< ShaderPicker_obj > result = new ShaderPicker_obj();
	result->__construct();
	return result;}

Dynamic ShaderPicker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderPicker_obj > result = new ShaderPicker_obj();
	result->__construct();
	return result;}

hx::Object *ShaderPicker_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::away3d::core::pick::IPicker_obj)) return operator ::away3d::core::pick::IPicker_obj *();
	return super::__ToInterface(inType);
}

Void ShaderPicker_obj::dispose( ){
{
		HX_STACK_PUSH("ShaderPicker::dispose","away3d/core/pick/ShaderPicker.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_LINE(490)
		this->_bitmapData->dispose();
		HX_STACK_LINE(491)
		if (((this->_triangleProgram3D != null()))){
			HX_STACK_LINE(491)
			this->_triangleProgram3D->dispose();
		}
		HX_STACK_LINE(492)
		if (((this->_objectProgram3D != null()))){
			HX_STACK_LINE(492)
			this->_objectProgram3D->dispose();
		}
		HX_STACK_LINE(493)
		this->_triangleProgram3D = null();
		HX_STACK_LINE(494)
		this->_objectProgram3D = null();
		HX_STACK_LINE(495)
		this->_bitmapData = null();
		HX_STACK_LINE(496)
		this->_hitRenderable = null();
		HX_STACK_LINE(497)
		this->_hitEntity = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,dispose,(void))

Void ShaderPicker_obj::getPrecisePosition( ::flash::geom::Matrix3D invSceneTransform,Float nx,Float ny,Float nz,Float px,Float py,Float pz){
{
		HX_STACK_PUSH("ShaderPicker::getPrecisePosition","away3d/core/pick/ShaderPicker.hx",458);
		HX_STACK_THIS(this);
		HX_STACK_ARG(invSceneTransform,"invSceneTransform");
		HX_STACK_ARG(nx,"nx");
		HX_STACK_ARG(ny,"ny");
		HX_STACK_ARG(nz,"nz");
		HX_STACK_ARG(px,"px");
		HX_STACK_ARG(py,"py");
		HX_STACK_ARG(pz,"pz");
		HX_STACK_LINE(460)
		Float rx;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(461)
		Float ry;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(462)
		Float rz;		HX_STACK_VAR(rz,"rz");
		HX_STACK_LINE(463)
		Float ox;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(464)
		Float oy;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(465)
		Float oz;		HX_STACK_VAR(oz,"oz");
		HX_STACK_LINE(466)
		Float t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(467)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(468)
		Float cx = this->_rayPos->x;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(469)
		Float cy = this->_rayPos->y;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(470)
		Float cz = this->_rayPos->z;		HX_STACK_VAR(cz,"cz");
		HX_STACK_LINE(472)
		ox = this->_rayDir->x;
		HX_STACK_LINE(473)
		oy = this->_rayDir->y;
		HX_STACK_LINE(474)
		oz = this->_rayDir->z;
		HX_STACK_LINE(476)
		invSceneTransform->copyRawDataTo(raw,null(),null());
		HX_STACK_LINE(477)
		rx = (((raw->__get((int)0) * ox) + (raw->__get((int)4) * oy)) + (raw->__get((int)8) * oz));
		HX_STACK_LINE(478)
		ry = (((raw->__get((int)1) * ox) + (raw->__get((int)5) * oy)) + (raw->__get((int)9) * oz));
		HX_STACK_LINE(479)
		rz = (((raw->__get((int)2) * ox) + (raw->__get((int)6) * oy)) + (raw->__get((int)10) * oz));
		HX_STACK_LINE(480)
		ox = ((((raw->__get((int)0) * cx) + (raw->__get((int)4) * cy)) + (raw->__get((int)8) * cz)) + raw->__get((int)12));
		HX_STACK_LINE(481)
		oy = ((((raw->__get((int)1) * cx) + (raw->__get((int)5) * cy)) + (raw->__get((int)9) * cz)) + raw->__get((int)13));
		HX_STACK_LINE(482)
		oz = ((((raw->__get((int)2) * cx) + (raw->__get((int)6) * cy)) + (raw->__get((int)10) * cz)) + raw->__get((int)14));
		HX_STACK_LINE(483)
		t = (Float(((((((px - ox)) * nx) + (((py - oy)) * ny)) + (((pz - oz)) * nz)))) / Float(((((rx * nx) + (ry * ny)) + (rz * nz)))));
		HX_STACK_LINE(484)
		this->_localHitPosition->x = (ox + (rx * t));
		HX_STACK_LINE(485)
		this->_localHitPosition->y = (oy + (ry * t));
		HX_STACK_LINE(486)
		this->_localHitPosition->z = (oz + (rz * t));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(ShaderPicker_obj,getPrecisePosition,(void))

Void ShaderPicker_obj::getPreciseDetails( ::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShaderPicker::getPreciseDetails","away3d/core/pick/ShaderPicker.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(309)
		::away3d::core::base::ISubGeometry subGeom = (hx::TCast< away3d::core::base::SubMesh >::cast(this->_hitRenderable))->get_subGeometry();		HX_STACK_VAR(subGeom,"subGeom");
		HX_STACK_LINE(310)
		Array< int > indices = subGeom->get_indexData();		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(311)
		Array< Float > vertices = subGeom->get_vertexData();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(312)
		int len = indices->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(313)
		Float x1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(314)
		Float y1;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(315)
		Float z1;		HX_STACK_VAR(z1,"z1");
		HX_STACK_LINE(316)
		Float x2;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(317)
		Float y2;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(318)
		Float z2;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(319)
		Float x3;		HX_STACK_VAR(x3,"x3");
		HX_STACK_LINE(320)
		Float y3;		HX_STACK_VAR(y3,"y3");
		HX_STACK_LINE(321)
		Float z3;		HX_STACK_VAR(z3,"z3");
		HX_STACK_LINE(322)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(323)
		int j = (int)1;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(324)
		int k = (int)2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(325)
		int t1;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(326)
		int t2;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(327)
		int t3;		HX_STACK_VAR(t3,"t3");
		HX_STACK_LINE(328)
		Float v0x;		HX_STACK_VAR(v0x,"v0x");
		HX_STACK_LINE(329)
		Float v0y;		HX_STACK_VAR(v0y,"v0y");
		HX_STACK_LINE(330)
		Float v0z;		HX_STACK_VAR(v0z,"v0z");
		HX_STACK_LINE(331)
		Float v1x;		HX_STACK_VAR(v1x,"v1x");
		HX_STACK_LINE(332)
		Float v1y;		HX_STACK_VAR(v1y,"v1y");
		HX_STACK_LINE(333)
		Float v1z;		HX_STACK_VAR(v1z,"v1z");
		HX_STACK_LINE(334)
		Float v2x;		HX_STACK_VAR(v2x,"v2x");
		HX_STACK_LINE(335)
		Float v2y;		HX_STACK_VAR(v2y,"v2y");
		HX_STACK_LINE(336)
		Float v2z;		HX_STACK_VAR(v2z,"v2z");
		HX_STACK_LINE(337)
		Float dot00;		HX_STACK_VAR(dot00,"dot00");
		HX_STACK_LINE(338)
		Float dot01;		HX_STACK_VAR(dot01,"dot01");
		HX_STACK_LINE(339)
		Float dot02;		HX_STACK_VAR(dot02,"dot02");
		HX_STACK_LINE(340)
		Float dot11;		HX_STACK_VAR(dot11,"dot11");
		HX_STACK_LINE(341)
		Float dot12;		HX_STACK_VAR(dot12,"dot12");
		HX_STACK_LINE(342)
		Float s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(343)
		Float t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(344)
		Float invDenom;		HX_STACK_VAR(invDenom,"invDenom");
		HX_STACK_LINE(345)
		Array< Float > uvs = subGeom->get_UVData();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(346)
		Array< Float > normals = subGeom->get_faceNormals();		HX_STACK_VAR(normals,"normals");
		HX_STACK_LINE(347)
		Float x = this->_localHitPosition->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(348)
		Float y = this->_localHitPosition->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(349)
		Float z = this->_localHitPosition->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(350)
		Float u;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(351)
		Float v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(352)
		int ui1;		HX_STACK_VAR(ui1,"ui1");
		HX_STACK_LINE(353)
		int ui2;		HX_STACK_VAR(ui2,"ui2");
		HX_STACK_LINE(354)
		int ui3;		HX_STACK_VAR(ui3,"ui3");
		HX_STACK_LINE(355)
		Float s0x;		HX_STACK_VAR(s0x,"s0x");
		HX_STACK_LINE(356)
		Float s0y;		HX_STACK_VAR(s0y,"s0y");
		HX_STACK_LINE(357)
		Float s0z;		HX_STACK_VAR(s0z,"s0z");
		HX_STACK_LINE(358)
		Float s1x;		HX_STACK_VAR(s1x,"s1x");
		HX_STACK_LINE(359)
		Float s1y;		HX_STACK_VAR(s1y,"s1y");
		HX_STACK_LINE(360)
		Float s1z;		HX_STACK_VAR(s1z,"s1z");
		HX_STACK_LINE(361)
		Float nl;		HX_STACK_VAR(nl,"nl");
		HX_STACK_LINE(362)
		int stride = subGeom->get_vertexStride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(363)
		int vertexOffset = subGeom->get_vertexOffset();		HX_STACK_VAR(vertexOffset,"vertexOffset");
		HX_STACK_LINE(364)
		this->updateRay(camera);
		HX_STACK_LINE(365)
		while(((i < len))){
			HX_STACK_LINE(366)
			t1 = (vertexOffset + (indices->__get(i) * stride));
			HX_STACK_LINE(367)
			t2 = (vertexOffset + (indices->__get(j) * stride));
			HX_STACK_LINE(368)
			t3 = (vertexOffset + (indices->__get(k) * stride));
			HX_STACK_LINE(369)
			x1 = vertices->__get(t1);
			HX_STACK_LINE(370)
			y1 = vertices->__get((t1 + (int)1));
			HX_STACK_LINE(371)
			z1 = vertices->__get((t1 + (int)2));
			HX_STACK_LINE(372)
			x2 = vertices->__get(t2);
			HX_STACK_LINE(373)
			y2 = vertices->__get((t2 + (int)1));
			HX_STACK_LINE(374)
			z2 = vertices->__get((t2 + (int)2));
			HX_STACK_LINE(375)
			x3 = vertices->__get(t3);
			HX_STACK_LINE(376)
			y3 = vertices->__get((t3 + (int)1));
			HX_STACK_LINE(377)
			z3 = vertices->__get((t3 + (int)2));
			HX_STACK_LINE(379)
			if ((!(((bool((bool((bool((bool((bool((bool((bool((x < x1)) && bool((x < x2)))) && bool((x < x3)))) || bool((bool((bool((y < y1)) && bool((y < y2)))) && bool((y < y3)))))) || bool((bool((bool((z < z1)) && bool((z < z2)))) && bool((z < z3)))))) || bool((bool((bool((x > x1)) && bool((x > x2)))) && bool((x > x3)))))) || bool((bool((bool((y > y1)) && bool((y > y2)))) && bool((y > y3)))))) || bool((bool((bool((z > z1)) && bool((z > z2)))) && bool((z > z3))))))))){
				HX_STACK_LINE(381)
				v0x = (x3 - x1);
				HX_STACK_LINE(382)
				v0y = (y3 - y1);
				HX_STACK_LINE(383)
				v0z = (z3 - z1);
				HX_STACK_LINE(384)
				v1x = (x2 - x1);
				HX_STACK_LINE(385)
				v1y = (y2 - y1);
				HX_STACK_LINE(386)
				v1z = (z2 - z1);
				HX_STACK_LINE(387)
				v2x = (x - x1);
				HX_STACK_LINE(388)
				v2y = (y - y1);
				HX_STACK_LINE(389)
				v2z = (z - z1);
				HX_STACK_LINE(390)
				dot00 = (((v0x * v0x) + (v0y * v0y)) + (v0z * v0z));
				HX_STACK_LINE(391)
				dot01 = (((v0x * v1x) + (v0y * v1y)) + (v0z * v1z));
				HX_STACK_LINE(392)
				dot02 = (((v0x * v2x) + (v0y * v2y)) + (v0z * v2z));
				HX_STACK_LINE(393)
				dot11 = (((v1x * v1x) + (v1y * v1y)) + (v1z * v1z));
				HX_STACK_LINE(394)
				dot12 = (((v1x * v2x) + (v1y * v2y)) + (v1z * v2z));
				HX_STACK_LINE(395)
				invDenom = (Float((int)1) / Float((((dot00 * dot11) - (dot01 * dot01)))));
				HX_STACK_LINE(396)
				s = ((((dot11 * dot02) - (dot01 * dot12))) * invDenom);
				HX_STACK_LINE(397)
				t = ((((dot00 * dot12) - (dot01 * dot02))) * invDenom);
				HX_STACK_LINE(399)
				if (((bool((bool((s >= (int)0)) && bool((t >= (int)0)))) && bool(((s + t) <= (int)1))))){
					HX_STACK_LINE(401)
					this->getPrecisePosition(this->_hitRenderable->get_inverseSceneTransform(),normals->__get(i),normals->__get((i + (int)1)),normals->__get((i + (int)2)),x1,y1,z1);
					HX_STACK_LINE(402)
					v2x = (this->_localHitPosition->x - x1);
					HX_STACK_LINE(403)
					v2y = (this->_localHitPosition->y - y1);
					HX_STACK_LINE(404)
					v2z = (this->_localHitPosition->z - z1);
					HX_STACK_LINE(405)
					s0x = (x2 - x1);
					HX_STACK_LINE(407)
					s0y = (y2 - y1);
					HX_STACK_LINE(408)
					s0z = (z2 - z1);
					HX_STACK_LINE(409)
					s1x = (x3 - x1);
					HX_STACK_LINE(411)
					s1y = (y3 - y1);
					HX_STACK_LINE(412)
					s1z = (z3 - z1);
					HX_STACK_LINE(413)
					this->_localHitNormal->x = ((s0y * s1z) - (s0z * s1y));
					HX_STACK_LINE(415)
					this->_localHitNormal->y = ((s0z * s1x) - (s0x * s1z));
					HX_STACK_LINE(416)
					this->_localHitNormal->z = ((s0x * s1y) - (s0y * s1x));
					HX_STACK_LINE(417)
					nl = (Float((int)1) / Float(::Math_obj::sqrt((((this->_localHitNormal->x * this->_localHitNormal->x) + (this->_localHitNormal->y * this->_localHitNormal->y)) + (this->_localHitNormal->z * this->_localHitNormal->z)))));
					HX_STACK_LINE(419)
					hx::MultEq(this->_localHitNormal->x,nl);
					HX_STACK_LINE(420)
					hx::MultEq(this->_localHitNormal->y,nl);
					HX_STACK_LINE(421)
					hx::MultEq(this->_localHitNormal->z,nl);
					HX_STACK_LINE(422)
					dot02 = (((v0x * v2x) + (v0y * v2y)) + (v0z * v2z));
					HX_STACK_LINE(423)
					dot12 = (((v1x * v2x) + (v1y * v2y)) + (v1z * v2z));
					HX_STACK_LINE(424)
					s = ((((dot11 * dot02) - (dot01 * dot12))) * invDenom);
					HX_STACK_LINE(425)
					t = ((((dot00 * dot12) - (dot01 * dot02))) * invDenom);
					HX_STACK_LINE(426)
					ui1 = (int(indices->__get(i)) << int((int)1));
					HX_STACK_LINE(427)
					ui2 = (int(indices->__get(j)) << int((int)1));
					HX_STACK_LINE(428)
					ui3 = (int(indices->__get(k)) << int((int)1));
					HX_STACK_LINE(429)
					u = uvs->__get(ui1);
					HX_STACK_LINE(430)
					v = uvs->__get((ui1 + (int)1));
					HX_STACK_LINE(431)
					this->_hitUV->x = ((u + (t * ((uvs->__get(ui2) - u)))) + (s * ((uvs->__get(ui3) - u))));
					HX_STACK_LINE(432)
					this->_hitUV->y = ((v + (t * ((uvs->__get((ui2 + (int)1)) - v)))) + (s * ((uvs->__get((ui3 + (int)1)) - v))));
					HX_STACK_LINE(433)
					this->_faceIndex = i;
					HX_STACK_LINE(434)
					this->_subGeometryIndex = ::away3d::tools::utils::GeomUtil_obj::getMeshSubMeshIndex(hx::TCast< away3d::core::base::SubMesh >::cast(this->_hitRenderable));
					HX_STACK_LINE(435)
					return null();
				}
			}
			HX_STACK_LINE(438)
			hx::AddEq(i,(int)3);
			HX_STACK_LINE(439)
			hx::AddEq(j,(int)3);
			HX_STACK_LINE(440)
			hx::AddEq(k,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getPreciseDetails,(void))

Void ShaderPicker_obj::getApproximatePosition( ::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShaderPicker::getApproximatePosition","away3d/core/pick/ShaderPicker.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(270)
		::away3d::entities::Entity entity = this->_hitRenderable->get_sourceEntity();		HX_STACK_VAR(entity,"entity");
		HX_STACK_LINE(271)
		int col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(272)
		Float scX;		HX_STACK_VAR(scX,"scX");
		HX_STACK_LINE(273)
		Float scY;		HX_STACK_VAR(scY,"scY");
		HX_STACK_LINE(274)
		Float scZ;		HX_STACK_VAR(scZ,"scZ");
		HX_STACK_LINE(275)
		Float offsX;		HX_STACK_VAR(offsX,"offsX");
		HX_STACK_LINE(276)
		Float offsY;		HX_STACK_VAR(offsY,"offsY");
		HX_STACK_LINE(277)
		Float offsZ;		HX_STACK_VAR(offsZ,"offsZ");
		HX_STACK_LINE(278)
		::flash::geom::Matrix3D localViewProjection = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;		HX_STACK_VAR(localViewProjection,"localViewProjection");
		HX_STACK_LINE(279)
		localViewProjection->copyFrom(this->_hitRenderable->getRenderSceneTransform(camera));
		HX_STACK_LINE(280)
		localViewProjection->append(camera->get_viewProjection());
		HX_STACK_LINE(281)
		if (((this->_triangleProgram3D == null()))){
			HX_STACK_LINE(281)
			this->initTriangleProgram3D();
		}
		HX_STACK_LINE(282)
		this->_boundOffsetScale[(int)4] = (Float((int)1) / Float((scX = (entity->get_maxX() - entity->get_minX()))));
		HX_STACK_LINE(283)
		this->_boundOffsetScale[(int)5] = (Float((int)1) / Float((scY = (entity->get_maxY() - entity->get_minY()))));
		HX_STACK_LINE(284)
		this->_boundOffsetScale[(int)6] = (Float((int)1) / Float((scZ = (entity->get_maxZ() - entity->get_minZ()))));
		HX_STACK_LINE(285)
		this->_boundOffsetScale[(int)0] = offsX = -(entity->get_minX());
		HX_STACK_LINE(286)
		this->_boundOffsetScale[(int)1] = offsY = -(entity->get_minY());
		HX_STACK_LINE(287)
		this->_boundOffsetScale[(int)2] = offsZ = -(entity->get_minZ());
		HX_STACK_LINE(288)
		this->_context->setProgram(this->_triangleProgram3D);
		HX_STACK_LINE(289)
		this->_context->clear((int)0,(int)0,(int)0,(int)0,(int)1,(int)0,(int)256);
		HX_STACK_LINE(290)
		this->_context->setScissorRectangle(::away3d::core::pick::ShaderPicker_obj::MOUSE_SCISSOR_RECT);
		HX_STACK_LINE(291)
		this->_context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,localViewProjection,true);
		HX_STACK_LINE(292)
		this->_context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)5,this->_boundOffsetScale,(int)2);
		HX_STACK_LINE(293)
		this->_hitRenderable->activateVertexBuffer((int)0,this->_stage3DProxy);
		HX_STACK_LINE(294)
		this->_context->drawTriangles(this->_hitRenderable->getIndexBuffer(this->_stage3DProxy),(int)0,this->_hitRenderable->get_numTriangles());
		HX_STACK_LINE(295)
		this->_context->drawToBitmapData(this->_bitmapData);
		HX_STACK_LINE(296)
		col = this->_bitmapData->getPixel((int)0,(int)0);
		HX_STACK_LINE(297)
		this->_localHitPosition->x = ((Float((((int((int(col) >> int((int)16))) & int((int)255))) * scX)) / Float((int)255)) - offsX);
		HX_STACK_LINE(298)
		this->_localHitPosition->y = ((Float((((int((int(col) >> int((int)8))) & int((int)255))) * scY)) / Float((int)255)) - offsY);
		HX_STACK_LINE(299)
		this->_localHitPosition->z = ((Float((((int(col) & int((int)255))) * scZ)) / Float((int)255)) - offsZ);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getApproximatePosition,(void))

Void ShaderPicker_obj::getHitDetails( ::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShaderPicker::getHitDetails","away3d/core/pick/ShaderPicker.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(260)
		this->getApproximatePosition(camera);
		HX_STACK_LINE(261)
		this->getPreciseDetails(camera);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,getHitDetails,(void))

Void ShaderPicker_obj::initTriangleProgram3D( ){
{
		HX_STACK_PUSH("ShaderPicker::initTriangleProgram3D","away3d/core/pick/ShaderPicker.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_LINE(244)
		::String vertexCode;		HX_STACK_VAR(vertexCode,"vertexCode");
		HX_STACK_LINE(245)
		::String fragmentCode;		HX_STACK_VAR(fragmentCode,"fragmentCode");
		HX_STACK_LINE(246)
		this->_triangleProgram3D = this->_context->createProgram();
		HX_STACK_LINE(248)
		vertexCode = (((((((HX_CSTRING("add vt0, va0, vc5 \t\t\t\n") + HX_CSTRING("mul vt0, vt0, vc6 \t\t\t\n")) + HX_CSTRING("mov v0, vt0\t\t\t\t\n")) + HX_CSTRING("m44 vt0, va0, vc0\t\t\t\n")) + HX_CSTRING("mul vt1.xy, vt0.w, vc4.zw\t\n")) + HX_CSTRING("add vt0.xy, vt0.xy, vt1.xy\t\n")) + HX_CSTRING("mul vt0.xy, vt0.xy, vc4.xy\t\n")) + HX_CSTRING("mov op, vt0\t\n"));
		HX_STACK_LINE(249)
		fragmentCode = HX_CSTRING("mov oc, v0");
		struct _Function_1_1{
			inline static ::openfl::gl::GLShader Block( ::String &vertexCode){
				HX_STACK_PUSH("*::closure","away3d/core/pick/ShaderPicker.hx",251);
				{
					HX_STACK_LINE(251)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(251)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(251)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(251)
					{
						::flash::display3D::Context3DProgramType _switch_1 = (::flash::display3D::Context3DProgramType_obj::VERTEX);
						switch((_switch_1)->GetIndex()){
							case 0: {
								HX_STACK_LINE(251)
								glType = (int)35633;
								HX_STACK_LINE(251)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(251)
								glType = (int)35632;
								HX_STACK_LINE(251)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(251)
					::String shaderSourceString = aglsl1->compile(shaderType,vertexCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(251)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(251)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(251)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(251)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(251)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(251)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(251)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(251)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(251)
					return shader;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::openfl::gl::GLShader Block( ::String &fragmentCode){
				HX_STACK_PUSH("*::closure","away3d/core/pick/ShaderPicker.hx",251);
				{
					HX_STACK_LINE(251)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(251)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(251)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(251)
					{
						::flash::display3D::Context3DProgramType _switch_2 = (::flash::display3D::Context3DProgramType_obj::FRAGMENT);
						switch((_switch_2)->GetIndex()){
							case 0: {
								HX_STACK_LINE(251)
								glType = (int)35633;
								HX_STACK_LINE(251)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(251)
								glType = (int)35632;
								HX_STACK_LINE(251)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(251)
					::String shaderSourceString = aglsl1->compile(shaderType,fragmentCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(251)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(251)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(251)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(251)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(251)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(251)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(251)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(251)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(251)
					return shader;
				}
				return null();
			}
		};
		HX_STACK_LINE(251)
		this->_triangleProgram3D->upload(_Function_1_1::Block(vertexCode),_Function_1_2::Block(fragmentCode));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,initTriangleProgram3D,(void))

Void ShaderPicker_obj::initObjectProgram3D( ){
{
		HX_STACK_PUSH("ShaderPicker::initObjectProgram3D","away3d/core/pick/ShaderPicker.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_LINE(229)
		::String vertexCode;		HX_STACK_VAR(vertexCode,"vertexCode");
		HX_STACK_LINE(230)
		::String fragmentCode;		HX_STACK_VAR(fragmentCode,"fragmentCode");
		HX_STACK_LINE(231)
		this->_objectProgram3D = this->_context->createProgram();
		HX_STACK_LINE(232)
		vertexCode = ((((HX_CSTRING("m44 vt0, va0, vc0\t\t\t\n") + HX_CSTRING("mul vt1.xy, vt0.w, vc4.zw\t\n")) + HX_CSTRING("add vt0.xy, vt0.xy, vt1.xy\t\n")) + HX_CSTRING("mul vt0.xy, vt0.xy, vc4.xy\t\n")) + HX_CSTRING("mov op, vt0\t\n"));
		HX_STACK_LINE(233)
		fragmentCode = HX_CSTRING("mov oc, fc0");
		struct _Function_1_1{
			inline static ::openfl::gl::GLShader Block( ::String &vertexCode){
				HX_STACK_PUSH("*::closure","away3d/core/pick/ShaderPicker.hx",236);
				{
					HX_STACK_LINE(236)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(236)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(236)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(236)
					{
						::flash::display3D::Context3DProgramType _switch_3 = (::flash::display3D::Context3DProgramType_obj::VERTEX);
						switch((_switch_3)->GetIndex()){
							case 0: {
								HX_STACK_LINE(236)
								glType = (int)35633;
								HX_STACK_LINE(236)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(236)
								glType = (int)35632;
								HX_STACK_LINE(236)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(236)
					::String shaderSourceString = aglsl1->compile(shaderType,vertexCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(236)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(236)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(236)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(236)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(236)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(236)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(236)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(236)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(236)
					return shader;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::openfl::gl::GLShader Block( ::String &fragmentCode){
				HX_STACK_PUSH("*::closure","away3d/core/pick/ShaderPicker.hx",236);
				{
					HX_STACK_LINE(236)
					::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
					HX_STACK_LINE(236)
					int glType;		HX_STACK_VAR(glType,"glType");
					HX_STACK_LINE(236)
					::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
					HX_STACK_LINE(236)
					{
						::flash::display3D::Context3DProgramType _switch_4 = (::flash::display3D::Context3DProgramType_obj::FRAGMENT);
						switch((_switch_4)->GetIndex()){
							case 0: {
								HX_STACK_LINE(236)
								glType = (int)35633;
								HX_STACK_LINE(236)
								shaderType = HX_CSTRING("vertex");
							}
							;break;
							case 1: {
								HX_STACK_LINE(236)
								glType = (int)35632;
								HX_STACK_LINE(236)
								shaderType = HX_CSTRING("fragment");
							}
							;break;
						}
					}
					HX_STACK_LINE(236)
					::String shaderSourceString = aglsl1->compile(shaderType,fragmentCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
					HX_STACK_LINE(236)
					::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(236)
					::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
					HX_STACK_LINE(236)
					::openfl::gl::GL_obj::compileShader(shader);
					HX_STACK_LINE(236)
					if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
						HX_STACK_LINE(236)
						::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
						HX_STACK_LINE(236)
						::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
						HX_STACK_LINE(236)
						if (((err != HX_CSTRING("")))){
							HX_STACK_LINE(236)
							hx::Throw (err);
						}
					}
					HX_STACK_LINE(236)
					return shader;
				}
				return null();
			}
		};
		HX_STACK_LINE(236)
		this->_objectProgram3D->upload(_Function_1_1::Block(vertexCode),_Function_1_2::Block(fragmentCode));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,initObjectProgram3D,(void))

Void ShaderPicker_obj::updateRay( ::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShaderPicker::updateRay","away3d/core/pick/ShaderPicker.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(219)
		this->_rayPos = camera->get_scenePosition();
		HX_STACK_LINE(220)
		this->_rayDir = camera->getRay(this->_projX,this->_projY,(int)1);
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			::flash::geom::Vector3D _this = this->_rayDir;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(221)
			Float l = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(221)
			if (((l != (int)0))){
				HX_STACK_LINE(221)
				hx::DivEq(_this->x,l);
				HX_STACK_LINE(221)
				hx::DivEq(_this->y,l);
				HX_STACK_LINE(221)
				hx::DivEq(_this->z,l);
			}
			HX_STACK_LINE(221)
			l;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,updateRay,(void))

Void ShaderPicker_obj::drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::cameras::Camera3D camera){
{
		HX_STACK_PUSH("ShaderPicker::drawRenderables","away3d/core/pick/ShaderPicker.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(189)
		::flash::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(190)
		::away3d::core::base::IRenderable renderable;		HX_STACK_VAR(renderable,"renderable");
		HX_STACK_LINE(191)
		::flash::geom::Matrix3D viewProjection = camera->get_viewProjection();		HX_STACK_VAR(viewProjection,"viewProjection");
		HX_STACK_LINE(192)
		while(((item != null()))){
			HX_STACK_LINE(193)
			renderable = item->renderable;
			HX_STACK_LINE(195)
			if (((bool((renderable->get_sourceEntity()->get_scene() == null())) || bool((bool(!(renderable->get_mouseEnabled())) && bool(this->_onlyMouseEnabled)))))){
				HX_STACK_LINE(196)
				item = item->next;
				HX_STACK_LINE(197)
				continue;
			}
			HX_STACK_LINE(199)
			this->_potentialFound = true;
			HX_STACK_LINE(200)
			this->_context->setCulling((  (((bool((renderable->__Field(HX_CSTRING("get_material"),true)() != null())) && bool(renderable->__Field(HX_CSTRING("get_material"),true)()->__Field(HX_CSTRING("get_bothSides"),true)())))) ? int((int)0) : int((int)1028) ));
			HX_STACK_LINE(201)
			this->_interactives[(this->_interactiveId)++] = renderable;
			HX_STACK_LINE(203)
			this->_id[(int)1] = (Float(((int(this->_interactiveId) >> int((int)8)))) / Float((int)255));
			HX_STACK_LINE(205)
			this->_id[(int)2] = (Float(((int(this->_interactiveId) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(207)
			matrix->copyFrom(renderable->getRenderSceneTransform(camera));
			HX_STACK_LINE(208)
			matrix->append(viewProjection);
			HX_STACK_LINE(209)
			this->_context->setProgramConstantsFromMatrix(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)0,matrix,true);
			HX_STACK_LINE(210)
			this->_context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::FRAGMENT,(int)0,this->_id,(int)1);
			HX_STACK_LINE(211)
			renderable->activateVertexBuffer((int)0,this->_stage3DProxy);
			HX_STACK_LINE(212)
			this->_context->drawTriangles(renderable->getIndexBuffer(this->_stage3DProxy),(int)0,renderable->get_numTriangles());
			HX_STACK_LINE(213)
			item = item->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderPicker_obj,drawRenderables,(void))

Void ShaderPicker_obj::draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target){
{
		HX_STACK_PUSH("ShaderPicker::draw","away3d/core/pick/ShaderPicker.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(entityCollector,"entityCollector");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(169)
		::away3d::cameras::Camera3D camera = entityCollector->get_camera();		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(170)
		this->_context->clear((int)0,(int)0,(int)0,(int)1,null(),null(),null());
		HX_STACK_LINE(171)
		this->_stage3DProxy->set_scissorRect(::away3d::core::pick::ShaderPicker_obj::MOUSE_SCISSOR_RECT);
		HX_STACK_LINE(172)
		this->_interactiveId = (int)0;
		HX_STACK_LINE(173)
		if (((this->_objectProgram3D == null()))){
			HX_STACK_LINE(173)
			this->initObjectProgram3D();
		}
		HX_STACK_LINE(174)
		this->_context->setBlendFactors((int)1,(int)0);
		HX_STACK_LINE(175)
		this->_context->setDepthTest(true,(int)513);
		HX_STACK_LINE(176)
		this->_context->setProgram(this->_objectProgram3D);
		HX_STACK_LINE(177)
		this->_context->setProgramConstantsFromVector(::flash::display3D::Context3DProgramType_obj::VERTEX,(int)4,this->_viewportData,(int)1);
		HX_STACK_LINE(178)
		this->drawRenderables(entityCollector->get_opaqueRenderableHead(),camera);
		HX_STACK_LINE(179)
		this->drawRenderables(entityCollector->get_blendedRenderableHead(),camera);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderPicker_obj,draw,(void))

::away3d::core::pick::PickingCollisionVO ShaderPicker_obj::getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene){
	HX_STACK_PUSH("ShaderPicker::getSceneCollision","away3d/core/pick/ShaderPicker.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_ARG(scene,"scene");
	HX_STACK_LINE(160)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShaderPicker_obj,getSceneCollision,return )

::away3d::core::pick::PickingCollisionVO ShaderPicker_obj::getViewCollision( Float x,Float y,::away3d::containers::View3D view){
	HX_STACK_PUSH("ShaderPicker::getViewCollision","away3d/core/pick/ShaderPicker.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(view,"view");
	HX_STACK_LINE(111)
	::away3d::core::traverse::EntityCollector collector = view->get_entityCollector();		HX_STACK_VAR(collector,"collector");
	HX_STACK_LINE(112)
	this->_stage3DProxy = view->get_stage3DProxy();
	HX_STACK_LINE(113)
	if (((this->_stage3DProxy == null()))){
		HX_STACK_LINE(113)
		return null();
	}
	HX_STACK_LINE(114)
	this->_context = this->_stage3DProxy->_context3D;
	HX_STACK_LINE(115)
	this->_viewportData[(int)0] = view->get_width();
	HX_STACK_LINE(116)
	this->_viewportData[(int)1] = view->get_height();
	HX_STACK_LINE(117)
	this->_viewportData[(int)2] = -((this->_projX = ((Float(((int)2 * x)) / Float(view->get_width())) - (int)1)));
	HX_STACK_LINE(118)
	this->_viewportData[(int)3] = this->_projY = ((Float(((int)2 * y)) / Float(view->get_height())) - (int)1);
	HX_STACK_LINE(120)
	this->_potentialFound = false;
	HX_STACK_LINE(121)
	this->draw(collector,null());
	HX_STACK_LINE(123)
	this->_context->setVertexBufferAt((int)0,null(),null(),null());
	HX_STACK_LINE(124)
	if (((bool((this->_context == null())) || bool(!(this->_potentialFound))))){
		HX_STACK_LINE(124)
		return null();
	}
	HX_STACK_LINE(125)
	if (((this->_bitmapData == null()))){
		HX_STACK_LINE(125)
		this->_bitmapData = ::flash::display::BitmapData_obj::__new((int)1,(int)1,false,(int)0,null());
	}
	HX_STACK_LINE(126)
	this->_context->drawToBitmapData(this->_bitmapData);
	HX_STACK_LINE(127)
	this->_hitColor = this->_bitmapData->getPixel((int)0,(int)0);
	HX_STACK_LINE(128)
	if (((this->_hitColor == (int)0))){
		HX_STACK_LINE(129)
		this->_context->present();
		HX_STACK_LINE(130)
		return null();
	}
	HX_STACK_LINE(132)
	this->_hitRenderable = this->_interactives->__get((this->_hitColor - (int)1)).StaticCast< ::away3d::core::base::IRenderable >();
	HX_STACK_LINE(133)
	this->_hitEntity = this->_hitRenderable->get_sourceEntity();
	HX_STACK_LINE(134)
	if (((bool(this->_onlyMouseEnabled) && bool(((bool(!(this->_hitEntity->_ancestorsAllowMouseEnabled)) || bool(!(this->_hitEntity->get_mouseEnabled())))))))){
		HX_STACK_LINE(134)
		return null();
	}
	HX_STACK_LINE(135)
	::away3d::core::pick::PickingCollisionVO _collisionVO = this->_hitEntity->get_pickingCollisionVO();		HX_STACK_VAR(_collisionVO,"_collisionVO");
	HX_STACK_LINE(136)
	if ((this->_hitRenderable->get_shaderPickingDetails())){
		HX_STACK_LINE(137)
		this->getHitDetails(view->get_camera());
		HX_STACK_LINE(138)
		_collisionVO->localPosition = this->_localHitPosition;
		HX_STACK_LINE(139)
		_collisionVO->localNormal = this->_localHitNormal;
		HX_STACK_LINE(140)
		_collisionVO->uv = this->_hitUV;
		HX_STACK_LINE(141)
		_collisionVO->index = this->_faceIndex;
		HX_STACK_LINE(142)
		_collisionVO->subGeometryIndex = this->_subGeometryIndex;
	}
	else{
		HX_STACK_LINE(146)
		_collisionVO->localPosition = null();
		HX_STACK_LINE(147)
		_collisionVO->localNormal = null();
		HX_STACK_LINE(148)
		_collisionVO->uv = null();
		HX_STACK_LINE(149)
		_collisionVO->index = (int)0;
		HX_STACK_LINE(150)
		_collisionVO->subGeometryIndex = (int)0;
	}
	HX_STACK_LINE(153)
	return _collisionVO;
}


HX_DEFINE_DYNAMIC_FUNC3(ShaderPicker_obj,getViewCollision,return )

bool ShaderPicker_obj::set_onlyMouseEnabled( bool value){
	HX_STACK_PUSH("ShaderPicker::set_onlyMouseEnabled","away3d/core/pick/ShaderPicker.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(78)
	this->_onlyMouseEnabled = value;
	HX_STACK_LINE(79)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderPicker_obj,set_onlyMouseEnabled,return )

bool ShaderPicker_obj::get_onlyMouseEnabled( ){
	HX_STACK_PUSH("ShaderPicker::get_onlyMouseEnabled","away3d/core/pick/ShaderPicker.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->_onlyMouseEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderPicker_obj,get_onlyMouseEnabled,return )

::flash::geom::Rectangle ShaderPicker_obj::MOUSE_SCISSOR_RECT;


ShaderPicker_obj::ShaderPicker_obj()
{
}

void ShaderPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderPicker);
	HX_MARK_MEMBER_NAME(_potentialFound,"_potentialFound");
	HX_MARK_MEMBER_NAME(_rayDir,"_rayDir");
	HX_MARK_MEMBER_NAME(_rayPos,"_rayPos");
	HX_MARK_MEMBER_NAME(_localHitNormal,"_localHitNormal");
	HX_MARK_MEMBER_NAME(_subGeometryIndex,"_subGeometryIndex");
	HX_MARK_MEMBER_NAME(_faceIndex,"_faceIndex");
	HX_MARK_MEMBER_NAME(_hitUV,"_hitUV");
	HX_MARK_MEMBER_NAME(_localHitPosition,"_localHitPosition");
	HX_MARK_MEMBER_NAME(_hitEntity,"_hitEntity");
	HX_MARK_MEMBER_NAME(_hitRenderable,"_hitRenderable");
	HX_MARK_MEMBER_NAME(_projY,"_projY");
	HX_MARK_MEMBER_NAME(_projX,"_projX");
	HX_MARK_MEMBER_NAME(_hitColor,"_hitColor");
	HX_MARK_MEMBER_NAME(_interactiveId,"_interactiveId");
	HX_MARK_MEMBER_NAME(_interactives,"_interactives");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_boundOffsetScale,"_boundOffsetScale");
	HX_MARK_MEMBER_NAME(_viewportData,"_viewportData");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_triangleProgram3D,"_triangleProgram3D");
	HX_MARK_MEMBER_NAME(_objectProgram3D,"_objectProgram3D");
	HX_MARK_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_MARK_MEMBER_NAME(_context,"_context");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_END_CLASS();
}

void ShaderPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_potentialFound,"_potentialFound");
	HX_VISIT_MEMBER_NAME(_rayDir,"_rayDir");
	HX_VISIT_MEMBER_NAME(_rayPos,"_rayPos");
	HX_VISIT_MEMBER_NAME(_localHitNormal,"_localHitNormal");
	HX_VISIT_MEMBER_NAME(_subGeometryIndex,"_subGeometryIndex");
	HX_VISIT_MEMBER_NAME(_faceIndex,"_faceIndex");
	HX_VISIT_MEMBER_NAME(_hitUV,"_hitUV");
	HX_VISIT_MEMBER_NAME(_localHitPosition,"_localHitPosition");
	HX_VISIT_MEMBER_NAME(_hitEntity,"_hitEntity");
	HX_VISIT_MEMBER_NAME(_hitRenderable,"_hitRenderable");
	HX_VISIT_MEMBER_NAME(_projY,"_projY");
	HX_VISIT_MEMBER_NAME(_projX,"_projX");
	HX_VISIT_MEMBER_NAME(_hitColor,"_hitColor");
	HX_VISIT_MEMBER_NAME(_interactiveId,"_interactiveId");
	HX_VISIT_MEMBER_NAME(_interactives,"_interactives");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_boundOffsetScale,"_boundOffsetScale");
	HX_VISIT_MEMBER_NAME(_viewportData,"_viewportData");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_triangleProgram3D,"_triangleProgram3D");
	HX_VISIT_MEMBER_NAME(_objectProgram3D,"_objectProgram3D");
	HX_VISIT_MEMBER_NAME(_onlyMouseEnabled,"_onlyMouseEnabled");
	HX_VISIT_MEMBER_NAME(_context,"_context");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
}

Dynamic ShaderPicker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_hitUV") ) { return _hitUV; }
		if (HX_FIELD_EQ(inName,"_projY") ) { return _projY; }
		if (HX_FIELD_EQ(inName,"_projX") ) { return _projX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_rayDir") ) { return _rayDir; }
		if (HX_FIELD_EQ(inName,"_rayPos") ) { return _rayPos; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return _context; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateRay") ) { return updateRay_dyn(); }
		if (HX_FIELD_EQ(inName,"_hitColor") ) { return _hitColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_faceIndex") ) { return _faceIndex; }
		if (HX_FIELD_EQ(inName,"_hitEntity") ) { return _hitEntity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHitDetails") ) { return getHitDetails_dyn(); }
		if (HX_FIELD_EQ(inName,"_interactives") ) { return _interactives; }
		if (HX_FIELD_EQ(inName,"_viewportData") ) { return _viewportData; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hitRenderable") ) { return _hitRenderable; }
		if (HX_FIELD_EQ(inName,"_interactiveId") ) { return _interactiveId; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawRenderables") ) { return drawRenderables_dyn(); }
		if (HX_FIELD_EQ(inName,"_potentialFound") ) { return _potentialFound; }
		if (HX_FIELD_EQ(inName,"_localHitNormal") ) { return _localHitNormal; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getViewCollision") ) { return getViewCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"_objectProgram3D") ) { return _objectProgram3D; }
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { return get_onlyMouseEnabled(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getPreciseDetails") ) { return getPreciseDetails_dyn(); }
		if (HX_FIELD_EQ(inName,"getSceneCollision") ) { return getSceneCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"_subGeometryIndex") ) { return _subGeometryIndex; }
		if (HX_FIELD_EQ(inName,"_localHitPosition") ) { return _localHitPosition; }
		if (HX_FIELD_EQ(inName,"_boundOffsetScale") ) { return _boundOffsetScale; }
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { return _onlyMouseEnabled; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_SCISSOR_RECT") ) { return MOUSE_SCISSOR_RECT; }
		if (HX_FIELD_EQ(inName,"getPrecisePosition") ) { return getPrecisePosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_triangleProgram3D") ) { return _triangleProgram3D; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initObjectProgram3D") ) { return initObjectProgram3D_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_onlyMouseEnabled") ) { return set_onlyMouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onlyMouseEnabled") ) { return get_onlyMouseEnabled_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"initTriangleProgram3D") ) { return initTriangleProgram3D_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getApproximatePosition") ) { return getApproximatePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderPicker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_hitUV") ) { _hitUV=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projY") ) { _projY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_projX") ) { _projX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rayDir") ) { _rayDir=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rayPos") ) { _rayPos=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast< ::flash::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hitColor") ) { _hitColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_faceIndex") ) { _faceIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hitEntity") ) { _hitEntity=inValue.Cast< ::away3d::entities::Entity >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_interactives") ) { _interactives=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportData") ) { _viewportData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_hitRenderable") ) { _hitRenderable=inValue.Cast< ::away3d::core::base::IRenderable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_interactiveId") ) { _interactiveId=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_potentialFound") ) { _potentialFound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localHitNormal") ) { _localHitNormal=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectProgram3D") ) { _objectProgram3D=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onlyMouseEnabled") ) { return set_onlyMouseEnabled(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_subGeometryIndex") ) { _subGeometryIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_localHitPosition") ) { _localHitPosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_boundOffsetScale") ) { _boundOffsetScale=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onlyMouseEnabled") ) { _onlyMouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_SCISSOR_RECT") ) { MOUSE_SCISSOR_RECT=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_triangleProgram3D") ) { _triangleProgram3D=inValue.Cast< ::flash::display3D::Program3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_potentialFound"));
	outFields->push(HX_CSTRING("_rayDir"));
	outFields->push(HX_CSTRING("_rayPos"));
	outFields->push(HX_CSTRING("_localHitNormal"));
	outFields->push(HX_CSTRING("_subGeometryIndex"));
	outFields->push(HX_CSTRING("_faceIndex"));
	outFields->push(HX_CSTRING("_hitUV"));
	outFields->push(HX_CSTRING("_localHitPosition"));
	outFields->push(HX_CSTRING("_hitEntity"));
	outFields->push(HX_CSTRING("_hitRenderable"));
	outFields->push(HX_CSTRING("_projY"));
	outFields->push(HX_CSTRING("_projX"));
	outFields->push(HX_CSTRING("_hitColor"));
	outFields->push(HX_CSTRING("_interactiveId"));
	outFields->push(HX_CSTRING("_interactives"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("_boundOffsetScale"));
	outFields->push(HX_CSTRING("_viewportData"));
	outFields->push(HX_CSTRING("_bitmapData"));
	outFields->push(HX_CSTRING("_triangleProgram3D"));
	outFields->push(HX_CSTRING("_objectProgram3D"));
	outFields->push(HX_CSTRING("_onlyMouseEnabled"));
	outFields->push(HX_CSTRING("_context"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	outFields->push(HX_CSTRING("onlyMouseEnabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MOUSE_SCISSOR_RECT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("getPrecisePosition"),
	HX_CSTRING("getPreciseDetails"),
	HX_CSTRING("getApproximatePosition"),
	HX_CSTRING("getHitDetails"),
	HX_CSTRING("initTriangleProgram3D"),
	HX_CSTRING("initObjectProgram3D"),
	HX_CSTRING("updateRay"),
	HX_CSTRING("drawRenderables"),
	HX_CSTRING("draw"),
	HX_CSTRING("getSceneCollision"),
	HX_CSTRING("getViewCollision"),
	HX_CSTRING("set_onlyMouseEnabled"),
	HX_CSTRING("get_onlyMouseEnabled"),
	HX_CSTRING("_potentialFound"),
	HX_CSTRING("_rayDir"),
	HX_CSTRING("_rayPos"),
	HX_CSTRING("_localHitNormal"),
	HX_CSTRING("_subGeometryIndex"),
	HX_CSTRING("_faceIndex"),
	HX_CSTRING("_hitUV"),
	HX_CSTRING("_localHitPosition"),
	HX_CSTRING("_hitEntity"),
	HX_CSTRING("_hitRenderable"),
	HX_CSTRING("_projY"),
	HX_CSTRING("_projX"),
	HX_CSTRING("_hitColor"),
	HX_CSTRING("_interactiveId"),
	HX_CSTRING("_interactives"),
	HX_CSTRING("_id"),
	HX_CSTRING("_boundOffsetScale"),
	HX_CSTRING("_viewportData"),
	HX_CSTRING("_bitmapData"),
	HX_CSTRING("_triangleProgram3D"),
	HX_CSTRING("_objectProgram3D"),
	HX_CSTRING("_onlyMouseEnabled"),
	HX_CSTRING("_context"),
	HX_CSTRING("_stage3DProxy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderPicker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderPicker_obj::MOUSE_SCISSOR_RECT,"MOUSE_SCISSOR_RECT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderPicker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderPicker_obj::MOUSE_SCISSOR_RECT,"MOUSE_SCISSOR_RECT");
};

Class ShaderPicker_obj::__mClass;

void ShaderPicker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.pick.ShaderPicker"), hx::TCanCast< ShaderPicker_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderPicker_obj::__boot()
{
	MOUSE_SCISSOR_RECT= ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
