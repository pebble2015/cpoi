// Generated from /POI/java/org/apache/poi/hpsf/TypedPropertyValue.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::TypedPropertyValue
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    int32_t _type {  };
    ::java::lang::Object* _value {  };
protected:
    void ctor(int32_t type, ::java::lang::Object* value);

public: /* package */
    virtual ::java::lang::Object* getValue();
    virtual void read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual void readValue(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);
    static void skipPadding(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated
    TypedPropertyValue(int32_t type, ::java::lang::Object* value);
protected:
    TypedPropertyValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
