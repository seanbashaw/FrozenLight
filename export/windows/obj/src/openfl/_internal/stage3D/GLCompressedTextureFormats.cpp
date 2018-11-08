// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLCompressedTextureFormats
#include <openfl/_internal/stage3D/GLCompressedTextureFormats.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0594741cd2107140_20_new,"openfl._internal.stage3D.GLCompressedTextureFormats","new",0xe896a2a8,"openfl._internal.stage3D.GLCompressedTextureFormats.new","openfl/_internal/stage3D/GLCompressedTextureFormats.hx",20,0x2202e8a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0594741cd2107140_36_checkDXT,"openfl._internal.stage3D.GLCompressedTextureFormats","checkDXT",0x50d4e330,"openfl._internal.stage3D.GLCompressedTextureFormats.checkDXT","openfl/_internal/stage3D/GLCompressedTextureFormats.hx",36,0x2202e8a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0594741cd2107140_60_checkETC1,"openfl._internal.stage3D.GLCompressedTextureFormats","checkETC1",0x6a1805cd,"openfl._internal.stage3D.GLCompressedTextureFormats.checkETC1","openfl/_internal/stage3D/GLCompressedTextureFormats.hx",60,0x2202e8a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0594741cd2107140_93_checkPVRTC,"openfl._internal.stage3D.GLCompressedTextureFormats","checkPVRTC",0xc1b35ceb,"openfl._internal.stage3D.GLCompressedTextureFormats.checkPVRTC","openfl/_internal/stage3D/GLCompressedTextureFormats.hx",93,0x2202e8a5)
HX_LOCAL_STACK_FRAME(_hx_pos_0594741cd2107140_120_toTextureFormat,"openfl._internal.stage3D.GLCompressedTextureFormats","toTextureFormat",0x8c1b5a3f,"openfl._internal.stage3D.GLCompressedTextureFormats.toTextureFormat","openfl/_internal/stage3D/GLCompressedTextureFormats.hx",120,0x2202e8a5)
namespace openfl{
namespace _internal{
namespace stage3D{

void GLCompressedTextureFormats_obj::__construct( ::lime::graphics::RenderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_0594741cd2107140_20_new)
HXLINE(  24)		this->_hx___formatMapAlpha =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  23)		this->_hx___formatMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  29)		this->checkDXT(context);
HXLINE(  30)		this->checkETC1(context);
HXLINE(  31)		this->checkPVRTC(context);
            	}

Dynamic GLCompressedTextureFormats_obj::__CreateEmpty() { return new GLCompressedTextureFormats_obj; }

void *GLCompressedTextureFormats_obj::_hx_vtable = 0;

Dynamic GLCompressedTextureFormats_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLCompressedTextureFormats_obj > _hx_result = new GLCompressedTextureFormats_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GLCompressedTextureFormats_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x276d7fd2;
}

void GLCompressedTextureFormats_obj::checkDXT( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_0594741cd2107140_36_checkDXT)
HXLINE(  39)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->webgl;
HXLINE(  47)		 ::Dynamic compressedExtension = gl->getExtension(HX_("EXT_texture_compression_s3tc",6a,86,aa,80));
HXLINE(  50)		if (hx::IsNotNull( compressedExtension )) {
HXLINE(  52)			{
HXLINE(  52)				int v = ( (int)(compressedExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT1_EXT",b6,6f,45,f9),hx::paccDynamic)) );
HXDLIN(  52)				this->_hx___formatMap->set((int)0,v);
            			}
HXLINE(  53)			{
HXLINE(  53)				int v1 = ( (int)(compressedExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT5_EXT",ba,c1,df,46),hx::paccDynamic)) );
HXDLIN(  53)				this->_hx___formatMapAlpha->set((int)0,v1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLCompressedTextureFormats_obj,checkDXT,(void))

void GLCompressedTextureFormats_obj::checkETC1( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_0594741cd2107140_60_checkETC1)
HXLINE(  63)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->webgl;
HXLINE(  80)		 ::Dynamic compressedExtension = gl->getExtension(HX_("OES_compressed_ETC1_RGB8_texture",cd,f1,a0,b8));
HXLINE(  81)		if (hx::IsNotNull( compressedExtension )) {
HXLINE(  83)			{
HXLINE(  83)				int v = ( (int)(compressedExtension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),hx::paccDynamic)) );
HXDLIN(  83)				this->_hx___formatMap->set((int)2,v);
            			}
HXLINE(  84)			{
HXLINE(  84)				int v1 = ( (int)(compressedExtension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),hx::paccDynamic)) );
HXDLIN(  84)				this->_hx___formatMapAlpha->set((int)2,v1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLCompressedTextureFormats_obj,checkETC1,(void))

void GLCompressedTextureFormats_obj::checkPVRTC( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_0594741cd2107140_93_checkPVRTC)
HXLINE(  96)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->webgl;
HXLINE( 105)		 ::Dynamic compressedExtension = gl->getExtension(HX_("IMG_texture_compression_pvrtc",02,61,85,d1));
HXLINE( 108)		if (hx::IsNotNull( compressedExtension )) {
HXLINE( 110)			{
HXLINE( 110)				int v = ( (int)(compressedExtension->__Field(HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce),hx::paccDynamic)) );
HXDLIN( 110)				this->_hx___formatMap->set((int)1,v);
            			}
HXLINE( 111)			{
HXLINE( 111)				int v1 = ( (int)(compressedExtension->__Field(HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf),hx::paccDynamic)) );
HXDLIN( 111)				this->_hx___formatMapAlpha->set((int)1,v1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLCompressedTextureFormats_obj,checkPVRTC,(void))

int GLCompressedTextureFormats_obj::toTextureFormat(bool alpha,int gpuFormat){
            	HX_STACKFRAME(&_hx_pos_0594741cd2107140_120_toTextureFormat)
HXDLIN( 120)		if (alpha) {
HXLINE( 122)			return ( (int)(this->_hx___formatMapAlpha->get(gpuFormat)) );
            		}
            		else {
HXLINE( 126)			return ( (int)(this->_hx___formatMap->get(gpuFormat)) );
            		}
HXLINE( 120)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLCompressedTextureFormats_obj,toTextureFormat,return )


hx::ObjectPtr< GLCompressedTextureFormats_obj > GLCompressedTextureFormats_obj::__new( ::lime::graphics::RenderContext context) {
	hx::ObjectPtr< GLCompressedTextureFormats_obj > __this = new GLCompressedTextureFormats_obj();
	__this->__construct(context);
	return __this;
}

hx::ObjectPtr< GLCompressedTextureFormats_obj > GLCompressedTextureFormats_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::graphics::RenderContext context) {
	GLCompressedTextureFormats_obj *__this = (GLCompressedTextureFormats_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLCompressedTextureFormats_obj), true, "openfl._internal.stage3D.GLCompressedTextureFormats"));
	*(void **)__this = GLCompressedTextureFormats_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

GLCompressedTextureFormats_obj::GLCompressedTextureFormats_obj()
{
}

void GLCompressedTextureFormats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLCompressedTextureFormats);
	HX_MARK_MEMBER_NAME(_hx___formatMap,"__formatMap");
	HX_MARK_MEMBER_NAME(_hx___formatMapAlpha,"__formatMapAlpha");
	HX_MARK_END_CLASS();
}

void GLCompressedTextureFormats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___formatMap,"__formatMap");
	HX_VISIT_MEMBER_NAME(_hx___formatMapAlpha,"__formatMapAlpha");
}

hx::Val GLCompressedTextureFormats_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"checkDXT") ) { return hx::Val( checkDXT_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkETC1") ) { return hx::Val( checkETC1_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkPVRTC") ) { return hx::Val( checkPVRTC_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__formatMap") ) { return hx::Val( _hx___formatMap ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toTextureFormat") ) { return hx::Val( toTextureFormat_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__formatMapAlpha") ) { return hx::Val( _hx___formatMapAlpha ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLCompressedTextureFormats_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__formatMap") ) { _hx___formatMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__formatMapAlpha") ) { _hx___formatMapAlpha=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLCompressedTextureFormats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__formatMap","\x85","\x98","\x76","\x47"));
	outFields->push(HX_HCSTRING("__formatMapAlpha","\x99","\x7c","\xdd","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLCompressedTextureFormats_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GLCompressedTextureFormats_obj,_hx___formatMap),HX_HCSTRING("__formatMap","\x85","\x98","\x76","\x47")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GLCompressedTextureFormats_obj,_hx___formatMapAlpha),HX_HCSTRING("__formatMapAlpha","\x99","\x7c","\xdd","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLCompressedTextureFormats_obj_sStaticStorageInfo = 0;
#endif

static ::String GLCompressedTextureFormats_obj_sMemberFields[] = {
	HX_HCSTRING("__formatMap","\x85","\x98","\x76","\x47"),
	HX_HCSTRING("__formatMapAlpha","\x99","\x7c","\xdd","\x0d"),
	HX_HCSTRING("checkDXT","\x78","\xfa","\xde","\xac"),
	HX_HCSTRING("checkETC1","\x85","\x4d","\xe2","\x96"),
	HX_HCSTRING("checkPVRTC","\x33","\xd6","\xe7","\xc5"),
	HX_HCSTRING("toTextureFormat","\xf7","\x3b","\xc2","\xc3"),
	::String(null()) };

static void GLCompressedTextureFormats_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLCompressedTextureFormats_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLCompressedTextureFormats_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLCompressedTextureFormats_obj::__mClass,"__mClass");
};

#endif

hx::Class GLCompressedTextureFormats_obj::__mClass;

void GLCompressedTextureFormats_obj::__register()
{
	hx::Object *dummy = new GLCompressedTextureFormats_obj;
	GLCompressedTextureFormats_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.GLCompressedTextureFormats","\xb6","\x6e","\x1e","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLCompressedTextureFormats_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLCompressedTextureFormats_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLCompressedTextureFormats_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLCompressedTextureFormats_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLCompressedTextureFormats_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLCompressedTextureFormats_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
