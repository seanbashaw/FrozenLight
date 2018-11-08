// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#include <flixel/util/FlxVerticalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_8_new,"flixel.system.scaleModes.BaseScaleMode","new",0xb84381b3,"flixel.system.scaleModes.BaseScaleMode.new","flixel/system/scaleModes/BaseScaleMode.hx",8,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_27_onMeasure,"flixel.system.scaleModes.BaseScaleMode","onMeasure",0xbc54a592,"flixel.system.scaleModes.BaseScaleMode.onMeasure","flixel/system/scaleModes/BaseScaleMode.hx",27,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_39_updateGameSize,"flixel.system.scaleModes.BaseScaleMode","updateGameSize",0x99f00e89,"flixel.system.scaleModes.BaseScaleMode.updateGameSize","flixel/system/scaleModes/BaseScaleMode.hx",39,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_44_updateDeviceSize,"flixel.system.scaleModes.BaseScaleMode","updateDeviceSize",0xb35132ad,"flixel.system.scaleModes.BaseScaleMode.updateDeviceSize","flixel/system/scaleModes/BaseScaleMode.hx",44,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_48_updateScaleOffset,"flixel.system.scaleModes.BaseScaleMode","updateScaleOffset",0x13e546c7,"flixel.system.scaleModes.BaseScaleMode.updateScaleOffset","flixel/system/scaleModes/BaseScaleMode.hx",48,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_57_updateOffsetX,"flixel.system.scaleModes.BaseScaleMode","updateOffsetX",0xcbc7256f,"flixel.system.scaleModes.BaseScaleMode.updateOffsetX","flixel/system/scaleModes/BaseScaleMode.hx",57,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_70_updateOffsetY,"flixel.system.scaleModes.BaseScaleMode","updateOffsetY",0xcbc72570,"flixel.system.scaleModes.BaseScaleMode.updateOffsetY","flixel/system/scaleModes/BaseScaleMode.hx",70,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_82_updateGamePosition,"flixel.system.scaleModes.BaseScaleMode","updateGamePosition",0xebf59271,"flixel.system.scaleModes.BaseScaleMode.updateGamePosition","flixel/system/scaleModes/BaseScaleMode.hx",82,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_91_set_horizontalAlign,"flixel.system.scaleModes.BaseScaleMode","set_horizontalAlign",0x8b3e18b7,"flixel.system.scaleModes.BaseScaleMode.set_horizontalAlign","flixel/system/scaleModes/BaseScaleMode.hx",91,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_102_set_verticalAlign,"flixel.system.scaleModes.BaseScaleMode","set_verticalAlign",0x71923e65,"flixel.system.scaleModes.BaseScaleMode.set_verticalAlign","flixel/system/scaleModes/BaseScaleMode.hx",102,0x5a3188fe)
namespace flixel{
namespace _hx_system{
namespace scaleModes{

void BaseScaleMode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_8_new)
HXLINE(  16)		this->verticalAlign = ::flixel::util::FlxVerticalAlign_obj::CENTER_dyn();
HXLINE(  15)		this->horizontalAlign = ::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn();
HXLINE(  20)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  20)		point->_inPool = false;
HXDLIN(  20)		this->deviceSize = point;
HXLINE(  21)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  21)		point1->_inPool = false;
HXDLIN(  21)		this->gameSize = point1;
HXLINE(  22)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  22)		point2->_inPool = false;
HXDLIN(  22)		this->scale = point2;
HXLINE(  23)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  23)		point3->_inPool = false;
HXDLIN(  23)		this->offset = point3;
            	}

Dynamic BaseScaleMode_obj::__CreateEmpty() { return new BaseScaleMode_obj; }

void *BaseScaleMode_obj::_hx_vtable = 0;

Dynamic BaseScaleMode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BaseScaleMode_obj > _hx_result = new BaseScaleMode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a5138eb;
}

void BaseScaleMode_obj::onMeasure(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_27_onMeasure)
HXLINE(  28)		::flixel::FlxG_obj::width = ::flixel::FlxG_obj::initialWidth;
HXLINE(  29)		::flixel::FlxG_obj::height = ::flixel::FlxG_obj::initialHeight;
HXLINE(  31)		this->updateGameSize(Width,Height);
HXLINE(  32)		this->updateDeviceSize(Width,Height);
HXLINE(  33)		this->updateScaleOffset();
HXLINE(  34)		this->updateGamePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,onMeasure,(void))

void BaseScaleMode_obj::updateGameSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_39_updateGameSize)
HXDLIN(  39)		this->gameSize->set(Width,Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateGameSize,(void))

void BaseScaleMode_obj::updateDeviceSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_44_updateDeviceSize)
HXDLIN(  44)		this->deviceSize->set(Width,Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateDeviceSize,(void))

void BaseScaleMode_obj::updateScaleOffset(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_48_updateScaleOffset)
HXLINE(  49)		 ::flixel::math::FlxPoint _hx_tmp = this->scale;
HXDLIN(  49)		Float _hx_tmp1 = this->gameSize->x;
HXDLIN(  49)		_hx_tmp->set_x(((Float)_hx_tmp1 / (Float)(::flixel::FlxG_obj::width * ::flixel::FlxG_obj::initialZoom)));
HXLINE(  50)		 ::flixel::math::FlxPoint _hx_tmp2 = this->scale;
HXDLIN(  50)		Float _hx_tmp3 = this->gameSize->y;
HXDLIN(  50)		_hx_tmp2->set_y(((Float)_hx_tmp3 / (Float)(::flixel::FlxG_obj::height * ::flixel::FlxG_obj::initialZoom)));
HXLINE(  51)		this->updateOffsetX();
HXLINE(  52)		this->updateOffsetY();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateScaleOffset,(void))

void BaseScaleMode_obj::updateOffsetX(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_57_updateOffsetX)
HXDLIN(  57)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN(  57)		 ::flixel::util::FlxHorizontalAlign _g = this->horizontalAlign;
HXDLIN(  57)		Float _hx_tmp1;
HXDLIN(  57)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXDLIN(  57)				_hx_tmp1 = (int)0;
            			}
            			break;
            			case (int)1: {
HXDLIN(  57)				_hx_tmp1 = ::Math_obj::ceil(((this->deviceSize->x - this->gameSize->x) * ((Float)0.5)));
            			}
            			break;
            			case (int)2: {
HXDLIN(  57)				_hx_tmp1 = (this->deviceSize->x - this->gameSize->x);
            			}
            			break;
            		}
HXDLIN(  57)		_hx_tmp->set_x(_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetX,(void))

void BaseScaleMode_obj::updateOffsetY(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_70_updateOffsetY)
HXDLIN(  70)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN(  70)		 ::flixel::util::FlxVerticalAlign _g = this->verticalAlign;
HXDLIN(  70)		Float _hx_tmp1;
HXDLIN(  70)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXDLIN(  70)				_hx_tmp1 = (int)0;
            			}
            			break;
            			case (int)1: {
HXDLIN(  70)				_hx_tmp1 = ::Math_obj::ceil(((this->deviceSize->y - this->gameSize->y) * ((Float)0.5)));
            			}
            			break;
            			case (int)2: {
HXDLIN(  70)				_hx_tmp1 = (this->deviceSize->y - this->gameSize->y);
            			}
            			break;
            		}
HXDLIN(  70)		_hx_tmp->set_y(_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetY,(void))

void BaseScaleMode_obj::updateGamePosition(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_82_updateGamePosition)
HXLINE(  83)		if (hx::IsNull( ::flixel::FlxG_obj::game )) {
HXLINE(  84)			return;
            		}
HXLINE(  86)		::flixel::FlxG_obj::game->set_x(this->offset->x);
HXLINE(  87)		::flixel::FlxG_obj::game->set_y(this->offset->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGamePosition,(void))

 ::flixel::util::FlxHorizontalAlign BaseScaleMode_obj::set_horizontalAlign( ::flixel::util::FlxHorizontalAlign value){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_91_set_horizontalAlign)
HXLINE(  92)		this->horizontalAlign = value;
HXLINE(  93)		if (hx::IsNotNull( this->offset )) {
HXLINE(  95)			this->updateOffsetX();
HXLINE(  96)			this->updateGamePosition();
            		}
HXLINE(  98)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScaleMode_obj,set_horizontalAlign,return )

 ::flixel::util::FlxVerticalAlign BaseScaleMode_obj::set_verticalAlign( ::flixel::util::FlxVerticalAlign value){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_102_set_verticalAlign)
HXLINE( 103)		this->verticalAlign = value;
HXLINE( 104)		if (hx::IsNotNull( this->offset )) {
HXLINE( 106)			this->updateOffsetY();
HXLINE( 107)			this->updateGamePosition();
            		}
HXLINE( 109)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScaleMode_obj,set_verticalAlign,return )


hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__new() {
	hx::ObjectPtr< BaseScaleMode_obj > __this = new BaseScaleMode_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__alloc(hx::Ctx *_hx_ctx) {
	BaseScaleMode_obj *__this = (BaseScaleMode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BaseScaleMode_obj), true, "flixel.system.scaleModes.BaseScaleMode"));
	*(void **)__this = BaseScaleMode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseScaleMode_obj::BaseScaleMode_obj()
{
}

void BaseScaleMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScaleMode);
	HX_MARK_MEMBER_NAME(deviceSize,"deviceSize");
	HX_MARK_MEMBER_NAME(gameSize,"gameSize");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_MARK_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_MARK_END_CLASS();
}

void BaseScaleMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deviceSize,"deviceSize");
	HX_VISIT_MEMBER_NAME(gameSize,"gameSize");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_VISIT_MEMBER_NAME(verticalAlign,"verticalAlign");
}

hx::Val BaseScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { return hx::Val( gameSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return hx::Val( onMeasure_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { return hx::Val( deviceSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return hx::Val( verticalAlign ); }
		if (HX_FIELD_EQ(inName,"updateOffsetX") ) { return hx::Val( updateOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateOffsetY") ) { return hx::Val( updateOffsetY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return hx::Val( updateGameSize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return hx::Val( horizontalAlign ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDeviceSize") ) { return hx::Val( updateDeviceSize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScaleOffset") ) { return hx::Val( updateScaleOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return hx::Val( set_verticalAlign_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return hx::Val( updateGamePosition_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return hx::Val( set_horizontalAlign_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BaseScaleMode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { gameSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { deviceSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_verticalAlign(inValue.Cast<  ::flixel::util::FlxVerticalAlign >()) );verticalAlign=inValue.Cast<  ::flixel::util::FlxVerticalAlign >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_horizontalAlign(inValue.Cast<  ::flixel::util::FlxHorizontalAlign >()) );horizontalAlign=inValue.Cast<  ::flixel::util::FlxHorizontalAlign >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"));
	outFields->push(HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"));
	outFields->push(HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BaseScaleMode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,deviceSize),HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,gameSize),HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::util::FlxHorizontalAlign*/ ,(int)offsetof(BaseScaleMode_obj,horizontalAlign),HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4")},
	{hx::fsObject /*::flixel::util::FlxVerticalAlign*/ ,(int)offsetof(BaseScaleMode_obj,verticalAlign),HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BaseScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseScaleMode_obj_sMemberFields[] = {
	HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"),
	HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"),
	HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"),
	HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"),
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	HX_HCSTRING("updateDeviceSize","\xe0","\x7b","\xc9","\xff"),
	HX_HCSTRING("updateScaleOffset","\x34","\x0a","\xad","\xb0"),
	HX_HCSTRING("updateOffsetX","\x5c","\x6e","\xd3","\xa2"),
	HX_HCSTRING("updateOffsetY","\x5d","\x6e","\xd3","\xa2"),
	HX_HCSTRING("updateGamePosition","\x64","\xce","\xf8","\x7d"),
	HX_HCSTRING("set_horizontalAlign","\x64","\x51","\x0f","\xbc"),
	HX_HCSTRING("set_verticalAlign","\xd2","\x01","\x5a","\x0e"),
	::String(null()) };

static void BaseScaleMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseScaleMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseScaleMode_obj::__mClass;

void BaseScaleMode_obj::__register()
{
	hx::Object *dummy = new BaseScaleMode_obj;
	BaseScaleMode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.BaseScaleMode","\x41","\x2c","\xf6","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BaseScaleMode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BaseScaleMode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseScaleMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseScaleMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseScaleMode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
