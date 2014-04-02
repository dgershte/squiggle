#ifndef INCLUDED_away3d_filters_Filter3DBase
#define INCLUDED_away3d_filters_Filter3DBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,filters,Filter3DBase)
HX_DECLARE_CLASS3(away3d,filters,tasks,Filter3DTaskBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  Filter3DBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Filter3DBase_obj OBJ_;
		Filter3DBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Filter3DBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Filter3DBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Filter3DBase"); }

		virtual Void update( ::away3d::core::managers::Stage3DProxy stage,::away3d::cameras::Camera3D camera);
		Dynamic update_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void setRenderTargets( ::flash::display3D::textures::Texture mainTarget,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic setRenderTargets_dyn();

		virtual int set_textureHeight( int value);
		Dynamic set_textureHeight_dyn();

		virtual int get_textureHeight( );
		Dynamic get_textureHeight_dyn();

		virtual int set_textureWidth( int value);
		Dynamic set_textureWidth_dyn();

		virtual int get_textureWidth( );
		Dynamic get_textureWidth_dyn();

		virtual ::flash::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getMainInputTexture_dyn();

		virtual Array< ::Dynamic > get_tasks( );
		Dynamic get_tasks_dyn();

		virtual Void addTask( ::away3d::filters::tasks::Filter3DTaskBase filter);
		Dynamic addTask_dyn();

		virtual bool get_requireDepthRender( );
		Dynamic get_requireDepthRender_dyn();

		int _textureHeight;
		int _textureWidth;
		bool _requireDepthRender;
		Array< ::Dynamic > _tasks;
};

} // end namespace away3d
} // end namespace filters

#endif /* INCLUDED_away3d_filters_Filter3DBase */ 
