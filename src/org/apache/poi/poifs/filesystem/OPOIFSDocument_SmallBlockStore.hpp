// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java

#pragma once

#include <fwd-POI.hpp>
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
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::poifs::storage::SmallDocumentBlockArray* _smallBlocks {  };
    POIFSDocumentPath* _path {  };
    ::java::lang::String* _name {  };
    int32_t _size {  };
    POIFSWriterListener* _writer {  };
    ::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::SmallDocumentBlockArray* blocks);
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);

public: /* package */
    bool isValid();
    ::poi::poifs::storage::SmallDocumentBlockArray* getBlocks();

    // Generated
    OPOIFSDocument_SmallBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::SmallDocumentBlockArray* blocks);
    OPOIFSDocument_SmallBlockStore(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);
protected:
    OPOIFSDocument_SmallBlockStore(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class OPOIFSDocument;
    friend class OPOIFSDocument_BigBlockStore;
};
