// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_102f69689d37b2bb_227_new,"haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","haxe/Timer.hx",227,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_270___default_run,"haxe.Timer","__default_run",0xdc2b9b9c,"haxe.Timer.__default_run","haxe/Timer.hx",270,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_286_stop,"haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","haxe/Timer.hx",286,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_308___check,"haxe.Timer","__check",0xb5623597,"haxe.Timer.__check","haxe/Timer.hx",308,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_241_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",241,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_237_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",237,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_255_getMS,"haxe.Timer","getMS",0xf90fafab,"haxe.Timer.getMS","haxe/Timer.hx",255,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_260_measure,"haxe.Timer","measure",0x42373f4d,"haxe.Timer.measure","haxe/Timer.hx",260,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_279_stamp,"haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","haxe/Timer.hx",279,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_220_boot,"haxe.Timer","boot",0xc6bd04e3,"haxe.Timer.boot","haxe/Timer.hx",220,0x1a690682)
namespace haxe{

void Timer_obj::__construct(Float time){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_227_new)
HXLINE( 229)		this->mTime = time;
HXLINE( 230)		::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
HXLINE( 231)		Float _hx_tmp = ::haxe::Timer_obj::getMS();
HXDLIN( 231)		this->mFireAt = (_hx_tmp + this->mTime);
HXLINE( 232)		this->mRunning = true;
            	}

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4623e5b7;
}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_270___default_run)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

void Timer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_286_stop)
HXDLIN( 286)		if (this->mRunning) {
HXLINE( 288)			this->mRunning = false;
HXLINE( 290)			{
HXLINE( 290)				int _g1 = (int)0;
HXDLIN( 290)				int _g = ::haxe::Timer_obj::sRunningTimers->length;
HXDLIN( 290)				while((_g1 < _g)){
HXLINE( 290)					_g1 = (_g1 + (int)1);
HXDLIN( 290)					int i = (_g1 - (int)1);
HXLINE( 292)					if (hx::IsEq( ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast<  ::haxe::Timer >(),hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 294)						::haxe::Timer_obj::sRunningTimers[i] = null();
HXLINE( 295)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

void Timer_obj::_hx___check(Float inTime){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_308___check)
HXDLIN( 308)		if ((inTime >= this->mFireAt)) {
HXLINE( 310)			 ::haxe::Timer _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)			_hx_tmp->mFireAt = (_hx_tmp->mFireAt + this->mTime);
HXLINE( 311)			this->run();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,_hx___check,(void))

::Array< ::Dynamic> Timer_obj::sRunningTimers;

 ::haxe::Timer Timer_obj::delay( ::Dynamic f,int time){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::haxe::Timer,t) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_102f69689d37b2bb_241_delay)
HXLINE( 243)			t->stop();
HXLINE( 244)			f();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_102f69689d37b2bb_237_delay)
HXLINE( 239)		 ::haxe::Timer t =  ::haxe::Timer_obj::__alloc( HX_CTX ,time);
HXLINE( 241)		t->run =  ::Dynamic(new _hx_Closure_0(f,t));
HXLINE( 248)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::getMS(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_255_getMS)
HXDLIN( 255)		return ::lime::_hx_system::System_obj::getTimer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,getMS,return )

 ::Dynamic Timer_obj::measure( ::Dynamic f, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_260_measure)
HXLINE( 262)		Float t0 = ((Float)::lime::_hx_system::System_obj::getTimer() / (Float)(int)1000);
HXLINE( 263)		 ::Dynamic r = f();
HXLINE( 264)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 264)		_hx_tmp(((((Float)::lime::_hx_system::System_obj::getTimer() / (Float)(int)1000) - t0) + HX_("s",73,00,00,00)),pos);
HXLINE( 265)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::stamp(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_279_stamp)
HXDLIN( 279)		return ((Float)::lime::_hx_system::System_obj::getTimer() / (Float)(int)1000);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


void Timer_obj::__alloc_dynamic_functions(hx::Ctx *_hx_ctx,Timer_obj *_hx_obj) {
	if (!_hx_obj->run.mPtr) _hx_obj->run = new __default_run(_hx_obj);
}
Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(run,"run");
}

hx::Val Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { return hx::Val( mTime ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return hx::Val( mFireAt ); }
		if (HX_FIELD_EQ(inName,"__check") ) { return hx::Val( _hx___check_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return hx::Val( mRunning ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMS") ) { outValue = getMS_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { outValue = ( sRunningTimers ); return true; }
	}
	return false;
}

hx::Val Timer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"));
	outFields->push(HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"));
	outFields->push(HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Timer_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,mTime),HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa")},
	{hx::fsFloat,(int)offsetof(Timer_obj,mFireAt),HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72")},
	{hx::fsBool,(int)offsetof(Timer_obj,mRunning),HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Timer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Timer_obj::sRunningTimers,HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Timer_obj_sMemberFields[] = {
	HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"),
	HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"),
	HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__check","\xa8","\xf1","\x14","\xb0"),
	::String(null()) };

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("getMS","\x7c","\x95","\x60","\x91"),
	HX_HCSTRING("measure","\x5e","\xfb","\xe9","\x3c"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	::String(null())
};

void Timer_obj::__register()
{
	hx::Object *dummy = new Timer_obj;
	Timer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Timer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Timer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_220_boot)
HXDLIN( 220)		sRunningTimers = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace haxe
