#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#include <flash/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_Texture
#include <flash/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_flash_display3D_textures_TextureBase
#include <flash/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace away3d{
namespace materials{
namespace utils{

Void MipmapGenerator_obj::__construct()
{
	return null();
}

MipmapGenerator_obj::~MipmapGenerator_obj() { }

Dynamic MipmapGenerator_obj::__CreateEmpty() { return  new MipmapGenerator_obj; }
hx::ObjectPtr< MipmapGenerator_obj > MipmapGenerator_obj::__new()
{  hx::ObjectPtr< MipmapGenerator_obj > result = new MipmapGenerator_obj();
	result->__construct();
	return result;}

Dynamic MipmapGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MipmapGenerator_obj > result = new MipmapGenerator_obj();
	result->__construct();
	return result;}

::flash::geom::Matrix MipmapGenerator_obj::_matrix;

::flash::geom::Rectangle MipmapGenerator_obj::_rect;

Void MipmapGenerator_obj::generateMipMaps( ::flash::display::BitmapData source,::flash::display3D::textures::TextureBase target,::flash::display::BitmapData mipmap,hx::Null< bool >  __o_alpha,hx::Null< int >  __o_side){
bool alpha = __o_alpha.Default(false);
int side = __o_side.Default(-1);
	HX_STACK_PUSH("MipmapGenerator::generateMipMaps","away3d/materials/utils/MipmapGenerator.hx",24);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(mipmap,"mipmap");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(side,"side");
{
		HX_STACK_LINE(25)
		int w = source->get_width();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(26)
		int h = source->get_height();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(27)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(28)
		bool regen = (mipmap != null());		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(29)
		if (((mipmap == null()))){
			HX_STACK_LINE(30)
			mipmap = ::flash::display::BitmapData_obj::__new(w,h,alpha,null(),null());
		}
		HX_STACK_LINE(31)
		::away3d::materials::utils::MipmapGenerator_obj::_rect->width = w;
		HX_STACK_LINE(32)
		::away3d::materials::utils::MipmapGenerator_obj::_rect->height = h;
		HX_STACK_LINE(33)
		while(((bool((w >= (int)1)) || bool((h >= (int)1))))){
			HX_STACK_LINE(34)
			if ((alpha)){
				HX_STACK_LINE(34)
				mipmap->fillRect(::away3d::materials::utils::MipmapGenerator_obj::_rect,(int)0);
			}
			HX_STACK_LINE(35)
			::away3d::materials::utils::MipmapGenerator_obj::_matrix->a = (Float(::away3d::materials::utils::MipmapGenerator_obj::_rect->width) / Float(source->get_width()));
			HX_STACK_LINE(36)
			::away3d::materials::utils::MipmapGenerator_obj::_matrix->d = (Float(::away3d::materials::utils::MipmapGenerator_obj::_rect->height) / Float(source->get_height()));
			HX_STACK_LINE(37)
			mipmap->draw(source,::away3d::materials::utils::MipmapGenerator_obj::_matrix,null(),null(),null(),true);
			HX_STACK_LINE(38)
			if ((::Std_obj::is(target,hx::ClassOf< ::flash::display3D::textures::Texture >()))){
				HX_STACK_LINE(38)
				(hx::TCast< flash::display3D::textures::Texture >::cast(target))->uploadFromBitmapData(mipmap,(i)++);
			}
			else{
				HX_STACK_LINE(39)
				(hx::TCast< flash::display3D::textures::CubeTexture >::cast(target))->uploadFromBitmapData(mipmap,side,(i)++);
			}
			HX_STACK_LINE(40)
			hx::ShrEq(w,(int)1);
			HX_STACK_LINE(41)
			hx::ShrEq(h,(int)1);
			HX_STACK_LINE(42)
			::away3d::materials::utils::MipmapGenerator_obj::_rect->width = (  (((w > (int)1))) ? Float(w) : Float((int)1) );
			HX_STACK_LINE(43)
			::away3d::materials::utils::MipmapGenerator_obj::_rect->height = (  (((h > (int)1))) ? Float(h) : Float((int)1) );
		}
		HX_STACK_LINE(46)
		if ((!(regen))){
			HX_STACK_LINE(46)
			mipmap->dispose();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(MipmapGenerator_obj,generateMipMaps,(void))


MipmapGenerator_obj::MipmapGenerator_obj()
{
}

void MipmapGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MipmapGenerator);
	HX_MARK_END_CLASS();
}

void MipmapGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MipmapGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateMipMaps") ) { return generateMipMaps_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MipmapGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MipmapGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_matrix"),
	HX_CSTRING("_rect"),
	HX_CSTRING("generateMipMaps"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MipmapGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MipmapGenerator_obj::_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(MipmapGenerator_obj::_rect,"_rect");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MipmapGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MipmapGenerator_obj::_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(MipmapGenerator_obj::_rect,"_rect");
};

Class MipmapGenerator_obj::__mClass;

void MipmapGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.materials.utils.MipmapGenerator"), hx::TCanCast< MipmapGenerator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MipmapGenerator_obj::__boot()
{
	_matrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	_rect= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace away3d
} // end namespace materials
} // end namespace utils
