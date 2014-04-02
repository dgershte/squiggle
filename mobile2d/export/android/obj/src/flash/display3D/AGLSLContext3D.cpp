#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display3D_AGLSLContext3D
#include <flash/display3D/AGLSLContext3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3D
#include <flash/display3D/Context3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Context3DProgramType
#include <flash/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_flash_display3D_IndexBuffer3D
#include <flash/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_flash_display3D_Program3D
#include <flash/display3D/Program3D.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix3D
#include <flash/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
namespace flash{
namespace display3D{

Void AGLSLContext3D_obj::__construct()
{
HX_STACK_PUSH("AGLSLContext3D::new","flash/display3D/AGLSLContext3D.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->_yFlip = (int)-1;
}
;
	return null();
}

AGLSLContext3D_obj::~AGLSLContext3D_obj() { }

Dynamic AGLSLContext3D_obj::__CreateEmpty() { return  new AGLSLContext3D_obj; }
hx::ObjectPtr< AGLSLContext3D_obj > AGLSLContext3D_obj::__new()
{  hx::ObjectPtr< AGLSLContext3D_obj > result = new AGLSLContext3D_obj();
	result->__construct();
	return result;}

Dynamic AGLSLContext3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGLSLContext3D_obj > result = new AGLSLContext3D_obj();
	result->__construct();
	return result;}

Void AGLSLContext3D_obj::present( ){
{
		HX_STACK_PUSH("AGLSLContext3D::present","flash/display3D/AGLSLContext3D.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		this->super::present();
	}
return null();
}


Void AGLSLContext3D_obj::drawTriangles( ::flash::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_PUSH("AGLSLContext3D::drawTriangles","flash/display3D/AGLSLContext3D.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(indexBuffer,"indexBuffer");
	HX_STACK_ARG(firstIndex,"firstIndex");
	HX_STACK_ARG(numTriangles,"numTriangles");
{
		HX_STACK_LINE(71)
		Dynamic location = ::openfl::gl::GL_obj::getUniformLocation(this->currentProgram->glProgram,HX_CSTRING("yflip"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(72)
		::openfl::gl::GL_obj::uniform1f(location,this->_yFlip);
		HX_STACK_LINE(73)
		this->super::drawTriangles(indexBuffer,firstIndex,numTriangles);
	}
return null();
}


Void AGLSLContext3D_obj::setProgramConstantsFromMatrix( ::flash::display3D::Context3DProgramType programType,int firstRegister,::flash::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_PUSH("AGLSLContext3D::setProgramConstantsFromMatrix","flash/display3D/AGLSLContext3D.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(programType,"programType");
	HX_STACK_ARG(firstRegister,"firstRegister");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(transposedMatrix,"transposedMatrix");
{
		HX_STACK_LINE(55)
		Array< Float > d = matrix->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(56)
		if ((transposedMatrix)){
			HX_STACK_LINE(57)
			this->setProgramConstantsFromVector(programType,firstRegister,::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)0)).Add(d->__get((int)4)).Add(d->__get((int)8)).Add(d->__get((int)12)))),(int)1);
			HX_STACK_LINE(58)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)1),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)1)).Add(d->__get((int)5)).Add(d->__get((int)9)).Add(d->__get((int)13)))),(int)1);
			HX_STACK_LINE(59)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)2),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)2)).Add(d->__get((int)6)).Add(d->__get((int)10)).Add(d->__get((int)14)))),(int)1);
			HX_STACK_LINE(60)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)3),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)3)).Add(d->__get((int)7)).Add(d->__get((int)11)).Add(d->__get((int)15)))),(int)1);
		}
		else{
			HX_STACK_LINE(62)
			this->setProgramConstantsFromVector(programType,firstRegister,::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)0)).Add(d->__get((int)1)).Add(d->__get((int)2)).Add(d->__get((int)3)))),(int)1);
			HX_STACK_LINE(63)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)1),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)4)).Add(d->__get((int)5)).Add(d->__get((int)6)).Add(d->__get((int)7)))),(int)1);
			HX_STACK_LINE(64)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)2),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)8)).Add(d->__get((int)9)).Add(d->__get((int)10)).Add(d->__get((int)11)))),(int)1);
			HX_STACK_LINE(65)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)3),::flash::_Vector::Vector_Impl__obj::concat(::flash::_Vector::Vector_Impl__obj::_new(null(),null()),Dynamic( Array_obj<Dynamic>::__new().Add(d->__get((int)12)).Add(d->__get((int)13)).Add(d->__get((int)14)).Add(d->__get((int)15)))),(int)1);
		}
	}
return null();
}


Void AGLSLContext3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_PUSH("AGLSLContext3D::setCulling","flash/display3D/AGLSLContext3D.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull");
		HX_STACK_LINE(25)
		this->super::setCulling(triangleFaceToCull);
		HX_STACK_LINE(26)
		switch( (int)(triangleFaceToCull)){
			case (int)1029: {
				HX_STACK_LINE(28)
				this->_yFlip = (int)-1;
			}
			;break;
			case (int)1028: {
				HX_STACK_LINE(31)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)1032: {
				HX_STACK_LINE(34)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(37)
				this->_yFlip = (int)1;
			}
			;break;
			default: {
				HX_STACK_LINE(40)
				hx::Throw (((HX_CSTRING("Unknown culling mode ") + triangleFaceToCull) + HX_CSTRING(".")));
			}
		}
	}
return null();
}



AGLSLContext3D_obj::AGLSLContext3D_obj()
{
}

void AGLSLContext3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGLSLContext3D);
	HX_MARK_MEMBER_NAME(_yFlip,"_yFlip");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AGLSLContext3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_yFlip,"_yFlip");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AGLSLContext3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { return _yFlip; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AGLSLContext3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { _yFlip=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AGLSLContext3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_yFlip"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("present"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("setProgramConstantsFromMatrix"),
	HX_CSTRING("setCulling"),
	HX_CSTRING("_yFlip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGLSLContext3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGLSLContext3D_obj::__mClass,"__mClass");
};

Class AGLSLContext3D_obj::__mClass;

void AGLSLContext3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display3D.AGLSLContext3D"), hx::TCanCast< AGLSLContext3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AGLSLContext3D_obj::__boot()
{
}

} // end namespace flash
} // end namespace display3D
