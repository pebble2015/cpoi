// Generated from /POI/java/org/apache/poi/poifs/nio/FileBackedDataSource.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/security/PrivilegedAction.hpp>
#include <java/lang/Void.hpp>

struct default_init_tag;

class poi::poifs::nio::FileBackedDataSource_unmap_1
    : public virtual ::java::lang::Object
    , public virtual ::java::security::PrivilegedAction
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::Void* run() override;

    // Generated
    FileBackedDataSource_unmap_1(::java::nio::ByteBuffer* buffer);
    static ::java::lang::Class *class_();
    ::java::nio::ByteBuffer* buffer;

private:
    virtual ::java::lang::Class* getClass0();
    friend class FileBackedDataSource;
};
