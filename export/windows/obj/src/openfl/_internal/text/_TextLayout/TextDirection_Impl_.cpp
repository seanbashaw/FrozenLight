// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_text__TextLayout_TextDirection_Impl_
#include <openfl/_internal/text/_TextLayout/TextDirection_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_334_reverse,"openfl._internal.text._TextLayout.TextDirection_Impl_","reverse",0xf3fb0bfd,"openfl._internal.text._TextLayout.TextDirection_Impl_.reverse","openfl/_internal/text/TextLayout.hx",334,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_341_toString,"openfl._internal.text._TextLayout.TextDirection_Impl_","toString",0x3e687d71,"openfl._internal.text._TextLayout.TextDirection_Impl_.toString","openfl/_internal/text/TextLayout.hx",341,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_356_toHBDirection,"openfl._internal.text._TextLayout.TextDirection_Impl_","toHBDirection",0x7ad2a365,"openfl._internal.text._TextLayout.TextDirection_Impl_.toHBDirection","openfl/_internal/text/TextLayout.hx",356,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_371_get_backward,"openfl._internal.text._TextLayout.TextDirection_Impl_","get_backward",0x2c628331,"openfl._internal.text._TextLayout.TextDirection_Impl_.get_backward","openfl/_internal/text/TextLayout.hx",371,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_378_get_forward,"openfl._internal.text._TextLayout.TextDirection_Impl_","get_forward",0xda561e37,"openfl._internal.text._TextLayout.TextDirection_Impl_.get_forward","openfl/_internal/text/TextLayout.hx",378,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_385_get_horizontal,"openfl._internal.text._TextLayout.TextDirection_Impl_","get_horizontal",0x3e4093b2,"openfl._internal.text._TextLayout.TextDirection_Impl_.get_horizontal","openfl/_internal/text/TextLayout.hx",385,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_392_get_vertical,"openfl._internal.text._TextLayout.TextDirection_Impl_","get_vertical",0x6f5f63c4,"openfl._internal.text._TextLayout.TextDirection_Impl_.get_vertical","openfl/_internal/text/TextLayout.hx",392,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_319_boot,"openfl._internal.text._TextLayout.TextDirection_Impl_","boot",0xe4242a77,"openfl._internal.text._TextLayout.TextDirection_Impl_.boot","openfl/_internal/text/TextLayout.hx",319,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_320_boot,"openfl._internal.text._TextLayout.TextDirection_Impl_","boot",0xe4242a77,"openfl._internal.text._TextLayout.TextDirection_Impl_.boot","openfl/_internal/text/TextLayout.hx",320,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_321_boot,"openfl._internal.text._TextLayout.TextDirection_Impl_","boot",0xe4242a77,"openfl._internal.text._TextLayout.TextDirection_Impl_.boot","openfl/_internal/text/TextLayout.hx",321,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_322_boot,"openfl._internal.text._TextLayout.TextDirection_Impl_","boot",0xe4242a77,"openfl._internal.text._TextLayout.TextDirection_Impl_.boot","openfl/_internal/text/TextLayout.hx",322,0x21621597)
HX_LOCAL_STACK_FRAME(_hx_pos_25e1fe7cb7da8702_323_boot,"openfl._internal.text._TextLayout.TextDirection_Impl_","boot",0xe4242a77,"openfl._internal.text._TextLayout.TextDirection_Impl_.boot","openfl/_internal/text/TextLayout.hx",323,0x21621597)
namespace openfl{
namespace _internal{
namespace text{
namespace _TextLayout{

void TextDirection_Impl__obj::__construct() { }

Dynamic TextDirection_Impl__obj::__CreateEmpty() { return new TextDirection_Impl__obj; }

void *TextDirection_Impl__obj::_hx_vtable = 0;

Dynamic TextDirection_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextDirection_Impl__obj > _hx_result = new TextDirection_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDirection_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5870d495;
}

int TextDirection_Impl__obj::INVALID;

int TextDirection_Impl__obj::LEFT_TO_RIGHT;

int TextDirection_Impl__obj::RIGHT_TO_LEFT;

int TextDirection_Impl__obj::TOP_TO_BOTTOM;

int TextDirection_Impl__obj::BOTTOM_TO_TOP;

void TextDirection_Impl__obj::reverse(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_334_reverse)
HXDLIN( 334)		this1 = ((int)this1 ^ (int)(int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,reverse,(void))

::String TextDirection_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_341_toString)
HXDLIN( 341)		switch((int)(this1)){
            			case (int)4: {
HXLINE( 343)				return HX_("leftToRight",1a,97,7b,b5);
            			}
            			break;
            			case (int)5: {
HXLINE( 344)				return HX_("rightToLeft",1e,40,ee,e6);
            			}
            			break;
            			case (int)6: {
HXLINE( 345)				return HX_("topToBottom",7b,ce,19,75);
            			}
            			break;
            			case (int)7: {
HXLINE( 346)				return HX_("bottomToTop",ef,ac,aa,79);
            			}
            			break;
            			default:{
HXLINE( 347)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 341)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toString,return )

int TextDirection_Impl__obj::toHBDirection(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_356_toHBDirection)
HXDLIN( 356)		switch((int)(this1)){
            			case (int)4: {
HXLINE( 358)				return (int)4;
            			}
            			break;
            			case (int)5: {
HXLINE( 359)				return (int)5;
            			}
            			break;
            			case (int)6: {
HXLINE( 360)				return (int)6;
            			}
            			break;
            			case (int)7: {
HXLINE( 361)				return (int)7;
            			}
            			break;
            			default:{
HXLINE( 362)				return (int)0;
            			}
            		}
HXLINE( 356)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toHBDirection,return )

bool TextDirection_Impl__obj::get_backward(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_371_get_backward)
HXDLIN( 371)		return (((int)this1 & (int)(int)-3) == (int)5);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_backward,return )

bool TextDirection_Impl__obj::get_forward(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_378_get_forward)
HXDLIN( 378)		return (((int)this1 & (int)(int)-3) == (int)4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_forward,return )

bool TextDirection_Impl__obj::get_horizontal(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_385_get_horizontal)
HXDLIN( 385)		return (((int)this1 & (int)(int)-2) == (int)4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_horizontal,return )

bool TextDirection_Impl__obj::get_vertical(int this1){
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_392_get_vertical)
HXDLIN( 392)		return (((int)this1 & (int)(int)-2) == (int)6);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_vertical,return )


TextDirection_Impl__obj::TextDirection_Impl__obj()
{
}

bool TextDirection_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { outValue = get_forward_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_backward") ) { outValue = get_backward_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { outValue = get_vertical_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toHBDirection") ) { outValue = toHBDirection_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { outValue = get_horizontal_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextDirection_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo TextDirection_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextDirection_Impl__obj::INVALID,HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::LEFT_TO_RIGHT,HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::RIGHT_TO_LEFT,HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::TOP_TO_BOTTOM,HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::BOTTOM_TO_TOP,HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TextDirection_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextDirection_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#endif

hx::Class TextDirection_Impl__obj::__mClass;

static ::String TextDirection_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb"),
	HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07"),
	HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b"),
	HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32"),
	HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toHBDirection","\x4a","\xba","\x0d","\xa1"),
	HX_HCSTRING("get_backward","\xec","\x8f","\x32","\xdc"),
	HX_HCSTRING("get_forward","\xdc","\x41","\xc5","\x6b"),
	HX_HCSTRING("get_horizontal","\x2d","\x85","\xb9","\x8b"),
	HX_HCSTRING("get_vertical","\x7f","\x70","\x2f","\x1f"),
	::String(null())
};

void TextDirection_Impl__obj::__register()
{
	hx::Object *dummy = new TextDirection_Impl__obj;
	TextDirection_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text._TextLayout.TextDirection_Impl_","\x49","\x60","\xb7","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextDirection_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextDirection_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextDirection_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextDirection_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextDirection_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDirection_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDirection_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextDirection_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_319_boot)
HXDLIN( 319)		INVALID = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_320_boot)
HXDLIN( 320)		LEFT_TO_RIGHT = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_321_boot)
HXDLIN( 321)		RIGHT_TO_LEFT = (int)5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_322_boot)
HXDLIN( 322)		TOP_TO_BOTTOM = (int)6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_25e1fe7cb7da8702_323_boot)
HXDLIN( 323)		BOTTOM_TO_TOP = (int)7;
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
} // end namespace _TextLayout
