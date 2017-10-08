// Generated from /POI/java/org/apache/poi/hpsf/Array.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::Array__ArrayDimension
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int64_t _size {  };
    int32_t _indexOffset {  };

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated

public:
    Array__ArrayDimension();
protected:
    Array__ArrayDimension(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Array_;
    friend class Array__ArrayHeader;
};
