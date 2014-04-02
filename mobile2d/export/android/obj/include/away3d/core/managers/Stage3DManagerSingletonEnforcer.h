#ifndef INCLUDED_away3d_core_managers_Stage3DManagerSingletonEnforcer
#define INCLUDED_away3d_core_managers_Stage3DManagerSingletonEnforcer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManagerSingletonEnforcer)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Stage3DManagerSingletonEnforcer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stage3DManagerSingletonEnforcer_obj OBJ_;
		Stage3DManagerSingletonEnforcer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Stage3DManagerSingletonEnforcer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stage3DManagerSingletonEnforcer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage3DManagerSingletonEnforcer"); }

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Stage3DManagerSingletonEnforcer */ 
