#ifndef INCLUDED_away3d_controllers_ControllerBase
#define INCLUDED_away3d_controllers_ControllerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  ControllerBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ControllerBase_obj OBJ_;
		ControllerBase_obj();
		Void __construct(::away3d::entities::Entity targetObject);

	public:
		static hx::ObjectPtr< ControllerBase_obj > __new(::away3d::entities::Entity targetObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ControllerBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ControllerBase"); }

		virtual Void update( hx::Null< bool >  interpolate);
		Dynamic update_dyn();

		virtual bool set_autoUpdate( bool val);
		Dynamic set_autoUpdate_dyn();

		virtual bool get_autoUpdate( );
		Dynamic get_autoUpdate_dyn();

		virtual ::away3d::entities::Entity set_targetObject( ::away3d::entities::Entity val);
		Dynamic set_targetObject_dyn();

		virtual ::away3d::entities::Entity get_targetObject( );
		Dynamic get_targetObject_dyn();

		virtual Void notifyUpdate( );
		Dynamic notifyUpdate_dyn();

		::away3d::entities::Entity _targetObject;
		bool _autoUpdate;
};

} // end namespace away3d
} // end namespace controllers

#endif /* INCLUDED_away3d_controllers_ControllerBase */ 
