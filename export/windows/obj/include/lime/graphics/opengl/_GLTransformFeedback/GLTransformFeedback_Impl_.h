// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_graphics_opengl__GLTransformFeedback_GLTransformFeedback_Impl_
#define INCLUDED_lime_graphics_opengl__GLTransformFeedback_GLTransformFeedback_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLTransformFeedback,GLTransformFeedback_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTransformFeedback{


class HXCPP_CLASS_ATTRIBUTES GLTransformFeedback_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLTransformFeedback_Impl__obj OBJ_;
		GLTransformFeedback_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4bae1988 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_"); }

		hx::ObjectPtr< GLTransformFeedback_Impl__obj > __new() {
			hx::ObjectPtr< GLTransformFeedback_Impl__obj > __this = new GLTransformFeedback_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLTransformFeedback_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GLTransformFeedback_Impl__obj *__this = (GLTransformFeedback_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLTransformFeedback_Impl__obj), false, "lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_"));
			*(void **)__this = GLTransformFeedback_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTransformFeedback_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLTransformFeedback_Impl_","\xcc","\x43","\x07","\xd1"); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTransformFeedback

#endif /* INCLUDED_lime_graphics_opengl__GLTransformFeedback_GLTransformFeedback_Impl_ */ 
