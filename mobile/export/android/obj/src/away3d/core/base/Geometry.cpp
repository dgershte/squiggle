#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
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
namespace core{
namespace base{

Void Geometry_obj::__construct()
{
HX_STACK_PUSH("Geometry::new","away3d/core/base/Geometry.hx",44);
{
	HX_STACK_LINE(46)
	super::__construct(null());
	HX_STACK_LINE(47)
	this->_subGeometries = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new()
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct();
	return result;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > result = new Geometry_obj();
	result->__construct();
	return result;}

hx::Object *Geometry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

Void Geometry_obj::invalidateBounds( ::away3d::core::base::ISubGeometry subGeom){
{
		HX_STACK_PUSH("Geometry::invalidateBounds","away3d/core/base/Geometry.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subGeom,"subGeom");
		HX_STACK_LINE(174)
		if ((this->hasEventListener(::away3d::events::GeometryEvent_obj::BOUNDS_INVALID))){
			HX_STACK_LINE(175)
			this->dispatchEvent(::away3d::events::GeometryEvent_obj::__new(::away3d::events::GeometryEvent_obj::BOUNDS_INVALID,subGeom));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,invalidateBounds,(void))

Void Geometry_obj::validate( ){
{
		HX_STACK_PUSH("Geometry::validate","away3d/core/base/Geometry.hx",170);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,validate,(void))

Void Geometry_obj::convertToSeparateBuffers( ){
{
		HX_STACK_PUSH("Geometry::convertToSeparateBuffers","away3d/core/base/Geometry.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(149)
		::away3d::core::base::ISubGeometry subGeom;		HX_STACK_VAR(subGeom,"subGeom");
		HX_STACK_LINE(150)
		int numSubGeoms = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numSubGeoms,"numSubGeoms");
		HX_STACK_LINE(151)
		Array< ::Dynamic > _removableCompactSubGeometries = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(_removableCompactSubGeometries,"_removableCompactSubGeometries");
		HX_STACK_LINE(152)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(153)
		while(((i < numSubGeoms))){
			HX_STACK_LINE(154)
			subGeom = this->_subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >();
			HX_STACK_LINE(155)
			if ((::Std_obj::is(subGeom,hx::ClassOf< ::away3d::core::base::SubGeometry >()))){
				HX_STACK_LINE(156)
				++(i);
				HX_STACK_LINE(157)
				continue;
			}
			HX_STACK_LINE(159)
			_removableCompactSubGeometries->__Field(HX_CSTRING("push"),true)(subGeom);
			HX_STACK_LINE(160)
			this->addSubGeometry(subGeom->cloneWithSeperateBuffers());
			HX_STACK_LINE(161)
			++(i);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::Dynamic > &_removableCompactSubGeometries){
				HX_STACK_PUSH("*::closure","away3d/core/base/Geometry.hx",163);
				{
					HX_STACK_LINE(163)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(_removableCompactSubGeometries);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","away3d/core/base/Geometry.hx",163);
						{
							HX_STACK_LINE(163)
							return ::flash::_Vector::Vector_Impl__obj::iterator(_e->__get((int)0).StaticCast< Array< ::Dynamic > >());
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(163)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(163)
		for(::cpp::FastIterator_obj< ::away3d::core::base::ISubGeometry > *__it = ::cpp::CreateFastIterator< ::away3d::core::base::ISubGeometry >((_Function_1_1::Block(_removableCompactSubGeometries))());  __it->hasNext(); ){
			::away3d::core::base::ISubGeometry s = __it->next();
			{
				HX_STACK_LINE(164)
				this->removeSubGeometry(s);
				HX_STACK_LINE(165)
				s->dispose();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,convertToSeparateBuffers,(void))

Void Geometry_obj::scaleUV( hx::Null< Float >  __o_scaleU,hx::Null< Float >  __o_scaleV){
Float scaleU = __o_scaleU.Default(1);
Float scaleV = __o_scaleV.Default(1);
	HX_STACK_PUSH("Geometry::scaleUV","away3d/core/base/Geometry.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleU,"scaleU");
	HX_STACK_ARG(scaleV,"scaleV");
{
		HX_STACK_LINE(135)
		int numSubGeoms = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numSubGeoms,"numSubGeoms");
		HX_STACK_LINE(136)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(137)
		while(((i < numSubGeoms))){
			HX_STACK_LINE(138)
			this->_subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >()->scaleUV(scaleU,scaleV);
			HX_STACK_LINE(139)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,scaleUV,(void))

Void Geometry_obj::dispose( ){
{
		HX_STACK_PUSH("Geometry::dispose","away3d/core/base/Geometry.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		int numSubGeoms = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numSubGeoms,"numSubGeoms");
		HX_STACK_LINE(119)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(120)
		while(((i < numSubGeoms))){
			HX_STACK_LINE(121)
			::away3d::core::base::ISubGeometry subGeom = this->_subGeometries->__get((int)0).StaticCast< ::away3d::core::base::ISubGeometry >();		HX_STACK_VAR(subGeom,"subGeom");
			HX_STACK_LINE(122)
			this->removeSubGeometry(subGeom);
			HX_STACK_LINE(123)
			subGeom->dispose();
			HX_STACK_LINE(124)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,dispose,(void))

Void Geometry_obj::scale( Float scale){
{
		HX_STACK_PUSH("Geometry::scale","away3d/core/base/Geometry.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(105)
		int numSubGeoms = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(numSubGeoms,"numSubGeoms");
		HX_STACK_LINE(106)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(107)
		while(((i < numSubGeoms))){
			HX_STACK_LINE(108)
			this->_subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >()->scale(scale);
			HX_STACK_LINE(109)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,scale,(void))

::away3d::core::base::Geometry Geometry_obj::clone( ){
	HX_STACK_PUSH("Geometry::clone","away3d/core/base/Geometry.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	::away3d::core::base::Geometry clone = ::away3d::core::base::Geometry_obj::__new();		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(90)
	int len = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(91)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(92)
	while(((i < len))){
		HX_STACK_LINE(93)
		clone->addSubGeometry(this->_subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >()->clone());
		HX_STACK_LINE(94)
		++(i);
	}
	HX_STACK_LINE(96)
	return clone;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,clone,return )

Void Geometry_obj::removeSubGeometry( ::away3d::core::base::ISubGeometry subGeometry){
{
		HX_STACK_PUSH("Geometry::removeSubGeometry","away3d/core/base/Geometry.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subGeometry,"subGeometry");
		HX_STACK_LINE(77)
		::flash::_Vector::Vector_Impl__obj::splice(this->_subGeometries,::flash::_Vector::Vector_Impl__obj::indexOf(this->_subGeometries,subGeometry,null()),(int)1);
		HX_STACK_LINE(78)
		subGeometry->set_parentGeometry(null());
		HX_STACK_LINE(79)
		if ((this->hasEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_REMOVED))){
			HX_STACK_LINE(79)
			this->dispatchEvent(::away3d::events::GeometryEvent_obj::__new(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_REMOVED,subGeometry));
		}
		HX_STACK_LINE(80)
		this->invalidateBounds(subGeometry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,removeSubGeometry,(void))

Void Geometry_obj::addSubGeometry( ::away3d::core::base::ISubGeometry subGeometry){
{
		HX_STACK_PUSH("Geometry::addSubGeometry","away3d/core/base/Geometry.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subGeometry,"subGeometry");
		HX_STACK_LINE(65)
		this->_subGeometries->__Field(HX_CSTRING("push"),true)(subGeometry);
		HX_STACK_LINE(66)
		subGeometry->set_parentGeometry(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(67)
		if ((this->hasEventListener(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_ADDED))){
			HX_STACK_LINE(67)
			this->dispatchEvent(::away3d::events::GeometryEvent_obj::__new(::away3d::events::GeometryEvent_obj::SUB_GEOMETRY_ADDED,subGeometry));
		}
		HX_STACK_LINE(68)
		this->invalidateBounds(subGeometry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,addSubGeometry,(void))

Void Geometry_obj::applyTransformation( ::flash::geom::Matrix3D transform){
{
		HX_STACK_PUSH("Geometry::applyTransformation","away3d/core/base/Geometry.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(51)
		int len = this->_subGeometries->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(52)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(53)
		while(((i < len))){
			HX_STACK_LINE(54)
			this->_subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >()->applyTransformation(transform);
			HX_STACK_LINE(55)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,applyTransformation,(void))

Array< ::Dynamic > Geometry_obj::get_subGeometries( ){
	HX_STACK_PUSH("Geometry::get_subGeometries","away3d/core/base/Geometry.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return this->_subGeometries;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_subGeometries,return )

::String Geometry_obj::get_assetType( ){
	HX_STACK_PUSH("Geometry::get_assetType","away3d/core/base/Geometry.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return ::away3d::library::assets::AssetType_obj::GEOMETRY;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_assetType,return )


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(_subGeometries,"_subGeometries");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subGeometries,"_subGeometries");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Geometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return scaleUV_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		if (HX_FIELD_EQ(inName,"subGeometries") ) { return get_subGeometries(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addSubGeometry") ) { return addSubGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"_subGeometries") ) { return _subGeometries; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return invalidateBounds_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeSubGeometry") ) { return removeSubGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_subGeometries") ) { return get_subGeometries_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return applyTransformation_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"convertToSeparateBuffers") ) { return convertToSeparateBuffers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_subGeometries") ) { _subGeometries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_subGeometries"));
	outFields->push(HX_CSTRING("subGeometries"));
	outFields->push(HX_CSTRING("assetType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invalidateBounds"),
	HX_CSTRING("validate"),
	HX_CSTRING("convertToSeparateBuffers"),
	HX_CSTRING("scaleUV"),
	HX_CSTRING("dispose"),
	HX_CSTRING("scale"),
	HX_CSTRING("clone"),
	HX_CSTRING("removeSubGeometry"),
	HX_CSTRING("addSubGeometry"),
	HX_CSTRING("applyTransformation"),
	HX_CSTRING("get_subGeometries"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("_subGeometries"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
};

Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.base.Geometry"), hx::TCanCast< Geometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Geometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace base
