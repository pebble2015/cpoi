// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/ByteBuffer.hpp>

struct default_init_tag;

class java::nio::MappedByteBuffer
    : public ByteBuffer
{

public:
    typedef ByteBuffer super;

private:
    ::java::io::FileDescriptor* fd {  };
    static int8_t unused_;

protected:
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd);
    /*void checkMapped(); (private) */

public:
    MappedByteBuffer* force();
    /*void force0(::java::io::FileDescriptor* fd, int64_t address, int64_t length); (private) */
    bool isLoaded();
    /*bool isLoaded0(int64_t address, int64_t length, int32_t pageCount); (private) */
    MappedByteBuffer* load();
    /*void load0(int64_t address, int64_t length); (private) */
    /*int64_t mappingAddress(int64_t mappingOffset); (private) */
    /*int64_t mappingLength(int64_t mappingOffset); (private) */
    /*int64_t mappingOffset(); (private) */

    // Generated

public: /* package */
    MappedByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    MappedByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd);
protected:
    MappedByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static int8_t& unused();
    virtual ::java::lang::Class* getClass0();
};
