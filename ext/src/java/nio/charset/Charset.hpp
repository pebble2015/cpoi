// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/nio/charset/spi/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

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

struct default_init_tag;

class java::nio::charset::Charset
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Set* aliasSet {  };
    ::java::lang::StringArray* aliases_ {  };
    static std::atomic< ::java::lang::String* > bugLevel_;
    static std::atomic< ::java::lang::ObjectArray* > cache1_;
    static std::atomic< ::java::lang::ObjectArray* > cache2_;
    static std::atomic< Charset* > defaultCharset__;
    static ::java::lang::ThreadLocal* gate_;
    ::java::lang::String* name_ {  };
    static ::java::nio::charset::spi::CharsetProvider* standardProvider_;

protected:
    void ctor(::java::lang::String* canonicalName, ::java::lang::StringArray* aliases);

public:
    ::java::util::Set* aliases();

public: /* package */
    static bool atBugLevel(::java::lang::String* bl);

public:
    static ::java::util::SortedMap* availableCharsets();
    /*static void cache(::java::lang::String* charsetName, Charset* cs); (private) */
    virtual bool canEncode();
    /*static void checkName(::java::lang::String* s); (private) */
    int32_t compareTo(Charset* that);
    virtual bool contains(Charset* cs) = 0;
    ::java::nio::CharBuffer* decode(::java::nio::ByteBuffer* bb);
    static Charset* defaultCharset();
    virtual ::java::lang::String* displayName();
    virtual ::java::lang::String* displayName(::java::util::Locale* locale);
    ::java::nio::ByteBuffer* encode(::java::nio::CharBuffer* cb);
    ::java::nio::ByteBuffer* encode(::java::lang::String* str);
    bool equals(::java::lang::Object* ob) override;
    static Charset* forName(::java::lang::String* charsetName);
    int32_t hashCode() override;
    bool isRegistered();
    static bool isSupported(::java::lang::String* charsetName);
    /*static Charset* lookup(::java::lang::String* charsetName); (private) */
    /*static Charset* lookup2(::java::lang::String* charsetName); (private) */
    /*static Charset* lookupExtendedCharset(::java::lang::String* charsetName); (private) */
    /*static Charset* lookupViaProviders(::java::lang::String* charsetName); (private) */
    ::java::lang::String* name();
    virtual CharsetDecoder* newDecoder() = 0;
    virtual CharsetEncoder* newEncoder() = 0;
    /*static ::java::util::Iterator* providers(); (private) */
    /*static void put(::java::util::Iterator* i, ::java::util::Map* m); (private) */
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Charset(::java::lang::String* canonicalName, ::java::lang::StringArray* aliases);
protected:
    Charset(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    static std::atomic< ::java::lang::String* >& bugLevel();
    static std::atomic< ::java::lang::ObjectArray* >& cache1();
    static std::atomic< ::java::lang::ObjectArray* >& cache2();
    static std::atomic< Charset* >& defaultCharset_();
    static ::java::lang::ThreadLocal*& gate();
    static ::java::nio::charset::spi::CharsetProvider*& standardProvider();
    virtual ::java::lang::Class* getClass0();
};
