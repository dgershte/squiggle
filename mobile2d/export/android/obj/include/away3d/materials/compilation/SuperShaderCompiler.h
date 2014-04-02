#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#define INCLUDED_away3d_materials_compilation_SuperShaderCompiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/compilation/ShaderCompiler.h>
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,compilation,SuperShaderCompiler)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  SuperShaderCompiler_obj : public ::away3d::materials::compilation::ShaderCompiler_obj{
	public:
		typedef ::away3d::materials::compilation::ShaderCompiler_obj super;
		typedef SuperShaderCompiler_obj OBJ_;
		SuperShaderCompiler_obj();
		Void __construct(::String profile);

	public:
		static hx::ObjectPtr< SuperShaderCompiler_obj > __new(::String profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SuperShaderCompiler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SuperShaderCompiler"); }

		virtual Void compileLightProbeCode( );
		Dynamic compileLightProbeCode_dyn();

		virtual Void compilePointLightCode( );
		Dynamic compilePointLightCode_dyn();

		virtual Void compileDirectionalLightCode( );
		Dynamic compileDirectionalLightCode_dyn();

		virtual Void initLightRegisters( );
		Dynamic initLightRegisters_dyn();

		virtual Void compileLightingCode( );

		virtual Void compileViewDirCode( );

		virtual Void compileTangentNormalMapFragmentCode( );
		Dynamic compileTangentNormalMapFragmentCode_dyn();

		virtual Void compileTangentVertexCode( Array< ::Dynamic > matrix);
		Dynamic compileTangentVertexCode_dyn();

		virtual Void createNormalRegisters( );

		virtual Void compileNormalCode( );

		virtual Void calculateDependencies( );

		virtual Void initLightData( );

		Array< ::Dynamic > _dirLightRegisters;
		Array< ::Dynamic > _pointLightRegisters;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_SuperShaderCompiler */ 
