#ifndef INCLUDED_flash_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_
#define INCLUDED_flash_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flash,display3D,_Context3DTriangleFace,Context3DTriangleFace_Impl_)
namespace flash{
namespace display3D{
namespace _Context3DTriangleFace{


class HXCPP_CLASS_ATTRIBUTES  Context3DTriangleFace_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DTriangleFace_Impl__obj OBJ_;
		Context3DTriangleFace_Impl__obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DTriangleFace_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DTriangleFace_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DTriangleFace_Impl_"); }

		static int _new( int a);
		static Dynamic _new_dyn();

		static int fromInt( int s);
		static Dynamic fromInt_dyn();

		static int toInt( int this1);
		static Dynamic toInt_dyn();

};

} // end namespace flash
} // end namespace display3D
} // end namespace _Context3DTriangleFace

#endif /* INCLUDED_flash_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_ */ 
