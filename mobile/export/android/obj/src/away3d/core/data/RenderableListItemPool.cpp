#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
namespace away3d{
namespace core{
namespace data{

Void RenderableListItemPool_obj::__construct()
{
HX_STACK_PUSH("RenderableListItemPool::new","away3d/core/data/RenderableListItemPool.hx",10);
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

RenderableListItemPool_obj::~RenderableListItemPool_obj() { }

Dynamic RenderableListItemPool_obj::__CreateEmpty() { return  new RenderableListItemPool_obj; }
hx::ObjectPtr< RenderableListItemPool_obj > RenderableListItemPool_obj::__new()
{  hx::ObjectPtr< RenderableListItemPool_obj > result = new RenderableListItemPool_obj();
	result->__construct();
	return result;}

Dynamic RenderableListItemPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderableListItemPool_obj > result = new RenderableListItemPool_obj();
	result->__construct();
	return result;}

Void RenderableListItemPool_obj::dispose( ){
{
		HX_STACK_PUSH("RenderableListItemPool::dispose","away3d/core/data/RenderableListItemPool.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		(int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,dispose,(void))

Void RenderableListItemPool_obj::freeAll( ){
{
		HX_STACK_PUSH("RenderableListItemPool::freeAll","away3d/core/data/RenderableListItemPool.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_LINE(27)
		this->_index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,freeAll,(void))

::away3d::core::data::RenderableListItem RenderableListItemPool_obj::getItem( ){
	HX_STACK_PUSH("RenderableListItemPool::getItem","away3d/core/data/RenderableListItemPool.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16)
	if (((this->_index == this->_poolSize))){
		HX_STACK_LINE(18)
		::away3d::core::data::RenderableListItem item = ::away3d::core::data::RenderableListItem_obj::__new();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(19)
		this->_pool[(this->_index)++] = item;
		HX_STACK_LINE(20)
		++(this->_poolSize);
		HX_STACK_LINE(21)
		return item;
	}
	else{
		HX_STACK_LINE(24)
		return this->_pool->__get((this->_index)++).StaticCast< ::away3d::core::data::RenderableListItem >();
	}
	HX_STACK_LINE(16)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,getItem,return )


RenderableListItemPool_obj::RenderableListItemPool_obj()
{
}

void RenderableListItemPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableListItemPool);
	HX_MARK_MEMBER_NAME(_poolSize,"_poolSize");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_END_CLASS();
}

void RenderableListItemPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_poolSize,"_poolSize");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
}

Dynamic RenderableListItemPool_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RenderableListItemPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void RenderableListItemPool_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(RenderableListItemPool_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderableListItemPool_obj::__mClass,"__mClass");
};

Class RenderableListItemPool_obj::__mClass;

void RenderableListItemPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.data.RenderableListItemPool"), hx::TCanCast< RenderableListItemPool_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderableListItemPool_obj::__boot()
{
}

} // end namespace away3d
} // end namespace core
} // end namespace data
