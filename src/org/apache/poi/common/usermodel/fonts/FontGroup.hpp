// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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
typedef ::SubArray< ::poi::common::usermodel::fonts::FontGroup, ::java::lang::EnumArray > FontGroupArray;
            } // fonts
        } // usermodel
    } // common
} // poi

struct default_init_tag;

class poi::common::usermodel::fonts::FontGroup final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FontGroup *LATIN;
    static FontGroup *EAST_ASIAN;
    static FontGroup *SYMBOL;
    static FontGroup *COMPLEX_SCRIPT;

private:
    static ::java::util::NavigableMap* UCS_RANGES_;

public:
    static ::java::util::List* getFontGroupRanges(::java::lang::String* runText);
    static FontGroup* getFontGroupFirst(::java::lang::String* runText);

private:
    static FontGroup* lookup(int32_t codepoint);

    // Generated

public:
    FontGroup(::java::lang::String* name, int ordinal);
protected:
    FontGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::NavigableMap*& UCS_RANGES();

public:
    static FontGroup* valueOf(::java::lang::String* a0);
    static FontGroupArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FontGroup_FontGroupRange;
    friend class FontGroup_Range;
};
