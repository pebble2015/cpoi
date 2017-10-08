// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSFileSystem.java
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <org/apache/poi/poifs/filesystem/BATManaged.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyTable.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BATBlock.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableWriter.hpp>
#include <org/apache/poi/poifs/storage/BlockList.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockWriter.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>
#include <org/apache/poi/poifs/storage/SmallBlockTableReader.hpp>
#include <org/apache/poi/poifs/storage/SmallBlockTableWriter.hpp>
#include <org/apache/poi/util/CloseIgnoringInputStream.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
        } // storage
    } // poifs
} // poi

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::poifs::filesystem::OPOIFSFileSystem::OPOIFSFileSystem(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::OPOIFSFileSystem::OPOIFSFileSystem() 
    : OPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::poifs::filesystem::OPOIFSFileSystem::OPOIFSFileSystem(::java::io::InputStream* stream)  /* throws(IOException) */
    : OPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void poi::poifs::filesystem::OPOIFSFileSystem::init()
{
    bigBlockSize = ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS();
}

poi::util::POILogger*& poi::poifs::filesystem::OPOIFSFileSystem::_logger()
{
    clinit();
    return _logger_;
}
poi::util::POILogger* poi::poifs::filesystem::OPOIFSFileSystem::_logger_;

java::io::InputStream* poi::poifs::filesystem::OPOIFSFileSystem::createNonClosingInputStream(::java::io::InputStream* is)
{
    clinit();
    return new ::poi::util::CloseIgnoringInputStream(is);
}

void poi::poifs::filesystem::OPOIFSFileSystem::ctor()
{
    super::ctor();
    init();
    auto header_block = new ::poi::poifs::storage::HeaderBlock(bigBlockSize);
    _property_table = new ::poi::poifs::property::PropertyTable(header_block);
    _documents = new ::java::util::ArrayList();
    _root = nullptr;
}

void poi::poifs::filesystem::OPOIFSFileSystem::ctor(::java::io::InputStream* stream) /* throws(IOException) */
{
    ctor();
    auto success = false;
    ::poi::poifs::storage::HeaderBlock* header_block;
    ::poi::poifs::storage::RawDataBlockList* data_blocks;
    {
        auto finally0 = finally([&] {
            closeInputStream(stream, success);
        });
        {
            header_block = new ::poi::poifs::storage::HeaderBlock(stream);
            bigBlockSize = npc(header_block)->getBigBlockSize();
            data_blocks = new ::poi::poifs::storage::RawDataBlockList(stream, bigBlockSize);
            success = true;
        }
    }

    new ::poi::poifs::storage::BlockAllocationTableReader(npc(header_block)->getBigBlockSize(), npc(header_block)->getBATCount(), npc(header_block)->getBATArray_(), npc(header_block)->getXBATCount(), npc(header_block)->getXBATIndex(), data_blocks);
    auto properties = new ::poi::poifs::property::PropertyTable(header_block, data_blocks);
    processProperties(::poi::poifs::storage::SmallBlockTableReader::getSmallDocumentBlocks(bigBlockSize, data_blocks, npc(properties)->getRoot(), npc(header_block)->getSBATStart()), data_blocks, npc(npc(properties)->getRoot())->getChildren(), nullptr, npc(header_block)->getPropertyStart());
    npc(getRoot())->setStorageClsid(npc(npc(properties)->getRoot())->getStorageClsid());
}

void poi::poifs::filesystem::OPOIFSFileSystem::closeInputStream(::java::io::InputStream* stream, bool success)
{
    if(npc(stream)->markSupported() && !(dynamic_cast< ::java::io::ByteArrayInputStream* >(stream) != nullptr)) {
        auto msg = ::java::lang::StringBuilder().append(u"POIFS is closing the supplied input stream of type ("_j)->append(npc(npc(stream)->getClass())->getName())
            ->append(u") which supports mark/reset.  "_j)
            ->append(u"This will be a problem for the caller if the stream will still be used.  "_j)
            ->append(u"If that is the case the caller should wrap the input stream to avoid this close logic.  "_j)
            ->append(u"This warning is only temporary and will not be present in future versions of POI."_j)->toString();
        npc(_logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
    }
    try {
        npc(stream)->close();
    } catch (::java::io::IOException* e) {
        if(success) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
        npc(_logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't close input stream"_j), static_cast< ::java::lang::Object* >(e)}));
    }
}

bool poi::poifs::filesystem::OPOIFSFileSystem::hasPOIFSHeader(::java::io::InputStream* inp) /* throws(IOException) */
{
    clinit();
    return NPOIFSFileSystem::hasPOIFSHeader(inp);
}

bool poi::poifs::filesystem::OPOIFSFileSystem::hasPOIFSHeader(::int8_tArray* header8Bytes)
{
    clinit();
    return NPOIFSFileSystem::hasPOIFSHeader(header8Bytes);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::OPOIFSFileSystem::createDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */
{
    return npc(getRoot())->createDocument(name, stream);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::OPOIFSFileSystem::createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */
{
    return npc(getRoot())->createDocument(name, size, writer);
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::OPOIFSFileSystem::createDirectory(::java::lang::String* name) /* throws(IOException) */
{
    return npc(getRoot())->createDirectory(name);
}

void poi::poifs::filesystem::OPOIFSFileSystem::writeFilesystem(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(_property_table)->preWrite();
    auto sbtw = new ::poi::poifs::storage::SmallBlockTableWriter(bigBlockSize, _documents, npc(_property_table)->getRoot());
    auto bat = new ::poi::poifs::storage::BlockAllocationTableWriter(bigBlockSize);
    ::java::util::List* bm_objects = new ::java::util::ArrayList();
    npc(bm_objects)->addAll(static_cast< ::java::util::Collection* >(_documents));
    npc(bm_objects)->add(static_cast< ::java::lang::Object* >(_property_table));
    npc(bm_objects)->add(static_cast< ::java::lang::Object* >(sbtw));
    npc(bm_objects)->add(static_cast< ::java::lang::Object* >(npc(sbtw)->getSBAT()));
    auto iter = npc(bm_objects)->iterator();
    while (npc(iter)->hasNext()) {
        auto bmo = java_cast< BATManaged* >(java_cast< ::java::lang::Object* >(npc(iter)->next()));
        auto block_count = npc(bmo)->countBlocks();
        if(block_count != 0) {
            npc(bmo)->setStartBlock(npc(bat)->allocateSpace(block_count));
        } else {
        }
    }
    auto batStartBlock = npc(bat)->createBlocks();
    auto header_block_writer = new ::poi::poifs::storage::HeaderBlockWriter(bigBlockSize);
    auto xbat_blocks = npc(header_block_writer)->setBATBlocks(npc(bat)->countBlocks(), batStartBlock);
    npc(header_block_writer)->setPropertyStart(npc(_property_table)->getStartBlock());
    npc(header_block_writer)->setSBATStart(npc(npc(sbtw)->getSBAT())->getStartBlock());
    npc(header_block_writer)->setSBATBlockCount(npc(sbtw)->getSBATBlockCount());
    ::java::util::List* writers = new ::java::util::ArrayList();
    npc(writers)->add(static_cast< ::java::lang::Object* >(header_block_writer));
    npc(writers)->addAll(static_cast< ::java::util::Collection* >(_documents));
    npc(writers)->add(static_cast< ::java::lang::Object* >(_property_table));
    npc(writers)->add(static_cast< ::java::lang::Object* >(sbtw));
    npc(writers)->add(static_cast< ::java::lang::Object* >(npc(sbtw)->getSBAT()));
    npc(writers)->add(static_cast< ::java::lang::Object* >(bat));
    for (auto j = int32_t(0); j < npc(xbat_blocks)->length; j++) {
        npc(writers)->add(static_cast< ::java::lang::Object* >((*xbat_blocks)[j]));
    }
    iter = npc(writers)->iterator();
    while (npc(iter)->hasNext()) {
        auto writer = java_cast< ::poi::poifs::storage::BlockWritable* >(java_cast< ::java::lang::Object* >(npc(iter)->next()));
        npc(writer)->writeBlocks(stream);
    }
}

void poi::poifs::filesystem::OPOIFSFileSystem::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length != 2) {
        npc(::java::lang::System::err())->println(u"two arguments required: input filename and output filename"_j);
        ::java::lang::System::exit(1);
    }
    auto istream = new ::java::io::FileInputStream((*args)[int32_t(0)]);
    auto ostream = new ::java::io::FileOutputStream((*args)[int32_t(1)]);
    (new OPOIFSFileSystem(istream))->writeFilesystem(ostream);
    npc(istream)->close();
    npc(ostream)->close();
}

poi::poifs::filesystem::DirectoryNode* poi::poifs::filesystem::OPOIFSFileSystem::getRoot()
{
    if(_root == nullptr) {
        _root = new DirectoryNode(static_cast< ::poi::poifs::property::DirectoryProperty* >(npc(_property_table)->getRoot()), this, static_cast< DirectoryNode* >(nullptr));
    }
    return _root;
}

poi::poifs::filesystem::DocumentInputStream* poi::poifs::filesystem::OPOIFSFileSystem::createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */
{
    return npc(getRoot())->createDocumentInputStream(documentName);
}

void poi::poifs::filesystem::OPOIFSFileSystem::addDocument(OPOIFSDocument* document)
{
    npc(_documents)->add(static_cast< ::java::lang::Object* >(document));
    npc(_property_table)->addProperty(npc(document)->getDocumentProperty());
}

void poi::poifs::filesystem::OPOIFSFileSystem::addDirectory(::poi::poifs::property::DirectoryProperty* directory)
{
    npc(_property_table)->addProperty(directory);
}

void poi::poifs::filesystem::OPOIFSFileSystem::remove(EntryNode* entry)
{
    npc(_property_table)->removeProperty(npc(entry)->getProperty());
    if(npc(entry)->isDocumentEntry()) {
        npc(_documents)->remove(static_cast< ::java::lang::Object* >(npc((java_cast< DocumentNode* >(entry)))->getDocument()));
    }
}

void poi::poifs::filesystem::OPOIFSFileSystem::processProperties(::poi::poifs::storage::BlockList* small_blocks, ::poi::poifs::storage::BlockList* big_blocks, ::java::util::Iterator* properties, DirectoryNode* dir, int32_t headerPropertiesStartAt) /* throws(IOException) */
{
    while (npc(properties)->hasNext()) {
        auto property = java_cast< ::poi::poifs::property::Property* >(npc(properties)->next());
        auto name = npc(property)->getName();
        auto parent = (dir == nullptr) ? (java_cast< DirectoryNode* >(getRoot())) : dir;
        if(npc(property)->isDirectory()) {
            auto new_dir = java_cast< DirectoryNode* >(npc(parent)->createDirectory(name));
            npc(new_dir)->setStorageClsid(npc(property)->getStorageClsid());
            processProperties(small_blocks, big_blocks, npc((java_cast< ::poi::poifs::property::DirectoryProperty* >(property)))->getChildren(), new_dir, headerPropertiesStartAt);
        } else {
            auto startBlock = npc(property)->getStartBlock();
            auto size = npc(property)->getSize();
            OPOIFSDocument* document = nullptr;
            if(npc(property)->shouldUseSmallBlocks()) {
                document = new OPOIFSDocument(name, npc(small_blocks)->fetchBlocks(startBlock, headerPropertiesStartAt), size);
            } else {
                document = new OPOIFSDocument(name, npc(big_blocks)->fetchBlocks(startBlock, headerPropertiesStartAt), size);
            }
            npc(parent)->createDocument(document);
        }
    }
}

java::lang::ObjectArray* poi::poifs::filesystem::OPOIFSFileSystem::getViewableArray_()
{
    if(preferArray_()) {
        return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->getViewableArray_();
    }
    return new ::java::lang::ObjectArray(int32_t(0));
}

java::util::Iterator* poi::poifs::filesystem::OPOIFSFileSystem::getViewableIterator()
{
    if(!preferArray_()) {
        return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->getViewableIterator();
    }
    return npc(::java::util::Collections::emptyList())->iterator();
}

bool poi::poifs::filesystem::OPOIFSFileSystem::preferArray_()
{
    return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->preferArray_();
}

java::lang::String* poi::poifs::filesystem::OPOIFSFileSystem::getShortDescription()
{
    return u"POIFS FileSystem"_j;
}

int32_t poi::poifs::filesystem::OPOIFSFileSystem::getBigBlockSize()
{
    return npc(bigBlockSize)->getBigBlockSize();
}

poi::poifs::common::POIFSBigBlockSize* poi::poifs::filesystem::OPOIFSFileSystem::getBigBlockSizeDetails()
{
    return bigBlockSize;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::OPOIFSFileSystem::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.OPOIFSFileSystem", 48);
    return c;
}

void poi::poifs::filesystem::OPOIFSFileSystem::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(OPOIFSFileSystem::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::filesystem::OPOIFSFileSystem::getClass0()
{
    return class_();
}

