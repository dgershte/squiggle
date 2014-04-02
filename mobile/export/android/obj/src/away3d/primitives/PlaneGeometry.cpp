#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_PlaneGeometry
#include <away3d/primitives/PlaneGeometry.h>
#endif
#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#include <away3d/primitives/PrimitiveBase.h>
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
namespace primitives{

Void PlaneGeometry_obj::__construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< bool >  __o_yUp,hx::Null< bool >  __o_doubleSided)
{
HX_STACK_PUSH("PlaneGeometry::new","away3d/primitives/PlaneGeometry.hx",34);
Float width = __o_width.Default(100);
Float height = __o_height.Default(100);
int segmentsW = __o_segmentsW.Default(1);
int segmentsH = __o_segmentsH.Default(1);
bool yUp = __o_yUp.Default(true);
bool doubleSided = __o_doubleSided.Default(false);
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(36)
	this->_segmentsW = segmentsW;
	HX_STACK_LINE(37)
	this->_segmentsH = segmentsH;
	HX_STACK_LINE(38)
	this->_yUp = yUp;
	HX_STACK_LINE(39)
	this->_width = width;
	HX_STACK_LINE(40)
	this->_height = height;
	HX_STACK_LINE(41)
	this->_doubleSided = doubleSided;
}
;
	return null();
}

PlaneGeometry_obj::~PlaneGeometry_obj() { }

Dynamic PlaneGeometry_obj::__CreateEmpty() { return  new PlaneGeometry_obj; }
hx::ObjectPtr< PlaneGeometry_obj > PlaneGeometry_obj::__new(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< int >  __o_segmentsW,hx::Null< int >  __o_segmentsH,hx::Null< bool >  __o_yUp,hx::Null< bool >  __o_doubleSided)
{  hx::ObjectPtr< PlaneGeometry_obj > result = new PlaneGeometry_obj();
	result->__construct(__o_width,__o_height,__o_segmentsW,__o_segmentsH,__o_yUp,__o_doubleSided);
	return result;}

Dynamic PlaneGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlaneGeometry_obj > result = new PlaneGeometry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void PlaneGeometry_obj::buildUVs( ::away3d::core::base::CompactSubGeometry target){
{
		HX_STACK_PUSH("PlaneGeometry::buildUVs","away3d/primitives/PlaneGeometry.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(253)
		Array< Float > data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(254)
		int stride = target->get_UVStride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(255)
		int numUvs = ((((this->_segmentsH + (int)1)) * ((this->_segmentsW + (int)1))) * stride);		HX_STACK_VAR(numUvs,"numUvs");
		HX_STACK_LINE(256)
		int skip = (stride - (int)2);		HX_STACK_VAR(skip,"skip");
		HX_STACK_LINE(257)
		if ((this->_doubleSided)){
			HX_STACK_LINE(257)
			hx::MultEq(numUvs,(int)2);
		}
		HX_STACK_LINE(258)
		if (((bool((target->get_UVData() != null())) && bool((numUvs == target->get_UVData()->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(258)
			data = target->get_UVData();
		}
		else{
			HX_STACK_LINE(260)
			data = ::flash::_Vector::Vector_Impl__obj::_new(numUvs,true);
			HX_STACK_LINE(261)
			this->invalidateGeometry();
		}
		HX_STACK_LINE(264)
		int index = target->get_UVOffset();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(265)
		int yi = (int)0;		HX_STACK_VAR(yi,"yi");
		HX_STACK_LINE(266)
		while(((yi <= this->_segmentsH))){
			HX_STACK_LINE(267)
			int xi = (int)0;		HX_STACK_VAR(xi,"xi");
			HX_STACK_LINE(268)
			while(((xi <= this->_segmentsW))){
				HX_STACK_LINE(269)
				data[(index)++] = ((Float(xi) / Float(this->_segmentsW)) * target->get_scaleU());
				HX_STACK_LINE(270)
				data[(index)++] = ((((int)1 - (Float(yi) / Float(this->_segmentsH)))) * target->get_scaleV());
				HX_STACK_LINE(271)
				hx::AddEq(index,skip);
				HX_STACK_LINE(272)
				if ((this->_doubleSided)){
					HX_STACK_LINE(273)
					data[(index)++] = ((Float(xi) / Float(this->_segmentsW)) * target->get_scaleU());
					HX_STACK_LINE(274)
					data[(index)++] = ((((int)1 - (Float(yi) / Float(this->_segmentsH)))) * target->get_scaleV());
					HX_STACK_LINE(275)
					hx::AddEq(index,skip);
				}
				HX_STACK_LINE(277)
				++(xi);
			}
			HX_STACK_LINE(279)
			++(yi);
		}
		HX_STACK_LINE(281)
		target->updateData(data);
	}
return null();
}


Void PlaneGeometry_obj::buildGeometry( ::away3d::core::base::CompactSubGeometry target){
{
		HX_STACK_PUSH("PlaneGeometry::buildGeometry","away3d/primitives/PlaneGeometry.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(136)
		Array< Float > data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(137)
		Array< int > indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(138)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(139)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(140)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(141)
		int base;		HX_STACK_VAR(base,"base");
		HX_STACK_LINE(142)
		int tw = (this->_segmentsW + (int)1);		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(143)
		int numVertices = (((this->_segmentsH + (int)1)) * tw);		HX_STACK_VAR(numVertices,"numVertices");
		HX_STACK_LINE(144)
		int stride = target->get_vertexStride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(145)
		int skip = (stride - (int)9);		HX_STACK_VAR(skip,"skip");
		HX_STACK_LINE(146)
		if ((this->_doubleSided)){
			HX_STACK_LINE(146)
			hx::MultEq(numVertices,(int)2);
		}
		HX_STACK_LINE(147)
		numIndices = ((this->_segmentsH * this->_segmentsW) * (int)6);
		HX_STACK_LINE(148)
		if ((this->_doubleSided)){
			HX_STACK_LINE(148)
			hx::ShlEq(numIndices,(int)1);
		}
		HX_STACK_LINE(149)
		if (((numVertices == target->get_numVertices()))){
			HX_STACK_LINE(150)
			data = target->get_vertexData();
			HX_STACK_LINE(151)
			indices = target->get_indexData();
			HX_STACK_LINE(152)
			if (((indices == null()))){
				HX_STACK_LINE(153)
				indices = ::flash::_Vector::Vector_Impl__obj::_new(numIndices,true);
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					int c = (int)0;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(154)
					while((((c)++ < numIndices))){
						HX_STACK_LINE(154)
						indices->__Field(HX_CSTRING("push"),true)((int)0);
					}
					HX_STACK_LINE(154)
					indices;
				}
			}
		}
		else{
			HX_STACK_LINE(159)
			data = ::flash::_Vector::Vector_Impl__obj::_new((numVertices * stride),true);
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(160)
				while((((c)++ < (numVertices * stride)))){
					HX_STACK_LINE(160)
					data->__Field(HX_CSTRING("push"),true)((int)0);
				}
				HX_STACK_LINE(160)
				data;
			}
			HX_STACK_LINE(161)
			indices = ::flash::_Vector::Vector_Impl__obj::_new(numIndices,true);
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(162)
				while((((c)++ < numIndices))){
					HX_STACK_LINE(162)
					indices->__Field(HX_CSTRING("push"),true)((int)0);
				}
				HX_STACK_LINE(162)
				indices;
			}
			HX_STACK_LINE(163)
			this->invalidateUVs();
		}
		HX_STACK_LINE(166)
		numIndices = (int)0;
		HX_STACK_LINE(167)
		int index = target->get_vertexOffset();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(168)
		int yi = (int)0;		HX_STACK_VAR(yi,"yi");
		HX_STACK_LINE(169)
		while(((yi <= this->_segmentsH))){
			HX_STACK_LINE(170)
			int xi = (int)0;		HX_STACK_VAR(xi,"xi");
			HX_STACK_LINE(171)
			while(((xi <= this->_segmentsW))){
				HX_STACK_LINE(172)
				x = ((((Float(xi) / Float(this->_segmentsW)) - .5)) * this->_width);
				HX_STACK_LINE(173)
				y = ((((Float(yi) / Float(this->_segmentsH)) - .5)) * this->_height);
				HX_STACK_LINE(174)
				data[(index)++] = x;
				HX_STACK_LINE(175)
				if ((this->_yUp)){
					HX_STACK_LINE(176)
					data[(index)++] = (int)0;
					HX_STACK_LINE(177)
					data[(index)++] = y;
				}
				else{
					HX_STACK_LINE(181)
					data[(index)++] = y;
					HX_STACK_LINE(182)
					data[(index)++] = (int)0;
				}
				HX_STACK_LINE(185)
				data[(index)++] = (int)0;
				HX_STACK_LINE(186)
				if ((this->_yUp)){
					HX_STACK_LINE(187)
					data[(index)++] = (int)1;
					HX_STACK_LINE(188)
					data[(index)++] = (int)0;
				}
				else{
					HX_STACK_LINE(192)
					data[(index)++] = (int)0;
					HX_STACK_LINE(193)
					data[(index)++] = (int)-1;
				}
				HX_STACK_LINE(196)
				data[(index)++] = (int)1;
				HX_STACK_LINE(197)
				data[(index)++] = (int)0;
				HX_STACK_LINE(198)
				data[(index)++] = (int)0;
				HX_STACK_LINE(199)
				hx::AddEq(index,skip);
				HX_STACK_LINE(201)
				if ((this->_doubleSided)){
					HX_STACK_LINE(202)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(203)
					while(((i < (int)3))){
						HX_STACK_LINE(204)
						data[index] = data->__get((index - stride));
						HX_STACK_LINE(205)
						++(index);
						HX_STACK_LINE(206)
						++(i);
					}
					HX_STACK_LINE(208)
					i = (int)0;
					HX_STACK_LINE(209)
					while(((i < (int)3))){
						HX_STACK_LINE(210)
						data[index] = -(data->__get((index - stride)));
						HX_STACK_LINE(211)
						++(index);
						HX_STACK_LINE(212)
						++(i);
					}
					HX_STACK_LINE(214)
					i = (int)0;
					HX_STACK_LINE(215)
					while(((i < (int)3))){
						HX_STACK_LINE(216)
						data[index] = -(data->__get((index - stride)));
						HX_STACK_LINE(217)
						++(index);
						HX_STACK_LINE(218)
						++(i);
					}
					HX_STACK_LINE(220)
					hx::AddEq(index,skip);
				}
				HX_STACK_LINE(222)
				if (((bool((xi != this->_segmentsW)) && bool((yi != this->_segmentsH))))){
					HX_STACK_LINE(223)
					base = (xi + (yi * tw));
					HX_STACK_LINE(224)
					int mult = (  ((this->_doubleSided)) ? int((int)2) : int((int)1) );		HX_STACK_VAR(mult,"mult");
					HX_STACK_LINE(225)
					indices[(numIndices)++] = (base * mult);
					HX_STACK_LINE(226)
					indices[(numIndices)++] = (((base + tw)) * mult);
					HX_STACK_LINE(227)
					indices[(numIndices)++] = ((((base + tw) + (int)1)) * mult);
					HX_STACK_LINE(228)
					indices[(numIndices)++] = (base * mult);
					HX_STACK_LINE(229)
					indices[(numIndices)++] = ((((base + tw) + (int)1)) * mult);
					HX_STACK_LINE(230)
					indices[(numIndices)++] = (((base + (int)1)) * mult);
					HX_STACK_LINE(231)
					if ((this->_doubleSided)){
						HX_STACK_LINE(232)
						indices[(numIndices)++] = (((((base + tw) + (int)1)) * mult) + (int)1);
						HX_STACK_LINE(233)
						indices[(numIndices)++] = ((((base + tw)) * mult) + (int)1);
						HX_STACK_LINE(234)
						indices[(numIndices)++] = ((base * mult) + (int)1);
						HX_STACK_LINE(235)
						indices[(numIndices)++] = ((((base + (int)1)) * mult) + (int)1);
						HX_STACK_LINE(236)
						indices[(numIndices)++] = (((((base + tw) + (int)1)) * mult) + (int)1);
						HX_STACK_LINE(237)
						indices[(numIndices)++] = ((base * mult) + (int)1);
					}
				}
				HX_STACK_LINE(240)
				++(xi);
			}
			HX_STACK_LINE(242)
			++(yi);
		}
		HX_STACK_LINE(244)
		target->updateData(data);
		HX_STACK_LINE(245)
		target->updateIndexData(indices);
	}
return null();
}


Float PlaneGeometry_obj::set_height( Float value){
	HX_STACK_PUSH("PlaneGeometry::set_height","away3d/primitives/PlaneGeometry.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(126)
	this->_height = value;
	HX_STACK_LINE(127)
	this->invalidateGeometry();
	HX_STACK_LINE(128)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_height,return )

Float PlaneGeometry_obj::get_height( ){
	HX_STACK_PUSH("PlaneGeometry::get_height","away3d/primitives/PlaneGeometry.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(121)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_height,return )

Float PlaneGeometry_obj::set_width( Float value){
	HX_STACK_PUSH("PlaneGeometry::set_width","away3d/primitives/PlaneGeometry.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(112)
	this->_width = value;
	HX_STACK_LINE(113)
	this->invalidateGeometry();
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_width,return )

Float PlaneGeometry_obj::get_width( ){
	HX_STACK_PUSH("PlaneGeometry::get_width","away3d/primitives/PlaneGeometry.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_width,return )

bool PlaneGeometry_obj::set_doubleSided( bool value){
	HX_STACK_PUSH("PlaneGeometry::set_doubleSided","away3d/primitives/PlaneGeometry.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(98)
	this->_doubleSided = value;
	HX_STACK_LINE(99)
	this->invalidateGeometry();
	HX_STACK_LINE(100)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_doubleSided,return )

bool PlaneGeometry_obj::get_doubleSided( ){
	HX_STACK_PUSH("PlaneGeometry::get_doubleSided","away3d/primitives/PlaneGeometry.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->_doubleSided;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_doubleSided,return )

bool PlaneGeometry_obj::set_yUp( bool value){
	HX_STACK_PUSH("PlaneGeometry::set_yUp","away3d/primitives/PlaneGeometry.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(84)
	this->_yUp = value;
	HX_STACK_LINE(85)
	this->invalidateGeometry();
	HX_STACK_LINE(86)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_yUp,return )

bool PlaneGeometry_obj::get_yUp( ){
	HX_STACK_PUSH("PlaneGeometry::get_yUp","away3d/primitives/PlaneGeometry.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->_yUp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_yUp,return )

int PlaneGeometry_obj::set_segmentsH( int value){
	HX_STACK_PUSH("PlaneGeometry::set_segmentsH","away3d/primitives/PlaneGeometry.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(69)
	this->_segmentsH = value;
	HX_STACK_LINE(70)
	this->invalidateGeometry();
	HX_STACK_LINE(71)
	this->invalidateUVs();
	HX_STACK_LINE(72)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_segmentsH,return )

int PlaneGeometry_obj::get_segmentsH( ){
	HX_STACK_PUSH("PlaneGeometry::get_segmentsH","away3d/primitives/PlaneGeometry.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return this->_segmentsH;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_segmentsH,return )

int PlaneGeometry_obj::set_segmentsW( int value){
	HX_STACK_PUSH("PlaneGeometry::set_segmentsW","away3d/primitives/PlaneGeometry.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(53)
	this->_segmentsW = value;
	HX_STACK_LINE(54)
	this->invalidateGeometry();
	HX_STACK_LINE(55)
	this->invalidateUVs();
	HX_STACK_LINE(56)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_segmentsW,return )

int PlaneGeometry_obj::get_segmentsW( ){
	HX_STACK_PUSH("PlaneGeometry::get_segmentsW","away3d/primitives/PlaneGeometry.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_LINE(48)
	return this->_segmentsW;
}


HX_DEFINE_DYNAMIC_FUNC0(PlaneGeometry_obj,get_segmentsW,return )


PlaneGeometry_obj::PlaneGeometry_obj()
{
}

void PlaneGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlaneGeometry);
	HX_MARK_MEMBER_NAME(_doubleSided,"_doubleSided");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_yUp,"_yUp");
	HX_MARK_MEMBER_NAME(_segmentsH,"_segmentsH");
	HX_MARK_MEMBER_NAME(_segmentsW,"_segmentsW");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlaneGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_doubleSided,"_doubleSided");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_yUp,"_yUp");
	HX_VISIT_MEMBER_NAME(_segmentsH,"_segmentsH");
	HX_VISIT_MEMBER_NAME(_segmentsW,"_segmentsW");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlaneGeometry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"yUp") ) { return get_yUp(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_yUp") ) { return _yUp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_yUp") ) { return set_yUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yUp") ) { return get_yUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildUVs") ) { return buildUVs_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"segmentsH") ) { return get_segmentsH(); }
		if (HX_FIELD_EQ(inName,"segmentsW") ) { return get_segmentsW(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { return _segmentsH; }
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { return _segmentsW; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doubleSided") ) { return get_doubleSided(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_doubleSided") ) { return _doubleSided; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return buildGeometry_dyn(); }
		if (HX_FIELD_EQ(inName,"set_segmentsH") ) { return set_segmentsH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_segmentsH") ) { return get_segmentsH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_segmentsW") ) { return set_segmentsW_dyn(); }
		if (HX_FIELD_EQ(inName,"get_segmentsW") ) { return get_segmentsW_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_doubleSided") ) { return set_doubleSided_dyn(); }
		if (HX_FIELD_EQ(inName,"get_doubleSided") ) { return get_doubleSided_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlaneGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"yUp") ) { return set_yUp(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_yUp") ) { _yUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"segmentsH") ) { return set_segmentsH(inValue); }
		if (HX_FIELD_EQ(inName,"segmentsW") ) { return set_segmentsW(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { _segmentsH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { _segmentsW=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doubleSided") ) { return set_doubleSided(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_doubleSided") ) { _doubleSided=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlaneGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_doubleSided"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_yUp"));
	outFields->push(HX_CSTRING("_segmentsH"));
	outFields->push(HX_CSTRING("_segmentsW"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("doubleSided"));
	outFields->push(HX_CSTRING("yUp"));
	outFields->push(HX_CSTRING("segmentsH"));
	outFields->push(HX_CSTRING("segmentsW"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("buildUVs"),
	HX_CSTRING("buildGeometry"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_doubleSided"),
	HX_CSTRING("get_doubleSided"),
	HX_CSTRING("set_yUp"),
	HX_CSTRING("get_yUp"),
	HX_CSTRING("set_segmentsH"),
	HX_CSTRING("get_segmentsH"),
	HX_CSTRING("set_segmentsW"),
	HX_CSTRING("get_segmentsW"),
	HX_CSTRING("_doubleSided"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_yUp"),
	HX_CSTRING("_segmentsH"),
	HX_CSTRING("_segmentsW"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

Class PlaneGeometry_obj::__mClass;

void PlaneGeometry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.primitives.PlaneGeometry"), hx::TCanCast< PlaneGeometry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlaneGeometry_obj::__boot()
{
}

} // end namespace away3d
} // end namespace primitives
