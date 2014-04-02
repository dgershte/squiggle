#ifndef INCLUDED_away3d_core_base_Object3D
#define INCLUDED_away3d_core_base_Object3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <away3d/library/assets/NamedAssetBase.h>
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix3D)
HX_DECLARE_CLASS2(flash,geom,Vector3D)
namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  Object3D_obj : public ::away3d::library::assets::NamedAssetBase_obj{
	public:
		typedef ::away3d::library::assets::NamedAssetBase_obj super;
		typedef Object3D_obj OBJ_;
		Object3D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Object3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Object3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Object3D"); }

		virtual int set_zOffset( int value);
		Dynamic set_zOffset_dyn();

		virtual int get_zOffset( );
		Dynamic get_zOffset_dyn();

		virtual Void updateTransform( );
		Dynamic updateTransform_dyn();

		virtual Void invalidateTransform( );
		Dynamic invalidateTransform_dyn();

		virtual Void disposeAsset( );
		Dynamic disposeAsset_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void lookAt( ::flash::geom::Vector3D target,::flash::geom::Vector3D upAxis);
		Dynamic lookAt_dyn();

		virtual Void rotate( ::flash::geom::Vector3D axis,Float angle);
		Dynamic rotate_dyn();

		virtual Void rotateTo( Float ax,Float ay,Float az);
		Dynamic rotateTo_dyn();

		virtual ::away3d::core::base::Object3D clone( );
		Dynamic clone_dyn();

		virtual Void roll( Float angle);
		Dynamic roll_dyn();

		virtual Void yaw( Float angle);
		Dynamic yaw_dyn();

		virtual Void pitch( Float angle);
		Dynamic pitch_dyn();

		virtual Void translateLocal( ::flash::geom::Vector3D axis,Float distance);
		Dynamic translateLocal_dyn();

		virtual Void translate( ::flash::geom::Vector3D axis,Float distance);
		Dynamic translate_dyn();

		virtual Void movePivot( Float dx,Float dy,Float dz);
		Dynamic movePivot_dyn();

		virtual Void moveTo( Float dx,Float dy,Float dz);
		Dynamic moveTo_dyn();

		virtual Void moveDown( Float distance);
		Dynamic moveDown_dyn();

		virtual Void moveUp( Float distance);
		Dynamic moveUp_dyn();

		virtual Void moveRight( Float distance);
		Dynamic moveRight_dyn();

		virtual Void moveLeft( Float distance);
		Dynamic moveLeft_dyn();

		virtual Void moveBackward( Float distance);
		Dynamic moveBackward_dyn();

		virtual Void moveForward( Float distance);
		Dynamic moveForward_dyn();

		virtual Void scale( Float value);
		Dynamic scale_dyn();

		virtual ::flash::geom::Vector3D get_downVector( );
		Dynamic get_downVector_dyn();

		virtual ::flash::geom::Vector3D get_leftVector( );
		Dynamic get_leftVector_dyn();

		virtual ::flash::geom::Vector3D get_backVector( );
		Dynamic get_backVector_dyn();

		virtual ::flash::geom::Vector3D get_upVector( );
		Dynamic get_upVector_dyn();

		virtual ::flash::geom::Vector3D get_rightVector( );
		Dynamic get_rightVector_dyn();

		virtual ::flash::geom::Vector3D get_forwardVector( );
		Dynamic get_forwardVector_dyn();

		virtual ::flash::geom::Vector3D set_position( ::flash::geom::Vector3D value);
		Dynamic set_position_dyn();

		virtual ::flash::geom::Vector3D get_position( );
		Dynamic get_position_dyn();

		virtual ::flash::geom::Vector3D set_pivotPoint( ::flash::geom::Vector3D pivot);
		Dynamic set_pivotPoint_dyn();

		virtual ::flash::geom::Vector3D get_pivotPoint( );
		Dynamic get_pivotPoint_dyn();

		virtual ::flash::geom::Matrix3D set_transform( ::flash::geom::Matrix3D val);
		Dynamic set_transform_dyn();

		virtual ::flash::geom::Matrix3D get_transform( );
		Dynamic get_transform_dyn();

		virtual ::flash::geom::Vector3D set_eulers( ::flash::geom::Vector3D value);
		Dynamic set_eulers_dyn();

		virtual ::flash::geom::Vector3D get_eulers( );
		Dynamic get_eulers_dyn();

		virtual Float set_scaleZ( Float val);
		Dynamic set_scaleZ_dyn();

		virtual Float get_scaleZ( );
		Dynamic get_scaleZ_dyn();

		virtual Float set_scaleY( Float val);
		Dynamic set_scaleY_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleX( Float val);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_rotationZ( Float val);
		Dynamic set_rotationZ_dyn();

		virtual Float get_rotationZ( );
		Dynamic get_rotationZ_dyn();

		virtual Float set_rotationY( Float val);
		Dynamic set_rotationY_dyn();

		virtual Float get_rotationY( );
		Dynamic get_rotationY_dyn();

		virtual Float set_rotationX( Float val);
		Dynamic set_rotationX_dyn();

		virtual Float get_rotationX( );
		Dynamic get_rotationX_dyn();

		virtual Float set_z( Float val);
		Dynamic set_z_dyn();

		virtual Float get_z( );
		Dynamic get_z_dyn();

		virtual Float set_y( Float val);
		Dynamic set_y_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_x( Float val);
		Dynamic set_x_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		Dynamic extra;
		Array< ::Dynamic > _transformComponents;
		::flash::geom::Vector3D _sca;
		::flash::geom::Vector3D _rot;
		::flash::geom::Vector3D _pos;
		bool _pivotZero;
		::flash::geom::Vector3D _pivotPoint;
		Float _z;
		Float _y;
		Float _x;
		Float _scaleZ;
		Float _scaleY;
		Float _scaleX;
		::flash::geom::Matrix3D _transform;
		virtual Void notifyScaleChanged( );
		Dynamic notifyScaleChanged_dyn();

		virtual Void invalidateScale( );
		Dynamic invalidateScale_dyn();

		virtual Void notifyRotationChanged( );
		Dynamic notifyRotationChanged_dyn();

		virtual Void invalidateRotation( );
		Dynamic invalidateRotation_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void notifyPositionChanged( );
		Dynamic notifyPositionChanged_dyn();

		virtual Void invalidatePosition( );
		Dynamic invalidatePosition_dyn();

		virtual Void invalidatePivot( );
		Dynamic invalidatePivot_dyn();

		int _zOffset;
		bool _listenToScaleChanged;
		bool _listenToRotationChanged;
		bool _listenToPositionChanged;
		::flash::geom::Matrix3D _flipY;
		::flash::geom::Vector3D _eulers;
		Float _rotationZ;
		Float _rotationY;
		Float _rotationX;
		::away3d::events::Object3DEvent _scaleChanged;
		::away3d::events::Object3DEvent _rotationChanged;
		::away3d::events::Object3DEvent _positionChanged;
		bool _scaleDirty;
		bool _rotationDirty;
		bool _positionDirty;
		bool _transformDirty;
		Float _smallestNumber;
		::away3d::controllers::ControllerBase _controller;
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_Object3D */ 
