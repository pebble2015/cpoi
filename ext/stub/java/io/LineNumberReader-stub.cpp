// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/LineNumberReader.hpp>

#include <java/lang/String.hpp>

extern void unimplemented_(const char16_t* name);
java::io::LineNumberReader::LineNumberReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::LineNumberReader::LineNumberReader(Reader* in)
    : LineNumberReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::LineNumberReader::LineNumberReader(Reader* in, int32_t sz)
    : LineNumberReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, sz);
}

constexpr int32_t java::io::LineNumberReader::maxSkipBufferSize;

void ::java::io::LineNumberReader::ctor(Reader* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::LineNumberReader::ctor(Reader* in)");
}

void ::java::io::LineNumberReader::ctor(Reader* in, int32_t sz)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::LineNumberReader::ctor(Reader* in, int32_t sz)");
}

int32_t java::io::LineNumberReader::getLineNumber()
{ /* stub */
return lineNumber ; /* getter */
}

void java::io::LineNumberReader::mark(int32_t readAheadLimit)
{ /* stub */
    unimplemented_(u"void java::io::LineNumberReader::mark(int32_t readAheadLimit)");
}

int32_t java::io::LineNumberReader::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::LineNumberReader::read()");
    return 0;
}

int32_t java::io::LineNumberReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::LineNumberReader::read(::char16_tArray* cbuf, int32_t off, int32_t len)");
    return 0;
}

java::lang::String* java::io::LineNumberReader::readLine()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::LineNumberReader::readLine()");
    return 0;
}

void java::io::LineNumberReader::reset()
{ /* stub */
    unimplemented_(u"void java::io::LineNumberReader::reset()");
}

void java::io::LineNumberReader::setLineNumber(int32_t lineNumber)
{ /* stub */
    this->lineNumber = lineNumber; /* setter */
}

int64_t java::io::LineNumberReader::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::LineNumberReader::skip(int64_t n)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::LineNumberReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.LineNumberReader", 24);
    return c;
}

java::lang::String* java::io::LineNumberReader::readLine(bool ignoreLF)
{
    return super::readLine(ignoreLF);
}

int32_t java::io::LineNumberReader::read(::java::nio::CharBuffer* target)
{
    return super::read(target);
}

int32_t java::io::LineNumberReader::read(::char16_tArray* cbuf)
{
    return super::read(cbuf);
}

java::lang::Class* java::io::LineNumberReader::getClass0()
{
    return class_();
}

