// Generated from /POI/java/org/apache/poi/hssf/record/DConRefRecord.java
#include <org/apache/poi/hssf/record/DConRefRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::DConRefRecord::DConRefRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DConRefRecord::DConRefRecord(::int8_tArray* data) 
    : DConRefRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

org::apache::poi::hssf::record::DConRefRecord::DConRefRecord(RecordInputStream* inStream) 
    : DConRefRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(inStream);
}

constexpr int16_t org::apache::poi::hssf::record::DConRefRecord::sid;

void org::apache::poi::hssf::record::DConRefRecord::ctor(::int8_tArray* data)
{
    super::ctor();
    auto offset = int32_t(0);
    if(!(::org::apache::poi::util::LittleEndian::getShort(data, offset) == DConRefRecord::sid))
        throw new ::org::apache::poi::util::RecordFormatException(u"incompatible sid."_j);

    offset += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    offset += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    firstRow = ::org::apache::poi::util::LittleEndian::getUShort(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    lastRow = ::org::apache::poi::util::LittleEndian::getUShort(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    firstCol = ::org::apache::poi::util::LittleEndian::getUByte(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
    lastCol = ::org::apache::poi::util::LittleEndian::getUByte(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
    charCount = ::org::apache::poi::util::LittleEndian::getUShort(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::SHORT_SIZE;
    if(charCount < 2)
        throw new ::org::apache::poi::util::RecordFormatException(u"Character count must be >= 2"_j);

    charType = ::org::apache::poi::util::LittleEndian::getUByte(data, offset);
    offset += ::org::apache::poi::util::LittleEndian::BYTE_SIZE;
    auto byteLength = charCount * ((charType & int32_t(1)) + int32_t(1));
    path = ::org::apache::poi::util::LittleEndian::getByteArray_(data, offset, byteLength);
    offset += byteLength;
    if((*path)[int32_t(0)] == 2)
        _unused = ::org::apache::poi::util::LittleEndian::getByteArray_(data, offset, (charType + int32_t(1)));

}

void org::apache::poi::hssf::record::DConRefRecord::ctor(RecordInputStream* inStream)
{
    super::ctor();
    if(npc(inStream)->getSid() != sid)
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Wrong sid: "_j)->append(npc(inStream)->getSid())->toString());

    firstRow = npc(inStream)->readUShort();
    lastRow = npc(inStream)->readUShort();
    firstCol = npc(inStream)->readUByte();
    lastCol = npc(inStream)->readUByte();
    charCount = npc(inStream)->readUShort();
    charType = npc(inStream)->readUByte() & int32_t(1);
    auto byteLength = charCount * (charType + int32_t(1));
    path = new ::int8_tArray(byteLength);
    npc(inStream)->readFully(path);
    if((*path)[int32_t(0)] == 2)
        _unused = npc(inStream)->readRemainder();

}

int32_t org::apache::poi::hssf::record::DConRefRecord::getDataSize()
{
    auto sz = int32_t(9) + npc(path)->length;
    if((*path)[int32_t(0)] == 2)
        sz += npc(_unused)->length;

    return sz;
}

void org::apache::poi::hssf::record::DConRefRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(firstRow);
    npc(out)->writeShort(lastRow);
    npc(out)->writeByte(firstCol);
    npc(out)->writeByte(lastCol);
    npc(out)->writeShort(charCount);
    npc(out)->writeByte(charType);
    npc(out)->write(path);
    if((*path)[int32_t(0)] == 2)
        npc(out)->write(_unused);

}

int16_t org::apache::poi::hssf::record::DConRefRecord::getSid()
{
    return sid;
}

int32_t org::apache::poi::hssf::record::DConRefRecord::getFirstColumn()
{
    return firstCol;
}

int32_t org::apache::poi::hssf::record::DConRefRecord::getFirstRow()
{
    return firstRow;
}

int32_t org::apache::poi::hssf::record::DConRefRecord::getLastColumn()
{
    return lastCol;
}

int32_t org::apache::poi::hssf::record::DConRefRecord::getLastRow()
{
    return lastRow;
}

java::lang::String* org::apache::poi::hssf::record::DConRefRecord::toString()
{
    auto b = new ::java::lang::StringBuilder();
    npc(b)->append(u"[DCONREF]\n"_j);
    npc(b)->append(u"    .ref\n"_j);
    npc(npc(npc(b)->append(u"        .firstrow   = "_j))->append(firstRow))->append(u"\n"_j);
    npc(npc(npc(b)->append(u"        .lastrow    = "_j))->append(lastRow))->append(u"\n"_j);
    npc(npc(npc(b)->append(u"        .firstcol   = "_j))->append(firstCol))->append(u"\n"_j);
    npc(npc(npc(b)->append(u"        .lastcol    = "_j))->append(lastCol))->append(u"\n"_j);
    npc(npc(npc(b)->append(u"    .cch            = "_j))->append(charCount))->append(u"\n"_j);
    npc(b)->append(u"    .stFile\n"_j);
    npc(npc(npc(b)->append(u"        .h          = "_j))->append(charType))->append(u"\n"_j);
    npc(npc(npc(b)->append(u"        .rgb        = "_j))->append(getReadablePath()))->append(u"\n"_j);
    npc(b)->append(u"[/DCONREF]\n"_j);
    return npc(b)->toString();
}

int8_tArray* org::apache::poi::hssf::record::DConRefRecord::getPath()
{
    return ::java::util::Arrays::copyOf(path, npc(path)->length);
}

java::lang::String* org::apache::poi::hssf::record::DConRefRecord::getReadablePath()
{
    if(path != nullptr) {
        auto offset = int32_t(1);
        while ((*path)[offset] < 32 && offset < npc(path)->length) {
            offset++;
        }
        auto out = new ::java::lang::String(::java::util::Arrays::copyOfRange(path, offset, npc(path)->length), ::org::apache::poi::util::StringUtil::UTF8());
        out = npc(out)->replaceAll(u"\u0003"_j, u"/"_j);
        return out;
    }
    return nullptr;
}

bool org::apache::poi::hssf::record::DConRefRecord::isExternalRef()
{
    if((*path)[int32_t(0)] == 1)
        return true;

    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DConRefRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DConRefRecord", 40);
    return c;
}

int32_t org::apache::poi::hssf::record::DConRefRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DConRefRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DConRefRecord::getClass0()
{
    return class_();
}

