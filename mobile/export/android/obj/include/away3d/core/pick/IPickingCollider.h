#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#define INCLUDED_away3d_core_pick_IPickingCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,pick,IPickingCollider)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES  IPickingCollider_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IPickingCollider_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool testSubMeshCollision( ::away3d::core::base::SubMesh subMesh,::away3d::core::pick::PickingCollisionVO pickingCollisionVO,Float shortestCollisionDistance)=0;
		Dynamic testSubMeshCollision_dyn();
virtual Void setLocalRay( ::flash::geom::Vector3D localPosition,::flash::geom::Vector3D localDirection)=0;
		Dynamic setLocalRay_dyn();
};

#define DELEGATE_away3d_core_pick_IPickingCollider \
virtual bool testSubMeshCollision( ::away3d::core::base::SubMesh subMesh,::away3d::core::pick::PickingCollisionVO pickingCollisionVO,Float shortestCollisionDistance) { return mDelegate->testSubMeshCollision(subMesh,pickingCollisionVO,shortestCollisionDistance);}  \
virtual Dynamic testSubMeshCollision_dyn() { return mDelegate->testSubMeshCollision_dyn();}  \
virtual Void setLocalRay( ::flash::geom::Vector3D localPosition,::flash::geom::Vector3D localDirection) { return mDelegate->setLocalRay(localPosition,localDirection);}  \
virtual Dynamic setLocalRay_dyn() { return mDelegate->setLocalRay_dyn();}  \


template<typename IMPL>
class IPickingCollider_delegate_ : public IPickingCollider_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IPickingCollider_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_pick_IPickingCollider
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_IPickingCollider */ 
