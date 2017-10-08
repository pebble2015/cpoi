// Generated from /POI/java/org/apache/poi/poifs/common/POIFSBigBlockSize.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::poifs::common::POIFSBigBlockSize final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t bigBlockSize {  };
    int16_t headerValue {  };
protected:
    void ctor(int32_t bigBlockSize, int16_t headerValue);

public:
    int32_t getBigBlockSize();
    int16_t getHeaderValue();
    int32_t getPropertiesPerBlock();
    int32_t getBATEntriesPerBlock();
    int32_t getXBATEntriesPerBlock();
    int32_t getNextXBATChainOffset();

    // Generated

public: /* protected */
    POIFSBigBlockSize(int32_t bigBlockSize, int16_t headerValue);
protected:
    POIFSBigBlockSize(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
