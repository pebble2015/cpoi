// Generated from /POI/java/org/apache/poi/poifs/storage/HeaderBlock.java
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>

#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/OldExcelFormatException.hpp>
#include <org/apache/poi/poifs/common/POIFSBigBlockSize.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>
#include <org/apache/poi/poifs/filesystem/NotOLE2FileException.hpp>
#include <org/apache/poi/poifs/filesystem/OfficeXmlFileException.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockConstants.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/IntegerField.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LongField.hpp>
#include <org/apache/poi/util/ShortField.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::storage::HeaderBlock::HeaderBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::storage::HeaderBlock::HeaderBlock(::java::io::InputStream* stream)  /* throws(IOException) */
    : HeaderBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

org::apache::poi::poifs::storage::HeaderBlock::HeaderBlock(::java::nio::ByteBuffer* buffer)  /* throws(IOException) */
    : HeaderBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(buffer);
}

org::apache::poi::poifs::storage::HeaderBlock::HeaderBlock(::int8_tArray* data)  /* throws(IOException) */
    : HeaderBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

org::apache::poi::poifs::storage::HeaderBlock::HeaderBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) 
    : HeaderBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(bigBlockSize);
}

constexpr int8_t org::apache::poi::poifs::storage::HeaderBlock::_default_value;

void org::apache::poi::poifs::storage::HeaderBlock::ctor(::java::io::InputStream* stream) /* throws(IOException) */
{
    ctor(readFirst512(stream));
    if(npc(bigBlockSize)->getBigBlockSize() != 512) {
        auto rest = npc(bigBlockSize)->getBigBlockSize() - int32_t(512);
        auto tmp = new ::int8_tArray(rest);
        ::org::apache::poi::util::IOUtils::readFully(stream, tmp);
    }
}

void org::apache::poi::poifs::storage::HeaderBlock::ctor(::java::nio::ByteBuffer* buffer) /* throws(IOException) */
{
    ctor(::org::apache::poi::util::IOUtils::toByteArray_(buffer, ::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE));
}

void org::apache::poi::poifs::storage::HeaderBlock::ctor(::int8_tArray* data) /* throws(IOException) */
{
    super::ctor();
    this->_data = npc(data)->clone();
    auto fm = ::org::apache::poi::poifs::filesystem::FileMagic::valueOf(data);
    {
        ::java::lang::String* exp;
        ::java::lang::String* act;
        {
            auto v = fm;
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OLE2)) {
                goto end_switch0;;
            }
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML)) {
                throw new ::org::apache::poi::poifs::filesystem::OfficeXmlFileException(::java::lang::StringBuilder().append(u"The supplied data appears to be in the Office 2007+ XML. "_j)->append(u"You are calling the part of POI that deals with OLE2 Office Documents. "_j)
                    ->append(u"You need to call a different part of POI to process this data (eg XSSF instead of HSSF)"_j)->toString());
            }
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::XML)) {
                throw new ::org::apache::poi::poifs::filesystem::NotOLE2FileException(::java::lang::StringBuilder().append(u"The supplied data appears to be a raw XML file. "_j)->append(u"Formats such as Office 2003 XML are not supported"_j)->toString());
            }
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::XML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::MSWRITE)) {
                throw new ::org::apache::poi::poifs::filesystem::NotOLE2FileException(::java::lang::StringBuilder().append(u"The supplied data appears to be in the old MS Write format. "_j)->append(u"Apache POI doesn't currently support this format"_j)->toString());
            }
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::XML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::MSWRITE) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF2) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF3) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF4)) {
                throw new ::org::apache::poi::hssf::OldExcelFormatException(::java::lang::StringBuilder().append(u"The supplied data appears to be in "_j)->append(static_cast< ::java::lang::Object* >(fm))
                    ->append(u" format. "_j)
                    ->append(u"HSSF only supports the BIFF8 format, try OldExcelExtractor"_j)->toString());
            }
            if(((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::XML) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::MSWRITE) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF2) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF3) || (v == ::org::apache::poi::poifs::filesystem::FileMagic::BIFF4) || ((v != ::org::apache::poi::poifs::filesystem::FileMagic::OLE2) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::OOXML) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::XML) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::MSWRITE) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::BIFF2) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::BIFF3) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::BIFF4)))) {
                auto exp = ::org::apache::poi::util::HexDump::longToHex(_signature);
                auto act = ::org::apache::poi::util::HexDump::longToHex(::org::apache::poi::util::LittleEndian::getLong(data, 0));
                throw new ::org::apache::poi::poifs::filesystem::NotOLE2FileException(::java::lang::StringBuilder().append(u"Invalid header signature; read "_j)->append(act)
                    ->append(u", expected "_j)
                    ->append(exp)
                    ->append(u" - Your file appears not to be a valid OLE2 document"_j)->toString());
            }
end_switch0:;
        }
    }

    if((*_data)[int32_t(30)] == 12) {
        this->bigBlockSize = ::org::apache::poi::poifs::common::POIFSConstants::LARGER_BIG_BLOCK_SIZE_DETAILS();
    } else if((*_data)[int32_t(30)] == 9) {
        this->bigBlockSize = ::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE_DETAILS();
    } else {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Unsupported blocksize  (2^"_j)->append((*_data)[int32_t(30)])
            ->append(u"). Expected 2^9 or 2^12."_j)->toString());
    }
    _bat_count = (new ::org::apache::poi::util::IntegerField(_bat_count_offset, data))->get();
    _property_start = (new ::org::apache::poi::util::IntegerField(_property_start_offset, _data))->get();
    _sbat_start = (new ::org::apache::poi::util::IntegerField(_sbat_start_offset, _data))->get();
    _sbat_count = (new ::org::apache::poi::util::IntegerField(_sbat_block_count_offset, _data))->get();
    _xbat_start = (new ::org::apache::poi::util::IntegerField(_xbat_start_offset, _data))->get();
    _xbat_count = (new ::org::apache::poi::util::IntegerField(_xbat_count_offset, _data))->get();
}

void org::apache::poi::poifs::storage::HeaderBlock::ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize)
{
    super::ctor();
    this->bigBlockSize = bigBlockSize;
    _data = new ::int8_tArray(::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE);
    ::java::util::Arrays::fill(_data, _default_value);
    new ::org::apache::poi::util::LongField(_signature_offset, _signature, _data);
    new ::org::apache::poi::util::IntegerField(int32_t(8), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(12), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(16), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(20), int32_t(0), _data);
    new ::org::apache::poi::util::ShortField(int32_t(24), static_cast< int16_t >(int32_t(59)), _data);
    new ::org::apache::poi::util::ShortField(int32_t(26), static_cast< int16_t >(int32_t(3)), _data);
    new ::org::apache::poi::util::ShortField(int32_t(28), static_cast< int16_t >(-int32_t(2)), _data);
    new ::org::apache::poi::util::ShortField(int32_t(30), npc(bigBlockSize)->getHeaderValue(), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(32), int32_t(6), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(36), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(40), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(52), int32_t(0), _data);
    new ::org::apache::poi::util::IntegerField(int32_t(56), int32_t(4096), _data);
    _bat_count = 0;
    _sbat_count = 0;
    _xbat_count = 0;
    _property_start = ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
    _sbat_start = ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
    _xbat_start = ::org::apache::poi::poifs::common::POIFSConstants::END_OF_CHAIN;
}

int8_tArray* org::apache::poi::poifs::storage::HeaderBlock::readFirst512(::java::io::InputStream* stream) /* throws(IOException) */
{
    clinit();
    auto data = new ::int8_tArray(int32_t(512));
    auto bsCount = ::org::apache::poi::util::IOUtils::readFully(stream, data);
    if(bsCount != 512) {
        throw alertShortRead(bsCount, 512);
    }
    return data;
}

java::io::IOException* org::apache::poi::poifs::storage::HeaderBlock::alertShortRead(int32_t pRead, int32_t expectedReadSize)
{
    clinit();
    int32_t read;
    if(pRead < 0) {
        read = 0;
    } else {
        read = pRead;
    }
    auto type = ::java::lang::StringBuilder().append(u" byte"_j)->append((read == 1 ? (u""_j) : (u"s"_j)))->toString();
    return new ::java::io::IOException(::java::lang::StringBuilder().append(u"Unable to read entire header; "_j)->append(read)
        ->append(type)
        ->append(u" read; expected "_j)
        ->append(expectedReadSize)
        ->append(u" bytes"_j)->toString());
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getPropertyStart()
{
    return _property_start;
}

void org::apache::poi::poifs::storage::HeaderBlock::setPropertyStart(int32_t startBlock)
{
    _property_start = startBlock;
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getSBATStart()
{
    return _sbat_start;
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getSBATCount()
{
    return _sbat_count;
}

void org::apache::poi::poifs::storage::HeaderBlock::setSBATStart(int32_t startBlock)
{
    _sbat_start = startBlock;
}

void org::apache::poi::poifs::storage::HeaderBlock::setSBATBlockCount(int32_t count)
{
    _sbat_count = count;
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getBATCount()
{
    return _bat_count;
}

void org::apache::poi::poifs::storage::HeaderBlock::setBATCount(int32_t count)
{
    _bat_count = count;
}

int32_tArray* org::apache::poi::poifs::storage::HeaderBlock::getBATArray_()
{
    auto result = new ::int32_tArray(::java::lang::Math::min(_bat_count, _max_bats_in_header));
    auto offset = HeaderBlockConstants::_bat_array_offset;
    for (auto j = int32_t(0); j < npc(result)->length; j++) {
        (*result)[j] = ::org::apache::poi::util::LittleEndian::getInt(_data, offset);
        offset += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    }
    return result;
}

void org::apache::poi::poifs::storage::HeaderBlock::setBATArray_(::int32_tArray* bat_array)
{
    auto count = ::java::lang::Math::min(npc(bat_array)->length, _max_bats_in_header);
    auto blank = _max_bats_in_header - count;
    auto offset = HeaderBlockConstants::_bat_array_offset;
    for (auto i = int32_t(0); i < count; i++) {
        ::org::apache::poi::util::LittleEndian::putInt(_data, offset, (*bat_array)[i]);
        offset += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    }
    for (auto i = int32_t(0); i < blank; i++) {
        ::org::apache::poi::util::LittleEndian::putInt(_data, offset, ::org::apache::poi::poifs::common::POIFSConstants::UNUSED_BLOCK);
        offset += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    }
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getXBATCount()
{
    return _xbat_count;
}

void org::apache::poi::poifs::storage::HeaderBlock::setXBATCount(int32_t count)
{
    _xbat_count = count;
}

int32_t org::apache::poi::poifs::storage::HeaderBlock::getXBATIndex()
{
    return _xbat_start;
}

void org::apache::poi::poifs::storage::HeaderBlock::setXBATStart(int32_t startBlock)
{
    _xbat_start = startBlock;
}

org::apache::poi::poifs::common::POIFSBigBlockSize* org::apache::poi::poifs::storage::HeaderBlock::getBigBlockSize()
{
    return bigBlockSize;
}

void org::apache::poi::poifs::storage::HeaderBlock::writeData(::java::io::OutputStream* stream) /* throws(IOException) */
{
    new ::org::apache::poi::util::IntegerField(_bat_count_offset, _bat_count, _data);
    new ::org::apache::poi::util::IntegerField(_property_start_offset, _property_start, _data);
    new ::org::apache::poi::util::IntegerField(_sbat_start_offset, _sbat_start, _data);
    new ::org::apache::poi::util::IntegerField(_sbat_block_count_offset, _sbat_count, _data);
    new ::org::apache::poi::util::IntegerField(_xbat_start_offset, _xbat_start, _data);
    new ::org::apache::poi::util::IntegerField(_xbat_count_offset, _xbat_count, _data);
    npc(stream)->write(_data, 0, 512);
    for (auto i = ::org::apache::poi::poifs::common::POIFSConstants::SMALLER_BIG_BLOCK_SIZE; i < npc(bigBlockSize)->getBigBlockSize(); i++) {
        npc(stream)->write(int32_t(0));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::storage::HeaderBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.storage.HeaderBlock", 40);
    return c;
}

java::lang::Class* org::apache::poi::poifs::storage::HeaderBlock::getClass0()
{
    return class_();
}

