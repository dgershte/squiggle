#ifndef INCLUDED_away3d_primitives_WireframeSphere
#define INCLUDED_away3d_primitives_WireframeSphere

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
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframeSphere)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  WireframeSphere_obj : public ::away3d::primitives::WireframePrimitiveBase_obj{
	public:
		typedef ::away3d::primitives::WireframePrimitiveBase_obj super;
		typedef WireframeSphere_obj OBJ_;
		WireframeSphere_obj();
		Void __construct(hx::Null< Float >  __o_radius,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< WireframeSphere_obj > __new(hx::Null< Float >  __o_radius,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< int >  __o_color,hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WireframeSphere_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WireframeSphere"); }

		virtual Void buildGeometry( );

		Float _radius;
		int _segmentsH;
		int _segmentsW;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframeSphere */ 
