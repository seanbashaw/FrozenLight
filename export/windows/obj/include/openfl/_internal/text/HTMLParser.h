// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_text_HTMLParser
#define INCLUDED_openfl__internal_text_HTMLParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,text,HTMLParser)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES HTMLParser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HTMLParser_obj OBJ_;
		HTMLParser_obj();

	public:
		enum { _hx_ClassId = 0x342291f7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.text.HTMLParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.text.HTMLParser"); }

		hx::ObjectPtr< HTMLParser_obj > __new() {
			hx::ObjectPtr< HTMLParser_obj > __this = new HTMLParser_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< HTMLParser_obj > __alloc(hx::Ctx *_hx_ctx) {
			HTMLParser_obj *__this = (HTMLParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTMLParser_obj), false, "openfl._internal.text.HTMLParser"));
			*(void **)__this = HTMLParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTMLParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HTMLParser","\xaa","\xd0","\xd0","\xfa"); }

		static void __boot();
		static  ::EReg _hx___regexAlign;
		static  ::EReg _hx___regexBreakTag;
		static  ::EReg _hx___regexBlockIndent;
		static  ::EReg _hx___regexColor;
		static ::Array< ::Dynamic> _hx___regexEntities;
		static  ::EReg _hx___regexFace;
		static  ::EReg _hx___regexHTMLTag;
		static  ::EReg _hx___regexHref;
		static  ::EReg _hx___regexIndent;
		static  ::EReg _hx___regexLeading;
		static  ::EReg _hx___regexLeftMargin;
		static  ::EReg _hx___regexRightMargin;
		static  ::EReg _hx___regexSize;
		static  ::EReg _hx___regexTabStops;
		static ::String parse(::String value, ::openfl::text::TextFormat textFormat, ::openfl::_Vector::ObjectVector textFormatRanges);
		static ::Dynamic parse_dyn();

		static ::String _hx___getAttributeMatch( ::EReg regex);
		static ::Dynamic _hx___getAttributeMatch_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_HTMLParser */ 
