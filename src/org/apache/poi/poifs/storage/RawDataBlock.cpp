// Generated from /POI/java/org/apache/poi/poifs/storage/RawDataBlock.java
#include <org/apache/poi/poifs/storage/RawDataBlock.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::storage::RawDataBlock::RawDataBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::storage::RawDataBlock::RawDataBlock(::java::io::InputStream* stream)  /* throws(IOException) */
    : RawDataBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

poi::poifs::storage::RawDataBlock::RawDataBlock(::java::io::InputStream* stream, int32_t blockSize)  /* throws(IOException) */
    : RawDataBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,blockSize);
}

poi::util::POILogger*& poi::poifs::storage::RawDataBlock::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::poifs::storage::RawDataBlock::log_;

void poi::poifs::storage::RawDataBlock::ctor(::java::io::InputStream* stream) /* throws(IOException) */
{
    ctor(stream, ::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE);
}

void poi::poifs::storage::RawDataBlock::ctor(::java::io::InputStream* stream, int32_t blockSize) /* throws(IOException) */
{
    super::ctor();
    _data = new ::int8_tArray(blockSize);
    auto count = ::poi::util::IOUtils::readFully(stream, _data);
    _hasData = (count > 0);
    if(count == -int32_t(1)) {
        _eof = true;
    } else if(count != blockSize) {
        _eof = true;
        auto type = ::java::lang::StringBuilder().append(u" byte"_j)->append(((count == 1) ? (u""_j) : (u"s"_j)))->toString();
        npc(log_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unable to read entire block; "_j)->append(count)
            ->append(type)
            ->append(u" read before EOF; expected "_j)
            ->append(blockSize)
            ->append(u" bytes. Your document "_j)
            ->append(u"was either written by software that "_j)
            ->append(u"ignores the spec, or has been truncated!"_j)->toString())}));
    } else {
        _eof = false;
    }
}

bool poi::poifs::storage::RawDataBlock::eof()
{
    return _eof;
}

bool poi::poifs::storage::RawDataBlock::hasData()
{
    return _hasData;
}

java::lang::String* poi::poifs::storage::RawDataBlock::toString()
{
    return ::java::lang::StringBuilder().append(u"RawDataBlock of size "_j)->append(npc(_data)->length)->toString();
}

int8_tArray* poi::poifs::storage::RawDataBlock::getData() /* throws(IOException) */
{
    if(!hasData()) {
        throw new ::java::io::IOException(u"Cannot return empty data"_j);
    }
    return _data;
}

int32_t poi::poifs::storage::RawDataBlock::getBigBlockSize()
{
    return npc(_data)->length;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::storage::RawDataBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.RawDataBlock", 41);
    return c;
}

void poi::poifs::storage::RawDataBlock::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(RawDataBlock::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::storage::RawDataBlock::getClass0()
{
    return class_();
}

