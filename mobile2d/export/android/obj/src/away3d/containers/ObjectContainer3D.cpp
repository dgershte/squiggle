#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
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
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace away3d{
namespace containers{

Void ObjectContainer3D_obj::__construct()
{
HX_STACK_PUSH("ObjectContainer3D::new","away3d/containers/ObjectContainer3D.hx",499);
{
	HX_STACK_LINE(500)
	this->_sceneTransform = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(501)
	this->_sceneTransformDirty = true;
	HX_STACK_LINE(502)
	this->_children = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(503)
	this->_mouseChildren = true;
	HX_STACK_LINE(504)
	this->_inverseSceneTransform = ::flash::geom::Matrix3D_obj::__new(null());
	HX_STACK_LINE(505)
	this->_inverseSceneTransformDirty = true;
	HX_STACK_LINE(506)
	this->_scenePosition = ::flash::geom::Vector3D_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(507)
	this->_scenePositionDirty = true;
	HX_STACK_LINE(508)
	this->_explicitVisibility = true;
	HX_STACK_LINE(509)
	this->_implicitVisibility = true;
	HX_STACK_LINE(510)
	this->_ignoreTransform = false;
	HX_STACK_LINE(511)
	super::__construct();
}
;
	return null();
}

ObjectContainer3D_obj::~ObjectContainer3D_obj() { }

Dynamic ObjectContainer3D_obj::__CreateEmpty() { return  new ObjectContainer3D_obj; }
hx::ObjectPtr< ObjectContainer3D_obj > ObjectContainer3D_obj::__new()
{  hx::ObjectPtr< ObjectContainer3D_obj > result = new ObjectContainer3D_obj();
	result->__construct();
	return result;}

Dynamic ObjectContainer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectContainer3D_obj > result = new ObjectContainer3D_obj();
	result->__construct();
	return result;}

hx::Object *ObjectContainer3D_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

Void ObjectContainer3D_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_PUSH("ObjectContainer3D::removeEventListener","away3d/containers/ObjectContainer3D.hx",691);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
{
		HX_STACK_LINE(692)
		this->super::removeEventListener(type,listener,useCapture);
		HX_STACK_LINE(693)
		if ((this->hasEventListener(type))){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(694)
		::String _switch_1 = (type);
		if (  ( _switch_1==::away3d::events::Object3DEvent_obj::SCENETRANSFORM_CHANGED)){
			HX_STACK_LINE(695)
			this->_listenToSceneTransformChanged = false;
		}
		else if (  ( _switch_1==::away3d::events::Object3DEvent_obj::SCENE_CHANGED)){
			HX_STACK_LINE(697)
			this->_listenToSceneChanged = false;
		}
	}
return null();
}


Void ObjectContainer3D_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("ObjectContainer3D::addEventListener","away3d/containers/ObjectContainer3D.hx",681);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(682)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(683)
		::String _switch_2 = (type);
		if (  ( _switch_2==::away3d::events::Object3DEvent_obj::SCENETRANSFORM_CHANGED)){
			HX_STACK_LINE(684)
			this->_listenToSceneTransformChanged = true;
		}
		else if (  ( _switch_2==::away3d::events::Object3DEvent_obj::SCENE_CHANGED)){
			HX_STACK_LINE(686)
			this->_listenToSceneChanged = true;
		}
	}
return null();
}


Void ObjectContainer3D_obj::updateImplicitVisibility( ){
{
		HX_STACK_PUSH("ObjectContainer3D::updateImplicitVisibility","away3d/containers/ObjectContainer3D.hx",671);
		HX_STACK_THIS(this);
		HX_STACK_LINE(672)
		int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(673)
		this->_implicitVisibility = (bool(this->_parent->_explicitVisibility) && bool(this->_parent->_implicitVisibility));
		HX_STACK_LINE(674)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(675)
		while(((i < len))){
			HX_STACK_LINE(676)
			this->_children->__get(i).StaticCast< ::away3d::containers::ObjectContainer3D >()->updateImplicitVisibility();
			HX_STACK_LINE(677)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateImplicitVisibility,(void))

bool ObjectContainer3D_obj::dispatchEvent( ::flash::events::Event event){
	HX_STACK_PUSH("ObjectContainer3D::dispatchEvent","away3d/containers/ObjectContainer3D.hx",661);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(663)
	bool ret = this->super::dispatchEvent(event);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(664)
	if ((event->get_bubbles())){
		HX_STACK_LINE(664)
		if (((this->_parent != null()))){
			HX_STACK_LINE(665)
			this->_parent->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(666)
			if (((this->_scene != null()))){
				HX_STACK_LINE(666)
				this->_scene->dispatchEvent(event);
			}
		}
	}
	HX_STACK_LINE(668)
	return ret;
}


Void ObjectContainer3D_obj::rotate( ::flash::geom::Vector3D axis,Float angle){
{
		HX_STACK_PUSH("ObjectContainer3D::rotate","away3d/containers/ObjectContainer3D.hx",652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(653)
		this->super::rotate(axis,angle);
		HX_STACK_LINE(654)
		this->notifySceneTransformChange();
	}
return null();
}


::away3d::core::base::Object3D ObjectContainer3D_obj::clone( ){
	HX_STACK_PUSH("ObjectContainer3D::clone","away3d/containers/ObjectContainer3D.hx",636);
	HX_STACK_THIS(this);
	HX_STACK_LINE(637)
	::away3d::containers::ObjectContainer3D clone = ::away3d::containers::ObjectContainer3D_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(638)
	clone->set_pivotPoint(this->get_pivotPoint());
	HX_STACK_LINE(639)
	clone->set_transform(this->get_transform());
	HX_STACK_LINE(640)
	clone->set_partition(this->get_partition());
	HX_STACK_LINE(641)
	clone->set_name(this->get_name());
	HX_STACK_LINE(642)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(643)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(644)
	while(((i < len))){
		HX_STACK_LINE(645)
		clone->addChild(hx::TCast< away3d::containers::ObjectContainer3D >::cast(this->_children->__get(i).StaticCast< ::away3d::containers::ObjectContainer3D >()->clone()));
		HX_STACK_LINE(646)
		++(i);
	}
	HX_STACK_LINE(649)
	return clone;
}


Void ObjectContainer3D_obj::disposeWithChildren( ){
{
		HX_STACK_PUSH("ObjectContainer3D::disposeWithChildren","away3d/containers/ObjectContainer3D.hx",625);
		HX_STACK_THIS(this);
		HX_STACK_LINE(626)
		this->dispose();
		HX_STACK_LINE(627)
		while(((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(627)
			this->getChildAt((int)0)->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,disposeWithChildren,(void))

Void ObjectContainer3D_obj::dispose( ){
{
		HX_STACK_PUSH("ObjectContainer3D::dispose","away3d/containers/ObjectContainer3D.hx",617);
		HX_STACK_THIS(this);
		HX_STACK_LINE(617)
		if (((this->get_parent() != null()))){
			HX_STACK_LINE(618)
			this->get_parent()->removeChild(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


Void ObjectContainer3D_obj::translateLocal( ::flash::geom::Vector3D axis,Float distance){
{
		HX_STACK_PUSH("ObjectContainer3D::translateLocal","away3d/containers/ObjectContainer3D.hx",608);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(distance,"distance");
		HX_STACK_LINE(609)
		this->super::translateLocal(axis,distance);
		HX_STACK_LINE(610)
		this->notifySceneTransformChange();
	}
return null();
}


Void ObjectContainer3D_obj::lookAt( ::flash::geom::Vector3D target,::flash::geom::Vector3D upAxis){
{
		HX_STACK_PUSH("ObjectContainer3D::lookAt","away3d/containers/ObjectContainer3D.hx",603);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(upAxis,"upAxis");
		HX_STACK_LINE(604)
		this->super::lookAt(target,upAxis);
		HX_STACK_LINE(605)
		this->notifySceneTransformChange();
	}
return null();
}


int ObjectContainer3D_obj::get_numChildren( ){
	HX_STACK_PUSH("ObjectContainer3D::get_numChildren","away3d/containers/ObjectContainer3D.hx",595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	return this->_children->__Field(HX_CSTRING("length"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_numChildren,return )

::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::getChildAt( int index){
	HX_STACK_PUSH("ObjectContainer3D::getChildAt","away3d/containers/ObjectContainer3D.hx",587);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(587)
	return this->_children->__get(index).StaticCast< ::away3d::containers::ObjectContainer3D >();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,getChildAt,return )

Void ObjectContainer3D_obj::removeChildInternal( int childIndex,::away3d::containers::ObjectContainer3D child){
{
		HX_STACK_PUSH("ObjectContainer3D::removeChildInternal","away3d/containers/ObjectContainer3D.hx",573);
		HX_STACK_THIS(this);
		HX_STACK_ARG(childIndex,"childIndex");
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(575)
		::flash::_Vector::Vector_Impl__obj::splice(this->_children,childIndex,(int)1);
		HX_STACK_LINE(577)
		child->setParent(null());
		HX_STACK_LINE(578)
		if (((child->_explicitPartition == null()))){
			HX_STACK_LINE(578)
			child->set_implicitPartition(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectContainer3D_obj,removeChildInternal,(void))

Void ObjectContainer3D_obj::removeChildAt( int index){
{
		HX_STACK_PUSH("ObjectContainer3D::removeChildAt","away3d/containers/ObjectContainer3D.hx",568);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(569)
		::away3d::containers::ObjectContainer3D child = this->_children->__get(index).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(570)
		this->removeChildInternal(index,child);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,removeChildAt,(void))

Void ObjectContainer3D_obj::removeChild( ::away3d::containers::ObjectContainer3D child){
{
		HX_STACK_PUSH("ObjectContainer3D::removeChild","away3d/containers/ObjectContainer3D.hx",555);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(556)
		if (((child == null()))){
			HX_STACK_LINE(556)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Parameter child cannot be null"),null()));
		}
		HX_STACK_LINE(557)
		int childIndex = ::flash::_Vector::Vector_Impl__obj::indexOf(this->_children,child,null());		HX_STACK_VAR(childIndex,"childIndex");
		HX_STACK_LINE(558)
		if (((childIndex == (int)-1))){
			HX_STACK_LINE(558)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Parameter is not a child of the caller"),null()));
		}
		HX_STACK_LINE(559)
		this->removeChildInternal(childIndex,child);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,removeChild,(void))

Void ObjectContainer3D_obj::addChildren( Array< ::Dynamic > childarray){
{
		HX_STACK_PUSH("ObjectContainer3D::addChildren","away3d/containers/ObjectContainer3D.hx",544);
		HX_STACK_THIS(this);
		HX_STACK_ARG(childarray,"childarray");
		HX_STACK_LINE(545)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(545)
		while(((_g < childarray->length))){
			HX_STACK_LINE(545)
			::away3d::containers::ObjectContainer3D child = childarray->__get(_g).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(545)
			++(_g);
			HX_STACK_LINE(545)
			this->addChild(child);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,addChildren,(void))

::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::addChild( ::away3d::containers::ObjectContainer3D child){
	HX_STACK_PUSH("ObjectContainer3D::addChild","away3d/containers/ObjectContainer3D.hx",525);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(526)
	if (((child == null()))){
		HX_STACK_LINE(526)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Parameter child cannot be null."),null()));
	}
	HX_STACK_LINE(527)
	if (((child->_parent != null()))){
		HX_STACK_LINE(527)
		child->_parent->removeChild(child);
	}
	HX_STACK_LINE(528)
	if (((child->_explicitPartition == null()))){
		HX_STACK_LINE(528)
		child->set_implicitPartition(this->_implicitPartition);
	}
	HX_STACK_LINE(529)
	child->setParent(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(530)
	child->set_scene(this->_scene);
	HX_STACK_LINE(531)
	child->notifySceneTransformChange();
	HX_STACK_LINE(532)
	child->updateMouseChildren();
	HX_STACK_LINE(533)
	child->updateImplicitVisibility();
	HX_STACK_LINE(534)
	this->_children->__Field(HX_CSTRING("push"),true)(child);
	HX_STACK_LINE(535)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,addChild,return )

bool ObjectContainer3D_obj::contains( ::away3d::containers::ObjectContainer3D child){
	HX_STACK_PUSH("ObjectContainer3D::contains","away3d/containers/ObjectContainer3D.hx",514);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(514)
	return (::flash::_Vector::Vector_Impl__obj::indexOf(this->_children,child,null()) >= (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,contains,return )

::away3d::containers::ObjectContainer3D ObjectContainer3D_obj::get_parent( ){
	HX_STACK_PUSH("ObjectContainer3D::get_parent","away3d/containers/ObjectContainer3D.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_LINE(491)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_parent,return )

::flash::geom::Matrix3D ObjectContainer3D_obj::get_inverseSceneTransform( ){
	HX_STACK_PUSH("ObjectContainer3D::get_inverseSceneTransform","away3d/containers/ObjectContainer3D.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(479)
	if ((this->_inverseSceneTransformDirty)){
		HX_STACK_LINE(480)
		this->_inverseSceneTransform->copyFrom(this->get_sceneTransform());
		HX_STACK_LINE(481)
		this->_inverseSceneTransform->invert();
		HX_STACK_LINE(482)
		this->_inverseSceneTransformDirty = false;
	}
	HX_STACK_LINE(484)
	return this->_inverseSceneTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_inverseSceneTransform,return )

::away3d::containers::Scene3D ObjectContainer3D_obj::set_scene( ::away3d::containers::Scene3D value){
	HX_STACK_PUSH("ObjectContainer3D::set_scene","away3d/containers/ObjectContainer3D.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(461)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(462)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(463)
	while(((i < len))){
		HX_STACK_LINE(463)
		this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >()->set_scene(value);
	}
	HX_STACK_LINE(464)
	if (((this->_scene == value))){
		HX_STACK_LINE(464)
		return value;
	}
	HX_STACK_LINE(465)
	if (((value == null()))){
		HX_STACK_LINE(465)
		this->_oldScene = this->_scene;
	}
	HX_STACK_LINE(466)
	if (((bool((bool((this->_explicitPartition != null())) && bool((this->_oldScene != null())))) && bool((this->_oldScene != this->_scene))))){
		HX_STACK_LINE(466)
		this->set_partition(null());
	}
	HX_STACK_LINE(467)
	if (((value != null()))){
		HX_STACK_LINE(467)
		this->_oldScene = null();
	}
	HX_STACK_LINE(468)
	this->_scene = value;
	HX_STACK_LINE(469)
	if (((this->_scene != null()))){
		HX_STACK_LINE(469)
		this->_scene->dispatchEvent(::away3d::events::Scene3DEvent_obj::__new(::away3d::events::Scene3DEvent_obj::ADDED_TO_SCENE,hx::ObjectPtr<OBJ_>(this)));
	}
	else{
		HX_STACK_LINE(470)
		if (((this->_oldScene != null()))){
			HX_STACK_LINE(470)
			this->_oldScene->dispatchEvent(::away3d::events::Scene3DEvent_obj::__new(::away3d::events::Scene3DEvent_obj::REMOVED_FROM_SCENE,hx::ObjectPtr<OBJ_>(this)));
		}
	}
	HX_STACK_LINE(471)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_scene,return )

::away3d::containers::Scene3D ObjectContainer3D_obj::get_scene( ){
	HX_STACK_PUSH("ObjectContainer3D::get_scene","away3d/containers/ObjectContainer3D.hx",456);
	HX_STACK_THIS(this);
	HX_STACK_LINE(456)
	return this->_scene;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_scene,return )

::flash::geom::Matrix3D ObjectContainer3D_obj::get_sceneTransform( ){
	HX_STACK_PUSH("ObjectContainer3D::get_sceneTransform","away3d/containers/ObjectContainer3D.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_LINE(448)
	if ((this->_sceneTransformDirty)){
		HX_STACK_LINE(448)
		this->updateSceneTransform();
	}
	HX_STACK_LINE(449)
	return this->_sceneTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_sceneTransform,return )

::away3d::core::partition::Partition3D ObjectContainer3D_obj::set_partition( ::away3d::core::partition::Partition3D value){
	HX_STACK_PUSH("ObjectContainer3D::set_partition","away3d/containers/ObjectContainer3D.hx",437);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(438)
	this->_explicitPartition = value;
	HX_STACK_LINE(439)
	this->set_implicitPartition((  (((value != null()))) ? ::away3d::core::partition::Partition3D(value) : ::away3d::core::partition::Partition3D((  (((this->_parent != null()))) ? ::away3d::core::partition::Partition3D(this->_parent->get_implicitPartition()) : ::away3d::core::partition::Partition3D(null()) )) ));
	HX_STACK_LINE(440)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_partition,return )

::away3d::core::partition::Partition3D ObjectContainer3D_obj::get_partition( ){
	HX_STACK_PUSH("ObjectContainer3D::get_partition","away3d/containers/ObjectContainer3D.hx",433);
	HX_STACK_THIS(this);
	HX_STACK_LINE(433)
	return this->_explicitPartition;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_partition,return )

Float ObjectContainer3D_obj::get_maxZ( ){
	HX_STACK_PUSH("ObjectContainer3D::get_maxZ","away3d/containers/ObjectContainer3D.hx",414);
	HX_STACK_THIS(this);
	HX_STACK_LINE(415)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(416)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(417)
	Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(418)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(419)
	while(((i < len))){
		HX_STACK_LINE(420)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(421)
		m = (child->get_maxZ() + child->get_z());
		HX_STACK_LINE(422)
		if (((m > max))){
			HX_STACK_LINE(422)
			max = m;
		}
	}
	HX_STACK_LINE(425)
	return max;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxZ,return )

Float ObjectContainer3D_obj::get_maxY( ){
	HX_STACK_PUSH("ObjectContainer3D::get_maxY","away3d/containers/ObjectContainer3D.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_LINE(397)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(398)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(399)
	Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(400)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(401)
	while(((i < len))){
		HX_STACK_LINE(402)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(403)
		m = (child->get_maxY() + child->get_y());
		HX_STACK_LINE(404)
		if (((m > max))){
			HX_STACK_LINE(404)
			max = m;
		}
	}
	HX_STACK_LINE(407)
	return max;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxY,return )

Float ObjectContainer3D_obj::get_maxX( ){
	HX_STACK_PUSH("ObjectContainer3D::get_maxX","away3d/containers/ObjectContainer3D.hx",377);
	HX_STACK_THIS(this);
	HX_STACK_LINE(379)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(380)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(381)
	Float max = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(382)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(383)
	while(((i < len))){
		HX_STACK_LINE(384)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(385)
		m = (child->get_maxX() + child->get_x());
		HX_STACK_LINE(386)
		if (((m > max))){
			HX_STACK_LINE(386)
			max = m;
		}
	}
	HX_STACK_LINE(389)
	return max;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_maxX,return )

Float ObjectContainer3D_obj::get_minZ( ){
	HX_STACK_PUSH("ObjectContainer3D::get_minZ","away3d/containers/ObjectContainer3D.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_LINE(360)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(361)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(362)
	Float min = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(363)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(364)
	while(((i < len))){
		HX_STACK_LINE(365)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(366)
		m = (child->get_minZ() + child->get_z());
		HX_STACK_LINE(367)
		if (((m < min))){
			HX_STACK_LINE(367)
			min = m;
		}
	}
	HX_STACK_LINE(370)
	return min;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minZ,return )

Float ObjectContainer3D_obj::get_minY( ){
	HX_STACK_PUSH("ObjectContainer3D::get_minY","away3d/containers/ObjectContainer3D.hx",341);
	HX_STACK_THIS(this);
	HX_STACK_LINE(342)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(343)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(344)
	Float min = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(345)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(346)
	while(((i < len))){
		HX_STACK_LINE(347)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(348)
		m = (child->get_minY() + child->get_y());
		HX_STACK_LINE(349)
		if (((m < min))){
			HX_STACK_LINE(349)
			min = m;
		}
	}
	HX_STACK_LINE(352)
	return min;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minY,return )

Float ObjectContainer3D_obj::get_minX( ){
	HX_STACK_PUSH("ObjectContainer3D::get_minX","away3d/containers/ObjectContainer3D.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(324)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(325)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(326)
	Float min = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(327)
	Float m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(328)
	while(((i < len))){
		HX_STACK_LINE(329)
		::away3d::containers::ObjectContainer3D child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(330)
		m = (child->get_minX() + child->get_x());
		HX_STACK_LINE(331)
		if (((m < min))){
			HX_STACK_LINE(331)
			min = m;
		}
	}
	HX_STACK_LINE(334)
	return min;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_minX,return )

::flash::geom::Vector3D ObjectContainer3D_obj::get_scenePosition( ){
	HX_STACK_PUSH("ObjectContainer3D::get_scenePosition","away3d/containers/ObjectContainer3D.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_LINE(312)
	if ((this->_scenePositionDirty)){
		HX_STACK_LINE(313)
		this->get_sceneTransform()->copyColumnTo((int)3,this->_scenePosition);
		HX_STACK_LINE(314)
		this->_scenePositionDirty = false;
	}
	HX_STACK_LINE(316)
	return this->_scenePosition;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_scenePosition,return )

::String ObjectContainer3D_obj::get_assetType( ){
	HX_STACK_PUSH("ObjectContainer3D::get_assetType","away3d/containers/ObjectContainer3D.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return ::away3d::library::assets::AssetType_obj::CONTAINER;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_assetType,return )

bool ObjectContainer3D_obj::set_visible( bool value){
	HX_STACK_PUSH("ObjectContainer3D::set_visible","away3d/containers/ObjectContainer3D.hx",292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(293)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(294)
	this->_explicitVisibility = value;
	HX_STACK_LINE(295)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(296)
	while(((i < len))){
		HX_STACK_LINE(297)
		this->_children->__get(i).StaticCast< ::away3d::containers::ObjectContainer3D >()->updateImplicitVisibility();
		HX_STACK_LINE(298)
		++(i);
	}
	HX_STACK_LINE(300)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_visible,return )

bool ObjectContainer3D_obj::get_visible( ){
	HX_STACK_PUSH("ObjectContainer3D::get_visible","away3d/containers/ObjectContainer3D.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_LINE(288)
	return this->_explicitVisibility;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_visible,return )

bool ObjectContainer3D_obj::set_mouseChildren( bool value){
	HX_STACK_PUSH("ObjectContainer3D::set_mouseChildren","away3d/containers/ObjectContainer3D.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(279)
	this->_mouseChildren = value;
	HX_STACK_LINE(280)
	this->updateMouseChildren();
	HX_STACK_LINE(281)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_mouseChildren,return )

bool ObjectContainer3D_obj::get_mouseChildren( ){
	HX_STACK_PUSH("ObjectContainer3D::get_mouseChildren","away3d/containers/ObjectContainer3D.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(274)
	return this->_mouseChildren;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_mouseChildren,return )

Void ObjectContainer3D_obj::updateSceneTransform( ){
{
		HX_STACK_PUSH("ObjectContainer3D::updateSceneTransform","away3d/containers/ObjectContainer3D.hx",260);
		HX_STACK_THIS(this);
		HX_STACK_LINE(261)
		if (((bool((this->_parent != null())) && bool(!(this->_parent->_isRoot))))){
			HX_STACK_LINE(262)
			this->_sceneTransform->copyFrom(this->_parent->get_sceneTransform());
			HX_STACK_LINE(263)
			this->_sceneTransform->prepend(this->get_transform());
		}
		else{
			HX_STACK_LINE(266)
			this->_sceneTransform->copyFrom(this->get_transform());
		}
		HX_STACK_LINE(267)
		this->_sceneTransformDirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateSceneTransform,(void))

Void ObjectContainer3D_obj::invalidateSceneTransform( ){
{
		HX_STACK_PUSH("ObjectContainer3D::invalidateSceneTransform","away3d/containers/ObjectContainer3D.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		this->_sceneTransformDirty = !(this->_ignoreTransform);
		HX_STACK_LINE(252)
		this->_inverseSceneTransformDirty = !(this->_ignoreTransform);
		HX_STACK_LINE(253)
		this->_scenePositionDirty = !(this->_ignoreTransform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,invalidateSceneTransform,(void))

Void ObjectContainer3D_obj::invalidateTransform( ){
{
		HX_STACK_PUSH("ObjectContainer3D::invalidateTransform","away3d/containers/ObjectContainer3D.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_LINE(242)
		this->super::invalidateTransform();
		HX_STACK_LINE(243)
		this->notifySceneTransformChange();
	}
return null();
}


bool ObjectContainer3D_obj::set_mouseEnabled( bool value){
	HX_STACK_PUSH("ObjectContainer3D::set_mouseEnabled","away3d/containers/ObjectContainer3D.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(232)
	this->_mouseEnabled = value;
	HX_STACK_LINE(233)
	this->updateMouseChildren();
	HX_STACK_LINE(234)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_mouseEnabled,return )

bool ObjectContainer3D_obj::get_mouseEnabled( ){
	HX_STACK_PUSH("ObjectContainer3D::get_mouseEnabled","away3d/containers/ObjectContainer3D.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return this->_mouseEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_mouseEnabled,return )

Void ObjectContainer3D_obj::updateMouseChildren( ){
{
		HX_STACK_PUSH("ObjectContainer3D::updateMouseChildren","away3d/containers/ObjectContainer3D.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		if (((bool((this->_parent != null())) && bool(!(this->_parent->_isRoot))))){
			HX_STACK_LINE(208)
			this->_ancestorsAllowMouseEnabled = (bool(this->get_parent()->_ancestorsAllowMouseEnabled) && bool(this->_parent->get_mouseChildren()));
		}
		else{
			HX_STACK_LINE(213)
			this->_ancestorsAllowMouseEnabled = this->get_mouseChildren();
		}
		HX_STACK_LINE(215)
		int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(216)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(217)
		while(((i < len))){
			HX_STACK_LINE(218)
			this->_children->__get(i).StaticCast< ::away3d::containers::ObjectContainer3D >()->updateMouseChildren();
			HX_STACK_LINE(219)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,updateMouseChildren,(void))

Void ObjectContainer3D_obj::notifySceneChange( ){
{
		HX_STACK_PUSH("ObjectContainer3D::notifySceneChange","away3d/containers/ObjectContainer3D.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		this->notifySceneTransformChange();
		HX_STACK_LINE(197)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(198)
		int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(200)
		while(((i < len))){
			HX_STACK_LINE(200)
			this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >()->notifySceneChange();
		}
		HX_STACK_LINE(201)
		if ((this->_listenToSceneChanged)){
			HX_STACK_LINE(202)
			if (((this->_scenechanged == null()))){
				HX_STACK_LINE(202)
				this->_scenechanged = ::away3d::events::Object3DEvent_obj::__new(::away3d::events::Object3DEvent_obj::SCENE_CHANGED,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(203)
			this->dispatchEvent(this->_scenechanged);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,notifySceneChange,(void))

Void ObjectContainer3D_obj::notifySceneTransformChange( ){
{
		HX_STACK_PUSH("ObjectContainer3D::notifySceneTransformChange","away3d/containers/ObjectContainer3D.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(182)
		if (((bool(this->_sceneTransformDirty) || bool(this->_ignoreTransform)))){
			HX_STACK_LINE(182)
			return null();
		}
		HX_STACK_LINE(183)
		this->invalidateSceneTransform();
		HX_STACK_LINE(184)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(185)
		int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(187)
		while(((i < len))){
			HX_STACK_LINE(187)
			this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >()->notifySceneTransformChange();
		}
		HX_STACK_LINE(189)
		if ((this->_listenToSceneTransformChanged)){
			HX_STACK_LINE(190)
			if (((this->_sceneTransformChanged == null()))){
				HX_STACK_LINE(190)
				this->_sceneTransformChanged = ::away3d::events::Object3DEvent_obj::__new(::away3d::events::Object3DEvent_obj::SCENETRANSFORM_CHANGED,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(191)
			this->dispatchEvent(this->_sceneTransformChanged);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,notifySceneTransformChange,(void))

Void ObjectContainer3D_obj::setParent( ::away3d::containers::ObjectContainer3D value){
{
		HX_STACK_PUSH("ObjectContainer3D::setParent","away3d/containers/ObjectContainer3D.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(171)
		this->_parent = value;
		HX_STACK_LINE(172)
		this->updateMouseChildren();
		HX_STACK_LINE(173)
		if (((value == null()))){
			HX_STACK_LINE(174)
			this->set_scene(null());
			HX_STACK_LINE(175)
			return null();
		}
		HX_STACK_LINE(177)
		this->notifySceneTransformChange();
		HX_STACK_LINE(178)
		this->notifySceneChange();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,setParent,(void))

bool ObjectContainer3D_obj::get_isVisible( ){
	HX_STACK_PUSH("ObjectContainer3D::get_isVisible","away3d/containers/ObjectContainer3D.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return (bool(this->_implicitVisibility) && bool(this->_explicitVisibility));
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_isVisible,return )

::away3d::core::partition::Partition3D ObjectContainer3D_obj::set_implicitPartition( ::away3d::core::partition::Partition3D value){
	HX_STACK_PUSH("ObjectContainer3D::set_implicitPartition","away3d/containers/ObjectContainer3D.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(148)
	if (((value == this->_implicitPartition))){
		HX_STACK_LINE(148)
		return value;
	}
	HX_STACK_LINE(149)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(150)
	int len = this->_children->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(151)
	::away3d::containers::ObjectContainer3D child;		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(152)
	this->_implicitPartition = value;
	HX_STACK_LINE(153)
	while(((i < len))){
		HX_STACK_LINE(154)
		child = this->_children->__get((i)++).StaticCast< ::away3d::containers::ObjectContainer3D >();
		HX_STACK_LINE(156)
		if (((child->_explicitPartition == null()))){
			HX_STACK_LINE(156)
			child->set_implicitPartition(value);
		}
	}
	HX_STACK_LINE(159)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_implicitPartition,return )

::away3d::core::partition::Partition3D ObjectContainer3D_obj::get_implicitPartition( ){
	HX_STACK_PUSH("ObjectContainer3D::get_implicitPartition","away3d/containers/ObjectContainer3D.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->_implicitPartition;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_implicitPartition,return )

bool ObjectContainer3D_obj::set_ignoreTransform( bool value){
	HX_STACK_PUSH("ObjectContainer3D::set_ignoreTransform","away3d/containers/ObjectContainer3D.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(125)
	this->_ignoreTransform = value;
	HX_STACK_LINE(126)
	this->_sceneTransformDirty = !(value);
	HX_STACK_LINE(127)
	this->_inverseSceneTransformDirty = !(value);
	HX_STACK_LINE(128)
	this->_scenePositionDirty = !(value);
	HX_STACK_LINE(129)
	if ((!(value))){
		HX_STACK_LINE(130)
		this->_sceneTransform->identity();
		HX_STACK_LINE(131)
		this->_scenePosition->x = (int)0;
		HX_STACK_LINE(132)
		this->_scenePosition->y = (int)0;
		HX_STACK_LINE(133)
		this->_scenePosition->z = (int)0;
	}
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectContainer3D_obj,set_ignoreTransform,return )

bool ObjectContainer3D_obj::get_ignoreTransform( ){
	HX_STACK_PUSH("ObjectContainer3D::get_ignoreTransform","away3d/containers/ObjectContainer3D.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(120)
	return this->_ignoreTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectContainer3D_obj,get_ignoreTransform,return )


ObjectContainer3D_obj::ObjectContainer3D_obj()
{
}

void ObjectContainer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectContainer3D);
	HX_MARK_MEMBER_NAME(_ignoreTransform,"_ignoreTransform");
	HX_MARK_MEMBER_NAME(_listenToSceneChanged,"_listenToSceneChanged");
	HX_MARK_MEMBER_NAME(_listenToSceneTransformChanged,"_listenToSceneTransformChanged");
	HX_MARK_MEMBER_NAME(_implicitVisibility,"_implicitVisibility");
	HX_MARK_MEMBER_NAME(_explicitVisibility,"_explicitVisibility");
	HX_MARK_MEMBER_NAME(_scenePositionDirty,"_scenePositionDirty");
	HX_MARK_MEMBER_NAME(_scenePosition,"_scenePosition");
	HX_MARK_MEMBER_NAME(_inverseSceneTransformDirty,"_inverseSceneTransformDirty");
	HX_MARK_MEMBER_NAME(_inverseSceneTransform,"_inverseSceneTransform");
	HX_MARK_MEMBER_NAME(_oldScene,"_oldScene");
	HX_MARK_MEMBER_NAME(_mouseChildren,"_mouseChildren");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_scenechanged,"_scenechanged");
	HX_MARK_MEMBER_NAME(_sceneTransformChanged,"_sceneTransformChanged");
	HX_MARK_MEMBER_NAME(_mouseEnabled,"_mouseEnabled");
	HX_MARK_MEMBER_NAME(_implicitPartition,"_implicitPartition");
	HX_MARK_MEMBER_NAME(_explicitPartition,"_explicitPartition");
	HX_MARK_MEMBER_NAME(_sceneTransformDirty,"_sceneTransformDirty");
	HX_MARK_MEMBER_NAME(_sceneTransform,"_sceneTransform");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_isRoot,"_isRoot");
	HX_MARK_MEMBER_NAME(_ancestorsAllowMouseEnabled,"_ancestorsAllowMouseEnabled");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ObjectContainer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ignoreTransform,"_ignoreTransform");
	HX_VISIT_MEMBER_NAME(_listenToSceneChanged,"_listenToSceneChanged");
	HX_VISIT_MEMBER_NAME(_listenToSceneTransformChanged,"_listenToSceneTransformChanged");
	HX_VISIT_MEMBER_NAME(_implicitVisibility,"_implicitVisibility");
	HX_VISIT_MEMBER_NAME(_explicitVisibility,"_explicitVisibility");
	HX_VISIT_MEMBER_NAME(_scenePositionDirty,"_scenePositionDirty");
	HX_VISIT_MEMBER_NAME(_scenePosition,"_scenePosition");
	HX_VISIT_MEMBER_NAME(_inverseSceneTransformDirty,"_inverseSceneTransformDirty");
	HX_VISIT_MEMBER_NAME(_inverseSceneTransform,"_inverseSceneTransform");
	HX_VISIT_MEMBER_NAME(_oldScene,"_oldScene");
	HX_VISIT_MEMBER_NAME(_mouseChildren,"_mouseChildren");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_scenechanged,"_scenechanged");
	HX_VISIT_MEMBER_NAME(_sceneTransformChanged,"_sceneTransformChanged");
	HX_VISIT_MEMBER_NAME(_mouseEnabled,"_mouseEnabled");
	HX_VISIT_MEMBER_NAME(_implicitPartition,"_implicitPartition");
	HX_VISIT_MEMBER_NAME(_explicitPartition,"_explicitPartition");
	HX_VISIT_MEMBER_NAME(_sceneTransformDirty,"_sceneTransformDirty");
	HX_VISIT_MEMBER_NAME(_sceneTransform,"_sceneTransform");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_isRoot,"_isRoot");
	HX_VISIT_MEMBER_NAME(_ancestorsAllowMouseEnabled,"_ancestorsAllowMouseEnabled");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ObjectContainer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maxZ") ) { return get_maxZ(); }
		if (HX_FIELD_EQ(inName,"maxY") ) { return get_maxY(); }
		if (HX_FIELD_EQ(inName,"maxX") ) { return get_maxX(); }
		if (HX_FIELD_EQ(inName,"minZ") ) { return get_minZ(); }
		if (HX_FIELD_EQ(inName,"minY") ) { return get_minY(); }
		if (HX_FIELD_EQ(inName,"minX") ) { return get_minX(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"lookAt") ) { return lookAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"parent") ) { return get_parent(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_isRoot") ) { return _isRoot; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxZ") ) { return get_maxZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxY") ) { return get_maxY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxX") ) { return get_maxX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minZ") ) { return get_minZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minY") ) { return get_minY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minX") ) { return get_minX_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"_oldScene") ) { return _oldScene; }
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"partition") ) { return get_partition(); }
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		if (HX_FIELD_EQ(inName,"isVisible") ) { return get_isVisible(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildren") ) { return addChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return get_numChildren(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return get_mouseEnabled(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_partition") ) { return set_partition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_partition") ) { return get_partition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isVisible") ) { return get_isVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"_scenechanged") ) { return _scenechanged; }
		if (HX_FIELD_EQ(inName,"_mouseEnabled") ) { return _mouseEnabled; }
		if (HX_FIELD_EQ(inName,"scenePosition") ) { return get_scenePosition(); }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return get_mouseChildren(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"translateLocal") ) { return translateLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"_scenePosition") ) { return _scenePosition; }
		if (HX_FIELD_EQ(inName,"_mouseChildren") ) { return _mouseChildren; }
		if (HX_FIELD_EQ(inName,"sceneTransform") ) { return get_sceneTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"_sceneTransform") ) { return _sceneTransform; }
		if (HX_FIELD_EQ(inName,"ignoreTransform") ) { return get_ignoreTransform(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return set_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"_ignoreTransform") ) { return _ignoreTransform; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_scenePosition") ) { return get_scenePosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"notifySceneChange") ) { return notifySceneChange_dyn(); }
		if (HX_FIELD_EQ(inName,"implicitPartition") ) { return get_implicitPartition(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_sceneTransform") ) { return get_sceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_implicitPartition") ) { return _implicitPartition; }
		if (HX_FIELD_EQ(inName,"_explicitPartition") ) { return _explicitPartition; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeWithChildren") ) { return disposeWithChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildInternal") ) { return removeChildInternal_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateTransform") ) { return invalidateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return updateMouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignoreTransform") ) { return set_ignoreTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignoreTransform") ) { return get_ignoreTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_implicitVisibility") ) { return _implicitVisibility; }
		if (HX_FIELD_EQ(inName,"_explicitVisibility") ) { return _explicitVisibility; }
		if (HX_FIELD_EQ(inName,"_scenePositionDirty") ) { return _scenePositionDirty; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateSceneTransform") ) { return updateSceneTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_sceneTransformDirty") ) { return _sceneTransformDirty; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_implicitPartition") ) { return set_implicitPartition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_implicitPartition") ) { return get_implicitPartition_dyn(); }
		if (HX_FIELD_EQ(inName,"_listenToSceneChanged") ) { return _listenToSceneChanged; }
		if (HX_FIELD_EQ(inName,"inverseSceneTransform") ) { return get_inverseSceneTransform(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_inverseSceneTransform") ) { return _inverseSceneTransform; }
		if (HX_FIELD_EQ(inName,"_sceneTransformChanged") ) { return _sceneTransformChanged; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateImplicitVisibility") ) { return updateImplicitVisibility_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidateSceneTransform") ) { return invalidateSceneTransform_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_inverseSceneTransform") ) { return get_inverseSceneTransform_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"notifySceneTransformChange") ) { return notifySceneTransformChange_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_inverseSceneTransformDirty") ) { return _inverseSceneTransformDirty; }
		if (HX_FIELD_EQ(inName,"_ancestorsAllowMouseEnabled") ) { return _ancestorsAllowMouseEnabled; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_listenToSceneTransformChanged") ) { return _listenToSceneTransformChanged; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectContainer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::away3d::containers::Scene3D >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::away3d::containers::ObjectContainer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isRoot") ) { _isRoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_oldScene") ) { _oldScene=inValue.Cast< ::away3d::containers::Scene3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"partition") ) { return set_partition(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return set_mouseEnabled(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scenechanged") ) { _scenechanged=inValue.Cast< ::away3d::events::Object3DEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseEnabled") ) { _mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return set_mouseChildren(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_scenePosition") ) { _scenePosition=inValue.Cast< ::flash::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseChildren") ) { _mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneTransform") ) { _sceneTransform=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreTransform") ) { return set_ignoreTransform(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ignoreTransform") ) { _ignoreTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"implicitPartition") ) { return set_implicitPartition(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_implicitPartition") ) { _implicitPartition=inValue.Cast< ::away3d::core::partition::Partition3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitPartition") ) { _explicitPartition=inValue.Cast< ::away3d::core::partition::Partition3D >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_implicitVisibility") ) { _implicitVisibility=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitVisibility") ) { _explicitVisibility=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scenePositionDirty") ) { _scenePositionDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_sceneTransformDirty") ) { _sceneTransformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_listenToSceneChanged") ) { _listenToSceneChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_inverseSceneTransform") ) { _inverseSceneTransform=inValue.Cast< ::flash::geom::Matrix3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sceneTransformChanged") ) { _sceneTransformChanged=inValue.Cast< ::away3d::events::Object3DEvent >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_inverseSceneTransformDirty") ) { _inverseSceneTransformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ancestorsAllowMouseEnabled") ) { _ancestorsAllowMouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"_listenToSceneTransformChanged") ) { _listenToSceneTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectContainer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ignoreTransform"));
	outFields->push(HX_CSTRING("_listenToSceneChanged"));
	outFields->push(HX_CSTRING("_listenToSceneTransformChanged"));
	outFields->push(HX_CSTRING("_implicitVisibility"));
	outFields->push(HX_CSTRING("_explicitVisibility"));
	outFields->push(HX_CSTRING("_scenePositionDirty"));
	outFields->push(HX_CSTRING("_scenePosition"));
	outFields->push(HX_CSTRING("_inverseSceneTransformDirty"));
	outFields->push(HX_CSTRING("_inverseSceneTransform"));
	outFields->push(HX_CSTRING("_oldScene"));
	outFields->push(HX_CSTRING("_mouseChildren"));
	outFields->push(HX_CSTRING("_children"));
	outFields->push(HX_CSTRING("_scenechanged"));
	outFields->push(HX_CSTRING("_sceneTransformChanged"));
	outFields->push(HX_CSTRING("_mouseEnabled"));
	outFields->push(HX_CSTRING("_implicitPartition"));
	outFields->push(HX_CSTRING("_explicitPartition"));
	outFields->push(HX_CSTRING("_sceneTransformDirty"));
	outFields->push(HX_CSTRING("_sceneTransform"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_scene"));
	outFields->push(HX_CSTRING("_isRoot"));
	outFields->push(HX_CSTRING("_ancestorsAllowMouseEnabled"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("inverseSceneTransform"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("sceneTransform"));
	outFields->push(HX_CSTRING("partition"));
	outFields->push(HX_CSTRING("maxZ"));
	outFields->push(HX_CSTRING("maxY"));
	outFields->push(HX_CSTRING("maxX"));
	outFields->push(HX_CSTRING("minZ"));
	outFields->push(HX_CSTRING("minY"));
	outFields->push(HX_CSTRING("minX"));
	outFields->push(HX_CSTRING("scenePosition"));
	outFields->push(HX_CSTRING("assetType"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("mouseEnabled"));
	outFields->push(HX_CSTRING("isVisible"));
	outFields->push(HX_CSTRING("implicitPartition"));
	outFields->push(HX_CSTRING("ignoreTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("updateImplicitVisibility"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("rotate"),
	HX_CSTRING("clone"),
	HX_CSTRING("disposeWithChildren"),
	HX_CSTRING("dispose"),
	HX_CSTRING("translateLocal"),
	HX_CSTRING("lookAt"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("removeChildInternal"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("addChildren"),
	HX_CSTRING("addChild"),
	HX_CSTRING("contains"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("get_inverseSceneTransform"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("get_sceneTransform"),
	HX_CSTRING("set_partition"),
	HX_CSTRING("get_partition"),
	HX_CSTRING("get_maxZ"),
	HX_CSTRING("get_maxY"),
	HX_CSTRING("get_maxX"),
	HX_CSTRING("get_minZ"),
	HX_CSTRING("get_minY"),
	HX_CSTRING("get_minX"),
	HX_CSTRING("get_scenePosition"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_mouseChildren"),
	HX_CSTRING("get_mouseChildren"),
	HX_CSTRING("updateSceneTransform"),
	HX_CSTRING("invalidateSceneTransform"),
	HX_CSTRING("invalidateTransform"),
	HX_CSTRING("set_mouseEnabled"),
	HX_CSTRING("get_mouseEnabled"),
	HX_CSTRING("updateMouseChildren"),
	HX_CSTRING("notifySceneChange"),
	HX_CSTRING("notifySceneTransformChange"),
	HX_CSTRING("setParent"),
	HX_CSTRING("get_isVisible"),
	HX_CSTRING("set_implicitPartition"),
	HX_CSTRING("get_implicitPartition"),
	HX_CSTRING("set_ignoreTransform"),
	HX_CSTRING("get_ignoreTransform"),
	HX_CSTRING("_ignoreTransform"),
	HX_CSTRING("_listenToSceneChanged"),
	HX_CSTRING("_listenToSceneTransformChanged"),
	HX_CSTRING("_implicitVisibility"),
	HX_CSTRING("_explicitVisibility"),
	HX_CSTRING("_scenePositionDirty"),
	HX_CSTRING("_scenePosition"),
	HX_CSTRING("_inverseSceneTransformDirty"),
	HX_CSTRING("_inverseSceneTransform"),
	HX_CSTRING("_oldScene"),
	HX_CSTRING("_mouseChildren"),
	HX_CSTRING("_children"),
	HX_CSTRING("_scenechanged"),
	HX_CSTRING("_sceneTransformChanged"),
	HX_CSTRING("_mouseEnabled"),
	HX_CSTRING("_implicitPartition"),
	HX_CSTRING("_explicitPartition"),
	HX_CSTRING("_sceneTransformDirty"),
	HX_CSTRING("_sceneTransform"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_isRoot"),
	HX_CSTRING("_ancestorsAllowMouseEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectContainer3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectContainer3D_obj::__mClass,"__mClass");
};

Class ObjectContainer3D_obj::__mClass;

void ObjectContainer3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.containers.ObjectContainer3D"), hx::TCanCast< ObjectContainer3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ObjectContainer3D_obj::__boot()
{
}

} // end namespace away3d
} // end namespace containers
