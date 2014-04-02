#ifndef INCLUDED_away3d_animators_IAnimator
#define INCLUDED_away3d_animators_IAnimator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,animators,states,AnimationStateBase)
HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace animators{


class HXCPP_CLASS_ATTRIBUTES  IAnimator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAnimator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
virtual ::away3d::animators::IAnimator clone( )=0;
		Dynamic clone_dyn();
virtual ::away3d::animators::states::AnimationStateBase getAnimationStateByName( ::String name)=0;
		Dynamic getAnimationStateByName_dyn();
virtual ::away3d::animators::states::AnimationStateBase getAnimationState( ::away3d::animators::nodes::AnimationNodeBase node)=0;
		Dynamic getAnimationState_dyn();
virtual Void removeOwner( ::away3d::entities::Mesh mesh)=0;
		Dynamic removeOwner_dyn();
virtual Void addOwner( ::away3d::entities::Mesh mesh)=0;
		Dynamic addOwner_dyn();
virtual Void testGPUCompatibility( ::away3d::materials::passes::MaterialPassBase pass)=0;
		Dynamic testGPUCompatibility_dyn();
virtual Void setRenderState( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::base::IRenderable renderable,int vertexConstantOffset,int vertexStreamOffset,::away3d::cameras::Camera3D camera)=0;
		Dynamic setRenderState_dyn();
virtual ::away3d::animators::IAnimationSet get_animationSet( )=0;
		Dynamic get_animationSet_dyn();
};

#define DELEGATE_away3d_animators_IAnimator \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \
virtual ::away3d::animators::IAnimator clone( ) { return mDelegate->clone();}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \
virtual ::away3d::animators::states::AnimationStateBase getAnimationStateByName( ::String name) { return mDelegate->getAnimationStateByName(name);}  \
virtual Dynamic getAnimationStateByName_dyn() { return mDelegate->getAnimationStateByName_dyn();}  \
virtual ::away3d::animators::states::AnimationStateBase getAnimationState( ::away3d::animators::nodes::AnimationNodeBase node) { return mDelegate->getAnimationState(node);}  \
virtual Dynamic getAnimationState_dyn() { return mDelegate->getAnimationState_dyn();}  \
virtual Void removeOwner( ::away3d::entities::Mesh mesh) { return mDelegate->removeOwner(mesh);}  \
virtual Dynamic removeOwner_dyn() { return mDelegate->removeOwner_dyn();}  \
virtual Void addOwner( ::away3d::entities::Mesh mesh) { return mDelegate->addOwner(mesh);}  \
virtual Dynamic addOwner_dyn() { return mDelegate->addOwner_dyn();}  \
virtual Void testGPUCompatibility( ::away3d::materials::passes::MaterialPassBase pass) { return mDelegate->testGPUCompatibility(pass);}  \
virtual Dynamic testGPUCompatibility_dyn() { return mDelegate->testGPUCompatibility_dyn();}  \
virtual Void setRenderState( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::core::base::IRenderable renderable,int vertexConstantOffset,int vertexStreamOffset,::away3d::cameras::Camera3D camera) { return mDelegate->setRenderState(stage3DProxy,renderable,vertexConstantOffset,vertexStreamOffset,camera);}  \
virtual Dynamic setRenderState_dyn() { return mDelegate->setRenderState_dyn();}  \
virtual ::away3d::animators::IAnimationSet get_animationSet( ) { return mDelegate->get_animationSet();}  \
virtual Dynamic get_animationSet_dyn() { return mDelegate->get_animationSet_dyn();}  \


template<typename IMPL>
class IAnimator_delegate_ : public IAnimator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAnimator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_animators_IAnimator
};

} // end namespace away3d
} // end namespace animators

#endif /* INCLUDED_away3d_animators_IAnimator */ 
