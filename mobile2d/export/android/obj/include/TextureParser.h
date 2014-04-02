#ifndef INCLUDED_TextureParser
#define INCLUDED_TextureParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Anim)
HX_DECLARE_CLASS0(TextureParser)


class HXCPP_CLASS_ATTRIBUTES  TextureParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureParser_obj OBJ_;
		TextureParser_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextureParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureParser"); }

		static Array< ::Dynamic > parse( ::String xmlname);
		static Dynamic parse_dyn();

};


#endif /* INCLUDED_TextureParser */ 
