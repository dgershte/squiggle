#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#define INCLUDED_away3d_materials_compilation_ShaderRegisterElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  ShaderRegisterElement_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderRegisterElement_obj OBJ_;
		ShaderRegisterElement_obj();
		Void __construct(::String regName,int index,hx::Null< int >  __o_component);

	public:
		static hx::ObjectPtr< ShaderRegisterElement_obj > __new(::String regName,int index,hx::Null< int >  __o_component);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderRegisterElement_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShaderRegisterElement"); }

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual ::String get_regName( );
		Dynamic get_regName_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		int _component;
		::String _toStr;
		int _index;
		::String _regName;
		static Dynamic COMPONENTS;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterElement */ 
