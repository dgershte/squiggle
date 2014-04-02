#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#define INCLUDED_away3d_animators_data_AnimationRegisterCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/materials/compilation/ShaderRegisterCache.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(away3d,animators,data,AnimationRegisterCache)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(haxe,ds,WeakMap)
namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  AnimationRegisterCache_obj : public ::away3d::materials::compilation::ShaderRegisterCache_obj{
	public:
		typedef ::away3d::materials::compilation::ShaderRegisterCache_obj super;
		typedef AnimationRegisterCache_obj OBJ_;
		AnimationRegisterCache_obj();
		Void __construct(::String profile);

	public:
		static hx::ObjectPtr< AnimationRegisterCache_obj > __new(::String profile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationRegisterCache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationRegisterCache"); }

		virtual Void setFragmentConst( int index,hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z,hx::Null< Float >  w);
		Dynamic setFragmentConst_dyn();

		virtual Void setVertexConstFromMatrix( int index,::flash::geom::Matrix3D matrix);
		Dynamic setVertexConstFromMatrix_dyn();

		virtual Void setVertexConstFromVector( int index,Array< Float > data);
		Dynamic setVertexConstFromVector_dyn();

		virtual Void setVertexConst( int index,hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z,hx::Null< Float >  w);
		Dynamic setVertexConst_dyn();

		virtual Void setDataLength( );
		Dynamic setDataLength_dyn();

		virtual int get_numFragmentConstant( );
		Dynamic get_numFragmentConstant_dyn();

		virtual int get_numVertexConstant( );
		Dynamic get_numVertexConstant_dyn();

		int _numFragmentConstant;
		int _numVertexConstant;
		Array< Float > fragmentConstantData;
		Array< Float > vertexConstantData;
		virtual ::away3d::materials::compilation::ShaderRegisterElement getRegisterFromString( ::String code);
		Dynamic getRegisterFromString_dyn();

		virtual ::String getColorCombinationCode( ::String shadedTarget);
		Dynamic getColorCombinationCode_dyn();

		virtual ::String getColorPassCode( );
		Dynamic getColorPassCode_dyn();

		virtual ::String initColorRegisters( );
		Dynamic initColorRegisters_dyn();

		virtual ::String getCombinationCode( );
		Dynamic getCombinationCode_dyn();

		virtual ::String getInitCode( );
		Dynamic getInitCode_dyn();

		virtual int getRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex);
		Dynamic getRegisterIndex_dyn();

		virtual Void setRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex,int registerIndex);
		Dynamic setRegisterIndex_dyn();

		virtual Void setUVSourceAndTarget( ::String UVAttribute,::String UVVaring);
		Dynamic setUVSourceAndTarget_dyn();

		virtual Void reset( );

		bool hasColorAddNode;
		bool hasColorMulNode;
		bool hasBillboard;
		bool needVelocity;
		bool hasUVNode;
		::haxe::ds::WeakMap indexDictionary;
		Array< ::String > targetRegisters;
		Array< ::String > sourceRegisters;
		bool needUVAnimation;
		bool needFragmentAnimation;
		Array< ::Dynamic > rotationRegisters;
		::away3d::materials::compilation::ShaderRegisterElement uvVar;
		::away3d::materials::compilation::ShaderRegisterElement colorMulVary;
		::away3d::materials::compilation::ShaderRegisterElement colorAddVary;
		::away3d::materials::compilation::ShaderRegisterElement colorMulTarget;
		::away3d::materials::compilation::ShaderRegisterElement colorAddTarget;
		::away3d::materials::compilation::ShaderRegisterElement uvTarget;
		::away3d::materials::compilation::ShaderRegisterElement vertexTwoConst;
		::away3d::materials::compilation::ShaderRegisterElement vertexOneConst;
		::away3d::materials::compilation::ShaderRegisterElement vertexZeroConst;
		::away3d::materials::compilation::ShaderRegisterElement vertexLife;
		::away3d::materials::compilation::ShaderRegisterElement vertexTime;
		::away3d::materials::compilation::ShaderRegisterElement velocityTarget;
		::away3d::materials::compilation::ShaderRegisterElement scaleAndRotateTarget;
		::away3d::materials::compilation::ShaderRegisterElement positionTarget;
		::away3d::materials::compilation::ShaderRegisterElement uvAttribute;
		::away3d::materials::compilation::ShaderRegisterElement positionAttribute;
};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_AnimationRegisterCache */ 
