// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLIndexBuffer3D
#include <openfl/_internal/stage3D/opengl/GLIndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3496192daacd51b8_31_create,"openfl._internal.stage3D.opengl.GLIndexBuffer3D","create",0xb4eb541c,"openfl._internal.stage3D.opengl.GLIndexBuffer3D.create","openfl/_internal/stage3D/opengl/GLIndexBuffer3D.hx",31,0xb4e2d8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_3496192daacd51b8_52_dispose,"openfl._internal.stage3D.opengl.GLIndexBuffer3D","dispose",0x42e00f7f,"openfl._internal.stage3D.opengl.GLIndexBuffer3D.dispose","openfl/_internal/stage3D/opengl/GLIndexBuffer3D.hx",52,0xb4e2d8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_3496192daacd51b8_69_uploadFromByteArray,"openfl._internal.stage3D.opengl.GLIndexBuffer3D","uploadFromByteArray",0xd43976c6,"openfl._internal.stage3D.opengl.GLIndexBuffer3D.uploadFromByteArray","openfl/_internal/stage3D/opengl/GLIndexBuffer3D.hx",69,0xb4e2d8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_3496192daacd51b8_78_uploadFromTypedArray,"openfl._internal.stage3D.opengl.GLIndexBuffer3D","uploadFromTypedArray",0x466921da,"openfl._internal.stage3D.opengl.GLIndexBuffer3D.uploadFromTypedArray","openfl/_internal/stage3D/opengl/GLIndexBuffer3D.hx",78,0xb4e2d8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_3496192daacd51b8_103_uploadFromVector,"openfl._internal.stage3D.opengl.GLIndexBuffer3D","uploadFromVector",0xa61f044e,"openfl._internal.stage3D.opengl.GLIndexBuffer3D.uploadFromVector","openfl/_internal/stage3D/opengl/GLIndexBuffer3D.hx",103,0xb4e2d8ce)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{

void GLIndexBuffer3D_obj::__construct() { }

Dynamic GLIndexBuffer3D_obj::__CreateEmpty() { return new GLIndexBuffer3D_obj; }

void *GLIndexBuffer3D_obj::_hx_vtable = 0;

Dynamic GLIndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLIndexBuffer3D_obj > _hx_result = new GLIndexBuffer3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLIndexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6224da08;
}

void GLIndexBuffer3D_obj::create( ::openfl::display3D::IndexBuffer3D indexBuffer, ::openfl::display::OpenGLRenderer renderer, ::Dynamic bufferUsage){
            	HX_STACKFRAME(&_hx_pos_3496192daacd51b8_31_create)
HXLINE(  34)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE(  39)		indexBuffer->_hx___elementType = gl->UNSIGNED_SHORT;
HXLINE(  41)		indexBuffer->_hx___id = gl->createBuffer();
HXLINE(  42)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  44)		int _hx_tmp;
HXDLIN(  44)		if (hx::IsEq( bufferUsage,(int)0 )) {
HXLINE(  44)			_hx_tmp = gl->DYNAMIC_DRAW;
            		}
            		else {
HXLINE(  44)			_hx_tmp = gl->STATIC_DRAW;
            		}
HXDLIN(  44)		indexBuffer->_hx___usage = _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLIndexBuffer3D_obj,create,(void))

void GLIndexBuffer3D_obj::dispose( ::openfl::display3D::IndexBuffer3D indexBuffer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3496192daacd51b8_52_dispose)
HXLINE(  55)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE(  60)		gl->deleteBuffer(indexBuffer->_hx___id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLIndexBuffer3D_obj,dispose,(void))

void GLIndexBuffer3D_obj::uploadFromByteArray( ::openfl::display3D::IndexBuffer3D indexBuffer, ::openfl::display::OpenGLRenderer renderer, ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_3496192daacd51b8_69_uploadFromByteArray)
HXLINE(  71)		int offset = (byteArrayOffset + (startOffset * (int)2));
HXLINE(  73)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  73)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  73)		if (hx::IsNotNull( buffer )) {
HXLINE(  73)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN(  73)			int in_byteOffset = offset;
HXDLIN(  73)			if ((in_byteOffset < (int)0)) {
HXLINE(  73)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  73)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  73)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  73)			int bufferByteLength = buffer->length;
HXDLIN(  73)			int elementSize = _this->bytesPerElement;
HXDLIN(  73)			int newByteLength = bufferByteLength;
HXDLIN(  73)			if (hx::IsNull( count )) {
HXLINE(  73)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  73)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  73)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  73)				if ((newByteLength < (int)0)) {
HXLINE(  73)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXLINE(  73)				newByteLength = (count * _this->bytesPerElement);
HXDLIN(  73)				int newRange = (in_byteOffset + newByteLength);
HXDLIN(  73)				if ((newRange > bufferByteLength)) {
HXLINE(  73)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  73)			_this->buffer = buffer;
HXDLIN(  73)			_this->byteOffset = in_byteOffset;
HXDLIN(  73)			_this->byteLength = newByteLength;
HXDLIN(  73)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  73)			this1 = _this;
            		}
            		else {
HXLINE(  73)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            		}
HXDLIN(  73)		::openfl::_internal::stage3D::opengl::GLIndexBuffer3D_obj::uploadFromTypedArray(indexBuffer,renderer,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GLIndexBuffer3D_obj,uploadFromByteArray,(void))

void GLIndexBuffer3D_obj::uploadFromTypedArray( ::openfl::display3D::IndexBuffer3D indexBuffer, ::openfl::display::OpenGLRenderer renderer, ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_3496192daacd51b8_78_uploadFromTypedArray)
HXLINE(  80)		if (hx::IsNull( data )) {
HXLINE(  80)			return;
            		}
HXLINE(  82)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE(  87)		gl->bindBuffer(gl->ELEMENT_ARRAY_BUFFER,indexBuffer->_hx___id);
HXLINE(  88)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  90)		::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ELEMENT_ARRAY_BUFFER,data,indexBuffer->_hx___usage);
HXLINE(  91)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLIndexBuffer3D_obj,uploadFromTypedArray,(void))

void GLIndexBuffer3D_obj::uploadFromVector( ::openfl::display3D::IndexBuffer3D indexBuffer, ::openfl::display::OpenGLRenderer renderer, ::openfl::_Vector::IntVector data,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_3496192daacd51b8_103_uploadFromVector)
HXLINE( 107)		if (hx::IsNull( data )) {
HXLINE( 107)			return;
            		}
HXLINE( 109)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE( 114)		int length = (startOffset + count);
HXLINE( 115)		 ::lime::utils::ArrayBufferView existingInt16Array = indexBuffer->_hx___tempInt16Array;
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		if (hx::IsNotNull( indexBuffer->_hx___tempInt16Array )) {
HXLINE( 117)			_hx_tmp = (indexBuffer->_hx___tempInt16Array->length < count);
            		}
            		else {
HXLINE( 117)			_hx_tmp = true;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 119)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 119)			if (hx::IsNotNull( count )) {
HXLINE( 119)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,count,(int)2);
            			}
            			else {
HXLINE( 119)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            			}
HXDLIN( 119)			indexBuffer->_hx___tempInt16Array = this1;
HXLINE( 121)			if (hx::IsNotNull( existingInt16Array )) {
HXLINE( 123)				 ::lime::utils::ArrayBufferView _this = indexBuffer->_hx___tempInt16Array;
HXDLIN( 123)				int offset = (int)0;
HXDLIN( 123)				if (hx::IsNotNull( existingInt16Array )) {
HXLINE( 123)					 ::haxe::io::Bytes _this1 = _this->buffer;
HXDLIN( 123)					_this1->blit((offset * _this->bytesPerElement),existingInt16Array->buffer,existingInt16Array->byteOffset,existingInt16Array->byteLength);
            				}
            				else {
HXLINE( 123)					HX_STACK_DO_THROW(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c));
            				}
            			}
            		}
HXLINE( 129)		{
HXLINE( 129)			int _g1 = startOffset;
HXDLIN( 129)			int _g = length;
HXDLIN( 129)			while((_g1 < _g)){
HXLINE( 129)				_g1 = (_g1 + (int)1);
HXDLIN( 129)				int i = (_g1 - (int)1);
HXLINE( 131)				{
HXLINE( 131)					 ::lime::utils::ArrayBufferView this2 = indexBuffer->_hx___tempInt16Array;
HXDLIN( 131)					int val = data->get(i);
HXDLIN( 131)					 ::haxe::io::Bytes this3 = this2->buffer;
HXDLIN( 131)					int this4 = this2->byteOffset;
HXDLIN( 131)					::lime::utils::ArrayBufferIO_obj::setInt16(this3,(this4 + ((i - startOffset) * (int)2)),val);
            				}
            			}
            		}
HXLINE( 135)		::openfl::_internal::stage3D::opengl::GLIndexBuffer3D_obj::uploadFromTypedArray(indexBuffer,renderer,indexBuffer->_hx___tempInt16Array);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLIndexBuffer3D_obj,uploadFromVector,(void))


GLIndexBuffer3D_obj::GLIndexBuffer3D_obj()
{
}

bool GLIndexBuffer3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { outValue = uploadFromVector_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { outValue = uploadFromByteArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { outValue = uploadFromTypedArray_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLIndexBuffer3D_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLIndexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static void GLIndexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLIndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLIndexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLIndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class GLIndexBuffer3D_obj::__mClass;

static ::String GLIndexBuffer3D_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null())
};

void GLIndexBuffer3D_obj::__register()
{
	hx::Object *dummy = new GLIndexBuffer3D_obj;
	GLIndexBuffer3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.opengl.GLIndexBuffer3D","\x4e","\x0f","\xce","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLIndexBuffer3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLIndexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLIndexBuffer3D_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLIndexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLIndexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLIndexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLIndexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl
