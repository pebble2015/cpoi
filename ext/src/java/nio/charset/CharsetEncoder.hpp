// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class java::nio::charset::CharsetEncoder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static constexpr int32_t ST_CODING { int32_t(1) };
    static constexpr int32_t ST_END { int32_t(2) };
    static constexpr int32_t ST_FLUSHED { int32_t(3) };
    static constexpr int32_t ST_RESET { int32_t(0) };
    float averageBytesPerChar_ {  };
    ::java::lang::ref::WeakReference* cachedDecoder {  };
    Charset* charset_ {  };
    CodingErrorAction* malformedInputAction_ {  };
    float maxBytesPerChar_ {  };
    ::int8_tArray* replacement_ {  };
    int32_t state {  };
    static ::java::lang::StringArray* stateNames_;
    CodingErrorAction* unmappableCharacterAction_ {  };

protected:
    void ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar);
    void ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar, ::int8_tArray* replacement);

public:
    float averageBytesPerChar();
    /*bool canEncode(::java::nio::CharBuffer* cb); (private) */
    virtual bool canEncode(char16_t c);
    virtual bool canEncode(::java::lang::CharSequence* cs);
    Charset* charset();
    ::java::nio::ByteBuffer* encode(::java::nio::CharBuffer* in);
    CoderResult* encode(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out, bool endOfInput);

public: /* protected */
    virtual CoderResult* encodeLoop(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out) = 0;

public:
    CoderResult* flush(::java::nio::ByteBuffer* out);

public: /* protected */
    virtual CoderResult* implFlush(::java::nio::ByteBuffer* out);
    virtual void implOnMalformedInput(CodingErrorAction* newAction);
    virtual void implOnUnmappableCharacter(CodingErrorAction* newAction);
    virtual void implReplaceWith(::int8_tArray* newReplacement);
    virtual void implReset();

public:
    virtual bool isLegalReplacement(::int8_tArray* repl);
    virtual CodingErrorAction* malformedInputAction();
    float maxBytesPerChar();
    CharsetEncoder* onMalformedInput(CodingErrorAction* newAction);
    CharsetEncoder* onUnmappableCharacter(CodingErrorAction* newAction);
    CharsetEncoder* replaceWith(::int8_tArray* newReplacement);
    ::int8_tArray* replacement();
    CharsetEncoder* reset();
    /*void throwIllegalStateException(int32_t from, int32_t to); (private) */
    virtual CodingErrorAction* unmappableCharacterAction();

    // Generated

public: /* protected */
    CharsetEncoder(Charset* cs, float averageBytesPerChar, float maxBytesPerChar);
    CharsetEncoder(Charset* cs, float averageBytesPerChar, float maxBytesPerChar, ::int8_tArray* replacement);
protected:
    CharsetEncoder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::lang::StringArray*& stateNames();
    virtual ::java::lang::Class* getClass0();
};
