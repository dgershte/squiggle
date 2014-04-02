#ifndef INCLUDED_away3d_errors_CastError
#define INCLUDED_away3d_errors_CastError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/errors/Error.h>
HX_DECLARE_CLASS2(away3d,errors,CastError)
HX_DECLARE_CLASS2(flash,errors,Error)
namespace away3d{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  CastError_obj : public ::flash::errors::Error_obj{
	public:
		typedef ::flash::errors::Error_obj super;
		typedef CastError_obj OBJ_;
		CastError_obj();
		Void __construct(::String message);

	public:
		static hx::ObjectPtr< CastError_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CastError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CastError"); }

};

} // end namespace away3d
} // end namespace errors

#endif /* INCLUDED_away3d_errors_CastError */ 
