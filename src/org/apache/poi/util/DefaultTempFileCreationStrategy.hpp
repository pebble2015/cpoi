// Generated from /POI/java/org/apache/poi/util/DefaultTempFileCreationStrategy.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/TempFileCreationStrategy.hpp>

struct default_init_tag;

class poi::util::DefaultTempFileCreationStrategy
    : public virtual ::java::lang::Object
    , public virtual TempFileCreationStrategy
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* JAVA_IO_TMPDIR_;
    static ::java::lang::String* POIFILES_;
    static ::java::lang::String* KEEP_FILES_;
    static ::java::security::SecureRandom* random_;
    ::java::io::File* dir {  };
protected:
    void ctor();
    void ctor(::java::io::File* dir);

private:
    void createPOIFilesDirectory() /* throws(IOException) */;
    void createTempDirectory(::java::io::File* directory) /* throws(IOException) */;

public:
    ::java::io::File* createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */ override;
    ::java::io::File* createTempDirectory(::java::lang::String* prefix) /* throws(IOException) */ override;

    // Generated
    DefaultTempFileCreationStrategy();
    DefaultTempFileCreationStrategy(::java::io::File* dir);
protected:
    DefaultTempFileCreationStrategy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& JAVA_IO_TMPDIR();

public: /* package */
    static ::java::lang::String*& POIFILES();

public:
    static ::java::lang::String*& KEEP_FILES();

private:
    static ::java::security::SecureRandom*& random();
    virtual ::java::lang::Class* getClass0();
};
