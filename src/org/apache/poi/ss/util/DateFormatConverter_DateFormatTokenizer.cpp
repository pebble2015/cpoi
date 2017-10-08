// Generated from /POI/java/org/apache/poi/ss/util/DateFormatConverter.java
#include <org/apache/poi/ss/util/DateFormatConverter_DateFormatTokenizer.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::DateFormatConverter_DateFormatTokenizer::DateFormatConverter_DateFormatTokenizer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::DateFormatConverter_DateFormatTokenizer::DateFormatConverter_DateFormatTokenizer(::java::lang::String* format) 
    : DateFormatConverter_DateFormatTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

void poi::ss::util::DateFormatConverter_DateFormatTokenizer::ctor(::java::lang::String* format)
{
    super::ctor();
    this->format = format;
}

java::lang::String* poi::ss::util::DateFormatConverter_DateFormatTokenizer::getNextToken()
{
    if(pos >= npc(format)->length()) {
        return nullptr;
    }
    auto subStart = pos;
    auto curChar = npc(format)->charAt(pos);
    ++pos;
    if(curChar == u'\'') {
        while ((pos < npc(format)->length()) && ((curChar = npc(format)->charAt(pos)) != u'\'')) {
            ++pos;
        }
        if(pos < npc(format)->length()) {
            ++pos;
        }
    } else {
        auto activeChar = curChar;
        while ((pos < npc(format)->length()) && ((curChar = npc(format)->charAt(pos)) == activeChar)) {
            ++pos;
        }
    }
    return npc(format)->substring(subStart, pos);
}

java::lang::StringArray* poi::ss::util::DateFormatConverter_DateFormatTokenizer::tokenize(::java::lang::String* format)
{
    clinit();
    ::java::util::List* result = new ::java::util::ArrayList();
    auto tokenizer = new DateFormatConverter_DateFormatTokenizer(format);
    ::java::lang::String* token;
    while ((token = npc(tokenizer)->getNextToken()) != nullptr) {
        npc(result)->add(static_cast< ::java::lang::Object* >(token));
    }
    return java_cast< ::java::lang::StringArray* >(npc(result)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::java::lang::StringArray(int32_t(0)))));
}

java::lang::String* poi::ss::util::DateFormatConverter_DateFormatTokenizer::toString()
{
    auto result = new ::java::lang::StringBuilder();
    auto tokenizer = new DateFormatConverter_DateFormatTokenizer(format);
    ::java::lang::String* token;
    while ((token = npc(tokenizer)->getNextToken()) != nullptr) {
        if(npc(result)->length() > 0) {
            npc(result)->append(u", "_j);
        }
        npc(npc(npc(result)->append(u"["_j))->append(token))->append(u"]"_j);
    }
    return npc(result)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::DateFormatConverter_DateFormatTokenizer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.DateFormatConverter.DateFormatTokenizer", 62);
    return c;
}

java::lang::Class* poi::ss::util::DateFormatConverter_DateFormatTokenizer::getClass0()
{
    return class_();
}

