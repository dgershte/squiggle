#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#define INCLUDED_away3d_core_pick_ShaderPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/pick/IPicker.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS3(away3d,core,pick,ShaderPicker)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  ShaderPicker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderPicker_obj OBJ_;
		ShaderPicker_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShaderPicker_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShaderPicker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::pick::IPicker_obj *()
			{ return new ::away3d::core::pick::IPicker_delegate_< ShaderPicker_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ShaderPicker"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void getPrecisePosition( ::flash::geom::Matrix3D invSceneTransform,Float nx,Float ny,Float nz,Float px,Float py,Float pz);
		Dynamic getPrecisePosition_dyn();

		virtual Void getPreciseDetails( ::away3d::cameras::Camera3D camera);
		Dynamic getPreciseDetails_dyn();

		virtual Void getApproximatePosition( ::away3d::cameras::Camera3D camera);
		Dynamic getApproximatePosition_dyn();

		virtual Void getHitDetails( ::away3d::cameras::Camera3D camera);
		Dynamic getHitDetails_dyn();

		virtual Void initTriangleProgram3D( );
		Dynamic initTriangleProgram3D_dyn();

		virtual Void initObjectProgram3D( );
		Dynamic initObjectProgram3D_dyn();

		virtual Void updateRay( ::away3d::cameras::Camera3D camera);
		Dynamic updateRay_dyn();

		virtual Void drawRenderables( ::away3d::core::data::RenderableListItem item,::away3d::cameras::Camera3D camera);
		Dynamic drawRenderables_dyn();

		virtual Void draw( ::away3d::core::traverse::EntityCollector entityCollector,::flash::display3D::textures::TextureBase target);
		Dynamic draw_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene);
		Dynamic getSceneCollision_dyn();

		virtual ::away3d::core::pick::PickingCollisionVO getViewCollision( Float x,Float y,::away3d::containers::View3D view);
		Dynamic getViewCollision_dyn();

		virtual bool set_onlyMouseEnabled( bool value);
		Dynamic set_onlyMouseEnabled_dyn();

		virtual bool get_onlyMouseEnabled( );
		Dynamic get_onlyMouseEnabled_dyn();

		bool _potentialFound;
		::flash::geom::Vector3D _rayDir;
		::flash::geom::Vector3D _rayPos;
		::flash::geom::Vector3D _localHitNormal;
		int _subGeometryIndex;
		int _faceIndex;
		::flash::geom::Point _hitUV;
		::flash::geom::Vector3D _localHitPosition;
		::away3d::entities::Entity _hitEntity;
		::away3d::core::base::IRenderable _hitRenderable;
		Float _projY;
		Float _projX;
		int _hitColor;
		int _interactiveId;
		Array< ::Dynamic > _interactives;
		Array< Float > _id;
		Array< Float > _boundOffsetScale;
		Array< Float > _viewportData;
		::flash::display::BitmapData _bitmapData;
		::flash::display3D::Program3D _triangleProgram3D;
		::flash::display3D::Program3D _objectProgram3D;
		bool _onlyMouseEnabled;
		::flash::display3D::Context3D _context;
		::away3d::core::managers::Stage3DProxy _stage3DProxy;
		static ::flash::geom::Rectangle MOUSE_SCISSOR_RECT;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_ShaderPicker */ 
