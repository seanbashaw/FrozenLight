// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2cd113ad60e10261_30_new,"EReg","new",0x8b859e81,"EReg.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",30,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_38_match,"EReg","match",0x18fda1a6,"EReg.match","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",38,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_47_matched,"EReg","matched",0x8ce62f85,"EReg.matched","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",47,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_64_matchedPos,"EReg","matchedPos",0x7007a70f,"EReg.matchedPos","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",64,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_67_matchSub,"EReg","matchSub",0xbc75cb7a,"EReg.matchSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",67,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_76_split,"EReg","split",0x9749433b,"EReg.split","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",76,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_100_replace,"EReg","replace",0xae923ad5,"EReg.replace","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",100,0xa4513ee9)
static const ::String _hx_array_data_2dda4a0f_10[] = {
	HX_("$",24,00,00,00),
};
static const ::String _hx_array_data_2dda4a0f_11[] = {
	HX_("$",24,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_151_map,"EReg","map",0x8b84d8bd,"EReg.map","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",151,0xa4513ee9)

void EReg_obj::__construct(::String r,::String opt){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_30_new)
HXLINE(  31)		::Array< ::String > a = opt.split(HX_("g",67,00,00,00));
HXLINE(  32)		this->global = (a->length > (int)1);
HXLINE(  33)		if (this->global) {
HXLINE(  34)			opt = a->join(HX_("",00,00,00,00));
            		}
HXLINE(  35)		this->r = _hx_regexp_new_options(r,opt);
            	}

Dynamic EReg_obj::__CreateEmpty() { return new EReg_obj; }

void *EReg_obj::_hx_vtable = 0;

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EReg_obj > _hx_result = new EReg_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool EReg_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dda4a0f;
}

bool EReg_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_38_match)
HXLINE(  39)		bool p = _hx_regexp_match(this->r,s,(int)0,s.length);
HXLINE(  40)		if (p) {
HXLINE(  41)			this->last = s;
            		}
            		else {
HXLINE(  43)			this->last = null();
            		}
HXLINE(  44)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched(int n){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_47_matched)
HXLINE(  48)		::String m = _hx_regexp_matched(this->r,n);
HXLINE(  49)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

 ::Dynamic EReg_obj::matchedPos(){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_64_matchedPos)
HXDLIN(  64)		return _hx_regexp_matched_pos(this->r,(int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

bool EReg_obj::matchSub(::String s,int pos,hx::Null< int >  __o_len){
int len = __o_len.Default(-1);
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_67_matchSub)
HXLINE(  68)		int p;
HXDLIN(  68)		if ((len < (int)0)) {
HXLINE(  68)			p = (s.length - pos);
            		}
            		else {
HXLINE(  68)			p = len;
            		}
HXDLIN(  68)		bool p1 = _hx_regexp_match(this->r,s,pos,p);
HXLINE(  69)		if (p1) {
HXLINE(  70)			this->last = s;
            		}
            		else {
HXLINE(  72)			this->last = null();
            		}
HXLINE(  73)		return p1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(EReg_obj,matchSub,return )

::Array< ::String > EReg_obj::split(::String s){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_76_split)
HXLINE(  77)		int pos = (int)0;
HXLINE(  78)		int len = s.length;
HXLINE(  79)		::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE(  80)		bool first = true;
HXLINE(  81)		while(_hx_regexp_match(this->r,s,pos,len)){
HXLINE(  84)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			if ((( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE(  85)				_hx_tmp = !(first);
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  86)				if ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) == s.length)) {
HXLINE(  87)					goto _hx_goto_5;
            				}
HXLINE(  88)				 ::Dynamic p1 = p;
HXDLIN(  88)				p1->__SetField(HX_("pos",94,5d,55,00),(( (int)(p1->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + (int)1),hx::paccDynamic);
            			}
HXLINE(  90)			a->push(s.substr(pos,(( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - pos)));
HXLINE(  91)			int tot = ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) )) - pos);
HXLINE(  92)			pos = (pos + tot);
HXLINE(  93)			len = (len - tot);
HXLINE(  94)			first = false;
HXLINE(  81)			if (!(this->global)) {
HXLINE(  81)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE(  96)		a->push(s.substr(pos,len));
HXLINE(  97)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,split,return )

::String EReg_obj::replace(::String s,::String by){
            	HX_GC_STACKFRAME(&_hx_pos_2cd113ad60e10261_100_replace)
HXLINE( 101)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 102)		int pos = (int)0;
HXLINE( 103)		int len = s.length;
HXLINE( 104)		::Array< ::String > a = by.split(HX_("$",24,00,00,00));
HXLINE( 105)		bool first = true;
HXLINE( 106)		while(_hx_regexp_match(this->r,s,pos,len)){
HXLINE( 109)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			if ((( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE( 110)				_hx_tmp = !(first);
            			}
            			else {
HXLINE( 110)				_hx_tmp = false;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 111)				if ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) == s.length)) {
HXLINE( 112)					goto _hx_goto_7;
            				}
HXLINE( 113)				 ::Dynamic p1 = p;
HXDLIN( 113)				p1->__SetField(HX_("pos",94,5d,55,00),(( (int)(p1->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + (int)1),hx::paccDynamic);
            			}
HXLINE( 115)			{
HXLINE( 115)				 ::Dynamic len1 = (( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - pos);
HXDLIN( 115)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 115)					b->flush();
            				}
HXDLIN( 115)				if (hx::IsNull( b->b )) {
HXLINE( 115)					b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos,len1));
            				}
            				else {
HXLINE( 115)					::Array< ::String > b1 = b->b;
HXDLIN( 115)					b1->push(s.substr(pos,len1));
            				}
            			}
HXLINE( 116)			if ((a->length > (int)0)) {
HXLINE( 117)				::String x = a->__get((int)0);
HXDLIN( 117)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 117)					b->flush();
            				}
HXDLIN( 117)				if (hx::IsNull( b->b )) {
HXLINE( 117)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 117)					::Array< ::String > b2 = b->b;
HXDLIN( 117)					b2->push(::Std_obj::string(x));
            				}
            			}
HXLINE( 118)			int i = (int)1;
HXLINE( 119)			while((i < a->length)){
HXLINE( 120)				::String k = a->__get(i);
HXLINE( 121)				 ::Dynamic c = k.charCodeAt((int)0);
HXLINE( 123)				bool _hx_tmp1;
HXDLIN( 123)				if (hx::IsGreaterEq( c,(int)49 )) {
HXLINE( 123)					_hx_tmp1 = hx::IsLessEq( c,(int)57 );
            				}
            				else {
HXLINE( 123)					_hx_tmp1 = false;
            				}
HXDLIN( 123)				if (_hx_tmp1) {
HXLINE( 124)					 ::Dynamic p2;
HXDLIN( 124)					try {
            						HX_STACK_CATCHABLE(::String, 0);
HXLINE( 124)						 ::Dynamic p3 = this->r;
HXDLIN( 124)						p2 = _hx_regexp_matched_pos(p3,(::Std_obj::_hx_int(c) - (int)48));
            					}
            					catch( ::Dynamic _hx_e){
            						if (_hx_e.IsClass< ::String >() ){
            							HX_STACK_BEGIN_CATCH
            							::String e = _hx_e;
HXLINE( 124)							p2 = null();
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
HXLINE( 125)					if (hx::IsNull( p2 )) {
HXLINE( 126)						{
HXLINE( 126)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 126)								b->flush();
            							}
HXDLIN( 126)							if (hx::IsNull( b->b )) {
HXLINE( 126)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_2dda4a0f_10,1);
            							}
            							else {
HXLINE( 126)								b->b->push(HX_("$",24,00,00,00));
            							}
            						}
HXLINE( 127)						{
HXLINE( 127)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 127)								b->flush();
            							}
HXDLIN( 127)							if (hx::IsNull( b->b )) {
HXLINE( 127)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(k));
            							}
            							else {
HXLINE( 127)								::Array< ::String > b3 = b->b;
HXDLIN( 127)								b3->push(::Std_obj::string(k));
            							}
            						}
            					}
            					else {
HXLINE( 129)						{
HXLINE( 129)							int pos1 = ( (int)(p2->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) );
HXDLIN( 129)							 ::Dynamic len2 = p2->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic);
HXDLIN( 129)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 129)								b->flush();
            							}
HXDLIN( 129)							if (hx::IsNull( b->b )) {
HXLINE( 129)								b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos1,len2));
            							}
            							else {
HXLINE( 129)								::Array< ::String > b4 = b->b;
HXDLIN( 129)								b4->push(s.substr(pos1,len2));
            							}
            						}
HXLINE( 130)						{
HXLINE( 130)							 ::Dynamic len3 = (k.length - (int)1);
HXDLIN( 130)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 130)								b->flush();
            							}
HXDLIN( 130)							if (hx::IsNull( b->b )) {
HXLINE( 130)								b->b = ::Array_obj< ::String >::__new(1)->init(0,k.substr((int)1,len3));
            							}
            							else {
HXLINE( 130)								::Array< ::String > b5 = b->b;
HXDLIN( 130)								b5->push(k.substr((int)1,len3));
            							}
            						}
            					}
            				}
            				else {
HXLINE( 132)					if (hx::IsNull( c )) {
HXLINE( 133)						{
HXLINE( 133)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 133)								b->flush();
            							}
HXDLIN( 133)							if (hx::IsNull( b->b )) {
HXLINE( 133)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_2dda4a0f_11,1);
            							}
            							else {
HXLINE( 133)								b->b->push(HX_("$",24,00,00,00));
            							}
            						}
HXLINE( 134)						i = (i + (int)1);
HXLINE( 135)						::String k2 = a->__get(i);
HXLINE( 136)						bool _hx_tmp2;
HXDLIN( 136)						if (hx::IsNotNull( k2 )) {
HXLINE( 136)							_hx_tmp2 = (k2.length > (int)0);
            						}
            						else {
HXLINE( 136)							_hx_tmp2 = false;
            						}
HXDLIN( 136)						if (_hx_tmp2) {
HXLINE( 137)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 137)								b->flush();
            							}
HXDLIN( 137)							if (hx::IsNull( b->b )) {
HXLINE( 137)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(k2));
            							}
            							else {
HXLINE( 137)								::Array< ::String > b6 = b->b;
HXDLIN( 137)								b6->push(::Std_obj::string(k2));
            							}
            						}
            					}
            					else {
HXLINE( 139)						::String x1 = (HX_("$",24,00,00,00) + k);
HXDLIN( 139)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 139)							b->flush();
            						}
HXDLIN( 139)						if (hx::IsNull( b->b )) {
HXLINE( 139)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 139)							::Array< ::String > b7 = b->b;
HXDLIN( 139)							b7->push(::Std_obj::string(x1));
            						}
            					}
            				}
HXLINE( 140)				i = (i + (int)1);
            			}
HXLINE( 142)			int tot = ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) )) - pos);
HXLINE( 143)			pos = (pos + tot);
HXLINE( 144)			len = (len - tot);
HXLINE( 145)			first = false;
HXLINE( 106)			if (!(this->global)) {
HXLINE( 106)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
HXLINE( 147)		{
HXLINE( 147)			if (hx::IsNotNull( b->charBuf )) {
HXLINE( 147)				b->flush();
            			}
HXDLIN( 147)			if (hx::IsNull( b->b )) {
HXLINE( 147)				b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos,len));
            			}
            			else {
HXLINE( 147)				::Array< ::String > b8 = b->b;
HXDLIN( 147)				b8->push(s.substr(pos,len));
            			}
            		}
HXLINE( 148)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )

::String EReg_obj::map(::String s, ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_2cd113ad60e10261_151_map)
HXLINE( 152)		int offset = (int)0;
HXLINE( 153)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 154)		while(true){
HXLINE( 155)			if ((offset >= s.length)) {
HXLINE( 156)				goto _hx_goto_12;
            			}
            			else {
HXLINE( 157)				if (!(this->matchSub(s,offset,null()))) {
HXLINE( 158)					{
HXLINE( 158)						::String x = s.substr(offset,null());
HXDLIN( 158)						if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 158)							buf->flush();
            						}
HXDLIN( 158)						if (hx::IsNull( buf->b )) {
HXLINE( 158)							buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 158)							::Array< ::String > buf1 = buf->b;
HXDLIN( 158)							buf1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 159)					goto _hx_goto_12;
            				}
            			}
HXLINE( 161)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE( 162)			{
HXLINE( 162)				::String x1 = s.substr(offset,(( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - offset));
HXDLIN( 162)				if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 162)					buf->flush();
            				}
HXDLIN( 162)				if (hx::IsNull( buf->b )) {
HXLINE( 162)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            				}
            				else {
HXLINE( 162)					::Array< ::String > buf2 = buf->b;
HXDLIN( 162)					buf2->push(::Std_obj::string(x1));
            				}
            			}
HXLINE( 163)			{
HXLINE( 163)				::String x2 = ( (::String)(f(hx::ObjectPtr<OBJ_>(this))) );
HXDLIN( 163)				if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 163)					buf->flush();
            				}
HXDLIN( 163)				if (hx::IsNull( buf->b )) {
HXLINE( 163)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            				}
            				else {
HXLINE( 163)					::Array< ::String > buf3 = buf->b;
HXDLIN( 163)					buf3->push(::Std_obj::string(x2));
            				}
            			}
HXLINE( 164)			if ((( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE( 165)				{
HXLINE( 165)					::String x3 = s.substr(( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ),(int)1);
HXDLIN( 165)					if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 165)						buf->flush();
            					}
HXDLIN( 165)					if (hx::IsNull( buf->b )) {
HXLINE( 165)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            					}
            					else {
HXLINE( 165)						::Array< ::String > buf4 = buf->b;
HXDLIN( 165)						buf4->push(::Std_obj::string(x3));
            					}
            				}
HXLINE( 166)				offset = (( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + (int)1);
            			}
            			else {
HXLINE( 169)				offset = (( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ));
            			}
HXLINE( 154)			if (!(this->global)) {
HXLINE( 154)				goto _hx_goto_12;
            			}
            		}
            		_hx_goto_12:;
HXLINE( 171)		bool _hx_tmp;
HXDLIN( 171)		bool _hx_tmp1;
HXDLIN( 171)		if (!(this->global)) {
HXLINE( 171)			_hx_tmp1 = (offset > (int)0);
            		}
            		else {
HXLINE( 171)			_hx_tmp1 = false;
            		}
HXDLIN( 171)		if (_hx_tmp1) {
HXLINE( 171)			_hx_tmp = (offset < s.length);
            		}
            		else {
HXLINE( 171)			_hx_tmp = false;
            		}
HXDLIN( 171)		if (_hx_tmp) {
HXLINE( 172)			::String x4 = s.substr(offset,null());
HXDLIN( 172)			if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 172)				buf->flush();
            			}
HXDLIN( 172)			if (hx::IsNull( buf->b )) {
HXLINE( 172)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            			}
            			else {
HXLINE( 172)				::Array< ::String > buf5 = buf->b;
HXDLIN( 172)				buf5->push(::Std_obj::string(x4));
            			}
            		}
HXLINE( 173)		return buf->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,map,return )


hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt) {
	hx::ObjectPtr< EReg_obj > __this = new EReg_obj();
	__this->__construct(r,opt);
	return __this;
}

hx::ObjectPtr< EReg_obj > EReg_obj::__alloc(hx::Ctx *_hx_ctx,::String r,::String opt) {
	EReg_obj *__this = (EReg_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EReg_obj), true, "EReg"));
	*(void **)__this = EReg_obj::_hx_vtable;
	__this->__construct(r,opt);
	return __this;
}

EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

hx::Val EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return hx::Val( last ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return hx::Val( match_dyn() ); }
		if (HX_FIELD_EQ(inName,"split") ) { return hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return hx::Val( global ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return hx::Val( matched_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return hx::Val( replace_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matchSub") ) { return hx::Val( matchSub_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return hx::Val( matchedPos_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EReg_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EReg_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EReg_obj_sStaticStorageInfo = 0;
#endif

static ::String EReg_obj_sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("matched","\xe4","\x3c","\x7c","\x89"),
	HX_HCSTRING("matchedPos","\x10","\xff","\xc2","\xcb"),
	HX_HCSTRING("matchSub","\x3b","\x71","\x2b","\xc3"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	::String(null()) };

static void EReg_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EReg_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#endif

hx::Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	hx::Object *dummy = new EReg_obj;
	EReg_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EReg_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EReg_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EReg_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EReg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EReg_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
