#ifndef INCLUDED_Anim
#define INCLUDED_Anim

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Anim)


class HXCPP_CLASS_ATTRIBUTES  Anim_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Anim_obj OBJ_;
		Anim_obj();
		Void __construct(int x,int y,int w,int h,int frameX,int frameY);

	public:
		static hx::ObjectPtr< Anim_obj > __new(int x,int y,int w,int h,int frameX,int frameY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Anim_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Anim"); }

		virtual Float getScaleV( );
		Dynamic getScaleV_dyn();

		virtual Float getScaleU( );
		Dynamic getScaleU_dyn();

		virtual Float getOffsetV( );
		Dynamic getOffsetV_dyn();

		virtual Float getOffsetU( );
		Dynamic getOffsetU_dyn();

		int frameY;
		int frameX;
		int h;
		int w;
		int y;
		int x;
};


#endif /* INCLUDED_Anim */ 
