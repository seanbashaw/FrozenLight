// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5bc3dc96f52a961d_13_new,"openfl.errors.TypeError","new",0x4857781b,"openfl.errors.TypeError.new","openfl/errors/TypeError.hx",13,0xef0d65d5)
namespace openfl{
namespace errors{

void TypeError_obj::__construct(::String __o_message){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_5bc3dc96f52a961d_13_new)
HXLINE(  15)		super::__construct(message,(int)0);
HXLINE(  17)		this->name = HX_("TypeError",8e,06,d5,d9);
            	}

Dynamic TypeError_obj::__CreateEmpty() { return new TypeError_obj; }

void *TypeError_obj::_hx_vtable = 0;

Dynamic TypeError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TypeError_obj > _hx_result = new TypeError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TypeError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fc85c4d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fc85c4d;
	} else {
		return inClassId==(int)0x454ba8cf;
	}
}


hx::ObjectPtr< TypeError_obj > TypeError_obj::__new(::String __o_message) {
	hx::ObjectPtr< TypeError_obj > __this = new TypeError_obj();
	__this->__construct(__o_message);
	return __this;
}

hx::ObjectPtr< TypeError_obj > TypeError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message) {
	TypeError_obj *__this = (TypeError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TypeError_obj), true, "openfl.errors.TypeError"));
	*(void **)__this = TypeError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

TypeError_obj::TypeError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TypeError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TypeError_obj_sStaticStorageInfo = 0;
#endif

static void TypeError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TypeError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeError_obj::__mClass;

void TypeError_obj::__register()
{
	hx::Object *dummy = new TypeError_obj;
	TypeError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.TypeError","\xa9","\xce","\x64","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TypeError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TypeError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
