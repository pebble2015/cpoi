// Generated from /POI/java/org/apache/poi/wp/usermodel/HeaderFooterType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/wp/usermodel/fwd-POI.hpp>
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
            namespace wp
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::wp::usermodel::HeaderFooterType, ::java::lang::EnumArray > HeaderFooterTypeArray;
                } // usermodel
            } // wp
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::wp::usermodel::HeaderFooterType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HeaderFooterType *DEFAULT;
    static HeaderFooterType *EVEN;
    static HeaderFooterType *FIRST;

private:
    int32_t code {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t i);

public:
    int32_t toInt();
    static HeaderFooterType* forInt(int32_t i);

    // Generated

private:
    HeaderFooterType(::java::lang::String* name, int ordinal, int32_t i);
protected:
    HeaderFooterType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static HeaderFooterType* valueOf(::java::lang::String* a0);
    static HeaderFooterTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
