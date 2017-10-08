// Generated from /POI/java/org/apache/poi/hssf/record/ObjRecord.java
#include <org/apache/poi/hssf/record/ObjRecord.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
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

poi::hssf::record::ObjRecord::ObjRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ObjRecord::ObjRecord() 
    : ObjRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::ObjRecord::ObjRecord(RecordInputStream* in) 
    : ObjRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::ObjRecord::sid;

constexpr int32_t poi::hssf::record::ObjRecord::NORMAL_PAD_ALIGNMENT;

int32_t& poi::hssf::record::ObjRecord::MAX_PAD_ALIGNMENT()
{
    clinit();
    return MAX_PAD_ALIGNMENT_;
}
int32_t poi::hssf::record::ObjRecord::MAX_PAD_ALIGNMENT_;

void poi::hssf::record::ObjRecord::ctor()
{
    super::ctor();
    subrecords = new ::java::util::ArrayList(int32_t(2));
    _uninterpretedData = nullptr;
}

void poi::hssf::record::ObjRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto subRecordData = npc(in)->readRemainder();
    if(::poi::util::LittleEndian::getUShort(subRecordData, 0) != CommonObjectDataSubRecord::sid) {
        _uninterpretedData = subRecordData;
        subrecords = nullptr;
        return;
    }
    subrecords = new ::java::util::ArrayList();
    auto bais = new ::java::io::ByteArrayInputStream(subRecordData);
    auto subRecStream = new ::poi::util::LittleEndianInputStream(bais);
    auto cmo = java_cast< CommonObjectDataSubRecord* >(SubRecord::createSubRecord(subRecStream, 0));
    npc(subrecords)->add(static_cast< ::java::lang::Object* >(cmo));
    while (true) {
        auto subRecord = SubRecord::createSubRecord(subRecStream, npc(cmo)->getObjectType());
        npc(subrecords)->add(static_cast< ::java::lang::Object* >(subRecord));
        if(npc(subRecord)->isTerminating()) {
            break;
        }
    }
    auto nRemainingBytes = npc(bais)->available();
    if(nRemainingBytes > 0) {
        _isPaddedToQuadByteMultiple = npc(subRecordData)->length % MAX_PAD_ALIGNMENT_ == 0;
        if(nRemainingBytes >= (_isPaddedToQuadByteMultiple ? MAX_PAD_ALIGNMENT_ : NORMAL_PAD_ALIGNMENT)) {
            if(!canPaddingBeDiscarded(subRecordData, nRemainingBytes)) {
                auto msg = ::java::lang::StringBuilder().append(u"Leftover "_j)->append(nRemainingBytes)
                    ->append(u" bytes in subrecord data "_j)
                    ->append(::poi::util::HexDump::toHex(subRecordData))->toString();
                throw new ::poi::util::RecordFormatException(msg);
            }
            _isPaddedToQuadByteMultiple = false;
        }
    } else {
        _isPaddedToQuadByteMultiple = false;
    }
    _uninterpretedData = nullptr;
}

bool poi::hssf::record::ObjRecord::canPaddingBeDiscarded(::int8_tArray* data, int32_t nRemainingBytes)
{
    clinit();
    for (auto i = npc(data)->length - nRemainingBytes; i < npc(data)->length; i++) {
        if((*data)[i] != 0) {
            return false;
        }
    }
    return true;
}

java::lang::String* poi::hssf::record::ObjRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[OBJ]\n"_j);
    if(subrecords != nullptr) {
        for (auto _i = npc(subrecords)->iterator(); _i->hasNext(); ) {
            SubRecord* record = java_cast< SubRecord* >(_i->next());
            {
                npc(npc(sb)->append(u"SUBRECORD: "_j))->append(static_cast< ::java::lang::Object* >(record));
            }
        }
    }
    npc(sb)->append(u"[/OBJ]\n"_j);
    return npc(sb)->toString();
}

int32_t poi::hssf::record::ObjRecord::getRecordSize()
{
    if(_uninterpretedData != nullptr) {
        return npc(_uninterpretedData)->length + int32_t(4);
    }
    auto size = int32_t(0);
    for (auto _i = npc(subrecords)->iterator(); _i->hasNext(); ) {
        SubRecord* record = java_cast< SubRecord* >(_i->next());
        {
            size += npc(record)->getDataSize() + int32_t(4);
        }
    }
    if(_isPaddedToQuadByteMultiple) {
        while (size % MAX_PAD_ALIGNMENT_ != 0) {
            size++;
        }
    } else {
        while (size % NORMAL_PAD_ALIGNMENT != 0) {
            size++;
        }
    }
    return size + int32_t(4);
}

int32_t poi::hssf::record::ObjRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    auto recSize = getRecordSize();
    auto dataSize = recSize - int32_t(4);
    auto out = new ::poi::util::LittleEndianByteArrayOutputStream(data, offset, recSize);
    npc(out)->writeShort(static_cast< int32_t >(sid));
    npc(out)->writeShort(dataSize);
    if(_uninterpretedData == nullptr) {
        for (auto i = int32_t(0); i < npc(subrecords)->size(); i++) {
            auto record = java_cast< SubRecord* >(npc(subrecords)->get(i));
            npc(record)->serialize(out);
        }
        auto expectedEndIx = offset + dataSize;
        while (npc(out)->getWriteIndex() < expectedEndIx) {
            npc(out)->writeByte(int32_t(0));
        }
    } else {
        npc(out)->write(_uninterpretedData);
    }
    return recSize;
}

int16_t poi::hssf::record::ObjRecord::getSid()
{
    return sid;
}

java::util::List* poi::hssf::record::ObjRecord::getSubRecords()
{
    return subrecords;
}

void poi::hssf::record::ObjRecord::clearSubRecords()
{
    npc(subrecords)->clear();
}

void poi::hssf::record::ObjRecord::addSubRecord(int32_t index, SubRecord* element)
{
    npc(subrecords)->add(index, element);
}

bool poi::hssf::record::ObjRecord::addSubRecord(SubRecord* o)
{
    return npc(subrecords)->add(static_cast< ::java::lang::Object* >(o));
}

poi::hssf::record::ObjRecord* poi::hssf::record::ObjRecord::clone()
{
    auto rec = new ObjRecord();
    for (auto _i = npc(subrecords)->iterator(); _i->hasNext(); ) {
        SubRecord* record = java_cast< SubRecord* >(_i->next());
        {
            npc(rec)->addSubRecord(npc(record)->clone());
        }
    }
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ObjRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ObjRecord", 36);
    return c;
}

void poi::hssf::record::ObjRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        MAX_PAD_ALIGNMENT_ = int32_t(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* poi::hssf::record::ObjRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::ObjRecord::getClass0()
{
    return class_();
}

