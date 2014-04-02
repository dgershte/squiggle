#ifndef INCLUDED_away3d_errors_AbstractMethodError
#define INCLUDED_away3d_errors_AbstractMethodError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/errors/Error.h>
HX_DECLARE_CLASS2(away3d,errors,AbstractMethodError)
HX_DECLARE_CLASS2(flash,errors,Error)
namespace away3d{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  AbstractMethodError_obj : public ::flash::errors::Error_obj{
	public:
		typedef ::flash::errors::Error_obj super;
		typedef AbstractMethodError_obj OBJ_;
		AbstractMethodError_obj();
		Void __construct(::String message,hx::Null< int >  __o_id);

	public:
		static hx::ObjectPtr< AbstractMethodError_obj > __new(::String message,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AbstractMethodError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AbstractMethodError"); }

};

} // end namespace away3d
} // end namespace errors

#endif /* INCLUDED_away3d_errors_AbstractMethodError */ 
