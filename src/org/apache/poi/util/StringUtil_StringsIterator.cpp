// Generated from /POI/java/org/apache/poi/util/StringUtil.java
#include <org/apache/poi/util/StringUtil_StringsIterator.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::StringUtil_StringsIterator::StringUtil_StringsIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::StringUtil_StringsIterator::StringUtil_StringsIterator(::java::lang::StringArray* strings) 
    : StringUtil_StringsIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(strings);
}

void poi::util::StringUtil_StringsIterator::init()
{
    strings = (new ::java::lang::StringArray({}));
    position = int32_t(0);
}

void poi::util::StringUtil_StringsIterator::ctor(::java::lang::StringArray* strings)
{
    super::ctor();
    init();
    if(strings != nullptr) {
        this->strings = npc(strings)->clone();
    }
}

bool poi::util::StringUtil_StringsIterator::hasNext()
{
    return position < npc(strings)->length;
}

java::lang::String* poi::util::StringUtil_StringsIterator::next()
{
    auto ourPos = position++;
    if(ourPos >= npc(strings)->length) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(ourPos);
    }
    return (*strings)[ourPos];
}

void poi::util::StringUtil_StringsIterator::remove()
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::StringUtil_StringsIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.StringUtil.StringsIterator", 46);
    return c;
}

java::lang::Class* poi::util::StringUtil_StringsIterator::getClass0()
{
    return class_();
}

