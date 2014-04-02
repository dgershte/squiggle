#ifndef INCLUDED_away3d_animators_IAnimationSet
#define INCLUDED_away3d_animators_IAnimationSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace animators{


class HXCPP_CLASS_ATTRIBUTES  IAnimationSet_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAnimationSet_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::materials::passes::MaterialPassBase pass)=0;
		Dynamic deactivate_dyn();
virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::materials::passes::MaterialPassBase pass)=0;
		Dynamic activate_dyn();
virtual Void doneAGALCode( ::away3d::materials::passes::MaterialPassBase pass)=0;
		Dynamic doneAGALCode_dyn();
virtual ::String getAGALUVCode( ::away3d::materials::passes::MaterialPassBase pass,::String UVSource,::String UVTarget)=0;
		Dynamic getAGALUVCode_dyn();
virtual ::String getAGALFragmentCode( ::away3d::materials::passes::MaterialPassBase pass,::String shadedTarget,::String profile)=0;
		Dynamic getAGALFragmentCode_dyn();
virtual ::String getAGALVertexCode( ::away3d::materials::passes::MaterialPassBase pass,Array< ::String > sourceRegisters,Array< ::String > targetRegisters,::String profile)=0;
		Dynamic getAGALVertexCode_dyn();
virtual Void cancelGPUCompatibility( )=0;
		Dynamic cancelGPUCompatibility_dyn();
virtual Void resetGPUCompatibility( )=0;
		Dynamic resetGPUCompatibility_dyn();
virtual bool get_usesCPU( )=0;
		Dynamic get_usesCPU_dyn();
virtual ::away3d::animators::nodes::AnimationNodeBase getAnimation( ::String name)=0;
		Dynamic getAnimation_dyn();
virtual bool hasAnimation( ::String name)=0;
		Dynamic hasAnimation_dyn();
};

#define DELEGATE_away3d_animators_IAnimationSet \
virtual Void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::materials::passes::MaterialPassBase pass) { return mDelegate->deactivate(stage3DProxy,pass);}  \
virtual Dynamic deactivate_dyn() { return mDelegate->deactivate_dyn();}  \
virtual Void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy,::away3d::materials::passes::MaterialPassBase pass) { return mDelegate->activate(stage3DProxy,pass);}  \
virtual Dynamic activate_dyn() { return mDelegate->activate_dyn();}  \
virtual Void doneAGALCode( ::away3d::materials::passes::MaterialPassBase pass) { return mDelegate->doneAGALCode(pass);}  \
virtual Dynamic doneAGALCode_dyn() { return mDelegate->doneAGALCode_dyn();}  \
virtual ::String getAGALUVCode( ::away3d::materials::passes::MaterialPassBase pass,::String UVSource,::String UVTarget) { return mDelegate->getAGALUVCode(pass,UVSource,UVTarget);}  \
virtual Dynamic getAGALUVCode_dyn() { return mDelegate->getAGALUVCode_dyn();}  \
virtual ::String getAGALFragmentCode( ::away3d::materials::passes::MaterialPassBase pass,::String shadedTarget,::String profile) { return mDelegate->getAGALFragmentCode(pass,shadedTarget,profile);}  \
virtual Dynamic getAGALFragmentCode_dyn() { return mDelegate->getAGALFragmentCode_dyn();}  \
virtual ::String getAGALVertexCode( ::away3d::materials::passes::MaterialPassBase pass,Array< ::String > sourceRegisters,Array< ::String > targetRegisters,::String profile) { return mDelegate->getAGALVertexCode(pass,sourceRegisters,targetRegisters,profile);}  \
virtual Dynamic getAGALVertexCode_dyn() { return mDelegate->getAGALVertexCode_dyn();}  \
virtual Void cancelGPUCompatibility( ) { return mDelegate->cancelGPUCompatibility();}  \
virtual Dynamic cancelGPUCompatibility_dyn() { return mDelegate->cancelGPUCompatibility_dyn();}  \
virtual Void resetGPUCompatibility( ) { return mDelegate->resetGPUCompatibility();}  \
virtual Dynamic resetGPUCompatibility_dyn() { return mDelegate->resetGPUCompatibility_dyn();}  \
virtual bool get_usesCPU( ) { return mDelegate->get_usesCPU();}  \
virtual Dynamic get_usesCPU_dyn() { return mDelegate->get_usesCPU_dyn();}  \
virtual ::away3d::animators::nodes::AnimationNodeBase getAnimation( ::String name) { return mDelegate->getAnimation(name);}  \
virtual Dynamic getAnimation_dyn() { return mDelegate->getAnimation_dyn();}  \
virtual bool hasAnimation( ::String name) { return mDelegate->hasAnimation(name);}  \
virtual Dynamic hasAnimation_dyn() { return mDelegate->hasAnimation_dyn();}  \


template<typename IMPL>
class IAnimationSet_delegate_ : public IAnimationSet_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAnimationSet_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_animators_IAnimationSet
};

} // end namespace away3d
} // end namespace animators

#endif /* INCLUDED_away3d_animators_IAnimationSet */ 
