#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
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
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DTextureFormat
#include <flash/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace textures{

Void TextureProxyBase_obj::__construct()
{
HX_STACK_PUSH("TextureProxyBase::new","away3d/textures/TextureProxyBase.hx",28);
{
	HX_STACK_LINE(29)
	this->_format = ::flash::display3D::Context3DTextureFormat_obj::BGRA;
	HX_STACK_LINE(30)
	this->_hasMipmaps = true;
	HX_STACK_LINE(31)
	this->_textures = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(32)
	this->_dirty = ::flash::_Vector::Vector_Impl__obj::_new((int)8,null());
	HX_STACK_LINE(33)
	super::__construct(null());
}
;
	return null();
}

TextureProxyBase_obj::~TextureProxyBase_obj() { }

Dynamic TextureProxyBase_obj::__CreateEmpty() { return  new TextureProxyBase_obj; }
hx::ObjectPtr< TextureProxyBase_obj > TextureProxyBase_obj::__new()
{  hx::ObjectPtr< TextureProxyBase_obj > result = new TextureProxyBase_obj();
	result->__construct();
	return result;}

Dynamic TextureProxyBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureProxyBase_obj > result = new TextureProxyBase_obj();
	result->__construct();
	return result;}

hx::Object *TextureProxyBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::events::IEventDispatcher_obj)) return operator ::flash::events::IEventDispatcher_obj *();
	if (inType==typeid( ::away3d::library::assets::IAsset_obj)) return operator ::away3d::library::assets::IAsset_obj *();
	return super::__ToInterface(inType);
}

Void TextureProxyBase_obj::dispose( ){
{
		HX_STACK_PUSH("TextureProxyBase::dispose","away3d/textures/TextureProxyBase.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(124)
		while(((i < (int)8))){
			HX_STACK_LINE(125)
			if (((this->_textures->__get(i).StaticCast< ::flash::display3D::textures::TextureBase >() != null()))){
				HX_STACK_LINE(125)
				this->_textures->__get(i).StaticCast< ::flash::display3D::textures::TextureBase >()->dispose();
			}
			HX_STACK_LINE(126)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,dispose,(void))

::flash::display3D::textures::TextureBase TextureProxyBase_obj::createTexture( ::flash::display3D::Context3D context){
	HX_STACK_PUSH("TextureProxyBase::createTexture","away3d/textures/TextureProxyBase.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context,"context");
	HX_STACK_LINE(114)
	hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	HX_STACK_LINE(115)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,createTexture,return )

Void TextureProxyBase_obj::invalidateSize( ){
{
		HX_STACK_PUSH("TextureProxyBase::invalidateSize","away3d/textures/TextureProxyBase.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		::flash::display3D::textures::TextureBase tex;		HX_STACK_VAR(tex,"tex");
		HX_STACK_LINE(101)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(102)
		while(((i < (int)8))){
			HX_STACK_LINE(103)
			tex = this->_textures->__get(i).StaticCast< ::flash::display3D::textures::TextureBase >();
			HX_STACK_LINE(104)
			if (((tex != null()))){
				HX_STACK_LINE(105)
				tex->dispose();
				HX_STACK_LINE(106)
				this->_textures[i] = null();
				HX_STACK_LINE(107)
				this->_dirty[i] = null();
			}
			HX_STACK_LINE(109)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,invalidateSize,(void))

Void TextureProxyBase_obj::invalidateContent( ){
{
		HX_STACK_PUSH("TextureProxyBase::invalidateContent","away3d/textures/TextureProxyBase.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(93)
		while(((i < (int)8))){
			HX_STACK_LINE(94)
			this->_dirty[i] = null();
			HX_STACK_LINE(95)
			++(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,invalidateContent,(void))

Void TextureProxyBase_obj::setSize( int width,int height){
{
		HX_STACK_PUSH("TextureProxyBase::setSize","away3d/textures/TextureProxyBase.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(86)
		if (((bool((this->_width != width)) || bool((this->_height != height))))){
			HX_STACK_LINE(86)
			this->invalidateSize();
		}
		HX_STACK_LINE(87)
		this->_width = width;
		HX_STACK_LINE(88)
		this->_height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureProxyBase_obj,setSize,(void))

Void TextureProxyBase_obj::uploadContent( ::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("TextureProxyBase::uploadContent","away3d/textures/TextureProxyBase.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(81)
		hx::Throw (::away3d::errors::AbstractMethodError_obj::__new(null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,uploadContent,(void))

::flash::display3D::textures::TextureBase TextureProxyBase_obj::getTextureForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
	HX_STACK_PUSH("TextureProxyBase::getTextureForStage3D","away3d/textures/TextureProxyBase.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stage3DProxy,"stage3DProxy");
	HX_STACK_LINE(69)
	int contextIndex = stage3DProxy->_stage3DIndex;		HX_STACK_VAR(contextIndex,"contextIndex");
	HX_STACK_LINE(70)
	::flash::display3D::textures::TextureBase tex = this->_textures->__get(contextIndex).StaticCast< ::flash::display3D::textures::TextureBase >();		HX_STACK_VAR(tex,"tex");
	HX_STACK_LINE(71)
	::flash::display3D::Context3D context = stage3DProxy->_context3D;		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(72)
	if (((bool((tex == null())) || bool((this->_dirty->__get(contextIndex).StaticCast< ::flash::display3D::Context3D >() != context))))){
		HX_STACK_LINE(73)
		this->_textures[contextIndex] = tex = this->createTexture(context);
		HX_STACK_LINE(74)
		this->_dirty[contextIndex] = context;
		HX_STACK_LINE(75)
		this->uploadContent(tex);
	}
	HX_STACK_LINE(78)
	return tex;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,getTextureForStage3D,return )

int TextureProxyBase_obj::set_height( int value){
	HX_STACK_PUSH("TextureProxyBase::set_height","away3d/textures/TextureProxyBase.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(63)
	if (((value == this->_height))){
		HX_STACK_LINE(63)
		return value;
	}
	HX_STACK_LINE(64)
	this->_height = value;
	HX_STACK_LINE(65)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,set_height,return )

int TextureProxyBase_obj::set_width( int value){
	HX_STACK_PUSH("TextureProxyBase::set_width","away3d/textures/TextureProxyBase.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(57)
	if (((value == this->_width))){
		HX_STACK_LINE(57)
		return value;
	}
	HX_STACK_LINE(58)
	this->_width = value;
	HX_STACK_LINE(59)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureProxyBase_obj,set_width,return )

int TextureProxyBase_obj::get_height( ){
	HX_STACK_PUSH("TextureProxyBase::get_height","away3d/textures/TextureProxyBase.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_height,return )

int TextureProxyBase_obj::get_width( ){
	HX_STACK_PUSH("TextureProxyBase::get_width","away3d/textures/TextureProxyBase.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_width,return )

::String TextureProxyBase_obj::get_assetType( ){
	HX_STACK_PUSH("TextureProxyBase::get_assetType","away3d/textures/TextureProxyBase.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return ::away3d::library::assets::AssetType_obj::TEXTURE;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_assetType,return )

::flash::display3D::Context3DTextureFormat TextureProxyBase_obj::get_format( ){
	HX_STACK_PUSH("TextureProxyBase::get_format","away3d/textures/TextureProxyBase.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return this->_format;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_format,return )

bool TextureProxyBase_obj::get_hasMipMaps( ){
	HX_STACK_PUSH("TextureProxyBase::get_hasMipMaps","away3d/textures/TextureProxyBase.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return this->_hasMipmaps;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureProxyBase_obj,get_hasMipMaps,return )


TextureProxyBase_obj::TextureProxyBase_obj()
{
}

void TextureProxyBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureProxyBase);
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_dirty,"_dirty");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	HX_MARK_MEMBER_NAME(_hasMipmaps,"_hasMipmaps");
	HX_MARK_MEMBER_NAME(_format,"_format");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureProxyBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_dirty,"_dirty");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	HX_VISIT_MEMBER_NAME(_hasMipmaps,"_hasMipmaps");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TextureProxyBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_dirty") ) { return _dirty; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"format") ) { return get_format(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		if (HX_FIELD_EQ(inName,"assetType") ) { return get_assetType(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMipMaps") ) { return get_hasMipMaps(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasMipmaps") ) { return _hasMipmaps; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return uploadContent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return get_assetType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidateSize") ) { return invalidateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasMipMaps") ) { return get_hasMipMaps_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidateContent") ) { return invalidateContent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTextureForStage3D") ) { return getTextureForStage3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureProxyBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dirty") ) { _dirty=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::display3D::Context3DTextureFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasMipmaps") ) { _hasMipmaps=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureProxyBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_dirty"));
	outFields->push(HX_CSTRING("_textures"));
	outFields->push(HX_CSTRING("_hasMipmaps"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("assetType"));
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("hasMipMaps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("invalidateSize"),
	HX_CSTRING("invalidateContent"),
	HX_CSTRING("setSize"),
	HX_CSTRING("uploadContent"),
	HX_CSTRING("getTextureForStage3D"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_assetType"),
	HX_CSTRING("get_format"),
	HX_CSTRING("get_hasMipMaps"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_dirty"),
	HX_CSTRING("_textures"),
	HX_CSTRING("_hasMipmaps"),
	HX_CSTRING("_format"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureProxyBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureProxyBase_obj::__mClass,"__mClass");
};

Class TextureProxyBase_obj::__mClass;

void TextureProxyBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.TextureProxyBase"), hx::TCanCast< TextureProxyBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureProxyBase_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
