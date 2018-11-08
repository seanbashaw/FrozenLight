// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_atf_ATFReader
#include <openfl/_internal/stage3D/atf/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e15a0b592410441_30_new,"openfl._internal.stage3D.atf.ATFReader","new",0x0b38c27e,"openfl._internal.stage3D.atf.ATFReader.new","openfl/_internal/stage3D/atf/ATFReader.hx",30,0x63888776)
HX_LOCAL_STACK_FRAME(_hx_pos_9e15a0b592410441_82_readHeader,"openfl._internal.stage3D.atf.ATFReader","readHeader",0x33e29b25,"openfl._internal.stage3D.atf.ATFReader.readHeader","openfl/_internal/stage3D/atf/ATFReader.hx",82,0x63888776)
HX_LOCAL_STACK_FRAME(_hx_pos_9e15a0b592410441_126_readTextures,"openfl._internal.stage3D.atf.ATFReader","readTextures",0x07ab1ed0,"openfl._internal.stage3D.atf.ATFReader.readTextures","openfl/_internal/stage3D/atf/ATFReader.hx",126,0x63888776)
HX_LOCAL_STACK_FRAME(_hx_pos_9e15a0b592410441_163___readUInt24,"openfl._internal.stage3D.atf.ATFReader","__readUInt24",0xb1c572f4,"openfl._internal.stage3D.atf.ATFReader.__readUInt24","openfl/_internal/stage3D/atf/ATFReader.hx",163,0x63888776)
HX_LOCAL_STACK_FRAME(_hx_pos_9e15a0b592410441_174___readUInt32,"openfl._internal.stage3D.atf.ATFReader","__readUInt32",0xb1c573d1,"openfl._internal.stage3D.atf.ATFReader.__readUInt32","openfl/_internal/stage3D/atf/ATFReader.hx",174,0x63888776)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace atf{

void ATFReader_obj::__construct( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_9e15a0b592410441_30_new)
HXLINE(  38)		this->version = (int)0;
HXLINE(  44)		data->position = byteArrayOffset;
HXLINE(  45)		::String signature = data->readUTFBytes((int)3);
HXLINE(  46)		data->position = byteArrayOffset;
HXLINE(  48)		if ((signature != HX_("ATF",f3,9b,31,00))) {
HXLINE(  50)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE(  54)		int length = (int)0;
HXLINE(  57)		if ((data->b->__get((byteArrayOffset + (int)6)) == (int)255)) {
HXLINE(  59)			this->version = data->b->__get((byteArrayOffset + (int)7));
HXLINE(  60)			data->position = (byteArrayOffset + (int)8);
HXLINE(  61)			length = this->_hx___readUInt32(data);
            		}
            		else {
HXLINE(  65)			this->version = (int)0;
HXLINE(  66)			data->position = (byteArrayOffset + (int)3);
HXLINE(  67)			length = this->_hx___readUInt24(data);
            		}
HXLINE(  71)		int _hx_tmp = (byteArrayOffset + length);
HXDLIN(  71)		if ((_hx_tmp > ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data))) {
HXLINE(  73)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE(  77)		this->data = data;
            	}

Dynamic ATFReader_obj::__CreateEmpty() { return new ATFReader_obj; }

void *ATFReader_obj::_hx_vtable = 0;

Dynamic ATFReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ATFReader_obj > _hx_result = new ATFReader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ATFReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x687242c6;
}

bool ATFReader_obj::readHeader(int _hx___width,int _hx___height,bool cubeMap){
            	HX_GC_STACKFRAME(&_hx_pos_9e15a0b592410441_82_readHeader)
HXLINE(  84)		int tdata = this->data->readUnsignedByte();
HXLINE(  85)		int type = ((int)tdata >> (int)(int)7);
HXLINE(  87)		bool _hx_tmp;
HXDLIN(  87)		if (!(cubeMap)) {
HXLINE(  87)			_hx_tmp = (type != (int)0);
            		}
            		else {
HXLINE(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  89)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map not expected",a7,74,ca,c8)));
            		}
HXLINE(  93)		bool _hx_tmp1;
HXDLIN(  93)		if (cubeMap) {
HXLINE(  93)			_hx_tmp1 = (type != (int)1);
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = false;
            		}
HXDLIN(  93)		if (_hx_tmp1) {
HXLINE(  95)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map expected",fa,fe,ed,52)));
            		}
HXLINE(  99)		this->cubeMap = cubeMap;
HXLINE( 101)		this->atfFormat = ((int)tdata & (int)(int)127);
HXLINE( 104)		bool _hx_tmp2;
HXDLIN( 104)		if ((this->atfFormat != (int)3)) {
HXLINE( 104)			_hx_tmp2 = (this->atfFormat != (int)5);
            		}
            		else {
HXLINE( 104)			_hx_tmp2 = false;
            		}
HXDLIN( 104)		if (_hx_tmp2) {
HXLINE( 106)			::lime::utils::Log_obj::warn(HX_("Only ATF block compressed textures without JPEG-XR+LZMA are supported",25,8c,50,6a),hx::SourceInfo(HX_("ATFReader.hx",e8,b6,75,e1),106,HX_("openfl._internal.stage3D.atf.ATFReader",8c,6b,52,5f),HX_("readHeader",83,ed,7b,f6)));
            		}
HXLINE( 110)		this->width = ((int)(int)1 << (int)this->data->readUnsignedByte());
HXLINE( 111)		this->height = ((int)(int)1 << (int)this->data->readUnsignedByte());
HXLINE( 113)		bool _hx_tmp3;
HXDLIN( 113)		if ((this->width == _hx___width)) {
HXLINE( 113)			_hx_tmp3 = (this->height != _hx___height);
            		}
            		else {
HXLINE( 113)			_hx_tmp3 = true;
            		}
HXDLIN( 113)		if (_hx_tmp3) {
HXLINE( 115)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 119)		this->mipCount = this->data->readUnsignedByte();
HXLINE( 121)		return (this->atfFormat == (int)5);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ATFReader_obj,readHeader,return )

void ATFReader_obj::readTextures( ::Dynamic uploadCallback){
            	HX_GC_STACKFRAME(&_hx_pos_9e15a0b592410441_126_readTextures)
HXLINE( 130)		int gpuFormats;
HXDLIN( 130)		if ((this->version < (int)3)) {
HXLINE( 130)			gpuFormats = (int)3;
            		}
            		else {
HXLINE( 130)			gpuFormats = (int)4;
            		}
HXLINE( 131)		int sideCount;
HXDLIN( 131)		if (this->cubeMap) {
HXLINE( 131)			sideCount = (int)6;
            		}
            		else {
HXLINE( 131)			sideCount = (int)1;
            		}
HXLINE( 133)		{
HXLINE( 133)			int _g1 = (int)0;
HXDLIN( 133)			int _g = sideCount;
HXDLIN( 133)			while((_g1 < _g)){
HXLINE( 133)				_g1 = (_g1 + (int)1);
HXDLIN( 133)				int side = (_g1 - (int)1);
HXLINE( 134)				{
HXLINE( 134)					int _g3 = (int)0;
HXDLIN( 134)					int _g2 = this->mipCount;
HXDLIN( 134)					while((_g3 < _g2)){
HXLINE( 134)						_g3 = (_g3 + (int)1);
HXDLIN( 134)						int level = (_g3 - (int)1);
HXLINE( 136)						{
HXLINE( 136)							int _g5 = (int)0;
HXDLIN( 136)							int _g4 = gpuFormats;
HXDLIN( 136)							while((_g5 < _g4)){
HXLINE( 136)								_g5 = (_g5 + (int)1);
HXDLIN( 136)								int gpuFormat = (_g5 - (int)1);
HXLINE( 138)								int blockLength;
HXDLIN( 138)								if ((this->version == (int)0)) {
HXLINE( 138)									blockLength = this->_hx___readUInt24(this->data);
            								}
            								else {
HXLINE( 138)									blockLength = this->_hx___readUInt32(this->data);
            								}
HXLINE( 140)								int a = (this->data->position + blockLength);
HXDLIN( 140)								int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->data);
HXDLIN( 140)								bool aNeg = (a < (int)0);
HXDLIN( 140)								bool bNeg = (b < (int)0);
HXDLIN( 140)								bool _hx_tmp;
HXDLIN( 140)								if ((aNeg != bNeg)) {
HXLINE( 140)									_hx_tmp = aNeg;
            								}
            								else {
HXLINE( 140)									_hx_tmp = (a > b);
            								}
HXDLIN( 140)								if (_hx_tmp) {
HXLINE( 142)									HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Block length exceeds ATF file length",15,23,c0,24)));
            								}
HXLINE( 146)								bool aNeg1 = (blockLength < (int)0);
HXDLIN( 146)								bool bNeg1 = ((int)0 < (int)0);
HXDLIN( 146)								bool _hx_tmp1;
HXDLIN( 146)								if ((aNeg1 != bNeg1)) {
HXLINE( 146)									_hx_tmp1 = aNeg1;
            								}
            								else {
HXLINE( 146)									_hx_tmp1 = (blockLength > (int)0);
            								}
HXDLIN( 146)								if (_hx_tmp1) {
HXLINE( 148)									 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(blockLength);
HXLINE( 149)									 ::openfl::utils::ByteArrayData _hx_tmp2 = this->data;
HXDLIN( 149)									_hx_tmp2->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(bytes),(int)0,blockLength);
HXLINE( 151)									int _hx_tmp3 = ((int)this->width >> (int)level);
HXDLIN( 151)									uploadCallback(side,level,gpuFormat,_hx_tmp3,((int)this->height >> (int)level),blockLength,bytes);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,readTextures,(void))

int ATFReader_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_9e15a0b592410441_163___readUInt24)
HXLINE( 165)		int value = ((int)data->readUnsignedByte() << (int)(int)16);
HXLINE( 167)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 168)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 169)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt24,return )

int ATFReader_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_9e15a0b592410441_174___readUInt32)
HXLINE( 176)		int value = ((int)data->readUnsignedByte() << (int)(int)24);
HXLINE( 178)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)16));
HXLINE( 179)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 180)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 181)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt32,return )


hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__new( ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	hx::ObjectPtr< ATFReader_obj > __this = new ATFReader_obj();
	__this->__construct(data,byteArrayOffset);
	return __this;
}

hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	ATFReader_obj *__this = (ATFReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ATFReader_obj), true, "openfl._internal.stage3D.atf.ATFReader"));
	*(void **)__this = ATFReader_obj::_hx_vtable;
	__this->__construct(data,byteArrayOffset);
	return __this;
}

ATFReader_obj::ATFReader_obj()
{
}

void ATFReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ATFReader);
	HX_MARK_MEMBER_NAME(atfFormat,"atfFormat");
	HX_MARK_MEMBER_NAME(cubeMap,"cubeMap");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mipCount,"mipCount");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ATFReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atfFormat,"atfFormat");
	HX_VISIT_MEMBER_NAME(cubeMap,"cubeMap");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mipCount,"mipCount");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
}

hx::Val ATFReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return hx::Val( cubeMap ); }
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { return hx::Val( mipCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { return hx::Val( atfFormat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return hx::Val( readHeader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readTextures") ) { return hx::Val( readTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { return hx::Val( _hx___readUInt24_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { return hx::Val( _hx___readUInt32_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ATFReader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { cubeMap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { mipCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { atfFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ATFReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c"));
	outFields->push(HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ATFReader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ATFReader_obj,atfFormat),HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c")},
	{hx::fsBool,(int)offsetof(ATFReader_obj,cubeMap),HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(ATFReader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,mipCount),HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsInt,(int)offsetof(ATFReader_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ATFReader_obj_sStaticStorageInfo = 0;
#endif

static ::String ATFReader_obj_sMemberFields[] = {
	HX_HCSTRING("atfFormat","\xaa","\xd3","\x04","\x9c"),
	HX_HCSTRING("cubeMap","\xa7","\x4c","\xd0","\x8c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("mipCount","\x9b","\x6a","\x51","\x0e"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("readHeader","\x83","\xed","\x7b","\xf6"),
	HX_HCSTRING("readTextures","\xae","\x44","\x04","\xa1"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null()) };

static void ATFReader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ATFReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ATFReader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ATFReader_obj::__mClass,"__mClass");
};

#endif

hx::Class ATFReader_obj::__mClass;

void ATFReader_obj::__register()
{
	hx::Object *dummy = new ATFReader_obj;
	ATFReader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.atf.ATFReader","\x8c","\x6b","\x52","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ATFReader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ATFReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ATFReader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ATFReader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ATFReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ATFReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace atf
