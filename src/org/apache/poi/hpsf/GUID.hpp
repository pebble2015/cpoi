// Generated from /POI/java/org/apache/poi/hpsf/GUID.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::GUID
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _data1 {  };
    int16_t _data2 {  };
    int16_t _data3 {  };
    int64_t _data4 {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated
    GUID();
protected:
    GUID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
