// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class javax::crypto::CipherInputStream
    : public ::java::io::FilterInputStream
{

public:
    typedef ::java::io::FilterInputStream super;

private:
    Cipher* cipher {  };
    bool closed {  };
    bool done {  };
    ::int8_tArray* ibuffer {  };
    ::java::io::InputStream* input {  };
    ::int8_tArray* obuffer {  };
    int32_t ofinish {  };
    int32_t ostart {  };

protected:
    void ctor(::java::io::InputStream* arg0);
    void ctor(::java::io::InputStream* arg0, Cipher* arg1);

public:
    int32_t available() override;
    void close() override;
    /*int32_t getMoreData(); (private) */
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::int8_tArray* arg0) override;
    int32_t read(::int8_tArray* arg0, int32_t arg1, int32_t arg2) override;
    int64_t skip(int64_t arg0) override;

    // Generated

public: /* protected */
    CipherInputStream(::java::io::InputStream* arg0);

public:
    CipherInputStream(::java::io::InputStream* arg0, Cipher* arg1);
protected:
    CipherInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
