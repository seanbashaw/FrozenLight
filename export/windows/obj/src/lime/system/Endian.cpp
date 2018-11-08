// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
namespace lime{
namespace _hx_system{

::lime::_hx_system::Endian Endian_obj::_hx_BIG_ENDIAN;

::lime::_hx_system::Endian Endian_obj::_hx_LITTLE_ENDIAN;

bool Endian_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BIG_ENDIAN",9a,d5,89,b2)) { outValue = Endian_obj::_hx_BIG_ENDIAN; return true; }
	if (inName==HX_("LITTLE_ENDIAN",04,50,ec,fb)) { outValue = Endian_obj::_hx_LITTLE_ENDIAN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Endian_obj)

int Endian_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BIG_ENDIAN",9a,d5,89,b2)) return 1;
	if (inName==HX_("LITTLE_ENDIAN",04,50,ec,fb)) return 0;
	return super::__FindIndex(inName);
}

int Endian_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BIG_ENDIAN",9a,d5,89,b2)) return 0;
	if (inName==HX_("LITTLE_ENDIAN",04,50,ec,fb)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Endian_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BIG_ENDIAN",9a,d5,89,b2)) return _hx_BIG_ENDIAN;
	if (inName==HX_("LITTLE_ENDIAN",04,50,ec,fb)) return _hx_LITTLE_ENDIAN;
	return super::__Field(inName,inCallProp);
}

static ::String Endian_obj_sStaticFields[] = {
	HX_("LITTLE_ENDIAN",04,50,ec,fb),
	HX_("BIG_ENDIAN",9a,d5,89,b2),
	::String(null())
};

static void Endian_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_obj::_hx_BIG_ENDIAN,"_hx_BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_obj::_hx_LITTLE_ENDIAN,"_hx_LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Endian_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Endian_obj::_hx_BIG_ENDIAN,"_hx_BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_obj::_hx_LITTLE_ENDIAN,"_hx_LITTLE_ENDIAN");
};
#endif

hx::Class Endian_obj::__mClass;

Dynamic __Create_Endian_obj() { return new Endian_obj; }

void Endian_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.system.Endian","\x41","\x85","\x63","\xb4"), hx::TCanCast< Endian_obj >,Endian_obj_sStaticFields,0,
	&__Create_Endian_obj, &__Create,
	&super::__SGetClass(), &CreateEndian_obj, Endian_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Endian_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Endian_obj::__GetStatic;
}

void Endian_obj::__boot()
{
_hx_BIG_ENDIAN = hx::CreateEnum< Endian_obj >(HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),1,0);
_hx_LITTLE_ENDIAN = hx::CreateEnum< Endian_obj >(HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),0,0);
}


} // end namespace lime
} // end namespace system
