// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::io::File_TempDirectory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::security::SecureRandom* random_;
    static File* tmpdir_;

    /*void ctor(); (private) */

public: /* package */
    static File* generateFile(::java::lang::String* prefix, ::java::lang::String* suffix, File* dir);
    static File* location();

    // Generated

public:
    File_TempDirectory();
protected:
    File_TempDirectory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::security::SecureRandom*& random();
    static File*& tmpdir();
    virtual ::java::lang::Class* getClass0();
};
