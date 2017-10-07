// Generated from /POI/java/org/apache/poi/ss/usermodel/HorizontalAlignment.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::HorizontalAlignment, ::java::lang::EnumArray > HorizontalAlignmentArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::HorizontalAlignment final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HorizontalAlignment *GENERAL;
    static HorizontalAlignment *LEFT;
    static HorizontalAlignment *CENTER;
    static HorizontalAlignment *RIGHT;
    static HorizontalAlignment *FILL;
    static HorizontalAlignment *JUSTIFY;
    static HorizontalAlignment *CENTER_SELECTION;
    static HorizontalAlignment *DISTRIBUTED;

public:
    int16_t getCode();
    static HorizontalAlignment* forInt(int32_t code);

    // Generated
    HorizontalAlignment(::java::lang::String* name, int ordinal);
protected:
    HorizontalAlignment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static HorizontalAlignment* valueOf(::java::lang::String* a0);
    static HorizontalAlignmentArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
