#ifndef INCLUDED_away3d_core_pick_IPicker
#define INCLUDED_away3d_core_pick_IPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  IPicker_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IPicker_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
virtual bool set_onlyMouseEnabled( bool value)=0;
		Dynamic set_onlyMouseEnabled_dyn();
virtual bool get_onlyMouseEnabled( )=0;
		Dynamic get_onlyMouseEnabled_dyn();
virtual ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene)=0;
		Dynamic getSceneCollision_dyn();
virtual ::away3d::core::pick::PickingCollisionVO getViewCollision( Float x,Float y,::away3d::containers::View3D view)=0;
		Dynamic getViewCollision_dyn();
};

#define DELEGATE_away3d_core_pick_IPicker \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \
virtual bool set_onlyMouseEnabled( bool value) { return mDelegate->set_onlyMouseEnabled(value);}  \
virtual Dynamic set_onlyMouseEnabled_dyn() { return mDelegate->set_onlyMouseEnabled_dyn();}  \
virtual bool get_onlyMouseEnabled( ) { return mDelegate->get_onlyMouseEnabled();}  \
virtual Dynamic get_onlyMouseEnabled_dyn() { return mDelegate->get_onlyMouseEnabled_dyn();}  \
virtual ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::flash::geom::Vector3D position,::flash::geom::Vector3D direction,::away3d::containers::Scene3D scene) { return mDelegate->getSceneCollision(position,direction,scene);}  \
virtual Dynamic getSceneCollision_dyn() { return mDelegate->getSceneCollision_dyn();}  \
virtual ::away3d::core::pick::PickingCollisionVO getViewCollision( Float x,Float y,::away3d::containers::View3D view) { return mDelegate->getViewCollision(x,y,view);}  \
virtual Dynamic getViewCollision_dyn() { return mDelegate->getViewCollision_dyn();}  \


template<typename IMPL>
class IPicker_delegate_ : public IPicker_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IPicker_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_pick_IPicker
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_IPicker */ 
