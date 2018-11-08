// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0484b113da1bcafb_17_new,"flixel.graphics.tile.FlxDrawBaseItem","new",0x1069797d,"flixel.graphics.tile.FlxDrawBaseItem.new","flixel/graphics/tile/FlxDrawBaseItem.hx",17,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_83_reset,"flixel.graphics.tile.FlxDrawBaseItem","reset",0x6670342c,"flixel.graphics.tile.FlxDrawBaseItem.reset","flixel/graphics/tile/FlxDrawBaseItem.hx",83,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_91_dispose,"flixel.graphics.tile.FlxDrawBaseItem","dispose",0x64897c3c,"flixel.graphics.tile.FlxDrawBaseItem.dispose","flixel/graphics/tile/FlxDrawBaseItem.hx",91,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_100_render,"flixel.graphics.tile.FlxDrawBaseItem","render",0x386e9259,"flixel.graphics.tile.FlxDrawBaseItem.render","flixel/graphics/tile/FlxDrawBaseItem.hx",100,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_103_addQuad,"flixel.graphics.tile.FlxDrawBaseItem","addQuad",0x30847725,"flixel.graphics.tile.FlxDrawBaseItem.addQuad","flixel/graphics/tile/FlxDrawBaseItem.hx",103,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_107_get_numVertices,"flixel.graphics.tile.FlxDrawBaseItem","get_numVertices",0x6c4b2893,"flixel.graphics.tile.FlxDrawBaseItem.get_numVertices","flixel/graphics/tile/FlxDrawBaseItem.hx",107,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_112_get_numTriangles,"flixel.graphics.tile.FlxDrawBaseItem","get_numTriangles",0x6bc74ed1,"flixel.graphics.tile.FlxDrawBaseItem.get_numTriangles","flixel/graphics/tile/FlxDrawBaseItem.hx",112,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_27_blendToInt,"flixel.graphics.tile.FlxDrawBaseItem","blendToInt",0xc101e4a6,"flixel.graphics.tile.FlxDrawBaseItem.blendToInt","flixel/graphics/tile/FlxDrawBaseItem.hx",27,0xe6349cf4)
HX_LOCAL_STACK_FRAME(_hx_pos_0484b113da1bcafb_22_boot,"flixel.graphics.tile.FlxDrawBaseItem","boot",0x43f9d475,"flixel.graphics.tile.FlxDrawBaseItem.boot","flixel/graphics/tile/FlxDrawBaseItem.hx",22,0xe6349cf4)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawBaseItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_17_new)
HXLINE(  72)		this->blending = (int)0;
HXLINE(  71)		this->hasColorOffsets = false;
HXLINE(  70)		this->colored = false;
HXLINE(  69)		this->antialiasing = false;
            	}

Dynamic FlxDrawBaseItem_obj::__CreateEmpty() { return new FlxDrawBaseItem_obj; }

void *FlxDrawBaseItem_obj::_hx_vtable = 0;

Dynamic FlxDrawBaseItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDrawBaseItem_obj > _hx_result = new FlxDrawBaseItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawBaseItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18d0451d;
}

void FlxDrawBaseItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_83_reset)
HXLINE(  84)		this->graphics = null();
HXLINE(  85)		this->antialiasing = false;
HXLINE(  86)		this->nextTyped = null();
HXLINE(  87)		this->next = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,reset,(void))

void FlxDrawBaseItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_91_dispose)
HXLINE(  92)		this->graphics = null();
HXLINE(  93)		this->next = null();
HXLINE(  94)		this->type = null();
HXLINE(  95)		this->nextTyped = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,dispose,(void))

void FlxDrawBaseItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_100_render)
HXDLIN( 100)		::flixel::graphics::tile::FlxDrawBaseItem_obj::drawCalls++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,render,(void))

void FlxDrawBaseItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_103_addQuad)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxDrawBaseItem_obj,addQuad,(void))

int FlxDrawBaseItem_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_107_get_numVertices)
HXDLIN( 107)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numVertices,return )

int FlxDrawBaseItem_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_112_get_numTriangles)
HXDLIN( 112)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numTriangles,return )

int FlxDrawBaseItem_obj::drawCalls;

int FlxDrawBaseItem_obj::blendToInt( ::Dynamic blend){
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_27_blendToInt)
HXDLIN(  27)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,blendToInt,return )


hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__new() {
	hx::ObjectPtr< FlxDrawBaseItem_obj > __this = new FlxDrawBaseItem_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxDrawBaseItem_obj *__this = (FlxDrawBaseItem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawBaseItem_obj), true, "flixel.graphics.tile.FlxDrawBaseItem"));
	*(void **)__this = FlxDrawBaseItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawBaseItem_obj::FlxDrawBaseItem_obj()
{
}

void FlxDrawBaseItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawBaseItem);
	HX_MARK_MEMBER_NAME(nextTyped,"nextTyped");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void FlxDrawBaseItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nextTyped,"nextTyped");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val FlxDrawBaseItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return hx::Val( colored ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return hx::Val( addQuad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return hx::Val( graphics ); }
		if (HX_FIELD_EQ(inName,"blending") ) { return hx::Val( blending ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { return hx::Val( nextTyped ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numVertices() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_numTriangles() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { return hx::Val( hasColorOffsets ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return hx::Val( get_numTriangles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawBaseItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { outValue = ( drawCalls ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blendToInt") ) { outValue = blendToInt_dyn(); return true; }
	}
	return false;
}

hx::Val FlxDrawBaseItem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::graphics::tile::FlxDrawItemType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { nextTyped=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { hasColorOffsets=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawBaseItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { drawCalls=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxDrawBaseItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"));
	outFields->push(HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68"));
	outFields->push(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"));
	outFields->push(HX_HCSTRING("numTriangles","\x85","\x39","\xb1","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxDrawBaseItem_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxDrawBaseItem_obj,nextTyped),HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxDrawBaseItem_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxDrawBaseItem_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,colored),HX_HCSTRING("colored","\x82","\x28","\x66","\xef")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,hasColorOffsets),HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68")},
	{hx::fsInt,(int)offsetof(FlxDrawBaseItem_obj,blending),HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawItemType*/ ,(int)offsetof(FlxDrawBaseItem_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxDrawBaseItem_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxDrawBaseItem_obj::drawCalls,HX_HCSTRING("drawCalls","\x71","\xa7","\x26","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawBaseItem_obj_sMemberFields[] = {
	HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("colored","\x82","\x28","\x66","\xef"),
	HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68"),
	HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void FlxDrawBaseItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDrawBaseItem_obj::drawCalls,"drawCalls");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawBaseItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawBaseItem_obj::drawCalls,"drawCalls");
};

#endif

hx::Class FlxDrawBaseItem_obj::__mClass;

static ::String FlxDrawBaseItem_obj_sStaticFields[] = {
	HX_HCSTRING("drawCalls","\x71","\xa7","\x26","\x09"),
	HX_HCSTRING("blendToInt","\x23","\x80","\x69","\xac"),
	::String(null())
};

void FlxDrawBaseItem_obj::__register()
{
	hx::Object *dummy = new FlxDrawBaseItem_obj;
	FlxDrawBaseItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawBaseItem","\x0b","\xf7","\x7d","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawBaseItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawBaseItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawBaseItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxDrawBaseItem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxDrawBaseItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawBaseItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawBaseItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawBaseItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawBaseItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawBaseItem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0484b113da1bcafb_22_boot)
HXDLIN(  22)		drawCalls = (int)0;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
