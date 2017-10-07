// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/charset/CharsetEncoder.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::charset::CharsetEncoder::CharsetEncoder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::charset::CharsetEncoder::CharsetEncoder(Charset* cs, float averageBytesPerChar, float maxBytesPerChar)
    : CharsetEncoder(*static_cast< ::default_init_tag* >(0))
{
    ctor(cs, averageBytesPerChar, maxBytesPerChar);
}

java::nio::charset::CharsetEncoder::CharsetEncoder(Charset* cs, float averageBytesPerChar, float maxBytesPerChar, ::int8_tArray* replacement)
    : CharsetEncoder(*static_cast< ::default_init_tag* >(0))
{
    ctor(cs, averageBytesPerChar, maxBytesPerChar, replacement);
}

bool& java::nio::charset::CharsetEncoder::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::nio::charset::CharsetEncoder::$assertionsDisabled_;
constexpr int32_t java::nio::charset::CharsetEncoder::ST_CODING;
constexpr int32_t java::nio::charset::CharsetEncoder::ST_END;
constexpr int32_t java::nio::charset::CharsetEncoder::ST_FLUSHED;
constexpr int32_t java::nio::charset::CharsetEncoder::ST_RESET;
java::lang::StringArray*& java::nio::charset::CharsetEncoder::stateNames()
{
    clinit();
    return stateNames_;
}
java::lang::StringArray* java::nio::charset::CharsetEncoder::stateNames_;

void ::java::nio::charset::CharsetEncoder::ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::charset::CharsetEncoder::ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar)");
}

void ::java::nio::charset::CharsetEncoder::ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar, ::int8_tArray* replacement)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::charset::CharsetEncoder::ctor(Charset* cs, float averageBytesPerChar, float maxBytesPerChar, ::int8_tArray* replacement)");
}

float java::nio::charset::CharsetEncoder::averageBytesPerChar()
{ /* stub */
    unimplemented_(u"float java::nio::charset::CharsetEncoder::averageBytesPerChar()");
    return 0;
}

/* private: bool java::nio::charset::CharsetEncoder::canEncode(::java::nio::CharBuffer* cb) */
bool java::nio::charset::CharsetEncoder::canEncode(char16_t c)
{ /* stub */
    unimplemented_(u"bool java::nio::charset::CharsetEncoder::canEncode(char16_t c)");
    return 0;
}

bool java::nio::charset::CharsetEncoder::canEncode(::java::lang::CharSequence* cs)
{ /* stub */
    unimplemented_(u"bool java::nio::charset::CharsetEncoder::canEncode(::java::lang::CharSequence* cs)");
    return 0;
}

java::nio::charset::Charset* java::nio::charset::CharsetEncoder::charset()
{ /* stub */
    unimplemented_(u"java::nio::charset::Charset* java::nio::charset::CharsetEncoder::charset()");
    return 0;
}

java::nio::ByteBuffer* java::nio::charset::CharsetEncoder::encode(::java::nio::CharBuffer* in)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::charset::CharsetEncoder::encode(::java::nio::CharBuffer* in)");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::encode(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out, bool endOfInput)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::encode(::java::nio::CharBuffer* in, ::java::nio::ByteBuffer* out, bool endOfInput)");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::flush(::java::nio::ByteBuffer* out)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::flush(::java::nio::ByteBuffer* out)");
    return 0;
}

java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::implFlush(::java::nio::ByteBuffer* out)
{ /* stub */
    unimplemented_(u"java::nio::charset::CoderResult* java::nio::charset::CharsetEncoder::implFlush(::java::nio::ByteBuffer* out)");
    return 0;
}

void java::nio::charset::CharsetEncoder::implOnMalformedInput(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetEncoder::implOnMalformedInput(CodingErrorAction* newAction)");
}

void java::nio::charset::CharsetEncoder::implOnUnmappableCharacter(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetEncoder::implOnUnmappableCharacter(CodingErrorAction* newAction)");
}

void java::nio::charset::CharsetEncoder::implReplaceWith(::int8_tArray* newReplacement)
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetEncoder::implReplaceWith(::int8_tArray* newReplacement)");
}

void java::nio::charset::CharsetEncoder::implReset()
{ /* stub */
    unimplemented_(u"void java::nio::charset::CharsetEncoder::implReset()");
}

bool java::nio::charset::CharsetEncoder::isLegalReplacement(::int8_tArray* repl)
{ /* stub */
    unimplemented_(u"bool java::nio::charset::CharsetEncoder::isLegalReplacement(::int8_tArray* repl)");
    return 0;
}

java::nio::charset::CodingErrorAction* java::nio::charset::CharsetEncoder::malformedInputAction()
{ /* stub */
    unimplemented_(u"java::nio::charset::CodingErrorAction* java::nio::charset::CharsetEncoder::malformedInputAction()");
    return 0;
}

float java::nio::charset::CharsetEncoder::maxBytesPerChar()
{ /* stub */
    unimplemented_(u"float java::nio::charset::CharsetEncoder::maxBytesPerChar()");
    return 0;
}

java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::onMalformedInput(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::onMalformedInput(CodingErrorAction* newAction)");
    return 0;
}

java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::onUnmappableCharacter(CodingErrorAction* newAction)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::onUnmappableCharacter(CodingErrorAction* newAction)");
    return 0;
}

java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::replaceWith(::int8_tArray* newReplacement)
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::replaceWith(::int8_tArray* newReplacement)");
    return 0;
}

int8_tArray* java::nio::charset::CharsetEncoder::replacement()
{ /* stub */
    unimplemented_(u"int8_tArray* java::nio::charset::CharsetEncoder::replacement()");
    return 0;
}

java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::reset()
{ /* stub */
    unimplemented_(u"java::nio::charset::CharsetEncoder* java::nio::charset::CharsetEncoder::reset()");
    return 0;
}

/* private: void java::nio::charset::CharsetEncoder::throwIllegalStateException(int32_t from, int32_t to) */
java::nio::charset::CodingErrorAction* java::nio::charset::CharsetEncoder::unmappableCharacterAction()
{ /* stub */
    unimplemented_(u"java::nio::charset::CodingErrorAction* java::nio::charset::CharsetEncoder::unmappableCharacterAction()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::charset::CharsetEncoder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.charset.CharsetEncoder", 31);
    return c;
}

java::lang::Class* java::nio::charset::CharsetEncoder::getClass0()
{
    return class_();
}

