// Generated from /POI/java/org/apache/poi/sl/usermodel/TextRun.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::TextRun_TextCap, ::java::lang::EnumArray > TextRun_TextCapArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::TextRun_TextCap final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TextRun_TextCap *NONE;
    static TextRun_TextCap *SMALL;
    static TextRun_TextCap *ALL;

    // Generated

public:
    TextRun_TextCap(::java::lang::String* name, int ordinal);
protected:
    TextRun_TextCap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextRun_TextCap* valueOf(::java::lang::String* a0);
    static TextRun_TextCapArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextRun;
    friend class TextRun_FieldType;
};
