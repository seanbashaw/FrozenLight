// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a81acb3bead7383_45_new,"openfl.display.DisplayObjectRenderer","new",0x2db5f24c,"openfl.display.DisplayObjectRenderer.new","openfl/display/DisplayObjectRenderer.hx",45,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_56___clear,"openfl.display.DisplayObjectRenderer","__clear",0x54d15259,"openfl.display.DisplayObjectRenderer.__clear","openfl/display/DisplayObjectRenderer.hx",56,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_65___getAlpha,"openfl.display.DisplayObjectRenderer","__getAlpha",0x82bb5d9c,"openfl.display.DisplayObjectRenderer.__getAlpha","openfl/display/DisplayObjectRenderer.hx",65,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_72___getColorTransform,"openfl.display.DisplayObjectRenderer","__getColorTransform",0x8add698b,"openfl.display.DisplayObjectRenderer.__getColorTransform","openfl/display/DisplayObjectRenderer.hx",72,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_87___popMask,"openfl.display.DisplayObjectRenderer","__popMask",0xc15a12e9,"openfl.display.DisplayObjectRenderer.__popMask","openfl/display/DisplayObjectRenderer.hx",87,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_94___popMaskObject,"openfl.display.DisplayObjectRenderer","__popMaskObject",0xe6109a88,"openfl.display.DisplayObjectRenderer.__popMaskObject","openfl/display/DisplayObjectRenderer.hx",94,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_101___popMaskRect,"openfl.display.DisplayObjectRenderer","__popMaskRect",0x0ba8b4ad,"openfl.display.DisplayObjectRenderer.__popMaskRect","openfl/display/DisplayObjectRenderer.hx",101,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_108___pushMask,"openfl.display.DisplayObjectRenderer","__pushMask",0x18951a9a,"openfl.display.DisplayObjectRenderer.__pushMask","openfl/display/DisplayObjectRenderer.hx",108,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_115___pushMaskObject,"openfl.display.DisplayObjectRenderer","__pushMaskObject",0xb221fcf9,"openfl.display.DisplayObjectRenderer.__pushMaskObject","openfl/display/DisplayObjectRenderer.hx",115,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_122___pushMaskRect,"openfl.display.DisplayObjectRenderer","__pushMaskRect",0xd45fe8de,"openfl.display.DisplayObjectRenderer.__pushMaskRect","openfl/display/DisplayObjectRenderer.hx",122,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_129___render,"openfl.display.DisplayObjectRenderer","__render",0xdfd83d0a,"openfl.display.DisplayObjectRenderer.__render","openfl/display/DisplayObjectRenderer.hx",129,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_136___renderStage3D,"openfl.display.DisplayObjectRenderer","__renderStage3D",0x876d4305,"openfl.display.DisplayObjectRenderer.__renderStage3D","openfl/display/DisplayObjectRenderer.hx",136,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_143___resize,"openfl.display.DisplayObjectRenderer","__resize",0xe32a2ba8,"openfl.display.DisplayObjectRenderer.__resize","openfl/display/DisplayObjectRenderer.hx",143,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_150___setBlendMode,"openfl.display.DisplayObjectRenderer","__setBlendMode",0x84c0b506,"openfl.display.DisplayObjectRenderer.__setBlendMode","openfl/display/DisplayObjectRenderer.hx",150,0x59a0b9a6)
namespace openfl{
namespace display{

void DisplayObjectRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_45_new)
HXLINE(  47)		super::__construct(null());
HXLINE(  49)		this->_hx___allowSmoothing = true;
HXLINE(  50)		this->_hx___tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  51)		this->_hx___worldAlpha = (int)1;
            	}

Dynamic DisplayObjectRenderer_obj::__CreateEmpty() { return new DisplayObjectRenderer_obj; }

void *DisplayObjectRenderer_obj::_hx_vtable = 0;

Dynamic DisplayObjectRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DisplayObjectRenderer_obj > _hx_result = new DisplayObjectRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x7cdf41d6;
	}
}

void DisplayObjectRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_56___clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___clear,(void))

Float DisplayObjectRenderer_obj::_hx___getAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_65___getAlpha)
HXDLIN(  65)		return (value * this->_hx___worldAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getAlpha,return )

 ::openfl::geom::ColorTransform DisplayObjectRenderer_obj::_hx___getColorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_72___getColorTransform)
HXDLIN(  72)		if (hx::IsNotNull( this->_hx___worldColorTransform )) {
HXLINE(  74)			this->_hx___tempColorTransform->_hx___copyFrom(this->_hx___worldColorTransform);
HXLINE(  75)			this->_hx___tempColorTransform->_hx___combine(value);
HXLINE(  76)			return this->_hx___tempColorTransform;
            		}
            		else {
HXLINE(  80)			return value;
            		}
HXLINE(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getColorTransform,return )

void DisplayObjectRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_87___popMask)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMask,(void))

void DisplayObjectRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_94___popMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___popMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_101___popMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_108___pushMask)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___pushMask,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_115___pushMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_122___pushMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_129___render)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___render,(void))

void DisplayObjectRenderer_obj::_hx___renderStage3D( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_136___renderStage3D)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___renderStage3D,(void))

void DisplayObjectRenderer_obj::_hx___resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_143___resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___resize,(void))

void DisplayObjectRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_150___setBlendMode)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___setBlendMode,(void))


hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__new() {
	hx::ObjectPtr< DisplayObjectRenderer_obj > __this = new DisplayObjectRenderer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__alloc(hx::Ctx *_hx_ctx) {
	DisplayObjectRenderer_obj *__this = (DisplayObjectRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectRenderer_obj), true, "openfl.display.DisplayObjectRenderer"));
	*(void **)__this = DisplayObjectRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectRenderer_obj::DisplayObjectRenderer_obj()
{
}

void DisplayObjectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectRenderer);
	HX_MARK_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_MARK_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_MARK_MEMBER_NAME(_hx___type,"__type");
	HX_MARK_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(_hx___type,"__type");
	HX_VISIT_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DisplayObjectRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { return hx::Val( _hx___type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { return hx::Val( _hx___stage ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return hx::Val( _hx___render_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getAlpha") ) { return hx::Val( _hx___getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return hx::Val( _hx___blendMode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return hx::Val( _hx___worldAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { return hx::Val( _hx___roundPixels ); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return hx::Val( _hx___transparent ); }
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return hx::Val( _hx___popMaskObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderStage3D") ) { return hx::Val( _hx___renderStage3D_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { return hx::Val( _hx___allowSmoothing ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getColorTransform") ) { return hx::Val( _hx___getColorTransform_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { return hx::Val( _hx___tempColorTransform ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return hx::Val( _hx___worldColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DisplayObjectRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { _hx___type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { _hx___worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { _hx___roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { _hx___transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { _hx___allowSmoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { _hx___tempColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { _hx___worldColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__allowSmoothing","\xcb","\x42","\xa6","\x9c"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__roundPixels","\xfb","\xca","\x70","\x07"));
	outFields->push(HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"));
	outFields->push(HX_HCSTRING("__tempColorTransform","\xdd","\x84","\xda","\x33"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	outFields->push(HX_HCSTRING("__type","\xda","\x55","\x01","\xfc"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DisplayObjectRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___allowSmoothing),HX_HCSTRING("__allowSmoothing","\xcb","\x42","\xa6","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___roundPixels),HX_HCSTRING("__roundPixels","\xfb","\xca","\x70","\x07")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___stage),HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___tempColorTransform),HX_HCSTRING("__tempColorTransform","\xdd","\x84","\xda","\x33")},
	{hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{hx::fsString,(int)offsetof(DisplayObjectRenderer_obj,_hx___type),HX_HCSTRING("__type","\xda","\x55","\x01","\xfc")},
	{hx::fsFloat,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DisplayObjectRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("__allowSmoothing","\xcb","\x42","\xa6","\x9c"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__roundPixels","\xfb","\xca","\x70","\x07"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("__tempColorTransform","\xdd","\x84","\xda","\x33"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("__type","\xda","\x55","\x01","\xfc"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__clear","\x6d","\xca","\xb9","\xb2"),
	HX_HCSTRING("__getAlpha","\x08","\x2a","\xa6","\x24"),
	HX_HCSTRING("__getColorTransform","\x9f","\xaf","\xa3","\xd2"),
	HX_HCSTRING("__popMask","\xfd","\xb7","\x5f","\xc4"),
	HX_HCSTRING("__popMaskObject","\x9c","\x46","\x0d","\x10"),
	HX_HCSTRING("__popMaskRect","\xc1","\x73","\xe8","\x16"),
	HX_HCSTRING("__pushMask","\x06","\xe7","\x7f","\xba"),
	HX_HCSTRING("__pushMaskObject","\x65","\xe2","\x3b","\x45"),
	HX_HCSTRING("__pushMaskRect","\x4a","\x5b","\xe7","\xa0"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("__renderStage3D","\x19","\xef","\x69","\xb1"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setBlendMode","\x72","\x27","\x48","\x51"),
	::String(null()) };

static void DisplayObjectRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisplayObjectRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectRenderer_obj::__mClass;

void DisplayObjectRenderer_obj::__register()
{
	hx::Object *dummy = new DisplayObjectRenderer_obj;
	DisplayObjectRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectRenderer","\x5a","\x1c","\xac","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DisplayObjectRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DisplayObjectRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisplayObjectRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display