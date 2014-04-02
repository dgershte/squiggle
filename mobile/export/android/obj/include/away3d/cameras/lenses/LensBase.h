#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#define INCLUDED_away3d_cameras_lenses_LensBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/EventDispatcher.h>
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES  LensBase_obj : public ::flash::events::EventDispatcher_obj{
	public:
		typedef ::flash::events::EventDispatcher_obj super;
		typedef LensBase_obj OBJ_;
		LensBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LensBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LensBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LensBase"); }

		virtual Void updateViewport( Float x,Float y,Float width,Float height);
		Dynamic updateViewport_dyn();

		virtual Void updateScissorRect( Float x,Float y,Float width,Float height);
		Dynamic updateScissorRect_dyn();

		virtual Void updateMatrix( );
		Dynamic updateMatrix_dyn();

		virtual Void invalidateMatrix( );
		Dynamic invalidateMatrix_dyn();

		virtual Float set_aspectRatio( Float value);
		Dynamic set_aspectRatio_dyn();

		virtual Float get_aspectRatio( );
		Dynamic get_aspectRatio_dyn();

		virtual ::away3d::cameras::lenses::LensBase clone( );
		Dynamic clone_dyn();

		virtual ::flash::geom::Vector3D unproject( Float nX,Float nY,Float sZ);
		Dynamic unproject_dyn();

		virtual ::flash::geom::Matrix3D get_unprojectionMatrix( );
		Dynamic get_unprojectionMatrix_dyn();

		virtual ::flash::geom::Vector3D project( ::flash::geom::Vector3D point3d);
		Dynamic project_dyn();

		virtual Float set_far( Float value);
		Dynamic set_far_dyn();

		virtual Float get_far( );
		Dynamic get_far_dyn();

		virtual Float set_near( Float value);
		Dynamic set_near_dyn();

		virtual Float get_near( );
		Dynamic get_near_dyn();

		virtual ::flash::geom::Matrix3D set_matrix( ::flash::geom::Matrix3D value);
		Dynamic set_matrix_dyn();

		virtual ::flash::geom::Matrix3D get_matrix( );
		Dynamic get_matrix_dyn();

		virtual Array< Float > set_frustumCorners( Array< Float > frustumCorners);
		Dynamic set_frustumCorners_dyn();

		virtual Array< Float > get_frustumCorners( );
		Dynamic get_frustumCorners_dyn();

		bool _unprojectionInvalid;
		::flash::geom::Matrix3D _unprojection;
		Array< Float > _frustumCorners;
		bool _matrixInvalid;
		Float _aspectRatio;
		Float _far;
		Float _near;
		::flash::geom::Rectangle _viewPort;
		::flash::geom::Rectangle _scissorRect;
		::flash::geom::Matrix3D _matrix;
};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_LensBase */ 
