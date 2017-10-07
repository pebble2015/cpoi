// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10Native.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::Ole10Native
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* OLE10_NATIVE_;
    static ::java::lang::String* ISO1_;
    int32_t totalSize {  };
    int16_t flags1 {  };
    ::java::lang::String* label {  };
    ::java::lang::String* fileName {  };
    int16_t flags2 {  };
    int16_t unknown1 {  };
    ::java::lang::String* command {  };
    ::int8_tArray* dataBuffer {  };
    int16_t flags3 {  };
    Ole10Native_EncodingMode* mode {  };

public:
    static Ole10Native* createFromEmbeddedOleObject(POIFSFileSystem* poifs) /* throws(IOException, Ole10NativeException) */;
    static Ole10Native* createFromEmbeddedOleObject(DirectoryNode* directory) /* throws(IOException, Ole10NativeException) */;
protected:
    void ctor(::java::lang::String* label, ::java::lang::String* filename, ::java::lang::String* command, ::int8_tArray* data);
    void ctor(::int8_tArray* data, int32_t offset) /* throws(Ole10NativeException) */;

private:
    static int32_t getStringLength(::int8_tArray* data, int32_t ofs);

public:
    virtual int32_t getTotalSize();
    virtual int16_t getFlags1();
    virtual ::java::lang::String* getLabel();
    virtual ::java::lang::String* getFileName();
    virtual int16_t getFlags2();
    virtual int16_t getUnknown1();
    virtual ::java::lang::String* getCommand();
    virtual int32_t getDataSize();
    virtual ::int8_tArray* getDataBuffer();
    virtual int16_t getFlags3();
    virtual void writeOut(::java::io::OutputStream* out) /* throws(IOException) */;
    virtual void setFlags1(int16_t flags1);
    virtual void setFlags2(int16_t flags2);
    virtual void setFlags3(int16_t flags3);
    virtual void setLabel(::java::lang::String* label);
    virtual void setFileName(::java::lang::String* fileName);
    virtual void setCommand(::java::lang::String* command);
    virtual void setUnknown1(int16_t unknown1);
    virtual void setDataBuffer(::int8_tArray* dataBuffer);

    // Generated
    Ole10Native(::java::lang::String* label, ::java::lang::String* filename, ::java::lang::String* command, ::int8_tArray* data);
    Ole10Native(::int8_tArray* data, int32_t offset);
protected:
    Ole10Native(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    static ::java::lang::String*& OLE10_NATIVE();

public: /* protected */
    static ::java::lang::String*& ISO1();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Ole10Native_EncodingMode;
};
