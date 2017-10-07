// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/DataInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::DataInputStream::DataInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::DataInputStream::DataInputStream(InputStream* in)
    : DataInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}


void ::java::io::DataInputStream::ctor(InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::DataInputStream::ctor(InputStream* in)");
}

int32_t java::io::DataInputStream::read(::int8_tArray* b)
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::read(::int8_tArray* b)");
    return 0;
}

int32_t java::io::DataInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

bool java::io::DataInputStream::readBoolean()
{ /* stub */
    unimplemented_(u"bool java::io::DataInputStream::readBoolean()");
    return 0;
}

int8_t java::io::DataInputStream::readByte()
{ /* stub */
    unimplemented_(u"int8_t java::io::DataInputStream::readByte()");
    return 0;
}

char16_t java::io::DataInputStream::readChar()
{ /* stub */
    unimplemented_(u"char16_t java::io::DataInputStream::readChar()");
    return 0;
}

double java::io::DataInputStream::readDouble()
{ /* stub */
    unimplemented_(u"double java::io::DataInputStream::readDouble()");
    return 0;
}

float java::io::DataInputStream::readFloat()
{ /* stub */
    unimplemented_(u"float java::io::DataInputStream::readFloat()");
    return 0;
}

void java::io::DataInputStream::readFully(::int8_tArray* b)
{ /* stub */
    unimplemented_(u"void java::io::DataInputStream::readFully(::int8_tArray* b)");
}

void java::io::DataInputStream::readFully(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::io::DataInputStream::readFully(::int8_tArray* b, int32_t off, int32_t len)");
}

int32_t java::io::DataInputStream::readInt()
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::readInt()");
    return 0;
}

java::lang::String* java::io::DataInputStream::readLine()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::DataInputStream::readLine()");
    return 0;
}

int64_t java::io::DataInputStream::readLong()
{ /* stub */
    unimplemented_(u"int64_t java::io::DataInputStream::readLong()");
    return 0;
}

int16_t java::io::DataInputStream::readShort()
{ /* stub */
    unimplemented_(u"int16_t java::io::DataInputStream::readShort()");
    return 0;
}

java::lang::String* java::io::DataInputStream::readUTF()
{ /* stub */
    unimplemented_(u"java::lang::String* java::io::DataInputStream::readUTF()");
    return 0;
}

java::lang::String* java::io::DataInputStream::readUTF(DataInput* in)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::io::DataInputStream::readUTF(DataInput* in)");
    return 0;
}

int32_t java::io::DataInputStream::readUnsignedByte()
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::readUnsignedByte()");
    return 0;
}

int32_t java::io::DataInputStream::readUnsignedShort()
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::readUnsignedShort()");
    return 0;
}

int32_t java::io::DataInputStream::skipBytes(int32_t n)
{ /* stub */
    unimplemented_(u"int32_t java::io::DataInputStream::skipBytes(int32_t n)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::DataInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.DataInputStream", 23);
    return c;
}

int32_t java::io::DataInputStream::read()
{
    return super::read();
}

java::lang::Class* java::io::DataInputStream::getClass0()
{
    return class_();
}

