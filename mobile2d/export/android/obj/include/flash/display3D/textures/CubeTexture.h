#ifndef INCLUDED_flash_display3D_textures_CubeTexture
#define INCLUDED_flash_display3D_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display3D/textures/TextureBase.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flash,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLTexture)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flash{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  CubeTexture_obj : public ::flash::display3D::textures::TextureBase_obj{
	public:
		typedef ::flash::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();
		Void __construct(::openfl::gl::GLTexture glTexture,int size);

	public:
		static hx::ObjectPtr< CubeTexture_obj > __new(::openfl::gl::GLTexture glTexture,int size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubeTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubeTexture"); }

		virtual ::openfl::gl::GLTexture glTextureAt( int index);
		Dynamic glTextureAt_dyn();

		virtual Void uploadFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::flash::display::BitmapData data,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadCompressedTextureFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		Array< ::Dynamic > _textures;
		int size;
};

} // end namespace flash
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_flash_display3D_textures_CubeTexture */ 
