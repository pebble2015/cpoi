// Generated from /POI/java/org/apache/poi/hssf/record/NoteRecord.java
#include <org/apache/poi/hssf/record/NoteRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::NoteRecord, StandardRecordArray, ::java::lang::CloneableArray > NoteRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::NoteRecord::NoteRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::NoteRecord::NoteRecord() 
    : NoteRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::NoteRecord::NoteRecord(RecordInputStream* in) 
    : NoteRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::NoteRecord::sid;

org::apache::poi::hssf::record::NoteRecordArray*& org::apache::poi::hssf::record::NoteRecord::EMPTY_ARRAY()
{
    clinit();
    return EMPTY_ARRAY_;
}
org::apache::poi::hssf::record::NoteRecordArray* org::apache::poi::hssf::record::NoteRecord::EMPTY_ARRAY_;

constexpr int16_t org::apache::poi::hssf::record::NoteRecord::NOTE_HIDDEN;

constexpr int16_t org::apache::poi::hssf::record::NoteRecord::NOTE_VISIBLE;

java::lang::Byte*& org::apache::poi::hssf::record::NoteRecord::DEFAULT_PADDING()
{
    clinit();
    return DEFAULT_PADDING_;
}
java::lang::Byte* org::apache::poi::hssf::record::NoteRecord::DEFAULT_PADDING_;

void org::apache::poi::hssf::record::NoteRecord::ctor()
{
    super::ctor();
    field_6_author = u""_j;
    field_3_flags = 0;
    field_7_padding = DEFAULT_PADDING_;
}

int16_t org::apache::poi::hssf::record::NoteRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::NoteRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row = npc(in)->readUShort();
    field_2_col = npc(in)->readShort();
    field_3_flags = npc(in)->readShort();
    field_4_shapeid = npc(in)->readUShort();
    int32_t length = npc(in)->readShort();
    field_5_hasMultibyte = npc(in)->readByte() != 0;
    if(field_5_hasMultibyte) {
        field_6_author = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, length);
    } else {
        field_6_author = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, length);
    }
    if(npc(in)->available() == 1) {
        field_7_padding = ::java::lang::Byte::valueOf(npc(in)->readByte());
    } else if(npc(in)->available() == 2 && length == 0) {
        field_7_padding = ::java::lang::Byte::valueOf(npc(in)->readByte());
        npc(in)->readByte();
    }
}

void org::apache::poi::hssf::record::NoteRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_row);
    npc(out)->writeShort(field_2_col);
    npc(out)->writeShort(field_3_flags);
    npc(out)->writeShort(field_4_shapeid);
    npc(out)->writeShort(npc(field_6_author)->length());
    npc(out)->writeByte(field_5_hasMultibyte ? int32_t(1) : int32_t(0));
    if(field_5_hasMultibyte) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(field_6_author, out);
    } else {
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_6_author, out);
    }
    if(field_7_padding != nullptr) {
        npc(out)->writeByte(npc(field_7_padding)->intValue());
    }
}

int32_t org::apache::poi::hssf::record::NoteRecord::getDataSize()
{
    return int32_t(11) + npc(field_6_author)->length() * (field_5_hasMultibyte ? int32_t(2) : int32_t(1)) + (field_7_padding == nullptr ? int32_t(0) : int32_t(1));
}

java::lang::String* org::apache::poi::hssf::record::NoteRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[NOTE]\n"_j);
    npc(npc(npc(buffer)->append(u"    .row    = "_j))->append(field_1_row))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .col    = "_j))->append(field_2_col))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .flags  = "_j))->append(static_cast< int32_t >(field_3_flags)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .shapeid= "_j))->append(field_4_shapeid))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .author = "_j))->append(field_6_author))->append(u"\n"_j);
    npc(buffer)->append(u"[/NOTE]\n"_j);
    return npc(buffer)->toString();
}

int32_t org::apache::poi::hssf::record::NoteRecord::getRow()
{
    return field_1_row;
}

void org::apache::poi::hssf::record::NoteRecord::setRow(int32_t row)
{
    field_1_row = row;
}

int32_t org::apache::poi::hssf::record::NoteRecord::getColumn()
{
    return field_2_col;
}

void org::apache::poi::hssf::record::NoteRecord::setColumn(int32_t col)
{
    field_2_col = col;
}

int16_t org::apache::poi::hssf::record::NoteRecord::getFlags()
{
    return field_3_flags;
}

void org::apache::poi::hssf::record::NoteRecord::setFlags(int16_t flags)
{
    field_3_flags = flags;
}

bool org::apache::poi::hssf::record::NoteRecord::authorIsMultibyte()
{
    return field_5_hasMultibyte;
}

int32_t org::apache::poi::hssf::record::NoteRecord::getShapeId()
{
    return field_4_shapeid;
}

void org::apache::poi::hssf::record::NoteRecord::setShapeId(int32_t id)
{
    field_4_shapeid = id;
}

java::lang::String* org::apache::poi::hssf::record::NoteRecord::getAuthor()
{
    return field_6_author;
}

void org::apache::poi::hssf::record::NoteRecord::setAuthor(::java::lang::String* author)
{
    field_6_author = author;
    field_5_hasMultibyte = ::org::apache::poi::util::StringUtil::hasMultibyte(author);
}

org::apache::poi::hssf::record::NoteRecord* org::apache::poi::hssf::record::NoteRecord::clone()
{
    auto rec = new NoteRecord();
    npc(rec)->field_1_row = field_1_row;
    npc(rec)->field_2_col = field_2_col;
    npc(rec)->field_3_flags = field_3_flags;
    npc(rec)->field_4_shapeid = field_4_shapeid;
    npc(rec)->field_6_author = field_6_author;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::NoteRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NoteRecord", 37);
    return c;
}

void org::apache::poi::hssf::record::NoteRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ARRAY_ = (new ::org::apache::poi::hssf::record::NoteRecordArray({}));
        DEFAULT_PADDING_ = ::java::lang::Byte::valueOf(static_cast< int8_t >(int32_t(0)));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::NoteRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::NoteRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::NoteRecord::getClass0()
{
    return class_();
}

