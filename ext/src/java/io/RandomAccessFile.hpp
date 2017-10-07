// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/DataOutput.hpp>
#include <java/io/DataInput.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class java::io::RandomAccessFile
    : public virtual ::java::lang::Object
    , public virtual DataOutput
    , public virtual DataInput
    , public virtual Closeable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t O_DSYNC { int32_t(8) };
    static constexpr int32_t O_RDONLY { int32_t(1) };
    static constexpr int32_t O_RDWR { int32_t(2) };
    static constexpr int32_t O_SYNC { int32_t(4) };
    ::java::nio::channels::FileChannel* channel {  };
    ::java::lang::Object* closeLock {  };
    std::atomic< bool > closed {  };
    FileDescriptor* fd {  };
    ::java::lang::String* path {  };
    bool rw {  };

protected:
    void ctor(::java::lang::String* name, ::java::lang::String* mode);
    void ctor(File* file, ::java::lang::String* mode);

public:
    void close() override;
    /*void close0(); (private) */
    ::java::nio::channels::FileChannel* getChannel();
    FileDescriptor* getFD();
    virtual int64_t getFilePointer();
    /*static void initIDs(); (private) */
    virtual int64_t length();
    /*void open(::java::lang::String* name, int32_t mode); (private) */
    /*void open0(::java::lang::String* name, int32_t mode); (private) */
    virtual int32_t read();
    virtual int32_t read(::int8_tArray* b);
    virtual int32_t read(::int8_tArray* b, int32_t off, int32_t len);
    /*int32_t read0(); (private) */
    bool readBoolean() override;
    int8_t readByte() override;
    /*int32_t readBytes(::int8_tArray* b, int32_t off, int32_t len); (private) */
    char16_t readChar() override;
    double readDouble() override;
    float readFloat() override;
    void readFully(::int8_tArray* b) override;
    void readFully(::int8_tArray* b, int32_t off, int32_t len) override;
    int32_t readInt() override;
    ::java::lang::String* readLine() override;
    int64_t readLong() override;
    int16_t readShort() override;
    ::java::lang::String* readUTF() override;
    int32_t readUnsignedByte() override;
    int32_t readUnsignedShort() override;
    virtual void seek(int64_t pos);
    /*void seek0(int64_t pos); (private) */
    virtual void setLength(int64_t newLength);
    int32_t skipBytes(int32_t n) override;
    void write(int32_t b) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;
    /*void write0(int32_t b); (private) */
    void writeBoolean(bool v) override;
    void writeByte(int32_t v) override;
    void writeBytes(::java::lang::String* s) override;
    /*void writeBytes(::int8_tArray* b, int32_t off, int32_t len); (private) */
    void writeChar(int32_t v) override;
    void writeChars(::java::lang::String* s) override;
    void writeDouble(double v) override;
    void writeFloat(float v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;
    void writeUTF(::java::lang::String* str) override;

    // Generated
    RandomAccessFile(::java::lang::String* name, ::java::lang::String* mode);
    RandomAccessFile(File* file, ::java::lang::String* mode);
protected:
    RandomAccessFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
