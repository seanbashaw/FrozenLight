// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dcbf857ab860ed73_31_new,"openfl.display.CanvasRenderer","new",0xb7099f97,"openfl.display.CanvasRenderer.new","openfl/display/CanvasRenderer.hx",31,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_53_applySmoothing,"openfl.display.CanvasRenderer","applySmoothing",0xf98f304f,"openfl.display.CanvasRenderer.applySmoothing","openfl/display/CanvasRenderer.hx",53,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_63_setTransform,"openfl.display.CanvasRenderer","setTransform",0x3b7aff53,"openfl.display.CanvasRenderer.setTransform","openfl/display/CanvasRenderer.hx",63,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_92___clear,"openfl.display.CanvasRenderer","__clear",0x050d0124,"openfl.display.CanvasRenderer.__clear","openfl/display/CanvasRenderer.hx",92,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_121___popMask,"openfl.display.CanvasRenderer","__popMask",0xbaf74a74,"openfl.display.CanvasRenderer.__popMask","openfl/display/CanvasRenderer.hx",121,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_126___popMaskObject,"openfl.display.CanvasRenderer","__popMaskObject",0x24188c53,"openfl.display.CanvasRenderer.__popMaskObject","openfl/display/CanvasRenderer.hx",126,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_145___popMaskRect,"openfl.display.CanvasRenderer","__popMaskRect",0xaa600db8,"openfl.display.CanvasRenderer.__popMaskRect","openfl/display/CanvasRenderer.hx",145,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_150___pushMask,"openfl.display.CanvasRenderer","__pushMask",0x88887caf,"openfl.display.CanvasRenderer.__pushMask","openfl/display/CanvasRenderer.hx",150,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_165___pushMaskObject,"openfl.display.CanvasRenderer","__pushMaskObject",0xbb0d9cce,"openfl.display.CanvasRenderer.__pushMaskObject","openfl/display/CanvasRenderer.hx",165,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_182___pushMaskRect,"openfl.display.CanvasRenderer","__pushMaskRect",0x16167973,"openfl.display.CanvasRenderer.__pushMaskRect","openfl/display/CanvasRenderer.hx",182,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_197___render,"openfl.display.CanvasRenderer","__render",0x63d57fdf,"openfl.display.CanvasRenderer.__render","openfl/display/CanvasRenderer.hx",197,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_204___renderStage3D,"openfl.display.CanvasRenderer","__renderStage3D",0xc57534d0,"openfl.display.CanvasRenderer.__renderStage3D","openfl/display/CanvasRenderer.hx",204,0x2676f477)
HX_LOCAL_STACK_FRAME(_hx_pos_dcbf857ab860ed73_213___setBlendMode,"openfl.display.CanvasRenderer","__setBlendMode",0xc677459b,"openfl.display.CanvasRenderer.__setBlendMode","openfl/display/CanvasRenderer.hx",213,0x2676f477)
namespace openfl{
namespace display{

void CanvasRenderer_obj::__construct( ::Dynamic context){
            	HX_GC_STACKFRAME(&_hx_pos_dcbf857ab860ed73_31_new)
HXLINE(  35)		this->pixelRatio = ((Float)1);
HXLINE(  43)		super::__construct();
HXLINE(  45)		this->context = context;
HXLINE(  47)		this->_hx___tempMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  48)		this->_hx___type = HX_("canvas",d8,54,42,b8);
            	}

Dynamic CanvasRenderer_obj::__CreateEmpty() { return new CanvasRenderer_obj; }

void *CanvasRenderer_obj::_hx_vtable = 0;

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CanvasRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x0388830d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0388830d;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x7cdf41d6;
	}
}

void CanvasRenderer_obj::applySmoothing( ::Dynamic context,bool value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_53_applySmoothing)
HXLINE(  55)		context->__SetField(HX_("mozImageSmoothingEnabled",f0,68,e1,d7),value,hx::paccDynamic);
HXLINE(  57)		context->__SetField(HX_("msImageSmoothingEnabled",a2,61,6c,a3),value,hx::paccDynamic);
HXLINE(  58)		context->__SetField(HX_("imageSmoothingEnabled",e8,4e,0e,94),value,hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,applySmoothing,(void))

void CanvasRenderer_obj::setTransform( ::openfl::geom::Matrix transform, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_63_setTransform)
HXLINE(  65)		if (hx::IsNull( context )) {
HXLINE(  67)			context = this->context;
            		}
            		else {
HXLINE(  69)			bool _hx_tmp;
HXDLIN(  69)			if (hx::IsEq( this->context,context )) {
HXLINE(  69)				_hx_tmp = hx::IsNotNull( this->_hx___worldTransform );
            			}
            			else {
HXLINE(  69)				_hx_tmp = false;
            			}
HXDLIN(  69)			if (_hx_tmp) {
HXLINE(  71)				this->_hx___tempMatrix->copyFrom(transform);
HXLINE(  72)				this->_hx___tempMatrix->concat(this->_hx___worldTransform);
HXLINE(  73)				transform = this->_hx___tempMatrix;
            			}
            		}
HXLINE(  77)		if (this->_hx___roundPixels) {
HXLINE(  79)			 ::Dynamic context1 =  ::Dynamic(context->__Field(HX_("setTransform",6a,ed,e2,69),hx::paccDynamic));
HXDLIN(  79)			Float transform1 = transform->a;
HXDLIN(  79)			Float transform2 = transform->b;
HXDLIN(  79)			Float transform3 = transform->c;
HXDLIN(  79)			Float transform4 = transform->d;
HXDLIN(  79)			int _hx_tmp1 = ::Std_obj::_hx_int(transform->tx);
HXDLIN(  79)			context1(transform1,transform2,transform3,transform4,_hx_tmp1,::Std_obj::_hx_int(transform->ty));
            		}
            		else {
HXLINE(  83)			context->__Field(HX_("setTransform",6a,ed,e2,69),hx::paccDynamic)(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderer_obj,setTransform,(void))

void CanvasRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_92___clear)
HXDLIN(  92)		if (hx::IsNotNull( this->_hx___stage )) {
HXLINE(  94)			 ::Dynamic cacheBlendMode = this->_hx___blendMode;
HXLINE(  95)			this->_hx___blendMode = null();
HXLINE(  96)			this->_hx___setBlendMode((int)10);
HXLINE(  98)			this->context->__Field(HX_("setTransform",6a,ed,e2,69),hx::paccDynamic)((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
HXLINE(  99)			this->context->__SetField(HX_("globalAlpha",fb,fe,d4,f9),(int)1,hx::paccDynamic);
HXLINE( 101)			bool _hx_tmp;
HXDLIN( 101)			if (!(this->_hx___stage->_hx___transparent)) {
HXLINE( 101)				_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            			}
            			else {
HXLINE( 101)				_hx_tmp = false;
            			}
HXDLIN( 101)			if (_hx_tmp) {
HXLINE( 103)				this->context->__SetField(HX_("fillStyle",ae,cb,c4,52),this->_hx___stage->_hx___colorString,hx::paccDynamic);
HXLINE( 104)				 ::Dynamic _hx_tmp1 =  ::Dynamic(this->context->__Field(HX_("fillRect",47,45,b9,6c),hx::paccDynamic));
HXDLIN( 104)				Float _hx_tmp2 = (this->_hx___stage->stageWidth * this->_hx___stage->window->_hx___scale);
HXDLIN( 104)				_hx_tmp1((int)0,(int)0,_hx_tmp2,(this->_hx___stage->stageHeight * this->_hx___stage->window->_hx___scale));
            			}
            			else {
HXLINE( 106)				bool _hx_tmp3;
HXDLIN( 106)				if (this->_hx___stage->_hx___transparent) {
HXLINE( 106)					_hx_tmp3 = this->_hx___stage->_hx___clearBeforeRender;
            				}
            				else {
HXLINE( 106)					_hx_tmp3 = false;
            				}
HXDLIN( 106)				if (_hx_tmp3) {
HXLINE( 108)					 ::Dynamic _hx_tmp4 =  ::Dynamic(this->context->__Field(HX_("clearRect",51,35,68,bf),hx::paccDynamic));
HXDLIN( 108)					Float _hx_tmp5 = (this->_hx___stage->stageWidth * this->_hx___stage->window->_hx___scale);
HXDLIN( 108)					_hx_tmp4((int)0,(int)0,_hx_tmp5,(this->_hx___stage->stageHeight * this->_hx___stage->window->_hx___scale));
            				}
            			}
HXLINE( 112)			this->_hx___setBlendMode(cacheBlendMode);
            		}
            	}


void CanvasRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_121___popMask)
HXDLIN( 121)		this->context->__Field(HX_("restore",4e,67,b0,6a),hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_126___popMaskObject)
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 128)			_hx_tmp = hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 130)			this->_hx___popMask();
            		}
HXLINE( 134)		bool _hx_tmp1;
HXDLIN( 134)		if (handleScrollRect) {
HXLINE( 134)			_hx_tmp1 = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 134)			_hx_tmp1 = false;
            		}
HXDLIN( 134)		if (_hx_tmp1) {
HXLINE( 136)			this->_hx___popMaskRect();
            		}
            	}


void CanvasRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_145___popMaskRect)
HXDLIN( 145)		this->context->__Field(HX_("restore",4e,67,b0,6a),hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_150___pushMask)
HXLINE( 152)		this->context->__Field(HX_("save",3d,8b,4d,4c),hx::paccDynamic)();
HXLINE( 154)		this->setTransform(mask->_hx___renderTransform,this->context);
HXLINE( 156)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),hx::paccDynamic)();
HXLINE( 157)		mask->_hx___renderCanvasMask(hx::ObjectPtr<OBJ_>(this));
HXLINE( 158)		this->context->__Field(HX_("closePath",7d,65,20,14),hx::paccDynamic)();
HXLINE( 160)		this->context->__Field(HX_("clip",d0,6e,c2,41),hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_165___pushMaskObject)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if (handleScrollRect) {
HXLINE( 167)			_hx_tmp = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 169)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 173)		bool _hx_tmp1;
HXDLIN( 173)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 173)			_hx_tmp1 = hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 173)			_hx_tmp1 = false;
            		}
HXDLIN( 173)		if (_hx_tmp1) {
HXLINE( 175)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void CanvasRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_182___pushMaskRect)
HXLINE( 184)		this->context->__Field(HX_("save",3d,8b,4d,4c),hx::paccDynamic)();
HXLINE( 186)		this->setTransform(transform,this->context);
HXLINE( 188)		this->context->__Field(HX_("beginPath",6e,c4,2b,93),hx::paccDynamic)();
HXLINE( 189)		this->context->__Field(HX_("rect",24,4d,a7,4b),hx::paccDynamic)(rect->x,rect->y,rect->width,rect->height);
HXLINE( 190)		this->context->__Field(HX_("clip",d0,6e,c2,41),hx::paccDynamic)();
            	}


void CanvasRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_197___render)
HXDLIN( 197)		::openfl::display::IBitmapDrawable_obj::_hx___renderCanvas(object,hx::ObjectPtr<OBJ_>(this));
            	}


void CanvasRenderer_obj::_hx___renderStage3D( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_204___renderStage3D)
HXDLIN( 204)		int _g = (int)0;
HXDLIN( 204)		 ::openfl::_Vector::ObjectVector _g1 = stage->stage3Ds;
HXDLIN( 204)		while((_g < _g1->get_length())){
HXDLIN( 204)			 ::openfl::display::Stage3D stage3D = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 204)			_g = (_g + (int)1);
HXLINE( 206)			stage3D->_hx___renderCanvas(stage,hx::ObjectPtr<OBJ_>(this));
            		}
            	}


void CanvasRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dcbf857ab860ed73_213___setBlendMode)
HXLINE( 215)		if (hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 215)			return;
            		}
HXLINE( 217)		this->_hx___blendMode = value;
HXLINE( 219)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==(int)0) ){
HXLINE( 223)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighter",c3,4a,e3,19),hx::paccDynamic);
HXDLIN( 223)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)1) ){
HXLINE( 227)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("destination-in",84,83,55,b2),hx::paccDynamic);
HXDLIN( 227)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)2) ){
HXLINE( 231)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("darken",5f,36,3a,21),hx::paccDynamic);
HXDLIN( 231)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)3) ){
HXLINE( 235)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("difference",fd,9b,91,46),hx::paccDynamic);
HXDLIN( 235)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)4) ){
HXLINE( 239)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("destination-out",0f,24,82,58),hx::paccDynamic);
HXDLIN( 239)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)5) ){
HXLINE( 243)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("hard-light",b4,7e,9e,35),hx::paccDynamic);
HXDLIN( 243)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)7) ){
HXLINE( 251)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),hx::paccDynamic);
HXDLIN( 251)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)8) ){
HXLINE( 255)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("lighten",bf,4a,e3,19),hx::paccDynamic);
HXDLIN( 255)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)9) ){
HXLINE( 259)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("multiply",24,e2,8c,9a),hx::paccDynamic);
HXDLIN( 259)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)11) ){
HXLINE( 263)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("overlay",90,43,10,a9),hx::paccDynamic);
HXDLIN( 263)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==(int)12) ){
HXLINE( 267)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("screen",6c,3b,5d,47),hx::paccDynamic);
HXDLIN( 267)			goto _hx_goto_13;
            		}
            		/* default */{
HXLINE( 279)			this->context->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),hx::paccDynamic);
            		}
            		_hx_goto_13:;
            	}



hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new( ::Dynamic context) {
	hx::ObjectPtr< CanvasRenderer_obj > __this = new CanvasRenderer_obj();
	__this->__construct(context);
	return __this;
}

hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic context) {
	CanvasRenderer_obj *__this = (CanvasRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CanvasRenderer_obj), true, "openfl.display.CanvasRenderer"));
	*(void **)__this = CanvasRenderer_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_MARK_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_MARK_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(pixelRatio,"pixelRatio");
	HX_VISIT_MEMBER_NAME(_hx___isDOM,"__isDOM");
	HX_VISIT_MEMBER_NAME(_hx___tempMatrix,"__tempMatrix");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { return hx::Val( _hx___isDOM ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__popMask") ) { return hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { return hx::Val( pixelRatio ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { return hx::Val( _hx___tempMatrix ); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return hx::Val( setTransform_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applySmoothing") ) { return hx::Val( applySmoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return hx::Val( _hx___popMaskObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderStage3D") ) { return hx::Val( _hx___renderStage3D_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return hx::Val( _hx___pushMaskObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CanvasRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isDOM") ) { _hx___isDOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pixelRatio") ) { pixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__tempMatrix") ) { _hx___tempMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("pixelRatio","\xa5","\x78","\x12","\x83"));
	outFields->push(HX_HCSTRING("__isDOM","\x98","\xa9","\xa8","\x2b"));
	outFields->push(HX_HCSTRING("__tempMatrix","\x95","\x6f","\xcb","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CanvasRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsFloat,(int)offsetof(CanvasRenderer_obj,pixelRatio),HX_HCSTRING("pixelRatio","\xa5","\x78","\x12","\x83")},
	{hx::fsBool,(int)offsetof(CanvasRenderer_obj,_hx___isDOM),HX_HCSTRING("__isDOM","\x98","\xa9","\xa8","\x2b")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(CanvasRenderer_obj,_hx___tempMatrix),HX_HCSTRING("__tempMatrix","\x95","\x6f","\xcb","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CanvasRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("pixelRatio","\xa5","\x78","\x12","\x83"),
	HX_HCSTRING("__isDOM","\x98","\xa9","\xa8","\x2b"),
	HX_HCSTRING("__tempMatrix","\x95","\x6f","\xcb","\x0f"),
	HX_HCSTRING("applySmoothing","\x26","\x12","\x60","\x84"),
	HX_HCSTRING("setTransform","\x6a","\xed","\xe2","\x69"),
	HX_HCSTRING("__clear","\x6d","\xca","\xb9","\xb2"),
	HX_HCSTRING("__popMask","\xfd","\xb7","\x5f","\xc4"),
	HX_HCSTRING("__popMaskObject","\x9c","\x46","\x0d","\x10"),
	HX_HCSTRING("__popMaskRect","\xc1","\x73","\xe8","\x16"),
	HX_HCSTRING("__pushMask","\x06","\xe7","\x7f","\xba"),
	HX_HCSTRING("__pushMaskObject","\x65","\xe2","\x3b","\x45"),
	HX_HCSTRING("__pushMaskRect","\x4a","\x5b","\xe7","\xa0"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("__renderStage3D","\x19","\xef","\x69","\xb1"),
	HX_HCSTRING("__setBlendMode","\x72","\x27","\x48","\x51"),
	::String(null()) };

static void CanvasRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Object *dummy = new CanvasRenderer_obj;
	CanvasRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.CanvasRenderer","\x25","\x88","\x96","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CanvasRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display