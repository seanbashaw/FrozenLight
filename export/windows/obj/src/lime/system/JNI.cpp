// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_23_callMember,"lime.system.JNI","callMember",0x6d0f06e7,"lime.system.JNI.callMember","lime/system/JNI.hx",23,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_42_callStatic,"lime.system.JNI","callStatic",0x6e55013b,"lime.system.JNI.callStatic","lime/system/JNI.hx",42,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_59_createMemberField,"lime.system.JNI","createMemberField",0xd212c0f5,"lime.system.JNI.createMemberField","lime/system/JNI.hx",59,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_72_createMemberMethod,"lime.system.JNI","createMemberMethod",0x87227e46,"lime.system.JNI.createMemberMethod","lime/system/JNI.hx",72,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_101_createStaticField,"lime.system.JNI","createStaticField",0xe4dcd621,"lime.system.JNI.createStaticField","lime/system/JNI.hx",101,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_114_createStaticMethod,"lime.system.JNI","createStaticMethod",0xe52aef9a,"lime.system.JNI.createStaticMethod","lime/system/JNI.hx",114,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_143_getEnv,"lime.system.JNI","getEnv",0x2402f6c6,"lime.system.JNI.getEnv","lime/system/JNI.hx",143,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_158_init,"lime.system.JNI","init",0x6490931f,"lime.system.JNI.init","lime/system/JNI.hx",158,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_172_onCallback,"lime.system.JNI","onCallback",0x99e6bb53,"lime.system.JNI.onCallback","lime/system/JNI.hx",172,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_197_postUICallback,"lime.system.JNI","postUICallback",0x8d567168,"lime.system.JNI.postUICallback","lime/system/JNI.hx",197,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_17_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",17,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_18_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",18,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNI_obj::__construct() { }

Dynamic JNI_obj::__CreateEmpty() { return new JNI_obj; }

void *JNI_obj::_hx_vtable = 0;

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JNI_obj > _hx_result = new JNI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JNI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e3c4b1d;
}

 ::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

 ::Dynamic JNI_obj::callMember( ::Dynamic method, ::Dynamic jobject,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_23_callMember)
HXDLIN(  23)		int _g = a->get_length();
HXDLIN(  23)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  25)				return method(jobject);
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return method(jobject,a->__get((int)0));
            			}
            			break;
            			case (int)2: {
HXLINE(  27)				return method(jobject,a->__get((int)0),a->__get((int)1));
            			}
            			break;
            			case (int)3: {
HXLINE(  28)				return method(jobject,a->__get((int)0),a->__get((int)1),a->__get((int)2));
            			}
            			break;
            			case (int)4: {
HXLINE(  29)				return method(jobject,a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
            			}
            			break;
            			case (int)5: {
HXLINE(  30)				return method(jobject,a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4));
            			}
            			break;
            			case (int)6: {
HXLINE(  31)				return method(jobject,a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5));
            			}
            			break;
            			case (int)7: {
HXLINE(  32)				return method(jobject,a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5),a->__get((int)6));
            			}
            			break;
            			default:{
HXLINE(  33)				return null();
            			}
            		}
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

 ::Dynamic JNI_obj::callStatic( ::Dynamic method,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_42_callStatic)
HXDLIN(  42)		int _g = a->get_length();
HXDLIN(  42)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  44)				return method();
            			}
            			break;
            			case (int)1: {
HXLINE(  45)				return method(a->__get((int)0));
            			}
            			break;
            			case (int)2: {
HXLINE(  46)				return method(a->__get((int)0),a->__get((int)1));
            			}
            			break;
            			case (int)3: {
HXLINE(  47)				return method(a->__get((int)0),a->__get((int)1),a->__get((int)2));
            			}
            			break;
            			case (int)4: {
HXLINE(  48)				return method(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
            			}
            			break;
            			case (int)5: {
HXLINE(  49)				return method(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4));
            			}
            			break;
            			case (int)6: {
HXLINE(  50)				return method(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5));
            			}
            			break;
            			case (int)7: {
HXLINE(  51)				return method(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5),a->__get((int)6));
            			}
            			break;
            			default:{
HXLINE(  52)				return null();
            			}
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

 ::lime::_hx_system::JNIMemberField JNI_obj::createMemberField(::String className,::String memberName,::String signature){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_59_createMemberField)
HXLINE(  61)		::lime::_hx_system::JNI_obj::init();
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

 ::Dynamic JNI_obj::createMemberMethod(::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_72_createMemberMethod)
HXLINE(  74)		::lime::_hx_system::JNI_obj::init();
HXLINE(  95)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

 ::lime::_hx_system::JNIStaticField JNI_obj::createStaticField(::String className,::String memberName,::String signature){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_101_createStaticField)
HXLINE( 103)		::lime::_hx_system::JNI_obj::init();
HXLINE( 108)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

 ::Dynamic JNI_obj::createStaticMethod(::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_114_createStaticMethod)
HXLINE( 116)		::lime::_hx_system::JNI_obj::init();
HXLINE( 137)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

 ::Dynamic JNI_obj::getEnv(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_143_getEnv)
HXLINE( 145)		::lime::_hx_system::JNI_obj::init();
HXLINE( 150)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

void JNI_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_158_init)
HXDLIN( 158)		if (!(::lime::_hx_system::JNI_obj::initialized)) {
HXLINE( 160)			::lime::_hx_system::JNI_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

 ::Dynamic JNI_obj::onCallback( ::Dynamic object,::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_172_onCallback)
HXLINE( 174)		 ::Dynamic field = ::Reflect_obj::field(object,method);
HXLINE( 176)		if (hx::IsNotNull( field )) {
HXLINE( 178)			if (hx::IsNull( args )) {
HXLINE( 178)				args = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 180)			return ::Reflect_obj::callMethod(object,field,args);
            		}
HXLINE( 184)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 184)		_hx_tmp((HX_("onCallback - unknown field ",2b,28,2a,3c) + method),hx::SourceInfo(HX_("JNI.hx",d9,c8,0d,b0),184,HX_("lime.system.JNI",bf,02,fc,60),HX_("onCallback",04,6e,bd,5c)));
HXLINE( 185)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

void JNI_obj::postUICallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_197_postUICallback)
HXDLIN( 197)		callback();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = ( alreadyCreated ); return true; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true; }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JNI_obj_sMemberStorageInfo = 0;
static hx::StaticInfo JNI_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &JNI_obj::alreadyCreated,HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79")},
	{hx::fsBool,(void *) &JNI_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void JNI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#endif

hx::Class JNI_obj::__mClass;

static ::String JNI_obj_sStaticFields[] = {
	HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("createMemberField","\x64","\x36","\x37","\x55"),
	HX_HCSTRING("createMemberMethod","\xf7","\xc9","\xe4","\xc3"),
	HX_HCSTRING("createStaticField","\x90","\x4b","\x01","\x68"),
	HX_HCSTRING("createStaticMethod","\x4b","\x3b","\xed","\x21"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	::String(null())
};

void JNI_obj::__register()
{
	hx::Object *dummy = new JNI_obj;
	JNI_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNI","\xbf","\x02","\xfc","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = JNI_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JNI_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JNI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNI_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JNI_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_17_boot)
HXDLIN(  17)		alreadyCreated =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_18_boot)
HXDLIN(  18)		initialized = false;
            	}
}

} // end namespace lime
} // end namespace system
