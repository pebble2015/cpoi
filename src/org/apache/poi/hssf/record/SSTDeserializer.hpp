// Generated from /POI/java/org/apache/poi/hssf/record/SSTDeserializer.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::SSTDeserializer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* logger_;
    ::poi::util::IntMapper* strings {  };
protected:
    void ctor(::poi::util::IntMapper* strings);

public:
    virtual void manufactureStrings(int32_t stringCount, RecordInputStream* in);
    static void addToStringTable(::poi::util::IntMapper* strings, ::poi::hssf::record::common::UnicodeString* string);

    // Generated
    SSTDeserializer(::poi::util::IntMapper* strings);
protected:
    SSTDeserializer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
