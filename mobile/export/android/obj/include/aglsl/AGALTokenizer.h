#ifndef INCLUDED_aglsl_AGALTokenizer
#define INCLUDED_aglsl_AGALTokenizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,AGALTokenizer)
HX_DECLARE_CLASS1(aglsl,Description)
HX_DECLARE_CLASS1(aglsl,Destination)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  AGALTokenizer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGALTokenizer_obj OBJ_;
		AGALTokenizer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGALTokenizer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGALTokenizer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGALTokenizer"); }

		virtual Void readReg( ::aglsl::Destination s,int mh,::aglsl::Description desc,::flash::utils::ByteArray bytes);
		Dynamic readReg_dyn();

		virtual ::aglsl::Description decribeAGALByteArray( ::flash::utils::ByteArray bytes);
		Dynamic decribeAGALByteArray_dyn();

};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_AGALTokenizer */ 
