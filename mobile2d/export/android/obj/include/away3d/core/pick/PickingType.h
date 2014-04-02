#ifndef INCLUDED_away3d_core_pick_PickingType
#define INCLUDED_away3d_core_pick_PickingType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingType)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  PickingType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PickingType_obj OBJ_;
		PickingType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PickingType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PickingType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PickingType"); }

		static ::away3d::core::pick::IPicker SHADER;
		static ::away3d::core::pick::IPicker RAYCAST_FIRST_ENCOUNTERED;
		static ::away3d::core::pick::IPicker RAYCAST_BEST_HIT;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_PickingType */ 
