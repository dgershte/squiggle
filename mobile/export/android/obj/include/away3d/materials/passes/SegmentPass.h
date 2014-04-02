#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#define INCLUDED_away3d_materials_passes_SegmentPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/passes/MaterialPassBase.h>
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SegmentPass)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES  SegmentPass_obj : public ::away3d::materials::passes::MaterialPassBase_obj{
	public:
		typedef ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef SegmentPass_obj OBJ_;
		SegmentPass_obj();
		Void __construct(Float thickness);

	public:
		static hx::ObjectPtr< SegmentPass_obj > __new(Float thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SegmentPass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SegmentPass"); }

		virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera);

		virtual Void render( ::away3d::core::base::IRenderable renderable,::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::cameras::Camera3D camera,::flash::geom::Matrix3D viewProjection);

		virtual ::String getFragmentCode( ::String animationCode);

		virtual ::String getVertexCode( );

		Float _thickness;
		::flash::geom::Matrix3D _calcMatrix;
		Array< Float > _constants;
		static Array< Float > ONE_VECTOR;
		static Array< Float > FRONT_VECTOR;
};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SegmentPass */ 
