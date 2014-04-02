#ifndef INCLUDED_away3d_core_data_RenderableListItem
#define INCLUDED_away3d_core_data_RenderableListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  RenderableListItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderableListItem_obj OBJ_;
		RenderableListItem_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RenderableListItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderableListItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderableListItem"); }

		bool cascaded;
		::flash::geom::Matrix3D renderSceneTransform;
		Float zIndex;
		int renderOrderId;
		int materialId;
		::away3d::core::base::IRenderable renderable;
		::away3d::core::data::RenderableListItem next;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_RenderableListItem */ 
