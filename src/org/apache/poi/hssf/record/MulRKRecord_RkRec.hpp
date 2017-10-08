// Generated from /POI/java/org/apache/poi/hssf/record/MulRKRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::MulRKRecord_RkRec, ::java::lang::ObjectArray > MulRKRecord_RkRecArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::MulRKRecord_RkRec final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(6) };
    int16_t xf {  };
    int32_t rk {  };
protected:
    void ctor(RecordInputStream* in);

public:
    static MulRKRecord_RkRecArray* parseRKs(RecordInputStream* in);

    // Generated

private:
    MulRKRecord_RkRec(RecordInputStream* in);
protected:
    MulRKRecord_RkRec(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class MulRKRecord;
};
