// Generated from /POI/java/org/apache/poi/hssf/record/MulRKRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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
typedef ::SubArray< ::org::apache::poi::hssf::record::MulRKRecord_RkRec, ::java::lang::ObjectArray > MulRKRecord_RkRecArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::MulRKRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(189) };

private:
    int32_t field_1_row {  };
    int16_t field_2_first_col {  };
    MulRKRecord_RkRecArray* field_3_rks {  };
    int16_t field_4_last_col {  };

public:
    int32_t getRow();
    int16_t getFirstColumn();
    int16_t getLastColumn();
    int32_t getNumColumns();
    int16_t getXFAt(int32_t coffset);
    double getRKNumberAt(int32_t coffset);
protected:
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    int16_t getSid() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

    // Generated

public:
    MulRKRecord(RecordInputStream* in);
protected:
    MulRKRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class MulRKRecord_RkRec;
};
