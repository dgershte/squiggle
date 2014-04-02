#ifndef INCLUDED_aglsl_assembler_AGALMiniAssembler
#define INCLUDED_aglsl_assembler_AGALMiniAssembler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(aglsl,assembler,AGALMiniAssembler)
HX_DECLARE_CLASS2(aglsl,assembler,FS)
HX_DECLARE_CLASS2(aglsl,assembler,Part)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace aglsl{
namespace assembler{


class HXCPP_CLASS_ATTRIBUTES  AGALMiniAssembler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGALMiniAssembler_obj OBJ_;
		AGALMiniAssembler_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AGALMiniAssembler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AGALMiniAssembler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AGALMiniAssembler"); }

		virtual Void addHeader( ::String partname,int version);
		Dynamic addHeader_dyn();

		virtual bool emitSource( ::aglsl::assembler::Part pr,::String token,::aglsl::assembler::FS opsrc);
		Dynamic emitSource_dyn();

		virtual bool emitSampler( ::aglsl::assembler::Part pr,::String token,::aglsl::assembler::FS opsrc,Array< ::String > opts);
		Dynamic emitSampler_dyn();

		virtual int stringToSwizzle( ::String s);
		Dynamic stringToSwizzle_dyn();

		virtual int stringToMask( ::String s);
		Dynamic stringToMask_dyn();

		virtual bool emitDest( ::aglsl::assembler::Part pr,::String token,::String opdest);
		Dynamic emitDest_dyn();

		virtual Void emitZeroQword( Dynamic pr);
		Dynamic emitZeroQword_dyn();

		virtual Void emitZeroDword( ::aglsl::assembler::Part pr);
		Dynamic emitZeroDword_dyn();

		virtual Void emitOpcode( ::aglsl::assembler::Part pr,int opcode);
		Dynamic emitOpcode_dyn();

		virtual Void emitHeader( ::aglsl::assembler::Part pr);
		Dynamic emitHeader_dyn();

		virtual Array< ::String > getGroupMatches( ::EReg ereg,::String text,hx::Null< int >  groupCount);
		Dynamic getGroupMatches_dyn();

		virtual Array< ::String > getMatches( ::EReg ereg,::String text);
		Dynamic getMatches_dyn();

		virtual Void processLine( ::String line,int linenr);
		Dynamic processLine_dyn();

		virtual Dynamic assemble( ::String source,::String ext_part,Dynamic ext_version);
		Dynamic assemble_dyn();

		::aglsl::assembler::Part cur;
		::haxe::ds::StringMap r;
};

} // end namespace aglsl
} // end namespace assembler

#endif /* INCLUDED_aglsl_assembler_AGALMiniAssembler */ 
