// Generated from /POI/java/org/apache/poi/hpsf/ClipboardData.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::ClipboardData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    int32_t _format {  };
    ::int8_tArray* _value {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual ::int8_tArray* getValue();
    virtual ::int8_tArray* toByteArray_();
    virtual void setValue(::int8_tArray* value);

    // Generated
    ClipboardData();
protected:
    ClipboardData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
