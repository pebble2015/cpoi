// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSFileSystem.java
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/File.hpp>
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
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/Channels.hpp>
#include <java/nio/channels/FileChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/EmptyFileException.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore_ChainLoopDetector.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/EntryNode.hpp>
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSMiniStore.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/nio/ByteArrayBackedDataSource.hpp>
#include <org/apache/poi/poifs/nio/DataSource.hpp>
#include <org/apache/poi/poifs/nio/FileBackedDataSource.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/NPropertyTable.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BATBlock_BATBlockAndIndex.hpp>
#include <org/apache/poi/poifs/storage/BATBlock.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableWriter.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockWriter.hpp>
#include <org/apache/poi/util/CloseIgnoringInputStream.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
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
poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(bool newFS) 
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(newFS);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem() 
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::io::File* file)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::io::File* file, bool readOnly)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(file,readOnly);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::nio::channels::FileChannel* channel)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::nio::channels::FileChannel* channel, bool readOnly)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel,readOnly);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::nio::channels::FileChannel* channel, ::java::io::File* srcFile, bool readOnly, bool closeChannelOnError)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel,srcFile,readOnly,closeChannelOnError);
}

poi::poifs::filesystem::NPOIFSFileSystem::NPOIFSFileSystem(::java::io::InputStream* stream)  /* throws(IOException) */
    : NPOIFSFileSystem(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

void poi::poifs::filesystem::NPOIFSFileSystem::init()
{
    bigBlockSize = ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS();
}

poi::util::POILogger*& poi::poifs::filesystem::NPOIFSFileSystem::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::poifs::filesystem::NPOIFSFileSystem::LOG_;

java::io::InputStream* poi::poifs::filesystem::NPOIFSFileSystem::createNonClosingInputStream(::java::io::InputStream* is)
{
    clinit();
    return new ::poi::util::CloseIgnoringInputStream(is);
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(bool newFS)
{
    super::ctor();
    init();
    _header = new ::poi::poifs::storage::HeaderBlock(bigBlockSize);
    _property_table = new ::poi::poifs::property::NPropertyTable(_header);
    _mini_store = new NPOIFSMiniStore(this, npc(_property_table)->getRoot(), new ::java::util::ArrayList(), _header);
    _xbat_blocks = new ::java::util::ArrayList();
    _bat_blocks = new ::java::util::ArrayList();
    _root = nullptr;
    if(newFS) {
        _data = new ::poi::poifs::nio::ByteArrayBackedDataSource(new ::int8_tArray(npc(bigBlockSize)->getBigBlockSize() * int32_t(3)));
    }
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor()
{
    ctor(true);
    npc(_header)->setBATCount(1);
    npc(_header)->setBATArray_(new ::int32_tArray({int32_t(1)}));
    auto bb = ::poi::poifs::storage::BATBlock::createEmptyBATBlock(bigBlockSize, false);
    npc(bb)->setOurBlockIndex(1);
    npc(_bat_blocks)->add(static_cast< ::java::lang::Object* >(bb));
    setNextBlock(int32_t(0), ::poi::poifs::common::POIFSConstants::END_OF_CHAIN);
    setNextBlock(int32_t(1), ::poi::poifs::common::POIFSConstants::FAT_SECTOR_BLOCK);
    npc(_property_table)->setStartBlock(int32_t(0));
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::io::File* file) /* throws(IOException) */
{
    ctor(file, true);
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::io::File* file, bool readOnly) /* throws(IOException) */
{
    ctor(nullptr, file, readOnly, true);
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::nio::channels::FileChannel* channel) /* throws(IOException) */
{
    ctor(channel, true);
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::nio::channels::FileChannel* channel, bool readOnly) /* throws(IOException) */
{
    ctor(channel, nullptr, readOnly, false);
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::nio::channels::FileChannel* channel, ::java::io::File* srcFile, bool readOnly, bool closeChannelOnError) /* throws(IOException) */
{
    ctor(false);
    try {
        if(srcFile != nullptr) {
            if(npc(srcFile)->length() == 0)
                throw new ::poi::EmptyFileException();

            auto d = new ::poi::poifs::nio::FileBackedDataSource(srcFile, readOnly);
            channel = npc(d)->getChannel();
            _data = d;
        } else {
            _data = new ::poi::poifs::nio::FileBackedDataSource(channel, readOnly);
        }
        auto headerBuffer = ::java::nio::ByteBuffer::allocate(::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE);
        ::poi::util::IOUtils::readFully(static_cast< ::java::nio::channels::ReadableByteChannel* >(channel), headerBuffer);
        _header = new ::poi::poifs::storage::HeaderBlock(headerBuffer);
        readCoreContents();
    } catch (::java::io::IOException* e) {
        if(closeChannelOnError && channel != nullptr) {
            npc(channel)->close();
            channel = nullptr;
        }
        throw e;
    } catch (::java::lang::RuntimeException* e) {
        if(closeChannelOnError && channel != nullptr) {
            npc(channel)->close();
            channel = nullptr;
        }
        throw e;
    }
}

void poi::poifs::filesystem::NPOIFSFileSystem::ctor(::java::io::InputStream* stream) /* throws(IOException) */
{
    ctor(false);
    ::java::nio::channels::ReadableByteChannel* channel = nullptr;
    auto success = false;
    {
        auto finally0 = finally([&] {
            if(channel != nullptr)
                npc(channel)->close();

            closeInputStream(stream, success);
        });
        {
            channel = ::java::nio::channels::Channels::newChannel(stream);
            auto headerBuffer = ::java::nio::ByteBuffer::allocate(::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE);
            ::poi::util::IOUtils::readFully(channel, headerBuffer);
            _header = new ::poi::poifs::storage::HeaderBlock(headerBuffer);
            ::poi::poifs::storage::BlockAllocationTableReader::sanityCheckBlockCount(npc(_header)->getBATCount());
            auto maxSize = ::poi::poifs::storage::BATBlock::calculateMaximumSize(_header);
            if(maxSize > ::java::lang::Integer::MAX_VALUE) {
                throw new ::java::lang::IllegalArgumentException(u"Unable read a >2gb file via an InputStream"_j);
            }
            auto data = ::java::nio::ByteBuffer::allocate(static_cast< int32_t >(maxSize));
            npc(headerBuffer)->position(0);
            npc(data)->put(headerBuffer);
            npc(data)->position(npc(headerBuffer)->capacity());
            ::poi::util::IOUtils::readFully(channel, data);
            success = true;
            _data = new ::poi::poifs::nio::ByteArrayBackedDataSource(npc(data)->array(), npc(data)->position());
        }
    }

    readCoreContents();
}

void poi::poifs::filesystem::NPOIFSFileSystem::closeInputStream(::java::io::InputStream* stream, bool success)
{
    try {
        npc(stream)->close();
    } catch (::java::io::IOException* e) {
        if(success) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
        npc(LOG_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't close input stream"_j), static_cast< ::java::lang::Object* >(e)}));
    }
}

bool poi::poifs::filesystem::NPOIFSFileSystem::hasPOIFSHeader(::java::io::InputStream* inp) /* throws(IOException) */
{
    clinit();
    return FileMagic::valueOf(inp) == FileMagic::OLE2;
}

bool poi::poifs::filesystem::NPOIFSFileSystem::hasPOIFSHeader(::int8_tArray* header8Bytes)
{
    clinit();
    try {
        return hasPOIFSHeader(static_cast< ::java::io::InputStream* >(new ::java::io::ByteArrayInputStream(header8Bytes)));
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(u"invalid header check"_j, e);
    }
}

void poi::poifs::filesystem::NPOIFSFileSystem::readCoreContents() /* throws(IOException) */
{
    bigBlockSize = npc(_header)->getBigBlockSize();
    auto loopDetector = getChainLoopDetector();
    for(auto fatAt : *npc(npc(_header)->getBATArray_())) {
        readBAT(fatAt, loopDetector);
    }
    auto remainingFATs = npc(_header)->getBATCount() - npc(npc(_header)->getBATArray_())->length;
    ::poi::poifs::storage::BATBlock* xfat;
    auto nextAt = npc(_header)->getXBATIndex();
    for (auto i = int32_t(0); i < npc(_header)->getXBATCount(); i++) {
        npc(loopDetector)->claim(nextAt);
        auto fatData = getBlockAt(nextAt);
        xfat = ::poi::poifs::storage::BATBlock::createBATBlock(bigBlockSize, fatData);
        npc(xfat)->setOurBlockIndex(nextAt);
        nextAt = npc(xfat)->getValueAt(npc(bigBlockSize)->getXBATEntriesPerBlock());
        npc(_xbat_blocks)->add(static_cast< ::java::lang::Object* >(xfat));
        auto xbatFATs = ::java::lang::Math::min(remainingFATs, npc(bigBlockSize)->getXBATEntriesPerBlock());
        for (auto j = int32_t(0); j < xbatFATs; j++) {
            auto fatAt = npc(xfat)->getValueAt(j);
            if(fatAt == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK || fatAt == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN)
                break;

            readBAT(fatAt, loopDetector);
        }
        remainingFATs -= xbatFATs;
    }
    _property_table = new ::poi::poifs::property::NPropertyTable(_header, this);
    ::poi::poifs::storage::BATBlock* sfat;
    ::java::util::List* sbats = new ::java::util::ArrayList();
    _mini_store = new NPOIFSMiniStore(this, npc(_property_table)->getRoot(), sbats, _header);
    nextAt = npc(_header)->getSBATStart();
    for (auto i = int32_t(0); i < npc(_header)->getSBATCount() && nextAt != ::poi::poifs::common::POIFSConstants::END_OF_CHAIN; i++) {
        npc(loopDetector)->claim(nextAt);
        auto fatData = getBlockAt(nextAt);
        sfat = ::poi::poifs::storage::BATBlock::createBATBlock(bigBlockSize, fatData);
        npc(sfat)->setOurBlockIndex(nextAt);
        npc(sbats)->add(static_cast< ::java::lang::Object* >(sfat));
        nextAt = getNextBlock(nextAt);
    }
}

void poi::poifs::filesystem::NPOIFSFileSystem::readBAT(int32_t batAt, BlockStore_ChainLoopDetector* loopDetector) /* throws(IOException) */
{
    npc(loopDetector)->claim(batAt);
    auto fatData = getBlockAt(batAt);
    auto bat = ::poi::poifs::storage::BATBlock::createBATBlock(bigBlockSize, fatData);
    npc(bat)->setOurBlockIndex(batAt);
    npc(_bat_blocks)->add(static_cast< ::java::lang::Object* >(bat));
}

poi::poifs::storage::BATBlock* poi::poifs::filesystem::NPOIFSFileSystem::createBAT(int32_t offset, bool isBAT) /* throws(IOException) */
{
    auto newBAT = ::poi::poifs::storage::BATBlock::createEmptyBATBlock(bigBlockSize, !isBAT);
    npc(newBAT)->setOurBlockIndex(offset);
    auto buffer = ::java::nio::ByteBuffer::allocate(npc(bigBlockSize)->getBigBlockSize());
    auto writeTo = (int32_t(1) + offset) * npc(bigBlockSize)->getBigBlockSize();
    npc(_data)->write(buffer, writeTo);
    return newBAT;
}

java::nio::ByteBuffer* poi::poifs::filesystem::NPOIFSFileSystem::getBlockAt(int32_t offset) /* throws(IOException) */
{
    auto blockWanted = offset + int64_t(1LL);
    auto startAt = blockWanted * npc(bigBlockSize)->getBigBlockSize();
    try {
        return npc(_data)->read(npc(bigBlockSize)->getBigBlockSize(), startAt);
    } catch (::java::lang::IndexOutOfBoundsException* e) {
        auto wrapped = new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(u"Block "_j)->append(offset)
            ->append(u" not found"_j)->toString());
        npc(wrapped)->initCause(e);
        throw wrapped;
    }
}

java::nio::ByteBuffer* poi::poifs::filesystem::NPOIFSFileSystem::createBlockIfNeeded(int32_t offset) /* throws(IOException) */
{
    try {
        return getBlockAt(offset);
    } catch (::java::lang::IndexOutOfBoundsException* e) {
        auto startAt = (offset + int64_t(1LL)) * npc(bigBlockSize)->getBigBlockSize();
        auto buffer = ::java::nio::ByteBuffer::allocate(getBigBlockSize());
        npc(_data)->write(buffer, startAt);
        return getBlockAt(offset);
    }
}

poi::poifs::storage::BATBlock_BATBlockAndIndex* poi::poifs::filesystem::NPOIFSFileSystem::getBATBlockAndIndex(int32_t offset)
{
    return ::poi::poifs::storage::BATBlock::getBATBlockAndIndex(offset, _header, _bat_blocks);
}

int32_t poi::poifs::filesystem::NPOIFSFileSystem::getNextBlock(int32_t offset)
{
    auto bai = getBATBlockAndIndex(offset);
    return npc(npc(bai)->getBlock())->getValueAt(npc(bai)->getIndex());
}

void poi::poifs::filesystem::NPOIFSFileSystem::setNextBlock(int32_t offset, int32_t nextBlock)
{
    auto bai = getBATBlockAndIndex(offset);
    npc(npc(bai)->getBlock())->setValueAt(npc(bai)->getIndex(), nextBlock);
}

int32_t poi::poifs::filesystem::NPOIFSFileSystem::getFreeBlock() /* throws(IOException) */
{
    auto numSectors = npc(bigBlockSize)->getBATEntriesPerBlock();
    auto offset = int32_t(0);
    for (auto _i = npc(_bat_blocks)->iterator(); _i->hasNext(); ) {
        ::poi::poifs::storage::BATBlock* bat = java_cast< ::poi::poifs::storage::BATBlock* >(_i->next());
        {
            if(npc(bat)->hasFreeSectors()) {
                for (auto j = int32_t(0); j < numSectors; j++) {
                    auto batValue = npc(bat)->getValueAt(j);
                    if(batValue == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
                        return offset + j;
                    }
                }
            }
            offset += numSectors;
        }
    }
    auto bat = createBAT(offset, true);
    npc(bat)->setValueAt(0, ::poi::poifs::common::POIFSConstants::FAT_SECTOR_BLOCK);
    npc(_bat_blocks)->add(static_cast< ::java::lang::Object* >(bat));
    if(npc(_header)->getBATCount() >= 109) {
        ::poi::poifs::storage::BATBlock* xbat = nullptr;
        for (auto _i = npc(_xbat_blocks)->iterator(); _i->hasNext(); ) {
            ::poi::poifs::storage::BATBlock* x = java_cast< ::poi::poifs::storage::BATBlock* >(_i->next());
            {
                if(npc(x)->hasFreeSectors()) {
                    xbat = x;
                    break;
                }
            }
        }
        if(xbat == nullptr) {
            xbat = createBAT(offset + int32_t(1), false);
            npc(xbat)->setValueAt(0, offset);
            npc(bat)->setValueAt(1, ::poi::poifs::common::POIFSConstants::DIFAT_SECTOR_BLOCK);
            offset++;
            if(npc(_xbat_blocks)->size() == 0) {
                npc(_header)->setXBATStart(offset);
            } else {
                npc(java_cast< ::poi::poifs::storage::BATBlock* >(npc(_xbat_blocks)->get(npc(_xbat_blocks)->size() - int32_t(1))))->setValueAt(npc(bigBlockSize)->getXBATEntriesPerBlock(), offset);
            }
            npc(_xbat_blocks)->add(static_cast< ::java::lang::Object* >(xbat));
            npc(_header)->setXBATCount(npc(_xbat_blocks)->size());
        } else {
            for (auto i = int32_t(0); i < npc(bigBlockSize)->getXBATEntriesPerBlock(); i++) {
                if(npc(xbat)->getValueAt(i) == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
                    npc(xbat)->setValueAt(i, offset);
                    break;
                }
            }
        }
    } else {
        auto newBATs = new ::int32_tArray(npc(_header)->getBATCount() + int32_t(1));
        ::java::lang::System::arraycopy(npc(_header)->getBATArray_(), 0, newBATs, 0, npc(newBATs)->length - int32_t(1));
        (*newBATs)[npc(newBATs)->length - int32_t(1)] = offset;
        npc(_header)->setBATArray_(newBATs);
    }
    npc(_header)->setBATCount(npc(_bat_blocks)->size());
    return offset + int32_t(1);
}

int64_t poi::poifs::filesystem::NPOIFSFileSystem::size() /* throws(IOException) */
{
    return npc(_data)->size();
}

poi::poifs::filesystem::BlockStore_ChainLoopDetector* poi::poifs::filesystem::NPOIFSFileSystem::getChainLoopDetector() /* throws(IOException) */
{
    return new BlockStore_ChainLoopDetector(this, npc(_data)->size());
}

poi::poifs::property::NPropertyTable* poi::poifs::filesystem::NPOIFSFileSystem::_get_property_table()
{
    return _property_table;
}

poi::poifs::filesystem::NPOIFSMiniStore* poi::poifs::filesystem::NPOIFSFileSystem::getMiniStore()
{
    return _mini_store;
}

void poi::poifs::filesystem::NPOIFSFileSystem::addDocument(NPOIFSDocument* document)
{
    npc(_property_table)->addProperty(npc(document)->getDocumentProperty());
}

void poi::poifs::filesystem::NPOIFSFileSystem::addDirectory(::poi::poifs::property::DirectoryProperty* directory)
{
    npc(_property_table)->addProperty(directory);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::NPOIFSFileSystem::createDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */
{
    return npc(getRoot())->createDocument(name, stream);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::NPOIFSFileSystem::createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */
{
    return npc(getRoot())->createDocument(name, size, writer);
}

poi::poifs::filesystem::DirectoryEntry* poi::poifs::filesystem::NPOIFSFileSystem::createDirectory(::java::lang::String* name) /* throws(IOException) */
{
    return npc(getRoot())->createDirectory(name);
}

poi::poifs::filesystem::DocumentEntry* poi::poifs::filesystem::NPOIFSFileSystem::createOrUpdateDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */
{
    return npc(getRoot())->createOrUpdateDocument(name, stream);
}

bool poi::poifs::filesystem::NPOIFSFileSystem::isInPlaceWriteable()
{
    if(dynamic_cast< ::poi::poifs::nio::FileBackedDataSource* >(_data) != nullptr) {
        if(npc((java_cast< ::poi::poifs::nio::FileBackedDataSource* >(_data)))->isWriteable()) {
            return true;
        }
    }
    return false;
}

void poi::poifs::filesystem::NPOIFSFileSystem::writeFilesystem() /* throws(IOException) */
{
    if(dynamic_cast< ::poi::poifs::nio::FileBackedDataSource* >(_data) != nullptr) {
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"POIFS opened from an inputstream, so writeFilesystem() may "_j)->append(u"not be called. Use writeFilesystem(OutputStream) instead"_j)->toString());
    }
    if(!npc((java_cast< ::poi::poifs::nio::FileBackedDataSource* >(_data)))->isWriteable()) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"POIFS opened in read only mode, so writeFilesystem() may "_j)->append(u"not be called. Open the FileSystem in read-write mode first"_j)->toString());
    }
    syncWithDataSource();
}

void poi::poifs::filesystem::NPOIFSFileSystem::writeFilesystem(::java::io::OutputStream* stream) /* throws(IOException) */
{
    syncWithDataSource();
    npc(_data)->copyTo(stream);
}

void poi::poifs::filesystem::NPOIFSFileSystem::syncWithDataSource() /* throws(IOException) */
{
    npc(_mini_store)->syncWithDataSource();
    auto propStream = new NPOIFSStream(this, npc(_header)->getPropertyStart());
    npc(_property_table)->preWrite();
    npc(_property_table)->write(propStream);
    auto hbw = new ::poi::poifs::storage::HeaderBlockWriter(_header);
    npc(hbw)->writeBlock(getBlockAt(-int32_t(1)));
    for (auto _i = npc(_bat_blocks)->iterator(); _i->hasNext(); ) {
        ::poi::poifs::storage::BATBlock* bat = java_cast< ::poi::poifs::storage::BATBlock* >(_i->next());
        {
            auto block = getBlockAt(npc(bat)->getOurBlockIndex());
            ::poi::poifs::storage::BlockAllocationTableWriter::writeBlock(bat, block);
        }
    }
    for (auto _i = npc(_xbat_blocks)->iterator(); _i->hasNext(); ) {
        ::poi::poifs::storage::BATBlock* bat = java_cast< ::poi::poifs::storage::BATBlock* >(_i->next());
        {
            auto block = getBlockAt(npc(bat)->getOurBlockIndex());
            ::poi::poifs::storage::BlockAllocationTableWriter::writeBlock(bat, block);
        }
    }
}

void poi::poifs::filesystem::NPOIFSFileSystem::close() /* throws(IOException) */
{
    npc(_data)->close();
}

void poi::poifs::filesystem::NPOIFSFileSystem::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length != 2) {
        npc(::java::lang::System::err())->println(u"two arguments required: input filename and output filename"_j);
        ::java::lang::System::exit(1);
    }
    auto istream = new ::java::io::FileInputStream((*args)[int32_t(0)]);
    {
        auto finally1 = finally([&] {
            npc(istream)->close();
        });
        {
            auto ostream = new ::java::io::FileOutputStream((*args)[int32_t(1)]);
            {
                auto finally2 = finally([&] {
                    npc(ostream)->close();
                });
                {
                    auto fs = new NPOIFSFileSystem(static_cast< ::java::io::InputStream* >(istream));
                    {
                        auto finally3 = finally([&] {
                            npc(fs)->close();
                        });
                        {
                            npc(fs)->writeFilesystem(ostream);
                        }
                    }

                }
            }

        }
    }

}

poi::poifs::filesystem::DirectoryNode* poi::poifs::filesystem::NPOIFSFileSystem::getRoot()
{
    if(_root == nullptr) {
        _root = new DirectoryNode(static_cast< ::poi::poifs::property::DirectoryProperty* >(npc(_property_table)->getRoot()), this, static_cast< DirectoryNode* >(nullptr));
    }
    return _root;
}

poi::poifs::filesystem::DocumentInputStream* poi::poifs::filesystem::NPOIFSFileSystem::createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */
{
    return npc(getRoot())->createDocumentInputStream(documentName);
}

void poi::poifs::filesystem::NPOIFSFileSystem::remove(EntryNode* entry) /* throws(IOException) */
{
    if(dynamic_cast< DocumentEntry* >(entry) != nullptr) {
        auto doc = new NPOIFSDocument(java_cast< ::poi::poifs::property::DocumentProperty* >(npc(entry)->getProperty()), this);
        npc(doc)->free();
    }
    npc(_property_table)->removeProperty(npc(entry)->getProperty());
}

java::lang::ObjectArray* poi::poifs::filesystem::NPOIFSFileSystem::getViewableArray_()
{
    if(preferArray_()) {
        return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->getViewableArray_();
    }
    return new ::java::lang::ObjectArray(int32_t(0));
}

java::util::Iterator* poi::poifs::filesystem::NPOIFSFileSystem::getViewableIterator()
{
    if(!preferArray_()) {
        return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->getViewableIterator();
    }
    return npc(::java::util::Collections::emptyList())->iterator();
}

bool poi::poifs::filesystem::NPOIFSFileSystem::preferArray_()
{
    return npc((java_cast< ::poi::poifs::dev::POIFSViewable* >(getRoot())))->preferArray_();
}

java::lang::String* poi::poifs::filesystem::NPOIFSFileSystem::getShortDescription()
{
    return u"POIFS FileSystem"_j;
}

int32_t poi::poifs::filesystem::NPOIFSFileSystem::getBigBlockSize()
{
    return npc(bigBlockSize)->getBigBlockSize();
}

poi::poifs::common::POIFSBigBlockSize* poi::poifs::filesystem::NPOIFSFileSystem::getBigBlockSizeDetails()
{
    return bigBlockSize;
}

int32_t poi::poifs::filesystem::NPOIFSFileSystem::getBlockStoreBlockSize()
{
    return getBigBlockSize();
}

poi::poifs::property::NPropertyTable* poi::poifs::filesystem::NPOIFSFileSystem::getPropertyTable()
{
    return _property_table;
}

poi::poifs::storage::HeaderBlock* poi::poifs::filesystem::NPOIFSFileSystem::getHeaderBlock()
{
    return _header;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::NPOIFSFileSystem::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.NPOIFSFileSystem", 48);
    return c;
}

void poi::poifs::filesystem::NPOIFSFileSystem::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(NPOIFSFileSystem::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::filesystem::NPOIFSFileSystem::getClass0()
{
    return class_();
}

