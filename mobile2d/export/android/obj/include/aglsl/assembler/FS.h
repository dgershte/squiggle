#ifndef INCLUDED_aglsl_assembler_FS
#define INCLUDED_aglsl_assembler_FS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aglsl,assembler,FS)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  FS_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FS_obj OBJ_;
		FS_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FS"); }

		int size;
		::String format;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_FS */ 
