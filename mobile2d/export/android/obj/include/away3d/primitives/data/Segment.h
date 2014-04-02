#ifndef INCLUDED_away3d_primitives_data_Segment
#define INCLUDED_away3d_primitives_data_Segment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace primitives{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Segment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Segment_obj OBJ_;
		Segment_obj();
		Void __construct(::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  __o_colorStart,hx::Null< int >  __o_colorEnd,hx::Null< Float >  __o_thickness);

	public:
		static hx::ObjectPtr< Segment_obj > __new(::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  __o_colorStart,hx::Null< int >  __o_colorEnd,hx::Null< Float >  __o_thickness);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Segment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Segment"); }

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::away3d::entities::SegmentSet set_segmentsBase( ::away3d::entities::SegmentSet segBase);
		Dynamic set_segmentsBase_dyn();

		virtual int set_subSetIndex( int ind);
		Dynamic set_subSetIndex_dyn();

		virtual int get_subSetIndex( );
		Dynamic get_subSetIndex_dyn();

		virtual int set_index( int ind);
		Dynamic set_index_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual int set_endColor( int color);
		Dynamic set_endColor_dyn();

		virtual int get_endColor( );
		Dynamic get_endColor_dyn();

		virtual int set_startColor( int color);
		Dynamic set_startColor_dyn();

		virtual int get_startColor( );
		Dynamic get_startColor_dyn();

		virtual Float set_thickness( Float value);
		Dynamic set_thickness_dyn();

		virtual Float get_thickness( );
		Dynamic get_thickness_dyn();

		virtual ::flash::geom::Vector3D set_end( ::flash::geom::Vector3D value);
		Dynamic set_end_dyn();

		virtual ::flash::geom::Vector3D get_end( );
		Dynamic get_end_dyn();

		virtual ::flash::geom::Vector3D set_start( ::flash::geom::Vector3D value);
		Dynamic set_start_dyn();

		virtual ::flash::geom::Vector3D get_start( );
		Dynamic get_start_dyn();

		virtual Void updateSegment( ::flash::geom::Vector3D start,::flash::geom::Vector3D end,::flash::geom::Vector3D anchor,hx::Null< int >  colorStart,hx::Null< int >  colorEnd,hx::Null< Float >  thickness);
		Dynamic updateSegment_dyn();

		int _endColor;
		int _startColor;
		int _subSetIndex;
		int _index;
		Float _endB;
		Float _endG;
		Float _endR;
		Float _startB;
		Float _startG;
		Float _startR;
		::flash::geom::Vector3D _end;
		::flash::geom::Vector3D _start;
		Float _thickness;
		::away3d::entities::SegmentSet _segmentsBase;
};

} // end namespace away3d
} // end namespace primitives
} // end namespace data

#endif /* INCLUDED_away3d_primitives_data_Segment */ 
