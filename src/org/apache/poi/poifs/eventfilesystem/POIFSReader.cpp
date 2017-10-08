// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReader.java
#include <org/apache/poi/poifs/eventfilesystem/POIFSReader.hpp>

#include <java/io/FileInputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReader_SampleListener.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderEvent.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderListener.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderRegistry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSDocument.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyTable.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/BlockList.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>
#include <org/apache/poi/poifs/storage/SmallBlockTableReader.hpp>
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

poi::poifs::eventfilesystem::POIFSReader::POIFSReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::eventfilesystem::POIFSReader::POIFSReader() 
    : POIFSReader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::eventfilesystem::POIFSReader::init()
{
    notifyEmptyDirectories = false;
}

void poi::poifs::eventfilesystem::POIFSReader::ctor()
{
    super::ctor();
    init();
    registry = new POIFSReaderRegistry();
    registryClosed = false;
}

void poi::poifs::eventfilesystem::POIFSReader::read(::java::io::InputStream* stream) /* throws(IOException) */
{
    registryClosed = true;
    auto header_block = new ::poi::poifs::storage::HeaderBlock(stream);
    auto data_blocks = new ::poi::poifs::storage::RawDataBlockList(stream, npc(header_block)->getBigBlockSize());
    new ::poi::poifs::storage::BlockAllocationTableReader(npc(header_block)->getBigBlockSize(), npc(header_block)->getBATCount(), npc(header_block)->getBATArray_(), npc(header_block)->getXBATCount(), npc(header_block)->getXBATIndex(), data_blocks);
    auto properties = new ::poi::poifs::property::PropertyTable(header_block, data_blocks);
    auto root = npc(properties)->getRoot();
    processProperties(::poi::poifs::storage::SmallBlockTableReader::getSmallDocumentBlocks(npc(header_block)->getBigBlockSize(), data_blocks, root, npc(header_block)->getSBATStart()), data_blocks, npc(root)->getChildren(), new ::poi::poifs::filesystem::POIFSDocumentPath());
}

void poi::poifs::eventfilesystem::POIFSReader::registerListener(POIFSReaderListener* listener)
{
    if(listener == nullptr) {
        throw new ::java::lang::NullPointerException();
    }
    if(registryClosed) {
        throw new ::java::lang::IllegalStateException();
    }
    npc(registry)->registerListener(listener);
}

void poi::poifs::eventfilesystem::POIFSReader::registerListener(POIFSReaderListener* listener, ::java::lang::String* name)
{
    registerListener(listener, nullptr, name);
}

void poi::poifs::eventfilesystem::POIFSReader::registerListener(POIFSReaderListener* listener, ::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* name)
{
    if((listener == nullptr) || (name == nullptr) || (npc(name)->length() == 0)) {
        throw new ::java::lang::NullPointerException();
    }
    if(registryClosed) {
        throw new ::java::lang::IllegalStateException();
    }
    npc(registry)->registerListener(listener, (path == nullptr) ? new ::poi::poifs::filesystem::POIFSDocumentPath() : path, name);
}

void poi::poifs::eventfilesystem::POIFSReader::setNotifyEmptyDirectories(bool notifyEmptyDirectories)
{
    this->notifyEmptyDirectories = notifyEmptyDirectories;
}

void poi::poifs::eventfilesystem::POIFSReader::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"at least one argument required: input filename(s)"_j);
        ::java::lang::System::exit(1);
    }
    for(auto arg : *npc(args)) {
        auto reader = new POIFSReader();
        POIFSReaderListener* listener = new POIFSReader_SampleListener();
        npc(reader)->registerListener(listener);
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"reading "_j)->append(arg)->toString());
        auto istream = new ::java::io::FileInputStream(arg);
        npc(reader)->read(istream);
        npc(istream)->close();
    }
}

void poi::poifs::eventfilesystem::POIFSReader::processProperties(::poi::poifs::storage::BlockList* small_blocks, ::poi::poifs::storage::BlockList* big_blocks, ::java::util::Iterator* properties, ::poi::poifs::filesystem::POIFSDocumentPath* path) /* throws(IOException) */
{
    if(!npc(properties)->hasNext() && notifyEmptyDirectories) {
        auto listeners = npc(registry)->getListeners(path, u"."_j);
        while (npc(listeners)->hasNext()) {
            auto pl = java_cast< POIFSReaderListener* >(npc(listeners)->next());
            auto pe = new POIFSReaderEvent(nullptr, path, nullptr);
            npc(pl)->processPOIFSReaderEvent(pe);
        }
        return;
    }
    while (npc(properties)->hasNext()) {
        auto property = java_cast< ::poi::poifs::property::Property* >(npc(properties)->next());
        auto name = npc(property)->getName();
        if(npc(property)->isDirectory()) {
            auto new_path = new ::poi::poifs::filesystem::POIFSDocumentPath(path, new ::java::lang::StringArray({name}));
            auto dp = java_cast< ::poi::poifs::property::DirectoryProperty* >(property);
            processProperties(small_blocks, big_blocks, npc(dp)->getChildren(), new_path);
        } else {
            auto startBlock = npc(property)->getStartBlock();
            auto listeners = npc(registry)->getListeners(path, name);
            if(npc(listeners)->hasNext()) {
                auto size = npc(property)->getSize();
                ::poi::poifs::filesystem::OPOIFSDocument* document = nullptr;
                if(npc(property)->shouldUseSmallBlocks()) {
                    document = new ::poi::poifs::filesystem::OPOIFSDocument(name, npc(small_blocks)->fetchBlocks(startBlock, -int32_t(1)), size);
                } else {
                    document = new ::poi::poifs::filesystem::OPOIFSDocument(name, npc(big_blocks)->fetchBlocks(startBlock, -int32_t(1)), size);
                }
                while (npc(listeners)->hasNext()) {
                    auto listener = java_cast< POIFSReaderListener* >(npc(listeners)->next());
                    npc(listener)->processPOIFSReaderEvent(new POIFSReaderEvent(new ::poi::poifs::filesystem::DocumentInputStream(document), path, name));
                }
            } else {
                if(npc(property)->shouldUseSmallBlocks()) {
                    npc(small_blocks)->fetchBlocks(startBlock, -int32_t(1));
                } else {
                    npc(big_blocks)->fetchBlocks(startBlock, -int32_t(1));
                }
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::eventfilesystem::POIFSReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.eventfilesystem.POIFSReader", 48);
    return c;
}

java::lang::Class* poi::poifs::eventfilesystem::POIFSReader::getClass0()
{
    return class_();
}

