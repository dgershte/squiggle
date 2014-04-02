#ifndef INCLUDED_away3d_library_assets_IAsset
#define INCLUDED_away3d_library_assets_IAsset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/IEventDispatcher.h>
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  IAsset_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAsset_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
virtual Void resetAssetPath( ::String name,::String ns,hx::Null< bool >  overrideOriginal)=0;
		Dynamic resetAssetPath_dyn();
virtual bool assetPathEquals( ::String name,::String ns)=0;
		Dynamic assetPathEquals_dyn();
virtual Dynamic get_assetFullPath( )=0;
		Dynamic get_assetFullPath_dyn();
virtual ::String get_assetType( )=0;
		Dynamic get_assetType_dyn();
virtual ::String get_assetNamespace( )=0;
		Dynamic get_assetNamespace_dyn();
virtual ::String set_id( ::String val)=0;
		Dynamic set_id_dyn();
virtual ::String get_id( )=0;
		Dynamic get_id_dyn();
virtual ::String set_name( ::String val)=0;
		Dynamic set_name_dyn();
virtual ::String get_name( )=0;
		Dynamic get_name_dyn();
};

#define DELEGATE_away3d_library_assets_IAsset \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \
virtual Void resetAssetPath( ::String name,::String ns,hx::Null< bool >  overrideOriginal) { return mDelegate->resetAssetPath(name,ns,overrideOriginal);}  \
virtual Dynamic resetAssetPath_dyn() { return mDelegate->resetAssetPath_dyn();}  \
virtual bool assetPathEquals( ::String name,::String ns) { return mDelegate->assetPathEquals(name,ns);}  \
virtual Dynamic assetPathEquals_dyn() { return mDelegate->assetPathEquals_dyn();}  \
virtual Dynamic get_assetFullPath( ) { return mDelegate->get_assetFullPath();}  \
virtual Dynamic get_assetFullPath_dyn() { return mDelegate->get_assetFullPath_dyn();}  \
virtual ::String get_assetType( ) { return mDelegate->get_assetType();}  \
virtual Dynamic get_assetType_dyn() { return mDelegate->get_assetType_dyn();}  \
virtual ::String get_assetNamespace( ) { return mDelegate->get_assetNamespace();}  \
virtual Dynamic get_assetNamespace_dyn() { return mDelegate->get_assetNamespace_dyn();}  \
virtual ::String set_id( ::String val) { return mDelegate->set_id(val);}  \
virtual Dynamic set_id_dyn() { return mDelegate->set_id_dyn();}  \
virtual ::String get_id( ) { return mDelegate->get_id();}  \
virtual Dynamic get_id_dyn() { return mDelegate->get_id_dyn();}  \
virtual ::String set_name( ::String val) { return mDelegate->set_name(val);}  \
virtual Dynamic set_name_dyn() { return mDelegate->set_name_dyn();}  \
virtual ::String get_name( ) { return mDelegate->get_name();}  \
virtual Dynamic get_name_dyn() { return mDelegate->get_name_dyn();}  \


template<typename IMPL>
class IAsset_delegate_ : public IAsset_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAsset_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_away3d_library_assets_IAsset
};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_IAsset */ 
