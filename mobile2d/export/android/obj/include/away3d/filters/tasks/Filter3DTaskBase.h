#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#define INCLUDED_away3d_filters_tasks_Filter3DTaskBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,filters,tasks,Filter3DTaskBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace filters{
namespace tasks{


class HXCPP_CLASS_ATTRIBUTES  Filter3DTaskBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Filter3DTaskBase_obj OBJ_;
		Filter3DTaskBase_obj();
		Void __construct(hx::Null< bool >  __o_requireDepthRender);

	public:
		static hx::ObjectPtr< Filter3DTaskBase_obj > __new(hx::Null< bool >  __o_requireDepthRender);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Filter3DTaskBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Filter3DTaskBase"); }

		virtual bool get_requireDepthRender( );
		Dynamic get_requireDepthRender_dyn();

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic deactivate_dyn();

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::display3D::textures::Texture depthTexture);
		Dynamic activate_dyn();

		virtual ::flash::display3D::Program3D getProgram3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getProgram3D_dyn();

		virtual Void updateTextures( ::away3d::core::managers::Stage3DProxy stage);
		Dynamic updateTextures_dyn();

		virtual ::String getFragmentCode( );
		Dynamic getFragmentCode_dyn();

		virtual ::String getVertexCode( );
		Dynamic getVertexCode_dyn();

		virtual Void updateProgram3D( ::away3d::core::managers::Stage3DProxy stage);
		Dynamic updateProgram3D_dyn();

		virtual Void invalidateProgram3D( );
		Dynamic invalidateProgram3D_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::flash::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage);
		Dynamic getMainInputTexture_dyn();

		virtual int set_textureHeight( int value);
		Dynamic set_textureHeight_dyn();

		virtual int get_textureHeight( );
		Dynamic get_textureHeight_dyn();

		virtual int set_textureWidth( int value);
		Dynamic set_textureWidth_dyn();

		virtual int get_textureWidth( );
		Dynamic get_textureWidth_dyn();

		virtual ::flash::display3D::textures::Texture set_target( ::flash::display3D::textures::Texture value);
		Dynamic set_target_dyn();

		virtual ::flash::display3D::textures::Texture get_target( );
		Dynamic get_target_dyn();

		virtual int set_textureScale( int value);
		Dynamic set_textureScale_dyn();

		virtual int get_textureScale( );
		Dynamic get_textureScale_dyn();

		int _textureScale;
		bool _requireDepthRender;
		::flash::display3D::textures::Texture _target;
		::flash::display3D::Program3D _program3D;
		bool _program3DInvalid;
		bool _textureDimensionsInvalid;
		int _textureHeight;
		int _textureWidth;
		int _scaledTextureHeight;
		int _scaledTextureWidth;
		::flash::display3D::textures::Texture _mainInputTexture;
};

} // end namespace away3d
} // end namespace filters
} // end namespace tasks

#endif /* INCLUDED_away3d_filters_tasks_Filter3DTaskBase */ 
