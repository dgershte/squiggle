#ifndef INCLUDED_flash_display3D_VertexBuffer3D
#define INCLUDED_flash_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,gl,GLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();
		Void __construct(::openfl::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex);

	public:
		static hx::ObjectPtr< VertexBuffer3D_obj > __new(::openfl::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VertexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexBuffer3D"); }

		virtual Void uploadFromVector( Array< Float > data,int startVertex,int numVertices);
		Dynamic uploadFromVector_dyn();

		virtual Void uploadFromByteArray( ::flash::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		int numVertices;
		::openfl::gl::GLBuffer glBuffer;
		int data32PerVertex;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_VertexBuffer3D */ 
