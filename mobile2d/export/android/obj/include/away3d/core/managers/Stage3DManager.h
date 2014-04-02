#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#define INCLUDED_away3d_core_managers_Stage3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManagerSingletonEnforcer)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Stage3DManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stage3DManager_obj OBJ_;
		Stage3DManager_obj();
		Void __construct(::flash::display::Stage stage,::away3d::core::managers::Stage3DManagerSingletonEnforcer Stage3DManagerSingletonEnforcer);

	public:
		static hx::ObjectPtr< Stage3DManager_obj > __new(::flash::display::Stage stage,::away3d::core::managers::Stage3DManagerSingletonEnforcer Stage3DManagerSingletonEnforcer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stage3DManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage3DManager"); }

		virtual int get_numProxySlotsTotal( );
		Dynamic get_numProxySlotsTotal_dyn();

		virtual int get_numProxySlotsUsed( );
		Dynamic get_numProxySlotsUsed_dyn();

		virtual int get_numProxySlotsFree( );
		Dynamic get_numProxySlotsFree_dyn();

		virtual bool get_hasFreeStage3DProxy( );
		Dynamic get_hasFreeStage3DProxy_dyn();

		virtual ::away3d::core::managers::Stage3DProxy getFreeStage3DProxy( hx::Null< bool >  forceSoftware,::String profile);
		Dynamic getFreeStage3DProxy_dyn();

		virtual Void removeStage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic removeStage3DProxy_dyn();

		virtual ::away3d::core::managers::Stage3DProxy getStage3DProxy( int index,hx::Null< bool >  forceSoftware,::String profile);
		Dynamic getStage3DProxy_dyn();

		int stage3DsLength;
		::flash::display::Stage _stage;
		static ::haxe::ds::ObjectMap _instances;
		static Array< ::Dynamic > _stageProxies;
		static int _numStageProxies;
		static ::away3d::core::managers::Stage3DManager getInstance( ::flash::display::Stage stage);
		static Dynamic getInstance_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Stage3DManager */ 
