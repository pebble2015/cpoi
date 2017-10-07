// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <java/io/FilterOutputStream.hpp>

struct default_init_tag;

class javax::crypto::CipherOutputStream
    : public ::java::io::FilterOutputStream
{

public:
    typedef ::java::io::FilterOutputStream super;

private:
    Cipher* cipher {  };
    bool closed {  };
    ::int8_tArray* ibuffer {  };
    ::int8_tArray* obuffer {  };
    ::java::io::OutputStream* output {  };

protected:
    void ctor(::java::io::OutputStream* arg0);
    void ctor(::java::io::OutputStream* arg0, Cipher* arg1);

public:
    void close() override;
    void flush() override;
    void write(int32_t arg0) override;
    void write(::int8_tArray* arg0) override;
    void write(::int8_tArray* arg0, int32_t arg1, int32_t arg2) override;

    // Generated

public: /* protected */
    CipherOutputStream(::java::io::OutputStream* arg0);

public:
    CipherOutputStream(::java::io::OutputStream* arg0, Cipher* arg1);
protected:
    CipherOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
