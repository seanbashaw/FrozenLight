// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8b942935957ff96_25_new,"openfl.display.Preloader","new",0x5c0f09be,"openfl.display.Preloader.new","openfl/display/Preloader.hx",25,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_c8b942935957ff96_55_start,"openfl.display.Preloader","start",0xb00e4140,"openfl.display.Preloader.start","openfl/display/Preloader.hx",55,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_c8b942935957ff96_92_update,"openfl.display.Preloader","update",0xdd75fb6b,"openfl.display.Preloader.update","openfl/display/Preloader.hx",92,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_c8b942935957ff96_114_display_onUnload,"openfl.display.Preloader","display_onUnload",0xa1bcd03d,"openfl.display.Preloader.display_onUnload","openfl/display/Preloader.hx",114,0xc399db74)
namespace openfl{
namespace display{

void Preloader_obj::__construct( ::openfl::display::Sprite display){
            	HX_GC_STACKFRAME(&_hx_pos_c8b942935957ff96_25_new)
HXLINE(  29)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  43)		this->display = display;
HXLINE(  45)		if (hx::IsNotNull( display )) {
HXLINE(  47)			display->addEventListener(HX_("unload",ff,a0,8c,65),this->display_onUnload_dyn(),null(),null(),null());
HXLINE(  48)			::openfl::Lib_obj::get_current()->addChild(display);
            		}
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d31c910;
}

void Preloader_obj::start(){
            	HX_GC_STACKFRAME(&_hx_pos_c8b942935957ff96_55_start)
HXLINE(  59)		this->ready = true;
HXLINE(  62)		::openfl::Lib_obj::get_current()->get_loaderInfo()->_hx___complete();
HXLINE(  65)		if (hx::IsNotNull( this->display )) {
HXLINE(  67)			 ::openfl::events::Event complete =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),true,true);
HXLINE(  68)			this->display->dispatchEvent(complete);
HXLINE(  70)			if (!(complete->isDefaultPrevented())) {
HXLINE(  72)				 ::openfl::display::Sprite _hx_tmp = this->display;
HXDLIN(  72)				_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            			}
            		}
            		else {
HXLINE(  79)			if (!(this->complete)) {
HXLINE(  80)				this->complete = true;
HXLINE(  81)				this->onComplete->dispatch();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

void Preloader_obj::update(int loaded,int total){
            	HX_GC_STACKFRAME(&_hx_pos_c8b942935957ff96_92_update)
HXLINE(  95)		::openfl::Lib_obj::get_current()->get_loaderInfo()->_hx___update(loaded,total);
HXLINE(  98)		if (hx::IsNotNull( this->display )) {
HXLINE( 100)			 ::openfl::display::Sprite _hx_tmp = this->display;
HXDLIN( 100)			_hx_tmp->dispatchEvent( ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),true,true,loaded,total));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))

void Preloader_obj::display_onUnload( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_c8b942935957ff96_114_display_onUnload)
HXLINE( 116)		if (hx::IsNotNull( this->display )) {
HXLINE( 118)			this->display->removeEventListener(HX_("unload",ff,a0,8c,65),this->display_onUnload_dyn(),null());
HXLINE( 120)			 ::openfl::display::DisplayObjectContainer _hx_tmp = this->display->parent;
HXDLIN( 120)			if (hx::IsEq( _hx_tmp,::openfl::Lib_obj::get_current() )) {
HXLINE( 122)				::openfl::Lib_obj::get_current()->removeChild(this->display);
            			}
HXLINE( 126)			::openfl::Lib_obj::get_current()->stage->set_focus(null());
HXLINE( 127)			this->display = null();
            		}
HXLINE( 131)		if (this->ready) {
HXLINE( 134)			if (!(this->complete)) {
HXLINE( 135)				this->complete = true;
HXLINE( 136)				this->onComplete->dispatch();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,display_onUnload,(void))


hx::ObjectPtr< Preloader_obj > Preloader_obj::__new( ::openfl::display::Sprite display) {
	hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct(display);
	return __this;
}

hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Sprite display) {
	Preloader_obj *__this = (Preloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "openfl.display.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct(display);
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(ready,"ready");
}

hx::Val Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return hx::Val( display ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"display_onUnload") ) { return hx::Val( display_onUnload_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Preloader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Preloader_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Preloader_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsBool,(int)offsetof(Preloader_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("display_onUnload","\x5b","\x0c","\x23","\xe3"),
	::String(null()) };

static void Preloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Preloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Object *dummy = new Preloader_obj;
	Preloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Preloader","\xcc","\x12","\x24","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Preloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Preloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
