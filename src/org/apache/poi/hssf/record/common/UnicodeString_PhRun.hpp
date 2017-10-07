// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::common::UnicodeString_PhRun
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t phoneticTextFirstCharacterOffset {  };
    int32_t realTextFirstCharacterOffset {  };
    int32_t realTextLength {  };
protected:
    void ctor(int32_t phoneticTextFirstCharacterOffset, int32_t realTextFirstCharacterOffset, int32_t realTextLength);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

private:
    void serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out);

    // Generated

public:
    UnicodeString_PhRun(int32_t phoneticTextFirstCharacterOffset, int32_t realTextFirstCharacterOffset, int32_t realTextLength);

private:
    UnicodeString_PhRun(::org::apache::poi::util::LittleEndianInput* in);
protected:
    UnicodeString_PhRun(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class UnicodeString;
    friend class UnicodeString_FormatRun;
    friend class UnicodeString_ExtRst;
};
