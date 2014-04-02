#ifndef INCLUDED_away3d_animators_states_IAnimationState
#define INCLUDED_away3d_animators_states_IAnimationState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace animators{
namespace states{


class HXCPP_CLASS_ATTRIBUTES  IAnimationState_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAnimationState_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void phase( Float value)=0;
		Dynamic phase_dyn();
virtual Void update( int time)=0;
		Dynamic update_dyn();
virtual Void offset( int startTime)=0;
		Dynamic offset_dyn();
virtual ::flash::geom::Vector3D get_positionDelta( )=0;
		Dynamic get_positionDelta_dyn();
};

#define DELEGATE_away3d_animators_states_IAnimationState \
virtual Void phase( Float value) { return mDelegate->phase(value);}  \
virtual Dynamic phase_dyn() { return mDelegate->phase_dyn();}  \
virtual Void update( int time) { return mDelegate->update(time);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void offset( int startTime) { return mDelegate->offset(startTime);}  \
virtual Dynamic offset_dyn() { return mDelegate->offset_dyn();}  \
virtual ::flash::geom::Vector3D get_positionDelta( ) { return mDelegate->get_positionDelta();}  \
virtual Dynamic get_positionDelta_dyn() { return mDelegate->get_positionDelta_dyn();}  \


template<typename IMPL>
class IAnimationState_delegate_ : public IAnimationState_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAnimationState_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_animators_states_IAnimationState
};

} // end namespace away3d
} // end namespace animators
} // end namespace states

#endif /* INCLUDED_away3d_animators_states_IAnimationState */ 
