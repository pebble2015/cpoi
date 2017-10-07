// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.java

#pragma once

#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>

struct default_init_tag;

class org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::filesystem::POIFSWriterListener
{

public:
    typedef ::java::lang::Object super;
    void processPOIFSWriterEvent(::org::apache::poi::poifs::filesystem::POIFSWriterEvent* event) override;

    // Generated
    ChunkedCipherOutputStream_EncryptedPackageWriter(ChunkedCipherOutputStream *ChunkedCipherOutputStream_this);
protected:
    ChunkedCipherOutputStream_EncryptedPackageWriter(ChunkedCipherOutputStream *ChunkedCipherOutputStream_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ChunkedCipherOutputStream *ChunkedCipherOutputStream_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class ChunkedCipherOutputStream;
};
