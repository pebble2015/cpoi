// Generated from /POI/java/org/apache/poi/util/TempFile.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::TempFile final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static TempFileCreationStrategy* strategy_;
    static ::java::lang::String* JAVA_IO_TMPDIR_;
protected:
    void ctor();

public:
    static void setTempFileCreationStrategy(TempFileCreationStrategy* strategy);
    static ::java::io::File* createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */;
    static ::java::io::File* createTempDirectory(::java::lang::String* name) /* throws(IOException) */;

    // Generated

private:
    TempFile();
protected:
    TempFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static TempFileCreationStrategy*& strategy();

public:
    static ::java::lang::String*& JAVA_IO_TMPDIR();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TempFile_DefaultTempFileCreationStrategy;
};
