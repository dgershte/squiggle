#ifndef INCLUDED_away3d_materials_methods_MethodVO
#define INCLUDED_away3d_materials_methods_MethodVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES  MethodVO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MethodVO_obj OBJ_;
		MethodVO_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MethodVO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MethodVO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MethodVO"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		bool useLightFallOff;
		int numLights;
		bool needsGlobalFragmentPos;
		bool needsGlobalVertexPos;
		bool needsSecondaryUV;
		bool needsUV;
		bool needsTangents;
		bool needsNormals;
		bool needsView;
		bool needsProjection;
		bool repeatTextures;
		bool useSmoothTextures;
		bool useMipmapping;
		int secondaryFragmentConstantsIndex;
		int fragmentConstantsIndex;
		int secondaryVertexConstantsIndex;
		int vertexConstantsIndex;
		int secondaryTexturesIndex;
		int texturesIndex;
		Array< Float > fragmentData;
		Array< Float > vertexData;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_MethodVO */ 
