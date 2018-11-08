// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLProgram3D
#include <openfl/_internal/stage3D/opengl/GLProgram3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2880df2f01d21cf0_160_new,"openfl.display3D.Uniform","new",0x27a38f2d,"openfl.display3D.Uniform.new","openfl/display3D/Program3D.hx",160,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_2880df2f01d21cf0_170_flush,"openfl.display3D.Uniform","flush",0x6c722ed1,"openfl.display3D.Uniform.flush","openfl/display3D/Program3D.hx",170,0x0a985b04)
namespace openfl{
namespace display3D{

void Uniform_obj::__construct( ::lime::graphics::RenderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_2880df2f01d21cf0_160_new)
HXLINE( 162)		this->context = context;
HXLINE( 164)		this->isDirty = true;
HXLINE( 165)		 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,null(),(int)0);
HXDLIN( 165)		this->regDataPointer = this1;
            	}

Dynamic Uniform_obj::__CreateEmpty() { return new Uniform_obj; }

void *Uniform_obj::_hx_vtable = 0;

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uniform_obj > _hx_result = new Uniform_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Uniform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x288bd2fd;
}

void Uniform_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_2880df2f01d21cf0_170_flush)
HXLINE( 173)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->context->webgl;
HXLINE( 178)		::openfl::_internal::stage3D::opengl::GLProgram3D_obj::flushUniform(hx::ObjectPtr<OBJ_>(this),this->context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,flush,(void))


hx::ObjectPtr< Uniform_obj > Uniform_obj::__new( ::lime::graphics::RenderContext context) {
	hx::ObjectPtr< Uniform_obj > __this = new Uniform_obj();
	__this->__construct(context);
	return __this;
}

hx::ObjectPtr< Uniform_obj > Uniform_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::graphics::RenderContext context) {
	Uniform_obj *__this = (Uniform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uniform_obj), true, "openfl.display3D.Uniform"));
	*(void **)__this = Uniform_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

Uniform_obj::Uniform_obj()
{
}

void Uniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(regData,"regData");
	HX_MARK_MEMBER_NAME(regIndex,"regIndex");
	HX_MARK_MEMBER_NAME(regCount,"regCount");
	HX_MARK_MEMBER_NAME(isDirty,"isDirty");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(regDataPointer,"regDataPointer");
	HX_MARK_END_CLASS();
}

void Uniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(regData,"regData");
	HX_VISIT_MEMBER_NAME(regIndex,"regIndex");
	HX_VISIT_MEMBER_NAME(regCount,"regCount");
	HX_VISIT_MEMBER_NAME(isDirty,"isDirty");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(regDataPointer,"regDataPointer");
}

hx::Val Uniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { return hx::Val( regData ); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return hx::Val( isDirty ); }
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return hx::Val( location ); }
		if (HX_FIELD_EQ(inName,"regIndex") ) { return hx::Val( regIndex ); }
		if (HX_FIELD_EQ(inName,"regCount") ) { return hx::Val( regCount ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { return hx::Val( regDataPointer ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Uniform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { regData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { isDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { regIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regCount") ) { regCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { regDataPointer=inValue.Cast<  ::lime::utils::BytePointerData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"));
	outFields->push(HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"));
	outFields->push(HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"));
	outFields->push(HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Uniform_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Uniform_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Uniform_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsInt,(int)offsetof(Uniform_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Uniform_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Uniform_obj,regData),HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regIndex),HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regCount),HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Uniform_obj,isDirty),HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76")},
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(Uniform_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::utils::BytePointerData*/ ,(int)offsetof(Uniform_obj,regDataPointer),HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Uniform_obj_sStaticStorageInfo = 0;
#endif

static ::String Uniform_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"),
	HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"),
	HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"),
	HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("regDataPointer","\xbf","\x62","\x65","\x21"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null()) };

static void Uniform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Uniform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Object *dummy = new Uniform_obj;
	Uniform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Uniform","\xbb","\x74","\x2f","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Uniform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Uniform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Uniform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uniform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uniform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
