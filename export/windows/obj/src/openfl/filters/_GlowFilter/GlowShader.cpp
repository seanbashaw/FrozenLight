// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3849ff18b8ccdd38_498_new,"openfl.filters._GlowFilter.GlowShader","new",0x65561d5f,"openfl.filters._GlowFilter.GlowShader.new","openfl/filters/GlowFilter.hx",498,0x5f568606)
static const Float _hx_array_data_a0ce81ed_1[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_a0ce81ed_2[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};
namespace openfl{
namespace filters{
namespace _GlowFilter{

void GlowShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3849ff18b8ccdd38_498_new)
HXLINE( 202)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 202)			this->_hx___glFragmentSource = HX_("uniform sampler2D openfl_Texture;\n\t\t\n\t\tuniform vec4 uColor;\n\t\t\n\t\tvarying vec2 vBlurCoords[7];\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tfloat a = 0.0;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[0]).a * 0.00443;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[1]).a * 0.05399;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[2]).a * 0.24197;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[3]).a * 0.39894;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[4]).a * 0.24197;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[5]).a * 0.05399;\n\t\t\ta += texture2D(openfl_Texture, vBlurCoords[6]).a * 0.00443;\n\t\t\ta *= uColor.a;\n\t\t\t\n\t\t\tgl_FragColor = vec4(uColor.rgb * a, a);\n\t\t\t\n\t\t}",e4,ea,e2,94);
            		}
HXLINE( 201)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 201)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\t\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\t\t\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vBlurCoords[7];\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t\t\t\n\t\t\tvec2 r = uRadius / openfl_TextureSize;\n\t\t\tvBlurCoords[0] = openfl_TextureCoord - r * 1.0;\n\t\t\tvBlurCoords[1] = openfl_TextureCoord - r * 0.75;\n\t\t\tvBlurCoords[2] = openfl_TextureCoord - r * 0.5;\n\t\t\tvBlurCoords[3] = openfl_TextureCoord;\n\t\t\tvBlurCoords[4] = openfl_TextureCoord + r * 0.5;\n\t\t\tvBlurCoords[5] = openfl_TextureCoord + r * 0.75;\n\t\t\tvBlurCoords[6] = openfl_TextureCoord + r * 1.0;\n\t\t\t\n\t\t}",c8,5f,39,e4);
            		}
HXLINE( 500)		super::__construct(null());
HXLINE( 503)		this->uRadius->value = ::Array_obj< Float >::fromData( _hx_array_data_a0ce81ed_1,2);
HXLINE( 504)		this->uColor->value = ::Array_obj< Float >::fromData( _hx_array_data_a0ce81ed_2,4);
HXLINE(   1)		this->_hx___isGenerated = true;
HXDLIN(   1)		this->_hx___initGL();
            	}

Dynamic GlowShader_obj::__CreateEmpty() { return new GlowShader_obj; }

void *GlowShader_obj::_hx_vtable = 0;

Dynamic GlowShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlowShader_obj > _hx_result = new GlowShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlowShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b486eaf) {
		if (inClassId<=(int)0x03978973) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03978973;
		} else {
			return inClassId==(int)0x0b486eaf;
		}
	} else {
		return inClassId==(int)0x676ab1f7;
	}
}


hx::ObjectPtr< GlowShader_obj > GlowShader_obj::__new() {
	hx::ObjectPtr< GlowShader_obj > __this = new GlowShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GlowShader_obj > GlowShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	GlowShader_obj *__this = (GlowShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlowShader_obj), true, "openfl.filters._GlowFilter.GlowShader"));
	*(void **)__this = GlowShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GlowShader_obj::GlowShader_obj()
{
}

void GlowShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlowShader);
	HX_MARK_MEMBER_NAME(uRadius,"uRadius");
	HX_MARK_MEMBER_NAME(uColor,"uColor");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GlowShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uRadius,"uRadius");
	HX_VISIT_MEMBER_NAME(uColor,"uColor");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GlowShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { return hx::Val( uColor ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { return hx::Val( uRadius ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlowShader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { uColor=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { uRadius=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlowShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"));
	outFields->push(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlowShader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(GlowShader_obj,uRadius),HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(GlowShader_obj,uColor),HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlowShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GlowShader_obj_sMemberFields[] = {
	HX_HCSTRING("uRadius","\xa7","\x8a","\xda","\xe6"),
	HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"),
	::String(null()) };

static void GlowShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GlowShader_obj::__mClass;

void GlowShader_obj::__register()
{
	hx::Object *dummy = new GlowShader_obj;
	GlowShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._GlowFilter.GlowShader","\xed","\x81","\xce","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlowShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlowShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter
