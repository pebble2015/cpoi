// Generated from /POI/commons-collections4-4.1.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
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
        namespace commons
        {
            namespace collections4
            {
                namespace bidimap
                {
typedef ::SubArray< ::org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement, ::java::lang::EnumArray > TreeBidiMap_DataElementArray;
                } // bidimap
            } // collections4
        } // commons
    } // apache
} // org

struct default_init_tag;

class org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static TreeBidiMap_DataElementArray* $VALUES_;

public:
    static TreeBidiMap_DataElement* KEY;
    static TreeBidiMap_DataElement* VALUE;

private:
    ::java::lang::String* description {  };

    /*void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* description); (private) */

public:
    ::java::lang::String* toString() override;
    static TreeBidiMap_DataElement* valueOf(::java::lang::String* name);
    static TreeBidiMap_DataElementArray* values();

    // Generated
    TreeBidiMap_DataElement(::java::lang::String* name, int ordinal);
protected:
    TreeBidiMap_DataElement(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static TreeBidiMap_DataElementArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
