// Generated from /POI/java/org/apache/poi/poifs/storage/RawDataBlockList.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/BlockListImpl.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::RawDataBlockList
    : public BlockListImpl
{

public:
    typedef BlockListImpl super;
protected:
    void ctor(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize) /* throws(IOException) */;

    // Generated

public:
    RawDataBlockList(::java::io::InputStream* stream, ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    RawDataBlockList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
