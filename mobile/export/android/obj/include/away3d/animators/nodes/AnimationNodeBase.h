#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#define INCLUDED_away3d_animators_nodes_AnimationNodeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/library/assets/IAsset.h>
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace animators{
namespace nodes{


class HXCPP_CLASS_ATTRIBUTES  AnimationNodeBase_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef AnimationNodeBase_obj OBJ_;
		AnimationNodeBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AnimationNodeBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationNodeBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flash::events::IEventDispatcher_obj *()
			{ return new ::flash::events::IEventDispatcher_delegate_< AnimationNodeBase_obj >(this); }
		inline operator ::away3d::library::assets::IAsset_obj *()
			{ return new ::away3d::library::assets::IAsset_delegate_< AnimationNodeBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AnimationNodeBase"); }

		virtual ::String get_assetType( );
		Dynamic get_assetType_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::Class get_stateClass( );
		Dynamic get_stateClass_dyn();

		::Class _stateClass;
};

} // end namespace away3d
} // end namespace animators
} // end namespace nodes

#endif /* INCLUDED_away3d_animators_nodes_AnimationNodeBase */ 
