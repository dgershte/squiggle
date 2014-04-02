#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#include <away3d/materials/compilation/RegisterPool.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
namespace away3d{
namespace materials{
namespace compilation{

Void ShaderRegisterCache_obj::__construct(::String profile)
{
HX_STACK_PUSH("ShaderRegisterCache::new","away3d/materials/compilation/ShaderRegisterCache.hx",43);
{
	HX_STACK_LINE(43)
	this->_profile = profile;
}
;
	return null();
}

ShaderRegisterCache_obj::~ShaderRegisterCache_obj() { }

Dynamic ShaderRegisterCache_obj::__CreateEmpty() { return  new ShaderRegisterCache_obj; }
hx::ObjectPtr< ShaderRegisterCache_obj > ShaderRegisterCache_obj::__new(::String profile)
{  hx::ObjectPtr< ShaderRegisterCache_obj > result = new ShaderRegisterCache_obj();
	result->__construct(profile);
	return result;}

Dynamic ShaderRegisterCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderRegisterCache_obj > result = new ShaderRegisterCache_obj();
	result->__construct(inArgs[0]);
	return result;}

int ShaderRegisterCache_obj::get_numUsedVaryings( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_numUsedVaryings","away3d/materials/compilation/ShaderRegisterCache.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	return this->_numUsedVaryings;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedVaryings,return )

int ShaderRegisterCache_obj::get_numUsedTextures( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_numUsedTextures","away3d/materials/compilation/ShaderRegisterCache.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(314)
	return this->_numUsedTextures;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedTextures,return )

int ShaderRegisterCache_obj::get_numUsedStreams( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_numUsedStreams","away3d/materials/compilation/ShaderRegisterCache.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_LINE(306)
	return this->_numUsedStreams;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedStreams,return )

int ShaderRegisterCache_obj::get_numUsedFragmentConstants( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_numUsedFragmentConstants","away3d/materials/compilation/ShaderRegisterCache.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_LINE(298)
	return this->_numUsedFragmentConstants;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedFragmentConstants,return )

int ShaderRegisterCache_obj::get_numUsedVertexConstants( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_numUsedVertexConstants","away3d/materials/compilation/ShaderRegisterCache.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_LINE(290)
	return this->_numUsedVertexConstants;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_numUsedVertexConstants,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::get_fragmentOutputRegister( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_fragmentOutputRegister","away3d/materials/compilation/ShaderRegisterCache.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(282)
	return this->_fragmentOutputRegister;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_fragmentOutputRegister,return )

int ShaderRegisterCache_obj::set_fragmentConstantOffset( int value){
	HX_STACK_PUSH("ShaderRegisterCache::set_fragmentConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(274)
	this->_fragmentConstantOffset = value;
	HX_STACK_LINE(275)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_fragmentConstantOffset,return )

int ShaderRegisterCache_obj::get_fragmentConstantOffset( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_fragmentConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(269)
	return this->_fragmentConstantOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_fragmentConstantOffset,return )

int ShaderRegisterCache_obj::set_varyingsOffset( int value){
	HX_STACK_PUSH("ShaderRegisterCache::set_varyingsOffset","away3d/materials/compilation/ShaderRegisterCache.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(261)
	this->_varyingsOffset = value;
	HX_STACK_LINE(262)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_varyingsOffset,return )

int ShaderRegisterCache_obj::get_varyingsOffset( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_varyingsOffset","away3d/materials/compilation/ShaderRegisterCache.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_LINE(256)
	return this->_varyingsOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_varyingsOffset,return )

int ShaderRegisterCache_obj::set_vertexAttributesOffset( int value){
	HX_STACK_PUSH("ShaderRegisterCache::set_vertexAttributesOffset","away3d/materials/compilation/ShaderRegisterCache.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(248)
	this->_vertexAttributesOffset = value;
	HX_STACK_LINE(249)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_vertexAttributesOffset,return )

int ShaderRegisterCache_obj::get_vertexAttributesOffset( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_vertexAttributesOffset","away3d/materials/compilation/ShaderRegisterCache.hx",243);
	HX_STACK_THIS(this);
	HX_STACK_LINE(243)
	return this->_vertexAttributesOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_vertexAttributesOffset,return )

int ShaderRegisterCache_obj::set_vertexConstantOffset( int vertexConstantOffset){
	HX_STACK_PUSH("ShaderRegisterCache::set_vertexConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vertexConstantOffset,"vertexConstantOffset");
	HX_STACK_LINE(235)
	this->_vertexConstantOffset = vertexConstantOffset;
	HX_STACK_LINE(236)
	return vertexConstantOffset;
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,set_vertexConstantOffset,return )

int ShaderRegisterCache_obj::get_vertexConstantOffset( ){
	HX_STACK_PUSH("ShaderRegisterCache::get_vertexConstantOffset","away3d/materials/compilation/ShaderRegisterCache.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_LINE(230)
	return this->_vertexConstantOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,get_vertexConstantOffset,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeTextureReg( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeTextureReg","away3d/materials/compilation/ShaderRegisterCache.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	++(this->_numUsedTextures);
	HX_STACK_LINE(223)
	return this->_textureCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeTextureReg,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexAttribute( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeVertexAttribute","away3d/materials/compilation/ShaderRegisterCache.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_LINE(213)
	++(this->_numUsedStreams);
	HX_STACK_LINE(214)
	return this->_vertexAttributesCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexAttribute,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexSingleTemp( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeVertexSingleTemp","away3d/materials/compilation/ShaderRegisterCache.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	return this->_vertexTempCache->requestFreeRegComponent();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexSingleTemp,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexVectorTemp( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeVertexVectorTemp","away3d/materials/compilation/ShaderRegisterCache.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	return this->_vertexTempCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexVectorTemp,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVertexConstant( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeVertexConstant","away3d/materials/compilation/ShaderRegisterCache.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	++(this->_numUsedVertexConstants);
	HX_STACK_LINE(189)
	return this->_vertexConstantsCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVertexConstant,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentConstant( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeFragmentConstant","away3d/materials/compilation/ShaderRegisterCache.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(179)
	++(this->_numUsedFragmentConstants);
	HX_STACK_LINE(180)
	return this->_fragmentConstantsCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentConstant,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeVarying( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeVarying","away3d/materials/compilation/ShaderRegisterCache.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(170)
	++(this->_numUsedVaryings);
	HX_STACK_LINE(171)
	return this->_varyingCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeVarying,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentSingleTemp( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeFragmentSingleTemp","away3d/materials/compilation/ShaderRegisterCache.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(161)
	return this->_fragmentTempCache->requestFreeRegComponent();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentSingleTemp,return )

::away3d::materials::compilation::ShaderRegisterElement ShaderRegisterCache_obj::getFreeFragmentVectorTemp( ){
	HX_STACK_PUSH("ShaderRegisterCache::getFreeFragmentVectorTemp","away3d/materials/compilation/ShaderRegisterCache.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(153)
	return this->_fragmentTempCache->requestFreeVectorReg();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,getFreeFragmentVectorTemp,return )

Void ShaderRegisterCache_obj::removeVertexTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _register){
{
		HX_STACK_PUSH("ShaderRegisterCache::removeVertexTempUsage","away3d/materials/compilation/ShaderRegisterCache.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_LINE(144)
		this->_vertexTempCache->removeUsage(_register);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,removeVertexTempUsage,(void))

Void ShaderRegisterCache_obj::addVertexTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount){
{
		HX_STACK_PUSH("ShaderRegisterCache::addVertexTempUsages","away3d/materials/compilation/ShaderRegisterCache.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_ARG(usageCount,"usageCount");
		HX_STACK_LINE(135)
		this->_vertexTempCache->addUsage(_register,usageCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderRegisterCache_obj,addVertexTempUsages,(void))

Void ShaderRegisterCache_obj::removeFragmentTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _register){
{
		HX_STACK_PUSH("ShaderRegisterCache::removeFragmentTempUsage","away3d/materials/compilation/ShaderRegisterCache.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_LINE(124)
		this->_fragmentTempCache->removeUsage(_register);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderRegisterCache_obj,removeFragmentTempUsage,(void))

Void ShaderRegisterCache_obj::addFragmentTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount){
{
		HX_STACK_PUSH("ShaderRegisterCache::addFragmentTempUsages","away3d/materials/compilation/ShaderRegisterCache.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_register,"register");
		HX_STACK_ARG(usageCount,"usageCount");
		HX_STACK_LINE(115)
		this->_fragmentTempCache->addUsage(_register,usageCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderRegisterCache_obj,addFragmentTempUsages,(void))

Void ShaderRegisterCache_obj::dispose( ){
{
		HX_STACK_PUSH("ShaderRegisterCache::dispose","away3d/materials/compilation/ShaderRegisterCache.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		this->_fragmentTempCache->dispose();
		HX_STACK_LINE(95)
		this->_vertexTempCache->dispose();
		HX_STACK_LINE(96)
		this->_varyingCache->dispose();
		HX_STACK_LINE(97)
		this->_fragmentConstantsCache->dispose();
		HX_STACK_LINE(98)
		this->_vertexAttributesCache->dispose();
		HX_STACK_LINE(99)
		this->_fragmentTempCache = null();
		HX_STACK_LINE(100)
		this->_vertexTempCache = null();
		HX_STACK_LINE(101)
		this->_varyingCache = null();
		HX_STACK_LINE(102)
		this->_fragmentConstantsCache = null();
		HX_STACK_LINE(103)
		this->_vertexAttributesCache = null();
		HX_STACK_LINE(104)
		this->_fragmentOutputRegister = null();
		HX_STACK_LINE(105)
		this->_vertexOutputRegister = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,dispose,(void))

Void ShaderRegisterCache_obj::reset( ){
{
		HX_STACK_PUSH("ShaderRegisterCache::reset","away3d/materials/compilation/ShaderRegisterCache.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		this->_fragmentTempCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("ft"),(int)8,false);
		HX_STACK_LINE(53)
		this->_vertexTempCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("vt"),(int)8,false);
		HX_STACK_LINE(54)
		this->_varyingCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("v"),(int)8,null());
		HX_STACK_LINE(55)
		this->_textureCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("fs"),(int)8,null());
		HX_STACK_LINE(56)
		this->_vertexAttributesCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("va"),(int)8,null());
		HX_STACK_LINE(57)
		this->_fragmentConstantsCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("fc"),(int)28,null());
		HX_STACK_LINE(58)
		this->_vertexConstantsCache = ::away3d::materials::compilation::RegisterPool_obj::__new(HX_CSTRING("vc"),(int)128,null());
		HX_STACK_LINE(59)
		this->_fragmentOutputRegister = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(HX_CSTRING("oc"),(int)-1,null());
		HX_STACK_LINE(60)
		this->_vertexOutputRegister = ::away3d::materials::compilation::ShaderRegisterElement_obj::__new(HX_CSTRING("op"),(int)-1,null());
		HX_STACK_LINE(61)
		this->_numUsedVertexConstants = (int)0;
		HX_STACK_LINE(62)
		this->_numUsedStreams = (int)0;
		HX_STACK_LINE(63)
		this->_numUsedTextures = (int)0;
		HX_STACK_LINE(64)
		this->_numUsedVaryings = (int)0;
		HX_STACK_LINE(65)
		this->_numUsedFragmentConstants = (int)0;
		HX_STACK_LINE(66)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(67)
		i = (int)0;
		HX_STACK_LINE(68)
		while(((i < this->_vertexAttributesOffset))){
			HX_STACK_LINE(69)
			this->getFreeVertexAttribute();
			HX_STACK_LINE(70)
			++(i);
		}
		HX_STACK_LINE(72)
		i = (int)0;
		HX_STACK_LINE(73)
		while(((i < this->_vertexConstantOffset))){
			HX_STACK_LINE(74)
			this->getFreeVertexConstant();
			HX_STACK_LINE(75)
			++(i);
		}
		HX_STACK_LINE(77)
		i = (int)0;
		HX_STACK_LINE(78)
		while(((i < this->_varyingsOffset))){
			HX_STACK_LINE(79)
			this->getFreeVarying();
			HX_STACK_LINE(80)
			++(i);
		}
		HX_STACK_LINE(82)
		i = (int)0;
		HX_STACK_LINE(83)
		while(((i < this->_fragmentConstantOffset))){
			HX_STACK_LINE(84)
			this->getFreeFragmentConstant();
			HX_STACK_LINE(85)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterCache_obj,reset,(void))


ShaderRegisterCache_obj::ShaderRegisterCache_obj()
{
}

void ShaderRegisterCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterCache);
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_MARK_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_MARK_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_MARK_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_MARK_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_MARK_MEMBER_NAME(_vertexOutputRegister,"_vertexOutputRegister");
	HX_MARK_MEMBER_NAME(_fragmentOutputRegister,"_fragmentOutputRegister");
	HX_MARK_MEMBER_NAME(_fragmentConstantOffset,"_fragmentConstantOffset");
	HX_MARK_MEMBER_NAME(_varyingsOffset,"_varyingsOffset");
	HX_MARK_MEMBER_NAME(_vertexAttributesOffset,"_vertexAttributesOffset");
	HX_MARK_MEMBER_NAME(_vertexConstantOffset,"_vertexConstantOffset");
	HX_MARK_MEMBER_NAME(_vertexAttributesCache,"_vertexAttributesCache");
	HX_MARK_MEMBER_NAME(_textureCache,"_textureCache");
	HX_MARK_MEMBER_NAME(_vertexConstantsCache,"_vertexConstantsCache");
	HX_MARK_MEMBER_NAME(_fragmentConstantsCache,"_fragmentConstantsCache");
	HX_MARK_MEMBER_NAME(_varyingCache,"_varyingCache");
	HX_MARK_MEMBER_NAME(_vertexTempCache,"_vertexTempCache");
	HX_MARK_MEMBER_NAME(_fragmentTempCache,"_fragmentTempCache");
	HX_MARK_END_CLASS();
}

void ShaderRegisterCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_VISIT_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_VISIT_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_VISIT_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_VISIT_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_VISIT_MEMBER_NAME(_vertexOutputRegister,"_vertexOutputRegister");
	HX_VISIT_MEMBER_NAME(_fragmentOutputRegister,"_fragmentOutputRegister");
	HX_VISIT_MEMBER_NAME(_fragmentConstantOffset,"_fragmentConstantOffset");
	HX_VISIT_MEMBER_NAME(_varyingsOffset,"_varyingsOffset");
	HX_VISIT_MEMBER_NAME(_vertexAttributesOffset,"_vertexAttributesOffset");
	HX_VISIT_MEMBER_NAME(_vertexConstantOffset,"_vertexConstantOffset");
	HX_VISIT_MEMBER_NAME(_vertexAttributesCache,"_vertexAttributesCache");
	HX_VISIT_MEMBER_NAME(_textureCache,"_textureCache");
	HX_VISIT_MEMBER_NAME(_vertexConstantsCache,"_vertexConstantsCache");
	HX_VISIT_MEMBER_NAME(_fragmentConstantsCache,"_fragmentConstantsCache");
	HX_VISIT_MEMBER_NAME(_varyingCache,"_varyingCache");
	HX_VISIT_MEMBER_NAME(_vertexTempCache,"_vertexTempCache");
	HX_VISIT_MEMBER_NAME(_fragmentTempCache,"_fragmentTempCache");
}

Dynamic ShaderRegisterCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return _profile; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureCache") ) { return _textureCache; }
		if (HX_FIELD_EQ(inName,"_varyingCache") ) { return _varyingCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFreeVarying") ) { return getFreeVarying_dyn(); }
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { return get_numUsedStreams(); }
		if (HX_FIELD_EQ(inName,"varyingsOffset") ) { return get_varyingsOffset(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { return _numUsedStreams; }
		if (HX_FIELD_EQ(inName,"_varyingsOffset") ) { return _varyingsOffset; }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { return get_numUsedVaryings(); }
		if (HX_FIELD_EQ(inName,"numUsedTextures") ) { return get_numUsedTextures(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { return _numUsedVaryings; }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { return _numUsedTextures; }
		if (HX_FIELD_EQ(inName,"_vertexTempCache") ) { return _vertexTempCache; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFreeTextureReg") ) { return getFreeTextureReg_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return get_numUsedStreams_dyn(); }
		if (HX_FIELD_EQ(inName,"set_varyingsOffset") ) { return set_varyingsOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_varyingsOffset") ) { return get_varyingsOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"_fragmentTempCache") ) { return _fragmentTempCache; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return get_numUsedVaryings_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numUsedTextures") ) { return get_numUsedTextures_dyn(); }
		if (HX_FIELD_EQ(inName,"addVertexTempUsages") ) { return addVertexTempUsages_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantOffset") ) { return get_vertexConstantOffset(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFreeVertexConstant") ) { return getFreeVertexConstant_dyn(); }
		if (HX_FIELD_EQ(inName,"removeVertexTempUsage") ) { return removeVertexTempUsage_dyn(); }
		if (HX_FIELD_EQ(inName,"addFragmentTempUsages") ) { return addFragmentTempUsages_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexOutputRegister") ) { return _vertexOutputRegister; }
		if (HX_FIELD_EQ(inName,"_vertexConstantOffset") ) { return _vertexConstantOffset; }
		if (HX_FIELD_EQ(inName,"_vertexConstantsCache") ) { return _vertexConstantsCache; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getFreeVertexAttribute") ) { return getFreeVertexAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"_vertexAttributesCache") ) { return _vertexAttributesCache; }
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { return get_numUsedVertexConstants(); }
		if (HX_FIELD_EQ(inName,"fragmentOutputRegister") ) { return get_fragmentOutputRegister(); }
		if (HX_FIELD_EQ(inName,"fragmentConstantOffset") ) { return get_fragmentConstantOffset(); }
		if (HX_FIELD_EQ(inName,"vertexAttributesOffset") ) { return get_vertexAttributesOffset(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFreeVertexSingleTemp") ) { return getFreeVertexSingleTemp_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeVertexVectorTemp") ) { return getFreeVertexVectorTemp_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeFragmentConstant") ) { return getFreeFragmentConstant_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFragmentTempUsage") ) { return removeFragmentTempUsage_dyn(); }
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { return _numUsedVertexConstants; }
		if (HX_FIELD_EQ(inName,"_fragmentOutputRegister") ) { return _fragmentOutputRegister; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantOffset") ) { return _fragmentConstantOffset; }
		if (HX_FIELD_EQ(inName,"_vertexAttributesOffset") ) { return _vertexAttributesOffset; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantsCache") ) { return _fragmentConstantsCache; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_vertexConstantOffset") ) { return set_vertexConstantOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexConstantOffset") ) { return get_vertexConstantOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { return get_numUsedFragmentConstants(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getFreeFragmentSingleTemp") ) { return getFreeFragmentSingleTemp_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeFragmentVectorTemp") ) { return getFreeFragmentVectorTemp_dyn(); }
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { return _numUsedFragmentConstants; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return get_numUsedVertexConstants_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fragmentOutputRegister") ) { return get_fragmentOutputRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fragmentConstantOffset") ) { return set_fragmentConstantOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fragmentConstantOffset") ) { return get_fragmentConstantOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vertexAttributesOffset") ) { return set_vertexAttributesOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertexAttributesOffset") ) { return get_vertexAttributesOffset_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return get_numUsedFragmentConstants_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderRegisterCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textureCache") ) { _textureCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_varyingCache") ) { _varyingCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"varyingsOffset") ) { return set_varyingsOffset(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { _numUsedStreams=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_varyingsOffset") ) { _varyingsOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { _numUsedVaryings=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { _numUsedTextures=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexTempCache") ) { _vertexTempCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fragmentTempCache") ) { _fragmentTempCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantOffset") ) { return set_vertexConstantOffset(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_vertexOutputRegister") ) { _vertexOutputRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantOffset") ) { _vertexConstantOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexConstantsCache") ) { _vertexConstantsCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_vertexAttributesCache") ) { _vertexAttributesCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentConstantOffset") ) { return set_fragmentConstantOffset(inValue); }
		if (HX_FIELD_EQ(inName,"vertexAttributesOffset") ) { return set_vertexAttributesOffset(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { _numUsedVertexConstants=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentOutputRegister") ) { _fragmentOutputRegister=inValue.Cast< ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantOffset") ) { _fragmentConstantOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertexAttributesOffset") ) { _vertexAttributesOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fragmentConstantsCache") ) { _fragmentConstantsCache=inValue.Cast< ::away3d::materials::compilation::RegisterPool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { _numUsedFragmentConstants=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderRegisterCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_profile"));
	outFields->push(HX_CSTRING("_numUsedVaryings"));
	outFields->push(HX_CSTRING("_numUsedTextures"));
	outFields->push(HX_CSTRING("_numUsedStreams"));
	outFields->push(HX_CSTRING("_numUsedFragmentConstants"));
	outFields->push(HX_CSTRING("_numUsedVertexConstants"));
	outFields->push(HX_CSTRING("_vertexOutputRegister"));
	outFields->push(HX_CSTRING("_fragmentOutputRegister"));
	outFields->push(HX_CSTRING("_fragmentConstantOffset"));
	outFields->push(HX_CSTRING("_varyingsOffset"));
	outFields->push(HX_CSTRING("_vertexAttributesOffset"));
	outFields->push(HX_CSTRING("_vertexConstantOffset"));
	outFields->push(HX_CSTRING("_vertexAttributesCache"));
	outFields->push(HX_CSTRING("_textureCache"));
	outFields->push(HX_CSTRING("_vertexConstantsCache"));
	outFields->push(HX_CSTRING("_fragmentConstantsCache"));
	outFields->push(HX_CSTRING("_varyingCache"));
	outFields->push(HX_CSTRING("_vertexTempCache"));
	outFields->push(HX_CSTRING("_fragmentTempCache"));
	outFields->push(HX_CSTRING("numUsedVaryings"));
	outFields->push(HX_CSTRING("numUsedTextures"));
	outFields->push(HX_CSTRING("numUsedStreams"));
	outFields->push(HX_CSTRING("numUsedFragmentConstants"));
	outFields->push(HX_CSTRING("numUsedVertexConstants"));
	outFields->push(HX_CSTRING("fragmentOutputRegister"));
	outFields->push(HX_CSTRING("fragmentConstantOffset"));
	outFields->push(HX_CSTRING("varyingsOffset"));
	outFields->push(HX_CSTRING("vertexAttributesOffset"));
	outFields->push(HX_CSTRING("vertexConstantOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_numUsedVaryings"),
	HX_CSTRING("get_numUsedTextures"),
	HX_CSTRING("get_numUsedStreams"),
	HX_CSTRING("get_numUsedFragmentConstants"),
	HX_CSTRING("get_numUsedVertexConstants"),
	HX_CSTRING("get_fragmentOutputRegister"),
	HX_CSTRING("set_fragmentConstantOffset"),
	HX_CSTRING("get_fragmentConstantOffset"),
	HX_CSTRING("set_varyingsOffset"),
	HX_CSTRING("get_varyingsOffset"),
	HX_CSTRING("set_vertexAttributesOffset"),
	HX_CSTRING("get_vertexAttributesOffset"),
	HX_CSTRING("set_vertexConstantOffset"),
	HX_CSTRING("get_vertexConstantOffset"),
	HX_CSTRING("getFreeTextureReg"),
	HX_CSTRING("getFreeVertexAttribute"),
	HX_CSTRING("getFreeVertexSingleTemp"),
	HX_CSTRING("getFreeVertexVectorTemp"),
	HX_CSTRING("getFreeVertexConstant"),
	HX_CSTRING("getFreeFragmentConstant"),
	HX_CSTRING("getFreeVarying"),
	HX_CSTRING("getFreeFragmentSingleTemp"),
	HX_CSTRING("getFreeFragmentVectorTemp"),
	HX_CSTRING("removeVertexTempUsage"),
	HX_CSTRING("addVertexTempUsages"),
	HX_CSTRING("removeFragmentTempUsage"),
	HX_CSTRING("addFragmentTempUsages"),
	HX_CSTRING("dispose"),
	HX_CSTRING("reset"),
	HX_CSTRING("_profile"),
	HX_CSTRING("_numUsedVaryings"),
	HX_CSTRING("_numUsedTextures"),
	HX_CSTRING("_numUsedStreams"),
	HX_CSTRING("_numUsedFragmentConstants"),
	HX_CSTRING("_numUsedVertexConstants"),
	HX_CSTRING("_vertexOutputRegister"),
	HX_CSTRING("_fragmentOutputRegister"),
	HX_CSTRING("_fragmentConstantOffset"),
	HX_CSTRING("_varyingsOffset"),
	HX_CSTRING("_vertexAttributesOffset"),
	HX_CSTRING("_vertexConstantOffset"),
	HX_CSTRING("_vertexAttributesCache"),
	HX_CSTRING("_textureCache"),
	HX_CSTRING("_vertexConstantsCache"),
	HX_CSTRING("_fragmentConstantsCache"),
	HX_CSTRING("_varyingCache"),
	HX_CSTRING("_vertexTempCache"),
	HX_CSTRING("_fragmentTempCache"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderRegisterCache_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderRegisterCache_obj::__mClass,"__mClass");
};

Class ShaderRegisterCache_obj::__mClass;

void ShaderRegisterCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.compilation.ShaderRegisterCache"), hx::TCanCast< ShaderRegisterCache_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShaderRegisterCache_obj::__boot()
{
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
