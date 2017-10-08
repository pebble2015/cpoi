// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontCharset.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace common
    {
        namespace usermodel
        {
            namespace fonts
            {
typedef ::SubArray< ::poi::common::usermodel::fonts::FontCharset, ::java::lang::EnumArray > FontCharsetArray;
            } // fonts
        } // usermodel
    } // common
} // poi

struct default_init_tag;

class poi::common::usermodel::fonts::FontCharset final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontCharset *ANSI;
    static FontCharset *DEFAULT;
    static FontCharset *SYMBOL;
    static FontCharset *MAC;
    static FontCharset *SHIFTJIS;
    static FontCharset *HANGUL;
    static FontCharset *JOHAB;
    static FontCharset *GB2312;
    static FontCharset *CHINESEBIG5;
    static FontCharset *GREEK;
    static FontCharset *TURKISH;
    static FontCharset *VIETNAMESE;
    static FontCharset *HEBREW;
    static FontCharset *ARABIC;
    static FontCharset *BALTIC;
    static FontCharset *RUSSIAN;
    static FontCharset *THAI_;
    static FontCharset *EASTEUROPE;
    static FontCharset *OEM;

private:
    static FontCharsetArray* _table_;
    int32_t nativeId {  };
    ::java::nio::charset::Charset* charset {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t flag, ::java::lang::String* javaCharsetName);

public:
    ::java::nio::charset::Charset* getCharset();
    int32_t getNativeId();
    static FontCharset* valueOf(int32_t value);

    // Generated

private:
    FontCharset(::java::lang::String* name, int ordinal, int32_t flag, ::java::lang::String* javaCharsetName);
protected:
    FontCharset(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static FontCharsetArray*& _table();

public:
    static FontCharset* valueOf(::java::lang::String* a0);
    static FontCharsetArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
