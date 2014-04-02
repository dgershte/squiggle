#ifndef INCLUDED_flash_display3D_Context3D
#define INCLUDED_flash_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display3D,Context3D)
HX_DECLARE_CLASS2(flash,display3D,Context3DMipFilter)
HX_DECLARE_CLASS2(flash,display3D,Context3DProgramType)
HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFilter)
HX_DECLARE_CLASS2(flash,display3D,Context3DTextureFormat)
HX_DECLARE_CLASS2(flash,display3D,Context3DVertexBufferFormat)
HX_DECLARE_CLASS2(flash,display3D,Context3DWrapMode)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,display3D,Program3D)
HX_DECLARE_CLASS2(flash,display3D,SamplerState)
HX_DECLARE_CLASS2(flash,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(flash,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(flash,display3D,textures,Texture)
HX_DECLARE_CLASS3(flash,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,OpenGLView)
HX_DECLARE_CLASS2(openfl,gl,GLFramebuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLRenderbuffer)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flash{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  Context3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3D"); }

		virtual Void updateBlendStatus( );
		Dynamic updateBlendStatus_dyn();

		virtual Void setGLSLVertexBufferAt( ::String locationName,::flash::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset,::flash::display3D::Context3DVertexBufferFormat format);
		Dynamic setGLSLVertexBufferAt_dyn();

		virtual Void setVertexBufferAt( int index,::flash::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset,::flash::display3D::Context3DVertexBufferFormat format);
		Dynamic setVertexBufferAt_dyn();

		virtual Void setGLSLTextureAt( ::String locationName,::flash::display3D::textures::TextureBase texture,int textureIndex);
		Dynamic setGLSLTextureAt_dyn();

		virtual Void setTextureAt( int sampler,::flash::display3D::textures::TextureBase texture);
		Dynamic setTextureAt_dyn();

		virtual Void setStencilReferenceValue( int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		Dynamic setStencilReferenceValue_dyn();

		virtual Void setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail);
		Dynamic setStencilActions_dyn();

		virtual Void setScissorRectangle( ::flash::geom::Rectangle rectangle);
		Dynamic setScissorRectangle_dyn();

		virtual Void setTextureParameters( ::flash::display3D::textures::TextureBase texture,::flash::display3D::Context3DWrapMode wrap,::flash::display3D::Context3DTextureFilter filter,::flash::display3D::Context3DMipFilter mipfilter);
		Dynamic setTextureParameters_dyn();

		virtual Void setSamplerStateAt( int sampler,::flash::display3D::Context3DWrapMode wrap,::flash::display3D::Context3DTextureFilter filter,::flash::display3D::Context3DMipFilter mipfilter);
		Dynamic setSamplerStateAt_dyn();

		virtual Void setRenderToTexture( ::flash::display3D::textures::TextureBase texture,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  antiAlias,hx::Null< int >  surfaceSelector);
		Dynamic setRenderToTexture_dyn();

		virtual Void setRenderToBackBuffer( );
		Dynamic setRenderToBackBuffer_dyn();

		virtual Void removeRenderMethod( Dynamic func);
		Dynamic removeRenderMethod_dyn();

		virtual Void setRenderMethod( Dynamic func);
		Dynamic setRenderMethod_dyn();

		virtual Void setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  startIndex);
		Dynamic setGLSLProgramConstantsFromVector4_dyn();

		virtual Void setGLSLProgramConstantsFromMatrix( ::String locationName,::flash::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		Dynamic setGLSLProgramConstantsFromMatrix_dyn();

		virtual Void setGLSLProgramConstantsFromByteArray( ::String locationName,::flash::utils::ByteArray data,hx::Null< int >  byteArrayOffset);
		Dynamic setGLSLProgramConstantsFromByteArray_dyn();

		virtual Void setProgramConstantsFromVector( ::flash::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  numRegisters);
		Dynamic setProgramConstantsFromVector_dyn();

		virtual Void setProgramConstantsFromMatrix( ::flash::display3D::Context3DProgramType programType,int firstRegister,::flash::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		Dynamic setProgramConstantsFromMatrix_dyn();

		virtual Void setProgramConstantsFromByteArray( ::flash::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::flash::utils::ByteArray data,int byteArrayOffset);
		Dynamic setProgramConstantsFromByteArray_dyn();

		virtual ::String getUniformLocationNameFromAgalRegisterIndex( ::flash::display3D::Context3DProgramType programType,int firstRegister);
		Dynamic getUniformLocationNameFromAgalRegisterIndex_dyn();

		virtual Void setProgram( ::flash::display3D::Program3D program3D);
		Dynamic setProgram_dyn();

		virtual Void setDepthTest( bool depthMask,int passCompareMode);
		Dynamic setDepthTest_dyn();

		virtual Void setCulling( int triangleFaceToCull);
		Dynamic setCulling_dyn();

		virtual Void setColorMask( bool red,bool green,bool blue,bool alpha);
		Dynamic setColorMask_dyn();

		virtual Void setBlendFactors( int sourceFactor,int destinationFactor);
		Dynamic setBlendFactors_dyn();

		virtual Void present( );
		Dynamic present_dyn();

		virtual Void drawTriangles( ::flash::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		Dynamic drawTriangles_dyn();

		virtual Void drawToBitmapData( ::flash::display::BitmapData destination);
		Dynamic drawToBitmapData_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::flash::display3D::VertexBuffer3D createVertexBuffer( int numVertices,int data32PerVertex);
		Dynamic createVertexBuffer_dyn();

		virtual ::flash::display3D::textures::Texture createTexture( int width,int height,::flash::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createTexture_dyn();

		virtual ::flash::display3D::Program3D createProgram( );
		Dynamic createProgram_dyn();

		virtual ::flash::display3D::IndexBuffer3D createIndexBuffer( int numIndices);
		Dynamic createIndexBuffer_dyn();

		virtual ::flash::display3D::textures::CubeTexture createCubeTexture( int size,::flash::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createCubeTexture_dyn();

		virtual Void configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  enableDepthAndStencil);
		Dynamic configureBackBuffer_dyn();

		virtual Void clear( hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< int >  stencil,hx::Null< int >  mask);
		Dynamic clear_dyn();

		virtual Void addOGL( );
		Dynamic addOGL_dyn();

		virtual Void removeOGL( );
		Dynamic removeOGL_dyn();

		::flash::geom::Rectangle scrollRect;
		Array< ::Dynamic > samplerParameters;
		::openfl::gl::GLRenderbuffer renderbuffer;
		::openfl::gl::GLFramebuffer framebuffer;
		Array< ::Dynamic > texturesCreated;
		Array< ::Dynamic > programsCreated;
		Array< ::Dynamic > indexBuffersCreated;
		Array< ::Dynamic > vertexBuffersCreated;
		bool disposed;
		bool drawing;
		int stencilReadMask;
		int stencilRef;
		int stencilCompareMode;
		int blendSourceFactor;
		bool blendEnabled;
		int blendDestinationFactor;
		::openfl::display::OpenGLView ogl;
		::flash::display3D::Program3D currentProgram;
		bool enableErrorChecking;
		::String driverInfo;
		static int MAX_SAMPLERS;
};

} // end namespace flash
} // end namespace display3D

#endif /* INCLUDED_flash_display3D_Context3D */ 
