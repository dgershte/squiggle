#ifndef INCLUDED_haxe_ds_WeakMap
#define INCLUDED_haxe_ds_WeakMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <IMap.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,WeakMap)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  WeakMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeakMap_obj OBJ_;
		WeakMap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< WeakMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WeakMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::IMap_obj *()
			{ return new ::IMap_delegate_< WeakMap_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("WeakMap"); }

		virtual bool exists( Dynamic key);
		Dynamic exists_dyn();

		virtual Dynamic get( Dynamic key);
		Dynamic get_dyn();

		virtual Void set( Dynamic key,Dynamic value);
		Dynamic set_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_WeakMap */ 
