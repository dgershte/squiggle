#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#include <away3d/core/base/SkinnedSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#include <away3d/tools/utils/GeomUtil.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace away3d{
namespace tools{
namespace utils{

Void GeomUtil_obj::__construct()
{
	return null();
}

GeomUtil_obj::~GeomUtil_obj() { }

Dynamic GeomUtil_obj::__CreateEmpty() { return  new GeomUtil_obj; }
hx::ObjectPtr< GeomUtil_obj > GeomUtil_obj::__new()
{  hx::ObjectPtr< GeomUtil_obj > result = new GeomUtil_obj();
	result->__construct();
	return result;}

Dynamic GeomUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomUtil_obj > result = new GeomUtil_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > GeomUtil_obj::fromVectors( Array< Float > verts,Array< int > indices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents,Array< Float > weights,Array< Float > jointIndices,hx::Null< int >  __o_triangleOffset){
int triangleOffset = __o_triangleOffset.Default(0);
	HX_STACK_PUSH("GeomUtil::fromVectors","away3d/tools/utils/GeomUtil.hx",17);
	HX_STACK_ARG(verts,"verts");
	HX_STACK_ARG(indices,"indices");
	HX_STACK_ARG(uvs,"uvs");
	HX_STACK_ARG(normals,"normals");
	HX_STACK_ARG(tangents,"tangents");
	HX_STACK_ARG(weights,"weights");
	HX_STACK_ARG(jointIndices,"jointIndices");
	HX_STACK_ARG(triangleOffset,"triangleOffset");
{
		HX_STACK_LINE(18)
		int LIMIT_VERTS = (int)196605;		HX_STACK_VAR(LIMIT_VERTS,"LIMIT_VERTS");
		HX_STACK_LINE(19)
		int LIMIT_INDICES = (int)983025;		HX_STACK_VAR(LIMIT_INDICES,"LIMIT_INDICES");
		HX_STACK_LINE(20)
		Array< ::Dynamic > subs = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(subs,"subs");
		HX_STACK_LINE(21)
		if (((bool((uvs != null())) && bool((uvs->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(21)
			uvs = null();
		}
		HX_STACK_LINE(22)
		if (((bool((normals != null())) && bool((normals->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(22)
			normals = null();
		}
		HX_STACK_LINE(23)
		if (((bool((tangents != null())) && bool((tangents->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(23)
			tangents = null();
		}
		HX_STACK_LINE(24)
		if (((bool((weights != null())) && bool((weights->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(24)
			weights = null();
		}
		HX_STACK_LINE(25)
		if (((bool((jointIndices != null())) && bool((jointIndices->__Field(HX_CSTRING("length"),true) == (int)0))))){
			HX_STACK_LINE(25)
			jointIndices = null();
		}
		HX_STACK_LINE(26)
		if (((bool((indices->__Field(HX_CSTRING("length"),true) >= LIMIT_INDICES)) || bool((verts->__Field(HX_CSTRING("length"),true) >= LIMIT_VERTS))))){
			HX_STACK_LINE(27)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(28)
			int len;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(29)
			int outIndex;		HX_STACK_VAR(outIndex,"outIndex");
			HX_STACK_LINE(30)
			int j;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(31)
			Array< Float > splitVerts = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(splitVerts,"splitVerts");
			HX_STACK_LINE(32)
			Array< int > splitIndices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(splitIndices,"splitIndices");
			HX_STACK_LINE(33)
			Array< Float > splitUvs = (  (((uvs != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );		HX_STACK_VAR(splitUvs,"splitUvs");
			HX_STACK_LINE(34)
			Array< Float > splitNormals = (  (((normals != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );		HX_STACK_VAR(splitNormals,"splitNormals");
			HX_STACK_LINE(35)
			Array< Float > splitTangents = (  (((tangents != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );		HX_STACK_VAR(splitTangents,"splitTangents");
			HX_STACK_LINE(36)
			Array< Float > splitWeights = (  (((weights != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );		HX_STACK_VAR(splitWeights,"splitWeights");
			HX_STACK_LINE(37)
			Array< Float > splitJointIndices = (  (((jointIndices != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );		HX_STACK_VAR(splitJointIndices,"splitJointIndices");
			HX_STACK_LINE(38)
			Array< int > mappings = ::flash::_Vector::Vector_Impl__obj::_new(::Std_obj::_int((Float(verts->__Field(HX_CSTRING("length"),true)) / Float((int)3))),true);		HX_STACK_VAR(mappings,"mappings");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(39)
				while((((c)++ < ::Std_obj::_int((Float(verts->__Field(HX_CSTRING("length"),true)) / Float((int)3)))))){
					HX_STACK_LINE(39)
					mappings->__Field(HX_CSTRING("push"),true)((int)0);
				}
				HX_STACK_LINE(39)
				mappings;
			}
			HX_STACK_LINE(40)
			i = mappings->__Field(HX_CSTRING("length"),true);
			HX_STACK_LINE(41)
			while((((i)-- > (int)0))){
				HX_STACK_LINE(41)
				mappings[i] = (int)-1;
			}
			HX_STACK_LINE(42)
			int originalIndex;		HX_STACK_VAR(originalIndex,"originalIndex");
			HX_STACK_LINE(43)
			int splitIndex;		HX_STACK_VAR(splitIndex,"splitIndex");
			HX_STACK_LINE(44)
			int o0;		HX_STACK_VAR(o0,"o0");
			HX_STACK_LINE(45)
			int o1;		HX_STACK_VAR(o1,"o1");
			HX_STACK_LINE(46)
			int o2;		HX_STACK_VAR(o2,"o2");
			HX_STACK_LINE(47)
			int s0;		HX_STACK_VAR(s0,"s0");
			HX_STACK_LINE(48)
			int s1;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(49)
			int s2;		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(50)
			int su;		HX_STACK_VAR(su,"su");
			HX_STACK_LINE(51)
			int ou;		HX_STACK_VAR(ou,"ou");
			HX_STACK_LINE(52)
			int sv;		HX_STACK_VAR(sv,"sv");
			HX_STACK_LINE(53)
			int ov;		HX_STACK_VAR(ov,"ov");
			HX_STACK_LINE(55)
			outIndex = (int)0;
			HX_STACK_LINE(56)
			len = indices->__Field(HX_CSTRING("length"),true);
			HX_STACK_LINE(57)
			i = (int)0;
			HX_STACK_LINE(58)
			while(((i < len))){
				HX_STACK_LINE(59)
				splitIndex = (splitVerts->__Field(HX_CSTRING("length"),true) + (int)6);
				HX_STACK_LINE(60)
				if (((bool(((outIndex + (int)2) >= LIMIT_INDICES)) || bool((splitIndex >= LIMIT_VERTS))))){
					HX_STACK_LINE(61)
					subs->__Field(HX_CSTRING("push"),true)(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(splitVerts,splitIndices,splitUvs,splitNormals,splitTangents,splitWeights,splitJointIndices,triangleOffset));
					HX_STACK_LINE(62)
					splitVerts = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
					HX_STACK_LINE(63)
					splitIndices = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
					HX_STACK_LINE(64)
					splitUvs = (  (((uvs != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );
					HX_STACK_LINE(65)
					splitNormals = (  (((normals != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );
					HX_STACK_LINE(66)
					splitTangents = (  (((tangents != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );
					HX_STACK_LINE(67)
					splitWeights = (  (((weights != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );
					HX_STACK_LINE(68)
					splitJointIndices = (  (((jointIndices != null()))) ? Array< Float >(::flash::_Vector::Vector_Impl__obj::_new(null(),null())) : Array< Float >(null()) );
					HX_STACK_LINE(69)
					splitIndex = (int)0;
					HX_STACK_LINE(70)
					j = mappings->__Field(HX_CSTRING("length"),true);
					HX_STACK_LINE(71)
					while((((j)-- > (int)0))){
						HX_STACK_LINE(71)
						mappings[j] = (int)-1;
					}
					HX_STACK_LINE(72)
					outIndex = (int)0;
				}
				HX_STACK_LINE(74)
				j = (int)0;
				HX_STACK_LINE(75)
				while(((j < (int)3))){
					HX_STACK_LINE(76)
					originalIndex = indices->__get((i + j));
					HX_STACK_LINE(77)
					if (((mappings->__get(originalIndex) >= (int)0))){
						HX_STACK_LINE(77)
						splitIndex = mappings->__get(originalIndex);
					}
					else{
						HX_STACK_LINE(79)
						o0 = (originalIndex * (int)3);
						HX_STACK_LINE(80)
						o1 = ((originalIndex * (int)3) + (int)1);
						HX_STACK_LINE(81)
						o2 = ((originalIndex * (int)3) + (int)2);
						HX_STACK_LINE(84)
						splitIndex = ::Std_obj::_int((Float(splitVerts->__Field(HX_CSTRING("length"),true)) / Float((int)3)));
						HX_STACK_LINE(85)
						s0 = (splitIndex * (int)3);
						HX_STACK_LINE(86)
						s1 = ((splitIndex * (int)3) + (int)1);
						HX_STACK_LINE(87)
						s2 = ((splitIndex * (int)3) + (int)2);
						HX_STACK_LINE(88)
						splitVerts[s0] = verts->__get(o0);
						HX_STACK_LINE(89)
						splitVerts[s1] = verts->__get(o1);
						HX_STACK_LINE(90)
						splitVerts[s2] = verts->__get(o2);
						HX_STACK_LINE(91)
						if (((uvs != null()))){
							HX_STACK_LINE(92)
							su = (splitIndex * (int)2);
							HX_STACK_LINE(93)
							sv = ((splitIndex * (int)2) + (int)1);
							HX_STACK_LINE(94)
							ou = (originalIndex * (int)2);
							HX_STACK_LINE(95)
							ov = ((originalIndex * (int)2) + (int)1);
							HX_STACK_LINE(96)
							splitUvs[su] = uvs->__get(ou);
							HX_STACK_LINE(97)
							splitUvs[sv] = uvs->__get(ov);
						}
						HX_STACK_LINE(99)
						if (((normals != null()))){
							HX_STACK_LINE(100)
							splitNormals[s0] = normals->__get(o0);
							HX_STACK_LINE(101)
							splitNormals[s1] = normals->__get(o1);
							HX_STACK_LINE(102)
							splitNormals[s2] = normals->__get(o2);
						}
						HX_STACK_LINE(104)
						if (((tangents != null()))){
							HX_STACK_LINE(105)
							splitTangents[s0] = tangents->__get(o0);
							HX_STACK_LINE(106)
							splitTangents[s1] = tangents->__get(o1);
							HX_STACK_LINE(107)
							splitTangents[s2] = tangents->__get(o2);
						}
						HX_STACK_LINE(109)
						if (((weights != null()))){
							HX_STACK_LINE(110)
							splitWeights[s0] = weights->__get(o0);
							HX_STACK_LINE(111)
							splitWeights[s1] = weights->__get(o1);
							HX_STACK_LINE(112)
							splitWeights[s2] = weights->__get(o2);
						}
						HX_STACK_LINE(114)
						if (((jointIndices != null()))){
							HX_STACK_LINE(115)
							splitJointIndices[s0] = jointIndices->__get(o0);
							HX_STACK_LINE(116)
							splitJointIndices[s1] = jointIndices->__get(o1);
							HX_STACK_LINE(117)
							splitJointIndices[s2] = jointIndices->__get(o2);
						}
						HX_STACK_LINE(119)
						mappings[originalIndex] = splitIndex;
					}
					HX_STACK_LINE(124)
					splitIndices[(outIndex + j)] = splitIndex;
					HX_STACK_LINE(125)
					(j)++;
				}
				HX_STACK_LINE(127)
				hx::AddEq(outIndex,(int)3);
				HX_STACK_LINE(128)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(130)
			if (((splitVerts->__Field(HX_CSTRING("length"),true) > (int)0))){
				HX_STACK_LINE(130)
				subs->__Field(HX_CSTRING("push"),true)(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(splitVerts,splitIndices,splitUvs,splitNormals,splitTangents,splitWeights,splitJointIndices,triangleOffset));
			}
		}
		else{
			HX_STACK_LINE(136)
			subs->__Field(HX_CSTRING("push"),true)(::away3d::tools::utils::GeomUtil_obj::constructSubGeometry(verts,indices,uvs,normals,tangents,weights,jointIndices,triangleOffset));
		}
		HX_STACK_LINE(137)
		return subs;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GeomUtil_obj,fromVectors,return )

::away3d::core::base::CompactSubGeometry GeomUtil_obj::constructSubGeometry( Array< Float > verts,Array< int > indices,Array< Float > uvs,Array< Float > normals,Array< Float > tangents,Array< Float > weights,Array< Float > jointIndices,int triangleOffset){
	HX_STACK_PUSH("GeomUtil::constructSubGeometry","away3d/tools/utils/GeomUtil.hx",144);
	HX_STACK_ARG(verts,"verts");
	HX_STACK_ARG(indices,"indices");
	HX_STACK_ARG(uvs,"uvs");
	HX_STACK_ARG(normals,"normals");
	HX_STACK_ARG(tangents,"tangents");
	HX_STACK_ARG(weights,"weights");
	HX_STACK_ARG(jointIndices,"jointIndices");
	HX_STACK_ARG(triangleOffset,"triangleOffset");
	HX_STACK_LINE(145)
	::away3d::core::base::CompactSubGeometry sub;		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(146)
	if (((bool((weights != null())) && bool((jointIndices != null()))))){
		HX_STACK_LINE(150)
		sub = ::away3d::core::base::SkinnedSubGeometry_obj::__new(::Std_obj::_int((Float(weights->__Field(HX_CSTRING("length"),true)) / Float(((Float(verts->__Field(HX_CSTRING("length"),true)) / Float((int)3)))))));
		HX_STACK_LINE(151)
		(hx::TCast< away3d::core::base::SkinnedSubGeometry >::cast(sub))->updateJointWeightsData(weights);
		HX_STACK_LINE(152)
		(hx::TCast< away3d::core::base::SkinnedSubGeometry >::cast(sub))->updateJointIndexData(jointIndices);
	}
	else{
		HX_STACK_LINE(155)
		sub = ::away3d::core::base::CompactSubGeometry_obj::__new();
	}
	HX_STACK_LINE(156)
	sub->updateIndexData(indices);
	HX_STACK_LINE(157)
	sub->fromVectors(verts,uvs,normals,tangents);
	HX_STACK_LINE(158)
	return sub;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GeomUtil_obj,constructSubGeometry,return )

Array< Float > GeomUtil_obj::interleaveBuffers( int numVertices,Array< Float > vertices,Array< Float > normals,Array< Float > tangents,Array< Float > uvs,Array< Float > suvs){
	HX_STACK_PUSH("GeomUtil::interleaveBuffers","away3d/tools/utils/GeomUtil.hx",167);
	HX_STACK_ARG(numVertices,"numVertices");
	HX_STACK_ARG(vertices,"vertices");
	HX_STACK_ARG(normals,"normals");
	HX_STACK_ARG(tangents,"tangents");
	HX_STACK_ARG(uvs,"uvs");
	HX_STACK_ARG(suvs,"suvs");
	HX_STACK_LINE(168)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(169)
	int compIndex;		HX_STACK_VAR(compIndex,"compIndex");
	HX_STACK_LINE(170)
	int uvCompIndex;		HX_STACK_VAR(uvCompIndex,"uvCompIndex");
	HX_STACK_LINE(171)
	int interleavedCompIndex;		HX_STACK_VAR(interleavedCompIndex,"interleavedCompIndex");
	HX_STACK_LINE(172)
	Array< Float > interleavedBuffer;		HX_STACK_VAR(interleavedBuffer,"interleavedBuffer");
	HX_STACK_LINE(173)
	interleavedBuffer = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(181)
	i = (int)0;
	HX_STACK_LINE(182)
	while(((i < numVertices))){
		HX_STACK_LINE(183)
		uvCompIndex = (i * (int)2);
		HX_STACK_LINE(184)
		compIndex = (i * (int)3);
		HX_STACK_LINE(185)
		interleavedCompIndex = (i * (int)13);
		HX_STACK_LINE(186)
		interleavedBuffer[interleavedCompIndex] = (  (((vertices != null()))) ? Float(vertices->__get(compIndex)) : Float((int)0) );
		HX_STACK_LINE(187)
		interleavedBuffer[(interleavedCompIndex + (int)1)] = (  (((vertices != null()))) ? Float(vertices->__get((compIndex + (int)1))) : Float((int)0) );
		HX_STACK_LINE(188)
		interleavedBuffer[(interleavedCompIndex + (int)2)] = (  (((vertices != null()))) ? Float(vertices->__get((compIndex + (int)2))) : Float((int)0) );
		HX_STACK_LINE(189)
		interleavedBuffer[(interleavedCompIndex + (int)3)] = (  (((normals != null()))) ? Float(normals->__get(compIndex)) : Float((int)0) );
		HX_STACK_LINE(190)
		interleavedBuffer[(interleavedCompIndex + (int)4)] = (  (((normals != null()))) ? Float(normals->__get((compIndex + (int)1))) : Float((int)0) );
		HX_STACK_LINE(191)
		interleavedBuffer[(interleavedCompIndex + (int)5)] = (  (((normals != null()))) ? Float(normals->__get((compIndex + (int)2))) : Float((int)0) );
		HX_STACK_LINE(192)
		interleavedBuffer[(interleavedCompIndex + (int)6)] = (  (((tangents != null()))) ? Float(tangents->__get(compIndex)) : Float((int)0) );
		HX_STACK_LINE(193)
		interleavedBuffer[(interleavedCompIndex + (int)7)] = (  (((tangents != null()))) ? Float(tangents->__get((compIndex + (int)1))) : Float((int)0) );
		HX_STACK_LINE(194)
		interleavedBuffer[(interleavedCompIndex + (int)8)] = (  (((tangents != null()))) ? Float(tangents->__get((compIndex + (int)2))) : Float((int)0) );
		HX_STACK_LINE(195)
		interleavedBuffer[(interleavedCompIndex + (int)9)] = (  (((uvs != null()))) ? Float(uvs->__get(uvCompIndex)) : Float((int)0) );
		HX_STACK_LINE(196)
		interleavedBuffer[(interleavedCompIndex + (int)10)] = (  (((uvs != null()))) ? Float(uvs->__get((uvCompIndex + (int)1))) : Float((int)0) );
		HX_STACK_LINE(197)
		interleavedBuffer[(interleavedCompIndex + (int)11)] = (  (((suvs != null()))) ? Float(suvs->__get(uvCompIndex)) : Float((int)0) );
		HX_STACK_LINE(198)
		interleavedBuffer[(interleavedCompIndex + (int)12)] = (  (((suvs != null()))) ? Float(suvs->__get((uvCompIndex + (int)1))) : Float((int)0) );
		HX_STACK_LINE(199)
		++(i);
	}
	HX_STACK_LINE(201)
	return interleavedBuffer;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GeomUtil_obj,interleaveBuffers,return )

int GeomUtil_obj::getMeshSubgeometryIndex( ::away3d::core::base::ISubGeometry subGeometry){
	HX_STACK_PUSH("GeomUtil::getMeshSubgeometryIndex","away3d/tools/utils/GeomUtil.hx",208);
	HX_STACK_ARG(subGeometry,"subGeometry");
	HX_STACK_LINE(209)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(210)
	Array< ::Dynamic > subGeometries = subGeometry->get_parentGeometry()->get_subGeometries();		HX_STACK_VAR(subGeometries,"subGeometries");
	HX_STACK_LINE(211)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(212)
	while(((i < subGeometries->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(213)
		if (((subGeometries->__get(i).StaticCast< ::away3d::core::base::ISubGeometry >() == subGeometry))){
			HX_STACK_LINE(214)
			index = i;
			HX_STACK_LINE(215)
			break;
		}
		HX_STACK_LINE(217)
		++(i);
	}
	HX_STACK_LINE(219)
	return index;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomUtil_obj,getMeshSubgeometryIndex,return )

int GeomUtil_obj::getMeshSubMeshIndex( ::away3d::core::base::SubMesh subMesh){
	HX_STACK_PUSH("GeomUtil::getMeshSubMeshIndex","away3d/tools/utils/GeomUtil.hx",226);
	HX_STACK_ARG(subMesh,"subMesh");
	HX_STACK_LINE(227)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(228)
	Array< ::Dynamic > subMeshes = subMesh->get_parentMesh()->get_subMeshes();		HX_STACK_VAR(subMeshes,"subMeshes");
	HX_STACK_LINE(229)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(230)
	while(((i < subMeshes->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(231)
		if (((subMeshes->__get(i).StaticCast< ::away3d::core::base::SubMesh >() == subMesh))){
			HX_STACK_LINE(232)
			index = i;
			HX_STACK_LINE(233)
			break;
		}
		HX_STACK_LINE(235)
		++(i);
	}
	HX_STACK_LINE(237)
	return index;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomUtil_obj,getMeshSubMeshIndex,return )


GeomUtil_obj::GeomUtil_obj()
{
}

void GeomUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomUtil);
	HX_MARK_END_CLASS();
}

void GeomUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic GeomUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVectors") ) { return fromVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interleaveBuffers") ) { return interleaveBuffers_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMeshSubMeshIndex") ) { return getMeshSubMeshIndex_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"constructSubGeometry") ) { return constructSubGeometry_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getMeshSubgeometryIndex") ) { return getMeshSubgeometryIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeomUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromVectors"),
	HX_CSTRING("constructSubGeometry"),
	HX_CSTRING("interleaveBuffers"),
	HX_CSTRING("getMeshSubgeometryIndex"),
	HX_CSTRING("getMeshSubMeshIndex"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomUtil_obj::__mClass,"__mClass");
};

Class GeomUtil_obj::__mClass;

void GeomUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.tools.utils.GeomUtil"), hx::TCanCast< GeomUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GeomUtil_obj::__boot()
{
}

} // end namespace away3d
} // end namespace tools
} // end namespace utils
