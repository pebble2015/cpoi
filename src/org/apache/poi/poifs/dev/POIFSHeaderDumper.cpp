// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSHeaderDumper.java
#include <org/apache/poi/poifs/dev/POIFSHeaderDumper.hpp>

#include <java/io/FileInputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyTable.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/BlockAllocationTableReader.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <org/apache/poi/poifs/storage/RawDataBlockList.hpp>
#include <org/apache/poi/poifs/storage/SmallBlockTableReader.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/IntList.hpp>
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

poi::poifs::dev::POIFSHeaderDumper::POIFSHeaderDumper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::dev::POIFSHeaderDumper::POIFSHeaderDumper()
    : POIFSHeaderDumper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::dev::POIFSHeaderDumper::main(::java::lang::StringArray* args) /* throws(Exception) */
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"Must specify at least one file to view"_j);
        ::java::lang::System::exit(1);
    }
    for (auto j = int32_t(0); j < npc(args)->length; j++) {
        viewFile((*args)[j]);
    }
}

void poi::poifs::dev::POIFSHeaderDumper::viewFile(::java::lang::String* filename) /* throws(Exception) */
{
    clinit();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Dumping headers from: "_j)->append(filename)->toString());
    ::java::io::InputStream* inp = new ::java::io::FileInputStream(filename);
    auto header_block = new ::poi::poifs::storage::HeaderBlock(inp);
    displayHeader(header_block);
    auto bigBlockSize = npc(header_block)->getBigBlockSize();
    auto data_blocks = new ::poi::poifs::storage::RawDataBlockList(inp, bigBlockSize);
    displayRawBlocksSummary(data_blocks);
    auto batReader = new ::poi::poifs::storage::BlockAllocationTableReader(npc(header_block)->getBigBlockSize(), npc(header_block)->getBATCount(), npc(header_block)->getBATArray_(), npc(header_block)->getXBATCount(), npc(header_block)->getXBATIndex(), data_blocks);
    displayBATReader(u"Big Blocks"_j, batReader);
    auto properties = new ::poi::poifs::property::PropertyTable(header_block, data_blocks);
    auto sbatReader = ::poi::poifs::storage::SmallBlockTableReader::_getSmallDocumentBlockReader(bigBlockSize, data_blocks, npc(properties)->getRoot(), npc(header_block)->getSBATStart());
    displayBATReader(u"Small Blocks"_j, sbatReader);
    displayPropertiesSummary(properties);
}

void poi::poifs::dev::POIFSHeaderDumper::displayHeader(::poi::poifs::storage::HeaderBlock* header_block) /* throws(Exception) */
{
    clinit();
    npc(::java::lang::System::out())->println(u"Header Details:"_j);
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" Block size: "_j)->append(npc(npc(header_block)->getBigBlockSize())->getBigBlockSize())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" BAT (FAT) header blocks: "_j)->append(npc(npc(header_block)->getBATArray_())->length)->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" BAT (FAT) block count: "_j)->append(npc(header_block)->getBATCount())->toString());
    if(npc(header_block)->getBATCount() > 0)
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" BAT (FAT) block 1 at: "_j)->append((*npc(header_block)->getBATArray_())[int32_t(0)])->toString());

    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" XBAT (FAT) block count: "_j)->append(npc(header_block)->getXBATCount())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" XBAT (FAT) block 1 at: "_j)->append(npc(header_block)->getXBATIndex())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" SBAT (MiniFAT) block count: "_j)->append(npc(header_block)->getSBATCount())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" SBAT (MiniFAT) block 1 at: "_j)->append(npc(header_block)->getSBATStart())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" Property table at: "_j)->append(npc(header_block)->getPropertyStart())->toString());
    npc(::java::lang::System::out())->println(u""_j);
}

void poi::poifs::dev::POIFSHeaderDumper::displayRawBlocksSummary(::poi::poifs::storage::RawDataBlockList* data_blocks) /* throws(Exception) */
{
    clinit();
    npc(::java::lang::System::out())->println(u"Raw Blocks Details:"_j);
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" Number of blocks: "_j)->append(npc(data_blocks)->blockCount())->toString());
    for (auto i = int32_t(0); i < ::java::lang::Math::min(int32_t(16), npc(data_blocks)->blockCount()); i++) {
        auto block = npc(data_blocks)->get(i);
        auto data = new ::int8_tArray(::java::lang::Math::min(int32_t(48), npc(npc(block)->getData())->length));
        ::java::lang::System::arraycopy(npc(block)->getData(), 0, data, 0, npc(data)->length);
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" Block #"_j)->append(i)
            ->append(u":"_j)->toString());
        npc(::java::lang::System::out())->println(::poi::util::HexDump::dump(data, 0, 0));
    }
    npc(::java::lang::System::out())->println(u""_j);
}

void poi::poifs::dev::POIFSHeaderDumper::displayBATReader(::java::lang::String* type, ::poi::poifs::storage::BlockAllocationTableReader* batReader) /* throws(Exception) */
{
    clinit();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Sectors, as referenced from the "_j)->append(type)
        ->append(u" FAT:"_j)->toString());
    auto entries = npc(batReader)->getEntries();
    for (auto i = int32_t(0); i < npc(entries)->size(); i++) {
        auto bn = npc(entries)->get(i);
        auto bnS = ::java::lang::Integer::toString(bn);
        if(bn == ::poi::poifs::common::POIFSConstants::END_OF_CHAIN) {
            bnS = u"End Of Chain"_j;
        } else if(bn == ::poi::poifs::common::POIFSConstants::DIFAT_SECTOR_BLOCK) {
            bnS = u"DI Fat Block"_j;
        } else if(bn == ::poi::poifs::common::POIFSConstants::FAT_SECTOR_BLOCK) {
            bnS = u"Normal Fat Block"_j;
        } else if(bn == ::poi::poifs::common::POIFSConstants::UNUSED_BLOCK) {
            bnS = u"Block Not Used (Free)"_j;
        }
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"  Block  # "_j)->append(i)
            ->append(u" -> "_j)
            ->append(bnS)->toString());
    }
    npc(::java::lang::System::out())->println(u""_j);
}

void poi::poifs::dev::POIFSHeaderDumper::displayPropertiesSummary(::poi::poifs::property::PropertyTable* properties)
{
    clinit();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Mini Stream starts at "_j)->append(npc(npc(properties)->getRoot())->getStartBlock())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Mini Stream length is "_j)->append(npc(npc(properties)->getRoot())->getSize())->toString());
    npc(::java::lang::System::out())->println();
    npc(::java::lang::System::out())->println(u"Properties and their block start:"_j);
    displayProperties(npc(properties)->getRoot(), u""_j);
    npc(::java::lang::System::out())->println(u""_j);
}

void poi::poifs::dev::POIFSHeaderDumper::displayProperties(::poi::poifs::property::DirectoryProperty* prop, ::java::lang::String* indent)
{
    clinit();
    auto nextIndent = ::java::lang::StringBuilder().append(indent)->append(u"  "_j)->toString();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(indent)->append(u"-> "_j)
        ->append(npc(prop)->getName())->toString());
    for (auto _i = npc(prop)->iterator(); _i->hasNext(); ) {
        ::poi::poifs::property::Property* cp = java_cast< ::poi::poifs::property::Property* >(_i->next());
        {
            if(dynamic_cast< ::poi::poifs::property::DirectoryProperty* >(cp) != nullptr) {
                displayProperties(java_cast< ::poi::poifs::property::DirectoryProperty* >(cp), nextIndent);
            } else {
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(nextIndent)->append(u"=> "_j)
                    ->append(npc(cp)->getName())->toString());
                npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(nextIndent)->append(u"   "_j)
                    ->append(npc(cp)->getSize())
                    ->append(u" bytes in "_j)->toString());
                if(npc(cp)->shouldUseSmallBlocks()) {
                    npc(::java::lang::System::out())->print(u"mini"_j);
                } else {
                    npc(::java::lang::System::out())->print(u"main"_j);
                }
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u" stream, starts at "_j)->append(npc(cp)->getStartBlock())->toString());
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::dev::POIFSHeaderDumper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.dev.POIFSHeaderDumper", 42);
    return c;
}

java::lang::Class* poi::poifs::dev::POIFSHeaderDumper::getClass0()
{
    return class_();
}

