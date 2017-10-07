// Generated from /POI/java/org/apache/poi/ss/usermodel/FontCharset.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FontCharset, ::java::lang::EnumArray > FontCharsetArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::FontCharset final
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
    static FontCharset *HANGEUL;
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
    static FontCharset *THAI;
    static FontCharset *EASTEUROPE;
    static FontCharset *OEM;

private:
    int32_t charset {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t value);

public:
    int32_t getValue();

private:
    static FontCharsetArray* _table_;

public:
    static FontCharset* valueOf(int32_t value);

    // Generated

private:
    FontCharset(::java::lang::String* name, int ordinal, int32_t value);
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
