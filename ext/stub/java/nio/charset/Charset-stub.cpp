// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/charset/Charset.hpp>

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

extern void unimplemented_(const char16_t* name);
java::nio::charset::Charset::Charset(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::charset::Charset::Charset(::java::lang::String* canonicalName, ::java::lang::StringArray* aliases)
    : Charset(*static_cast< ::default_init_tag* >(0))
{
    ctor(canonicalName, aliases);
}

std::atomic< java::lang::String* >& java::nio::charset::Charset::bugLevel()
{
    clinit();
    return bugLevel_;
}
std::atomic< java::lang::String* > java::nio::charset::Charset::bugLevel_;
std::atomic< java::lang::ObjectArray* >& java::nio::charset::Charset::cache1()
{
    clinit();
    return cache1_;
}
std::atomic< java::lang::ObjectArray* > java::nio::charset::Charset::cache1_;
std::atomic< java::lang::ObjectArray* >& java::nio::charset::Charset::cache2()
{
    clinit();
    return cache2_;
}
std::atomic< java::lang::ObjectArray* > java::nio::charset::Charset::cache2_;
std::atomic< java::nio::charset::Charset* >& java::nio::charset::Charset::defaultCharset_()
{
    clinit();
    return defaultCharset__;
}
std::atomic< java::nio::charset::Charset* > java::nio::charset::Charset::defaultCharset__;
java::lang::ThreadLocal*& java::nio::charset::Charset::gate()
{
    clinit();
    return gate_;
}
java::lang::ThreadLocal* java::nio::charset::Charset::gate_;
java::nio::charset::spi::CharsetProvider*& java::nio::charset::Charset::standardProvider()
{
    clinit();
    return standardProvider_;
}
java::nio::charset::spi::CharsetProvider* java::nio::charset::Charset::standardProvider_;

void ::java::nio::charset::Charset::ctor(::java::lang::String* canonicalName, ::java::lang::StringArray* aliases)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::charset::Charset::ctor(::java::lang::String* canonicalName, ::java::lang::StringArray* aliases)");
}

java::util::Set* java::nio::charset::Charset::aliases()
{ /* stub */
    unimplemented_(u"java::util::Set* java::nio::charset::Charset::aliases()");
    return 0;
}

bool java::nio::charset::Charset::atBugLevel(::java::lang::String* bl)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::nio::charset::Charset::atBugLevel(::java::lang::String* bl)");
    return 0;
}

java::util::SortedMap* java::nio::charset::Charset::availableCharsets()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::SortedMap* java::nio::charset::Charset::availableCharsets()");
    return 0;
}

/* private: void java::nio::charset::Charset::cache(::java::lang::String* charsetName, Charset* cs) */
bool java::nio::charset::Charset::canEncode()
{ /* stub */
    unimplemented_(u"bool java::nio::charset::Charset::canEncode()");
    return 0;
}

/* private: void java::nio::charset::Charset::checkName(::java::lang::String* s) */
int32_t java::nio::charset::Charset::compareTo(Charset* that)
{ /* stub */
    unimplemented_(u"int32_t java::nio::charset::Charset::compareTo(Charset* that)");
    return 0;
}

int32_t java::nio::charset::Charset::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< Charset* >(o));
}

java::nio::CharBuffer* java::nio::charset::Charset::decode(::java::nio::ByteBuffer* bb)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::charset::Charset::decode(::java::nio::ByteBuffer* bb)");
    return 0;
}

java::nio::charset::Charset* java::nio::charset::Charset::defaultCharset()
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::charset::Charset* java::nio::charset::Charset::defaultCharset()");
    return 0;
}

java::lang::String* java::nio::charset::Charset::displayName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::charset::Charset::displayName()");
    return 0;
}

java::lang::String* java::nio::charset::Charset::displayName(::java::util::Locale* locale)
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::charset::Charset::displayName(::java::util::Locale* locale)");
    return 0;
}

java::nio::ByteBuffer* java::nio::charset::Charset::encode(::java::nio::CharBuffer* cb)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::charset::Charset::encode(::java::nio::CharBuffer* cb)");
    return 0;
}

java::nio::ByteBuffer* java::nio::charset::Charset::encode(::java::lang::String* str)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::charset::Charset::encode(::java::lang::String* str)");
    return 0;
}

bool java::nio::charset::Charset::equals(::java::lang::Object* ob)
{ /* stub */
    unimplemented_(u"bool java::nio::charset::Charset::equals(::java::lang::Object* ob)");
    return 0;
}

java::nio::charset::Charset* java::nio::charset::Charset::forName(::java::lang::String* charsetName)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::charset::Charset* java::nio::charset::Charset::forName(::java::lang::String* charsetName)");
    return 0;
}

int32_t java::nio::charset::Charset::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::nio::charset::Charset::hashCode()");
    return 0;
}

bool java::nio::charset::Charset::isRegistered()
{ /* stub */
    unimplemented_(u"bool java::nio::charset::Charset::isRegistered()");
    return 0;
}

bool java::nio::charset::Charset::isSupported(::java::lang::String* charsetName)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::nio::charset::Charset::isSupported(::java::lang::String* charsetName)");
    return 0;
}

/* private: java::nio::charset::Charset* java::nio::charset::Charset::lookup(::java::lang::String* charsetName) */
/* private: java::nio::charset::Charset* java::nio::charset::Charset::lookup2(::java::lang::String* charsetName) */
/* private: java::nio::charset::Charset* java::nio::charset::Charset::lookupExtendedCharset(::java::lang::String* charsetName) */
/* private: java::nio::charset::Charset* java::nio::charset::Charset::lookupViaProviders(::java::lang::String* charsetName) */
java::lang::String* java::nio::charset::Charset::name()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::charset::Charset::name()");
    return 0;
}

/* private: java::util::Iterator* java::nio::charset::Charset::providers() */
/* private: void java::nio::charset::Charset::put(::java::util::Iterator* i, ::java::util::Map* m) */
java::lang::String* java::nio::charset::Charset::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::charset::Charset::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::charset::Charset::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.charset.Charset", 24);
    return c;
}

java::lang::Class* java::nio::charset::Charset::getClass0()
{
    return class_();
}

