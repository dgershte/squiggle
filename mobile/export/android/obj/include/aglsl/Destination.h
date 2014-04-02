#ifndef INCLUDED_aglsl_Destination
#define INCLUDED_aglsl_Destination

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(aglsl,Destination)
namespace aglsl{


class HXCPP_CLASS_ATTRIBUTES  Destination_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Destination_obj OBJ_;
		Destination_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Destination_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Destination_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Destination"); }

		int indirectflag;
		int indexselect;
		int indexregtype;
		int filter;
		int mipmap;
		int wrap;
		int special;
		int readmode;
		int lodbiad;
		int swizzle;
		int indexoffset;
		int dim;
		int regtype;
		int regnum;
		int mask;
};

} // end namespace aglsl

#endif /* INCLUDED_aglsl_Destination */ 
