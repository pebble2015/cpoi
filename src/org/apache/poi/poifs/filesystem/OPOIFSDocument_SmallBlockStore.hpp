// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::filesystem::OPOIFSDocument_SmallBlockStore final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::poifs::storage::SmallDocumentBlockArray* _smallBlocks {  };
    POIFSDocumentPath* _path {  };
    ::java::lang::String* _name {  };
    int32_t _size {  };
    POIFSWriterListener* _writer {  };
    ::org::apache::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::storage::SmallDocumentBlockArray* blocks);
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);

public: /* package */
    bool isValid();
    ::org::apache::poi::poifs::storage::SmallDocumentBlockArray* getBlocks();

    // Generated
    OPOIFSDocument_SmallBlockStore(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::storage::SmallDocumentBlockArray* blocks);
    OPOIFSDocument_SmallBlockStore(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, ::java::lang::String* name, int32_t size, POIFSWriterListener* writer);
protected:
    OPOIFSDocument_SmallBlockStore(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class OPOIFSDocument;
    friend class OPOIFSDocument_BigBlockStore;
};
