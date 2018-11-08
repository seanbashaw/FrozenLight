// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#define INCLUDED_lime_math__Matrix4_Matrix4_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS3(lime,math,_Matrix4,Matrix4_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace math{
namespace _Matrix4{


class HXCPP_CLASS_ATTRIBUTES Matrix4_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Matrix4_Impl__obj OBJ_;
		Matrix4_Impl__obj();

	public:
		enum { _hx_ClassId = 0x71ea7962 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math._Matrix4.Matrix4_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.math._Matrix4.Matrix4_Impl_"); }

		hx::ObjectPtr< Matrix4_Impl__obj > __new() {
			hx::ObjectPtr< Matrix4_Impl__obj > __this = new Matrix4_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Matrix4_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Matrix4_Impl__obj *__this = (Matrix4_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Matrix4_Impl__obj), false, "lime.math._Matrix4.Matrix4_Impl_"));
			*(void **)__this = Matrix4_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix4_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Matrix4_Impl_","\x93","\x2f","\xef","\xfd"); }

		static void __boot();
		static ::Array< Float > _hx___identity;
		static  ::lime::utils::ArrayBufferView _new( ::lime::utils::ArrayBufferView data);
		static ::Dynamic _new_dyn();

		static void append( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView lhs);
		static ::Dynamic append_dyn();

		static void appendRotation( ::lime::utils::ArrayBufferView this1,Float degrees, ::lime::math::Vector4 axis, ::lime::math::Vector4 pivotPoint);
		static ::Dynamic appendRotation_dyn();

		static void appendScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale);
		static ::Dynamic appendScale_dyn();

		static void appendTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z);
		static ::Dynamic appendTranslation_dyn();

		static  ::lime::utils::ArrayBufferView clone( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic clone_dyn();

		static void copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector);
		static ::Dynamic copyColumnFrom_dyn();

		static void copyColumnTo( ::lime::utils::ArrayBufferView this1,int column, ::lime::math::Vector4 vector);
		static ::Dynamic copyColumnTo_dyn();

		static void copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView other);
		static ::Dynamic copyFrom_dyn();

		static void copyRowFrom( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector);
		static ::Dynamic copyRowFrom_dyn();

		static void copyRowTo( ::lime::utils::ArrayBufferView this1,int row, ::lime::math::Vector4 vector);
		static ::Dynamic copyRowTo_dyn();

		static void create2D( ::lime::utils::ArrayBufferView this1,Float a,Float b,Float c,Float d,hx::Null< Float >  tx,hx::Null< Float >  ty);
		static ::Dynamic create2D_dyn();

		static void createOrtho( ::lime::utils::ArrayBufferView this1,Float left,Float right,Float bottom,Float top,Float zNear,Float zFar);
		static ::Dynamic createOrtho_dyn();

		static  ::lime::math::Vector4 deltaTransformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 v, ::lime::math::Vector4 result);
		static ::Dynamic deltaTransformVector_dyn();

		static  ::lime::utils::ArrayBufferView fromMatrix3( ::lime::math::Matrix3 matrix3);
		static ::Dynamic fromMatrix3_dyn();

		static void identity( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic identity_dyn();

		static  ::lime::utils::ArrayBufferView interpolate( ::lime::utils::ArrayBufferView thisMat, ::lime::utils::ArrayBufferView toMat,Float percent, ::lime::utils::ArrayBufferView result);
		static ::Dynamic interpolate_dyn();

		static void interpolateTo( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView toMat,Float percent);
		static ::Dynamic interpolateTo_dyn();

		static bool invert( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic invert_dyn();

		static void pointAt( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 pos, ::lime::math::Vector4 at, ::lime::math::Vector4 up);
		static ::Dynamic pointAt_dyn();

		static void prepend( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView rhs);
		static ::Dynamic prepend_dyn();

		static void prependRotation( ::lime::utils::ArrayBufferView this1,Float degrees, ::lime::math::Vector4 axis, ::lime::math::Vector4 pivotPoint);
		static ::Dynamic prependRotation_dyn();

		static void prependScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale);
		static ::Dynamic prependScale_dyn();

		static void prependTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z);
		static ::Dynamic prependTranslation_dyn();

		static  ::lime::math::Vector4 transformVector( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 v, ::lime::math::Vector4 result);
		static ::Dynamic transformVector_dyn();

		static void transformVectors( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView ain, ::lime::utils::ArrayBufferView aout);
		static ::Dynamic transformVectors_dyn();

		static void transpose( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic transpose_dyn();

		static  ::lime::utils::ArrayBufferView _hx___getAxisRotation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z,Float degrees);
		static ::Dynamic _hx___getAxisRotation_dyn();

		static void _hx___swap( ::lime::utils::ArrayBufferView this1,int a,int b);
		static ::Dynamic _hx___swap_dyn();

		static Float get_determinant( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_determinant_dyn();

		static  ::lime::math::Vector4 get_position( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_position_dyn();

		static  ::lime::math::Vector4 set_position( ::lime::utils::ArrayBufferView this1, ::lime::math::Vector4 val);
		static ::Dynamic set_position_dyn();

		static Float get( ::lime::utils::ArrayBufferView this1,int index);
		static ::Dynamic get_dyn();

		static Float set( ::lime::utils::ArrayBufferView this1,int index,Float value);
		static ::Dynamic set_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4

#endif /* INCLUDED_lime_math__Matrix4_Matrix4_Impl_ */ 
