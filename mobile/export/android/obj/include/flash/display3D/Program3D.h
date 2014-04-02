#ifndef INCLUDED_flash_display3D_Program3D
#define INCLUDED_flash_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLProgram)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  Program3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();
		Void __construct(::openfl::gl::GLProgram program);

	public:
		static hx::ObjectPtr< Program3D_obj > __new(::openfl::gl::GLProgram program);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Program3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Program3D"); }

		virtual Void upload( ::openfl::gl::GLShader vertexShader,::openfl::gl::GLShader fragmentShader);
		Dynamic upload_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		::openfl::gl::GLProgram glProgram;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Program3D */ 
