#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#define INCLUDED_away3d_animators_data_ParticleAnimationData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,data,ParticleAnimationData)
HX_DECLARE_CLASS4(away3d,core,base,data,ParticleData)
namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ParticleAnimationData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleAnimationData_obj OBJ_;
		ParticleAnimationData_obj();
		Void __construct(int index,Float startTime,Float duration,Float delay,::away3d::core::base::data::ParticleData particle);

	public:
		static hx::ObjectPtr< ParticleAnimationData_obj > __new(int index,Float startTime,Float duration,Float delay,::away3d::core::base::data::ParticleData particle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ParticleAnimationData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParticleAnimationData"); }

		int numVertices;
		int startVertexIndex;
		Float delay;
		Float duration;
		Float totalTime;
		Float startTime;
		int index;
};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_ParticleAnimationData */ 
