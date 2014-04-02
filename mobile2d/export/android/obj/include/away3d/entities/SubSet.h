#ifndef INCLUDED_away3d_entities_SubSet
#define INCLUDED_away3d_entities_SubSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,entities,SubSet)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  SubSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SubSet_obj OBJ_;
		SubSet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SubSet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SubSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SubSet"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		int lineCount;
		::flash::display3D::IndexBuffer3D indexBuffer;
		::flash::display3D::VertexBuffer3D vertexBuffer;
		::flash::display3D::Context3D indexContext3D;
		::flash::display3D::Context3D vertexContext3D;
		bool indexBufferDirty;
		bool vertexBufferDirty;
		int numIndices;
		Array< int > indices;
		int numVertices;
		Array< Float > vertices;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SubSet */ 
