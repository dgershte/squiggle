#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#define INCLUDED_flash_display3D_IndexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,gl,GLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  IndexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer3D_obj OBJ_;
		IndexBuffer3D_obj();
		Void __construct(::openfl::gl::GLBuffer glBuffer,int numIndices);

	public:
		static hx::ObjectPtr< IndexBuffer3D_obj > __new(::openfl::gl::GLBuffer glBuffer,int numIndices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IndexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IndexBuffer3D"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void uploadFromVector( Array< int > data,int startOffset,int count);
		Dynamic uploadFromVector_dyn();

		virtual Void uploadFromByteArray( ::flash::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		int numIndices;
		::openfl::gl::GLBuffer glBuffer;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_IndexBuffer3D */ 
