// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLGraphics
#include <openfl/_internal/renderer/opengl/GLGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskShader
#include <openfl/_internal/renderer/opengl/GLMaskShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3b6a827a10880e4c_34_render,"openfl._internal.renderer.opengl.GLShape","render",0x6f8c5eac,"openfl._internal.renderer.opengl.GLShape.render","openfl/_internal/renderer/opengl/GLShape.hx",34,0xf928bb48)
HX_LOCAL_STACK_FRAME(_hx_pos_3b6a827a10880e4c_87_renderMask,"openfl._internal.renderer.opengl.GLShape","renderMask",0x0c2e91b8,"openfl._internal.renderer.opengl.GLShape.renderMask","openfl/_internal/renderer/opengl/GLShape.hx",87,0xf928bb48)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLShape_obj::__construct() { }

Dynamic GLShape_obj::__CreateEmpty() { return new GLShape_obj; }

void *GLShape_obj::_hx_vtable = 0;

Dynamic GLShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLShape_obj > _hx_result = new GLShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48dff322;
}

void GLShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3b6a827a10880e4c_34_render)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		if (!(!(shape->_hx___renderable))) {
HXLINE(  36)			_hx_tmp = (shape->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  36)			return;
            		}
HXLINE(  38)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  40)		if (hx::IsNotNull( graphics )) {
HXLINE(  42)			renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  43)			renderer->_hx___pushMaskObject(shape,null());
HXLINE(  46)			::openfl::_internal::renderer::opengl::GLGraphics_obj::render(graphics,renderer);
HXLINE(  48)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  50)			bool _hx_tmp1;
HXDLIN(  50)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  50)				_hx_tmp1 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  50)				_hx_tmp1 = false;
            			}
HXDLIN(  50)			if (_hx_tmp1) {
HXLINE(  53)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE(  58)				 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(shape->_hx___worldShader);
HXLINE(  59)				renderer->setShader(shader);
HXLINE(  60)				renderer->applyBitmapData(graphics->_hx___bitmap,renderer->_hx___allowSmoothing,null());
HXLINE(  61)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform));
HXLINE(  62)				renderer->applyAlpha(shape->_hx___worldAlpha);
HXLINE(  63)				renderer->applyColorTransform(shape->_hx___worldColorTransform);
HXLINE(  64)				renderer->updateShader();
HXLINE(  66)				{
HXLINE(  66)					int target = gl->ARRAY_BUFFER;
HXDLIN(  66)					gl->bindBuffer(target,graphics->_hx___bitmap->getBuffer(renderer->_hx___context));
            				}
HXLINE(  67)				if (hx::IsNotNull( shader->_hx___position )) {
HXLINE(  67)					int indx = shader->_hx___position->index;
HXDLIN(  67)					int type = gl->FLOAT;
HXDLIN(  67)					gl->vertexAttribPointer(indx,(int)3,type,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
            				}
HXLINE(  68)				if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  68)					int indx1 = shader->_hx___textureCoord->index;
HXDLIN(  68)					int type1 = gl->FLOAT;
HXDLIN(  68)					gl->vertexAttribPointer(indx1,(int)2,type1,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
            				}
HXLINE(  69)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  75)				renderer->_hx___clearShader();
            			}
HXLINE(  80)			renderer->_hx___popMaskObject(shape,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,render,(void))

void GLShape_obj::renderMask( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3b6a827a10880e4c_87_renderMask)
HXLINE(  89)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  91)		if (hx::IsNotNull( graphics )) {
HXLINE(  95)			::openfl::_internal::renderer::opengl::GLGraphics_obj::renderMask(graphics,renderer);
HXLINE(  97)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  99)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE( 102)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = renderer->_hx___context->webgl;
HXLINE( 107)				 ::openfl::_internal::renderer::opengl::GLMaskShader shader = renderer->_hx___maskShader;
HXLINE( 108)				renderer->setShader(shader);
HXLINE( 109)				renderer->applyBitmapData(graphics->_hx___bitmap,renderer->_hx___allowSmoothing,null());
HXLINE( 110)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform));
HXLINE( 111)				renderer->updateShader();
HXLINE( 113)				{
HXLINE( 113)					int target = gl->ARRAY_BUFFER;
HXDLIN( 113)					gl->bindBuffer(target,graphics->_hx___bitmap->getBuffer(renderer->_hx___context));
            				}
HXLINE( 114)				{
HXLINE( 114)					int indx = shader->_hx___position->index;
HXDLIN( 114)					int type = gl->FLOAT;
HXDLIN( 114)					gl->vertexAttribPointer(indx,(int)3,type,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
            				}
HXLINE( 115)				{
HXLINE( 115)					int indx1 = shader->_hx___textureCoord->index;
HXDLIN( 115)					int type1 = gl->FLOAT;
HXDLIN( 115)					gl->vertexAttribPointer(indx1,(int)2,type1,false,(int)56,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
            				}
HXLINE( 116)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE( 122)				renderer->_hx___clearShader();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,renderMask,(void))


GLShape_obj::GLShape_obj()
{
}

bool GLShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLShape_obj_sStaticStorageInfo = 0;
#endif

static void GLShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShape_obj::__mClass;

static ::String GLShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void GLShape_obj::__register()
{
	hx::Object *dummy = new GLShape_obj;
	GLShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShape","\x58","\x5e","\x97","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
