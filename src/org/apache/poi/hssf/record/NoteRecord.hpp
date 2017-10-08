// Generated from /POI/java/org/apache/poi/hssf/record/NoteRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::NoteRecord, StandardRecordArray, ::java::lang::CloneableArray > NoteRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::NoteRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(28) };

private:
    static NoteRecordArray* EMPTY_ARRAY_;

public:
    static constexpr int16_t NOTE_HIDDEN { int16_t(0) };
    static constexpr int16_t NOTE_VISIBLE { int16_t(2) };

private:
    static ::java::lang::Byte* DEFAULT_PADDING_;
    int32_t field_1_row {  };
    int32_t field_2_col {  };
    int16_t field_3_flags {  };
    int32_t field_4_shapeid {  };
    bool field_5_hasMultibyte {  };
    ::java::lang::String* field_6_author {  };
    ::java::lang::Byte* field_7_padding {  };
protected:
    void ctor();

public:
    int16_t getSid() override;
protected:
    void ctor(RecordInputStream* in);

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    int32_t getRow();
    void setRow(int32_t row);
    int32_t getColumn();
    void setColumn(int32_t col);
    int16_t getFlags();
    void setFlags(int16_t flags);

public: /* protected */
    bool authorIsMultibyte();

public:
    int32_t getShapeId();
    void setShapeId(int32_t id);
    ::java::lang::String* getAuthor();
    void setAuthor(::java::lang::String* author);
    NoteRecord* clone() override;

    // Generated
    NoteRecord();
    NoteRecord(RecordInputStream* in);
protected:
    NoteRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();
    static NoteRecordArray*& EMPTY_ARRAY();

private:
    static ::java::lang::Byte*& DEFAULT_PADDING();
    virtual ::java::lang::Class* getClass0();
};
