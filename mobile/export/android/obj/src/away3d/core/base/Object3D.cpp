#include <hxcpp.h>

#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_MathConsts
#include <away3d/core/math/MathConsts.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace core{
namespace base{

Void Object3D_obj::__construct()
{
HX_STACK_PUSH("Object3D::new","away3d/core/base/Object3D.hx",486);
{
	HX_STACK_LINE(487)
	this->_smallestNumber = 0.0000000000000000000001;
	HX_STACK_LINE(488)
	this->_transformDirty = true;
	HX_STACK_LINE(489)
	this->_rotationX = (int)0;
	HX_STACK_LINE(490)
	this->_rotationY = (int)0;
	HX_STACK_LINE(491)
	this->_rotationZ = (int)0;
	HX_STACK_LINE(492)
	this->_eulers = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(493)
	this->_flipY = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(494)
	this->_zOffset = (int)0;
	HX_STACK_LINE(495)
	this->_transform = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(496)
	this->_scaleX = (int)1;
	HX_STACK_LINE(497)
	this->_scaleY = (int)1;
	HX_STACK_LINE(498)
	this->_scaleZ = (int)1;
	HX_STACK_LINE(499)
	this->_x = (int)0;
	HX_STACK_LINE(500)
	this->_y = (int)0;
	HX_STACK_LINE(501)
	this->_z = (int)0;
	HX_STACK_LINE(502)
	this->_pivotPoint = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(503)
	this->_pivotZero = true;
	HX_STACK_LINE(504)
	this->_pos = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(505)
	this->_rot = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(506)
	this->_sca = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(509)
	this->_transformComponents = ::flash::_Vector::Vector_Impl__obj::_new((int)3,true);
	HX_STACK_LINE(510)
	this->_transformComponents[(int)0] = this->_pos;
	HX_STACK_LINE(511)
	this->_transformComponents[(int)1] = this->_rot;
	HX_STACK_LINE(512)
	this->_transformComponents[(int)2] = this->_sca;
	HX_STACK_LINE(513)
	this->_transform->identity();
	HX_STACK_LINE(514)
	this->_flipY->appendScale((int)1,(int)-1,(int)1);
	HX_STACK_LINE(515)
	super::__construct(null());
}
;
	return null();
}

Object3D_obj::~Object3D_obj() { }

Dynamic Object3D_obj::__CreateEmpty() { return  new Object3D_obj; }
hx::ObjectPtr< Object3D_obj > Object3D_obj::__new()
{  hx::ObjectPtr< Object3D_obj > result = new Object3D_obj();
	result->__construct();
	return result;}

Dynamic Object3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object3D_obj > result = new Object3D_obj();
	result->__construct();
	return result;}

int Object3D_obj::set_zOffset( int value){
	HX_STACK_PUSH("Object3D::set_zOffset","away3d/core/base/Object3D.hx",824);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(825)
	this->_zOffset = value;
	HX_STACK_LINE(826)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_zOffset,return )

int Object3D_obj::get_zOffset( ){
	HX_STACK_PUSH("Object3D::get_zOffset","away3d/core/base/Object3D.hx",820);
	HX_STACK_THIS(this);
	HX_STACK_LINE(820)
	return this->_zOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_zOffset,return )

Void Object3D_obj::updateTransform( ){
{
		HX_STACK_PUSH("Object3D::updateTransform","away3d/core/base/Object3D.hx",799);
		HX_STACK_THIS(this);
		HX_STACK_LINE(800)
		this->_pos->x = this->_x;
		HX_STACK_LINE(801)
		this->_pos->y = this->_y;
		HX_STACK_LINE(802)
		this->_pos->z = this->_z;
		HX_STACK_LINE(803)
		this->_rot->x = this->_rotationX;
		HX_STACK_LINE(804)
		this->_rot->y = this->_rotationY;
		HX_STACK_LINE(805)
		this->_rot->z = this->_rotationZ;
		HX_STACK_LINE(806)
		this->_sca->x = this->_scaleX;
		HX_STACK_LINE(807)
		this->_sca->y = this->_scaleY;
		HX_STACK_LINE(808)
		this->_sca->z = this->_scaleZ;
		HX_STACK_LINE(809)
		this->_transform->recompose(this->_transformComponents);
		HX_STACK_LINE(810)
		if ((!(this->_pivotZero))){
			HX_STACK_LINE(811)
			this->_transform->prependTranslation(-(this->_pivotPoint->x),-(this->_pivotPoint->y),-(this->_pivotPoint->z));
			HX_STACK_LINE(812)
			this->_transform->appendTranslation(this->_pivotPoint->x,this->_pivotPoint->y,this->_pivotPoint->z);
		}
		HX_STACK_LINE(814)
		this->_transformDirty = false;
		HX_STACK_LINE(815)
		this->_positionDirty = false;
		HX_STACK_LINE(816)
		this->_rotationDirty = false;
		HX_STACK_LINE(817)
		this->_scaleDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,updateTransform,(void))

Void Object3D_obj::invalidateTransform( ){
{
		HX_STACK_PUSH("Object3D::invalidateTransform","away3d/core/base/Object3D.hx",795);
		HX_STACK_THIS(this);
		HX_STACK_LINE(795)
		this->_transformDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateTransform,(void))

Void Object3D_obj::disposeAsset( ){
{
		HX_STACK_PUSH("Object3D::disposeAsset","away3d/core/base/Object3D.hx",787);
		HX_STACK_THIS(this);
		HX_STACK_LINE(787)
		this->dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,disposeAsset,(void))

Void Object3D_obj::dispose( ){
{
		HX_STACK_PUSH("Object3D::dispose","away3d/core/base/Object3D.hx",780);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,dispose,(void))

Void Object3D_obj::lookAt( ::flash::geom::Vector3D target,::flash::geom::Vector3D upAxis){
{
		HX_STACK_PUSH("Object3D::lookAt","away3d/core/base/Object3D.hx",738);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(upAxis,"upAxis");
		HX_STACK_LINE(739)
		::flash::geom::Vector3D yAxis;		HX_STACK_VAR(yAxis,"yAxis");
		HX_STACK_LINE(740)
		::flash::geom::Vector3D zAxis;		HX_STACK_VAR(zAxis,"zAxis");
		HX_STACK_LINE(741)
		::flash::geom::Vector3D xAxis;		HX_STACK_VAR(xAxis,"xAxis");
		HX_STACK_LINE(742)
		Array< Float > raw;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(743)
		if (((upAxis == null()))){
			HX_STACK_LINE(743)
			upAxis = ::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());
		}
		struct _Function_1_1{
			inline static ::flash::geom::Vector3D Block( ::away3d::core::base::Object3D_obj *__this,::flash::geom::Vector3D &target){
				HX_STACK_PUSH("*::closure","away3d/core/base/Object3D.hx",744);
				{
					HX_STACK_LINE(744)
					::flash::geom::Vector3D a = __this->get_position();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(744)
					return ::flash::geom::Vector3D_obj::__new((target->x - a->x),(target->y - a->y),(target->z - a->z),null());
				}
				return null();
			}
		};
		HX_STACK_LINE(744)
		zAxis = _Function_1_1::Block(this,target);
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			Float l = ::Math_obj::sqrt((((zAxis->x * zAxis->x) + (zAxis->y * zAxis->y)) + (zAxis->z * zAxis->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(745)
			if (((l != (int)0))){
				HX_STACK_LINE(745)
				hx::DivEq(zAxis->x,l);
				HX_STACK_LINE(745)
				hx::DivEq(zAxis->y,l);
				HX_STACK_LINE(745)
				hx::DivEq(zAxis->z,l);
			}
			HX_STACK_LINE(745)
			l;
		}
		HX_STACK_LINE(746)
		xAxis = ::flash::geom::Vector3D_obj::__new(((upAxis->y * zAxis->z) - (upAxis->z * zAxis->y)),((upAxis->z * zAxis->x) - (upAxis->x * zAxis->z)),((upAxis->x * zAxis->y) - (upAxis->y * zAxis->x)),(int)1);
		HX_STACK_LINE(747)
		{
			HX_STACK_LINE(747)
			Float l = ::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(747)
			if (((l != (int)0))){
				HX_STACK_LINE(747)
				hx::DivEq(xAxis->x,l);
				HX_STACK_LINE(747)
				hx::DivEq(xAxis->y,l);
				HX_STACK_LINE(747)
				hx::DivEq(xAxis->z,l);
			}
			HX_STACK_LINE(747)
			l;
		}
		HX_STACK_LINE(748)
		if (((::Math_obj::sqrt((((xAxis->x * xAxis->x) + (xAxis->y * xAxis->y)) + (xAxis->z * xAxis->z))) < .05))){
			struct _Function_2_1{
				inline static ::flash::geom::Vector3D Block( ::flash::geom::Vector3D &upAxis){
					HX_STACK_PUSH("*::closure","away3d/core/base/Object3D.hx",748);
					{
						HX_STACK_LINE(748)
						::flash::geom::Vector3D a = ::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(748)
						return ::flash::geom::Vector3D_obj::__new(((upAxis->y * a->z) - (upAxis->z * a->y)),((upAxis->z * a->x) - (upAxis->x * a->z)),((upAxis->x * a->y) - (upAxis->y * a->x)),(int)1);
					}
					return null();
				}
			};
			HX_STACK_LINE(748)
			xAxis = _Function_2_1::Block(upAxis);
		}
		HX_STACK_LINE(749)
		yAxis = ::flash::geom::Vector3D_obj::__new(((zAxis->y * xAxis->z) - (zAxis->z * xAxis->y)),((zAxis->z * xAxis->x) - (zAxis->x * xAxis->z)),((zAxis->x * xAxis->y) - (zAxis->y * xAxis->x)),(int)1);
		HX_STACK_LINE(750)
		raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
		HX_STACK_LINE(751)
		raw[(int)0] = (this->_scaleX * xAxis->x);
		HX_STACK_LINE(752)
		raw[(int)1] = (this->_scaleX * xAxis->y);
		HX_STACK_LINE(753)
		raw[(int)2] = (this->_scaleX * xAxis->z);
		HX_STACK_LINE(754)
		raw[(int)3] = (int)0;
		HX_STACK_LINE(755)
		raw[(int)4] = (this->_scaleY * yAxis->x);
		HX_STACK_LINE(756)
		raw[(int)5] = (this->_scaleY * yAxis->y);
		HX_STACK_LINE(757)
		raw[(int)6] = (this->_scaleY * yAxis->z);
		HX_STACK_LINE(758)
		raw[(int)7] = (int)0;
		HX_STACK_LINE(759)
		raw[(int)8] = (this->_scaleZ * zAxis->x);
		HX_STACK_LINE(760)
		raw[(int)9] = (this->_scaleZ * zAxis->y);
		HX_STACK_LINE(761)
		raw[(int)10] = (this->_scaleZ * zAxis->z);
		HX_STACK_LINE(762)
		raw[(int)11] = (int)0;
		HX_STACK_LINE(763)
		raw[(int)12] = this->_x;
		HX_STACK_LINE(764)
		raw[(int)13] = this->_y;
		HX_STACK_LINE(765)
		raw[(int)14] = this->_z;
		HX_STACK_LINE(766)
		raw[(int)15] = (int)1;
		HX_STACK_LINE(767)
		this->_transform->copyRawDataFrom(raw,null(),null());
		HX_STACK_LINE(768)
		this->set_transform(this->get_transform());
		HX_STACK_LINE(769)
		if (((zAxis->z < (int)0))){
			HX_STACK_LINE(770)
			this->set_rotationY(((int)180 - this->get_rotationY()));
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				::away3d::core::base::Object3D _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(771)
				_g->set_rotationX((_g->get_rotationX() - (int)180));
			}
			HX_STACK_LINE(772)
			{
				HX_STACK_LINE(772)
				::away3d::core::base::Object3D _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(772)
				_g->set_rotationZ((_g->get_rotationZ() - (int)180));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,lookAt,(void))

Void Object3D_obj::rotate( ::flash::geom::Vector3D axis,Float angle){
{
		HX_STACK_PUSH("Object3D::rotate","away3d/core/base/Object3D.hx",721);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(722)
		::flash::geom::Matrix3D m = ::flash::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(723)
		m->prependRotation(angle,axis);
		HX_STACK_LINE(724)
		::flash::geom::Vector3D vec = m->decompose()->__get((int)1).StaticCast< ::flash::geom::Vector3D >();		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(725)
		hx::AddEq(this->_rotationX,vec->x);
		HX_STACK_LINE(726)
		hx::AddEq(this->_rotationY,vec->y);
		HX_STACK_LINE(727)
		hx::AddEq(this->_rotationZ,vec->z);
		HX_STACK_LINE(728)
		this->invalidateRotation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,rotate,(void))

Void Object3D_obj::rotateTo( Float ax,Float ay,Float az){
{
		HX_STACK_PUSH("Object3D::rotateTo","away3d/core/base/Object3D.hx",707);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ax,"ax");
		HX_STACK_ARG(ay,"ay");
		HX_STACK_ARG(az,"az");
		HX_STACK_LINE(708)
		this->_rotationX = (ax * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
		HX_STACK_LINE(709)
		this->_rotationY = (ay * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
		HX_STACK_LINE(710)
		this->_rotationZ = (az * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
		HX_STACK_LINE(711)
		this->invalidateRotation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,rotateTo,(void))

::away3d::core::base::Object3D Object3D_obj::clone( ){
	HX_STACK_PUSH("Object3D::clone","away3d/core/base/Object3D.hx",690);
	HX_STACK_THIS(this);
	HX_STACK_LINE(691)
	::away3d::core::base::Object3D clone = ::away3d::core::base::Object3D_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(692)
	clone->set_pivotPoint(this->get_pivotPoint());
	HX_STACK_LINE(693)
	clone->set_transform(this->get_transform());
	HX_STACK_LINE(694)
	clone->set_name(this->get_name());
	HX_STACK_LINE(696)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,clone,return )

Void Object3D_obj::roll( Float angle){
{
		HX_STACK_PUSH("Object3D::roll","away3d/core/base/Object3D.hx",686);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(686)
		this->rotate(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,roll,(void))

Void Object3D_obj::yaw( Float angle){
{
		HX_STACK_PUSH("Object3D::yaw","away3d/core/base/Object3D.hx",676);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(676)
		this->rotate(::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null()),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,yaw,(void))

Void Object3D_obj::pitch( Float angle){
{
		HX_STACK_PUSH("Object3D::pitch","away3d/core/base/Object3D.hx",666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(666)
		this->rotate(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,pitch,(void))

Void Object3D_obj::translateLocal( ::flash::geom::Vector3D axis,Float distance){
{
		HX_STACK_PUSH("Object3D::translateLocal","away3d/core/base/Object3D.hx",647);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(648)
		Float x = axis->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(649)
		Float y = axis->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(650)
		Float z = axis->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(651)
		Float len = (Float(distance) / Float(::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)))));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(652)
		this->get_transform()->prependTranslation((x * len),(y * len),(z * len));
		HX_STACK_LINE(653)
		this->_transform->copyColumnTo((int)3,this->_pos);
		HX_STACK_LINE(654)
		this->_x = this->_pos->x;
		HX_STACK_LINE(655)
		this->_y = this->_pos->y;
		HX_STACK_LINE(656)
		this->_z = this->_pos->z;
		HX_STACK_LINE(657)
		this->invalidatePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,translateLocal,(void))

Void Object3D_obj::translate( ::flash::geom::Vector3D axis,Float distance){
{
		HX_STACK_PUSH("Object3D::translate","away3d/core/base/Object3D.hx",629);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(630)
		Float x = axis->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(631)
		Float y = axis->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(632)
		Float z = axis->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(633)
		Float len = (Float(distance) / Float(::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)))));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(634)
		hx::AddEq(this->_x,(x * len));
		HX_STACK_LINE(635)
		hx::AddEq(this->_y,(y * len));
		HX_STACK_LINE(636)
		hx::AddEq(this->_z,(z * len));
		HX_STACK_LINE(637)
		this->invalidatePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Object3D_obj,translate,(void))

Void Object3D_obj::movePivot( Float dx,Float dy,Float dz){
{
		HX_STACK_PUSH("Object3D::movePivot","away3d/core/base/Object3D.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_ARG(dz,"dz");
		HX_STACK_LINE(615)
		if (((this->_pivotPoint == null()))){
			HX_STACK_LINE(615)
			this->_pivotPoint = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(616)
		hx::AddEq(this->_pivotPoint->x,dx);
		HX_STACK_LINE(617)
		hx::AddEq(this->_pivotPoint->y,dy);
		HX_STACK_LINE(618)
		hx::AddEq(this->_pivotPoint->z,dz);
		HX_STACK_LINE(619)
		this->invalidatePivot();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,movePivot,(void))

Void Object3D_obj::moveTo( Float dx,Float dy,Float dz){
{
		HX_STACK_PUSH("Object3D::moveTo","away3d/core/base/Object3D.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_ARG(dz,"dz");
		HX_STACK_LINE(599)
		if (((bool((bool((this->_x == dx)) && bool((this->_y == dy)))) && bool((this->_z == dz))))){
			HX_STACK_LINE(599)
			return null();
		}
		HX_STACK_LINE(600)
		this->_x = dx;
		HX_STACK_LINE(601)
		this->_y = dy;
		HX_STACK_LINE(602)
		this->_z = dz;
		HX_STACK_LINE(603)
		this->invalidatePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Object3D_obj,moveTo,(void))

Void Object3D_obj::moveDown( Float distance){
{
		HX_STACK_PUSH("Object3D::moveDown","away3d/core/base/Object3D.hx",586);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(586)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null()),-(distance));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveDown,(void))

Void Object3D_obj::moveUp( Float distance){
{
		HX_STACK_PUSH("Object3D::moveUp","away3d/core/base/Object3D.hx",576);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(576)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null()),distance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveUp,(void))

Void Object3D_obj::moveRight( Float distance){
{
		HX_STACK_PUSH("Object3D::moveRight","away3d/core/base/Object3D.hx",566);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(566)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),distance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveRight,(void))

Void Object3D_obj::moveLeft( Float distance){
{
		HX_STACK_PUSH("Object3D::moveLeft","away3d/core/base/Object3D.hx",556);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(556)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null()),-(distance));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveLeft,(void))

Void Object3D_obj::moveBackward( Float distance){
{
		HX_STACK_PUSH("Object3D::moveBackward","away3d/core/base/Object3D.hx",546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(546)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),-(distance));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveBackward,(void))

Void Object3D_obj::moveForward( Float distance){
{
		HX_STACK_PUSH("Object3D::moveForward","away3d/core/base/Object3D.hx",536);
		HX_STACK_THIS(this);
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(536)
		this->translateLocal(::flash::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null()),distance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,moveForward,(void))

Void Object3D_obj::scale( Float value){
{
		HX_STACK_PUSH("Object3D::scale","away3d/core/base/Object3D.hx",523);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(524)
		hx::MultEq(this->_scaleX,value);
		HX_STACK_LINE(525)
		hx::MultEq(this->_scaleY,value);
		HX_STACK_LINE(526)
		hx::MultEq(this->_scaleZ,value);
		HX_STACK_LINE(527)
		this->invalidateScale();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,scale,(void))

::flash::geom::Vector3D Object3D_obj::get_downVector( ){
	HX_STACK_PUSH("Object3D::get_downVector","away3d/core/base/Object3D.hx",476);
	HX_STACK_THIS(this);
	HX_STACK_LINE(477)
	::flash::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getUp(this->get_transform(),null());		HX_STACK_VAR(director,"director");
	HX_STACK_LINE(478)
	{
		HX_STACK_LINE(478)
		hx::MultEq(director->x,(int)-1);
		HX_STACK_LINE(478)
		hx::MultEq(director->y,(int)-1);
		HX_STACK_LINE(478)
		hx::MultEq(director->z,(int)-1);
	}
	HX_STACK_LINE(479)
	return director;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_downVector,return )

::flash::geom::Vector3D Object3D_obj::get_leftVector( ){
	HX_STACK_PUSH("Object3D::get_leftVector","away3d/core/base/Object3D.hx",466);
	HX_STACK_THIS(this);
	HX_STACK_LINE(467)
	::flash::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getRight(this->get_transform(),null());		HX_STACK_VAR(director,"director");
	HX_STACK_LINE(468)
	{
		HX_STACK_LINE(468)
		hx::MultEq(director->x,(int)-1);
		HX_STACK_LINE(468)
		hx::MultEq(director->y,(int)-1);
		HX_STACK_LINE(468)
		hx::MultEq(director->z,(int)-1);
	}
	HX_STACK_LINE(469)
	return director;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_leftVector,return )

::flash::geom::Vector3D Object3D_obj::get_backVector( ){
	HX_STACK_PUSH("Object3D::get_backVector","away3d/core/base/Object3D.hx",456);
	HX_STACK_THIS(this);
	HX_STACK_LINE(457)
	::flash::geom::Vector3D director = ::away3d::core::math::Matrix3DUtils_obj::getForward(this->get_transform(),null());		HX_STACK_VAR(director,"director");
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(458)
		hx::MultEq(director->x,(int)-1);
		HX_STACK_LINE(458)
		hx::MultEq(director->y,(int)-1);
		HX_STACK_LINE(458)
		hx::MultEq(director->z,(int)-1);
	}
	HX_STACK_LINE(459)
	return director;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_backVector,return )

::flash::geom::Vector3D Object3D_obj::get_upVector( ){
	HX_STACK_PUSH("Object3D::get_upVector","away3d/core/base/Object3D.hx",448);
	HX_STACK_THIS(this);
	HX_STACK_LINE(448)
	return ::away3d::core::math::Matrix3DUtils_obj::getUp(this->get_transform(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_upVector,return )

::flash::geom::Vector3D Object3D_obj::get_rightVector( ){
	HX_STACK_PUSH("Object3D::get_rightVector","away3d/core/base/Object3D.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_LINE(440)
	return ::away3d::core::math::Matrix3DUtils_obj::getRight(this->get_transform(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rightVector,return )

::flash::geom::Vector3D Object3D_obj::get_forwardVector( ){
	HX_STACK_PUSH("Object3D::get_forwardVector","away3d/core/base/Object3D.hx",432);
	HX_STACK_THIS(this);
	HX_STACK_LINE(432)
	return ::away3d::core::math::Matrix3DUtils_obj::getForward(this->get_transform(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_forwardVector,return )

::flash::geom::Vector3D Object3D_obj::set_position( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("Object3D::set_position","away3d/core/base/Object3D.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(421)
	this->_x = value->x;
	HX_STACK_LINE(422)
	this->_y = value->y;
	HX_STACK_LINE(423)
	this->_z = value->z;
	HX_STACK_LINE(424)
	this->invalidatePosition();
	HX_STACK_LINE(425)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_position,return )

::flash::geom::Vector3D Object3D_obj::get_position( ){
	HX_STACK_PUSH("Object3D::get_position","away3d/core/base/Object3D.hx",415);
	HX_STACK_THIS(this);
	HX_STACK_LINE(416)
	this->get_transform()->copyColumnTo((int)3,this->_pos);
	struct _Function_1_1{
		inline static ::flash::geom::Vector3D Block( ::away3d::core::base::Object3D_obj *__this){
			HX_STACK_PUSH("*::closure","away3d/core/base/Object3D.hx",417);
			{
				HX_STACK_LINE(417)
				::flash::geom::Vector3D _this = __this->_pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				return ::flash::geom::Vector3D_obj::__new(_this->x,_this->y,_this->z,_this->w);
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_position,return )

::flash::geom::Vector3D Object3D_obj::set_pivotPoint( ::flash::geom::Vector3D pivot){
	HX_STACK_PUSH("Object3D::set_pivotPoint","away3d/core/base/Object3D.hx",405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pivot,"pivot");
	HX_STACK_LINE(406)
	this->_pivotPoint = ::flash::geom::Vector3D_obj::__new(pivot->x,pivot->y,pivot->z,pivot->w);
	HX_STACK_LINE(407)
	this->invalidatePivot();
	HX_STACK_LINE(408)
	return pivot;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_pivotPoint,return )

::flash::geom::Vector3D Object3D_obj::get_pivotPoint( ){
	HX_STACK_PUSH("Object3D::get_pivotPoint","away3d/core/base/Object3D.hx",401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(401)
	return this->_pivotPoint;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_pivotPoint,return )

::flash::geom::Matrix3D Object3D_obj::set_transform( ::flash::geom::Matrix3D val){
	HX_STACK_PUSH("Object3D::set_transform","away3d/core/base/Object3D.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(365)
	if (((val->rawData->__get((int)0) == (int)0))){
		HX_STACK_LINE(366)
		Array< Float > raw = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;		HX_STACK_VAR(raw,"raw");
		HX_STACK_LINE(367)
		val->copyRawDataTo(raw,null(),null());
		HX_STACK_LINE(368)
		raw[(int)0] = this->_smallestNumber;
		HX_STACK_LINE(369)
		val->copyRawDataFrom(raw,null(),null());
	}
	HX_STACK_LINE(371)
	Array< ::Dynamic > elements = val->decompose();		HX_STACK_VAR(elements,"elements");
	HX_STACK_LINE(372)
	::flash::geom::Vector3D vec;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(373)
	vec = elements->__get((int)0).StaticCast< ::flash::geom::Vector3D >();
	HX_STACK_LINE(374)
	if (((bool((bool((this->_x != vec->x)) || bool((this->_y != vec->y)))) || bool((this->_z != vec->z))))){
		HX_STACK_LINE(375)
		this->_x = vec->x;
		HX_STACK_LINE(376)
		this->_y = vec->y;
		HX_STACK_LINE(377)
		this->_z = vec->z;
		HX_STACK_LINE(378)
		this->invalidatePosition();
	}
	HX_STACK_LINE(380)
	vec = elements->__get((int)1).StaticCast< ::flash::geom::Vector3D >();
	HX_STACK_LINE(381)
	if (((bool((bool((this->_rotationX != vec->x)) || bool((this->_rotationY != vec->y)))) || bool((this->_rotationZ != vec->z))))){
		HX_STACK_LINE(382)
		this->_rotationX = vec->x;
		HX_STACK_LINE(383)
		this->_rotationY = vec->y;
		HX_STACK_LINE(384)
		this->_rotationZ = vec->z;
		HX_STACK_LINE(385)
		this->invalidateRotation();
	}
	HX_STACK_LINE(387)
	vec = elements->__get((int)2).StaticCast< ::flash::geom::Vector3D >();
	HX_STACK_LINE(388)
	if (((bool((bool((this->_scaleX != vec->x)) || bool((this->_scaleY != vec->y)))) || bool((this->_scaleZ != vec->z))))){
		HX_STACK_LINE(389)
		this->_scaleX = vec->x;
		HX_STACK_LINE(390)
		this->_scaleY = vec->y;
		HX_STACK_LINE(391)
		this->_scaleZ = vec->z;
		HX_STACK_LINE(392)
		this->invalidateScale();
	}
	HX_STACK_LINE(394)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_transform,return )

::flash::geom::Matrix3D Object3D_obj::get_transform( ){
	HX_STACK_PUSH("Object3D::get_transform","away3d/core/base/Object3D.hx",358);
	HX_STACK_THIS(this);
	HX_STACK_LINE(359)
	if ((this->_transformDirty)){
		HX_STACK_LINE(359)
		this->updateTransform();
	}
	HX_STACK_LINE(360)
	return this->_transform;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_transform,return )

::flash::geom::Vector3D Object3D_obj::set_eulers( ::flash::geom::Vector3D value){
	HX_STACK_PUSH("Object3D::set_eulers","away3d/core/base/Object3D.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(347)
	this->_rotationX = (value->x * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(348)
	this->_rotationY = (value->y * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(349)
	this->_rotationZ = (value->z * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(350)
	this->invalidateRotation();
	HX_STACK_LINE(351)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_eulers,return )

::flash::geom::Vector3D Object3D_obj::get_eulers( ){
	HX_STACK_PUSH("Object3D::get_eulers","away3d/core/base/Object3D.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_LINE(340)
	this->_eulers->x = (this->_rotationX * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
	HX_STACK_LINE(341)
	this->_eulers->y = (this->_rotationY * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
	HX_STACK_LINE(342)
	this->_eulers->z = (this->_rotationZ * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
	HX_STACK_LINE(343)
	return this->_eulers;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_eulers,return )

Float Object3D_obj::set_scaleZ( Float val){
	HX_STACK_PUSH("Object3D::set_scaleZ","away3d/core/base/Object3D.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(329)
	if (((this->_scaleZ == val))){
		HX_STACK_LINE(329)
		return val;
	}
	HX_STACK_LINE(330)
	this->_scaleZ = val;
	HX_STACK_LINE(331)
	this->invalidateScale();
	HX_STACK_LINE(332)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleZ,return )

Float Object3D_obj::get_scaleZ( ){
	HX_STACK_PUSH("Object3D::get_scaleZ","away3d/core/base/Object3D.hx",324);
	HX_STACK_THIS(this);
	HX_STACK_LINE(324)
	return this->_scaleZ;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleZ,return )

Float Object3D_obj::set_scaleY( Float val){
	HX_STACK_PUSH("Object3D::set_scaleY","away3d/core/base/Object3D.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(314)
	if (((this->_scaleY == val))){
		HX_STACK_LINE(314)
		return val;
	}
	HX_STACK_LINE(315)
	this->_scaleY = val;
	HX_STACK_LINE(316)
	this->invalidateScale();
	HX_STACK_LINE(317)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleY,return )

Float Object3D_obj::get_scaleY( ){
	HX_STACK_PUSH("Object3D::get_scaleY","away3d/core/base/Object3D.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->_scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleY,return )

Float Object3D_obj::set_scaleX( Float val){
	HX_STACK_PUSH("Object3D::set_scaleX","away3d/core/base/Object3D.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(299)
	if (((this->_scaleX == val))){
		HX_STACK_LINE(299)
		return val;
	}
	HX_STACK_LINE(300)
	this->_scaleX = val;
	HX_STACK_LINE(301)
	this->invalidateScale();
	HX_STACK_LINE(302)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_scaleX,return )

Float Object3D_obj::get_scaleX( ){
	HX_STACK_PUSH("Object3D::get_scaleX","away3d/core/base/Object3D.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_scaleX,return )

Float Object3D_obj::set_rotationZ( Float val){
	HX_STACK_PUSH("Object3D::set_rotationZ","away3d/core/base/Object3D.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(284)
	if (((this->get_rotationZ() == val))){
		HX_STACK_LINE(284)
		return val;
	}
	HX_STACK_LINE(285)
	this->_rotationZ = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(286)
	this->invalidateRotation();
	HX_STACK_LINE(287)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationZ,return )

Float Object3D_obj::get_rotationZ( ){
	HX_STACK_PUSH("Object3D::get_rotationZ","away3d/core/base/Object3D.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_LINE(279)
	return (this->_rotationZ * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationZ,return )

Float Object3D_obj::set_rotationY( Float val){
	HX_STACK_PUSH("Object3D::set_rotationY","away3d/core/base/Object3D.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(269)
	if (((this->get_rotationY() == val))){
		HX_STACK_LINE(269)
		return val;
	}
	HX_STACK_LINE(270)
	this->_rotationY = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(271)
	this->invalidateRotation();
	HX_STACK_LINE(272)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationY,return )

Float Object3D_obj::get_rotationY( ){
	HX_STACK_PUSH("Object3D::get_rotationY","away3d/core/base/Object3D.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(264)
	return (this->_rotationY * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationY,return )

Float Object3D_obj::set_rotationX( Float val){
	HX_STACK_PUSH("Object3D::set_rotationX","away3d/core/base/Object3D.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(254)
	if (((this->get_rotationX() == val))){
		HX_STACK_LINE(254)
		return val;
	}
	HX_STACK_LINE(255)
	this->_rotationX = (val * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS);
	HX_STACK_LINE(256)
	this->invalidateRotation();
	HX_STACK_LINE(257)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_rotationX,return )

Float Object3D_obj::get_rotationX( ){
	HX_STACK_PUSH("Object3D::get_rotationX","away3d/core/base/Object3D.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(249)
	return (this->_rotationX * ::away3d::core::math::MathConsts_obj::RADIANS_TO_DEGREES);
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_rotationX,return )

Float Object3D_obj::set_z( Float val){
	HX_STACK_PUSH("Object3D::set_z","away3d/core/base/Object3D.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(239)
	if (((this->_z == val))){
		HX_STACK_LINE(239)
		return val;
	}
	HX_STACK_LINE(240)
	this->_z = val;
	HX_STACK_LINE(241)
	this->invalidatePosition();
	HX_STACK_LINE(242)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_z,return )

Float Object3D_obj::get_z( ){
	HX_STACK_PUSH("Object3D::get_z","away3d/core/base/Object3D.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_LINE(234)
	return this->_z;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_z,return )

Float Object3D_obj::set_y( Float val){
	HX_STACK_PUSH("Object3D::set_y","away3d/core/base/Object3D.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(224)
	if (((this->_y == val))){
		HX_STACK_LINE(224)
		return val;
	}
	HX_STACK_LINE(225)
	this->_y = val;
	HX_STACK_LINE(226)
	this->invalidatePosition();
	HX_STACK_LINE(227)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_y,return )

Float Object3D_obj::get_y( ){
	HX_STACK_PUSH("Object3D::get_y","away3d/core/base/Object3D.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_y,return )

Float Object3D_obj::set_x( Float val){
	HX_STACK_PUSH("Object3D::set_x","away3d/core/base/Object3D.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(209)
	if (((this->_x == val))){
		HX_STACK_LINE(209)
		return val;
	}
	HX_STACK_LINE(210)
	this->_x = val;
	HX_STACK_LINE(211)
	this->invalidatePosition();
	HX_STACK_LINE(212)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Object3D_obj,set_x,return )

Float Object3D_obj::get_x( ){
	HX_STACK_PUSH("Object3D::get_x","away3d/core/base/Object3D.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,get_x,return )

Void Object3D_obj::notifyScaleChanged( ){
{
		HX_STACK_PUSH("Object3D::notifyScaleChanged","away3d/core/base/Object3D.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		if (((this->_scaleChanged == null()))){
			HX_STACK_LINE(179)
			this->_scaleChanged = ::away3d::events::Object3DEvent_obj::__new(::away3d::events::Object3DEvent_obj::SCALE_CHANGED,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(180)
		this->dispatchEvent(this->_scaleChanged);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyScaleChanged,(void))

Void Object3D_obj::invalidateScale( ){
{
		HX_STACK_PUSH("Object3D::invalidateScale","away3d/core/base/Object3D.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		if ((this->_scaleDirty)){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(173)
		this->_scaleDirty = true;
		HX_STACK_LINE(174)
		this->invalidateTransform();
		HX_STACK_LINE(175)
		if ((this->_listenToScaleChanged)){
			HX_STACK_LINE(175)
			this->notifyScaleChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateScale,(void))

Void Object3D_obj::notifyRotationChanged( ){
{
		HX_STACK_PUSH("Object3D::notifyRotationChanged","away3d/core/base/Object3D.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_LINE(167)
		if (((this->_rotationChanged == null()))){
			HX_STACK_LINE(167)
			this->_rotationChanged = ::away3d::events::Object3DEvent_obj::__new(::away3d::events::Object3DEvent_obj::ROTATION_CHANGED,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(168)
		this->dispatchEvent(this->_rotationChanged);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyRotationChanged,(void))

Void Object3D_obj::invalidateRotation( ){
{
		HX_STACK_PUSH("Object3D::invalidateRotation","away3d/core/base/Object3D.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_LINE(160)
		if ((this->_rotationDirty)){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(161)
		this->_rotationDirty = true;
		HX_STACK_LINE(162)
		this->invalidateTransform();
		HX_STACK_LINE(163)
		if ((this->_listenToRotationChanged)){
			HX_STACK_LINE(163)
			this->notifyRotationChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidateRotation,(void))

Void Object3D_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_PUSH("Object3D::removeEventListener","away3d/core/base/Object3D.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
{
		HX_STACK_LINE(147)
		this->super::removeEventListener(type,listener,useCapture);
		HX_STACK_LINE(148)
		if ((this->hasEventListener(type))){
			HX_STACK_LINE(148)
			return null();
		}
		HX_STACK_LINE(149)
		::String _switch_1 = (type);
		if (  ( _switch_1==::away3d::events::Object3DEvent_obj::POSITION_CHANGED)){
			HX_STACK_LINE(150)
			this->_listenToPositionChanged = false;
		}
		else if (  ( _switch_1==::away3d::events::Object3DEvent_obj::ROTATION_CHANGED)){
			HX_STACK_LINE(152)
			this->_listenToRotationChanged = false;
		}
		else if (  ( _switch_1==::away3d::events::Object3DEvent_obj::SCALE_CHANGED)){
			HX_STACK_LINE(154)
			this->_listenToScaleChanged = false;
		}
	}
return null();
}


Void Object3D_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("Object3D::addEventListener","away3d/core/base/Object3D.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(135)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(136)
		::String _switch_2 = (type);
		if (  ( _switch_2==::away3d::events::Object3DEvent_obj::POSITION_CHANGED)){
			HX_STACK_LINE(137)
			this->_listenToPositionChanged = true;
		}
		else if (  ( _switch_2==::away3d::events::Object3DEvent_obj::ROTATION_CHANGED)){
			HX_STACK_LINE(139)
			this->_listenToRotationChanged = true;
		}
		else if (  ( _switch_2==::away3d::events::Object3DEvent_obj::SCALE_CHANGED)){
			HX_STACK_LINE(141)
			this->_listenToRotationChanged = true;
		}
	}
return null();
}


Void Object3D_obj::notifyPositionChanged( ){
{
		HX_STACK_PUSH("Object3D::notifyPositionChanged","away3d/core/base/Object3D.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		if (((this->_positionChanged == null()))){
			HX_STACK_LINE(130)
			this->_positionChanged = ::away3d::events::Object3DEvent_obj::__new(::away3d::events::Object3DEvent_obj::POSITION_CHANGED,hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(131)
		this->dispatchEvent(this->_positionChanged);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,notifyPositionChanged,(void))

Void Object3D_obj::invalidatePosition( ){
{
		HX_STACK_PUSH("Object3D::invalidatePosition","away3d/core/base/Object3D.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		if ((this->_positionDirty)){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(124)
		this->_positionDirty = true;
		HX_STACK_LINE(125)
		this->invalidateTransform();
		HX_STACK_LINE(126)
		if ((this->_listenToPositionChanged)){
			HX_STACK_LINE(126)
			this->notifyPositionChanged();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidatePosition,(void))

Void Object3D_obj::invalidatePivot( ){
{
		HX_STACK_PUSH("Object3D::invalidatePivot","away3d/core/base/Object3D.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		this->_pivotZero = (bool((bool((this->_pivotPoint->x == (int)0)) && bool((this->_pivotPoint->y == (int)0)))) && bool((this->_pivotPoint->z == (int)0)));
		HX_STACK_LINE(119)
		this->invalidateTransform();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object3D_obj,invalidatePivot,(void))


Object3D_obj::Object3D_obj()
{
}

void Object3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object3D);
	HX_MARK_MEMBER_NAME(extra,"extra");
	HX_MARK_MEMBER_NAME(_transformComponents,"_transformComponents");
	HX_MARK_MEMBER_NAME(_sca,"_sca");
	HX_MARK_MEMBER_NAME(_rot,"_rot");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_pivotZero,"_pivotZero");
	HX_MARK_MEMBER_NAME(_pivotPoint,"_pivotPoint");
	HX_MARK_MEMBER_NAME(_z,"_z");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_scaleZ,"_scaleZ");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_zOffset,"_zOffset");
	HX_MARK_MEMBER_NAME(_listenToScaleChanged,"_listenToScaleChanged");
	HX_MARK_MEMBER_NAME(_listenToRotationChanged,"_listenToRotationChanged");
	HX_MARK_MEMBER_NAME(_listenToPositionChanged,"_listenToPositionChanged");
	HX_MARK_MEMBER_NAME(_flipY,"_flipY");
	HX_MARK_MEMBER_NAME(_eulers,"_eulers");
	HX_MARK_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_MARK_MEMBER_NAME(_rotationY,"_rotationY");
	HX_MARK_MEMBER_NAME(_rotationX,"_rotationX");
	HX_MARK_MEMBER_NAME(_scaleChanged,"_scaleChanged");
	HX_MARK_MEMBER_NAME(_rotationChanged,"_rotationChanged");
	HX_MARK_MEMBER_NAME(_positionChanged,"_positionChanged");
	HX_MARK_MEMBER_NAME(_scaleDirty,"_scaleDirty");
	HX_MARK_MEMBER_NAME(_rotationDirty,"_rotationDirty");
	HX_MARK_MEMBER_NAME(_positionDirty,"_positionDirty");
	HX_MARK_MEMBER_NAME(_transformDirty,"_transformDirty");
	HX_MARK_MEMBER_NAME(_smallestNumber,"_smallestNumber");
	HX_MARK_MEMBER_NAME(_controller,"_controller");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Object3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extra,"extra");
	HX_VISIT_MEMBER_NAME(_transformComponents,"_transformComponents");
	HX_VISIT_MEMBER_NAME(_sca,"_sca");
	HX_VISIT_MEMBER_NAME(_rot,"_rot");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_pivotZero,"_pivotZero");
	HX_VISIT_MEMBER_NAME(_pivotPoint,"_pivotPoint");
	HX_VISIT_MEMBER_NAME(_z,"_z");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_scaleZ,"_scaleZ");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_zOffset,"_zOffset");
	HX_VISIT_MEMBER_NAME(_listenToScaleChanged,"_listenToScaleChanged");
	HX_VISIT_MEMBER_NAME(_listenToRotationChanged,"_listenToRotationChanged");
	HX_VISIT_MEMBER_NAME(_listenToPositionChanged,"_listenToPositionChanged");
	HX_VISIT_MEMBER_NAME(_flipY,"_flipY");
	HX_VISIT_MEMBER_NAME(_eulers,"_eulers");
	HX_VISIT_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_VISIT_MEMBER_NAME(_rotationY,"_rotationY");
	HX_VISIT_MEMBER_NAME(_rotationX,"_rotationX");
	HX_VISIT_MEMBER_NAME(_scaleChanged,"_scaleChanged");
	HX_VISIT_MEMBER_NAME(_rotationChanged,"_rotationChanged");
	HX_VISIT_MEMBER_NAME(_positionChanged,"_positionChanged");
	HX_VISIT_MEMBER_NAME(_scaleDirty,"_scaleDirty");
	HX_VISIT_MEMBER_NAME(_rotationDirty,"_rotationDirty");
	HX_VISIT_MEMBER_NAME(_positionDirty,"_positionDirty");
	HX_VISIT_MEMBER_NAME(_transformDirty,"_transformDirty");
	HX_VISIT_MEMBER_NAME(_smallestNumber,"_smallestNumber");
	HX_VISIT_MEMBER_NAME(_controller,"_controller");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Object3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_z") ) { return _z; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"yaw") ) { return yaw_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"roll") ) { return roll_dyn(); }
		if (HX_FIELD_EQ(inName,"_sca") ) { return _sca; }
		if (HX_FIELD_EQ(inName,"_rot") ) { return _rot; }
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"extra") ) { return extra; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lookAt") ) { return lookAt_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return moveUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_flipY") ) { return _flipY; }
		if (HX_FIELD_EQ(inName,"eulers") ) { return get_eulers(); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return get_scaleZ(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return get_scaleX(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaleZ") ) { return _scaleZ; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return _scaleY; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return _scaleX; }
		if (HX_FIELD_EQ(inName,"_eulers") ) { return _eulers; }
		if (HX_FIELD_EQ(inName,"zOffset") ) { return get_zOffset(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotateTo") ) { return rotateTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return moveDown_dyn(); }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"_zOffset") ) { return _zOffset; }
		if (HX_FIELD_EQ(inName,"upVector") ) { return get_upVector(); }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"movePivot") ) { return movePivot_dyn(); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return get_transform(); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { return get_rotationZ(); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { return get_rotationY(); }
		if (HX_FIELD_EQ(inName,"rotationX") ) { return get_rotationX(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_eulers") ) { return set_eulers_dyn(); }
		if (HX_FIELD_EQ(inName,"get_eulers") ) { return get_eulers_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleZ") ) { return set_scaleZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleZ") ) { return get_scaleZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"_pivotZero") ) { return _pivotZero; }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { return _rotationZ; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { return _rotationY; }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { return _rotationX; }
		if (HX_FIELD_EQ(inName,"downVector") ) { return get_downVector(); }
		if (HX_FIELD_EQ(inName,"leftVector") ) { return get_leftVector(); }
		if (HX_FIELD_EQ(inName,"backVector") ) { return get_backVector(); }
		if (HX_FIELD_EQ(inName,"pivotPoint") ) { return get_pivotPoint(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_zOffset") ) { return set_zOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_zOffset") ) { return get_zOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"moveForward") ) { return moveForward_dyn(); }
		if (HX_FIELD_EQ(inName,"_pivotPoint") ) { return _pivotPoint; }
		if (HX_FIELD_EQ(inName,"_scaleDirty") ) { return _scaleDirty; }
		if (HX_FIELD_EQ(inName,"_controller") ) { return _controller; }
		if (HX_FIELD_EQ(inName,"rightVector") ) { return get_rightVector(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"disposeAsset") ) { return disposeAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"moveBackward") ) { return moveBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"get_upVector") ) { return get_upVector_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationZ") ) { return set_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationZ") ) { return get_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationY") ) { return set_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationY") ) { return get_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationX") ) { return set_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationX") ) { return get_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaleChanged") ) { return _scaleChanged; }
		if (HX_FIELD_EQ(inName,"forwardVector") ) { return get_forwardVector(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"translateLocal") ) { return translateLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_downVector") ) { return get_downVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftVector") ) { return get_leftVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backVector") ) { return get_backVector_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pivotPoint") ) { return set_pivotPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pivotPoint") ) { return get_pivotPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_rotationDirty") ) { return _rotationDirty; }
		if (HX_FIELD_EQ(inName,"_positionDirty") ) { return _positionDirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return updateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightVector") ) { return get_rightVector_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateScale") ) { return invalidateScale_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidatePivot") ) { return invalidatePivot_dyn(); }
		if (HX_FIELD_EQ(inName,"_transformDirty") ) { return _transformDirty; }
		if (HX_FIELD_EQ(inName,"_smallestNumber") ) { return _smallestNumber; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"_rotationChanged") ) { return _rotationChanged; }
		if (HX_FIELD_EQ(inName,"_positionChanged") ) { return _positionChanged; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_forwardVector") ) { return get_forwardVector_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"notifyScaleChanged") ) { return notifyScaleChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateRotation") ) { return invalidateRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidatePosition") ) { return invalidatePosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateTransform") ) { return invalidateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformComponents") ) { return _transformComponents; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"notifyRotationChanged") ) { return notifyRotationChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"notifyPositionChanged") ) { return notifyPositionChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"_listenToScaleChanged") ) { return _listenToScaleChanged; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_listenToRotationChanged") ) { return _listenToRotationChanged; }
		if (HX_FIELD_EQ(inName,"_listenToPositionChanged") ) { return _listenToPositionChanged; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_z") ) { _z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_sca") ) { _sca=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rot") ) { _rot=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"extra") ) { extra=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flipY") ) { _flipY=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eulers") ) { return set_eulers(inValue); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return set_scaleZ(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return set_scaleX(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleZ") ) { _scaleZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_eulers") ) { _eulers=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zOffset") ) { return set_zOffset(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_zOffset") ) { _zOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { return set_rotationZ(inValue); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { return set_rotationY(inValue); }
		if (HX_FIELD_EQ(inName,"rotationX") ) { return set_rotationX(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_pivotZero") ) { _pivotZero=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { _rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { _rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { _rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pivotPoint") ) { return set_pivotPoint(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pivotPoint") ) { _pivotPoint=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleDirty") ) { _scaleDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controller") ) { _controller=inValue.Cast< ::away3d::controllers::ControllerBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scaleChanged") ) { _scaleChanged=inValue.Cast< ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotationDirty") ) { _rotationDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionDirty") ) { _positionDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_transformDirty") ) { _transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smallestNumber") ) { _smallestNumber=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotationChanged") ) { _rotationChanged=inValue.Cast< ::away3d::events::Object3DEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionChanged") ) { _positionChanged=inValue.Cast< ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformComponents") ) { _transformComponents=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_listenToScaleChanged") ) { _listenToScaleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_listenToRotationChanged") ) { _listenToRotationChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_listenToPositionChanged") ) { _listenToPositionChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("extra"));
	outFields->push(HX_CSTRING("_transformComponents"));
	outFields->push(HX_CSTRING("_sca"));
	outFields->push(HX_CSTRING("_rot"));
	outFields->push(HX_CSTRING("_pos"));
	outFields->push(HX_CSTRING("_pivotZero"));
	outFields->push(HX_CSTRING("_pivotPoint"));
	outFields->push(HX_CSTRING("_z"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_scaleZ"));
	outFields->push(HX_CSTRING("_scaleY"));
	outFields->push(HX_CSTRING("_scaleX"));
	outFields->push(HX_CSTRING("_transform"));
	outFields->push(HX_CSTRING("_zOffset"));
	outFields->push(HX_CSTRING("_listenToScaleChanged"));
	outFields->push(HX_CSTRING("_listenToRotationChanged"));
	outFields->push(HX_CSTRING("_listenToPositionChanged"));
	outFields->push(HX_CSTRING("_flipY"));
	outFields->push(HX_CSTRING("_eulers"));
	outFields->push(HX_CSTRING("_rotationZ"));
	outFields->push(HX_CSTRING("_rotationY"));
	outFields->push(HX_CSTRING("_rotationX"));
	outFields->push(HX_CSTRING("_scaleChanged"));
	outFields->push(HX_CSTRING("_rotationChanged"));
	outFields->push(HX_CSTRING("_positionChanged"));
	outFields->push(HX_CSTRING("_scaleDirty"));
	outFields->push(HX_CSTRING("_rotationDirty"));
	outFields->push(HX_CSTRING("_positionDirty"));
	outFields->push(HX_CSTRING("_transformDirty"));
	outFields->push(HX_CSTRING("_smallestNumber"));
	outFields->push(HX_CSTRING("_controller"));
	outFields->push(HX_CSTRING("zOffset"));
	outFields->push(HX_CSTRING("downVector"));
	outFields->push(HX_CSTRING("leftVector"));
	outFields->push(HX_CSTRING("backVector"));
	outFields->push(HX_CSTRING("upVector"));
	outFields->push(HX_CSTRING("rightVector"));
	outFields->push(HX_CSTRING("forwardVector"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("pivotPoint"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("eulers"));
	outFields->push(HX_CSTRING("scaleZ"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("rotationZ"));
	outFields->push(HX_CSTRING("rotationY"));
	outFields->push(HX_CSTRING("rotationX"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_zOffset"),
	HX_CSTRING("get_zOffset"),
	HX_CSTRING("updateTransform"),
	HX_CSTRING("invalidateTransform"),
	HX_CSTRING("disposeAsset"),
	HX_CSTRING("dispose"),
	HX_CSTRING("lookAt"),
	HX_CSTRING("rotate"),
	HX_CSTRING("rotateTo"),
	HX_CSTRING("clone"),
	HX_CSTRING("roll"),
	HX_CSTRING("yaw"),
	HX_CSTRING("pitch"),
	HX_CSTRING("translateLocal"),
	HX_CSTRING("translate"),
	HX_CSTRING("movePivot"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("moveDown"),
	HX_CSTRING("moveUp"),
	HX_CSTRING("moveRight"),
	HX_CSTRING("moveLeft"),
	HX_CSTRING("moveBackward"),
	HX_CSTRING("moveForward"),
	HX_CSTRING("scale"),
	HX_CSTRING("get_downVector"),
	HX_CSTRING("get_leftVector"),
	HX_CSTRING("get_backVector"),
	HX_CSTRING("get_upVector"),
	HX_CSTRING("get_rightVector"),
	HX_CSTRING("get_forwardVector"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_pivotPoint"),
	HX_CSTRING("get_pivotPoint"),
	HX_CSTRING("set_transform"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("set_eulers"),
	HX_CSTRING("get_eulers"),
	HX_CSTRING("set_scaleZ"),
	HX_CSTRING("get_scaleZ"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("set_rotationZ"),
	HX_CSTRING("get_rotationZ"),
	HX_CSTRING("set_rotationY"),
	HX_CSTRING("get_rotationY"),
	HX_CSTRING("set_rotationX"),
	HX_CSTRING("get_rotationX"),
	HX_CSTRING("set_z"),
	HX_CSTRING("get_z"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("extra"),
	HX_CSTRING("_transformComponents"),
	HX_CSTRING("_sca"),
	HX_CSTRING("_rot"),
	HX_CSTRING("_pos"),
	HX_CSTRING("_pivotZero"),
	HX_CSTRING("_pivotPoint"),
	HX_CSTRING("_z"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_scaleZ"),
	HX_CSTRING("_scaleY"),
	HX_CSTRING("_scaleX"),
	HX_CSTRING("_transform"),
	HX_CSTRING("notifyScaleChanged"),
	HX_CSTRING("invalidateScale"),
	HX_CSTRING("notifyRotationChanged"),
	HX_CSTRING("invalidateRotation"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("notifyPositionChanged"),
	HX_CSTRING("invalidatePosition"),
	HX_CSTRING("invalidatePivot"),
	HX_CSTRING("_zOffset"),
	HX_CSTRING("_listenToScaleChanged"),
	HX_CSTRING("_listenToRotationChanged"),
	HX_CSTRING("_listenToPositionChanged"),
	HX_CSTRING("_flipY"),
	HX_CSTRING("_eulers"),
	HX_CSTRING("_rotationZ"),
	HX_CSTRING("_rotationY"),
	HX_CSTRING("_rotationX"),
	HX_CSTRING("_scaleChanged"),
	HX_CSTRING("_rotationChanged"),
	HX_CSTRING("_positionChanged"),
	HX_CSTRING("_scaleDirty"),
	HX_CSTRING("_rotationDirty"),
	HX_CSTRING("_positionDirty"),
	HX_CSTRING("_transformDirty"),
	HX_CSTRING("_smallestNumber"),
	HX_CSTRING("_controller"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object3D_obj::__mClass,"__mClass");
};

Class Object3D_obj::__mClass;

void Object3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.Object3D"), hx::TCanCast< Object3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Object3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
