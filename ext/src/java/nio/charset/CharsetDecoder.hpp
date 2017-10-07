// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
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

class java::nio::charset::CharsetDecoder
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
    float averageCharsPerByte_ {  };
    Charset* charset_ {  };
    CodingErrorAction* malformedInputAction_ {  };
    float maxCharsPerByte_ {  };
    ::java::lang::String* replacement_ {  };
    int32_t state {  };
    static ::java::lang::StringArray* stateNames_;
    CodingErrorAction* unmappableCharacterAction_ {  };

protected:
    void ctor(Charset* cs, float averageCharsPerByte, float maxCharsPerByte);
    /*void ctor(Charset* cs, float averageCharsPerByte, float maxCharsPerByte, ::java::lang::String* replacement); (private) */

public:
    float averageCharsPerByte();
    Charset* charset();
    ::java::nio::CharBuffer* decode(::java::nio::ByteBuffer* in);
    CoderResult* decode(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out, bool endOfInput);

public: /* protected */
    virtual CoderResult* decodeLoop(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out) = 0;

public:
    virtual Charset* detectedCharset();
    CoderResult* flush(::java::nio::CharBuffer* out);

public: /* protected */
    virtual CoderResult* implFlush(::java::nio::CharBuffer* out);
    virtual void implOnMalformedInput(CodingErrorAction* newAction);
    virtual void implOnUnmappableCharacter(CodingErrorAction* newAction);
    virtual void implReplaceWith(::java::lang::String* newReplacement);
    virtual void implReset();

public:
    virtual bool isAutoDetecting();
    virtual bool isCharsetDetected();
    virtual CodingErrorAction* malformedInputAction();
    float maxCharsPerByte();
    CharsetDecoder* onMalformedInput(CodingErrorAction* newAction);
    CharsetDecoder* onUnmappableCharacter(CodingErrorAction* newAction);
    CharsetDecoder* replaceWith(::java::lang::String* newReplacement);
    ::java::lang::String* replacement();
    CharsetDecoder* reset();
    /*void throwIllegalStateException(int32_t from, int32_t to); (private) */
    virtual CodingErrorAction* unmappableCharacterAction();

    // Generated

public: /* protected */
    CharsetDecoder(Charset* cs, float averageCharsPerByte, float maxCharsPerByte);
protected:
    CharsetDecoder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::lang::StringArray*& stateNames();
    virtual ::java::lang::Class* getClass0();
};
