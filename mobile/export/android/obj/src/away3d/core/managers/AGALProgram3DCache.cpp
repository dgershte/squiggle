#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_aglsl_AGLSLCompiler
#include <aglsl/AGLSLCompiler.h>
#endif
#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#include <away3d/core/managers/AGALProgram3DCache.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace managers{

Void AGALProgram3DCache_obj::__construct(::away3d::core::managers::Stage3DProxy stage3DProxy)
{
HX_STACK_PUSH("AGALProgram3DCache::new","away3d/core/managers/AGALProgram3DCache.hx",24);
{
	HX_STACK_LINE(25)
	this->_stage3DProxy = stage3DProxy;
	HX_STACK_LINE(27)
	this->_program3Ds = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(28)
	this->_ids = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(29)
	this->_usages = Array_obj< int >::__new();
	HX_STACK_LINE(30)
	this->_keys = Array_obj< ::String >::__new();
}
;
	return null();
}

AGALProgram3DCache_obj::~AGALProgram3DCache_obj() { }

Dynamic AGALProgram3DCache_obj::__CreateEmpty() { return  new AGALProgram3DCache_obj; }
hx::ObjectPtr< AGALProgram3DCache_obj > AGALProgram3DCache_obj::__new(::away3d::core::managers::Stage3DProxy stage3DProxy)
{  hx::ObjectPtr< AGALProgram3DCache_obj > result = new AGALProgram3DCache_obj();
	result->__construct(stage3DProxy);
	return result;}

Dynamic AGALProgram3DCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALProgram3DCache_obj > result = new AGALProgram3DCache_obj();
	result->__construct(inArgs[0]);
	return result;}

::String AGALProgram3DCache_obj::getKey( ::String vertexCode,::String fragmentCode){
	HX_STACK_PUSH("AGALProgram3DCache::getKey","away3d/core/managers/AGALProgram3DCache.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vertexCode,"vertexCode");
	HX_STACK_ARG(fragmentCode,"fragmentCode");
	HX_STACK_LINE(119)
	return ((vertexCode + HX_CSTRING("---")) + fragmentCode);
}


HX_DEFINE_DYNAMIC_FUNC2(AGALProgram3DCache_obj,getKey,return )

Void AGALProgram3DCache_obj::destroyProgram( ::String key){
{
		HX_STACK_PUSH("AGALProgram3DCache::destroyProgram","away3d/core/managers/AGALProgram3DCache.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_LINE(114)
		this->_program3Ds->get(key)->__Field(HX_CSTRING("dispose"),true)();
		HX_STACK_LINE(115)
		this->_program3Ds->remove(key);
		HX_STACK_LINE(116)
		this->_ids->set(key,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,destroyProgram,(void))

Void AGALProgram3DCache_obj::freeProgram3D( int programId){
{
		HX_STACK_PUSH("AGALProgram3DCache::freeProgram3D","away3d/core/managers/AGALProgram3DCache.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(programId,"programId");
		HX_STACK_LINE(108)
		(this->_usages[programId])--;
		HX_STACK_LINE(109)
		if (((this->_usages->__get(programId) == (int)0))){
			HX_STACK_LINE(110)
			this->destroyProgram(this->_keys->__get(programId));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,freeProgram3D,(void))

Void AGALProgram3DCache_obj::setProgram3D( ::away3d::materials::passes::MaterialPassBase pass,::String vertexCode,::String fragmentCode){
{
		HX_STACK_PUSH("AGALProgram3DCache::setProgram3D","away3d/core/managers/AGALProgram3DCache.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pass,"pass");
		HX_STACK_ARG(vertexCode,"vertexCode");
		HX_STACK_ARG(fragmentCode,"fragmentCode");
		HX_STACK_LINE(75)
		int stageIndex = this->_stage3DProxy->get_stage3DIndex();		HX_STACK_VAR(stageIndex,"stageIndex");
		HX_STACK_LINE(76)
		::flash::display3D::Program3D program;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(77)
		::String key = ((vertexCode + HX_CSTRING("---")) + fragmentCode);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(79)
		if ((!(this->_program3Ds->exists(key)))){
			HX_STACK_LINE(80)
			this->_keys[::away3d::core::managers::AGALProgram3DCache_obj::_currentId] = key;
			HX_STACK_LINE(81)
			this->_usages[::away3d::core::managers::AGALProgram3DCache_obj::_currentId] = (int)0;
			HX_STACK_LINE(82)
			this->_ids->set(key,::away3d::core::managers::AGALProgram3DCache_obj::_currentId);
			HX_STACK_LINE(83)
			++(::away3d::core::managers::AGALProgram3DCache_obj::_currentId);
			HX_STACK_LINE(84)
			program = this->_stage3DProxy->get_context3D()->createProgram();
			struct _Function_2_1{
				inline static ::openfl::gl::GLShader Block( ::String &vertexCode){
					HX_STACK_PUSH("*::closure","away3d/core/managers/AGALProgram3DCache.hx",86);
					{
						HX_STACK_LINE(86)
						::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
						HX_STACK_LINE(86)
						int glType;		HX_STACK_VAR(glType,"glType");
						HX_STACK_LINE(86)
						::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
						HX_STACK_LINE(86)
						{
							::flash::display3D::Context3DProgramType _switch_1 = (::flash::display3D::Context3DProgramType_obj::VERTEX);
							switch((_switch_1)->GetIndex()){
								case 0: {
									HX_STACK_LINE(86)
									glType = (int)35633;
									HX_STACK_LINE(86)
									shaderType = HX_CSTRING("vertex");
								}
								;break;
								case 1: {
									HX_STACK_LINE(86)
									glType = (int)35632;
									HX_STACK_LINE(86)
									shaderType = HX_CSTRING("fragment");
								}
								;break;
							}
						}
						HX_STACK_LINE(86)
						::String shaderSourceString = aglsl1->compile(shaderType,vertexCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
						HX_STACK_LINE(86)
						::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
						HX_STACK_LINE(86)
						::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
						HX_STACK_LINE(86)
						::openfl::gl::GL_obj::compileShader(shader);
						HX_STACK_LINE(86)
						if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
							HX_STACK_LINE(86)
							::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
							HX_STACK_LINE(86)
							::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
							HX_STACK_LINE(86)
							if (((err != HX_CSTRING("")))){
								HX_STACK_LINE(86)
								hx::Throw (err);
							}
						}
						HX_STACK_LINE(86)
						return shader;
					}
					return null();
				}
			};
			HX_STACK_LINE(86)
			::openfl::gl::GLShader vertexByteCode = _Function_2_1::Block(vertexCode);		HX_STACK_VAR(vertexByteCode,"vertexByteCode");
			struct _Function_2_2{
				inline static ::openfl::gl::GLShader Block( ::String &fragmentCode){
					HX_STACK_PUSH("*::closure","away3d/core/managers/AGALProgram3DCache.hx",87);
					{
						HX_STACK_LINE(87)
						::aglsl::AGLSLCompiler aglsl1 = ::aglsl::AGLSLCompiler_obj::__new();		HX_STACK_VAR(aglsl1,"aglsl1");
						HX_STACK_LINE(87)
						int glType;		HX_STACK_VAR(glType,"glType");
						HX_STACK_LINE(87)
						::String shaderType;		HX_STACK_VAR(shaderType,"shaderType");
						HX_STACK_LINE(87)
						{
							::flash::display3D::Context3DProgramType _switch_2 = (::flash::display3D::Context3DProgramType_obj::FRAGMENT);
							switch((_switch_2)->GetIndex()){
								case 0: {
									HX_STACK_LINE(87)
									glType = (int)35633;
									HX_STACK_LINE(87)
									shaderType = HX_CSTRING("vertex");
								}
								;break;
								case 1: {
									HX_STACK_LINE(87)
									glType = (int)35632;
									HX_STACK_LINE(87)
									shaderType = HX_CSTRING("fragment");
								}
								;break;
							}
						}
						HX_STACK_LINE(87)
						::String shaderSourceString = aglsl1->compile(shaderType,fragmentCode);		HX_STACK_VAR(shaderSourceString,"shaderSourceString");
						HX_STACK_LINE(87)
						::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(glType);		HX_STACK_VAR(shader,"shader");
						HX_STACK_LINE(87)
						::openfl::gl::GL_obj::shaderSource(shader,shaderSourceString);
						HX_STACK_LINE(87)
						::openfl::gl::GL_obj::compileShader(shader);
						HX_STACK_LINE(87)
						if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
							HX_STACK_LINE(87)
							::haxe::Log_obj::trace((HX_CSTRING("--- ERR ---\n") + shaderSourceString),hx::SourceInfo(HX_CSTRING("AGLSLShaderUtils.hx"),73,HX_CSTRING("flash.display3D.shaders.AGLSLShaderUtils"),HX_CSTRING("createShader")));
							HX_STACK_LINE(87)
							::String err = ::openfl::gl::GL_obj::getShaderInfoLog(shader);		HX_STACK_VAR(err,"err");
							HX_STACK_LINE(87)
							if (((err != HX_CSTRING("")))){
								HX_STACK_LINE(87)
								hx::Throw (err);
							}
						}
						HX_STACK_LINE(87)
						return shader;
					}
					return null();
				}
			};
			HX_STACK_LINE(87)
			::openfl::gl::GLShader fragmentByteCode = _Function_2_2::Block(fragmentCode);		HX_STACK_VAR(fragmentByteCode,"fragmentByteCode");
			HX_STACK_LINE(89)
			program->upload(vertexByteCode,fragmentByteCode);
			HX_STACK_LINE(91)
			this->_program3Ds->set(key,program);
		}
		HX_STACK_LINE(94)
		int oldId = pass->_program3Dids->__get(stageIndex);		HX_STACK_VAR(oldId,"oldId");
		HX_STACK_LINE(95)
		int newId = this->_ids->get(key);		HX_STACK_VAR(newId,"newId");
		HX_STACK_LINE(97)
		if (((oldId != newId))){
			HX_STACK_LINE(98)
			if (((oldId >= (int)0))){
				HX_STACK_LINE(99)
				this->freeProgram3D(oldId);
			}
			HX_STACK_LINE(100)
			(this->_usages[newId])++;
		}
		HX_STACK_LINE(103)
		pass->_program3Dids[stageIndex] = newId;
		HX_STACK_LINE(104)
		pass->_program3Ds[stageIndex] = this->_program3Ds->get(key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AGALProgram3DCache_obj,setProgram3D,(void))

Void AGALProgram3DCache_obj::dispose( ){
{
		HX_STACK_PUSH("AGALProgram3DCache::dispose","away3d/core/managers/AGALProgram3DCache.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_LINE(65)
		Dynamic keys = this->_program3Ds->keys();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(66)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
			::String key = __it->next();
			this->destroyProgram(key);
		}
		HX_STACK_LINE(69)
		this->_keys = null();
		HX_STACK_LINE(70)
		this->_program3Ds = null();
		HX_STACK_LINE(71)
		this->_usages = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AGALProgram3DCache_obj,dispose,(void))

Array< ::Dynamic > AGALProgram3DCache_obj::_instances;

int AGALProgram3DCache_obj::_currentId;

::away3d::core::managers::AGALProgram3DCache AGALProgram3DCache_obj::getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("AGALProgram3DCache::getInstance","away3d/core/managers/AGALProgram3DCache.hx",33);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(34)
	int index = stage3DProxy->get_stage3DIndex();		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(36)
	if (((::away3d::core::managers::AGALProgram3DCache_obj::_instances == null()))){
		HX_STACK_LINE(37)
		::away3d::core::managers::AGALProgram3DCache_obj::_instances = ::flash::_Vector::Vector_Impl__obj::_new((int)8,true);
	}
	HX_STACK_LINE(39)
	if (((::away3d::core::managers::AGALProgram3DCache_obj::_instances->__get(index).StaticCast< ::away3d::core::managers::AGALProgram3DCache >() == null()))){
		HX_STACK_LINE(40)
		::away3d::core::managers::AGALProgram3DCache_obj::_instances[index] = ::away3d::core::managers::AGALProgram3DCache_obj::__new(stage3DProxy);
		HX_STACK_LINE(41)
		stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_DISPOSED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,(int)0,true);
		HX_STACK_LINE(42)
		stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,(int)0,true);
		HX_STACK_LINE(43)
		stage3DProxy->addEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_RECREATED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),false,(int)0,true);
	}
	HX_STACK_LINE(45)
	return ::away3d::core::managers::AGALProgram3DCache_obj::_instances->__get(index).StaticCast< ::away3d::core::managers::AGALProgram3DCache >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,getInstance,return )

::away3d::core::managers::AGALProgram3DCache AGALProgram3DCache_obj::getInstanceFromIndex( int index){
	HX_STACK_PUSH("AGALProgram3DCache::getInstanceFromIndex","away3d/core/managers/AGALProgram3DCache.hx",48);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(49)
	if (((::away3d::core::managers::AGALProgram3DCache_obj::_instances->__get(index).StaticCast< ::away3d::core::managers::AGALProgram3DCache >() == null()))){
		HX_STACK_LINE(50)
		hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Instance not created yet!"),null()));
	}
	HX_STACK_LINE(51)
	return ::away3d::core::managers::AGALProgram3DCache_obj::_instances->__get(index).StaticCast< ::away3d::core::managers::AGALProgram3DCache >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,getInstanceFromIndex,return )

Void AGALProgram3DCache_obj::onContext3DDisposed( ::away3d::events::Stage3DEvent event){
{
		HX_STACK_PUSH("AGALProgram3DCache::onContext3DDisposed","away3d/core/managers/AGALProgram3DCache.hx",54);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(55)
		::away3d::core::managers::Stage3DProxy stage3DProxy = hx::TCast< away3d::core::managers::Stage3DProxy >::cast(event->get_target());		HX_STACK_VAR(stage3DProxy,"stage3DProxy");
		HX_STACK_LINE(56)
		int index = stage3DProxy->get_stage3DIndex();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(57)
		::away3d::core::managers::AGALProgram3DCache_obj::_instances->__get(index).StaticCast< ::away3d::core::managers::AGALProgram3DCache >()->dispose();
		HX_STACK_LINE(58)
		::away3d::core::managers::AGALProgram3DCache_obj::_instances[index] = null();
		HX_STACK_LINE(59)
		stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_DISPOSED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
		HX_STACK_LINE(60)
		stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_CREATED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
		HX_STACK_LINE(61)
		stage3DProxy->removeEventListener(::away3d::events::Stage3DEvent_obj::CONTEXT3D_RECREATED,::away3d::core::managers::AGALProgram3DCache_obj::onContext3DDisposed_dyn(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALProgram3DCache_obj,onContext3DDisposed,(void))


AGALProgram3DCache_obj::AGALProgram3DCache_obj()
{
}

void AGALProgram3DCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALProgram3DCache);
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_usages,"_usages");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_END_CLASS();
}

void AGALProgram3DCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_usages,"_usages");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
}

Dynamic AGALProgram3DCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { return _ids; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_usages") ) { return _usages; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { return _instances; }
		if (HX_FIELD_EQ(inName,"_currentId") ) { return _currentId; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { return _program3Ds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setProgram3D") ) { return setProgram3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeProgram3D") ) { return freeProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return _stage3DProxy; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyProgram") ) { return destroyProgram_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onContext3DDisposed") ) { return onContext3DDisposed_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getInstanceFromIndex") ) { return getInstanceFromIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGALProgram3DCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_usages") ) { _usages=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentId") ) { _currentId=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { _program3Ds=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast< ::away3d::core::managers::Stage3DProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AGALProgram3DCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_usages"));
	outFields->push(HX_CSTRING("_ids"));
	outFields->push(HX_CSTRING("_program3Ds"));
	outFields->push(HX_CSTRING("_stage3DProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instances"),
	HX_CSTRING("_currentId"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("getInstanceFromIndex"),
	HX_CSTRING("onContext3DDisposed"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getKey"),
	HX_CSTRING("destroyProgram"),
	HX_CSTRING("freeProgram3D"),
	HX_CSTRING("setProgram3D"),
	HX_CSTRING("dispose"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_usages"),
	HX_CSTRING("_ids"),
	HX_CSTRING("_program3Ds"),
	HX_CSTRING("_stage3DProxy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALProgram3DCache_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AGALProgram3DCache_obj::_instances,"_instances");
	HX_MARK_MEMBER_NAME(AGALProgram3DCache_obj::_currentId,"_currentId");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALProgram3DCache_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AGALProgram3DCache_obj::_instances,"_instances");
	HX_VISIT_MEMBER_NAME(AGALProgram3DCache_obj::_currentId,"_currentId");
};

Class AGALProgram3DCache_obj::__mClass;

void AGALProgram3DCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.core.managers.AGALProgram3DCache"), hx::TCanCast< AGALProgram3DCache_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGALProgram3DCache_obj::__boot()
{
	_currentId= (int)0;
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
