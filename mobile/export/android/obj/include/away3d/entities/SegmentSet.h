#ifndef INCLUDED_away3d_entities_SegmentSet
#define INCLUDED_away3d_entities_SegmentSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/entities/Entity.h>
#include <away3d/core/base/IRenderable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS2(away3d,entities,SubSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS2(flash,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  SegmentSet_obj : public ::away3d::entities::Entity_obj{
	public:
		typedef ::away3d::entities::Entity_obj super;
		typedef SegmentSet_obj OBJ_;
		SegmentSet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SegmentSet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SegmentSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::away3d::core::base::IMaterialOwner_obj *()
			{ return new ::away3d::core::base::IMaterialOwner_delegate_< SegmentSet_obj >(this); }
		inline operator ::away3d::core::base::IRenderable_obj *()
			{ return new ::away3d::core::base::IRenderable_delegate_< SegmentSet_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SegmentSet"); }

		virtual ::flash::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera);
		Dynamic getRenderSceneTransform_dyn();

		virtual ::String get_assetType( );

		virtual int get_vertexTangentOffset( );
		Dynamic get_vertexTangentOffset_dyn();

		virtual int get_vertexNormalOffset( );
		Dynamic get_vertexNormalOffset_dyn();

		virtual int get_vertexOffset( );
		Dynamic get_vertexOffset_dyn();

		virtual Array< Float > get_vertexTangentData( );
		Dynamic get_vertexTangentData_dyn();

		virtual Array< Float > get_vertexNormalData( );
		Dynamic get_vertexNormalData_dyn();

		virtual int get_vertexStride( );
		Dynamic get_vertexStride_dyn();

		virtual int get_numVertices( );
		Dynamic get_numVertices_dyn();

		virtual Array< Float > get_UVData( );
		Dynamic get_UVData_dyn();

		virtual Array< int > get_indexData( );
		Dynamic get_indexData_dyn();

		virtual Array< Float > get_vertexData( );
		Dynamic get_vertexData_dyn();

		virtual ::flash::geom::Matrix get_uvTransform( );
		Dynamic get_uvTransform_dyn();

		virtual ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		Dynamic set_material_dyn();

		virtual ::away3d::animators::IAnimator get_animator( );
		Dynamic get_animator_dyn();

		virtual ::away3d::materials::MaterialBase get_material( );
		Dynamic get_material_dyn();

		virtual bool get_castsShadows( );
		Dynamic get_castsShadows_dyn();

		virtual ::away3d::entities::Entity get_sourceEntity( );
		Dynamic get_sourceEntity_dyn();

		virtual int get_numTriangles( );
		Dynamic get_numTriangles_dyn();

		virtual ::away3d::core::partition::EntityNode createEntityPartitionNode( );

		virtual Void updateBounds( );

		virtual ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume( );

		virtual bool get_mouseEnabled( );

		virtual Void dispose( );

		virtual ::away3d::entities::SubSet addSubSet( );
		Dynamic addSubSet_dyn();

		virtual Void reOrderIndices( int subSetIndex,int index);
		Dynamic reOrderIndices_dyn();

		virtual Void activateSecondaryUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateSecondaryUVBuffer_dyn();

		virtual Void activateVertexTangentBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexTangentBuffer_dyn();

		virtual Void activateVertexNormalBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexNormalBuffer_dyn();

		virtual Void activateUVBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateUVBuffer_dyn();

		virtual Void activateVertexBuffer( int index,::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic activateVertexBuffer_dyn();

		virtual ::flash::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		Dynamic getIndexBuffer_dyn();

		virtual bool get_hasData( );
		Dynamic get_hasData_dyn();

		virtual Void updateSegment( ::away3d::primitives::data::Segment segment);
		Dynamic updateSegment_dyn();

		virtual int get_subSetCount( );
		Dynamic get_subSetCount_dyn();

		virtual int get_segmentCount( );
		Dynamic get_segmentCount_dyn();

		virtual ::away3d::primitives::data::Segment getSegment( int index);
		Dynamic getSegment_dyn();

		virtual Void removeAllSegments( );
		Dynamic removeAllSegments_dyn();

		virtual Void removeSegment( ::away3d::primitives::data::Segment segment,hx::Null< bool >  dispose);
		Dynamic removeSegment_dyn();

		virtual Void removeSegmentByIndex( int index,hx::Null< bool >  dispose);
		Dynamic removeSegmentByIndex_dyn();

		virtual Void addSegment( ::away3d::primitives::data::Segment segment);
		Dynamic addSegment_dyn();

		int _indexSegments;
		::haxe::ds::IntMap _segments;
		bool _hasData;
		::away3d::animators::IAnimator _animator;
		::away3d::materials::MaterialBase _material;
		int _numIndices;
		int _subSetCount;
		Array< ::Dynamic > _subSets;
		::away3d::entities::SubSet _activeSubSet;
		int LIMIT;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SegmentSet */ 
