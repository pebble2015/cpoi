// Generated from /POI/java/org/apache/poi/common/usermodel/HyperlinkType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fwd-POI.hpp>
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
typedef ::SubArray< ::poi::common::usermodel::HyperlinkType, ::java::lang::EnumArray > HyperlinkTypeArray;
        } // usermodel
    } // common
} // poi

struct default_init_tag;

class poi::common::usermodel::HyperlinkType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HyperlinkType *NONE;
    static HyperlinkType *URL;
    static HyperlinkType *DOCUMENT;
    static HyperlinkType *EMAIL;
    static HyperlinkType *FILE;

private:
    int32_t code {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t code);

private:
    static ::java::util::Map* map_;

public:
    int32_t getCode();
    static HyperlinkType* forInt(int32_t code);

    // Generated

private:
    HyperlinkType(::java::lang::String* name, int ordinal, int32_t code);
protected:
    HyperlinkType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& map();

public:
    static HyperlinkType* valueOf(::java::lang::String* a0);
    static HyperlinkTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
