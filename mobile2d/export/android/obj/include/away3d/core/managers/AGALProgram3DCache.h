#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#define INCLUDED_away3d_core_managers_AGALProgram3DCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,core,managers,AGALProgram3DCache)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  AGALProgram3DCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGALProgram3DCache_obj OBJ_;
		AGALProgram3DCache_obj();
		Void __construct(::away3d::core::managers::Stage3DProxy stage3DProxy);

	public:
		static hx::ObjectPtr< AGALProgram3DCache_obj > __new(::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGALProgram3DCache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGALProgram3DCache"); }

		virtual ::String getKey( ::String vertexCode,::String fragmentCode);
		Dynamic getKey_dyn();

		virtual Void destroyProgram( ::String key);
		Dynamic destroyProgram_dyn();

		virtual Void freeProgram3D( int programId);
		Dynamic freeProgram3D_dyn();

		virtual Void setProgram3D( ::away3d::materials::passes::MaterialPassBase pass,::String vertexCode,::String fragmentCode);
		Dynamic setProgram3D_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		Array< ::String > _keys;
		Array< int > _usages;
		::haxe::ds::StringMap _ids;
		::haxe::ds::StringMap _program3Ds;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		static Array< ::Dynamic > _instances;
		static int _currentId;
		static ::away3d::core::managers::AGALProgram3DCache getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic getInstance_dyn();

		static ::away3d::core::managers::AGALProgram3DCache getInstanceFromIndex( int index);
		static Dynamic getInstanceFromIndex_dyn();

		static Void onContext3DDisposed( ::away3d::events::Stage3DEvent event);
		static Dynamic onContext3DDisposed_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_AGALProgram3DCache */ 
