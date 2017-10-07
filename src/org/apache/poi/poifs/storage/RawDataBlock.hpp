// Generated from /POI/java/org/apache/poi/poifs/storage/RawDataBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::RawDataBlock
    : public virtual ::java::lang::Object
    , public virtual ListManagedBlock
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* _data {  };
    bool _eof {  };
    bool _hasData {  };
    static ::org::apache::poi::util::POILogger* log_;
protected:
    void ctor(::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::io::InputStream* stream, int32_t blockSize) /* throws(IOException) */;

public:
    virtual bool eof();
    virtual bool hasData();
    ::java::lang::String* toString() override;
    ::int8_tArray* getData() /* throws(IOException) */ override;
    virtual int32_t getBigBlockSize();

    // Generated
    RawDataBlock(::java::io::InputStream* stream);
    RawDataBlock(::java::io::InputStream* stream, int32_t blockSize);
protected:
    RawDataBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::org::apache::poi::util::POILogger*& log();

private:
    virtual ::java::lang::Class* getClass0();
};
