#include <hxcpp.h>

#include <openfl/utils/WeakRef.h>
#include <openfl/utils/UInt8Array.h>
#include <openfl/utils/Int16Array.h>
#include <openfl/utils/Float32Array.h>
#include <openfl/utils/ArrayBufferView.h>
#include <openfl/gl/GLTexture.h>
#include <openfl/gl/GLShader.h>
#include <openfl/gl/GLRenderbuffer.h>
#include <openfl/gl/GLProgram.h>
#include <openfl/gl/GLFramebuffer.h>
#include <openfl/gl/GLBuffer.h>
#include <openfl/gl/GLObject.h>
#include <openfl/gl/GL.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/OpenGLView.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/FPS.h>
#include <openfl/display/DirectRenderer.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <haxe/xml/Fast.h>
#include <haxe/xml/_Fast/NodeListAccess.h>
#include <haxe/xml/_Fast/HasNodeAccess.h>
#include <haxe/xml/_Fast/HasAttribAccess.h>
#include <haxe/xml/_Fast/AttribAccess.h>
#include <haxe/xml/_Fast/NodeAccess.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/ds/WeakMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/utils/IDataOutput.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/ScreenMode.h>
#include <flash/system/PixelFormat.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/media/SoundTransform.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/AudioThreadState.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/InternalAudioType.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Transform.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/events/UncaughtErrorEvents.h>
#include <flash/events/UncaughtErrorEvent.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/display3D/textures/Texture.h>
#include <flash/display3D/textures/CubeTexture.h>
#include <flash/display3D/textures/TextureBase.h>
#include <flash/display3D/shaders/AGLSLShaderUtils.h>
#include <flash/display3D/VertexBuffer3D.h>
#include <flash/display3D/SamplerState.h>
#include <flash/display3D/Program3D.h>
#include <flash/display3D/IndexBuffer3D.h>
#include <flash/display3D/Context3DWrapMode.h>
#include <flash/display3D/Context3DVertexBufferFormat.h>
#include <flash/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#include <flash/display3D/Context3DTextureFormat.h>
#include <flash/display3D/Context3DTextureFilter.h>
#include <flash/display3D/Context3DRenderMode.h>
#include <flash/display3D/Context3DProgramType.h>
#include <flash/display3D/Context3DMipFilter.h>
#include <flash/display3D/_Context3DCompareMode/Context3DCompareMode_Impl_.h>
#include <flash/display3D/Context3DClearMask.h>
#include <flash/display3D/_Context3DBlendFactor/Context3DBlendFactor_Impl_.h>
#include <flash/display3D/AGLSLContext3D.h>
#include <flash/display3D/Context3D.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/Stage3D.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/FrameLabel.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/Bitmap.h>
#include <flash/Memory.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <away3d/utils/Cast.h>
#include <away3d/utils/ArrayUtils.h>
#include <away3d/tools/utils/TextureUtils.h>
#include <away3d/tools/utils/GeomUtil.h>
#include <away3d/textures/RenderTexture.h>
#include <away3d/textures/RenderCubeTexture.h>
#include <away3d/textures/BitmapTexture.h>
#include <away3d/textures/Texture2DBase.h>
#include <away3d/textures/BitmapCubeTexture.h>
#include <away3d/textures/CubeTextureBase.h>
#include <away3d/textures/TextureProxyBase.h>
#include <away3d/primitives/WireframeSphere.h>
#include <away3d/primitives/WireframeCube.h>
#include <away3d/primitives/WireframePrimitiveBase.h>
#include <away3d/primitives/SkyBox.h>
#include <away3d/primitives/PlaneGeometry.h>
#include <away3d/primitives/PrimitiveBase.h>
#include <away3d/primitives/LineSegment.h>
#include <away3d/primitives/data/Segment.h>
#include <away3d/materials/utils/MipmapGenerator.h>
#include <flash/geom/Matrix.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <away3d/materials/utils/DefaultMaterialManager.h>
#include <away3d/materials/passes/SuperShaderPass.h>
#include <away3d/materials/passes/SkyBoxPass.h>
#include <away3d/materials/passes/SegmentPass.h>
#include <away3d/materials/passes/DistanceMapPass.h>
#include <away3d/materials/passes/DepthMapPass.h>
#include <away3d/materials/passes/CompiledPass.h>
#include <away3d/materials/passes/MaterialPassBase.h>
#include <away3d/materials/methods/ShadowMapMethodBase.h>
#include <away3d/materials/methods/ShaderMethodSetup.h>
#include <away3d/materials/methods/MethodVOSet.h>
#include <away3d/materials/methods/MethodVO.h>
#include <away3d/materials/methods/FogMethod.h>
#include <away3d/materials/methods/ColorTransformMethod.h>
#include <away3d/materials/methods/EffectMethodBase.h>
#include <away3d/materials/methods/BasicSpecularMethod.h>
#include <away3d/materials/methods/BasicNormalMethod.h>
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#include <away3d/materials/methods/LightingMethodBase.h>
#include <away3d/materials/methods/BasicAmbientMethod.h>
#include <away3d/materials/methods/ShadingMethodBase.h>
#include <away3d/materials/lightpickers/LightPickerBase.h>
#include <away3d/materials/compilation/SuperShaderCompiler.h>
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#include <away3d/materials/compilation/ShaderRegisterData.h>
#include <away3d/materials/compilation/ShaderCompiler.h>
#include <away3d/materials/compilation/RegisterPool.h>
#include <haxe/ds/StringMap.h>
#include <away3d/materials/compilation/MethodDependencyCounter.h>
#include <away3d/materials/TextureMaterial.h>
#include <away3d/materials/SkyBoxMaterial.h>
#include <away3d/materials/SegmentMaterial.h>
#include <away3d/materials/LightSources.h>
#include <away3d/materials/ColorMaterial.h>
#include <away3d/materials/SinglePassMaterialBase.h>
#include <away3d/materials/MaterialBase.h>
#include <away3d/lights/shadowmaps/DirectionalShadowMapper.h>
#include <away3d/lights/shadowmaps/CubeMapShadowMapper.h>
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#include <away3d/lights/PointLight.h>
#include <away3d/lights/LightProbe.h>
#include <away3d/lights/DirectionalLight.h>
#include <away3d/lights/LightBase.h>
#include <away3d/library/assets/AssetType.h>
#include <away3d/filters/tasks/Filter3DTaskBase.h>
#include <away3d/filters/Filter3DBase.h>
#include <away3d/events/TouchEvent3D.h>
#include <away3d/events/Stage3DEvent.h>
#include <away3d/events/ShadingMethodEvent.h>
#include <away3d/events/Scene3DEvent.h>
#include <away3d/events/Object3DEvent.h>
#include <away3d/events/LightEvent.h>
#include <away3d/events/LensEvent.h>
#include <away3d/events/GeometryEvent.h>
#include <away3d/events/CameraEvent.h>
#include <away3d/events/AssetEvent.h>
#include <away3d/errors/CastError.h>
#include <away3d/errors/AbstractMethodError.h>
#include <flash/errors/Error.h>
#include <away3d/entities/SubSet.h>
#include <away3d/entities/SegRef.h>
#include <away3d/entities/SegmentSet.h>
#include <away3d/entities/Mesh.h>
#include <away3d/debug/Debug.h>
#include <away3d/core/traverse/ShadowCasterCollector.h>
#include <away3d/core/sort/RenderableMergeSort.h>
#include <away3d/core/sort/IEntitySorter.h>
#include <away3d/core/render/Filter3DRenderer.h>
#include <away3d/core/render/DepthRenderer.h>
#include <away3d/core/render/DefaultRenderer.h>
#include <away3d/core/render/RendererBase.h>
#include <away3d/core/render/BackgroundImageRenderer.h>
#include <away3d/core/pick/PickingType.h>
#include <flash/geom/Point.h>
#include <away3d/core/pick/ShaderPicker.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Vector3D.h>
#include <away3d/core/traverse/RaycastCollector.h>
#include <away3d/core/traverse/EntityCollector.h>
#include <away3d/core/traverse/PartitionTraverser.h>
#include <away3d/core/pick/RaycastPicker.h>
#include <away3d/core/pick/PickingCollisionVO.h>
#include <away3d/core/pick/IPickingCollider.h>
#include <away3d/core/pick/IPicker.h>
#include <away3d/core/partition/SkyBoxNode.h>
#include <away3d/core/partition/RenderableNode.h>
#include <away3d/core/partition/PointLightNode.h>
#include <away3d/core/partition/Partition3D.h>
#include <away3d/core/partition/NullNode.h>
#include <away3d/core/partition/MeshNode.h>
#include <away3d/core/partition/LightProbeNode.h>
#include <away3d/core/partition/LightNode.h>
#include <away3d/core/partition/DirectionalLightNode.h>
#include <away3d/core/partition/CameraNode.h>
#include <away3d/core/partition/EntityNode.h>
#include <away3d/core/partition/NodeBase.h>
#include <away3d/core/math/Quaternion.h>
#include <away3d/core/math/PlaneClassification.h>
#include <away3d/core/math/Plane3D.h>
#include <away3d/core/math/Matrix3DUtils.h>
#include <flash/geom/Matrix3D.h>
#include <away3d/core/math/MathConsts.h>
#include <away3d/core/managers/TouchPoint.h>
#include <away3d/core/managers/Touch3DManager.h>
#include <haxe/ds/IntMap.h>
#include <away3d/core/managers/Stage3DProxy.h>
#include <away3d/core/managers/Stage3DManagerSingletonEnforcer.h>
#include <away3d/core/managers/Stage3DManager.h>
#include <away3d/core/managers/SingletonEnforcer.h>
#include <away3d/core/managers/RTTBufferManager.h>
#include <away3d/core/managers/Mouse3DManager.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/events/EventPhase.h>
#include <away3d/events/MouseEvent3D.h>
#include <flash/events/Event.h>
#include <away3d/core/managers/AGALProgram3DCacheSingletonEnforcer.h>
#include <away3d/core/managers/AGALProgram3DCache.h>
#include <away3d/core/data/RenderableListItemPool.h>
#include <away3d/core/data/RenderableListItem.h>
#include <away3d/core/data/EntityListItemPool.h>
#include <away3d/core/data/EntityListItem.h>
#include <away3d/core/base/data/ParticleData.h>
#include <away3d/core/base/SubMesh.h>
#include <away3d/core/base/SubGeometry.h>
#include <away3d/core/base/SkinnedSubGeometry.h>
#include <away3d/core/base/IRenderable.h>
#include <away3d/core/base/IMaterialOwner.h>
#include <away3d/core/base/Geometry.h>
#include <away3d/core/base/CompactSubGeometry.h>
#include <away3d/core/base/ISubGeometry.h>
#include <away3d/core/base/SubGeometryBase.h>
#include <away3d/controllers/ControllerBase.h>
#include <away3d/containers/View3D.h>
#include <away3d/containers/Scene3D.h>
#include <away3d/cameras/lenses/PerspectiveLens.h>
#include <away3d/cameras/lenses/FreeMatrixLens.h>
#include <away3d/cameras/lenses/LensBase.h>
#include <away3d/cameras/Camera3D.h>
#include <away3d/entities/Entity.h>
#include <away3d/containers/ObjectContainer3D.h>
#include <away3d/core/base/Object3D.h>
#include <away3d/bounds/NullBounds.h>
#include <away3d/bounds/BoundingSphere.h>
#include <away3d/bounds/AxisAlignedBoundingBox.h>
#include <away3d/bounds/BoundingVolumeBase.h>
#include <away3d/animators/states/AnimationStateBase.h>
#include <away3d/animators/states/IAnimationState.h>
#include <away3d/animators/nodes/AnimationNodeBase.h>
#include <away3d/library/assets/IAsset.h>
#include <away3d/library/assets/NamedAssetBase.h>
#include <away3d/animators/data/ParticleAnimationData.h>
#include <away3d/animators/data/AnimationSubGeometry.h>
#include <away3d/animators/data/AnimationRegisterCache.h>
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#include <away3d/animators/IAnimator.h>
#include <away3d/animators/IAnimationSet.h>
#include <aglsl/assembler/SamplerMap.h>
#include <aglsl/assembler/Sampler.h>
#include <aglsl/assembler/RegMap.h>
#include <aglsl/assembler/Reg.h>
#include <aglsl/assembler/Part.h>
#include <aglsl/assembler/OpcodeMap.h>
#include <aglsl/assembler/Opcode.h>
#include <aglsl/assembler/Flags.h>
#include <aglsl/assembler/FS.h>
#include <aglsl/assembler/AGALMiniAssembler.h>
#include <aglsl/Token.h>
#include <aglsl/OpLUT.h>
#include <aglsl/Mapping.h>
#include <aglsl/Header.h>
#include <aglsl/Destination.h>
#include <aglsl/Description.h>
#include <aglsl/Context3D.h>
#include <aglsl/Sampler.h>
#include <aglsl/AGLSLParser.h>
#include <aglsl/AGLSLCompiler.h>
#include <aglsl/AGALTokenizer.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <OpenFLStage3D.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <TextureParser.h>
#include <Anim.h>
#include <Spritesheet.h>
#include <CharImg.h>
#include <EnvPosZ.h>
#include <EnvPosY.h>
#include <EnvPosX.h>
#include <EnvNegZ.h>
#include <EnvNegY.h>
#include <EnvNegX.h>
#include <flash/display/BitmapData.h>
#include <DocumentClass.h>
#include <BasicTest.h>
#include <flash/display/Sprite.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/DisplayObject.h>
#include <flash/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::UInt8Array_obj::__register();
::openfl::utils::Int16Array_obj::__register();
::openfl::utils::Float32Array_obj::__register();
::openfl::utils::ArrayBufferView_obj::__register();
::openfl::gl::GLTexture_obj::__register();
::openfl::gl::GLShader_obj::__register();
::openfl::gl::GLRenderbuffer_obj::__register();
::openfl::gl::GLProgram_obj::__register();
::openfl::gl::GLFramebuffer_obj::__register();
::openfl::gl::GLBuffer_obj::__register();
::openfl::gl::GLObject_obj::__register();
::openfl::gl::GL_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::OpenGLView_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::FPS_obj::__register();
::openfl::display::DirectRenderer_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::haxe::xml::Fast_obj::__register();
::haxe::xml::_Fast::NodeListAccess_obj::__register();
::haxe::xml::_Fast::HasNodeAccess_obj::__register();
::haxe::xml::_Fast::HasAttribAccess_obj::__register();
::haxe::xml::_Fast::AttribAccess_obj::__register();
::haxe::xml::_Fast::NodeAccess_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::ds::WeakMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::utils::IDataOutput_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::ScreenMode_obj::__register();
::flash::system::PixelFormat_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::media::SoundTransform_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::AudioThreadState_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::InternalAudioType_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::events::UncaughtErrorEvents_obj::__register();
::flash::events::UncaughtErrorEvent_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::display3D::textures::Texture_obj::__register();
::flash::display3D::textures::CubeTexture_obj::__register();
::flash::display3D::textures::TextureBase_obj::__register();
::flash::display3D::shaders::AGLSLShaderUtils_obj::__register();
::flash::display3D::VertexBuffer3D_obj::__register();
::flash::display3D::SamplerState_obj::__register();
::flash::display3D::Program3D_obj::__register();
::flash::display3D::IndexBuffer3D_obj::__register();
::flash::display3D::Context3DWrapMode_obj::__register();
::flash::display3D::Context3DVertexBufferFormat_obj::__register();
::flash::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__register();
::flash::display3D::Context3DTextureFormat_obj::__register();
::flash::display3D::Context3DTextureFilter_obj::__register();
::flash::display3D::Context3DRenderMode_obj::__register();
::flash::display3D::Context3DProgramType_obj::__register();
::flash::display3D::Context3DMipFilter_obj::__register();
::flash::display3D::_Context3DCompareMode::Context3DCompareMode_Impl__obj::__register();
::flash::display3D::Context3DClearMask_obj::__register();
::flash::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::__register();
::flash::display3D::AGLSLContext3D_obj::__register();
::flash::display3D::Context3D_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::Stage3D_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::FrameLabel_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::Bitmap_obj::__register();
::flash::Memory_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::away3d::utils::Cast_obj::__register();
::away3d::utils::ArrayUtils_obj::__register();
::away3d::tools::utils::TextureUtils_obj::__register();
::away3d::tools::utils::GeomUtil_obj::__register();
::away3d::textures::RenderTexture_obj::__register();
::away3d::textures::RenderCubeTexture_obj::__register();
::away3d::textures::BitmapTexture_obj::__register();
::away3d::textures::Texture2DBase_obj::__register();
::away3d::textures::BitmapCubeTexture_obj::__register();
::away3d::textures::CubeTextureBase_obj::__register();
::away3d::textures::TextureProxyBase_obj::__register();
::away3d::primitives::WireframeSphere_obj::__register();
::away3d::primitives::WireframeCube_obj::__register();
::away3d::primitives::WireframePrimitiveBase_obj::__register();
::away3d::primitives::SkyBox_obj::__register();
::away3d::primitives::PlaneGeometry_obj::__register();
::away3d::primitives::PrimitiveBase_obj::__register();
::away3d::primitives::LineSegment_obj::__register();
::away3d::primitives::data::Segment_obj::__register();
::away3d::materials::utils::MipmapGenerator_obj::__register();
::flash::geom::Matrix_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::away3d::materials::utils::DefaultMaterialManager_obj::__register();
::away3d::materials::passes::SuperShaderPass_obj::__register();
::away3d::materials::passes::SkyBoxPass_obj::__register();
::away3d::materials::passes::SegmentPass_obj::__register();
::away3d::materials::passes::DistanceMapPass_obj::__register();
::away3d::materials::passes::DepthMapPass_obj::__register();
::away3d::materials::passes::CompiledPass_obj::__register();
::away3d::materials::passes::MaterialPassBase_obj::__register();
::away3d::materials::methods::ShadowMapMethodBase_obj::__register();
::away3d::materials::methods::ShaderMethodSetup_obj::__register();
::away3d::materials::methods::MethodVOSet_obj::__register();
::away3d::materials::methods::MethodVO_obj::__register();
::away3d::materials::methods::FogMethod_obj::__register();
::away3d::materials::methods::ColorTransformMethod_obj::__register();
::away3d::materials::methods::EffectMethodBase_obj::__register();
::away3d::materials::methods::BasicSpecularMethod_obj::__register();
::away3d::materials::methods::BasicNormalMethod_obj::__register();
::away3d::materials::methods::BasicDiffuseMethod_obj::__register();
::away3d::materials::methods::LightingMethodBase_obj::__register();
::away3d::materials::methods::BasicAmbientMethod_obj::__register();
::away3d::materials::methods::ShadingMethodBase_obj::__register();
::away3d::materials::lightpickers::LightPickerBase_obj::__register();
::away3d::materials::compilation::SuperShaderCompiler_obj::__register();
::away3d::materials::compilation::ShaderRegisterElement_obj::__register();
::away3d::materials::compilation::ShaderRegisterData_obj::__register();
::away3d::materials::compilation::ShaderCompiler_obj::__register();
::away3d::materials::compilation::RegisterPool_obj::__register();
::haxe::ds::StringMap_obj::__register();
::away3d::materials::compilation::MethodDependencyCounter_obj::__register();
::away3d::materials::TextureMaterial_obj::__register();
::away3d::materials::SkyBoxMaterial_obj::__register();
::away3d::materials::SegmentMaterial_obj::__register();
::away3d::materials::LightSources_obj::__register();
::away3d::materials::ColorMaterial_obj::__register();
::away3d::materials::SinglePassMaterialBase_obj::__register();
::away3d::materials::MaterialBase_obj::__register();
::away3d::lights::shadowmaps::DirectionalShadowMapper_obj::__register();
::away3d::lights::shadowmaps::CubeMapShadowMapper_obj::__register();
::away3d::lights::shadowmaps::ShadowMapperBase_obj::__register();
::away3d::lights::PointLight_obj::__register();
::away3d::lights::LightProbe_obj::__register();
::away3d::lights::DirectionalLight_obj::__register();
::away3d::lights::LightBase_obj::__register();
::away3d::library::assets::AssetType_obj::__register();
::away3d::filters::tasks::Filter3DTaskBase_obj::__register();
::away3d::filters::Filter3DBase_obj::__register();
::away3d::events::TouchEvent3D_obj::__register();
::away3d::events::Stage3DEvent_obj::__register();
::away3d::events::ShadingMethodEvent_obj::__register();
::away3d::events::Scene3DEvent_obj::__register();
::away3d::events::Object3DEvent_obj::__register();
::away3d::events::LightEvent_obj::__register();
::away3d::events::LensEvent_obj::__register();
::away3d::events::GeometryEvent_obj::__register();
::away3d::events::CameraEvent_obj::__register();
::away3d::events::AssetEvent_obj::__register();
::away3d::errors::CastError_obj::__register();
::away3d::errors::AbstractMethodError_obj::__register();
::flash::errors::Error_obj::__register();
::away3d::entities::SubSet_obj::__register();
::away3d::entities::SegRef_obj::__register();
::away3d::entities::SegmentSet_obj::__register();
::away3d::entities::Mesh_obj::__register();
::away3d::debug::Debug_obj::__register();
::away3d::core::traverse::ShadowCasterCollector_obj::__register();
::away3d::core::sort::RenderableMergeSort_obj::__register();
::away3d::core::sort::IEntitySorter_obj::__register();
::away3d::core::render::Filter3DRenderer_obj::__register();
::away3d::core::render::DepthRenderer_obj::__register();
::away3d::core::render::DefaultRenderer_obj::__register();
::away3d::core::render::RendererBase_obj::__register();
::away3d::core::render::BackgroundImageRenderer_obj::__register();
::away3d::core::pick::PickingType_obj::__register();
::flash::geom::Point_obj::__register();
::away3d::core::pick::ShaderPicker_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Vector3D_obj::__register();
::away3d::core::traverse::RaycastCollector_obj::__register();
::away3d::core::traverse::EntityCollector_obj::__register();
::away3d::core::traverse::PartitionTraverser_obj::__register();
::away3d::core::pick::RaycastPicker_obj::__register();
::away3d::core::pick::PickingCollisionVO_obj::__register();
::away3d::core::pick::IPickingCollider_obj::__register();
::away3d::core::pick::IPicker_obj::__register();
::away3d::core::partition::SkyBoxNode_obj::__register();
::away3d::core::partition::RenderableNode_obj::__register();
::away3d::core::partition::PointLightNode_obj::__register();
::away3d::core::partition::Partition3D_obj::__register();
::away3d::core::partition::NullNode_obj::__register();
::away3d::core::partition::MeshNode_obj::__register();
::away3d::core::partition::LightProbeNode_obj::__register();
::away3d::core::partition::LightNode_obj::__register();
::away3d::core::partition::DirectionalLightNode_obj::__register();
::away3d::core::partition::CameraNode_obj::__register();
::away3d::core::partition::EntityNode_obj::__register();
::away3d::core::partition::NodeBase_obj::__register();
::away3d::core::math::Quaternion_obj::__register();
::away3d::core::math::PlaneClassification_obj::__register();
::away3d::core::math::Plane3D_obj::__register();
::away3d::core::math::Matrix3DUtils_obj::__register();
::flash::geom::Matrix3D_obj::__register();
::away3d::core::math::MathConsts_obj::__register();
::away3d::core::managers::TouchPoint_obj::__register();
::away3d::core::managers::Touch3DManager_obj::__register();
::haxe::ds::IntMap_obj::__register();
::away3d::core::managers::Stage3DProxy_obj::__register();
::away3d::core::managers::Stage3DManagerSingletonEnforcer_obj::__register();
::away3d::core::managers::Stage3DManager_obj::__register();
::away3d::core::managers::SingletonEnforcer_obj::__register();
::away3d::core::managers::RTTBufferManager_obj::__register();
::away3d::core::managers::Mouse3DManager_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::events::EventPhase_obj::__register();
::away3d::events::MouseEvent3D_obj::__register();
::flash::events::Event_obj::__register();
::away3d::core::managers::AGALProgram3DCacheSingletonEnforcer_obj::__register();
::away3d::core::managers::AGALProgram3DCache_obj::__register();
::away3d::core::data::RenderableListItemPool_obj::__register();
::away3d::core::data::RenderableListItem_obj::__register();
::away3d::core::data::EntityListItemPool_obj::__register();
::away3d::core::data::EntityListItem_obj::__register();
::away3d::core::base::data::ParticleData_obj::__register();
::away3d::core::base::SubMesh_obj::__register();
::away3d::core::base::SubGeometry_obj::__register();
::away3d::core::base::SkinnedSubGeometry_obj::__register();
::away3d::core::base::IRenderable_obj::__register();
::away3d::core::base::IMaterialOwner_obj::__register();
::away3d::core::base::Geometry_obj::__register();
::away3d::core::base::CompactSubGeometry_obj::__register();
::away3d::core::base::ISubGeometry_obj::__register();
::away3d::core::base::SubGeometryBase_obj::__register();
::away3d::controllers::ControllerBase_obj::__register();
::away3d::containers::View3D_obj::__register();
::away3d::containers::Scene3D_obj::__register();
::away3d::cameras::lenses::PerspectiveLens_obj::__register();
::away3d::cameras::lenses::FreeMatrixLens_obj::__register();
::away3d::cameras::lenses::LensBase_obj::__register();
::away3d::cameras::Camera3D_obj::__register();
::away3d::entities::Entity_obj::__register();
::away3d::containers::ObjectContainer3D_obj::__register();
::away3d::core::base::Object3D_obj::__register();
::away3d::bounds::NullBounds_obj::__register();
::away3d::bounds::BoundingSphere_obj::__register();
::away3d::bounds::AxisAlignedBoundingBox_obj::__register();
::away3d::bounds::BoundingVolumeBase_obj::__register();
::away3d::animators::states::AnimationStateBase_obj::__register();
::away3d::animators::states::IAnimationState_obj::__register();
::away3d::animators::nodes::AnimationNodeBase_obj::__register();
::away3d::library::assets::IAsset_obj::__register();
::away3d::library::assets::NamedAssetBase_obj::__register();
::away3d::animators::data::ParticleAnimationData_obj::__register();
::away3d::animators::data::AnimationSubGeometry_obj::__register();
::away3d::animators::data::AnimationRegisterCache_obj::__register();
::away3d::materials::compilation::ShaderRegisterCache_obj::__register();
::away3d::animators::IAnimator_obj::__register();
::away3d::animators::IAnimationSet_obj::__register();
::aglsl::assembler::SamplerMap_obj::__register();
::aglsl::assembler::Sampler_obj::__register();
::aglsl::assembler::RegMap_obj::__register();
::aglsl::assembler::Reg_obj::__register();
::aglsl::assembler::Part_obj::__register();
::aglsl::assembler::OpcodeMap_obj::__register();
::aglsl::assembler::Opcode_obj::__register();
::aglsl::assembler::Flags_obj::__register();
::aglsl::assembler::FS_obj::__register();
::aglsl::assembler::AGALMiniAssembler_obj::__register();
::aglsl::Token_obj::__register();
::aglsl::OpLUT_obj::__register();
::aglsl::Mapping_obj::__register();
::aglsl::Header_obj::__register();
::aglsl::Destination_obj::__register();
::aglsl::Description_obj::__register();
::aglsl::Context3D_obj::__register();
::aglsl::Sampler_obj::__register();
::aglsl::AGLSLParser_obj::__register();
::aglsl::AGLSLCompiler_obj::__register();
::aglsl::AGALTokenizer_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::OpenFLStage3D_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::TextureParser_obj::__register();
::Anim_obj::__register();
::Spritesheet_obj::__register();
::CharImg_obj::__register();
::EnvPosZ_obj::__register();
::EnvPosY_obj::__register();
::EnvPosX_obj::__register();
::EnvNegZ_obj::__register();
::EnvNegY_obj::__register();
::EnvNegX_obj::__register();
::flash::display::BitmapData_obj::__register();
::DocumentClass_obj::__register();
::BasicTest_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::flash::Lib_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::Sprite_obj::__boot();
::BasicTest_obj::__boot();
::DocumentClass_obj::__boot();
::flash::display::BitmapData_obj::__boot();
::EnvNegX_obj::__boot();
::EnvNegY_obj::__boot();
::EnvNegZ_obj::__boot();
::EnvPosX_obj::__boot();
::EnvPosY_obj::__boot();
::EnvPosZ_obj::__boot();
::CharImg_obj::__boot();
::Spritesheet_obj::__boot();
::Anim_obj::__boot();
::TextureParser_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::OpenFLStage3D_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::aglsl::AGALTokenizer_obj::__boot();
::aglsl::AGLSLCompiler_obj::__boot();
::aglsl::AGLSLParser_obj::__boot();
::aglsl::Sampler_obj::__boot();
::aglsl::Context3D_obj::__boot();
::aglsl::Description_obj::__boot();
::aglsl::Destination_obj::__boot();
::aglsl::Header_obj::__boot();
::aglsl::Mapping_obj::__boot();
::aglsl::OpLUT_obj::__boot();
::aglsl::Token_obj::__boot();
::aglsl::assembler::AGALMiniAssembler_obj::__boot();
::aglsl::assembler::FS_obj::__boot();
::aglsl::assembler::Flags_obj::__boot();
::aglsl::assembler::Opcode_obj::__boot();
::aglsl::assembler::OpcodeMap_obj::__boot();
::aglsl::assembler::Part_obj::__boot();
::aglsl::assembler::Reg_obj::__boot();
::aglsl::assembler::RegMap_obj::__boot();
::aglsl::assembler::Sampler_obj::__boot();
::aglsl::assembler::SamplerMap_obj::__boot();
::away3d::animators::IAnimationSet_obj::__boot();
::away3d::animators::IAnimator_obj::__boot();
::away3d::materials::compilation::ShaderRegisterCache_obj::__boot();
::away3d::animators::data::AnimationRegisterCache_obj::__boot();
::away3d::animators::data::AnimationSubGeometry_obj::__boot();
::away3d::animators::data::ParticleAnimationData_obj::__boot();
::away3d::library::assets::NamedAssetBase_obj::__boot();
::away3d::library::assets::IAsset_obj::__boot();
::away3d::animators::nodes::AnimationNodeBase_obj::__boot();
::away3d::animators::states::IAnimationState_obj::__boot();
::away3d::animators::states::AnimationStateBase_obj::__boot();
::away3d::bounds::BoundingVolumeBase_obj::__boot();
::away3d::bounds::AxisAlignedBoundingBox_obj::__boot();
::away3d::bounds::BoundingSphere_obj::__boot();
::away3d::bounds::NullBounds_obj::__boot();
::away3d::core::base::Object3D_obj::__boot();
::away3d::containers::ObjectContainer3D_obj::__boot();
::away3d::entities::Entity_obj::__boot();
::away3d::cameras::Camera3D_obj::__boot();
::away3d::cameras::lenses::LensBase_obj::__boot();
::away3d::cameras::lenses::FreeMatrixLens_obj::__boot();
::away3d::cameras::lenses::PerspectiveLens_obj::__boot();
::away3d::containers::Scene3D_obj::__boot();
::away3d::containers::View3D_obj::__boot();
::away3d::controllers::ControllerBase_obj::__boot();
::away3d::core::base::SubGeometryBase_obj::__boot();
::away3d::core::base::ISubGeometry_obj::__boot();
::away3d::core::base::CompactSubGeometry_obj::__boot();
::away3d::core::base::Geometry_obj::__boot();
::away3d::core::base::IMaterialOwner_obj::__boot();
::away3d::core::base::IRenderable_obj::__boot();
::away3d::core::base::SkinnedSubGeometry_obj::__boot();
::away3d::core::base::SubGeometry_obj::__boot();
::away3d::core::base::SubMesh_obj::__boot();
::away3d::core::base::data::ParticleData_obj::__boot();
::away3d::core::data::EntityListItem_obj::__boot();
::away3d::core::data::EntityListItemPool_obj::__boot();
::away3d::core::data::RenderableListItem_obj::__boot();
::away3d::core::data::RenderableListItemPool_obj::__boot();
::away3d::core::managers::AGALProgram3DCache_obj::__boot();
::away3d::core::managers::AGALProgram3DCacheSingletonEnforcer_obj::__boot();
::flash::events::Event_obj::__boot();
::away3d::events::MouseEvent3D_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::away3d::core::managers::Mouse3DManager_obj::__boot();
::away3d::core::managers::RTTBufferManager_obj::__boot();
::away3d::core::managers::SingletonEnforcer_obj::__boot();
::away3d::core::managers::Stage3DManager_obj::__boot();
::away3d::core::managers::Stage3DManagerSingletonEnforcer_obj::__boot();
::away3d::core::managers::Stage3DProxy_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::away3d::core::managers::Touch3DManager_obj::__boot();
::away3d::core::managers::TouchPoint_obj::__boot();
::away3d::core::math::MathConsts_obj::__boot();
::flash::geom::Matrix3D_obj::__boot();
::away3d::core::math::Matrix3DUtils_obj::__boot();
::away3d::core::math::Plane3D_obj::__boot();
::away3d::core::math::PlaneClassification_obj::__boot();
::away3d::core::math::Quaternion_obj::__boot();
::away3d::core::partition::NodeBase_obj::__boot();
::away3d::core::partition::EntityNode_obj::__boot();
::away3d::core::partition::CameraNode_obj::__boot();
::away3d::core::partition::DirectionalLightNode_obj::__boot();
::away3d::core::partition::LightNode_obj::__boot();
::away3d::core::partition::LightProbeNode_obj::__boot();
::away3d::core::partition::MeshNode_obj::__boot();
::away3d::core::partition::NullNode_obj::__boot();
::away3d::core::partition::Partition3D_obj::__boot();
::away3d::core::partition::PointLightNode_obj::__boot();
::away3d::core::partition::RenderableNode_obj::__boot();
::away3d::core::partition::SkyBoxNode_obj::__boot();
::away3d::core::pick::IPicker_obj::__boot();
::away3d::core::pick::IPickingCollider_obj::__boot();
::away3d::core::pick::PickingCollisionVO_obj::__boot();
::away3d::core::pick::RaycastPicker_obj::__boot();
::away3d::core::traverse::PartitionTraverser_obj::__boot();
::away3d::core::traverse::EntityCollector_obj::__boot();
::away3d::core::traverse::RaycastCollector_obj::__boot();
::flash::geom::Vector3D_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::away3d::core::pick::ShaderPicker_obj::__boot();
::flash::geom::Point_obj::__boot();
::away3d::core::pick::PickingType_obj::__boot();
::away3d::core::render::BackgroundImageRenderer_obj::__boot();
::away3d::core::render::RendererBase_obj::__boot();
::away3d::core::render::DefaultRenderer_obj::__boot();
::away3d::core::render::DepthRenderer_obj::__boot();
::away3d::core::render::Filter3DRenderer_obj::__boot();
::away3d::core::sort::IEntitySorter_obj::__boot();
::away3d::core::sort::RenderableMergeSort_obj::__boot();
::away3d::core::traverse::ShadowCasterCollector_obj::__boot();
::away3d::debug::Debug_obj::__boot();
::away3d::entities::Mesh_obj::__boot();
::away3d::entities::SegmentSet_obj::__boot();
::away3d::entities::SegRef_obj::__boot();
::away3d::entities::SubSet_obj::__boot();
::flash::errors::Error_obj::__boot();
::away3d::errors::AbstractMethodError_obj::__boot();
::away3d::errors::CastError_obj::__boot();
::away3d::events::AssetEvent_obj::__boot();
::away3d::events::CameraEvent_obj::__boot();
::away3d::events::GeometryEvent_obj::__boot();
::away3d::events::LensEvent_obj::__boot();
::away3d::events::LightEvent_obj::__boot();
::away3d::events::Object3DEvent_obj::__boot();
::away3d::events::Scene3DEvent_obj::__boot();
::away3d::events::ShadingMethodEvent_obj::__boot();
::away3d::events::Stage3DEvent_obj::__boot();
::away3d::events::TouchEvent3D_obj::__boot();
::away3d::filters::Filter3DBase_obj::__boot();
::away3d::filters::tasks::Filter3DTaskBase_obj::__boot();
::away3d::library::assets::AssetType_obj::__boot();
::away3d::lights::LightBase_obj::__boot();
::away3d::lights::DirectionalLight_obj::__boot();
::away3d::lights::LightProbe_obj::__boot();
::away3d::lights::PointLight_obj::__boot();
::away3d::lights::shadowmaps::ShadowMapperBase_obj::__boot();
::away3d::lights::shadowmaps::CubeMapShadowMapper_obj::__boot();
::away3d::lights::shadowmaps::DirectionalShadowMapper_obj::__boot();
::away3d::materials::MaterialBase_obj::__boot();
::away3d::materials::SinglePassMaterialBase_obj::__boot();
::away3d::materials::ColorMaterial_obj::__boot();
::away3d::materials::LightSources_obj::__boot();
::away3d::materials::SegmentMaterial_obj::__boot();
::away3d::materials::SkyBoxMaterial_obj::__boot();
::away3d::materials::TextureMaterial_obj::__boot();
::away3d::materials::compilation::MethodDependencyCounter_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::away3d::materials::compilation::RegisterPool_obj::__boot();
::away3d::materials::compilation::ShaderCompiler_obj::__boot();
::away3d::materials::compilation::ShaderRegisterData_obj::__boot();
::away3d::materials::compilation::ShaderRegisterElement_obj::__boot();
::away3d::materials::compilation::SuperShaderCompiler_obj::__boot();
::away3d::materials::lightpickers::LightPickerBase_obj::__boot();
::away3d::materials::methods::ShadingMethodBase_obj::__boot();
::away3d::materials::methods::BasicAmbientMethod_obj::__boot();
::away3d::materials::methods::LightingMethodBase_obj::__boot();
::away3d::materials::methods::BasicDiffuseMethod_obj::__boot();
::away3d::materials::methods::BasicNormalMethod_obj::__boot();
::away3d::materials::methods::BasicSpecularMethod_obj::__boot();
::away3d::materials::methods::EffectMethodBase_obj::__boot();
::away3d::materials::methods::ColorTransformMethod_obj::__boot();
::away3d::materials::methods::FogMethod_obj::__boot();
::away3d::materials::methods::MethodVO_obj::__boot();
::away3d::materials::methods::MethodVOSet_obj::__boot();
::away3d::materials::methods::ShaderMethodSetup_obj::__boot();
::away3d::materials::methods::ShadowMapMethodBase_obj::__boot();
::away3d::materials::passes::MaterialPassBase_obj::__boot();
::away3d::materials::passes::CompiledPass_obj::__boot();
::away3d::materials::passes::DepthMapPass_obj::__boot();
::away3d::materials::passes::DistanceMapPass_obj::__boot();
::away3d::materials::passes::SegmentPass_obj::__boot();
::away3d::materials::passes::SkyBoxPass_obj::__boot();
::away3d::materials::passes::SuperShaderPass_obj::__boot();
::away3d::materials::utils::DefaultMaterialManager_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::away3d::materials::utils::MipmapGenerator_obj::__boot();
::away3d::primitives::data::Segment_obj::__boot();
::away3d::primitives::LineSegment_obj::__boot();
::away3d::primitives::PrimitiveBase_obj::__boot();
::away3d::primitives::PlaneGeometry_obj::__boot();
::away3d::primitives::SkyBox_obj::__boot();
::away3d::primitives::WireframePrimitiveBase_obj::__boot();
::away3d::primitives::WireframeCube_obj::__boot();
::away3d::primitives::WireframeSphere_obj::__boot();
::away3d::textures::TextureProxyBase_obj::__boot();
::away3d::textures::CubeTextureBase_obj::__boot();
::away3d::textures::BitmapCubeTexture_obj::__boot();
::away3d::textures::Texture2DBase_obj::__boot();
::away3d::textures::BitmapTexture_obj::__boot();
::away3d::textures::RenderCubeTexture_obj::__boot();
::away3d::textures::RenderTexture_obj::__boot();
::away3d::tools::utils::GeomUtil_obj::__boot();
::away3d::tools::utils::TextureUtils_obj::__boot();
::away3d::utils::ArrayUtils_obj::__boot();
::away3d::utils::Cast_obj::__boot();
::flash::Memory_obj::__boot();
::flash::display::Bitmap_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::FrameLabel_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::Stage3D_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::display3D::Context3D_obj::__boot();
::flash::display3D::AGLSLContext3D_obj::__boot();
::flash::display3D::_Context3DBlendFactor::Context3DBlendFactor_Impl__obj::__boot();
::flash::display3D::Context3DClearMask_obj::__boot();
::flash::display3D::_Context3DCompareMode::Context3DCompareMode_Impl__obj::__boot();
::flash::display3D::Context3DMipFilter_obj::__boot();
::flash::display3D::Context3DProgramType_obj::__boot();
::flash::display3D::Context3DRenderMode_obj::__boot();
::flash::display3D::Context3DTextureFilter_obj::__boot();
::flash::display3D::Context3DTextureFormat_obj::__boot();
::flash::display3D::_Context3DTriangleFace::Context3DTriangleFace_Impl__obj::__boot();
::flash::display3D::Context3DVertexBufferFormat_obj::__boot();
::flash::display3D::Context3DWrapMode_obj::__boot();
::flash::display3D::IndexBuffer3D_obj::__boot();
::flash::display3D::Program3D_obj::__boot();
::flash::display3D::SamplerState_obj::__boot();
::flash::display3D::VertexBuffer3D_obj::__boot();
::flash::display3D::shaders::AGLSLShaderUtils_obj::__boot();
::flash::display3D::textures::TextureBase_obj::__boot();
::flash::display3D::textures::CubeTexture_obj::__boot();
::flash::display3D::textures::Texture_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::events::UncaughtErrorEvent_obj::__boot();
::flash::events::UncaughtErrorEvents_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::InternalAudioType_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::AudioThreadState_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::PixelFormat_obj::__boot();
::flash::system::ScreenMode_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::flash::utils::IDataOutput_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::WeakMap_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::xml::_Fast::NodeAccess_obj::__boot();
::haxe::xml::_Fast::AttribAccess_obj::__boot();
::haxe::xml::_Fast::HasAttribAccess_obj::__boot();
::haxe::xml::_Fast::HasNodeAccess_obj::__boot();
::haxe::xml::_Fast::NodeListAccess_obj::__boot();
::haxe::xml::Fast_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::display::DirectRenderer_obj::__boot();
::openfl::display::FPS_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::OpenGLView_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::gl::GL_obj::__boot();
::openfl::gl::GLObject_obj::__boot();
::openfl::gl::GLBuffer_obj::__boot();
::openfl::gl::GLFramebuffer_obj::__boot();
::openfl::gl::GLProgram_obj::__boot();
::openfl::gl::GLRenderbuffer_obj::__boot();
::openfl::gl::GLShader_obj::__boot();
::openfl::gl::GLTexture_obj::__boot();
::openfl::utils::ArrayBufferView_obj::__boot();
::openfl::utils::Float32Array_obj::__boot();
::openfl::utils::Int16Array_obj::__boot();
::openfl::utils::UInt8Array_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
}

