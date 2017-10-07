// Generated from /POI/java/org/apache/poi/poifs/storage/BigBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::BigBlock
    : public virtual ::java::lang::Object
    , public virtual BlockWritable
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

public: /* protected */
    virtual void doWriteData(::java::io::OutputStream* stream, ::int8_tArray* data) /* throws(IOException) */;

public: /* package */
    virtual void writeData(::java::io::OutputStream* stream) /* throws(IOException) */ = 0;

public:
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated

public: /* protected */
    BigBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    BigBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
