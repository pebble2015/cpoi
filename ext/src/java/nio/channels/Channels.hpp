// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::channels::Channels final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    /*void ctor(); (private) */
    /*static void checkNotNull(::java::lang::Object* o, ::java::lang::String* name); (private) */
    static ReadableByteChannel* newChannel(::java::io::InputStream* in);
    static WritableByteChannel* newChannel(::java::io::OutputStream* out);
    static ::java::io::InputStream* newInputStream(ReadableByteChannel* ch);
    static ::java::io::InputStream* newInputStream(AsynchronousByteChannel* ch);
    static ::java::io::OutputStream* newOutputStream(WritableByteChannel* ch);
    static ::java::io::OutputStream* newOutputStream(AsynchronousByteChannel* ch);
    static ::java::io::Reader* newReader(ReadableByteChannel* ch, ::java::lang::String* csName);
    static ::java::io::Reader* newReader(ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t minBufferCap);
    static ::java::io::Writer* newWriter(WritableByteChannel* ch, ::java::lang::String* csName);
    static ::java::io::Writer* newWriter(WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t minBufferCap);
    /*static void writeFully(WritableByteChannel* ch, ::java::nio::ByteBuffer* bb); (private) */
    /*static void writeFullyImpl(WritableByteChannel* ch, ::java::nio::ByteBuffer* bb); (private) */

    // Generated
    Channels();
protected:
    Channels(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
