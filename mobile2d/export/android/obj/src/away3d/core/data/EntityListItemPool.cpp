#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#include <away3d/core/data/EntityListItemPool.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
namespace away3d{
namespace core{
namespace data{

Void EntityListItemPool_obj::__construct()
{
HX_STACK_PUSH("EntityListItemPool::new","away3d/core/data/EntityListItemPool.hx",10);
{
	HX_STACK_LINE(11)
	this->_index = (int)0;
	HX_STACK_LINE(12)
	this->_poolSize = (int)0;
	HX_STACK_LINE(13)
	this->_pool = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

EntityListItemPool_obj::~EntityListItemPool_obj() { }

Dynamic EntityListItemPool_obj::__CreateEmpty() { return  new EntityListItemPool_obj; }
hx::ObjectPtr< EntityListItemPool_obj > EntityListItemPool_obj::__new()
{  hx::ObjectPtr< EntityListItemPool_obj > result = new EntityListItemPool_obj();
	result->__construct();
	return result;}

Dynamic EntityListItemPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityListItemPool_obj > result = new EntityListItemPool_obj();
	result->__construct();
	return result;}

Void EntityListItemPool_obj::dispose( ){
{
		HX_STACK_PUSH("EntityListItemPool::dispose","away3d/core/data/EntityListItemPool.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		(int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,dispose,(void))

Void EntityListItemPool_obj::freeAll( ){
{
		HX_STACK_PUSH("EntityListItemPool::freeAll","away3d/core/data/EntityListItemPool.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->_index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,freeAll,(void))

::away3d::core::data::EntityListItem EntityListItemPool_obj::getItem( ){
	HX_STACK_PUSH("EntityListItemPool::getItem","away3d/core/data/EntityListItemPool.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	::away3d::core::data::EntityListItem item;		HX_STACK_VAR(item,"item");
	HX_STACK_LINE(18)
	if (((this->_index == this->_poolSize))){
		HX_STACK_LINE(19)
		item = ::away3d::core::data::EntityListItem_obj::__new();
		HX_STACK_LINE(20)
		this->_pool[(this->_index)++] = item;
		HX_STACK_LINE(21)
		++(this->_poolSize);
	}
	else{
		HX_STACK_LINE(24)
		item = this->_pool->__get((this->_index)++).StaticCast< ::away3d::core::data::EntityListItem >();
	}
	HX_STACK_LINE(25)
	return item;
}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,getItem,return )


EntityListItemPool_obj::EntityListItemPool_obj()
{
}

void EntityListItemPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityListItemPool);
	HX_MARK_MEMBER_NAME(_poolSize,"_poolSize");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_END_CLASS();
}

void EntityListItemPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_poolSize,"_poolSize");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
}

Dynamic EntityListItemPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"freeAll") ) { return freeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getItem") ) { return getItem_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_poolSize") ) { return _poolSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntityListItemPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_poolSize") ) { _poolSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityListItemPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_poolSize"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_pool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("freeAll"),
	HX_CSTRING("getItem"),
	HX_CSTRING("_poolSize"),
	HX_CSTRING("_index"),
	HX_CSTRING("_pool"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityListItemPool_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityListItemPool_obj::__mClass,"__mClass");
};

Class EntityListItemPool_obj::__mClass;

void EntityListItemPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.data.EntityListItemPool"), hx::TCanCast< EntityListItemPool_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EntityListItemPool_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace data
