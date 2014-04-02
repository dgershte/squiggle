#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_Memory
#include <flash/Memory.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_OptimizedPerlin
#include <flash/display/OptimizedPerlin.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{
HX_STACK_PUSH("BitmapData::new","flash/display/BitmapData.hx",42);
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(44)
	this->__transparent = transparent;
	HX_STACK_LINE(46)
	if (((bool((width < (int)1)) || bool((height < (int)1))))){
		HX_STACK_LINE(46)
		this->__handle = null();
	}
	else{
		HX_STACK_LINE(52)
		int flags = (int)2;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(53)
		if ((transparent)){
			HX_STACK_LINE(53)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(54)
		int alpha = hx::UShr(fillColor,(int)24);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(56)
		if (((bool(transparent) && bool((alpha == (int)0))))){
			HX_STACK_LINE(56)
			fillColor = (int)0;
		}
		HX_STACK_LINE(62)
		this->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_create(width,height,flags,(int(fillColor) & int((int)16777215)),alpha,gpuMode);
	}
}
;
	return null();
}

BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(width,height,__o_transparent,__o_fillColor,gpuMode);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flash::display::IBitmapDrawable_obj)) return operator ::flash::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

bool BitmapData_obj::get_transparent( ){
	HX_STACK_PUSH("BitmapData::get_transparent","flash/display/BitmapData.hx",708);
	HX_STACK_THIS(this);
	HX_STACK_LINE(708)
	return this->__transparent;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_transparent,return )

int BitmapData_obj::get_height( ){
	HX_STACK_PUSH("BitmapData::get_height","flash/display/BitmapData.hx",707);
	HX_STACK_THIS(this);
	HX_STACK_LINE(707)
	return ::flash::display::BitmapData_obj::lime_bitmap_data_height(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_height,return )

int BitmapData_obj::get_width( ){
	HX_STACK_PUSH("BitmapData::get_width","flash/display/BitmapData.hx",706);
	HX_STACK_THIS(this);
	HX_STACK_LINE(706)
	return ::flash::display::BitmapData_obj::lime_bitmap_data_width(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_width,return )

::flash::geom::Rectangle BitmapData_obj::get_rect( ){
	HX_STACK_PUSH("BitmapData::get_rect","flash/display/BitmapData.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_LINE(705)
	return ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->get_width(),this->get_height());
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_rect,return )

bool BitmapData_obj::set_premultipliedAlpha( bool value){
	HX_STACK_PUSH("BitmapData::set_premultipliedAlpha","flash/display/BitmapData.hx",704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(704)
	::flash::display::BitmapData_obj::lime_bitmap_data_set_prem_alpha(this->__handle,value);
	HX_STACK_LINE(704)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,set_premultipliedAlpha,return )

bool BitmapData_obj::get_premultipliedAlpha( ){
	HX_STACK_PUSH("BitmapData::get_premultipliedAlpha","flash/display/BitmapData.hx",703);
	HX_STACK_THIS(this);
	HX_STACK_LINE(703)
	return ::flash::display::BitmapData_obj::lime_bitmap_data_get_prem_alpha(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_premultipliedAlpha,return )

Void BitmapData_obj::__loadFromBytes( ::flash::utils::ByteArray bytes,::flash::utils::ByteArray rawAlpha){
{
		HX_STACK_PUSH("BitmapData::__loadFromBytes","flash/display/BitmapData.hx",635);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bytes,"bytes");
		HX_STACK_ARG(rawAlpha,"rawAlpha");
		HX_STACK_LINE(635)
		this->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_from_bytes(bytes,rawAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__loadFromBytes,(void))

Void BitmapData_obj::__drawToSurface( Dynamic surface,::flash::geom::Matrix matrix,::flash::geom::ColorTransform colorTransform,::String blendMode,::flash::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_PUSH("BitmapData::__drawToSurface","flash/display/BitmapData.hx",621);
		HX_STACK_THIS(this);
		HX_STACK_ARG(surface,"surface");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(colorTransform,"colorTransform");
		HX_STACK_ARG(blendMode,"blendMode");
		HX_STACK_ARG(clipRect,"clipRect");
		HX_STACK_ARG(smoothing,"smoothing");
		HX_STACK_LINE(621)
		::flash::display::BitmapData_obj::lime_render_surface_to_surface(surface,this->__handle,matrix,colorTransform,blendMode,clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,__drawToSurface,(void))

Void BitmapData_obj::unmultiplyAlpha( ){
{
		HX_STACK_PUSH("BitmapData::unmultiplyAlpha","flash/display/BitmapData.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(614)
		::flash::display::BitmapData_obj::lime_bitmap_data_unmultiply_alpha(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,unmultiplyAlpha,(void))

Void BitmapData_obj::unlock( ::flash::geom::Rectangle changeRect){
{
		HX_STACK_PUSH("BitmapData::unlock","flash/display/BitmapData.hx",607);
		HX_STACK_THIS(this);
		HX_STACK_ARG(changeRect,"changeRect");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

int BitmapData_obj::threshold( ::flash::display::BitmapData sourceBitmapData,::flash::geom::Rectangle sourceRect,::flash::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_PUSH("BitmapData::threshold","flash/display/BitmapData.hx",456);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData");
	HX_STACK_ARG(sourceRect,"sourceRect");
	HX_STACK_ARG(destPoint,"destPoint");
	HX_STACK_ARG(operation,"operation");
	HX_STACK_ARG(threshold,"threshold");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(copySource,"copySource");
{
		HX_STACK_LINE(456)
		if (((bool((bool((bool((sourceBitmapData == hx::ObjectPtr<OBJ_>(this))) && bool(sourceRect->equals(this->get_rect())))) && bool((destPoint->x == (int)0)))) && bool((destPoint->y == (int)0))))){
			HX_STACK_LINE(460)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(462)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(463)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(465)
			::flash::utils::ByteArray memory = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(466)
			memory->setLength(((this->get_width() * this->get_height()) * (int)4));
			HX_STACK_LINE(467)
			memory = this->getPixels(this->get_rect());
			HX_STACK_LINE(468)
			memory->position = (int)0;
			HX_STACK_LINE(469)
			::flash::Memory_obj::select(memory);
			HX_STACK_LINE(471)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(473)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			int position;		HX_STACK_VAR(position,"position");
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			int i;		HX_STACK_VAR(i,"i");
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(475)
				while(((_g1 < _g))){
					HX_STACK_LINE(475)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(477)
					width_yy = (this->get_width() * yy);
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(479)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(479)
						while(((_g3 < _g2))){
							HX_STACK_LINE(479)
							int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(481)
							position = (((width_yy + xx)) * (int)4);
							HX_STACK_LINE(482)
							pixelValue = ::flash::Memory_obj::getI32(position);
							HX_STACK_LINE(483)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(485)
							i = ::flash::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);
							HX_STACK_LINE(486)
							test = false;
							HX_STACK_LINE(488)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(488)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(489)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(489)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(490)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(490)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(491)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(491)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(492)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(492)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(493)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(493)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(495)
							if ((test)){
								HX_STACK_LINE(497)
								::flash::Memory_obj::setI32(position,color);
								HX_STACK_LINE(498)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(506)
			memory->position = (int)0;
			HX_STACK_LINE(507)
			this->setPixels(this->get_rect(),memory);
			HX_STACK_LINE(508)
			::flash::Memory_obj::select(null());
			HX_STACK_LINE(509)
			return hits;
		}
		else{
			HX_STACK_LINE(513)
			int sx = ::Std_obj::_int(sourceRect->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(514)
			int sy = ::Std_obj::_int(sourceRect->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(515)
			int sw = ::Std_obj::_int(sourceBitmapData->get_width());		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(516)
			int sh = ::Std_obj::_int(sourceBitmapData->get_height());		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(518)
			int dx = ::Std_obj::_int(destPoint->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(519)
			int dy = ::Std_obj::_int(destPoint->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(521)
			int bw = ((this->get_width() - sw) - dx);		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(522)
			int bh = ((this->get_height() - sh) - dy);		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(524)
			int dw = (  (((bw < (int)0))) ? int((sw + (((this->get_width() - sw) - dx)))) : int(sw) );		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(525)
			int dh = (  (((bw < (int)0))) ? int((sh + (((this->get_height() - sh) - dy)))) : int(sh) );		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(527)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(529)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(530)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(532)
			int canvasMemory = ((sw * sh) * (int)4);		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(533)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(535)
			if ((copySource)){
				HX_STACK_LINE(535)
				sourceMemory = ((sw * sh) * (int)4);
			}
			HX_STACK_LINE(541)
			int totalMemory = (canvasMemory + sourceMemory);		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(542)
			::flash::utils::ByteArray memory = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(543)
			memory->setLength(totalMemory);
			HX_STACK_LINE(544)
			memory->position = (int)0;
			HX_STACK_LINE(545)
			::flash::display::BitmapData bitmapData = sourceBitmapData->clone();		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(546)
			::flash::utils::ByteArray pixels = bitmapData->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(547)
			memory->writeBytes(pixels,null(),null());
			HX_STACK_LINE(548)
			memory->position = canvasMemory;
			HX_STACK_LINE(550)
			if ((copySource)){
				HX_STACK_LINE(550)
				memory->writeBytes(pixels,null(),null());
			}
			HX_STACK_LINE(556)
			memory->position = (int)0;
			HX_STACK_LINE(557)
			::flash::Memory_obj::select(memory);
			HX_STACK_LINE(559)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(561)
			int position;		HX_STACK_VAR(position,"position");
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			int i;		HX_STACK_VAR(i,"i");
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(563)
				while(((_g < dh))){
					HX_STACK_LINE(563)
					int yy = (_g)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(565)
					{
						HX_STACK_LINE(565)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(565)
						while(((_g1 < dw))){
							HX_STACK_LINE(565)
							int xx = (_g1)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(567)
							position = ((((xx + sx) + (((yy + sy)) * sw))) * (int)4);
							HX_STACK_LINE(568)
							pixelValue = ::flash::Memory_obj::getI32(position);
							HX_STACK_LINE(569)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(571)
							i = ::flash::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);
							HX_STACK_LINE(572)
							test = false;
							HX_STACK_LINE(574)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(574)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(575)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(575)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(576)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(576)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(577)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(577)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(578)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(578)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(579)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(579)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(581)
							if ((test)){
								HX_STACK_LINE(583)
								::flash::Memory_obj::setI32(position,color);
								HX_STACK_LINE(584)
								(hits)++;
							}
							else{
								HX_STACK_LINE(586)
								if ((copySource)){
									HX_STACK_LINE(586)
									::flash::Memory_obj::setI32(position,::flash::Memory_obj::getI32((canvasMemory + position)));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(596)
			memory->position = (int)0;
			HX_STACK_LINE(597)
			bitmapData->setPixels(sourceRect,memory);
			HX_STACK_LINE(598)
			this->copyPixels(bitmapData,bitmapData->get_rect(),destPoint,null(),null(),null());
			HX_STACK_LINE(599)
			::flash::Memory_obj::select(null());
			HX_STACK_LINE(600)
			return hits;
		}
		HX_STACK_LINE(456)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::setVector( ::flash::geom::Rectangle rect,Array< int > pixels){
{
		HX_STACK_PUSH("BitmapData::setVector","flash/display/BitmapData.hx",434);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(436)
		int count = ::Std_obj::_int((rect->width * rect->height));		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(437)
		if (((pixels->length < count))){
			HX_STACK_LINE(437)
			return null();
		}
		HX_STACK_LINE(440)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_array(this->__handle,rect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

Void BitmapData_obj::setPixels( ::flash::geom::Rectangle rect,::flash::utils::ByteArray pixels){
{
		HX_STACK_PUSH("BitmapData::setPixels","flash/display/BitmapData.hx",424);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(pixels,"pixels");
		HX_STACK_LINE(426)
		int size = ::Std_obj::_int(((rect->width * rect->height) * (int)4));		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(427)
		pixels->checkData(::Std_obj::_int(size));
		HX_STACK_LINE(428)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_bytes(this->__handle,rect,pixels,pixels->position);
		HX_STACK_LINE(429)
		hx::AddEq(pixels->position,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_PUSH("BitmapData::setPixel32","flash/display/BitmapData.hx",417);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(417)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_pixel32(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_PUSH("BitmapData::setPixel","flash/display/BitmapData.hx",410);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(410)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_pixel(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setFormat( int format){
{
		HX_STACK_PUSH("BitmapData::setFormat","flash/display/BitmapData.hx",403);
		HX_STACK_THIS(this);
		HX_STACK_ARG(format,"format");
		HX_STACK_LINE(403)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_format(this->__handle,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFormat,(void))

Void BitmapData_obj::setFlags( int flags){
{
		HX_STACK_PUSH("BitmapData::setFlags","flash/display/BitmapData.hx",395);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flags,"flags");
		HX_STACK_LINE(395)
		::flash::display::BitmapData_obj::lime_bitmap_data_set_flags(this->__handle,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFlags,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_PUSH("BitmapData::scroll","flash/display/BitmapData.hx",388);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(388)
		::flash::display::BitmapData_obj::lime_bitmap_data_scroll(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_PUSH("BitmapData::perlinNoise","flash/display/BitmapData.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baseX,"baseX");
	HX_STACK_ARG(baseY,"baseY");
	HX_STACK_ARG(numOctaves,"numOctaves");
	HX_STACK_ARG(randomSeed,"randomSeed");
	HX_STACK_ARG(stitch,"stitch");
	HX_STACK_ARG(fractalNoise,"fractalNoise");
	HX_STACK_ARG(channelOptions,"channelOptions");
	HX_STACK_ARG(grayScale,"grayScale");
	HX_STACK_ARG(offsets,"offsets");
{
		HX_STACK_LINE(375)
		::flash::display::OptimizedPerlin perlin = ::flash::display::OptimizedPerlin_obj::__new(randomSeed,numOctaves,null());		HX_STACK_VAR(perlin,"perlin");
		HX_STACK_LINE(376)
		perlin->fill(hx::ObjectPtr<OBJ_>(this),baseX,baseY,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::paletteMap( ::flash::display::BitmapData sourceBitmapData,::flash::geom::Rectangle sourceRect,::flash::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_PUSH("BitmapData::paletteMap","flash/display/BitmapData.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData");
		HX_STACK_ARG(sourceRect,"sourceRect");
		HX_STACK_ARG(destPoint,"destPoint");
		HX_STACK_ARG(redArray,"redArray");
		HX_STACK_ARG(greenArray,"greenArray");
		HX_STACK_ARG(blueArray,"blueArray");
		HX_STACK_ARG(alphaArray,"alphaArray");
		HX_STACK_LINE(340)
		::flash::utils::ByteArray memory = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
		HX_STACK_LINE(341)
		int sw = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(342)
		int sh = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(343)
		memory->setLength(((sw * sh) * (int)4));
		HX_STACK_LINE(344)
		memory = this->getPixels(sourceRect);
		HX_STACK_LINE(345)
		memory->position = (int)0;
		HX_STACK_LINE(346)
		::flash::Memory_obj::select(memory);
		HX_STACK_LINE(348)
		int position;		HX_STACK_VAR(position,"position");
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		int r;		HX_STACK_VAR(r,"r");
		int g;		HX_STACK_VAR(g,"g");
		int b;		HX_STACK_VAR(b,"b");
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (sh * sw);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(350)
			while(((_g1 < _g))){
				HX_STACK_LINE(350)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(351)
				position = (i * (int)4);
				HX_STACK_LINE(352)
				pixelValue = ::flash::Memory_obj::getI32(position);
				HX_STACK_LINE(354)
				r = (int((int(pixelValue) >> int((int)8))) & int((int)255));
				HX_STACK_LINE(355)
				g = (int((int(pixelValue) >> int((int)16))) & int((int)255));
				HX_STACK_LINE(356)
				b = (int((int(pixelValue) >> int((int)24))) & int((int)255));
				struct _Function_3_1{
					inline static int Block( int &g,int &r,Array< int > &greenArray,int &b,Array< int > &redArray,Array< int > &blueArray){
						HX_STACK_PUSH("*::closure","flash/display/BitmapData.hx",358);
						{
							HX_STACK_LINE(358)
							int pixel = (int((int((int((int)-16777216) | int(redArray->__get(r)))) | int(greenArray->__get(g)))) | int(blueArray->__get(b)));		HX_STACK_VAR(pixel,"pixel");
							HX_STACK_LINE(358)
							return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(358)
				color = _Function_3_1::Block(g,r,greenArray,b,redArray,blueArray);
				HX_STACK_LINE(363)
				::flash::Memory_obj::setI32(position,color);
			}
		}
		HX_STACK_LINE(366)
		memory->position = (int)0;
		HX_STACK_LINE(367)
		::flash::geom::Rectangle destRect = ::flash::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(368)
		this->setPixels(destRect,memory);
		HX_STACK_LINE(369)
		::flash::Memory_obj::select(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_PUSH("BitmapData::noise","flash/display/BitmapData.hx",332);
	HX_STACK_THIS(this);
	HX_STACK_ARG(randomSeed,"randomSeed");
	HX_STACK_ARG(low,"low");
	HX_STACK_ARG(high,"high");
	HX_STACK_ARG(channelOptions,"channelOptions");
	HX_STACK_ARG(grayScale,"grayScale");
{
		HX_STACK_LINE(332)
		::flash::display::BitmapData_obj::lime_bitmap_data_noise(this->__handle,randomSeed,low,high,channelOptions,grayScale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::multiplyAlpha( ){
{
		HX_STACK_PUSH("BitmapData::multiplyAlpha","flash/display/BitmapData.hx",325);
		HX_STACK_THIS(this);
		HX_STACK_LINE(325)
		::flash::display::BitmapData_obj::lime_bitmap_data_multiply_alpha(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,multiplyAlpha,(void))

Void BitmapData_obj::lock( ){
{
		HX_STACK_PUSH("BitmapData::lock","flash/display/BitmapData.hx",318);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Array< int > BitmapData_obj::getVector( ::flash::geom::Rectangle rect){
	HX_STACK_PUSH("BitmapData::getVector","flash/display/BitmapData.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(274)
	int pixels = ::Std_obj::_int((rect->width * rect->height));		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(275)
	if (((pixels < (int)1))){
		HX_STACK_LINE(275)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(277)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(278)
	result[(pixels - (int)1)] = (int)0;
	HX_STACK_LINE(281)
	::flash::display::BitmapData_obj::lime_bitmap_data_get_array(this->__handle,rect,result);
	HX_STACK_LINE(288)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

::flash::utils::ByteArray BitmapData_obj::getPixels( ::flash::geom::Rectangle rect){
	HX_STACK_PUSH("BitmapData::getPixels","flash/display/BitmapData.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(239)
	::flash::utils::ByteArray result = ::flash::display::BitmapData_obj::lime_bitmap_data_get_pixels(this->__handle,rect);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(240)
	if (((result != null()))){
		HX_STACK_LINE(240)
		result->position = result->length;
	}
	HX_STACK_LINE(241)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_PUSH("BitmapData::getPixel32","flash/display/BitmapData.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(230)
	return ::flash::display::BitmapData_obj::lime_bitmap_data_get_pixel32(this->__handle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_PUSH("BitmapData::getPixel","flash/display/BitmapData.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(223)
	return ::flash::display::BitmapData_obj::lime_bitmap_data_get_pixel(this->__handle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

::flash::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_PUSH("BitmapData::getColorBoundsRect","flash/display/BitmapData.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(findColor,"findColor");
{
		HX_STACK_LINE(216)
		::flash::geom::Rectangle result = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(217)
		::flash::display::BitmapData_obj::lime_bitmap_data_get_color_bounds_rect(this->__handle,mask,color,findColor,result);
		HX_STACK_LINE(218)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

::flash::geom::Rectangle BitmapData_obj::generateFilterRect( ::flash::geom::Rectangle sourceRect,::flash::filters::BitmapFilter filter){
	HX_STACK_PUSH("BitmapData::generateFilterRect","flash/display/BitmapData.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sourceRect,"sourceRect");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(207)
	::flash::geom::Rectangle result = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(208)
	::flash::display::BitmapData_obj::lime_bitmap_data_generate_filter_rect(sourceRect,filter,result);
	HX_STACK_LINE(209)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_PUSH("BitmapData::floodFill","flash/display/BitmapData.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(198)
		::flash::display::BitmapData_obj::lime_bitmap_data_flood_fill(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

Void BitmapData_obj::fillRectEx( ::flash::geom::Rectangle rect,int color,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("BitmapData::fillRectEx","flash/display/BitmapData.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(191)
		::flash::display::BitmapData_obj::lime_bitmap_data_fill(this->__handle,rect,color,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fillRectEx,(void))

Void BitmapData_obj::fillRect( ::flash::geom::Rectangle rect,int color){
{
		HX_STACK_PUSH("BitmapData::fillRect","flash/display/BitmapData.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(184)
		::flash::display::BitmapData_obj::lime_bitmap_data_fill(this->__handle,rect,(int(color) & int((int)16777215)),hx::UShr(color,(int)24));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

::flash::utils::ByteArray BitmapData_obj::encode( ::String format,hx::Null< Float >  __o_quality){
Float quality = __o_quality.Default(0.9);
	HX_STACK_PUSH("BitmapData::encode","flash/display/BitmapData.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(quality,"quality");
{
		HX_STACK_LINE(163)
		return ::flash::display::BitmapData_obj::lime_bitmap_data_encode(this->__handle,format,quality);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,encode,return )

Void BitmapData_obj::dumpBits( ){
{
		HX_STACK_PUSH("BitmapData::dumpBits","flash/display/BitmapData.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		::flash::display::BitmapData_obj::lime_bitmap_data_dump_bits(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dumpBits,(void))

Void BitmapData_obj::draw( ::flash::display::IBitmapDrawable source,::flash::geom::Matrix matrix,::flash::geom::ColorTransform colorTransform,::flash::display::BlendMode blendMode,::flash::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_PUSH("BitmapData::draw","flash/display/BitmapData.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(colorTransform,"colorTransform");
	HX_STACK_ARG(blendMode,"blendMode");
	HX_STACK_ARG(clipRect,"clipRect");
	HX_STACK_ARG(smoothing,"smoothing");
{
		HX_STACK_LINE(149)
		source->__drawToSurface(this->__handle,matrix,colorTransform,::Std_obj::string(blendMode),clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_PUSH("BitmapData::dispose","flash/display/BitmapData.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		if (((this->__handle != null()))){
			HX_STACK_LINE(138)
			::flash::display::BitmapData_obj::lime_bitmap_data_dispose(this->__handle);
		}
		HX_STACK_LINE(144)
		this->__handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::destroyHardwareSurface( ){
{
		HX_STACK_PUSH("BitmapData::destroyHardwareSurface","flash/display/BitmapData.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_LINE(128)
		::flash::display::BitmapData_obj::lime_bitmap_data_destroy_hardware_surface(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,destroyHardwareSurface,(void))

Void BitmapData_obj::createHardwareSurface( ){
{
		HX_STACK_PUSH("BitmapData::createHardwareSurface","flash/display/BitmapData.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		::flash::display::BitmapData_obj::lime_bitmap_data_create_hardware_surface(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,createHardwareSurface,(void))

Void BitmapData_obj::copyPixels( ::flash::display::BitmapData sourceBitmapData,::flash::geom::Rectangle sourceRect,::flash::geom::Point destPoint,::flash::display::BitmapData alphaBitmapData,::flash::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_PUSH("BitmapData::copyPixels","flash/display/BitmapData.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData");
	HX_STACK_ARG(sourceRect,"sourceRect");
	HX_STACK_ARG(destPoint,"destPoint");
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData");
	HX_STACK_ARG(alphaPoint,"alphaPoint");
	HX_STACK_ARG(mergeAlpha,"mergeAlpha");
{
		HX_STACK_LINE(106)
		::flash::display::BitmapData_obj::lime_bitmap_data_copy(sourceBitmapData->__handle,sourceRect,this->__handle,destPoint,mergeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::copyChannel( ::flash::display::BitmapData sourceBitmapData,::flash::geom::Rectangle sourceRect,::flash::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_PUSH("BitmapData::copyChannel","flash/display/BitmapData.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData");
		HX_STACK_ARG(sourceRect,"sourceRect");
		HX_STACK_ARG(destPoint,"destPoint");
		HX_STACK_ARG(sourceChannel,"sourceChannel");
		HX_STACK_ARG(destChannel,"destChannel");
		HX_STACK_LINE(99)
		::flash::display::BitmapData_obj::lime_bitmap_data_copy_channel(sourceBitmapData->__handle,sourceRect,this->__handle,destPoint,sourceChannel,destChannel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::colorTransform( ::flash::geom::Rectangle rect,::flash::geom::ColorTransform colorTransform){
{
		HX_STACK_PUSH("BitmapData::colorTransform","flash/display/BitmapData.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(colorTransform,"colorTransform");
		HX_STACK_LINE(92)
		::flash::display::BitmapData_obj::lime_bitmap_data_color_transform(this->__handle,rect,colorTransform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

::flash::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_PUSH("BitmapData::clone","flash/display/BitmapData.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	::flash::display::BitmapData bitmapData = ::flash::display::BitmapData_obj::__new((int)0,(int)0,this->get_transparent(),null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(86)
	bitmapData->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_clone(this->__handle);
	HX_STACK_LINE(87)
	return bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::clear( int color){
{
		HX_STACK_PUSH("BitmapData::clear","flash/display/BitmapData.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(76)
		::flash::display::BitmapData_obj::lime_bitmap_data_clear(this->__handle,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,clear,(void))

Void BitmapData_obj::applyFilter( ::flash::display::BitmapData sourceBitmapData,::flash::geom::Rectangle sourceRect,::flash::geom::Point destPoint,::flash::filters::BitmapFilter filter){
{
		HX_STACK_PUSH("BitmapData::applyFilter","flash/display/BitmapData.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData");
		HX_STACK_ARG(sourceRect,"sourceRect");
		HX_STACK_ARG(destPoint,"destPoint");
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(69)
		::flash::display::BitmapData_obj::lime_bitmap_data_apply_filter(this->__handle,sourceBitmapData->__handle,sourceRect,destPoint,filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

int BitmapData_obj::createColor( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("BitmapData::createColor","flash/display/BitmapData.hx",113);
	HX_STACK_ARG(rgb,"rgb");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(113)
		return (int(rgb) | int((int(alpha) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,createColor,return )

int BitmapData_obj::extractAlpha( int argb){
	HX_STACK_PUSH("BitmapData::extractAlpha","flash/display/BitmapData.hx",170);
	HX_STACK_ARG(argb,"argb");
	HX_STACK_LINE(170)
	return hx::UShr(argb,(int)24);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractAlpha,return )

int BitmapData_obj::extractColor( int argb){
	HX_STACK_PUSH("BitmapData::extractColor","flash/display/BitmapData.hx",177);
	HX_STACK_ARG(argb,"argb");
	HX_STACK_LINE(177)
	return (int(argb) & int((int)16777215));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractColor,return )

::flash::utils::ByteArray BitmapData_obj::getRGBAPixels( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("BitmapData::getRGBAPixels","flash/display/BitmapData.hx",246);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(248)
	::flash::utils::ByteArray data = bitmapData->getPixels(::flash::geom::Rectangle_obj::__new((int)0,(int)0,bitmapData->get_width(),bitmapData->get_height()));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(249)
	int size = (bitmapData->get_width() * bitmapData->get_height());		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(251)
	int alpha;		HX_STACK_VAR(alpha,"alpha");
	int red;		HX_STACK_VAR(red,"red");
	int green;		HX_STACK_VAR(green,"green");
	int blue;		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		while(((_g < size))){
			HX_STACK_LINE(253)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(255)
			alpha = data->__get((i * (int)4));
			HX_STACK_LINE(256)
			red = data->__get(((i * (int)4) + (int)1));
			HX_STACK_LINE(257)
			green = data->__get(((i * (int)4) + (int)2));
			HX_STACK_LINE(258)
			blue = data->__get(((i * (int)4) + (int)3));
			HX_STACK_LINE(260)
			hx::__ArrayImplRef(data,(i * (int)4)) = red;
			HX_STACK_LINE(261)
			hx::__ArrayImplRef(data,((i * (int)4) + (int)1)) = green;
			HX_STACK_LINE(262)
			hx::__ArrayImplRef(data,((i * (int)4) + (int)2)) = blue;
			HX_STACK_LINE(263)
			hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = alpha;
		}
	}
	HX_STACK_LINE(267)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getRGBAPixels,return )

::flash::display::BitmapData BitmapData_obj::load( ::String filename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_PUSH("BitmapData::load","flash/display/BitmapData.hx",293);
	HX_STACK_ARG(filename,"filename");
	HX_STACK_ARG(format,"format");
{
		HX_STACK_LINE(295)
		::flash::display::BitmapData result = ::flash::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(296)
		result->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_load(filename,format);
		HX_STACK_LINE(297)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,load,return )

::flash::display::BitmapData BitmapData_obj::loadFromBytes( ::flash::utils::ByteArray bytes,::flash::utils::ByteArray rawAlpha){
	HX_STACK_PUSH("BitmapData::loadFromBytes","flash/display/BitmapData.hx",302);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(rawAlpha,"rawAlpha");
	HX_STACK_LINE(304)
	::flash::display::BitmapData result = ::flash::display::BitmapData_obj::__new((int)0,(int)0,true,null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(305)
	result->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_from_bytes(bytes,rawAlpha);
	HX_STACK_LINE(306)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::flash::display::BitmapData BitmapData_obj::loadFromHaxeBytes( ::haxe::io::Bytes bytes,::haxe::io::Bytes rawAlpha){
	HX_STACK_PUSH("BitmapData::loadFromHaxeBytes","flash/display/BitmapData.hx",311);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(rawAlpha,"rawAlpha");
	HX_STACK_LINE(311)
	return ::flash::display::BitmapData_obj::loadFromBytes(::flash::utils::ByteArray_obj::fromBytes(bytes),(  (((rawAlpha == null()))) ? ::flash::utils::ByteArray(null()) : ::flash::utils::ByteArray(::flash::utils::ByteArray_obj::fromBytes(rawAlpha)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromHaxeBytes,return )

bool BitmapData_obj::sameValue( int a,int b){
	HX_STACK_PUSH("BitmapData::sameValue","flash/display/BitmapData.hx",381);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(381)
	return (a == b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,sameValue,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_PUSH("BitmapData::__flipPixel","flash/display/BitmapData.hx",628);
	HX_STACK_ARG(pixel,"pixel");
	HX_STACK_LINE(628)
	return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_PUSH("BitmapData::__ucompare","flash/display/BitmapData.hx",642);
	HX_STACK_ARG(n1,"n1");
	HX_STACK_ARG(n2,"n2");
	HX_STACK_LINE(644)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(645)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(647)
	tmp1 = (int((int(n1) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(648)
	tmp2 = (int((int(n2) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(650)
	if (((tmp1 != tmp2))){
		HX_STACK_LINE(650)
		return (  (((tmp1 > tmp2))) ? int((int)1) : int((int)-1) );
	}
	else{
		HX_STACK_LINE(656)
		tmp1 = (int((int(n1) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(657)
		tmp2 = (int((int(n2) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(659)
		if (((tmp1 != tmp2))){
			HX_STACK_LINE(659)
			return (  (((tmp1 > tmp2))) ? int((int)1) : int((int)-1) );
		}
		else{
			HX_STACK_LINE(665)
			tmp1 = (int((int(n1) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(666)
			tmp2 = (int((int(n2) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(668)
			if (((tmp1 != tmp2))){
				HX_STACK_LINE(668)
				return (  (((tmp1 > tmp2))) ? int((int)1) : int((int)-1) );
			}
			else{
				HX_STACK_LINE(674)
				tmp1 = (int(n1) & int((int)255));
				HX_STACK_LINE(675)
				tmp2 = (int(n2) & int((int)255));
				HX_STACK_LINE(677)
				if (((tmp1 != tmp2))){
					HX_STACK_LINE(677)
					return (  (((tmp1 > tmp2))) ? int((int)1) : int((int)-1) );
				}
				else{
					HX_STACK_LINE(681)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(650)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )

Dynamic BitmapData_obj::lime_bitmap_data_create;

Dynamic BitmapData_obj::lime_bitmap_data_load;

Dynamic BitmapData_obj::lime_bitmap_data_from_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_clear;

Dynamic BitmapData_obj::lime_bitmap_data_clone;

Dynamic BitmapData_obj::lime_bitmap_data_apply_filter;

Dynamic BitmapData_obj::lime_bitmap_data_color_transform;

Dynamic BitmapData_obj::lime_bitmap_data_copy;

Dynamic BitmapData_obj::lime_bitmap_data_copy_channel;

Dynamic BitmapData_obj::lime_bitmap_data_fill;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixels;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_get_array;

Dynamic BitmapData_obj::lime_bitmap_data_get_color_bounds_rect;

Dynamic BitmapData_obj::lime_bitmap_data_scroll;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_set_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_set_format;

Dynamic BitmapData_obj::lime_bitmap_data_set_array;

Dynamic BitmapData_obj::lime_bitmap_data_create_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_destroy_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_dispose;

Dynamic BitmapData_obj::lime_bitmap_data_generate_filter_rect;

Dynamic BitmapData_obj::lime_render_surface_to_surface;

Dynamic BitmapData_obj::lime_bitmap_data_height;

Dynamic BitmapData_obj::lime_bitmap_data_width;

Dynamic BitmapData_obj::lime_bitmap_data_get_transparent;

Dynamic BitmapData_obj::lime_bitmap_data_set_flags;

Dynamic BitmapData_obj::lime_bitmap_data_encode;

Dynamic BitmapData_obj::lime_bitmap_data_dump_bits;

Dynamic BitmapData_obj::lime_bitmap_data_flood_fill;

Dynamic BitmapData_obj::lime_bitmap_data_noise;

Dynamic BitmapData_obj::lime_bitmap_data_unmultiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_multiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_get_prem_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_set_prem_alpha;


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp ? get_rect() : rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlags") ) { return setFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpBits") ) { return dumpBits_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sameValue") ) { return sameValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__ucompare") ) { return __ucompare_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRectEx") ) { return fillRectEx_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createColor") ) { return createColor_dyn(); }
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { return __flipPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return inCallProp ? get_transparent() : transparent; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractAlpha") ) { return extractAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"extractColor") ) { return extractColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRGBAPixels") ) { return getRGBAPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { return loadFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { return multiplyAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromBytes") ) { return __loadFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawToSurface") ) { return __drawToSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { return unmultiplyAlpha_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { return loadFromHaxeBytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { return get_premultipliedAlpha(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { return lime_bitmap_data_load; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { return lime_bitmap_data_copy; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { return lime_bitmap_data_fill; }
		if (HX_FIELD_EQ(inName,"createHardwareSurface") ) { return createHardwareSurface_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { return lime_bitmap_data_clear; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { return lime_bitmap_data_clone; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { return lime_bitmap_data_width; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { return lime_bitmap_data_noise; }
		if (HX_FIELD_EQ(inName,"set_premultipliedAlpha") ) { return set_premultipliedAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultipliedAlpha") ) { return get_premultipliedAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyHardwareSurface") ) { return destroyHardwareSurface_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { return lime_bitmap_data_create; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { return lime_bitmap_data_scroll; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { return lime_bitmap_data_height; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { return lime_bitmap_data_encode; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { return lime_bitmap_data_dispose; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { return lime_bitmap_data_get_pixel; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { return lime_bitmap_data_get_array; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { return lime_bitmap_data_set_pixel; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { return lime_bitmap_data_set_bytes; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { return lime_bitmap_data_set_array; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { return lime_bitmap_data_set_flags; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { return lime_bitmap_data_dump_bits; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { return lime_bitmap_data_from_bytes; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { return lime_bitmap_data_get_pixels; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { return lime_bitmap_data_set_format; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { return lime_bitmap_data_flood_fill; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { return lime_bitmap_data_get_pixel32; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { return lime_bitmap_data_set_pixel32; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { return lime_bitmap_data_apply_filter; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { return lime_bitmap_data_copy_channel; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { return lime_render_surface_to_surface; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { return lime_bitmap_data_get_pixel_rgba; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { return lime_bitmap_data_set_pixel_rgba; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { return lime_bitmap_data_multiply_alpha; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { return lime_bitmap_data_get_prem_alpha; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { return lime_bitmap_data_set_prem_alpha; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { return lime_bitmap_data_color_transform; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { return lime_bitmap_data_get_transparent; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { return lime_bitmap_data_unmultiply_alpha; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { return lime_bitmap_data_generate_filter_rect; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { return lime_bitmap_data_get_color_bounds_rect; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { return lime_bitmap_data_create_hardware_surface; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { return lime_bitmap_data_destroy_hardware_surface; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { return set_premultipliedAlpha(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { lime_bitmap_data_load=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { lime_bitmap_data_copy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { lime_bitmap_data_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { lime_bitmap_data_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { lime_bitmap_data_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { lime_bitmap_data_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { lime_bitmap_data_noise=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { lime_bitmap_data_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { lime_bitmap_data_scroll=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { lime_bitmap_data_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { lime_bitmap_data_encode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { lime_bitmap_data_dispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { lime_bitmap_data_get_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { lime_bitmap_data_get_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { lime_bitmap_data_set_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { lime_bitmap_data_set_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { lime_bitmap_data_set_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { lime_bitmap_data_set_flags=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { lime_bitmap_data_dump_bits=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { lime_bitmap_data_from_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { lime_bitmap_data_get_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { lime_bitmap_data_set_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { lime_bitmap_data_flood_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { lime_bitmap_data_get_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { lime_bitmap_data_set_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { lime_bitmap_data_apply_filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { lime_bitmap_data_copy_channel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { lime_render_surface_to_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { lime_bitmap_data_get_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { lime_bitmap_data_set_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { lime_bitmap_data_multiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { lime_bitmap_data_get_prem_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { lime_bitmap_data_set_prem_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { lime_bitmap_data_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { lime_bitmap_data_get_transparent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { lime_bitmap_data_unmultiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { lime_bitmap_data_generate_filter_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { lime_bitmap_data_get_color_bounds_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { lime_bitmap_data_create_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { lime_bitmap_data_destroy_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__transparent"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("premultipliedAlpha"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createColor"),
	HX_CSTRING("extractAlpha"),
	HX_CSTRING("extractColor"),
	HX_CSTRING("getRGBAPixels"),
	HX_CSTRING("load"),
	HX_CSTRING("loadFromBytes"),
	HX_CSTRING("loadFromHaxeBytes"),
	HX_CSTRING("sameValue"),
	HX_CSTRING("__flipPixel"),
	HX_CSTRING("__ucompare"),
	HX_CSTRING("lime_bitmap_data_create"),
	HX_CSTRING("lime_bitmap_data_load"),
	HX_CSTRING("lime_bitmap_data_from_bytes"),
	HX_CSTRING("lime_bitmap_data_clear"),
	HX_CSTRING("lime_bitmap_data_clone"),
	HX_CSTRING("lime_bitmap_data_apply_filter"),
	HX_CSTRING("lime_bitmap_data_color_transform"),
	HX_CSTRING("lime_bitmap_data_copy"),
	HX_CSTRING("lime_bitmap_data_copy_channel"),
	HX_CSTRING("lime_bitmap_data_fill"),
	HX_CSTRING("lime_bitmap_data_get_pixels"),
	HX_CSTRING("lime_bitmap_data_get_pixel"),
	HX_CSTRING("lime_bitmap_data_get_pixel32"),
	HX_CSTRING("lime_bitmap_data_get_pixel_rgba"),
	HX_CSTRING("lime_bitmap_data_get_array"),
	HX_CSTRING("lime_bitmap_data_get_color_bounds_rect"),
	HX_CSTRING("lime_bitmap_data_scroll"),
	HX_CSTRING("lime_bitmap_data_set_pixel"),
	HX_CSTRING("lime_bitmap_data_set_pixel32"),
	HX_CSTRING("lime_bitmap_data_set_pixel_rgba"),
	HX_CSTRING("lime_bitmap_data_set_bytes"),
	HX_CSTRING("lime_bitmap_data_set_format"),
	HX_CSTRING("lime_bitmap_data_set_array"),
	HX_CSTRING("lime_bitmap_data_create_hardware_surface"),
	HX_CSTRING("lime_bitmap_data_destroy_hardware_surface"),
	HX_CSTRING("lime_bitmap_data_dispose"),
	HX_CSTRING("lime_bitmap_data_generate_filter_rect"),
	HX_CSTRING("lime_render_surface_to_surface"),
	HX_CSTRING("lime_bitmap_data_height"),
	HX_CSTRING("lime_bitmap_data_width"),
	HX_CSTRING("lime_bitmap_data_get_transparent"),
	HX_CSTRING("lime_bitmap_data_set_flags"),
	HX_CSTRING("lime_bitmap_data_encode"),
	HX_CSTRING("lime_bitmap_data_dump_bits"),
	HX_CSTRING("lime_bitmap_data_flood_fill"),
	HX_CSTRING("lime_bitmap_data_noise"),
	HX_CSTRING("lime_bitmap_data_unmultiply_alpha"),
	HX_CSTRING("lime_bitmap_data_multiply_alpha"),
	HX_CSTRING("lime_bitmap_data_get_prem_alpha"),
	HX_CSTRING("lime_bitmap_data_set_prem_alpha"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_transparent"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_rect"),
	HX_CSTRING("set_premultipliedAlpha"),
	HX_CSTRING("get_premultipliedAlpha"),
	HX_CSTRING("__loadFromBytes"),
	HX_CSTRING("__drawToSurface"),
	HX_CSTRING("unmultiplyAlpha"),
	HX_CSTRING("unlock"),
	HX_CSTRING("threshold"),
	HX_CSTRING("setVector"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setFlags"),
	HX_CSTRING("scroll"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("paletteMap"),
	HX_CSTRING("noise"),
	HX_CSTRING("multiplyAlpha"),
	HX_CSTRING("lock"),
	HX_CSTRING("getVector"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("fillRectEx"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("encode"),
	HX_CSTRING("dumpBits"),
	HX_CSTRING("draw"),
	HX_CSTRING("dispose"),
	HX_CSTRING("destroyHardwareSurface"),
	HX_CSTRING("createHardwareSurface"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("clone"),
	HX_CSTRING("clear"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("__transparent"),
	HX_CSTRING("__handle"),
	HX_CSTRING("width"),
	HX_CSTRING("transparent"),
	HX_CSTRING("rect"),
	HX_CSTRING("height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapData_obj::__boot()
{
	lime_bitmap_data_create= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_create"),(int)-1);
	lime_bitmap_data_load= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_load"),(int)2);
	lime_bitmap_data_from_bytes= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_from_bytes"),(int)2);
	lime_bitmap_data_clear= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_clear"),(int)2);
	lime_bitmap_data_clone= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_clone"),(int)1);
	lime_bitmap_data_apply_filter= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_apply_filter"),(int)5);
	lime_bitmap_data_color_transform= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_color_transform"),(int)3);
	lime_bitmap_data_copy= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_copy"),(int)5);
	lime_bitmap_data_copy_channel= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_copy_channel"),(int)-1);
	lime_bitmap_data_fill= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_fill"),(int)4);
	lime_bitmap_data_get_pixels= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixels"),(int)2);
	lime_bitmap_data_get_pixel= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel"),(int)3);
	lime_bitmap_data_get_pixel32= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel32"),(int)3);
	lime_bitmap_data_get_pixel_rgba= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel_rgba"),(int)3);
	lime_bitmap_data_get_array= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_array"),(int)3);
	lime_bitmap_data_get_color_bounds_rect= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_color_bounds_rect"),(int)5);
	lime_bitmap_data_scroll= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_scroll"),(int)3);
	lime_bitmap_data_set_pixel= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel"),(int)4);
	lime_bitmap_data_set_pixel32= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel32"),(int)4);
	lime_bitmap_data_set_pixel_rgba= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel_rgba"),(int)4);
	lime_bitmap_data_set_bytes= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_bytes"),(int)4);
	lime_bitmap_data_set_format= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_format"),(int)2);
	lime_bitmap_data_set_array= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_array"),(int)3);
	lime_bitmap_data_create_hardware_surface= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_create_hardware_surface"),(int)1);
	lime_bitmap_data_destroy_hardware_surface= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_destroy_hardware_surface"),(int)1);
	lime_bitmap_data_dispose= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_dispose"),(int)1);
	lime_bitmap_data_generate_filter_rect= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_generate_filter_rect"),(int)3);
	lime_render_surface_to_surface= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_render_surface_to_surface"),(int)-1);
	lime_bitmap_data_height= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_height"),(int)1);
	lime_bitmap_data_width= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_width"),(int)1);
	lime_bitmap_data_get_transparent= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_transparent"),(int)1);
	lime_bitmap_data_set_flags= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_flags"),(int)1);
	lime_bitmap_data_encode= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_encode"),(int)3);
	lime_bitmap_data_dump_bits= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_dump_bits"),(int)1);
	lime_bitmap_data_flood_fill= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_flood_fill"),(int)4);
	lime_bitmap_data_noise= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_noise"),(int)-1);
	lime_bitmap_data_unmultiply_alpha= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_unmultiply_alpha"),(int)1);
	lime_bitmap_data_multiply_alpha= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_multiply_alpha"),(int)1);
	lime_bitmap_data_get_prem_alpha= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_prem_alpha"),(int)1);
	lime_bitmap_data_set_prem_alpha= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_prem_alpha"),(int)2);
}

} // end namespace flash
} // end namespace display
