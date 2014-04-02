#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#define INCLUDED_away3d_animators_data_AnimationSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,data,AnimationSubGeometry)
HX_DECLARE_CLASS3(away3d,animators,data,ParticleAnimationData)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Context3DVertexBufferFormat)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  AnimationSubGeometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationSubGeometry_obj OBJ_;
		AnimationSubGeometry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AnimationSubGeometry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationSubGeometry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationSubGeometry"); }

		virtual int get_totalLenOfOneVertex( );
		Dynamic get_totalLenOfOneVertex_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		virtual Array< Float > get_vertexData( );
		Dynamic get_vertexData_dyn();

		virtual Void invalidateBuffer( );
		Dynamic invalidateBuffer_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void activateVertexBuffer( int index,int bufferOffset,::away3d::core::managers::Stage3DProxy stage3DProxy,::flash::display3D::Context3DVertexBufferFormat format);
		Dynamic activateVertexBuffer_dyn();

		virtual Void createVertexData( int numVertices,int totalLenOfOneVertex);
		Dynamic createVertexData_dyn();

		Array< ::Dynamic > animationParticles;
		Float previousTime;
		int numProcessedVertices;
		int _totalLenOfOneVertex;
		int _numVertices;
		Array< bool > _bufferDirty;
		Array< ::Dynamic > _bufferContext;
		Array< ::Dynamic > _vertexBuffer;
		Array< Float > _vertexData;
};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_AnimationSubGeometry */ 
