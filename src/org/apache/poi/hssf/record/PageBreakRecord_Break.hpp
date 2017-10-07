// Generated from /POI/java/org/apache/poi/hssf/record/PageBreakRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::PageBreakRecord_Break final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(6) };
    int32_t main {  };
    int32_t subFrom {  };
    int32_t subTo {  };
protected:
    void ctor(int32_t main, int32_t subFrom, int32_t subTo);
    void ctor(RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    PageBreakRecord_Break(int32_t main, int32_t subFrom, int32_t subTo);
    PageBreakRecord_Break(RecordInputStream* in);
protected:
    PageBreakRecord_Break(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PageBreakRecord;
};
