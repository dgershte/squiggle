#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#define INCLUDED_away3d_cameras_lenses_PerspectiveLens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/cameras/lenses/LensBase.h>
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS3(away3d,cameras,lenses,PerspectiveLens)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES  PerspectiveLens_obj : public ::away3d::cameras::lenses::LensBase_obj{
	public:
		typedef ::away3d::cameras::lenses::LensBase_obj super;
		typedef PerspectiveLens_obj OBJ_;
		PerspectiveLens_obj();
		Void __construct(hx::Null< Float >  __o_fieldOfView);

	public:
		static hx::ObjectPtr< PerspectiveLens_obj > __new(hx::Null< Float >  __o_fieldOfView);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PerspectiveLens_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PerspectiveLens"); }

		virtual Void updateMatrix( );

		virtual ::away3d::cameras::lenses::LensBase clone( );

		virtual ::flash::geom::Vector3D unproject( Float nX,Float nY,Float sZ);

		virtual Float set_focalLength( Float value);
		Dynamic set_focalLength_dyn();

		virtual Float get_focalLength( );
		Dynamic get_focalLength_dyn();

		virtual Float set_fieldOfView( Float value);
		Dynamic set_fieldOfView_dyn();

		virtual Float get_fieldOfView( );
		Dynamic get_fieldOfView_dyn();

		Float _xMax;
		Float _yMax;
		Float _focalLengthInv;
		Float _focalLength;
		Float _fieldOfView;
};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_PerspectiveLens */ 
