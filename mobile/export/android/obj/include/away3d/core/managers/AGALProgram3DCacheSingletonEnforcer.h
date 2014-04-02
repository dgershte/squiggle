#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCacheSingletonEnforcer
#define INCLUDED_away3d_core_managers_AGALProgram3DCacheSingletonEnforcer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,AGALProgram3DCacheSingletonEnforcer)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  AGALProgram3DCacheSingletonEnforcer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGALProgram3DCacheSingletonEnforcer_obj OBJ_;
		AGALProgram3DCacheSingletonEnforcer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGALProgram3DCacheSingletonEnforcer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGALProgram3DCacheSingletonEnforcer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGALProgram3DCacheSingletonEnforcer"); }

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_AGALProgram3DCacheSingletonEnforcer */ 
