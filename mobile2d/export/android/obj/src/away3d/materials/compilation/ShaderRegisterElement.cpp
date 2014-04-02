#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void ShaderRegisterElement_obj::__construct(::String regName,int index,hx::Null< int >  __o_component)
{
HX_STACK_PUSH("ShaderRegisterElement::new","away3d/materials/compilation/ShaderRegisterElement.hx",22);
int component = __o_component.Default(-1);
{
	HX_STACK_LINE(23)
	this->_component = component;
	HX_STACK_LINE(24)
	this->_regName = regName;
	HX_STACK_LINE(25)
	this->_index = index;
	HX_STACK_LINE(26)
	this->_toStr = this->_regName;
	HX_STACK_LINE(27)
	if (((this->_index >= (int)0))){
		HX_STACK_LINE(27)
		hx::AddEq(this->_toStr,this->_index);
	}
	HX_STACK_LINE(28)
	if (((component > (int)-1))){
		HX_STACK_LINE(28)
		hx::AddEq(this->_toStr,(HX_CSTRING(".") + ::away3d::materials::compilation::ShaderRegisterElement_obj::COMPONENTS->__GetItem(component)));
	}
}
;
	return null();
}

ShaderRegisterElement_obj::~ShaderRegisterElement_obj() { }

Dynamic ShaderRegisterElement_obj::__CreateEmpty() { return  new ShaderRegisterElement_obj; }
hx::ObjectPtr< ShaderRegisterElement_obj > ShaderRegisterElement_obj::__new(::String regName,int index,hx::Null< int >  __o_component)
{  hx::ObjectPtr< ShaderRegisterElement_obj > result = new ShaderRegisterElement_obj();
	result->__construct(regName,index,__o_component);
	return result;}

Dynamic ShaderRegisterElement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderRegisterElement_obj > result = new ShaderRegisterElement_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int ShaderRegisterElement_obj::get_index( ){
	HX_STACK_PUSH("ShaderRegisterElement::get_index","away3d/materials/compilation/ShaderRegisterElement.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,get_index,return )

::String ShaderRegisterElement_obj::get_regName( ){
	HX_STACK_PUSH("ShaderRegisterElement::get_regName","away3d/materials/compilation/ShaderRegisterElement.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return this->_regName;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,get_regName,return )

::String ShaderRegisterElement_obj::toString( ){
	HX_STACK_PUSH("ShaderRegisterElement::toString","away3d/materials/compilation/ShaderRegisterElement.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return this->_toStr;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,toString,return )

Dynamic ShaderRegisterElement_obj::COMPONENTS;


ShaderRegisterElement_obj::ShaderRegisterElement_obj()
{
}

void ShaderRegisterElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterElement);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(_toStr,"_toStr");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_regName,"_regName");
	HX_MARK_END_CLASS();
}

void ShaderRegisterElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(_toStr,"_toStr");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_regName,"_regName");
}

Dynamic ShaderRegisterElement_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_toStr") ) { return _toStr; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regName") ) { return get_regName(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_regName") ) { return _regName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"COMPONENTS") ) { return COMPONENTS; }
		if (HX_FIELD_EQ(inName,"_component") ) { return _component; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_regName") ) { return get_regName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderRegisterElement_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_toStr") ) { _toStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regName") ) { _regName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"COMPONENTS") ) { COMPONENTS=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderRegisterElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_component"));
	outFields->push(HX_CSTRING("_toStr"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_regName"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("regName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("COMPONENTS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_index"),
	HX_CSTRING("get_regName"),
	HX_CSTRING("toString"),
	HX_CSTRING("_component"),
	HX_CSTRING("_toStr"),
	HX_CSTRING("_index"),
	HX_CSTRING("_regName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderRegisterElement_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderRegisterElement_obj::COMPONENTS,"COMPONENTS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderRegisterElement_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderRegisterElement_obj::COMPONENTS,"COMPONENTS");
};

Class ShaderRegisterElement_obj::__mClass;

void ShaderRegisterElement_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.ShaderRegisterElement"), hx::TCanCast< ShaderRegisterElement_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderRegisterElement_obj::__boot()
{
	COMPONENTS= Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y")).Add(HX_CSTRING("z")).Add(HX_CSTRING("w")));
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
