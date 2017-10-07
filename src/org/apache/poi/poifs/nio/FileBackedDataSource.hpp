// Generated from /POI/java/org/apache/poi/poifs/nio/FileBackedDataSource.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/DataSource.hpp>

struct default_init_tag;

class org::apache::poi::poifs::nio::FileBackedDataSource
    : public DataSource
{

public:
    typedef DataSource super;

private:
    static ::org::apache::poi::util::POILogger* logger_;
    ::java::nio::channels::FileChannel* channel {  };
    bool writable {  };
    ::java::io::RandomAccessFile* srcFile {  };
    ::java::util::List* buffersToClean {  };
protected:
    void ctor(::java::io::File* file) /* throws(FileNotFoundException) */;
    void ctor(::java::io::File* file, bool readOnly) /* throws(FileNotFoundException) */;
    void ctor(::java::io::RandomAccessFile* srcFile, bool readOnly);
    void ctor(::java::nio::channels::FileChannel* channel, bool readOnly);

public:
    virtual bool isWriteable();
    virtual ::java::nio::channels::FileChannel* getChannel();
    ::java::nio::ByteBuffer* read(int32_t length, int64_t position) /* throws(IOException) */ override;
    void write(::java::nio::ByteBuffer* src, int64_t position) /* throws(IOException) */ override;
    void copyTo(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    int64_t size() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

private:
    static ::java::io::RandomAccessFile* newSrcFile(::java::io::File* file, ::java::lang::String* mode) /* throws(FileNotFoundException) */;
    static void unmap(::java::nio::ByteBuffer* buffer);

    // Generated

public:
    FileBackedDataSource(::java::io::File* file);
    FileBackedDataSource(::java::io::File* file, bool readOnly);
    FileBackedDataSource(::java::io::RandomAccessFile* srcFile, bool readOnly);
    FileBackedDataSource(::java::nio::channels::FileChannel* channel, bool readOnly);
protected:
    FileBackedDataSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
    friend class FileBackedDataSource_unmap_1;
};
