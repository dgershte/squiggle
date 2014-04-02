#ifndef INCLUDED_flash_display3D_shaders_AGLSLShaderUtils
#define INCLUDED_flash_display3D_shaders_AGLSLShaderUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,Context3DProgramType)
HX_DECLARE_CLASS3(flash,display3D,shaders,AGLSLShaderUtils)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flash{
namespace display3D{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  AGLSLShaderUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGLSLShaderUtils_obj OBJ_;
		AGLSLShaderUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGLSLShaderUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGLSLShaderUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGLSLShaderUtils"); }

		static ::flash::utils::ByteArray compile( ::String programType,::String source);
		static Dynamic compile_dyn();

		static ::openfl::gl::GLShader createShader( ::flash::display3D::Context3DProgramType type,::String shaderSource);
		static Dynamic createShader_dyn();

};

} // end namespace flash
} // end namespace display3D
} // end namespace shaders

#endif /* INCLUDED_flash_display3D_shaders_AGLSLShaderUtils */ 
