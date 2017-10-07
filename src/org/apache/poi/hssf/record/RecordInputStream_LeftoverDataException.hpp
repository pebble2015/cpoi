// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RecordInputStream_LeftoverDataException final
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(int32_t sid, int32_t remainingByteCount);

private:
    static ::java::lang::String* getRecordName(int32_t sid);

    // Generated

public:
    RecordInputStream_LeftoverDataException(int32_t sid, int32_t remainingByteCount);
protected:
    RecordInputStream_LeftoverDataException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordInputStream;
    friend class RecordInputStream_SimpleHeaderInput;
};
