#ifndef INCLUDED_aglsl_Token
#define INCLUDED_aglsl_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Destination)
HX_DECLARE_CLASS1(aglsl,Token)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Token_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Token_obj OBJ_;
		Token_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Token_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Token_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Token"); }

		::aglsl::Destination b;
		::aglsl::Destination a;
		int opcode;
		::aglsl::Destination dest;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Token */ 
