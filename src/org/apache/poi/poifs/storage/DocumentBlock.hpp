// Generated from /POI/java/org/apache/poi/poifs/storage/DocumentBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::DocumentBlock, BigBlockArray > DocumentBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::storage::DocumentBlock final
    : public BigBlock
{

public:
    typedef BigBlock super;

private:
    static constexpr int8_t _default_value { int8_t(-1) };
    ::int8_tArray* _data {  };
    int32_t _bytes_read {  };
protected:
    void ctor(RawDataBlock* block) /* throws(IOException) */;
    void ctor(::java::io::InputStream* stream, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */;
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

public:
    int32_t size();
    bool partiallyRead();
    static int8_t getFillByte();
    static DocumentBlockArray* convert(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* array, int32_t size);
    static DataInputBlock* getDataInputBlock(DocumentBlockArray* blocks, int32_t offset);

public: /* package */
    void writeData(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated

public:
    DocumentBlock(RawDataBlock* block);
    DocumentBlock(::java::io::InputStream* stream, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

private:
    DocumentBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    DocumentBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
