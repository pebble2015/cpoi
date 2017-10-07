// Generated from /POI/java/org/apache/poi/poifs/property/NPropertyTable.java
#include <org/apache/poi/poifs/property/NPropertyTable.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSStream.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyFactory.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::poifs::property::NPropertyTable::NPropertyTable(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::NPropertyTable::NPropertyTable(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock) 
    : NPropertyTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(headerBlock);
}

org::apache::poi::poifs::property::NPropertyTable::NPropertyTable(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* filesystem)  /* throws(IOException) */
    : NPropertyTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(headerBlock,filesystem);
}

org::apache::poi::util::POILogger*& org::apache::poi::poifs::property::NPropertyTable::_logger()
{
    clinit();
    return _logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::poifs::property::NPropertyTable::_logger_;

void org::apache::poi::poifs::property::NPropertyTable::ctor(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock)
{
    super::ctor(headerBlock);
    _bigBigBlockSize = npc(headerBlock)->getBigBlockSize();
}

void org::apache::poi::poifs::property::NPropertyTable::ctor(::org::apache::poi::poifs::storage::HeaderBlock* headerBlock, ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* filesystem) /* throws(IOException) */
{
    super::ctor(headerBlock, buildProperties((new ::org::apache::poi::poifs::filesystem::NPOIFSStream(filesystem, npc(headerBlock)->getPropertyStart()))->iterator(), npc(headerBlock)->getBigBlockSize()));
    _bigBigBlockSize = npc(headerBlock)->getBigBlockSize();
}

java::util::List* org::apache::poi::poifs::property::NPropertyTable::buildProperties(::java::util::Iterator* dataSource, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */
{
    clinit();
    ::java::util::List* properties = new ::java::util::ArrayList();
    while (npc(dataSource)->hasNext()) {
        auto bb = java_cast< ::java::nio::ByteBuffer* >(npc(dataSource)->next());
        ::int8_tArray* data;
        if(npc(bb)->hasArray_() && npc(bb)->arrayOffset() == 0 && npc(npc(bb)->array())->length == npc(bigBlockSize)->getBigBlockSize()) {
            data = npc(bb)->array();
        } else {
            data = new ::int8_tArray(npc(bigBlockSize)->getBigBlockSize());
            auto toRead = npc(data)->length;
            if(npc(bb)->remaining() < npc(bigBlockSize)->getBigBlockSize()) {
                npc(_logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Short Property Block, "_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(npc(bb)->remaining())), static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u" bytes instead of the expected "_j)->append(npc(bigBlockSize)->getBigBlockSize())->toString())}));
                toRead = npc(bb)->remaining();
            }
            npc(bb)->get(data, 0, toRead);
        }
        PropertyFactory::convertToProperties(data, properties);
    }
    return properties;
}

int32_t org::apache::poi::poifs::property::NPropertyTable::countBlocks()
{
    auto rawSize = npc(_properties)->size() * static_cast< int64_t >(::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE);
    auto blkSize = npc(_bigBigBlockSize)->getBigBlockSize();
    auto numBlocks = static_cast< int32_t >((rawSize / blkSize));
    if((rawSize % blkSize) != 0) {
        numBlocks++;
    }
    return numBlocks;
}

void org::apache::poi::poifs::property::NPropertyTable::preWrite()
{
    ::java::util::List* pList = new ::java::util::ArrayList();
    auto i = int32_t(0);
    for (auto _i = npc(_properties)->iterator(); _i->hasNext(); ) {
        Property* p = java_cast< Property* >(_i->next());
        {
            if(p == nullptr)
                continue;

            npc(p)->setIndex(i++);
            npc(pList)->add(static_cast< ::java::lang::Object* >(p));
        }
    }
    for (auto _i = npc(pList)->iterator(); _i->hasNext(); ) {
        Property* p = java_cast< Property* >(_i->next());
        
                        npc(p)->preWrite();

    }
}

void org::apache::poi::poifs::property::NPropertyTable::write(::org::apache::poi::poifs::filesystem::NPOIFSStream* stream) /* throws(IOException) */
{
    auto os = npc(stream)->getOutputStream();
    for (auto _i = npc(_properties)->iterator(); _i->hasNext(); ) {
        Property* property = java_cast< Property* >(_i->next());
        {
            if(property != nullptr) {
                npc(property)->writeData(os);
            }
        }
    }
    npc(os)->close();
    if(getStartBlock() != npc(stream)->getStartBlock()) {
        setStartBlock(npc(stream)->getStartBlock());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::NPropertyTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.NPropertyTable", 44);
    return c;
}

void org::apache::poi::poifs::property::NPropertyTable::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(NPropertyTable::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::poifs::property::NPropertyTable::getClass0()
{
    return class_();
}

