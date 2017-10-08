// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/BiffHeaderInput.hpp>

struct default_init_tag;

class poi::hssf::record::RecordInputStream_SimpleHeaderInput final
    : public virtual ::java::lang::Object
    , public BiffHeaderInput
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::util::LittleEndianInput* _lei {  };
protected:
    void ctor(::java::io::InputStream* in);

public:
    int32_t available() override;
    int32_t readDataSize() override;
    int32_t readRecordSID() override;

    // Generated
    RecordInputStream_SimpleHeaderInput(::java::io::InputStream* in);
protected:
    RecordInputStream_SimpleHeaderInput(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordInputStream;
    friend class RecordInputStream_LeftoverDataException;
};
