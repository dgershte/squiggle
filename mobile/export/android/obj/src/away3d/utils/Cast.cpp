#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_away3d_errors_CastError
#include <away3d/errors/CastError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapTexture
#include <away3d/textures/BitmapTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_away3d_utils_Cast
#include <away3d/utils/Cast.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace away3d{
namespace utils{

Void Cast_obj::__construct()
{
	return null();
}

Cast_obj::~Cast_obj() { }

Dynamic Cast_obj::__CreateEmpty() { return  new Cast_obj; }
hx::ObjectPtr< Cast_obj > Cast_obj::__new()
{  hx::ObjectPtr< Cast_obj > result = new Cast_obj();
	result->__construct();
	return result;}

Dynamic Cast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cast_obj > result = new Cast_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Cast_obj::_colorNames;

::String Cast_obj::_hexChars;

::haxe::ds::StringMap Cast_obj::_notClasses;

::haxe::ds::StringMap Cast_obj::_classes;

::String Cast_obj::string( Dynamic data){
	HX_STACK_PUSH("Cast::string","away3d/utils/Cast.hx",22);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(23)
	if ((::Std_obj::is(data,hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(23)
		data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new()));
	}
	HX_STACK_LINE(24)
	if ((::Std_obj::is(data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(24)
		return data;
	}
	HX_STACK_LINE(25)
	return ::Std_obj::string(data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,string,return )

::flash::utils::ByteArray Cast_obj::byteArray( Dynamic data){
	HX_STACK_PUSH("Cast::byteArray","away3d/utils/Cast.hx",28);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(29)
	if ((::Std_obj::is(data,hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(29)
		data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new()));
	}
	HX_STACK_LINE(30)
	if ((::Std_obj::is(data,hx::ClassOf< ::flash::utils::ByteArray >()))){
		HX_STACK_LINE(30)
		return data;
	}
	HX_STACK_LINE(31)
	return hx::TCast< flash::utils::ByteArray >::cast(data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,byteArray,return )

bool Cast_obj::isHex( ::String string){
	HX_STACK_PUSH("Cast::isHex","away3d/utils/Cast.hx",40);
	HX_STACK_ARG(string,"string");
	HX_STACK_LINE(41)
	int length = string.length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(42)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(43)
	while(((i < length))){
		HX_STACK_LINE(44)
		if (((::away3d::utils::Cast_obj::_hexChars.indexOf(string.charAt(i),null()) == (int)-1))){
			HX_STACK_LINE(44)
			return false;
		}
		HX_STACK_LINE(45)
		++(i);
	}
	HX_STACK_LINE(47)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,isHex,return )

int Cast_obj::tryColor( Dynamic data){
	HX_STACK_PUSH("Cast::tryColor","away3d/utils/Cast.hx",50);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(51)
	if ((::Std_obj::is(data,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(51)
		return hx::TCast< Int >::cast(data);
	}
	HX_STACK_LINE(52)
	if ((::Std_obj::is(data,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(52)
		return hx::TCast< Int >::cast(data);
	}
	HX_STACK_LINE(53)
	if ((::Std_obj::is(data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(54)
		if (((data == HX_CSTRING("random")))){
			HX_STACK_LINE(54)
			return ::Std_obj::_int((::Math_obj::random() * (int)16777216));
		}
		HX_STACK_LINE(55)
		if (((::away3d::utils::Cast_obj::_colorNames == null()))){
			HX_STACK_LINE(56)
			::away3d::utils::Cast_obj::_colorNames = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(57)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("steelblue"),(int)4620980);
			HX_STACK_LINE(58)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("royalblue"),(int)267920);
			HX_STACK_LINE(59)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("cornflowerblue"),(int)6591981);
			HX_STACK_LINE(60)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightsteelblue"),(int)11584734);
			HX_STACK_LINE(61)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumslateblue"),(int)8087790);
			HX_STACK_LINE(62)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("slateblue"),(int)6970061);
			HX_STACK_LINE(63)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkslateblue"),(int)4734347);
			HX_STACK_LINE(64)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("midnightblue"),(int)1644912);
			HX_STACK_LINE(65)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("navy"),(int)128);
			HX_STACK_LINE(66)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkblue"),(int)139);
			HX_STACK_LINE(67)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumblue"),(int)205);
			HX_STACK_LINE(68)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("blue"),(int)255);
			HX_STACK_LINE(69)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("dodgerblue"),(int)2003199);
			HX_STACK_LINE(70)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("deepskyblue"),(int)49151);
			HX_STACK_LINE(71)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightskyblue"),(int)8900346);
			HX_STACK_LINE(72)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("skyblue"),(int)8900331);
			HX_STACK_LINE(73)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightblue"),(int)11393254);
			HX_STACK_LINE(74)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("powderblue"),(int)11591910);
			HX_STACK_LINE(75)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("azure"),(int)15794175);
			HX_STACK_LINE(76)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightcyan"),(int)14745599);
			HX_STACK_LINE(77)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("paleturquoise"),(int)11529966);
			HX_STACK_LINE(78)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumturquoise"),(int)4772300);
			HX_STACK_LINE(79)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightseagreen"),(int)2142890);
			HX_STACK_LINE(80)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkcyan"),(int)35723);
			HX_STACK_LINE(81)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("teal"),(int)32896);
			HX_STACK_LINE(82)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("cadetblue"),(int)6266528);
			HX_STACK_LINE(83)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkturquoise"),(int)52945);
			HX_STACK_LINE(84)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("aqua"),(int)65535);
			HX_STACK_LINE(85)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("cyan"),(int)65535);
			HX_STACK_LINE(86)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("turquoise"),(int)4251856);
			HX_STACK_LINE(87)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("aquamarine"),(int)8388564);
			HX_STACK_LINE(88)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumaquamarine"),(int)6737322);
			HX_STACK_LINE(89)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkseagreen"),(int)9419919);
			HX_STACK_LINE(90)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumseagreen"),(int)3978097);
			HX_STACK_LINE(91)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("seagreen"),(int)3050327);
			HX_STACK_LINE(92)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkgreen"),(int)25600);
			HX_STACK_LINE(93)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("green"),(int)32768);
			HX_STACK_LINE(94)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("forestgreen"),(int)2263842);
			HX_STACK_LINE(95)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("limegreen"),(int)3329330);
			HX_STACK_LINE(96)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lime"),(int)65280);
			HX_STACK_LINE(97)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("chartreuse"),(int)8388352);
			HX_STACK_LINE(98)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lawngreen"),(int)8190976);
			HX_STACK_LINE(99)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("greenyellow"),(int)11403055);
			HX_STACK_LINE(100)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("yellowgreen"),(int)10145074);
			HX_STACK_LINE(101)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("palegreen"),(int)10025880);
			HX_STACK_LINE(102)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightgreen"),(int)9498256);
			HX_STACK_LINE(103)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("springgreen"),(int)65407);
			HX_STACK_LINE(104)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumspringgreen"),(int)64154);
			HX_STACK_LINE(105)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkolivegreen"),(int)5597999);
			HX_STACK_LINE(106)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("olivedrab"),(int)7048739);
			HX_STACK_LINE(107)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("olive"),(int)8421376);
			HX_STACK_LINE(108)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkkhaki"),(int)12433259);
			HX_STACK_LINE(109)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkgoldenrod"),(int)12092939);
			HX_STACK_LINE(110)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("goldenrod"),(int)14329120);
			HX_STACK_LINE(111)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("gold"),(int)16766720);
			HX_STACK_LINE(112)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("yellow"),(int)16776960);
			HX_STACK_LINE(113)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("khaki"),(int)15787660);
			HX_STACK_LINE(114)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("palegoldenrod"),(int)15657130);
			HX_STACK_LINE(115)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("blanchedalmond"),(int)16772045);
			HX_STACK_LINE(116)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("moccasin"),(int)16770229);
			HX_STACK_LINE(117)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("wheat"),(int)16113331);
			HX_STACK_LINE(118)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("navajowhite"),(int)16768685);
			HX_STACK_LINE(119)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("burlywood"),(int)14596231);
			HX_STACK_LINE(120)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("tan"),(int)13808780);
			HX_STACK_LINE(121)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("rosybrown"),(int)12357519);
			HX_STACK_LINE(122)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("sienna"),(int)10506797);
			HX_STACK_LINE(123)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("saddlebrown"),(int)9127187);
			HX_STACK_LINE(124)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("chocolate"),(int)13789470);
			HX_STACK_LINE(125)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("peru"),(int)13468991);
			HX_STACK_LINE(126)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("sandybrown"),(int)16032864);
			HX_STACK_LINE(127)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkred"),(int)9109504);
			HX_STACK_LINE(128)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("maroon"),(int)8388608);
			HX_STACK_LINE(129)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("brown"),(int)10824234);
			HX_STACK_LINE(130)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("firebrick"),(int)11674146);
			HX_STACK_LINE(131)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("indianred"),(int)13458524);
			HX_STACK_LINE(132)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightcoral"),(int)15761536);
			HX_STACK_LINE(133)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("salmon"),(int)16416882);
			HX_STACK_LINE(134)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darksalmon"),(int)15308410);
			HX_STACK_LINE(135)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightsalmon"),(int)16752762);
			HX_STACK_LINE(136)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("coral"),(int)16744272);
			HX_STACK_LINE(137)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("tomato"),(int)16737095);
			HX_STACK_LINE(138)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkorange"),(int)16747520);
			HX_STACK_LINE(139)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("orange"),(int)16753920);
			HX_STACK_LINE(140)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("orangered"),(int)16729344);
			HX_STACK_LINE(141)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("crimson"),(int)14423100);
			HX_STACK_LINE(142)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("red"),(int)16711680);
			HX_STACK_LINE(143)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("deeppink"),(int)16716947);
			HX_STACK_LINE(144)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("fuchsia"),(int)16711935);
			HX_STACK_LINE(145)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("magenta"),(int)16711935);
			HX_STACK_LINE(146)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("hotpink"),(int)16738740);
			HX_STACK_LINE(147)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightpink"),(int)16758465);
			HX_STACK_LINE(148)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("pink"),(int)16761035);
			HX_STACK_LINE(149)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("palevioletred"),(int)14381203);
			HX_STACK_LINE(150)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumvioletred"),(int)13047173);
			HX_STACK_LINE(151)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("purple"),(int)8388736);
			HX_STACK_LINE(152)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkmagenta"),(int)9109643);
			HX_STACK_LINE(153)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumpurple"),(int)9662683);
			HX_STACK_LINE(154)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("blueviolet"),(int)9055202);
			HX_STACK_LINE(155)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("indigo"),(int)4915330);
			HX_STACK_LINE(156)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkviolet"),(int)9699539);
			HX_STACK_LINE(157)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkorchid"),(int)10040012);
			HX_STACK_LINE(158)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mediumorchid"),(int)12211667);
			HX_STACK_LINE(159)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("orchid"),(int)14315734);
			HX_STACK_LINE(160)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("violet"),(int)15631086);
			HX_STACK_LINE(161)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("plum"),(int)14524637);
			HX_STACK_LINE(162)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("thistle"),(int)14204888);
			HX_STACK_LINE(163)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lavender"),(int)15132410);
			HX_STACK_LINE(164)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("ghostwhite"),(int)16316671);
			HX_STACK_LINE(165)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("aliceblue"),(int)15792383);
			HX_STACK_LINE(166)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mintcream"),(int)16121850);
			HX_STACK_LINE(167)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("honeydew"),(int)15794160);
			HX_STACK_LINE(168)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightgoldenrodyellow"),(int)16448210);
			HX_STACK_LINE(169)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lemonchiffon"),(int)16775885);
			HX_STACK_LINE(170)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("cornsilk"),(int)16775388);
			HX_STACK_LINE(171)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightyellow"),(int)16777184);
			HX_STACK_LINE(172)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("ivory"),(int)16777200);
			HX_STACK_LINE(173)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("floralwhite"),(int)16775920);
			HX_STACK_LINE(174)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("linen"),(int)16445670);
			HX_STACK_LINE(175)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("oldlace"),(int)16643558);
			HX_STACK_LINE(176)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("antiquewhite"),(int)16444375);
			HX_STACK_LINE(177)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("bisque"),(int)16770244);
			HX_STACK_LINE(178)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("peachpuff"),(int)16767673);
			HX_STACK_LINE(179)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("papayawhip"),(int)16773077);
			HX_STACK_LINE(180)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("beige"),(int)16119260);
			HX_STACK_LINE(181)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("seashell"),(int)16774638);
			HX_STACK_LINE(182)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lavenderblush"),(int)16773365);
			HX_STACK_LINE(183)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("mistyrose"),(int)16770273);
			HX_STACK_LINE(184)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("snow"),(int)16775930);
			HX_STACK_LINE(185)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("white"),(int)16777215);
			HX_STACK_LINE(186)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("whitesmoke"),(int)16119285);
			HX_STACK_LINE(187)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("gainsboro"),(int)14474460);
			HX_STACK_LINE(188)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightgrey"),(int)13882323);
			HX_STACK_LINE(189)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("silver"),(int)12632256);
			HX_STACK_LINE(190)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkgrey"),(int)11119017);
			HX_STACK_LINE(191)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("grey"),(int)8421504);
			HX_STACK_LINE(192)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("lightslategrey"),(int)7833753);
			HX_STACK_LINE(193)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("slategrey"),(int)7372944);
			HX_STACK_LINE(194)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("dimgrey"),(int)6908265);
			HX_STACK_LINE(195)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("darkslategrey"),(int)3100495);
			HX_STACK_LINE(196)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("black"),(int)0);
			HX_STACK_LINE(197)
			::away3d::utils::Cast_obj::_colorNames->set(HX_CSTRING("transparent"),(int)-16777216);
		}
		HX_STACK_LINE(200)
		if ((::away3d::utils::Cast_obj::_colorNames->exists(data))){
			HX_STACK_LINE(201)
			return ::away3d::utils::Cast_obj::_colorNames->get(data);
		}
		HX_STACK_LINE(202)
		if (((bool(((hx::TCast< String >::cast(data)).length == (int)6)) && bool(::away3d::utils::Cast_obj::isHex(data))))){
			HX_STACK_LINE(202)
			return ::Std_obj::parseInt((HX_CSTRING("0x") + ::Std_obj::string(data)));
		}
	}
	HX_STACK_LINE(204)
	return (int)16777215;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,tryColor,return )

int Cast_obj::color( Dynamic data){
	HX_STACK_PUSH("Cast::color","away3d/utils/Cast.hx",207);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(208)
	int result = ::away3d::utils::Cast_obj::tryColor(data);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(209)
	if (((result == (int)-1))){
		HX_STACK_LINE(209)
		hx::Throw (::away3d::errors::CastError_obj::__new((HX_CSTRING("Can't cast to color: ") + ::Std_obj::string(data))));
	}
	HX_STACK_LINE(210)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,color,return )

Dynamic Cast_obj::tryClass( ::String name){
	HX_STACK_PUSH("Cast::tryClass","away3d/utils/Cast.hx",213);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(214)
	if ((::away3d::utils::Cast_obj::_notClasses->exists(name))){
		HX_STACK_LINE(215)
		return name;
	}
	HX_STACK_LINE(217)
	Dynamic result = ::away3d::utils::Cast_obj::_classes->get(name);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(219)
	if (((result != null()))){
		HX_STACK_LINE(220)
		return result;
	}
	HX_STACK_LINE(222)
	try{
		HX_STACK_LINE(223)
		result = ::Type_obj::resolveClass(name);
		HX_STACK_LINE(224)
		::away3d::utils::Cast_obj::_classes->set(name,result);
		HX_STACK_LINE(225)
		return result;
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic error = __e;{
			}
		}
	}
	HX_STACK_LINE(230)
	::away3d::utils::Cast_obj::_notClasses->set(name,true);
	HX_STACK_LINE(232)
	return name;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,tryClass,return )

::flash::display::BitmapData Cast_obj::bitmapData( Dynamic data){
	HX_STACK_PUSH("Cast::bitmapData","away3d/utils/Cast.hx",235);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(236)
	if (((data == null()))){
		HX_STACK_LINE(236)
		return null();
	}
	HX_STACK_LINE(237)
	if ((::Std_obj::is(data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(237)
		data = ::away3d::utils::Cast_obj::tryClass(data);
	}
	HX_STACK_LINE(238)
	if ((::Std_obj::is(data,hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(238)
		try{
			HX_STACK_LINE(239)
			data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new()));
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic bitmapError = __e;{
					HX_STACK_LINE(242)
					data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));
				}
			}
		}
	}
	HX_STACK_LINE(247)
	if ((::Std_obj::is(data,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(247)
		return data;
	}
	HX_STACK_LINE(248)
	if ((::Std_obj::is(data,hx::ClassOf< ::flash::display::Bitmap >()))){
		HX_STACK_LINE(248)
		if ((((hx::TCast< flash::display::Bitmap >::cast(data))->bitmapData != null()))){
			HX_STACK_LINE(250)
			return (hx::TCast< flash::display::Bitmap >::cast(data))->bitmapData;
		}
	}
	HX_STACK_LINE(252)
	if ((::Std_obj::is(data,hx::ClassOf< ::flash::display::DisplayObject >()))){
		HX_STACK_LINE(253)
		::flash::display::DisplayObject ds = hx::TCast< flash::display::DisplayObject >::cast(data);		HX_STACK_VAR(ds,"ds");
		HX_STACK_LINE(254)
		::flash::display::BitmapData bmd = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(ds->get_width()),::Std_obj::_int(ds->get_height()),true,(int)65535,null());		HX_STACK_VAR(bmd,"bmd");
		HX_STACK_LINE(255)
		::flash::geom::Matrix mat = ds->get_transform()->get_matrix()->clone();		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(256)
		mat->tx = (int)0;
		HX_STACK_LINE(257)
		mat->ty = (int)0;
		HX_STACK_LINE(258)
		bmd->draw(ds,mat,ds->get_transform()->get_colorTransform(),ds->get_blendMode(),bmd->get_rect(),true);
		HX_STACK_LINE(259)
		return bmd;
	}
	HX_STACK_LINE(261)
	hx::Throw (::away3d::errors::CastError_obj::__new((HX_CSTRING("Can't cast to BitmapData: ") + ::Std_obj::string(data))));
	HX_STACK_LINE(261)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,bitmapData,return )

::away3d::textures::BitmapTexture Cast_obj::bitmapTexture( Dynamic data){
	HX_STACK_PUSH("Cast::bitmapTexture","away3d/utils/Cast.hx",264);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(265)
	if (((data == null()))){
		HX_STACK_LINE(265)
		return null();
	}
	HX_STACK_LINE(266)
	if ((::Std_obj::is(data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(266)
		data = ::away3d::utils::Cast_obj::tryClass(data);
	}
	HX_STACK_LINE(267)
	if ((::Std_obj::is(data,hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(267)
		try{
			HX_STACK_LINE(268)
			data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new()));
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic materialError = __e;{
					HX_STACK_LINE(271)
					data = ::Type_obj::createInstance(data,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));
				}
			}
		}
	}
	HX_STACK_LINE(276)
	if ((::Std_obj::is(data,hx::ClassOf< ::away3d::textures::BitmapTexture >()))){
		HX_STACK_LINE(276)
		return data;
	}
	HX_STACK_LINE(277)
	try{
		HX_STACK_LINE(278)
		::flash::display::BitmapData bmd = ::away3d::utils::Cast_obj::bitmapData(data);		HX_STACK_VAR(bmd,"bmd");
		HX_STACK_LINE(279)
		return ::away3d::textures::BitmapTexture_obj::__new(bmd,null());
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::away3d::errors::CastError >() ){
			HX_STACK_BEGIN_CATCH
			::away3d::errors::CastError error = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(282)
	hx::Throw (::away3d::errors::CastError_obj::__new((HX_CSTRING("Can't cast to BitmapTexture: ") + ::Std_obj::string(data))));
	HX_STACK_LINE(282)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cast_obj,bitmapTexture,return )


Cast_obj::Cast_obj()
{
}

void Cast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cast);
	HX_MARK_END_CLASS();
}

void Cast_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Cast_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isHex") ) { return isHex_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return string_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_classes") ) { return _classes; }
		if (HX_FIELD_EQ(inName,"tryColor") ) { return tryColor_dyn(); }
		if (HX_FIELD_EQ(inName,"tryClass") ) { return tryClass_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hexChars") ) { return _hexChars; }
		if (HX_FIELD_EQ(inName,"byteArray") ) { return byteArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_colorNames") ) { return _colorNames; }
		if (HX_FIELD_EQ(inName,"_notClasses") ) { return _notClasses; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapTexture") ) { return bitmapTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cast_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_classes") ) { _classes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hexChars") ) { _hexChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_colorNames") ) { _colorNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notClasses") ) { _notClasses=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cast_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_colorNames"),
	HX_CSTRING("_hexChars"),
	HX_CSTRING("_notClasses"),
	HX_CSTRING("_classes"),
	HX_CSTRING("string"),
	HX_CSTRING("byteArray"),
	HX_CSTRING("isHex"),
	HX_CSTRING("tryColor"),
	HX_CSTRING("color"),
	HX_CSTRING("tryClass"),
	HX_CSTRING("bitmapData"),
	HX_CSTRING("bitmapTexture"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cast_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cast_obj::_colorNames,"_colorNames");
	HX_MARK_MEMBER_NAME(Cast_obj::_hexChars,"_hexChars");
	HX_MARK_MEMBER_NAME(Cast_obj::_notClasses,"_notClasses");
	HX_MARK_MEMBER_NAME(Cast_obj::_classes,"_classes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cast_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cast_obj::_colorNames,"_colorNames");
	HX_VISIT_MEMBER_NAME(Cast_obj::_hexChars,"_hexChars");
	HX_VISIT_MEMBER_NAME(Cast_obj::_notClasses,"_notClasses");
	HX_VISIT_MEMBER_NAME(Cast_obj::_classes,"_classes");
};

Class Cast_obj::__mClass;

void Cast_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("away3d.utils.Cast"), hx::TCanCast< Cast_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Cast_obj::__boot()
{
	_hexChars= HX_CSTRING("0123456789abcdefABCDEF");
	_notClasses= ::haxe::ds::StringMap_obj::__new();
	_classes= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace away3d
} // end namespace utils
