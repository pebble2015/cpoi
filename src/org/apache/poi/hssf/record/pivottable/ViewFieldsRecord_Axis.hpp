// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::pivottable::ViewFieldsRecord_Axis final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t NO_AXIS { int32_t(0) };
    static constexpr int32_t ROW { int32_t(1) };
    static constexpr int32_t COLUMN { int32_t(2) };
    static constexpr int32_t PAGE { int32_t(4) };
    static constexpr int32_t DATA { int32_t(8) };

    // Generated
    ViewFieldsRecord_Axis();
protected:
    ViewFieldsRecord_Axis(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ViewFieldsRecord;
};
