#ifndef INCLUDED_OpenFLStage3D
#define INCLUDED_OpenFLStage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(OpenFLStage3D)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,display,Stage3D)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  OpenFLStage3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpenFLStage3D_obj OBJ_;
		OpenFLStage3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OpenFLStage3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OpenFLStage3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpenFLStage3D"); }

		static Array< ::Dynamic > stage3Ds;
		static Void requestAGLSLContext3D( ::flash::display::Stage3D stage3D,::String context3DRenderMode);
		static Dynamic requestAGLSLContext3D_dyn();

		static ::flash::display::Stage3D getStage3D( ::flash::display::Stage stage,int index);
		static Dynamic getStage3D_dyn();

		static Void setRenderCallback( ::flash::display3D::Context3D context3D,Dynamic func);
		static Dynamic setRenderCallback_dyn();

		static Void removeRenderCallback( ::flash::display3D::Context3D context3D,Dynamic func);
		static Dynamic removeRenderCallback_dyn();

};


#endif /* INCLUDED_OpenFLStage3D */ 
