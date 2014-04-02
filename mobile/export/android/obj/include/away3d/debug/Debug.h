#ifndef INCLUDED_away3d_debug_Debug
#define INCLUDED_away3d_debug_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,debug,Debug)
namespace away3d{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Debug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Debug"); }

		static bool active;
		static bool warningsAsErrors;
		static Void clear( );
		static Dynamic clear_dyn();

		static Void delimiter( );
		static Dynamic delimiter_dyn();

		static Void trace( Dynamic message);
		static Dynamic trace_dyn();

		static Void warning( Dynamic message);
		static Dynamic warning_dyn();

		static Void error( Dynamic message);
		static Dynamic error_dyn();

};

} // end namespace away3d
} // end namespace debug

#endif /* INCLUDED_away3d_debug_Debug */ 
