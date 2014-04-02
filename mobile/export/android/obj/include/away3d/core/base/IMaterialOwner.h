#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#define INCLUDED_away3d_core_base_IMaterialOwner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  IMaterialOwner_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMaterialOwner_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::away3d::animators::IAnimator get_animator( )=0;
		Dynamic get_animator_dyn();
virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value)=0;
		Dynamic set_material_dyn();
virtual ::away3d::materials::MaterialBase get_material( )=0;
		Dynamic get_material_dyn();
};

#define DELEGATE_away3d_core_base_IMaterialOwner \
virtual ::away3d::animators::IAnimator get_animator( ) { return mDelegate->get_animator();}  \
virtual Dynamic get_animator_dyn() { return mDelegate->get_animator_dyn();}  \
virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value) { return mDelegate->set_material(value);}  \
virtual Dynamic set_material_dyn() { return mDelegate->set_material_dyn();}  \
virtual ::away3d::materials::MaterialBase get_material( ) { return mDelegate->get_material();}  \
virtual Dynamic get_material_dyn() { return mDelegate->get_material_dyn();}  \


template<typename IMPL>
class IMaterialOwner_delegate_ : public IMaterialOwner_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMaterialOwner_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_core_base_IMaterialOwner
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_IMaterialOwner */ 
