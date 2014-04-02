#ifndef INCLUDED_away3d_core_base_data_ParticleData
#define INCLUDED_away3d_core_base_data_ParticleData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS4(away3d,core,base,data,ParticleData)
namespace away3d{
namespace core{
namespace base{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ParticleData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleData_obj OBJ_;
		ParticleData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ParticleData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ParticleData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParticleData"); }

		::away3d::core::base::CompactSubGeometry subGeometry;
		int startVertexIndex;
		int numVertices;
		int particleIndex;
};

} // end namespace away3d
} // end namespace core
} // end namespace base
} // end namespace data

#endif /* INCLUDED_away3d_core_base_data_ParticleData */ 
