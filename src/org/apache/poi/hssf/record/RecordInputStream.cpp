// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/BiffHeaderInput.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/EOFRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream_LeftoverDataException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream_SimpleHeaderInput.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8DecryptingStream.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianInputStream.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::record::RecordInputStream::RecordInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RecordInputStream::RecordInputStream(::java::io::InputStream* in)  /* throws(RecordFormatException) */
    : RecordInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::hssf::record::RecordInputStream::RecordInputStream(::java::io::InputStream* in, ::org::apache::poi::poifs::crypt::EncryptionInfo* key, int32_t initialOffset)  /* throws(RecordFormatException) */
    : RecordInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,key,initialOffset);
}

constexpr int16_t org::apache::poi::hssf::record::RecordInputStream::MAX_RECORD_DATA_SIZE;

constexpr int32_t org::apache::poi::hssf::record::RecordInputStream::INVALID_SID_VALUE;

constexpr int32_t org::apache::poi::hssf::record::RecordInputStream::DATA_LEN_NEEDS_TO_BE_READ;

int8_tArray*& org::apache::poi::hssf::record::RecordInputStream::EMPTY_BYTE_ARRAY()
{
    clinit();
    return EMPTY_BYTE_ARRAY_;
}
int8_tArray* org::apache::poi::hssf::record::RecordInputStream::EMPTY_BYTE_ARRAY_;

void org::apache::poi::hssf::record::RecordInputStream::ctor(::java::io::InputStream* in) /* throws(RecordFormatException) */
{
    ctor(in, nullptr, int32_t(0));
}

void org::apache::poi::hssf::record::RecordInputStream::ctor(::java::io::InputStream* in, ::org::apache::poi::poifs::crypt::EncryptionInfo* key, int32_t initialOffset) /* throws(RecordFormatException) */
{
    super::ctor();
    if(key == nullptr) {
        _dataInput = getLEI(in);
        _bhi = new RecordInputStream_SimpleHeaderInput(in);
    } else {
        auto bds = new ::org::apache::poi::hssf::record::crypto::Biff8DecryptingStream(in, initialOffset, key);
        _dataInput = bds;
        _bhi = bds;
    }
    _nextSid = readNextSid();
}

org::apache::poi::util::LittleEndianInput* org::apache::poi::hssf::record::RecordInputStream::getLEI(::java::io::InputStream* is)
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::util::LittleEndianInput* >(is) != nullptr) {
        return java_cast< ::org::apache::poi::util::LittleEndianInput* >(is);
    }
    return new ::org::apache::poi::util::LittleEndianInputStream(is);
}

int32_t org::apache::poi::hssf::record::RecordInputStream::available()
{
    return remaining();
}

int32_t org::apache::poi::hssf::record::RecordInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{
    auto limit = ::java::lang::Math::min(len, remaining());
    if(limit == 0) {
        return 0;
    }
    readFully(b, off, limit);
    return limit;
}

int16_t org::apache::poi::hssf::record::RecordInputStream::getSid()
{
    return static_cast< int16_t >(_currentSid);
}

bool org::apache::poi::hssf::record::RecordInputStream::hasNextRecord() /* throws(LeftoverDataException) */
{
    if(_currentDataLength != -int32_t(1) && _currentDataLength != _currentDataOffset) {
        throw new RecordInputStream_LeftoverDataException(_currentSid, remaining());
    }
    if(_currentDataLength != DATA_LEN_NEEDS_TO_BE_READ) {
        _nextSid = readNextSid();
    }
    return _nextSid != INVALID_SID_VALUE;
}

int32_t org::apache::poi::hssf::record::RecordInputStream::readNextSid()
{
    auto nAvailable = npc(_bhi)->available();
    if(nAvailable < EOFRecord::ENCODED_SIZE) {
        if(nAvailable > 0) {
        }
        return INVALID_SID_VALUE;
    }
    auto result = npc(_bhi)->readRecordSID();
    if(result == INVALID_SID_VALUE) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Found invalid sid ("_j)->append(result)
            ->append(u")"_j)->toString());
    }
    _currentDataLength = DATA_LEN_NEEDS_TO_BE_READ;
    return result;
}

void org::apache::poi::hssf::record::RecordInputStream::nextRecord() /* throws(RecordFormatException) */
{
    if(_nextSid == INVALID_SID_VALUE) {
        throw new ::java::lang::IllegalStateException(u"EOF - next record not available"_j);
    }
    if(_currentDataLength != DATA_LEN_NEEDS_TO_BE_READ) {
        throw new ::java::lang::IllegalStateException(u"Cannot call nextRecord() without checking hasNextRecord() first"_j);
    }
    _currentSid = _nextSid;
    _currentDataOffset = 0;
    _currentDataLength = npc(_bhi)->readDataSize();
    if(_currentDataLength > MAX_RECORD_DATA_SIZE) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"The content of an excel record cannot exceed "_j)->append(MAX_RECORD_DATA_SIZE)
            ->append(u" bytes"_j)->toString());
    }
}

void org::apache::poi::hssf::record::RecordInputStream::checkRecordPosition(int32_t requiredByteCount)
{
    auto nAvailable = remaining();
    if(nAvailable >= requiredByteCount) {
        return;
    }
    if(nAvailable == 0 && isContinueNext()) {
        nextRecord();
        return;
    }
    throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Not enough data ("_j)->append(nAvailable)
        ->append(u") to read requested ("_j)
        ->append(requiredByteCount)
        ->append(u") bytes"_j)->toString());
}

int8_t org::apache::poi::hssf::record::RecordInputStream::readByte()
{
    checkRecordPosition(::org::apache::poi::util::LittleEndianConsts::BYTE_SIZE);
    _currentDataOffset += ::org::apache::poi::util::LittleEndianConsts::BYTE_SIZE;
    return npc(_dataInput)->readByte();
}

int16_t org::apache::poi::hssf::record::RecordInputStream::readShort()
{
    checkRecordPosition(::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE);
    _currentDataOffset += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    return npc(_dataInput)->readShort();
}

int32_t org::apache::poi::hssf::record::RecordInputStream::readInt()
{
    checkRecordPosition(::org::apache::poi::util::LittleEndianConsts::INT_SIZE);
    _currentDataOffset += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    return npc(_dataInput)->readInt();
}

int64_t org::apache::poi::hssf::record::RecordInputStream::readLong()
{
    checkRecordPosition(::org::apache::poi::util::LittleEndianConsts::LONG_SIZE);
    _currentDataOffset += ::org::apache::poi::util::LittleEndianConsts::LONG_SIZE;
    return npc(_dataInput)->readLong();
}

int32_t org::apache::poi::hssf::record::RecordInputStream::readUByte()
{
    return readByte() & int32_t(255);
}

int32_t org::apache::poi::hssf::record::RecordInputStream::readUShort()
{
    checkRecordPosition(::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE);
    _currentDataOffset += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    return npc(_dataInput)->readUShort();
}

double org::apache::poi::hssf::record::RecordInputStream::readDouble()
{
    auto valueLongBits = readLong();
    auto result = ::java::lang::Double::longBitsToDouble(valueLongBits);
    if(::java::lang::Double::isNaN(result)) {
    }
    return result;
}

void org::apache::poi::hssf::record::RecordInputStream::readPlain(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, 0, npc(buf)->length, true);
}

void org::apache::poi::hssf::record::RecordInputStream::readFully(::int8_tArray* buf)
{
    readFully(buf, 0, npc(buf)->length, false);
}

void org::apache::poi::hssf::record::RecordInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len)
{
    readFully(buf, off, len, false);
}

void org::apache::poi::hssf::record::RecordInputStream::readFully(::int8_tArray* buf, int32_t off, int32_t len, bool isPlain)
{
    auto origLen = len;
    if(buf == nullptr) {
        throw new ::java::lang::NullPointerException();
    } else if(off < 0 || len < 0 || len > npc(buf)->length - off) {
        throw new ::java::lang::IndexOutOfBoundsException();
    }
    while (len > 0) {
        auto nextChunk = ::java::lang::Math::min(available(), len);
        if(nextChunk == 0) {
            if(!hasNextRecord()) {
                throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Can't read the remaining "_j)->append(len)
                    ->append(u" bytes of the requested "_j)
                    ->append(origLen)
                    ->append(u" bytes. No further record exists."_j)->toString());
            } else {
                nextRecord();
                nextChunk = ::java::lang::Math::min(available(), len);
                /* assert((nextChunk > 0)) */ ;
            }
        }
        checkRecordPosition(nextChunk);
        if(isPlain) {
            npc(_dataInput)->readPlain(buf, off, nextChunk);
        } else {
            npc(_dataInput)->readFully(buf, off, nextChunk);
        }
        _currentDataOffset += nextChunk;
        off += nextChunk;
        len -= nextChunk;
    }
}

java::lang::String* org::apache::poi::hssf::record::RecordInputStream::readString()
{
    auto requestedLength = readUShort();
    auto compressFlag = readByte();
    return readStringCommon(requestedLength, compressFlag == 0);
}

java::lang::String* org::apache::poi::hssf::record::RecordInputStream::readUnicodeLEString(int32_t requestedLength)
{
    return readStringCommon(requestedLength, false);
}

java::lang::String* org::apache::poi::hssf::record::RecordInputStream::readCompressedUnicode(int32_t requestedLength)
{
    return readStringCommon(requestedLength, true);
}

java::lang::String* org::apache::poi::hssf::record::RecordInputStream::readStringCommon(int32_t requestedLength, bool pIsCompressedEncoding)
{
    if(requestedLength < 0 || requestedLength > 1048576) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Bad requested string length ("_j)->append(requestedLength)
            ->append(u")"_j)->toString());
    }
    auto buf = new ::char16_tArray(requestedLength);
    auto isCompressedEncoding = pIsCompressedEncoding;
    auto curLen = int32_t(0);
    while (true) {
        auto availableChars = isCompressedEncoding ? remaining() : remaining() / ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
        if(requestedLength - curLen <= availableChars) {
            while (curLen < requestedLength) {
                char16_t ch;
                if(isCompressedEncoding) {
                    ch = static_cast< char16_t >(readUByte());
                } else {
                    ch = static_cast< char16_t >(readShort());
                }
                (*buf)[curLen] = ch;
                curLen++;
            }
            return new ::java::lang::String(buf);
        }
        while (availableChars > 0) {
            char16_t ch;
            if(isCompressedEncoding) {
                ch = static_cast< char16_t >(readUByte());
            } else {
                ch = static_cast< char16_t >(readShort());
            }
            (*buf)[curLen] = ch;
            curLen++;
            availableChars--;
        }
        if(!isContinueNext()) {
            throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expected to find a ContinueRecord in order to read remaining "_j)->append((requestedLength - curLen))
                ->append(u" of "_j)
                ->append(requestedLength)
                ->append(u" chars"_j)->toString());
        }
        if(remaining() != 0) {
            throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Odd number of bytes("_j)->append(remaining())
                ->append(u") left behind"_j)->toString());
        }
        nextRecord();
        auto compressFlag = readByte();
        /* assert((compressFlag == 0 || compressFlag == 1)) */ ;
        isCompressedEncoding = (compressFlag == 0);
    }
}

int8_tArray* org::apache::poi::hssf::record::RecordInputStream::readRemainder()
{
    auto size = remaining();
    if(size == 0) {
        return EMPTY_BYTE_ARRAY_;
    }
    auto result = new ::int8_tArray(size);
    readFully(result);
    return result;
}

int8_tArray* org::apache::poi::hssf::record::RecordInputStream::readAllContinuedRemainder()
{
    auto out = new ::java::io::ByteArrayOutputStream(int32_t(2) * MAX_RECORD_DATA_SIZE);
    while (true) {
        auto b = readRemainder();
        npc(out)->write(b, int32_t(0), npc(b)->length);
        if(!isContinueNext()) {
            break;
        }
        nextRecord();
    }
    return npc(out)->toByteArray_();
}

int32_t org::apache::poi::hssf::record::RecordInputStream::remaining()
{
    if(_currentDataLength == DATA_LEN_NEEDS_TO_BE_READ) {
        return 0;
    }
    return _currentDataLength - _currentDataOffset;
}

bool org::apache::poi::hssf::record::RecordInputStream::isContinueNext()
{
    if(_currentDataLength != DATA_LEN_NEEDS_TO_BE_READ && _currentDataOffset != _currentDataLength) {
        throw new ::java::lang::IllegalStateException(u"Should never be called before end of current record"_j);
    }
    if(!hasNextRecord()) {
        return false;
    }
    return _nextSid == ContinueRecord::sid;
}

int32_t org::apache::poi::hssf::record::RecordInputStream::getNextSid()
{
    return _nextSid;
}

void org::apache::poi::hssf::record::RecordInputStream::mark(int32_t readlimit)
{
    npc((java_cast< ::java::io::InputStream* >(_dataInput)))->mark(readlimit);
    _markedDataOffset = _currentDataOffset;
}

void org::apache::poi::hssf::record::RecordInputStream::reset() /* throws(IOException) */
{
    npc((java_cast< ::java::io::InputStream* >(_dataInput)))->reset();
    _currentDataOffset = _markedDataOffset;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RecordInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordInputStream", 44);
    return c;
}

void org::apache::poi::hssf::record::RecordInputStream::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_BYTE_ARRAY_ = (new ::int8_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::RecordInputStream::getClass0()
{
    return class_();
}

