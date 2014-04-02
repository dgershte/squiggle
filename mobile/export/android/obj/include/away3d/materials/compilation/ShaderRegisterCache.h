#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#define INCLUDED_away3d_materials_compilation_ShaderRegisterCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,RegisterPool)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  ShaderRegisterCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderRegisterCache_obj OBJ_;
		ShaderRegisterCache_obj();
		Void __construct(::String profile);

	public:
		static hx::ObjectPtr< ShaderRegisterCache_obj > __new(::String profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderRegisterCache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderRegisterCache"); }

		virtual int get_numUsedVaryings( );
		Dynamic get_numUsedVaryings_dyn();

		virtual int get_numUsedTextures( );
		Dynamic get_numUsedTextures_dyn();

		virtual int get_numUsedStreams( );
		Dynamic get_numUsedStreams_dyn();

		virtual int get_numUsedFragmentConstants( );
		Dynamic get_numUsedFragmentConstants_dyn();

		virtual int get_numUsedVertexConstants( );
		Dynamic get_numUsedVertexConstants_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement get_fragmentOutputRegister( );
		Dynamic get_fragmentOutputRegister_dyn();

		virtual int set_fragmentConstantOffset( int value);
		Dynamic set_fragmentConstantOffset_dyn();

		virtual int get_fragmentConstantOffset( );
		Dynamic get_fragmentConstantOffset_dyn();

		virtual int set_varyingsOffset( int value);
		Dynamic set_varyingsOffset_dyn();

		virtual int get_varyingsOffset( );
		Dynamic get_varyingsOffset_dyn();

		virtual int set_vertexAttributesOffset( int value);
		Dynamic set_vertexAttributesOffset_dyn();

		virtual int get_vertexAttributesOffset( );
		Dynamic get_vertexAttributesOffset_dyn();

		virtual int set_vertexConstantOffset( int vertexConstantOffset);
		Dynamic set_vertexConstantOffset_dyn();

		virtual int get_vertexConstantOffset( );
		Dynamic get_vertexConstantOffset_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeTextureReg( );
		Dynamic getFreeTextureReg_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexAttribute( );
		Dynamic getFreeVertexAttribute_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexSingleTemp( );
		Dynamic getFreeVertexSingleTemp_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexVectorTemp( );
		Dynamic getFreeVertexVectorTemp_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexConstant( );
		Dynamic getFreeVertexConstant_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentConstant( );
		Dynamic getFreeFragmentConstant_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeVarying( );
		Dynamic getFreeVarying_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentSingleTemp( );
		Dynamic getFreeFragmentSingleTemp_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentVectorTemp( );
		Dynamic getFreeFragmentVectorTemp_dyn();

		virtual Void removeVertexTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _register);
		Dynamic removeVertexTempUsage_dyn();

		virtual Void addVertexTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount);
		Dynamic addVertexTempUsages_dyn();

		virtual Void removeFragmentTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _register);
		Dynamic removeFragmentTempUsage_dyn();

		virtual Void addFragmentTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount);
		Dynamic addFragmentTempUsages_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		::String _profile;
		int _numUsedVaryings;
		int _numUsedTextures;
		int _numUsedStreams;
		int _numUsedFragmentConstants;
		int _numUsedVertexConstants;
		::away3d::materials::compilation::ShaderRegisterElement _vertexOutputRegister;
		::away3d::materials::compilation::ShaderRegisterElement _fragmentOutputRegister;
		int _fragmentConstantOffset;
		int _varyingsOffset;
		int _vertexAttributesOffset;
		int _vertexConstantOffset;
		::away3d::materials::compilation::RegisterPool _vertexAttributesCache;
		::away3d::materials::compilation::RegisterPool _textureCache;
		::away3d::materials::compilation::RegisterPool _vertexConstantsCache;
		::away3d::materials::compilation::RegisterPool _fragmentConstantsCache;
		::away3d::materials::compilation::RegisterPool _varyingCache;
		::away3d::materials::compilation::RegisterPool _vertexTempCache;
		::away3d::materials::compilation::RegisterPool _fragmentTempCache;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterCache */ 
