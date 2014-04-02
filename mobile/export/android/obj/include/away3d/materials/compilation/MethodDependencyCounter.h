#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#define INCLUDED_away3d_materials_compilation_MethodDependencyCounter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,MethodDependencyCounter)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  MethodDependencyCounter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MethodDependencyCounter_obj OBJ_;
		MethodDependencyCounter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MethodDependencyCounter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MethodDependencyCounter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MethodDependencyCounter"); }

		virtual Void addWorldSpaceDependencies( bool fragmentLights);
		Dynamic addWorldSpaceDependencies_dyn();

		virtual int get_globalPosDependencies( );
		Dynamic get_globalPosDependencies_dyn();

		virtual int get_secondaryUVDependencies( );
		Dynamic get_secondaryUVDependencies_dyn();

		virtual int get_uvDependencies( );
		Dynamic get_uvDependencies_dyn();

		virtual int get_viewDirDependencies( );
		Dynamic get_viewDirDependencies_dyn();

		virtual int get_normalDependencies( );
		Dynamic get_normalDependencies_dyn();

		virtual int get_projectionDependencies( );
		Dynamic get_projectionDependencies_dyn();

		virtual bool get_usesGlobalPosFragment( );
		Dynamic get_usesGlobalPosFragment_dyn();

		virtual int get_tangentDependencies( );
		Dynamic get_tangentDependencies_dyn();

		virtual Void includeMethodVO( ::away3d::materials::methods::MethodVO methodVO);
		Dynamic includeMethodVO_dyn();

		virtual Void setPositionedLights( int numPointLights,int lightSourceMask);
		Dynamic setPositionedLights_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		int _lightSourceMask;
		int _numPointLights;
		bool _usesGlobalPosFragment;
		int _tangentDependencies;
		int _globalPosDependencies;
		int _secondaryUVDependencies;
		int _uvDependencies;
		int _viewDirDependencies;
		int _normalDependencies;
		int _projectionDependencies;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_MethodDependencyCounter */ 
