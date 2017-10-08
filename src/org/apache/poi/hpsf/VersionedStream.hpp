// Generated from /POI/java/org/apache/poi/hpsf/VersionedStream.java

#pragma once

#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::VersionedStream
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    GUID* _versionGuid {  };
    IndirectPropertyName* _streamName {  };
protected:
    void ctor();

public: /* package */
    virtual void read(::poi::util::LittleEndianByteArrayInputStream* lei);

    // Generated
    VersionedStream();
protected:
    VersionedStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
