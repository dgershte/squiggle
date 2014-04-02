#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#define INCLUDED_away3d_materials_compilation_ShaderRegisterData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  ShaderRegisterData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderRegisterData_obj OBJ_;
		ShaderRegisterData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShaderRegisterData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderRegisterData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderRegisterData"); }

		::away3d::materials::compilation::ShaderRegisterElement bitangent;
		::away3d::materials::compilation::ShaderRegisterElement viewDirFragment;
		::away3d::materials::compilation::ShaderRegisterElement normalFragment;
		::away3d::materials::compilation::ShaderRegisterElement projectionFragment;
		::away3d::materials::compilation::ShaderRegisterElement commons;
		::away3d::materials::compilation::ShaderRegisterElement animatedTangent;
		::away3d::materials::compilation::ShaderRegisterElement animatedNormal;
		::away3d::materials::compilation::ShaderRegisterElement tangentInput;
		::away3d::materials::compilation::ShaderRegisterElement normalInput;
		::away3d::materials::compilation::ShaderRegisterElement localPosition;
		::away3d::materials::compilation::ShaderRegisterElement globalPositionVarying;
		::away3d::materials::compilation::ShaderRegisterElement globalPositionVertex;
		::away3d::materials::compilation::ShaderRegisterElement shadedTarget;
		::away3d::materials::compilation::ShaderRegisterElement viewDirVarying;
		::away3d::materials::compilation::ShaderRegisterElement secondaryUVVarying;
		::away3d::materials::compilation::ShaderRegisterElement uvVarying;
		::away3d::materials::compilation::ShaderRegisterElement bitangentVarying;
		::away3d::materials::compilation::ShaderRegisterElement tangentVarying;
		::away3d::materials::compilation::ShaderRegisterElement normalVarying;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterData */ 
