// Generated from /POI/java/org/apache/poi/hpsf/Blob.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::Blob
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* _value {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::org::apache::poi::util::LittleEndianInput* lei);

    // Generated
    Blob();
protected:
    Blob(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
