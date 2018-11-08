// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_33___update,"lime.system.Clipboard","__update",0x48c84c67,"lime.system.Clipboard.__update","lime/system/Clipboard.hx",33,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_68_get_text,"lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",68,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_79_set_text,"lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",79,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_26_boot,"lime.system.Clipboard","boot",0x8554e870,"lime.system.Clipboard.boot","lime/system/Clipboard.hx",26,0x9490b5ee)
namespace lime{
namespace _hx_system{

void Clipboard_obj::__construct() { }

Dynamic Clipboard_obj::__CreateEmpty() { return new Clipboard_obj; }

void *Clipboard_obj::_hx_vtable = 0;

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Clipboard_obj > _hx_result = new Clipboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Clipboard_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c11bbb2;
}

 ::lime::app::_Event_Void_Void Clipboard_obj::onUpdate;

::String Clipboard_obj::_text;

void Clipboard_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_33___update)
HXLINE(  35)		::String cacheText = ::lime::_hx_system::Clipboard_obj::_text;
HXLINE(  41)		::lime::_hx_system::Clipboard_obj::_text = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_clipboard_get_text()) );
HXLINE(  52)		if ((::lime::_hx_system::Clipboard_obj::_text != cacheText)) {
HXLINE(  54)			::lime::_hx_system::Clipboard_obj::onUpdate->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,_hx___update,(void))

::String Clipboard_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_68_get_text)
HXLINE(  71)		::lime::_hx_system::Clipboard_obj::_hx___update();
HXLINE(  74)		return ::lime::_hx_system::Clipboard_obj::_text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_79_set_text)
HXLINE(  81)		::String cacheText = ::lime::_hx_system::Clipboard_obj::_text;
HXLINE(  82)		::lime::_hx_system::Clipboard_obj::_text = value;
HXLINE(  85)		::lime::_internal::backend::native::NativeCFFI_obj::lime_clipboard_set_text(value);
HXLINE(  97)		if ((::lime::_hx_system::Clipboard_obj::_text != cacheText)) {
HXLINE(  99)			::lime::_hx_system::Clipboard_obj::onUpdate->dispatch();
            		}
HXLINE( 103)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_text() ); return true; } }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { outValue = ( _text ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { outValue = ( onUpdate ); return true; }
		if (HX_FIELD_EQ(inName,"__update") ) { outValue = _hx___update_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true; }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_text(ioValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=ioValue.Cast<  ::lime::app::_Event_Void_Void >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Clipboard_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Clipboard_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(void *) &Clipboard_obj::onUpdate,HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsString,(void *) &Clipboard_obj::_text,HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Clipboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Clipboard_obj::onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(Clipboard_obj::_text,"_text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Clipboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::_text,"_text");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String Clipboard_obj_sStaticFields[] = {
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null())
};

void Clipboard_obj::__register()
{
	hx::Object *dummy = new Clipboard_obj;
	Clipboard_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = Clipboard_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Clipboard_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Clipboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clipboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clipboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Clipboard_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_21630ac4203d4998_26_boot)
HXDLIN(  26)		onUpdate =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace system
