// Generated from /POI/java/org/apache/poi/hssf/record/ExternSheetRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::ExternSheetRecord_RefSubRecord final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(6) };

private:
    int32_t _extBookIndex {  };
    int32_t _firstSheetIndex {  };
    int32_t _lastSheetIndex {  };

public:
    void adjustIndex(int32_t offset);
protected:
    void ctor(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex);
    void ctor(RecordInputStream* in);

public:
    int32_t getExtBookIndex();
    int32_t getFirstSheetIndex();
    int32_t getLastSheetIndex();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    ExternSheetRecord_RefSubRecord(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex);
    ExternSheetRecord_RefSubRecord(RecordInputStream* in);
protected:
    ExternSheetRecord_RefSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExternSheetRecord;
};
