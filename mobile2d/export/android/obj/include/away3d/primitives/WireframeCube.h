#ifndef INCLUDED_away3d_primitives_WireframeCube
#define INCLUDED_away3d_primitives_WireframeCube

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/primitives/WireframePrimitiveBase.h>
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframeCube)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  WireframeCube_obj : public ::away3d::primitives::WireframePrimitiveBase_obj{
	public:
		typedef ::away3d::primitives::WireframePrimitiveBase_obj super;
		typedef WireframeCube_obj OBJ_;
		WireframeCube_obj();
		Void __construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_depth,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< WireframeCube_obj > __new(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_depth,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WireframeCube_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WireframeCube"); }

		virtual Void buildGeometry( );

		virtual Float set_depth( Float value);
		Dynamic set_depth_dyn();

		virtual Float get_depth( );
		Dynamic get_depth_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		Float _depth;
		Float _height;
		Float _width;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframeCube */ 
