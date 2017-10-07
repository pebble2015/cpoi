// Generated from /POI/commons-collections4-4.1.jar
#include <org/apache/commons/collections4/bidimap/TreeBidiMap_DataElement.hpp>

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

extern void unimplemented_(const char16_t* name);
org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::TreeBidiMap_DataElement(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::commons::collections4::bidimap::TreeBidiMap_DataElementArray*& org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::$VALUES()
{
    clinit();
    return $VALUES_;
}
org::apache::commons::collections4::bidimap::TreeBidiMap_DataElementArray* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::$VALUES_;
org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::KEY;
org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::VALUE;

/* private: void ::org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* description) */
java::lang::String* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::toString()");
    return 0;
}

org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::valueOf(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::valueOf(::java::lang::String* name)");
    return 0;
}

org::apache::commons::collections4::bidimap::TreeBidiMap_DataElementArray* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::values()
{ /* stub */
    clinit();
    unimplemented_(u"org::apache::commons::collections4::bidimap::TreeBidiMap_DataElementArray* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.commons.collections4.bidimap.TreeBidiMap.DataElement", 63);
    return c;
}

java::lang::Enum* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* org::apache::commons::collections4::bidimap::TreeBidiMap_DataElement::getClass0()
{
    return class_();
}

