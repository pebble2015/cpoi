// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10Native.java
#include <org/apache/poi/poifs/filesystem/Ole10Native_EncodingMode.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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
            namespace poifs
            {
                namespace filesystem
                {
typedef ::SubArray< ::org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode, ::java::lang::EnumArray > Ole10Native_EncodingModeArray;
                } // filesystem
            } // poifs
        } // poi
    } // apache
} // org

org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::Ole10Native_EncodingMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::Ole10Native_EncodingMode(::java::lang::String* name, int ordinal)
    : Ole10Native_EncodingMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::parsed = new ::org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode(u"parsed"_j, 0);
org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::unparsed = new ::org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode(u"unparsed"_j, 1);
org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::compact = new ::org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode(u"compact"_j, 2);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.Ole10Native.EncodingMode", 56);
    return c;
}

org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::valueOf(::java::lang::String* a0)
{
    if(compact->toString()->equals(a0))
        return compact;
    if(parsed->toString()->equals(a0))
        return parsed;
    if(unparsed->toString()->equals(a0))
        return unparsed;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::poifs::filesystem::Ole10Native_EncodingModeArray* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::values()
{
    return new org::apache::poi::poifs::filesystem::Ole10Native_EncodingModeArray({
        compact,
        parsed,
        unparsed,
    });
}

java::lang::Class* org::apache::poi::poifs::filesystem::Ole10Native_EncodingMode::getClass0()
{
    return class_();
}

