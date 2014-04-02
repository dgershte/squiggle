#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapCubeTexture
#include <away3d/textures/BitmapCubeTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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

Void BitmapCubeTexture_obj::__construct(::flash::display::BitmapData posX,::flash::display::BitmapData negX,::flash::display::BitmapData posY,::flash::display::BitmapData negY,::flash::display::BitmapData posZ,::flash::display::BitmapData negZ)
{
HX_STACK_PUSH("BitmapCubeTexture::new","away3d/textures/BitmapCubeTexture.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_bitmapDatas = ::flash::_Vector::Vector_Impl__obj::_new((int)6,true);
	HX_STACK_LINE(25)
	this->testSize(this->_bitmapDatas[(int)0] = posX);
	HX_STACK_LINE(26)
	this->testSize(this->_bitmapDatas[(int)1] = negX);
	HX_STACK_LINE(27)
	this->testSize(this->_bitmapDatas[(int)2] = posY);
	HX_STACK_LINE(28)
	this->testSize(this->_bitmapDatas[(int)3] = negY);
	HX_STACK_LINE(29)
	this->testSize(this->_bitmapDatas[(int)4] = posZ);
	HX_STACK_LINE(30)
	this->testSize(this->_bitmapDatas[(int)5] = negZ);
	HX_STACK_LINE(31)
	this->setSize(posX->get_width(),posX->get_height());
}
;
	return null();
}

BitmapCubeTexture_obj::~BitmapCubeTexture_obj() { }

Dynamic BitmapCubeTexture_obj::__CreateEmpty() { return  new BitmapCubeTexture_obj; }
hx::ObjectPtr< BitmapCubeTexture_obj > BitmapCubeTexture_obj::__new(::flash::display::BitmapData posX,::flash::display::BitmapData negX,::flash::display::BitmapData posY,::flash::display::BitmapData negY,::flash::display::BitmapData posZ,::flash::display::BitmapData negZ)
{  hx::ObjectPtr< BitmapCubeTexture_obj > result = new BitmapCubeTexture_obj();
	result->__construct(posX,negX,posY,negY,posZ,negZ);
	return result;}

Dynamic BitmapCubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapCubeTexture_obj > result = new BitmapCubeTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void BitmapCubeTexture_obj::uploadContent( ::flash::display3D::textures::TextureBase texture){
{
		HX_STACK_PUSH("BitmapCubeTexture::uploadContent","away3d/textures/BitmapCubeTexture.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(136)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(137)
		while(((i < (int)6))){
			HX_STACK_LINE(138)
			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(this->_bitmapDatas->__get(i).StaticCast< ::flash::display::BitmapData >(),texture,null(),this->_bitmapDatas->__get(i).StaticCast< ::flash::display::BitmapData >()->get_transparent(),i);
			HX_STACK_LINE(139)
			++(i);
		}
	}
return null();
}


Void BitmapCubeTexture_obj::testSize( ::flash::display::BitmapData value){
{
		HX_STACK_PUSH("BitmapCubeTexture::testSize","away3d/textures/BitmapCubeTexture.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(131)
		if (((value->get_width() != value->get_height()))){
			HX_STACK_LINE(131)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("BitmapData should have equal width and height!"),null()));
		}
		HX_STACK_LINE(132)
		if ((!(::away3d::tools::utils::TextureUtils_obj::isBitmapDataValid(value)))){
			HX_STACK_LINE(132)
			hx::Throw (::flash::errors::Error_obj::__new(HX_CSTRING("Invalid bitmapData: Width and height must be power of 2 and cannot exceed 2048"),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,testSize,(void))

::flash::display::BitmapData BitmapCubeTexture_obj::set_negativeZ( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_negativeZ","away3d/textures/BitmapCubeTexture.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(123)
	this->testSize(value);
	HX_STACK_LINE(124)
	this->invalidateContent();
	HX_STACK_LINE(125)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(126)
	this->_bitmapDatas[(int)5] = value;
	HX_STACK_LINE(127)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_negativeZ,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_negativeZ( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_negativeZ","away3d/textures/BitmapCubeTexture.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(118)
	return this->_bitmapDatas->__get((int)5).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_negativeZ,return )

::flash::display::BitmapData BitmapCubeTexture_obj::set_positiveZ( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_positiveZ","away3d/textures/BitmapCubeTexture.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(107)
	this->testSize(value);
	HX_STACK_LINE(108)
	this->invalidateContent();
	HX_STACK_LINE(109)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(110)
	this->_bitmapDatas[(int)4] = value;
	HX_STACK_LINE(111)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_positiveZ,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_positiveZ( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_positiveZ","away3d/textures/BitmapCubeTexture.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->_bitmapDatas->__get((int)4).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_positiveZ,return )

::flash::display::BitmapData BitmapCubeTexture_obj::set_negativeY( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_negativeY","away3d/textures/BitmapCubeTexture.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(91)
	this->testSize(value);
	HX_STACK_LINE(92)
	this->invalidateContent();
	HX_STACK_LINE(93)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(94)
	this->_bitmapDatas[(int)3] = value;
	HX_STACK_LINE(95)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_negativeY,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_negativeY( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_negativeY","away3d/textures/BitmapCubeTexture.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_bitmapDatas->__get((int)3).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_negativeY,return )

::flash::display::BitmapData BitmapCubeTexture_obj::set_positiveY( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_positiveY","away3d/textures/BitmapCubeTexture.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(75)
	this->testSize(value);
	HX_STACK_LINE(76)
	this->invalidateContent();
	HX_STACK_LINE(77)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(78)
	this->_bitmapDatas[(int)2] = value;
	HX_STACK_LINE(79)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_positiveY,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_positiveY( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_positiveY","away3d/textures/BitmapCubeTexture.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->_bitmapDatas->__get((int)2).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_positiveY,return )

::flash::display::BitmapData BitmapCubeTexture_obj::set_negativeX( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_negativeX","away3d/textures/BitmapCubeTexture.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(59)
	this->testSize(value);
	HX_STACK_LINE(60)
	this->invalidateContent();
	HX_STACK_LINE(61)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(62)
	this->_bitmapDatas[(int)1] = value;
	HX_STACK_LINE(63)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_negativeX,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_negativeX( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_negativeX","away3d/textures/BitmapCubeTexture.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->_bitmapDatas->__get((int)1).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_negativeX,return )

::flash::display::BitmapData BitmapCubeTexture_obj::set_positiveX( ::flash::display::BitmapData value){
	HX_STACK_PUSH("BitmapCubeTexture::set_positiveX","away3d/textures/BitmapCubeTexture.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(43)
	this->testSize(value);
	HX_STACK_LINE(44)
	this->invalidateContent();
	HX_STACK_LINE(45)
	this->setSize(value->get_width(),value->get_height());
	HX_STACK_LINE(46)
	this->_bitmapDatas[(int)0] = value;
	HX_STACK_LINE(47)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapCubeTexture_obj,set_positiveX,return )

::flash::display::BitmapData BitmapCubeTexture_obj::get_positiveX( ){
	HX_STACK_PUSH("BitmapCubeTexture::get_positiveX","away3d/textures/BitmapCubeTexture.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return this->_bitmapDatas->__get((int)0).StaticCast< ::flash::display::BitmapData >();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapCubeTexture_obj,get_positiveX,return )


BitmapCubeTexture_obj::BitmapCubeTexture_obj()
{
}

void BitmapCubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapCubeTexture);
	HX_MARK_MEMBER_NAME(_bitmapDatas,"_bitmapDatas");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapCubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bitmapDatas,"_bitmapDatas");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapCubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"testSize") ) { return testSize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"negativeZ") ) { return get_negativeZ(); }
		if (HX_FIELD_EQ(inName,"positiveZ") ) { return get_positiveZ(); }
		if (HX_FIELD_EQ(inName,"negativeY") ) { return get_negativeY(); }
		if (HX_FIELD_EQ(inName,"positiveY") ) { return get_positiveY(); }
		if (HX_FIELD_EQ(inName,"negativeX") ) { return get_negativeX(); }
		if (HX_FIELD_EQ(inName,"positiveX") ) { return get_positiveX(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bitmapDatas") ) { return _bitmapDatas; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return uploadContent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_negativeZ") ) { return set_negativeZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_negativeZ") ) { return get_negativeZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_positiveZ") ) { return set_positiveZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_positiveZ") ) { return get_positiveZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_negativeY") ) { return set_negativeY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_negativeY") ) { return get_negativeY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_positiveY") ) { return set_positiveY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_positiveY") ) { return get_positiveY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_negativeX") ) { return set_negativeX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_negativeX") ) { return get_negativeX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_positiveX") ) { return set_positiveX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_positiveX") ) { return get_positiveX_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapCubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"negativeZ") ) { return set_negativeZ(inValue); }
		if (HX_FIELD_EQ(inName,"positiveZ") ) { return set_positiveZ(inValue); }
		if (HX_FIELD_EQ(inName,"negativeY") ) { return set_negativeY(inValue); }
		if (HX_FIELD_EQ(inName,"positiveY") ) { return set_positiveY(inValue); }
		if (HX_FIELD_EQ(inName,"negativeX") ) { return set_negativeX(inValue); }
		if (HX_FIELD_EQ(inName,"positiveX") ) { return set_positiveX(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bitmapDatas") ) { _bitmapDatas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapCubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bitmapDatas"));
	outFields->push(HX_CSTRING("negativeZ"));
	outFields->push(HX_CSTRING("positiveZ"));
	outFields->push(HX_CSTRING("negativeY"));
	outFields->push(HX_CSTRING("positiveY"));
	outFields->push(HX_CSTRING("negativeX"));
	outFields->push(HX_CSTRING("positiveX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadContent"),
	HX_CSTRING("testSize"),
	HX_CSTRING("set_negativeZ"),
	HX_CSTRING("get_negativeZ"),
	HX_CSTRING("set_positiveZ"),
	HX_CSTRING("get_positiveZ"),
	HX_CSTRING("set_negativeY"),
	HX_CSTRING("get_negativeY"),
	HX_CSTRING("set_positiveY"),
	HX_CSTRING("get_positiveY"),
	HX_CSTRING("set_negativeX"),
	HX_CSTRING("get_negativeX"),
	HX_CSTRING("set_positiveX"),
	HX_CSTRING("get_positiveX"),
	HX_CSTRING("_bitmapDatas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapCubeTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapCubeTexture_obj::__mClass,"__mClass");
};

Class BitmapCubeTexture_obj::__mClass;

void BitmapCubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.textures.BitmapCubeTexture"), hx::TCanCast< BitmapCubeTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapCubeTexture_obj::__boot()
{
}

} // end namespace away3d
} // end namespace textures
