#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#define INCLUDED_away3d_tools_utils_GeomUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,tools,utils,GeomUtil)
namespace away3d{
namespace tools{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GeomUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeomUtil_obj OBJ_;
		GeomUtil_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GeomUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GeomUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeomUtil"); }

		static Array< ::Dynamic > fromVectors( Array< Float > verts,Array< int > indices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents,Array< Float > weights,Array< Float > jointIndices,hx::Null< int >  triangleOffset);
		static Dynamic fromVectors_dyn();

		static ::away3d::core::base::CompactSubGeometry constructSubGeometry( Array< Float > verts,Array< int > indices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents,Array< Float > weights,Array< Float > jointIndices,int triangleOffset);
		static Dynamic constructSubGeometry_dyn();

		static Array< Float > interleaveBuffers( int numVertices,Array< Float > vertices,Array< Float > normals,Array< Float > tangents,Array< Float > uvs,Array< Float > suvs);
		static Dynamic interleaveBuffers_dyn();

		static int getMeshSubgeometryIndex( ::away3d::core::base::ISubGeometry subGeometry);
		static Dynamic getMeshSubgeometryIndex_dyn();

		static int getMeshSubMeshIndex( ::away3d::core::base::SubMesh subMesh);
		static Dynamic getMeshSubMeshIndex_dyn();

};

} // end namespace away3d
} // end namespace tools
} // end namespace utils

#endif /* INCLUDED_away3d_tools_utils_GeomUtil */ 
