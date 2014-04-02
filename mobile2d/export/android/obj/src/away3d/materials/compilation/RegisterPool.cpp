#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#include <away3d/materials/compilation/RegisterPool.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void RegisterPool_obj::__construct(::String regName,int regCount,hx::Null< bool >  __o_persistent)
{
HX_STACK_PUSH("RegisterPool::new","away3d/materials/compilation/RegisterPool.hx",38);
bool persistent = __o_persistent.Default(true);
{
	HX_STACK_LINE(39)
	this->_regName = regName;
	HX_STACK_LINE(40)
	this->_regCount = regCount;
	HX_STACK_LINE(41)
	this->_persistent = persistent;
	HX_STACK_LINE(42)
	this->initRegisters(regName,regCount);
}
;
	return null();
}

RegisterPool_obj::~RegisterPool_obj() { }

Dynamic RegisterPool_obj::__CreateEmpty() { return  new RegisterPool_obj; }
hx::ObjectPtr< RegisterPool_obj > RegisterPool_obj::__new(::String regName,int regCount,hx::Null< bool >  __o_persistent)
{  hx::ObjectPtr< RegisterPool_obj > result = new RegisterPool_obj();
	result->__construct(regName,regCount,__o_persistent);
	return result;}

Dynamic RegisterPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterPool_obj > result = new RegisterPool_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool RegisterPool_obj::isRegisterUsed( int index){
	HX_STACK_PUSH("RegisterPool::isRegisterUsed","away3d/materials/compilation/RegisterPool.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(207)
	if (((this->_usedVectorCount->__get(index) > (int)0))){
		HX_STACK_LINE(208)
		return true;
	}
	HX_STACK_LINE(210)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		while(((_g < (int)4))){
			HX_STACK_LINE(211)
			int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(212)
			if (((this->_usedSingleCount->__get(i1).StaticCast< Array< int > >()->__get(index) > (int)0))){
				HX_STACK_LINE(213)
				return true;
			}
		}
	}
	HX_STACK_LINE(216)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterPool_obj,isRegisterUsed,return )

Void RegisterPool_obj::initRegisters( ::String regName,int regCount){
{
		HX_STACK_PUSH("RegisterPool::initRegisters","away3d/materials/compilation/RegisterPool.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(regName,"regName");
		HX_STACK_ARG(regCount,"regCount");
		HX_STACK_LINE(150)
		::String hash = ::away3d::materials::compilation::RegisterPool_obj::_initPool(regName,regCount);		HX_STACK_VAR(hash,"hash");
		HX_STACK_LINE(152)
		this->_vectorRegisters = ::away3d::materials::compilation::RegisterPool_obj::_regPool->get(hash);
		HX_STACK_LINE(153)
		this->_registerComponents = ::away3d::materials::compilation::RegisterPool_obj::_regCompsPool->get(hash);
		HX_STACK_LINE(155)
		this->_usedVectorCount = Array_obj< int >::__new();
		HX_STACK_LINE(156)
		this->_usedSingleCount = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(158)
		this->_usedSingleCount[(int)0] = Array_obj< int >::__new();
		HX_STACK_LINE(159)
		this->_usedSingleCount[(int)1] = Array_obj< int >::__new();
		HX_STACK_LINE(160)
		this->_usedSingleCount[(int)2] = Array_obj< int >::__new();
		HX_STACK_LINE(161)
		this->_usedSingleCount[(int)3] = Array_obj< int >::__new();
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Dynamic array = this->_usedVectorCount;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(162)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(162)
			while((((c)++ < regCount))){
				HX_STACK_LINE(162)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(162)
			array;
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			Dynamic array = this->_usedSingleCount->__get((int)0).StaticCast< Array< int > >();		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(163)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(163)
			while((((c)++ < regCount))){
				HX_STACK_LINE(163)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(163)
			array;
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			Dynamic array = this->_usedSingleCount->__get((int)1).StaticCast< Array< int > >();		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(164)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(164)
			while((((c)++ < regCount))){
				HX_STACK_LINE(164)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(164)
			array;
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			Dynamic array = this->_usedSingleCount->__get((int)2).StaticCast< Array< int > >();		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(165)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(165)
			while((((c)++ < regCount))){
				HX_STACK_LINE(165)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(165)
			array;
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			Dynamic array = this->_usedSingleCount->__get((int)3).StaticCast< Array< int > >();		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(166)
			int c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(166)
			while((((c)++ < regCount))){
				HX_STACK_LINE(166)
				array->__Field(HX_CSTRING("push"),true)((int)0);
			}
			HX_STACK_LINE(166)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,initRegisters,(void))

bool RegisterPool_obj::hasRegisteredRegs( ){
	HX_STACK_PUSH("RegisterPool::hasRegisteredRegs","away3d/materials/compilation/RegisterPool.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_regCount;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		while(((_g1 < _g))){
			HX_STACK_LINE(136)
			int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(137)
			if ((this->isRegisterUsed(i1))){
				HX_STACK_LINE(138)
				return true;
			}
		}
	}
	HX_STACK_LINE(141)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,hasRegisteredRegs,return )

Void RegisterPool_obj::dispose( ){
{
		HX_STACK_PUSH("RegisterPool::dispose","away3d/materials/compilation/RegisterPool.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		this->_vectorRegisters = null();
		HX_STACK_LINE(124)
		this->_registerComponents = null();
		HX_STACK_LINE(125)
		this->_usedSingleCount = null();
		HX_STACK_LINE(126)
		this->_usedVectorCount = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,dispose,(void))

Void RegisterPool_obj::removeUsage( ::away3d::materials::compilation::ShaderRegisterElement _register){
{
		HX_STACK_PUSH("RegisterPool::removeUsage","away3d/materials/compilation/RegisterPool.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_LINE(108)
		if (((_register->_component > (int)-1))){
			HX_STACK_LINE(109)
			if (((--(this->_usedSingleCount->__get(_register->_component).StaticCast< Array< int > >()[_register->get_index()]) < (int)0))){
				HX_STACK_LINE(111)
				hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("More usages removed than exist!"),null()));
			}
		}
		else{
			HX_STACK_LINE(112)
			if (((--(this->_usedVectorCount[_register->get_index()]) < (int)0))){
				HX_STACK_LINE(114)
				hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("More usages removed than exist!"),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterPool_obj,removeUsage,(void))

Void RegisterPool_obj::addUsage( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount){
{
		HX_STACK_PUSH("RegisterPool::addUsage","away3d/materials/compilation/RegisterPool.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_ARG(usageCount,"usageCount");
		HX_STACK_LINE(96)
		if (((_register->_component > (int)-1))){
			HX_STACK_LINE(98)
			hx::AddEq(this->_usedSingleCount->__get(_register->_component).StaticCast< Array< int > >()[_register->get_index()],usageCount);
		}
		else{
			HX_STACK_LINE(100)
			hx::AddEq(this->_usedVectorCount[_register->get_index()],usageCount);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,addUsage,(void))

::away3d::materials::compilation::ShaderRegisterElement RegisterPool_obj::requestFreeRegComponent( ){
	HX_STACK_PUSH("RegisterPool::requestFreeRegComponent","away3d/materials/compilation/RegisterPool.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_regCount;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while(((_g1 < _g))){
			HX_STACK_LINE(71)
			int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(72)
			if (((this->_usedVectorCount->__get(i1) > (int)0))){
				HX_STACK_LINE(73)
				continue;
			}
			HX_STACK_LINE(75)
			int j;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(76)
				while(((_g2 < (int)4))){
					HX_STACK_LINE(76)
					int j1 = (_g2)++;		HX_STACK_VAR(j1,"j1");
					HX_STACK_LINE(77)
					if (((this->_usedSingleCount->__get(j1).StaticCast< Array< int > >()->__get(i1) == (int)0))){
						HX_STACK_LINE(78)
						if ((this->_persistent)){
							HX_STACK_LINE(79)
							(this->_usedSingleCount->__get(j1).StaticCast< Array< int > >()[i1])++;
						}
						HX_STACK_LINE(80)
						return this->_registerComponents->__GetItem(j1)->__GetItem(i1);
					}
				}
			}
		}
	}
	HX_STACK_LINE(85)
	hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Register overflow!"),null()));
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,requestFreeRegComponent,return )

::away3d::materials::compilation::ShaderRegisterElement RegisterPool_obj::requestFreeVectorReg( ){
	HX_STACK_PUSH("RegisterPool::requestFreeVectorReg","away3d/materials/compilation/RegisterPool.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_regCount;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		while(((_g1 < _g))){
			HX_STACK_LINE(52)
			int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(53)
			if ((!(this->isRegisterUsed(i1)))){
				HX_STACK_LINE(54)
				if ((this->_persistent)){
					HX_STACK_LINE(55)
					(this->_usedVectorCount[i1])++;
				}
				HX_STACK_LINE(56)
				return this->_vectorRegisters->__get(i1).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >();
			}
		}
	}
	HX_STACK_LINE(60)
	hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Register overflow!"),null()));
	HX_STACK_LINE(61)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RegisterPool_obj,requestFreeVectorReg,return )

::haxe::ds::StringMap RegisterPool_obj::_regPool;

::haxe::ds::StringMap RegisterPool_obj::_regCompsPool;

::String RegisterPool_obj::_initPool( ::String regName,int regCount){
	HX_STACK_PUSH("RegisterPool::_initPool","away3d/materials/compilation/RegisterPool.hx",172);
	HX_STACK_ARG(regName,"regName");
	HX_STACK_ARG(regCount,"regCount");
	HX_STACK_LINE(173)
	::String hash = (regName + regCount);		HX_STACK_VAR(hash,"hash");
	HX_STACK_LINE(175)
	if (((::away3d::materials::compilation::RegisterPool_obj::_regPool->get(hash) != null()))){
		HX_STACK_LINE(176)
		return hash;
	}
	HX_STACK_LINE(178)
	Array< ::Dynamic > vectorRegisters = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vectorRegisters,"vectorRegisters");
	HX_STACK_LINE(179)
	::away3d::materials::compilation::RegisterPool_obj::_regPool->set(hash,vectorRegisters);
	HX_STACK_LINE(181)
	Array< ::Dynamic > registerComponents = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(registerComponents,"registerComponents");
	HX_STACK_LINE(182)
	::away3d::materials::compilation::RegisterPool_obj::_regCompsPool->set(hash,registerComponents);
	HX_STACK_LINE(186)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		while(((_g < regCount))){
			HX_STACK_LINE(188)
			int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(189)
			vectorRegisters[i1] = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(regName,i1,null());
			HX_STACK_LINE(193)
			int j;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(194)
				while(((_g1 < (int)4))){
					HX_STACK_LINE(194)
					int j1 = (_g1)++;		HX_STACK_VAR(j1,"j1");
					HX_STACK_LINE(195)
					if (((registerComponents->__get(j1).StaticCast< Array< ::Dynamic > >() == null()))){
						HX_STACK_LINE(195)
						registerComponents[j1] = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(196)
					registerComponents->__get(j1).StaticCast< Array< ::Dynamic > >()[i1] = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(regName,i1,j1);
				}
			}
		}
	}
	HX_STACK_LINE(199)
	return hash;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RegisterPool_obj,_initPool,return )


RegisterPool_obj::RegisterPool_obj()
{
}

void RegisterPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterPool);
	HX_MARK_MEMBER_NAME(_persistent,"_persistent");
	HX_MARK_MEMBER_NAME(_regCount,"_regCount");
	HX_MARK_MEMBER_NAME(_usedVectorCount,"_usedVectorCount");
	HX_MARK_MEMBER_NAME(_usedSingleCount,"_usedSingleCount");
	HX_MARK_MEMBER_NAME(_regName,"_regName");
	HX_MARK_MEMBER_NAME(_registerComponents,"_registerComponents");
	HX_MARK_MEMBER_NAME(_vectorRegisters,"_vectorRegisters");
	HX_MARK_END_CLASS();
}

void RegisterPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_persistent,"_persistent");
	HX_VISIT_MEMBER_NAME(_regCount,"_regCount");
	HX_VISIT_MEMBER_NAME(_usedVectorCount,"_usedVectorCount");
	HX_VISIT_MEMBER_NAME(_usedSingleCount,"_usedSingleCount");
	HX_VISIT_MEMBER_NAME(_regName,"_regName");
	HX_VISIT_MEMBER_NAME(_registerComponents,"_registerComponents");
	HX_VISIT_MEMBER_NAME(_vectorRegisters,"_vectorRegisters");
}

Dynamic RegisterPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regPool") ) { return _regPool; }
		if (HX_FIELD_EQ(inName,"addUsage") ) { return addUsage_dyn(); }
		if (HX_FIELD_EQ(inName,"_regName") ) { return _regName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initPool") ) { return _initPool_dyn(); }
		if (HX_FIELD_EQ(inName,"_regCount") ) { return _regCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeUsage") ) { return removeUsage_dyn(); }
		if (HX_FIELD_EQ(inName,"_persistent") ) { return _persistent; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_regCompsPool") ) { return _regCompsPool; }
		if (HX_FIELD_EQ(inName,"initRegisters") ) { return initRegisters_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isRegisterUsed") ) { return isRegisterUsed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_usedVectorCount") ) { return _usedVectorCount; }
		if (HX_FIELD_EQ(inName,"_usedSingleCount") ) { return _usedSingleCount; }
		if (HX_FIELD_EQ(inName,"_vectorRegisters") ) { return _vectorRegisters; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasRegisteredRegs") ) { return hasRegisteredRegs_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_registerComponents") ) { return _registerComponents; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"requestFreeVectorReg") ) { return requestFreeVectorReg_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"requestFreeRegComponent") ) { return requestFreeRegComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegisterPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regPool") ) { _regPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_regName") ) { _regName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_regCount") ) { _regCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_persistent") ) { _persistent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_regCompsPool") ) { _regCompsPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_usedVectorCount") ) { _usedVectorCount=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usedSingleCount") ) { _usedSingleCount=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vectorRegisters") ) { _vectorRegisters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_registerComponents") ) { _registerComponents=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_persistent"));
	outFields->push(HX_CSTRING("_regCount"));
	outFields->push(HX_CSTRING("_usedVectorCount"));
	outFields->push(HX_CSTRING("_usedSingleCount"));
	outFields->push(HX_CSTRING("_regName"));
	outFields->push(HX_CSTRING("_registerComponents"));
	outFields->push(HX_CSTRING("_vectorRegisters"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_regPool"),
	HX_CSTRING("_regCompsPool"),
	HX_CSTRING("_initPool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isRegisterUsed"),
	HX_CSTRING("initRegisters"),
	HX_CSTRING("hasRegisteredRegs"),
	HX_CSTRING("dispose"),
	HX_CSTRING("removeUsage"),
	HX_CSTRING("addUsage"),
	HX_CSTRING("requestFreeRegComponent"),
	HX_CSTRING("requestFreeVectorReg"),
	HX_CSTRING("_persistent"),
	HX_CSTRING("_regCount"),
	HX_CSTRING("_usedVectorCount"),
	HX_CSTRING("_usedSingleCount"),
	HX_CSTRING("_regName"),
	HX_CSTRING("_registerComponents"),
	HX_CSTRING("_vectorRegisters"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterPool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RegisterPool_obj::_regPool,"_regPool");
	HX_MARK_MEMBER_NAME(RegisterPool_obj::_regCompsPool,"_regCompsPool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterPool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegisterPool_obj::_regPool,"_regPool");
	HX_VISIT_MEMBER_NAME(RegisterPool_obj::_regCompsPool,"_regCompsPool");
};

Class RegisterPool_obj::__mClass;

void RegisterPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.RegisterPool"), hx::TCanCast< RegisterPool_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegisterPool_obj::__boot()
{
	_regPool= ::haxe::ds::StringMap_obj::__new();
	_regCompsPool= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
