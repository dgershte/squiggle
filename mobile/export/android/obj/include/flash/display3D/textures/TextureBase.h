#ifndef INCLUDED_flash_display3D_textures_TextureBase
#define INCLUDED_flash_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLTexture)
namespace flash{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  TextureBase_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();
		Void __construct(::openfl::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		static hx::ObjectPtr< TextureBase_obj > __new(::openfl::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureBase"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		::openfl::gl::GLTexture glTexture;
		int height;
		int width;
};

} // end namespace flash
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_flash_display3D_textures_TextureBase */ 
