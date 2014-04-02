#ifndef INCLUDED_BasicTest
#define INCLUDED_BasicTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Anim)
HX_DECLARE_CLASS0(BasicTest)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,SkyBox)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  BasicTest_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef BasicTest_obj OBJ_;
		BasicTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicTest"); }

		virtual Void stage_onDeactivate( ::flash::events::Event event);
		Dynamic stage_onDeactivate_dyn();

		virtual Void stage_onActivate( ::flash::events::Event event);
		Dynamic stage_onActivate_dyn();

		virtual Void onResize( ::flash::events::Event event);
		Dynamic onResize_dyn();

		virtual Void _onEnterFrame( ::flash::events::Event e);
		Dynamic _onEnterFrame_dyn();

		virtual Void mouseEventUp( ::flash::events::MouseEvent e);
		Dynamic mouseEventUp_dyn();

		virtual Void mouseEventMove( ::flash::events::MouseEvent e);
		Dynamic mouseEventMove_dyn();

		virtual Void mouseEventDown( ::flash::events::MouseEvent e);
		Dynamic mouseEventDown_dyn();

		Float mousey;
		Float mousex;
		bool mouse;
		::flash::geom::Point pos;
		int currFrame;
		int frames;
		Array< ::Dynamic > objs;
		Array< ::Dynamic > animation;
		::away3d::entities::Mesh _charmesh;
		::away3d::containers::ObjectContainer3D _plane;
		::away3d::containers::ObjectContainer3D _world;
		::away3d::primitives::SkyBox _skyBox;
		bool deac;
		::away3d::containers::View3D _view;
};


#endif /* INCLUDED_BasicTest */ 
