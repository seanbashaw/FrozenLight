// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de32b167c7a26741_290_new,"flixel.effects.postprocess.PostProcess","new",0x00edfd24,"flixel.effects.postprocess.PostProcess.new","flixel/effects/postprocess/PostProcess.hx",290,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_293_enable,"flixel.effects.postprocess.PostProcess","enable",0x6b1ed43f,"flixel.effects.postprocess.PostProcess.enable","flixel/effects/postprocess/PostProcess.hx",293,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_294_capture,"flixel.effects.postprocess.PostProcess","capture",0x78fbaf4a,"flixel.effects.postprocess.PostProcess.capture","flixel/effects/postprocess/PostProcess.hx",294,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_295_rebuild,"flixel.effects.postprocess.PostProcess","rebuild",0x732f0d5f,"flixel.effects.postprocess.PostProcess.rebuild","flixel/effects/postprocess/PostProcess.hx",295,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_296_update,"flixel.effects.postprocess.PostProcess","update",0xf99cabc5,"flixel.effects.postprocess.PostProcess.update","flixel/effects/postprocess/PostProcess.hx",296,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_297_render,"flixel.effects.postprocess.PostProcess","render",0x77c09112,"flixel.effects.postprocess.PostProcess.render","flixel/effects/postprocess/PostProcess.hx",297,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_298_setUniform,"flixel.effects.postprocess.PostProcess","setUniform",0x2526196e,"flixel.effects.postprocess.PostProcess.setUniform","flixel/effects/postprocess/PostProcess.hx",298,0x6a90b60f)
HX_LOCAL_STACK_FRAME(_hx_pos_de32b167c7a26741_300_set_to,"flixel.effects.postprocess.PostProcess","set_to",0xe20f76f4,"flixel.effects.postprocess.PostProcess.set_to","flixel/effects/postprocess/PostProcess.hx",300,0x6a90b60f)
namespace flixel{
namespace effects{
namespace postprocess{

void PostProcess_obj::__construct(::String shader){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_290_new)
HXDLIN( 290)		 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
            	}

Dynamic PostProcess_obj::__CreateEmpty() { return new PostProcess_obj; }

void *PostProcess_obj::_hx_vtable = 0;

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PostProcess_obj > _hx_result = new PostProcess_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PostProcess_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f451122;
}

void PostProcess_obj::enable( ::flixel::effects::postprocess::PostProcess to){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_293_enable)
            	}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,enable,(void))

void PostProcess_obj::capture(){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_294_capture)
            	}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,capture,(void))

void PostProcess_obj::rebuild(){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_295_rebuild)
            	}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,rebuild,(void))

void PostProcess_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_296_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,update,(void))

void PostProcess_obj::render( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_297_render)
            	}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,render,(void))

void PostProcess_obj::setUniform(::String uniform,Float value){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_298_setUniform)
            	}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,setUniform,(void))

 ::flixel::effects::postprocess::PostProcess PostProcess_obj::set_to( ::flixel::effects::postprocess::PostProcess value){
            	HX_STACKFRAME(&_hx_pos_de32b167c7a26741_300_set_to)
HXDLIN( 300)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,set_to,return )


hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String shader) {
	hx::ObjectPtr< PostProcess_obj > __this = new PostProcess_obj();
	__this->__construct(shader);
	return __this;
}

hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__alloc(hx::Ctx *_hx_ctx,::String shader) {
	PostProcess_obj *__this = (PostProcess_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PostProcess_obj), false, "flixel.effects.postprocess.PostProcess"));
	*(void **)__this = PostProcess_obj::_hx_vtable;
	__this->__construct(shader);
	return __this;
}

PostProcess_obj::PostProcess_obj()
{
}

hx::Val PostProcess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return hx::Val( enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_to") ) { return hx::Val( set_to_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"capture") ) { return hx::Val( capture_dyn() ); }
		if (HX_FIELD_EQ(inName,"rebuild") ) { return hx::Val( rebuild_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setUniform") ) { return hx::Val( setUniform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PostProcess_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_to(inValue.Cast<  ::flixel::effects::postprocess::PostProcess >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PostProcess_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PostProcess_obj_sStaticStorageInfo = 0;
#endif

static ::String PostProcess_obj_sMemberFields[] = {
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("capture","\x86","\xd0","\x51","\xa7"),
	HX_HCSTRING("rebuild","\x9b","\x2e","\x85","\xa1"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("setUniform","\xb2","\x65","\x43","\x08"),
	HX_HCSTRING("set_to","\x38","\x51","\x78","\x6f"),
	::String(null()) };

static void PostProcess_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PostProcess_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
};

#endif

hx::Class PostProcess_obj::__mClass;

void PostProcess_obj::__register()
{
	hx::Object *dummy = new PostProcess_obj;
	PostProcess_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PostProcess_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PostProcess_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PostProcess_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PostProcess_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PostProcess_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PostProcess_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
