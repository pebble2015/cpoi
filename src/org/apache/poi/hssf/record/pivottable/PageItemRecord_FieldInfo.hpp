// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/PageItemRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::pivottable::PageItemRecord_FieldInfo final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(6) };

private:
    int32_t _isxvi {  };
    int32_t _isxvd {  };
    int32_t _idObj {  };
protected:
    void ctor(::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::poi::util::LittleEndianOutput* out);

public:
    void appendDebugInfo(::java::lang::StringBuffer* sb);

    // Generated
    PageItemRecord_FieldInfo(::poi::hssf::record::RecordInputStream* in);
protected:
    PageItemRecord_FieldInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PageItemRecord;
};
