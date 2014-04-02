#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#include <away3d/animators/data/AnimationRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_haxe_ds_WeakMap
#include <haxe/ds/WeakMap.h>
#endif
namespace away3d{
namespace animators{
namespace data{

Void AnimationRegisterCache_obj::__construct(::String profile)
{
HX_STACK_PUSH("AnimationRegisterCache::new","away3d/animators/data/AnimationRegisterCache.hx",55);
{
	HX_STACK_LINE(56)
	this->indexDictionary = ::haxe::ds::WeakMap_obj::__new();
	HX_STACK_LINE(57)
	this->vertexConstantData = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(58)
	this->fragmentConstantData = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(59)
	super::__construct(profile);
}
;
	return null();
}

AnimationRegisterCache_obj::~AnimationRegisterCache_obj() { }

Dynamic AnimationRegisterCache_obj::__CreateEmpty() { return  new AnimationRegisterCache_obj; }
hx::ObjectPtr< AnimationRegisterCache_obj > AnimationRegisterCache_obj::__new(::String profile)
{  hx::ObjectPtr< AnimationRegisterCache_obj > result = new AnimationRegisterCache_obj();
	result->__construct(profile);
	return result;}

Dynamic AnimationRegisterCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationRegisterCache_obj > result = new AnimationRegisterCache_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AnimationRegisterCache_obj::setFragmentConst( int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(0);
	HX_STACK_PUSH("AnimationRegisterCache::setFragmentConst","away3d/animators/data/AnimationRegisterCache.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(z,"z");
	HX_STACK_ARG(w,"w");
{
		HX_STACK_LINE(240)
		int _index = (((index - this->_fragmentConstantOffset)) * (int)4);		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(241)
		this->fragmentConstantData[(_index)++] = x;
		HX_STACK_LINE(242)
		this->fragmentConstantData[(_index)++] = y;
		HX_STACK_LINE(243)
		this->fragmentConstantData[(_index)++] = z;
		HX_STACK_LINE(244)
		this->fragmentConstantData[_index] = w;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(AnimationRegisterCache_obj,setFragmentConst,(void))

Void AnimationRegisterCache_obj::setVertexConstFromMatrix( int index,::flash::geom::Matrix3D matrix){
{
		HX_STACK_PUSH("AnimationRegisterCache::setVertexConstFromMatrix","away3d/animators/data/AnimationRegisterCache.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_LINE(219)
		Array< Float > rawData = matrix->rawData;		HX_STACK_VAR(rawData,"rawData");
		HX_STACK_LINE(220)
		int _index = (((index - this->_vertexConstantOffset)) * (int)4);		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(221)
		this->vertexConstantData[(_index)++] = rawData->__get((int)0);
		HX_STACK_LINE(222)
		this->vertexConstantData[(_index)++] = rawData->__get((int)4);
		HX_STACK_LINE(223)
		this->vertexConstantData[(_index)++] = rawData->__get((int)8);
		HX_STACK_LINE(224)
		this->vertexConstantData[(_index)++] = rawData->__get((int)12);
		HX_STACK_LINE(225)
		this->vertexConstantData[(_index)++] = rawData->__get((int)1);
		HX_STACK_LINE(226)
		this->vertexConstantData[(_index)++] = rawData->__get((int)5);
		HX_STACK_LINE(227)
		this->vertexConstantData[(_index)++] = rawData->__get((int)9);
		HX_STACK_LINE(228)
		this->vertexConstantData[(_index)++] = rawData->__get((int)13);
		HX_STACK_LINE(229)
		this->vertexConstantData[(_index)++] = rawData->__get((int)2);
		HX_STACK_LINE(230)
		this->vertexConstantData[(_index)++] = rawData->__get((int)6);
		HX_STACK_LINE(231)
		this->vertexConstantData[(_index)++] = rawData->__get((int)10);
		HX_STACK_LINE(232)
		this->vertexConstantData[(_index)++] = rawData->__get((int)14);
		HX_STACK_LINE(233)
		this->vertexConstantData[(_index)++] = rawData->__get((int)3);
		HX_STACK_LINE(234)
		this->vertexConstantData[(_index)++] = rawData->__get((int)7);
		HX_STACK_LINE(235)
		this->vertexConstantData[(_index)++] = rawData->__get((int)11);
		HX_STACK_LINE(236)
		this->vertexConstantData[_index] = rawData->__get((int)15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setVertexConstFromMatrix,(void))

Void AnimationRegisterCache_obj::setVertexConstFromVector( int index,Array< Float > data){
{
		HX_STACK_PUSH("AnimationRegisterCache::setVertexConstFromVector","away3d/animators/data/AnimationRegisterCache.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(210)
		int _index = (((index - this->_vertexConstantOffset)) * (int)4);		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(211)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(212)
		while(((i < data->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(213)
			this->vertexConstantData[(_index)++] = data->__get(i);
			HX_STACK_LINE(214)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setVertexConstFromVector,(void))

Void AnimationRegisterCache_obj::setVertexConst( int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(0);
	HX_STACK_PUSH("AnimationRegisterCache::setVertexConst","away3d/animators/data/AnimationRegisterCache.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(z,"z");
	HX_STACK_ARG(w,"w");
{
		HX_STACK_LINE(202)
		int _index = (((index - this->_vertexConstantOffset)) * (int)4);		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(203)
		this->vertexConstantData[(_index)++] = x;
		HX_STACK_LINE(204)
		this->vertexConstantData[(_index)++] = y;
		HX_STACK_LINE(205)
		this->vertexConstantData[(_index)++] = z;
		HX_STACK_LINE(206)
		this->vertexConstantData[_index] = w;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(AnimationRegisterCache_obj,setVertexConst,(void))

Void AnimationRegisterCache_obj::setDataLength( ){
{
		HX_STACK_PUSH("AnimationRegisterCache::setDataLength","away3d/animators/data/AnimationRegisterCache.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(195)
		this->_numVertexConstant = (this->_numUsedVertexConstants - this->_vertexConstantOffset);
		HX_STACK_LINE(196)
		this->_numFragmentConstant = (this->_numUsedFragmentConstants - this->_fragmentConstantOffset);
		HX_STACK_LINE(197)
		(this->_numVertexConstant * (int)4);
		HX_STACK_LINE(198)
		(this->_numFragmentConstant * (int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,setDataLength,(void))

int AnimationRegisterCache_obj::get_numFragmentConstant( ){
	HX_STACK_PUSH("AnimationRegisterCache::get_numFragmentConstant","away3d/animators/data/AnimationRegisterCache.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_LINE(190)
	return this->_numFragmentConstant;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,get_numFragmentConstant,return )

int AnimationRegisterCache_obj::get_numVertexConstant( ){
	HX_STACK_PUSH("AnimationRegisterCache::get_numVertexConstant","away3d/animators/data/AnimationRegisterCache.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_LINE(186)
	return this->_numVertexConstant;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,get_numVertexConstant,return )

::away3d::materials::compilation::ShaderRegisterElement AnimationRegisterCache_obj::getRegisterFromString( ::String code){
	HX_STACK_PUSH("AnimationRegisterCache::getRegisterFromString","away3d/animators/data/AnimationRegisterCache.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(code,"code");
	HX_STACK_LINE(177)
	Array< ::String > temp = ::EReg_obj::__new(HX_CSTRING("(\\d+)"),HX_CSTRING(""))->split(code);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(178)
	return ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(temp->__get((int)0),::Std_obj::parseInt(temp->__get((int)1)),null());
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationRegisterCache_obj,getRegisterFromString,return )

::String AnimationRegisterCache_obj::getColorCombinationCode( ::String shadedTarget){
	HX_STACK_PUSH("AnimationRegisterCache::getColorCombinationCode","away3d/animators/data/AnimationRegisterCache.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shadedTarget,"shadedTarget");
	HX_STACK_LINE(166)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(167)
	if (((bool(this->needFragmentAnimation) && bool(((bool(this->hasColorAddNode) || bool(this->hasColorMulNode))))))){
		HX_STACK_LINE(168)
		::away3d::materials::compilation::ShaderRegisterElement colorTarget = this->getRegisterFromString(shadedTarget);		HX_STACK_VAR(colorTarget,"colorTarget");
		HX_STACK_LINE(169)
		this->addFragmentTempUsages(colorTarget,(int)1);
		HX_STACK_LINE(170)
		if ((this->hasColorMulNode)){
			HX_STACK_LINE(170)
			hx::AddEq(code,((((((HX_CSTRING("mul ") + ::Std_obj::string(colorTarget)) + HX_CSTRING(",")) + ::Std_obj::string(colorTarget)) + HX_CSTRING(",")) + ::Std_obj::string(this->colorMulVary)) + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(171)
		if ((this->hasColorAddNode)){
			HX_STACK_LINE(171)
			hx::AddEq(code,((((((HX_CSTRING("add ") + ::Std_obj::string(colorTarget)) + HX_CSTRING(",")) + ::Std_obj::string(colorTarget)) + HX_CSTRING(",")) + ::Std_obj::string(this->colorAddVary)) + HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(173)
	return code;
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationRegisterCache_obj,getColorCombinationCode,return )

::String AnimationRegisterCache_obj::getColorPassCode( ){
	HX_STACK_PUSH("AnimationRegisterCache::getColorPassCode","away3d/animators/data/AnimationRegisterCache.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(157)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(158)
	if (((bool(this->needFragmentAnimation) && bool(((bool(this->hasColorAddNode) || bool(this->hasColorMulNode))))))){
		HX_STACK_LINE(159)
		if ((this->hasColorMulNode)){
			HX_STACK_LINE(159)
			hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->colorMulVary)) + HX_CSTRING(",")) + ::Std_obj::string(this->colorMulTarget)) + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(160)
		if ((this->hasColorAddNode)){
			HX_STACK_LINE(160)
			hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->colorAddVary)) + HX_CSTRING(",")) + ::Std_obj::string(this->colorAddTarget)) + HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(162)
	return code;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getColorPassCode,return )

::String AnimationRegisterCache_obj::initColorRegisters( ){
	HX_STACK_PUSH("AnimationRegisterCache::initColorRegisters","away3d/animators/data/AnimationRegisterCache.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(141)
	if ((this->hasColorMulNode)){
		HX_STACK_LINE(142)
		this->colorMulTarget = this->getFreeVertexVectorTemp();
		HX_STACK_LINE(143)
		this->addVertexTempUsages(this->colorMulTarget,(int)1);
		HX_STACK_LINE(144)
		this->colorMulVary = this->getFreeVarying();
		HX_STACK_LINE(145)
		hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->colorMulTarget)) + HX_CSTRING(",")) + ::Std_obj::string(this->vertexOneConst)) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(147)
	if ((this->hasColorAddNode)){
		HX_STACK_LINE(148)
		this->colorAddTarget = this->getFreeVertexVectorTemp();
		HX_STACK_LINE(149)
		this->addVertexTempUsages(this->colorAddTarget,(int)1);
		HX_STACK_LINE(150)
		this->colorAddVary = this->getFreeVarying();
		HX_STACK_LINE(151)
		hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->colorAddTarget)) + HX_CSTRING(",")) + ::Std_obj::string(this->vertexZeroConst)) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(153)
	return code;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,initColorRegisters,return )

::String AnimationRegisterCache_obj::getCombinationCode( ){
	HX_STACK_PUSH("AnimationRegisterCache::getCombinationCode","away3d/animators/data/AnimationRegisterCache.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return ((((((HX_CSTRING("add ") + ::Std_obj::string(this->scaleAndRotateTarget)) + HX_CSTRING(".xyz,")) + ::Std_obj::string(this->scaleAndRotateTarget)) + HX_CSTRING(".xyz,")) + ::Std_obj::string(this->positionTarget)) + HX_CSTRING(".xyz\n"));
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getCombinationCode,return )

::String AnimationRegisterCache_obj::getInitCode( ){
	HX_STACK_PUSH("AnimationRegisterCache::getInitCode","away3d/animators/data/AnimationRegisterCache.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(123)
	int len = this->sourceRegisters->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(124)
	::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(125)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(126)
	while(((i < len))){
		HX_STACK_LINE(127)
		hx::AddEq(code,((((HX_CSTRING("mov ") + this->targetRegisters->__get(i)) + HX_CSTRING(",")) + this->sourceRegisters->__get(i)) + HX_CSTRING("\n")));
		HX_STACK_LINE(128)
		(i)++;
	}
	HX_STACK_LINE(130)
	hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->positionTarget)) + HX_CSTRING(".xyz,")) + this->vertexZeroConst->toString()) + HX_CSTRING("\n")));
	HX_STACK_LINE(131)
	if ((this->needVelocity)){
		HX_STACK_LINE(131)
		hx::AddEq(code,((((HX_CSTRING("mov ") + ::Std_obj::string(this->velocityTarget)) + HX_CSTRING(".xyz,")) + this->vertexZeroConst->toString()) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(132)
	return code;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getInitCode,return )

int AnimationRegisterCache_obj::getRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex){
	HX_STACK_PUSH("AnimationRegisterCache::getRegisterIndex","away3d/animators/data/AnimationRegisterCache.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(parameterIndex,"parameterIndex");
	HX_STACK_LINE(118)
	return this->indexDictionary->get(node)->__GetItem(parameterIndex);
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,getRegisterIndex,return )

Void AnimationRegisterCache_obj::setRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex,int registerIndex){
{
		HX_STACK_PUSH("AnimationRegisterCache::setRegisterIndex","away3d/animators/data/AnimationRegisterCache.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_ARG(parameterIndex,"parameterIndex");
		HX_STACK_ARG(registerIndex,"registerIndex");
		HX_STACK_LINE(111)
		if ((!(this->indexDictionary->exists(node)))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","away3d/animators/data/AnimationRegisterCache.hx",112);
					{
						HX_STACK_LINE(112)
						Dynamic array = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(112)
						int c = (int)0;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(112)
						while((((c)++ < (int)8))){
							HX_STACK_LINE(112)
							array->__Field(HX_CSTRING("push"),true)((int)0);
						}
						HX_STACK_LINE(112)
						return array;
					}
					return null();
				}
			};
			HX_STACK_LINE(112)
			this->indexDictionary->set(node,_Function_2_1::Block());
		}
		HX_STACK_LINE(114)
		Array< int > t = this->indexDictionary->get(node);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(115)
		t[parameterIndex] = registerIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationRegisterCache_obj,setRegisterIndex,(void))

Void AnimationRegisterCache_obj::setUVSourceAndTarget( ::String UVAttribute,::String UVVaring){
{
		HX_STACK_PUSH("AnimationRegisterCache::setUVSourceAndTarget","away3d/animators/data/AnimationRegisterCache.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(UVAttribute,"UVAttribute");
		HX_STACK_ARG(UVVaring,"UVVaring");
		HX_STACK_LINE(103)
		this->uvVar = this->getRegisterFromString(UVVaring);
		HX_STACK_LINE(104)
		this->uvAttribute = this->getRegisterFromString(UVAttribute);
		HX_STACK_LINE(106)
		this->uvTarget = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->positionTarget->get_regName(),this->positionTarget->get_index(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setUVSourceAndTarget,(void))

Void AnimationRegisterCache_obj::reset( ){
{
		HX_STACK_PUSH("AnimationRegisterCache::reset","away3d/animators/data/AnimationRegisterCache.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		this->super::reset();
		HX_STACK_LINE(64)
		this->rotationRegisters = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(65)
		this->positionAttribute = this->getRegisterFromString(this->sourceRegisters->__get((int)0));
		HX_STACK_LINE(66)
		this->scaleAndRotateTarget = this->getRegisterFromString(this->targetRegisters->__get((int)0));
		HX_STACK_LINE(67)
		this->addVertexTempUsages(this->scaleAndRotateTarget,(int)1);
		HX_STACK_LINE(68)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(69)
		while(((i < this->targetRegisters->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(70)
			this->rotationRegisters->__Field(HX_CSTRING("push"),true)(this->getRegisterFromString(this->targetRegisters->__get(i)));
			HX_STACK_LINE(71)
			this->addVertexTempUsages(this->rotationRegisters->__get((i - (int)1)).StaticCast< ::away3d::materials::compilation::ShaderRegisterElement >(),(int)1);
			HX_STACK_LINE(72)
			(i)++;
		}
		HX_STACK_LINE(74)
		this->scaleAndRotateTarget = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->scaleAndRotateTarget->get_regName(),this->scaleAndRotateTarget->get_index(),null());
		HX_STACK_LINE(77)
		this->vertexZeroConst = this->getFreeVertexConstant();
		HX_STACK_LINE(78)
		this->vertexZeroConst = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->vertexZeroConst->get_regName(),this->vertexZeroConst->get_index(),(int)0);
		HX_STACK_LINE(79)
		this->vertexOneConst = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->vertexZeroConst->get_regName(),this->vertexZeroConst->get_index(),(int)1);
		HX_STACK_LINE(80)
		this->vertexTwoConst = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->vertexZeroConst->get_regName(),this->vertexZeroConst->get_index(),(int)2);
		HX_STACK_LINE(82)
		this->positionTarget = this->getFreeVertexVectorTemp();
		HX_STACK_LINE(83)
		this->addVertexTempUsages(this->positionTarget,(int)1);
		HX_STACK_LINE(84)
		this->positionTarget = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->positionTarget->get_regName(),this->positionTarget->get_index(),null());
		HX_STACK_LINE(85)
		if ((this->needVelocity)){
			HX_STACK_LINE(86)
			this->velocityTarget = this->getFreeVertexVectorTemp();
			HX_STACK_LINE(87)
			this->addVertexTempUsages(this->velocityTarget,(int)1);
			HX_STACK_LINE(88)
			this->velocityTarget = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->velocityTarget->get_regName(),this->velocityTarget->get_index(),null());
			HX_STACK_LINE(89)
			this->vertexTime = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->velocityTarget->get_regName(),this->velocityTarget->get_index(),(int)3);
			HX_STACK_LINE(90)
			this->vertexLife = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(this->positionTarget->get_regName(),this->positionTarget->get_index(),(int)3);
		}
		else{
			HX_STACK_LINE(94)
			::away3d::materials::compilation::ShaderRegisterElement tempTime = this->getFreeVertexVectorTemp();		HX_STACK_VAR(tempTime,"tempTime");
			HX_STACK_LINE(95)
			this->addVertexTempUsages(tempTime,(int)1);
			HX_STACK_LINE(96)
			this->vertexTime = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(tempTime->get_regName(),tempTime->get_index(),(int)0);
			HX_STACK_LINE(97)
			this->vertexLife = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(tempTime->get_regName(),tempTime->get_index(),(int)1);
		}
	}
return null();
}



AnimationRegisterCache_obj::AnimationRegisterCache_obj()
{
}

void AnimationRegisterCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationRegisterCache);
	HX_MARK_MEMBER_NAME(_numFragmentConstant,"_numFragmentConstant");
	HX_MARK_MEMBER_NAME(_numVertexConstant,"_numVertexConstant");
	HX_MARK_MEMBER_NAME(fragmentConstantData,"fragmentConstantData");
	HX_MARK_MEMBER_NAME(vertexConstantData,"vertexConstantData");
	HX_MARK_MEMBER_NAME(hasColorAddNode,"hasColorAddNode");
	HX_MARK_MEMBER_NAME(hasColorMulNode,"hasColorMulNode");
	HX_MARK_MEMBER_NAME(hasBillboard,"hasBillboard");
	HX_MARK_MEMBER_NAME(needVelocity,"needVelocity");
	HX_MARK_MEMBER_NAME(hasUVNode,"hasUVNode");
	HX_MARK_MEMBER_NAME(indexDictionary,"indexDictionary");
	HX_MARK_MEMBER_NAME(targetRegisters,"targetRegisters");
	HX_MARK_MEMBER_NAME(sourceRegisters,"sourceRegisters");
	HX_MARK_MEMBER_NAME(needUVAnimation,"needUVAnimation");
	HX_MARK_MEMBER_NAME(needFragmentAnimation,"needFragmentAnimation");
	HX_MARK_MEMBER_NAME(rotationRegisters,"rotationRegisters");
	HX_MARK_MEMBER_NAME(uvVar,"uvVar");
	HX_MARK_MEMBER_NAME(colorMulVary,"colorMulVary");
	HX_MARK_MEMBER_NAME(colorAddVary,"colorAddVary");
	HX_MARK_MEMBER_NAME(colorMulTarget,"colorMulTarget");
	HX_MARK_MEMBER_NAME(colorAddTarget,"colorAddTarget");
	HX_MARK_MEMBER_NAME(uvTarget,"uvTarget");
	HX_MARK_MEMBER_NAME(vertexTwoConst,"vertexTwoConst");
	HX_MARK_MEMBER_NAME(vertexOneConst,"vertexOneConst");
	HX_MARK_MEMBER_NAME(vertexZeroConst,"vertexZeroConst");
	HX_MARK_MEMBER_NAME(vertexLife,"vertexLife");
	HX_MARK_MEMBER_NAME(vertexTime,"vertexTime");
	HX_MARK_MEMBER_NAME(velocityTarget,"velocityTarget");
	HX_MARK_MEMBER_NAME(scaleAndRotateTarget,"scaleAndRotateTarget");
	HX_MARK_MEMBER_NAME(positionTarget,"positionTarget");
	HX_MARK_MEMBER_NAME(uvAttribute,"uvAttribute");
	HX_MARK_MEMBER_NAME(positionAttribute,"positionAttribute");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationRegisterCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numFragmentConstant,"_numFragmentConstant");
	HX_VISIT_MEMBER_NAME(_numVertexConstant,"_numVertexConstant");
	HX_VISIT_MEMBER_NAME(fragmentConstantData,"fragmentConstantData");
	HX_VISIT_MEMBER_NAME(vertexConstantData,"vertexConstantData");
	HX_VISIT_MEMBER_NAME(hasColorAddNode,"hasColorAddNode");
	HX_VISIT_MEMBER_NAME(hasColorMulNode,"hasColorMulNode");
	HX_VISIT_MEMBER_NAME(hasBillboard,"hasBillboard");
	HX_VISIT_MEMBER_NAME(needVelocity,"needVelocity");
	HX_VISIT_MEMBER_NAME(hasUVNode,"hasUVNode");
	HX_VISIT_MEMBER_NAME(indexDictionary,"indexDictionary");
	HX_VISIT_MEMBER_NAME(targetRegisters,"targetRegisters");
	HX_VISIT_MEMBER_NAME(sourceRegisters,"sourceRegisters");
	HX_VISIT_MEMBER_NAME(needUVAnimation,"needUVAnimation");
	HX_VISIT_MEMBER_NAME(needFragmentAnimation,"needFragmentAnimation");
	HX_VISIT_MEMBER_NAME(rotationRegisters,"rotationRegisters");
	HX_VISIT_MEMBER_NAME(uvVar,"uvVar");
	HX_VISIT_MEMBER_NAME(colorMulVary,"colorMulVary");
	HX_VISIT_MEMBER_NAME(colorAddVary,"colorAddVary");
	HX_VISIT_MEMBER_NAME(colorMulTarget,"colorMulTarget");
	HX_VISIT_MEMBER_NAME(colorAddTarget,"colorAddTarget");
	HX_VISIT_MEMBER_NAME(uvTarget,"uvTarget");
	HX_VISIT_MEMBER_NAME(vertexTwoConst,"vertexTwoConst");
	HX_VISIT_MEMBER_NAME(vertexOneConst,"vertexOneConst");
	HX_VISIT_MEMBER_NAME(vertexZeroConst,"vertexZeroConst");
	HX_VISIT_MEMBER_NAME(vertexLife,"vertexLife");
	HX_VISIT_MEMBER_NAME(vertexTime,"vertexTime");
	HX_VISIT_MEMBER_NAME(velocityTarget,"velocityTarget");
	HX_VISIT_MEMBER_NAME(scaleAndRotateTarget,"scaleAndRotateTarget");
	HX_VISIT_MEMBER_NAME(positionTarget,"positionTarget");
	HX_VISIT_MEMBER_NAME(uvAttribute,"uvAttribute");
	HX_VISIT_MEMBER_NAME(positionAttribute,"positionAttribute");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AnimationRegisterCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"uvVar") ) { return uvVar; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvTarget") ) { return uvTarget; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasUVNode") ) { return hasUVNode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexLife") ) { return vertexLife; }
		if (HX_FIELD_EQ(inName,"vertexTime") ) { return vertexTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInitCode") ) { return getInitCode_dyn(); }
		if (HX_FIELD_EQ(inName,"uvAttribute") ) { return uvAttribute; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasBillboard") ) { return hasBillboard; }
		if (HX_FIELD_EQ(inName,"needVelocity") ) { return needVelocity; }
		if (HX_FIELD_EQ(inName,"colorMulVary") ) { return colorMulVary; }
		if (HX_FIELD_EQ(inName,"colorAddVary") ) { return colorAddVary; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDataLength") ) { return setDataLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setVertexConst") ) { return setVertexConst_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMulTarget") ) { return colorMulTarget; }
		if (HX_FIELD_EQ(inName,"colorAddTarget") ) { return colorAddTarget; }
		if (HX_FIELD_EQ(inName,"vertexTwoConst") ) { return vertexTwoConst; }
		if (HX_FIELD_EQ(inName,"vertexOneConst") ) { return vertexOneConst; }
		if (HX_FIELD_EQ(inName,"velocityTarget") ) { return velocityTarget; }
		if (HX_FIELD_EQ(inName,"positionTarget") ) { return positionTarget; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorAddNode") ) { return hasColorAddNode; }
		if (HX_FIELD_EQ(inName,"hasColorMulNode") ) { return hasColorMulNode; }
		if (HX_FIELD_EQ(inName,"indexDictionary") ) { return indexDictionary; }
		if (HX_FIELD_EQ(inName,"targetRegisters") ) { return targetRegisters; }
		if (HX_FIELD_EQ(inName,"sourceRegisters") ) { return sourceRegisters; }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { return needUVAnimation; }
		if (HX_FIELD_EQ(inName,"vertexZeroConst") ) { return vertexZeroConst; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setFragmentConst") ) { return setFragmentConst_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorPassCode") ) { return getColorPassCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegisterIndex") ) { return getRegisterIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegisterIndex") ) { return setRegisterIndex_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rotationRegisters") ) { return rotationRegisters; }
		if (HX_FIELD_EQ(inName,"positionAttribute") ) { return positionAttribute; }
		if (HX_FIELD_EQ(inName,"numVertexConstant") ) { return get_numVertexConstant(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numVertexConstant") ) { return _numVertexConstant; }
		if (HX_FIELD_EQ(inName,"vertexConstantData") ) { return vertexConstantData; }
		if (HX_FIELD_EQ(inName,"initColorRegisters") ) { return initColorRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"getCombinationCode") ) { return getCombinationCode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"numFragmentConstant") ) { return get_numFragmentConstant(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_numFragmentConstant") ) { return _numFragmentConstant; }
		if (HX_FIELD_EQ(inName,"fragmentConstantData") ) { return fragmentConstantData; }
		if (HX_FIELD_EQ(inName,"setUVSourceAndTarget") ) { return setUVSourceAndTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleAndRotateTarget") ) { return scaleAndRotateTarget; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_numVertexConstant") ) { return get_numVertexConstant_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegisterFromString") ) { return getRegisterFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { return needFragmentAnimation; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_numFragmentConstant") ) { return get_numFragmentConstant_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorCombinationCode") ) { return getColorCombinationCode_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setVertexConstFromMatrix") ) { return setVertexConstFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexConstFromVector") ) { return setVertexConstFromVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationRegisterCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uvVar") ) { uvVar=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvTarget") ) { uvTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasUVNode") ) { hasUVNode=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexLife") ) { vertexLife=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexTime") ) { vertexTime=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uvAttribute") ) { uvAttribute=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasBillboard") ) { hasBillboard=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needVelocity") ) { needVelocity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMulVary") ) { colorMulVary=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorAddVary") ) { colorAddVary=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorMulTarget") ) { colorMulTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorAddTarget") ) { colorAddTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexTwoConst") ) { vertexTwoConst=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexOneConst") ) { vertexOneConst=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocityTarget") ) { velocityTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionTarget") ) { positionTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorAddNode") ) { hasColorAddNode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasColorMulNode") ) { hasColorMulNode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexDictionary") ) { indexDictionary=inValue.Cast< ::haxe::ds::WeakMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetRegisters") ) { targetRegisters=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceRegisters") ) { sourceRegisters=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { needUVAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexZeroConst") ) { vertexZeroConst=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rotationRegisters") ) { rotationRegisters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionAttribute") ) { positionAttribute=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numVertexConstant") ) { _numVertexConstant=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexConstantData") ) { vertexConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_numFragmentConstant") ) { _numFragmentConstant=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentConstantData") ) { fragmentConstantData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleAndRotateTarget") ) { scaleAndRotateTarget=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { needFragmentAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationRegisterCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numFragmentConstant"));
	outFields->push(HX_CSTRING("_numVertexConstant"));
	outFields->push(HX_CSTRING("fragmentConstantData"));
	outFields->push(HX_CSTRING("vertexConstantData"));
	outFields->push(HX_CSTRING("hasColorAddNode"));
	outFields->push(HX_CSTRING("hasColorMulNode"));
	outFields->push(HX_CSTRING("hasBillboard"));
	outFields->push(HX_CSTRING("needVelocity"));
	outFields->push(HX_CSTRING("hasUVNode"));
	outFields->push(HX_CSTRING("indexDictionary"));
	outFields->push(HX_CSTRING("targetRegisters"));
	outFields->push(HX_CSTRING("sourceRegisters"));
	outFields->push(HX_CSTRING("needUVAnimation"));
	outFields->push(HX_CSTRING("needFragmentAnimation"));
	outFields->push(HX_CSTRING("rotationRegisters"));
	outFields->push(HX_CSTRING("uvVar"));
	outFields->push(HX_CSTRING("colorMulVary"));
	outFields->push(HX_CSTRING("colorAddVary"));
	outFields->push(HX_CSTRING("colorMulTarget"));
	outFields->push(HX_CSTRING("colorAddTarget"));
	outFields->push(HX_CSTRING("uvTarget"));
	outFields->push(HX_CSTRING("vertexTwoConst"));
	outFields->push(HX_CSTRING("vertexOneConst"));
	outFields->push(HX_CSTRING("vertexZeroConst"));
	outFields->push(HX_CSTRING("vertexLife"));
	outFields->push(HX_CSTRING("vertexTime"));
	outFields->push(HX_CSTRING("velocityTarget"));
	outFields->push(HX_CSTRING("scaleAndRotateTarget"));
	outFields->push(HX_CSTRING("positionTarget"));
	outFields->push(HX_CSTRING("uvAttribute"));
	outFields->push(HX_CSTRING("positionAttribute"));
	outFields->push(HX_CSTRING("numFragmentConstant"));
	outFields->push(HX_CSTRING("numVertexConstant"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setFragmentConst"),
	HX_CSTRING("setVertexConstFromMatrix"),
	HX_CSTRING("setVertexConstFromVector"),
	HX_CSTRING("setVertexConst"),
	HX_CSTRING("setDataLength"),
	HX_CSTRING("get_numFragmentConstant"),
	HX_CSTRING("get_numVertexConstant"),
	HX_CSTRING("_numFragmentConstant"),
	HX_CSTRING("_numVertexConstant"),
	HX_CSTRING("fragmentConstantData"),
	HX_CSTRING("vertexConstantData"),
	HX_CSTRING("getRegisterFromString"),
	HX_CSTRING("getColorCombinationCode"),
	HX_CSTRING("getColorPassCode"),
	HX_CSTRING("initColorRegisters"),
	HX_CSTRING("getCombinationCode"),
	HX_CSTRING("getInitCode"),
	HX_CSTRING("getRegisterIndex"),
	HX_CSTRING("setRegisterIndex"),
	HX_CSTRING("setUVSourceAndTarget"),
	HX_CSTRING("reset"),
	HX_CSTRING("hasColorAddNode"),
	HX_CSTRING("hasColorMulNode"),
	HX_CSTRING("hasBillboard"),
	HX_CSTRING("needVelocity"),
	HX_CSTRING("hasUVNode"),
	HX_CSTRING("indexDictionary"),
	HX_CSTRING("targetRegisters"),
	HX_CSTRING("sourceRegisters"),
	HX_CSTRING("needUVAnimation"),
	HX_CSTRING("needFragmentAnimation"),
	HX_CSTRING("rotationRegisters"),
	HX_CSTRING("uvVar"),
	HX_CSTRING("colorMulVary"),
	HX_CSTRING("colorAddVary"),
	HX_CSTRING("colorMulTarget"),
	HX_CSTRING("colorAddTarget"),
	HX_CSTRING("uvTarget"),
	HX_CSTRING("vertexTwoConst"),
	HX_CSTRING("vertexOneConst"),
	HX_CSTRING("vertexZeroConst"),
	HX_CSTRING("vertexLife"),
	HX_CSTRING("vertexTime"),
	HX_CSTRING("velocityTarget"),
	HX_CSTRING("scaleAndRotateTarget"),
	HX_CSTRING("positionTarget"),
	HX_CSTRING("uvAttribute"),
	HX_CSTRING("positionAttribute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationRegisterCache_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationRegisterCache_obj::__mClass,"__mClass");
};

Class AnimationRegisterCache_obj::__mClass;

void AnimationRegisterCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.animators.data.AnimationRegisterCache"), hx::TCanCast< AnimationRegisterCache_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationRegisterCache_obj::__boot()
{
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
