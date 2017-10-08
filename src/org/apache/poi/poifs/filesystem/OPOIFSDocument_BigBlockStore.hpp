// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class poi::poifs::filesystem::OPOIFSDocument_BigBlockStore final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::poifs::storage::DocumentBlockArray* bigBlocks {  };
    POIFSDocumentPath* _path {  };
    ::java::lang::String* _name {  };
    int32_t _size {  };
    POIFSWriterListener* _writer {  };
    ::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::DocumentBlockArray* blocks);
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);

public: /* package */
    bool isValid();
    ::poi::poifs::storage::DocumentBlockArray* getBlocks();
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */;
    int32_t countBlocks();

    // Generated
    OPOIFSDocument_BigBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::DocumentBlockArray* blocks);
    OPOIFSDocument_BigBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);
protected:
    OPOIFSDocument_BigBlockStore(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class OPOIFSDocument;
    friend class OPOIFSDocument_SmallBlockStore;
};
