#ifndef INCLUDED_away3d_core_managers_TouchPoint
#define INCLUDED_away3d_core_managers_TouchPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,TouchPoint)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  TouchPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchPoint_obj OBJ_;
		TouchPoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TouchPoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchPoint"); }

		Float y;
		Float x;
		int id;
};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_TouchPoint */ 
