// Generated from /POI/java/org/apache/poi/hssf/record/NoteStructureSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::NoteStructureSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(13) };

private:
    static constexpr int32_t ENCODED_SIZE { int32_t(22) };
    ::int8_tArray* reserved {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    NoteStructureSubRecord* clone() override;

    // Generated
    NoteStructureSubRecord();
    NoteStructureSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    NoteStructureSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
