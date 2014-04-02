#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#define INCLUDED_away3d_core_render_Filter3DRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,Filter3DRenderer)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,filters,tasks,Filter3DTaskBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  Filter3DRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Filter3DRenderer_obj OBJ_;
		Filter3DRenderer_obj();
		Void __construct(::away3d::core::managers::Stage3DProxy stage3DProxy);

	public:
		static hx::ObjectPtr< Filter3DRenderer_obj > __new(::away3d::core::managers::Stage3DProxy stage3DProxy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Filter3DRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Filter3DRenderer"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void updateFilterSizes( );
		Dynamic updateFilterSizes_dyn();

		virtual Void render( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera3D,::flash::display3D::textures::Texture depthTexture);
		Dynamic render_dyn();

		virtual Void updateFilterTasks( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic updateFilterTasks_dyn();

		virtual Dynamic set_filters( Dynamic value);
		Dynamic set_filters_dyn();

		virtual Dynamic get_filters( );
		Dynamic get_filters_dyn();

		virtual ::flash::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getMainInputTexture_dyn();

		virtual bool get_requireDepthRender( );
		Dynamic get_requireDepthRender_dyn();

		virtual Void onRTTResize( ::flash::events::Event event);
		Dynamic onRTTResize_dyn();

		bool _filterSizesInvalid;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		::away3d::core::managers::RTTBufferManager _rttManager;
		bool _requireDepthRender;
		::flash::display3D::textures::Texture _mainInputTexture;
		bool _filterTasksInvalid;
		Array< ::Dynamic > _tasks;
		Dynamic _filters;
};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_Filter3DRenderer */ 
