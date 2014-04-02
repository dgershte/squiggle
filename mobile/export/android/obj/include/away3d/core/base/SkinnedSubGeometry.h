#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#define INCLUDED_away3d_core_base_SkinnedSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/core/base/CompactSubGeometry.h>
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SkinnedSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Context3DVertexBufferFormat)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  SkinnedSubGeometry_obj : public ::away3d::core::base::CompactSubGeometry_obj{
	public:
		typedef ::away3d::core::base::CompactSubGeometry_obj super;
		typedef SkinnedSubGeometry_obj OBJ_;
		SkinnedSubGeometry_obj();
		Void __construct(int jointsPerVertex);

	public:
		static hx::ObjectPtr< SkinnedSubGeometry_obj > __new(int jointsPerVertex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkinnedSubGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkinnedSubGeometry"); }

		virtual Void updateJointIndexData( Array< Float > value);
		Dynamic updateJointIndexData_dyn();

		virtual Array< Float > get_jointIndexData( );
		Dynamic get_jointIndexData_dyn();

		virtual Void updateJointWeightsData( Array< Float > value);
		Dynamic updateJointWeightsData_dyn();

		virtual Array< Float > get_jointWeightsData( );
		Dynamic get_jointWeightsData_dyn();

		virtual Void condenseIndexData( );
		Dynamic condenseIndexData_dyn();

		virtual Void dispose( );

		virtual ::away3d::core::base::ISubGeometry clone( );

		virtual Void uploadData( int contextIndex);

		virtual Void activateJointIndexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateJointIndexBuffer_dyn();

		virtual Void activateJointWeightsBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateJointWeightsBuffer_dyn();

		virtual Void updateAnimatedData( Array< Float > value);
		Dynamic updateAnimatedData_dyn();

		virtual Array< Float > get_animatedData( );
		Dynamic get_animatedData_dyn();

		virtual int get_numCondensedJoints( );
		Dynamic get_numCondensedJoints_dyn();

		virtual Array< int > get_condensedIndexLookUp( );
		Dynamic get_condensedIndexLookUp_dyn();

		virtual ::flash::display3D::Context3DVertexBufferFormat getVertexBufferFormat( int size);
		Dynamic getVertexBufferFormat_dyn();

		int _numCondensedJoints;
		Array< int > _condensedIndexLookUp;
		Array< Float > _condensedJointIndexData;
		int _jointsPerVertex;
		Array< ::Dynamic > _jointIndexContext;
		Array< ::Dynamic > _jointWeightContext;
		Array< bool > _jointIndicesInvalid;
		Array< bool > _jointWeightsInvalid;
		Array< ::Dynamic > _jointIndexBuffer;
		Array< ::Dynamic > _jointWeightsBuffer;
		Array< Float > _animatedData;
		Array< Float > _jointIndexData;
		Array< Float > _jointWeightsData;
		::flash::display3D::Context3DVertexBufferFormat _bufferFormat;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SkinnedSubGeometry */ 
