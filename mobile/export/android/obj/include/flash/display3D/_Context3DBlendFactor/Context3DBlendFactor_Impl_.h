#ifndef INCLUDED_flash_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#define INCLUDED_flash_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flash,display3D,_Context3DBlendFactor,Context3DBlendFactor_Impl_)
namespace flash{
namespace display3D{
namespace _Context3DBlendFactor{


class HXCPP_CLASS_ATTRIBUTES  Context3DBlendFactor_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DBlendFactor_Impl__obj OBJ_;
		Context3DBlendFactor_Impl__obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DBlendFactor_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DBlendFactor_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DBlendFactor_Impl_"); }

		static int _new( int a);
		static Dynamic _new_dyn();

		static int fromInt( int s);
		static Dynamic fromInt_dyn();

		static int toInt( int this1);
		static Dynamic toInt_dyn();

};

} // end namespace flash
} // end namespace display3D
} // end namespace _Context3DBlendFactor

#endif /* INCLUDED_flash_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_ */ 
