#ifndef INCLUDED_flash_display3D_textures_Texture
#define INCLUDED_flash_display3D_textures_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display3D/textures/TextureBase.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
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


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::flash::display3D::textures::TextureBase_obj{
	public:
		typedef ::flash::display3D::textures::TextureBase_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::openfl::gl::GLTexture glTexture,bool optimizeForRenderToTexture,int width,int height);

	public:
		static hx::ObjectPtr< Texture_obj > __new(::openfl::gl::GLTexture glTexture,bool optimizeForRenderToTexture,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		virtual Void uploadFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::flash::display::BitmapData bitmapData,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadCompressedTextureFromByteArray( ::flash::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		bool optimizeForRenderToTexture;
};

} // end namespace flash
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_flash_display3D_textures_Texture */ 
