#ifndef INCLUDED_away3d_animators_states_AnimationStateBase
#define INCLUDED_away3d_animators_states_AnimationStateBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/animators/states/IAnimationState.h>
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,animators,states,AnimationStateBase)
HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace animators{
namespace states{


class HXCPP_CLASS_ATTRIBUTES  AnimationStateBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationStateBase_obj OBJ_;
		AnimationStateBase_obj();
		Void __construct(::away3d::animators::IAnimator animator,::away3d::animators::nodes::AnimationNodeBase animationNode);

	public:
		static hx::ObjectPtr< AnimationStateBase_obj > __new(::away3d::animators::IAnimator animator,::away3d::animators::nodes::AnimationNodeBase animationNode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationStateBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::animators::states::IAnimationState_obj *()
			{ return new ::away3d::animators::states::IAnimationState_delegate_< AnimationStateBase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AnimationStateBase"); }

		virtual Void updatePositionDelta( );
		Dynamic updatePositionDelta_dyn();

		virtual Void updateTime( int time);
		Dynamic updateTime_dyn();

		virtual Void phase( Float value);
		Dynamic phase_dyn();

		virtual Void update( int time);
		Dynamic update_dyn();

		virtual Void offset( int startTime);
		Dynamic offset_dyn();

		virtual ::flash::geom::Vector3D get_positionDelta( );
		Dynamic get_positionDelta_dyn();

		::away3d::animators::IAnimator _animator;
		int _startTime;
		int _time;
		bool _positionDeltaDirty;
		::flash::geom::Vector3D _rootDelta;
		::away3d::animators::nodes::AnimationNodeBase _animationNode;
};

} // end namespace away3d
} // end namespace animators
} // end namespace states

#endif /* INCLUDED_away3d_animators_states_AnimationStateBase */ 
