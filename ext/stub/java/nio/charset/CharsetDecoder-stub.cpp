// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/charset/CharsetDecoder.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::charset::CharsetDecoder::CharsetDecoder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::charset::CharsetDecoder::CharsetDecoder(Charset* cs, float averageCharsPerByte, float maxCharsPerByte)
    : CharsetDecoder(*static_cast< ::default_init_tag* >(0))
{
    ctor(cs, averageCharsPerByte, maxCharsPerByte);
}

bool& java::nio::charset::CharsetDecoder::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::nio::charset::CharsetDecoder::$assertionsDisabled_;
constexpr int32_t java::nio::charset::CharsetDecoder::ST_CODING;
constexpr int32_t java::nio::charset::CharsetDecoder::ST_END;
constexpr int32_t java::nio::charset::CharsetDecoder::ST_FLUSHED;
constexpr int32_t java::nio::charset::CharsetDecoder::ST_RESET;
java::lang::StringArray*& java::nio::charset::CharsetDecoder::stateNames()
{
    clinit();
    return stateNames_;
}
java::lang::StringArray* java::nio::charset::CharsetDecoder::stateNames_;

void ::java::nio::charset::CharsetDecoder::ctor(Charset* cs, float averageCharsPerByte, float maxCharsPerByte)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::charset::CharsetDecoder::ctor(Charset* cs, float averageCharsPerByte, float maxCharsPerByte)");
}

/* private: void ::java::nio::charset::CharsetDecoder::ctor(Charset* cs, float averageCharsPerByte, float maxCharsPerByte, ::java::lang::String* replacement) */
float java::nio::charset::CharsetDecoder::averageCharsPerByte()
{ /* stub */
    unimplemented_(u"float java::nio::charset::CharsetDecoder::averageCharsPerByte()");
    return 0;
}

java::nio::charset::Charset* java::nio::charset::CharsetDecoder::charset()
{ /* stub */
    unimplemented_(u"java::nio::charset::Charset* java::nio::charset::CharsetDecoder::charset()");
    return 0;
}

java::nio::CharBuffer* java::nio::charset::CharsetDecoder::decode(::java::nio::ByteBuffer* in)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::charset::CharsetDecoder::decode(::java::nio::ByteBuffer* in)");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::decode(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out, bool endOfInput)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::decode(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out, bool endOfInput)");
    return 0;
}

java::nio::charset::Charset* java::nio::charset::CharsetDecoder::detectedCharset()
{ /* stub */
    unimplemented_(u"java::nio::charset::Charset* java::nio::charset::CharsetDecoder::detectedCharset()");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::flush(::java::nio::CharBuffer* out)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::flush(::java::nio::CharBuffer* out)");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::implFlush(::java::nio::CharBuffer* out)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetDecoder::implFlush(::java::nio::CharBuffer* out)");
    return 0;
}

void java::nio::charset::CharsetDecoder::implOnMalformedInput(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetDecoder::implOnMalformedInput(CodingErrorAction* newAction)");
}

void java::nio::charset::CharsetDecoder::implOnUnmappableCharacter(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetDecoder::implOnUnmappableCharacter(CodingErrorAction* newAction)");
}

void java::nio::charset::CharsetDecoder::implReplaceWith(::java::lang::String* newReplacement)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetDecoder::implReplaceWith(::java::lang::String* newReplacement)");
}

void java::nio::charset::CharsetDecoder::implReset()
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetDecoder::implReset()");
}

bool java::nio::charset::CharsetDecoder::isAutoDetecting()
{ /* stub */
    unimplemented_(u"bool java::nio::charset::CharsetDecoder::isAutoDetecting()");
    return 0;
}

bool java::nio::charset::CharsetDecoder::isCharsetDetected()
{ /* stub */
    unimplemented_(u"bool java::nio::charset::CharsetDecoder::isCharsetDetected()");
    return 0;
}

java::nio::charset::CodingErrorAction* java::nio::charset::CharsetDecoder::malformedInputAction()
{ /* stub */
    unimplemented_(u"java::nio::charset::CodingErrorAction* java::nio::charset::CharsetDecoder::malformedInputAction()");
    return 0;
}

float java::nio::charset::CharsetDecoder::maxCharsPerByte()
{ /* stub */
    unimplemented_(u"float java::nio::charset::CharsetDecoder::maxCharsPerByte()");
    return 0;
}

java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::onMalformedInput(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::onMalformedInput(CodingErrorAction* newAction)");
    return 0;
}

java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::onUnmappableCharacter(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::onUnmappableCharacter(CodingErrorAction* newAction)");
    return 0;
}

java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::replaceWith(::java::lang::String* newReplacement)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::replaceWith(::java::lang::String* newReplacement)");
    return 0;
}

java::lang::String* java::nio::charset::CharsetDecoder::replacement()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::charset::CharsetDecoder::replacement()");
    return 0;
}

java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::reset()
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetDecoder* java::nio::charset::CharsetDecoder::reset()");
    return 0;
}

/* private: void java::nio::charset::CharsetDecoder::throwIllegalStateException(int32_t from, int32_t to) */
java::nio::charset::CodingErrorAction* java::nio::charset::CharsetDecoder::unmappableCharacterAction()
{ /* stub */
    unimplemented_(u"java::nio::charset::CodingErrorAction* java::nio::charset::CharsetDecoder::unmappableCharacterAction()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::charset::CharsetDecoder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.charset.CharsetDecoder", 31);
    return c;
}

java::lang::Class* java::nio::charset::CharsetDecoder::getClass0()
{
    return class_();
}

