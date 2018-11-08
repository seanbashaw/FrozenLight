// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_ApplicationEventInfo
#include <lime/_internal/backend/native/ApplicationEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a94701d58bd3d3e_725_new,"lime._internal.backend.native.ApplicationEventInfo","new",0xb35cdd3c,"lime._internal.backend.native.ApplicationEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",725,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_1a94701d58bd3d3e_735_clone,"lime._internal.backend.native.ApplicationEventInfo","clone",0x996e0f39,"lime._internal.backend.native.ApplicationEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",735,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void ApplicationEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_deltaTime){
int deltaTime = __o_deltaTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_1a94701d58bd3d3e_725_new)
HXLINE( 727)		this->type = type;
HXLINE( 728)		this->deltaTime = deltaTime;
            	}

Dynamic ApplicationEventInfo_obj::__CreateEmpty() { return new ApplicationEventInfo_obj; }

void *ApplicationEventInfo_obj::_hx_vtable = 0;

Dynamic ApplicationEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ApplicationEventInfo_obj > _hx_result = new ApplicationEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ApplicationEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x111de8fc;
}

 ::lime::_internal::backend::native::ApplicationEventInfo ApplicationEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_1a94701d58bd3d3e_735_clone)
HXDLIN( 735)		return  ::lime::_internal::backend::native::ApplicationEventInfo_obj::__alloc( HX_CTX ,this->type,this->deltaTime);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationEventInfo_obj,clone,return )


ApplicationEventInfo_obj::ApplicationEventInfo_obj()
{
}

hx::Val ApplicationEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return hx::Val( deltaTime ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ApplicationEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ApplicationEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,deltaTime),HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5")},
	{hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ApplicationEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ApplicationEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ApplicationEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplicationEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplicationEventInfo_obj::__mClass;

void ApplicationEventInfo_obj::__register()
{
	hx::Object *dummy = new ApplicationEventInfo_obj;
	ApplicationEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.backend.native.ApplicationEventInfo","\x4a","\xcf","\xe6","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ApplicationEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ApplicationEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplicationEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplicationEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
