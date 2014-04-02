#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#define INCLUDED_away3d_cameras_lenses_FreeMatrixLens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/cameras/lenses/LensBase.h>
HX_DECLARE_CLASS3(away3d,cameras,lenses,FreeMatrixLens)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES  FreeMatrixLens_obj : public ::away3d::cameras::lenses::LensBase_obj{
	public:
		typedef ::away3d::cameras::lenses::LensBase_obj super;
		typedef FreeMatrixLens_obj OBJ_;
		FreeMatrixLens_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FreeMatrixLens_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FreeMatrixLens_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FreeMatrixLens"); }

		virtual Void updateMatrix( );

		virtual ::away3d::cameras::lenses::LensBase clone( );

		virtual Float set_aspectRatio( Float value);

		virtual Float set_far( Float value);

		virtual Float set_near( Float value);

};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_FreeMatrixLens */ 
