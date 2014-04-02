#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#define INCLUDED_away3d_materials_compilation_RegisterPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,materials,compilation,RegisterPool)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES  RegisterPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RegisterPool_obj OBJ_;
		RegisterPool_obj();
		Void __construct(::String regName,int regCount,hx::Null< bool >  __o_persistent);

	public:
		static hx::ObjectPtr< RegisterPool_obj > __new(::String regName,int regCount,hx::Null< bool >  __o_persistent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RegisterPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RegisterPool"); }

		virtual bool isRegisterUsed( int index);
		Dynamic isRegisterUsed_dyn();

		virtual Void initRegisters( ::String regName,int regCount);
		Dynamic initRegisters_dyn();

		virtual bool hasRegisteredRegs( );
		Dynamic hasRegisteredRegs_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void removeUsage( ::away3d::materials::compilation::ShaderRegisterElement _register);
		Dynamic removeUsage_dyn();

		virtual Void addUsage( ::away3d::materials::compilation::ShaderRegisterElement _register,int usageCount);
		Dynamic addUsage_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement requestFreeRegComponent( );
		Dynamic requestFreeRegComponent_dyn();

		virtual ::away3d::materials::compilation::ShaderRegisterElement requestFreeVectorReg( );
		Dynamic requestFreeVectorReg_dyn();

		bool _persistent;
		int _regCount;
		Array< int > _usedVectorCount;
		Array< ::Dynamic > _usedSingleCount;
		::String _regName;
		Dynamic _registerComponents;
		Array< ::Dynamic > _vectorRegisters;
		static ::haxe::ds::StringMap _regPool;
		static ::haxe::ds::StringMap _regCompsPool;
		static ::String _initPool( ::String regName,int regCount);
		static Dynamic _initPool_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_RegisterPool */ 
