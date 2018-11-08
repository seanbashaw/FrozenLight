// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskShader
#define INCLUDED_openfl__internal_renderer_opengl_GLMaskShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLMaskShader)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLMaskShader_obj : public  ::openfl::display::Shader_obj
{
	public:
		typedef  ::openfl::display::Shader_obj super;
		typedef GLMaskShader_obj OBJ_;
		GLMaskShader_obj();

	public:
		enum { _hx_ClassId = 0x5e833990 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLMaskShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.opengl.GLMaskShader"); }
		static hx::ObjectPtr< GLMaskShader_obj > __new();
		static hx::ObjectPtr< GLMaskShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLMaskShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLMaskShader","\xb6","\x2f","\xd5","\xa6"); }

		static void __boot();
		static  ::openfl::display::BitmapData opaqueBitmapData;
		 ::openfl::display::ShaderParameter_Float openfl_Position;
		 ::openfl::display::ShaderParameter_Float openfl_TextureCoord;
		 ::openfl::display::ShaderParameter_Float openfl_Matrix;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData openfl_Texture;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLMaskShader */ 
